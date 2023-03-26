#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include <svdpi.h>
#include "verilated.h"
#include "Vtop__Dpi.h"
#include <verilated_dpi.h>
#include <verilated_vcd_c.h>

int stop_status = 0;
#define CONFIG_ITRACE 1
#define MAX_SIM_TIME 5
vluint64_t sim_time = 0;
int cpu_stop = 0;
Vtop* top;
VerilatedVcdC* tfp;
VerilatedContext* contextp;

void cpu_exec(int n);

//===========================mem=========================
typedef uint64_t paddr_t;
#define PG_ALIGN __attribute((aligned(4096)))
#define CONFIG_MSIZE 0x8000000
#define CONFIG_MBASE 0x80000000
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {0};
uint8_t* guest_to_host(paddr_t paddr) { return paddr - CONFIG_MBASE + pmem; }
//paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

static inline uint32_t host_read(void *addr) {
  return *(uint64_t *)addr;
}

static uint32_t pmem_read(paddr_t addr) {
  uint32_t ret = host_read(guest_to_host(addr));
  return ret;
}

void ebreak_handle(int flag){
  cpu_stop = flag;
}

//==========================sdb============================
uint64_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}


static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}

static int cmd_q(char *args) {
  cpu_stop = 1;
  return -1;
}

static int cmd_si(char *args){
  char *arg = strtok(NULL, " ");
  if (arg == NULL){
    cpu_exec(1);
    return 0;
  }
  int step;
  sscanf(arg,"%d",&step);
  if (step <= 0){
    return 0;
  }
  cpu_exec(step); 
  return 0;
}

static int cmd_info(char *args){
  int i;
  for (i = 0; i < 32; i++) {
    printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
  }
  return 0;
}

static int cmd_x(char *args){
  char *num = strtok(NULL," ");
  char *addr = strtok(NULL," ");
  int gap=0;
  paddr_t paddr;
  sscanf(num,"%d",&gap);
  sscanf(addr,"%lx",&paddr);
  while(gap>0){
    printf("0x%lx:\t",paddr);
    uint32_t temp = pmem_read(paddr);
    printf("0x%x ", temp);
    printf("\n");
    paddr+=4;
    gap--;
  }
  return 0;
}

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit npc", cmd_q },

  /* TODO: Add more commands */
  { "si", "execute N step", cmd_si },
  { "info", "print infomation of registers", cmd_info },
  { "x", "scan the mem", cmd_x },
  //{ "p", "get the value of expr", cmd_p },
  //{ "w", "add a watchpoint", cmd_w },
  //{ "d", "delete a watch point", cmd_d },
};
#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))
#define NR_CMD ARRLEN(cmd_table)
int sdb_mainloop() {
    char str[100] ;
    printf("(npc) ");
    if (fgets(str, sizeof(str), stdin) == NULL) { // 从标准输入中读取命令
        perror("fgets error");
        return 0; // 读取失败，返回错误代码
    }
    str[strcspn(str, "\n")] = '\0';
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { return 1; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }
    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return 0; }
        else return 1;
      }
    }
    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  
  return 1;
}

//==============================itrace===============================
#if defined(__GNUC__) && !defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmaybe-uninitialized"
#endif

#include "llvm/MC/MCAsmInfo.h"
#include "llvm/MC/MCContext.h"
#include "llvm/MC/MCDisassembler/MCDisassembler.h"
#include "llvm/MC/MCInstPrinter.h"
#if LLVM_VERSION_MAJOR >= 14
#include "llvm/MC/TargetRegistry.h"
#else
#include "llvm/Support/TargetRegistry.h"
#endif
#include "llvm/Support/TargetSelect.h"

#if defined(__GNUC__) && !defined(__clang__)
#pragma GCC diagnostic pop
#endif

#if LLVM_VERSION_MAJOR < 11
#error Please use LLVM with major version >= 11
#endif

using namespace llvm;

static llvm::MCDisassembler *gDisassembler = nullptr;
static llvm::MCSubtargetInfo *gSTI = nullptr;
static llvm::MCInstPrinter *gIP = nullptr;

extern "C" void init_disasm(const char *triple) {
  llvm::InitializeAllTargetInfos();
  llvm::InitializeAllTargetMCs();
  llvm::InitializeAllAsmParsers();
  llvm::InitializeAllDisassemblers();

  std::string errstr;
  std::string gTriple(triple);

  llvm::MCInstrInfo *gMII = nullptr;
  llvm::MCRegisterInfo *gMRI = nullptr;
  auto target = llvm::TargetRegistry::lookupTarget(gTriple, errstr);
  if (!target) {
    llvm::errs() << "Can't find target for " << gTriple << ": " << errstr << "\n";
    assert(0);
  }

  MCTargetOptions MCOptions;
  gSTI = target->createMCSubtargetInfo(gTriple, "", "");
  std::string isa = target->getName();
  if (isa == "riscv32" || isa == "riscv64") {
    gSTI->ApplyFeatureFlag("+m");
    gSTI->ApplyFeatureFlag("+a");
    gSTI->ApplyFeatureFlag("+c");
    gSTI->ApplyFeatureFlag("+f");
    gSTI->ApplyFeatureFlag("+d");
  }
  gMII = target->createMCInstrInfo();
  gMRI = target->createMCRegInfo(gTriple);
  auto AsmInfo = target->createMCAsmInfo(*gMRI, gTriple, MCOptions);
#if LLVM_VERSION_MAJOR >= 13
   auto llvmTripleTwine = Twine(triple);
   auto llvmtriple = llvm::Triple(llvmTripleTwine);
   auto Ctx = new llvm::MCContext(llvmtriple,AsmInfo, gMRI, nullptr);
#else
   auto Ctx = new llvm::MCContext(AsmInfo, gMRI, nullptr);
#endif
  gDisassembler = target->createMCDisassembler(*gSTI, *Ctx);
  gIP = target->createMCInstPrinter(llvm::Triple(gTriple),
      AsmInfo->getAssemblerDialect(), *AsmInfo, *gMII, *gMRI);
  gIP->setPrintImmHex(true);
  gIP->setPrintBranchImmAsAddress(true);
}

extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte) {
  MCInst inst;
  llvm::ArrayRef<uint8_t> arr(code, nbyte);
  uint64_t dummy_size = 0;
  gDisassembler->getInstruction(inst, dummy_size, arr, pc, llvm::nulls());

  std::string s;
  raw_string_ostream os(s);
  gIP->printInst(&inst, pc, "", *gSTI, os);

  int skip = s.find_first_not_of('\t');
  const char *p = s.c_str() + skip;
  assert((int)s.length() - skip < size);
  strcpy(str, p);
}



//==========================itrace_end==============================

//==========================load_img================================
void load_img(){
  
  char img_file[] = "/home/lmy/ysyx-workbench/npc/image.bin";
  FILE *fp = fopen(img_file, "rb");
  
  fseek(fp, 0, SEEK_END);
  
  long size = ftell(fp);
  
  fseek(fp, 0, SEEK_SET);
  
  int ret = fread(guest_to_host(CONFIG_MBASE), size, 1, fp);
  
  fclose(fp);
}
//============================load_img_end===========================
void cpu_exec(int n){
  if(n<0)n=100000000;
  while (!cpu_stop && n--) {
    if(sim_time<3){
      top->reset = 1;
      top->clock^=1;
      top->eval();
    }else{
      top->reset = 0;
      top->io_inst = pmem_read(top->io_pc);
      printf("%lx %x\n",top->io_pc , top->io_inst);
      
#ifdef CONFIG_ITRACE
    FILE* fp = fopen("home/lmy/ysyx-workbench/npc/npc-log.txt","w+");
    fseek(fp, 0, SEEK_SET);
    char p[128];
    char *s = p;
    fprintf(fp, "0x%016lx:", top->io_pc);
    printf("1\n");
    s += snprintf(s, 24, " %08x", top->io_inst);
    printf("%s\n", p);
    memset(s, ' ', 1);
    s += 1;
    disassemble(s, p + sizeof(p) - s, top->io_pc, guest_to_host(top->io_pc), 4);
    *(s+1) = '\n';
    if(fputs(p, fp)==EOF)exit(0);
#endif
      top->clock ^= 1;
      top->eval();
      top->clock ^= 1;
      top->eval();
    }
    tfp->dump(contextp->time()); //dump wave
    sim_time++;
    
  }
}


int main(int argc, char** argv) {
  contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  top = new Vtop{contextp};
  
  tfp = new VerilatedVcdC; //初始化VCD对象指针
  contextp->traceEverOn(true); //打开追踪功能
  top->trace(tfp, 0);
  tfp->open("wave.vcd"); //设置输出的文件wave.vcd
  load_img();
  while(sdb_mainloop() && !cpu_stop);
  // while (!cpu_stop) {
  //   if(sim_time<3){
  //     top->reset = 1;
  //     top->clock^=1;
  //     top->eval();
  //   }else{
  //     top->reset = 0;
  //     top->io_inst = pmem_read(top->io_pc);
  //     printf("%lx %x\n",top->io_pc , top->io_inst);
  //     top->clock ^= 1;
  //     top->eval();
  //   }
  //   tfp->dump(contextp->time()); //dump wave
  //   sim_time++;
    
  // }
  if(stop_status==0)printf("\33[1;32mHIT GOOD TRAP\n\33[0m");
  else printf("\33[1;31mHIT BAD TRAP\n\33[0m");
  delete top;
  tfp->close();
  delete contextp;
  return 0;
}
