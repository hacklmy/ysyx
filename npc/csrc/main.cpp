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
#include <dlfcn.h>
#include <time.h>

# define DEVICE_BASE 0xa0000000
#define MMIO_BASE 0xa0000000

#define SERIAL_PORT     (DEVICE_BASE + 0x00003f8)
#define KBD_ADDR        (DEVICE_BASE + 0x0000060)
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)
#define VGACTL_ADDR     (DEVICE_BASE + 0x0000100)
#define AUDIO_ADDR      (DEVICE_BASE + 0x0000200)
#define DISK_ADDR       (DEVICE_BASE + 0x0000300)
#define FB_ADDR         (MMIO_BASE   + 0x1000000)
#define AUDIO_SBUF_ADDR (MMIO_BASE   + 0x1200000)


const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

#define CONFIG_ITRACE
//#define CONFIG_FTRACE
#define CONFIG_DIFFTEST
//#define VerilatedVCD
void difftest_skip_ref();
uint32_t vmem[300*400];
uint32_t vgactl_port_base[8];
void vga_update_screen();
void init_vga();

void is_func(uint64_t pc, uint64_t dnpc,bool is_return);
void init_elf(char *elf_file);
void print_func();


int stop_status = 0;
int is_ecall = 0;

#define BITMASK(bits) ((1ull << (bits)) - 1)
#define BITS(x, hi, lo) (((x) >> (lo)) & BITMASK((hi) - (lo) + 1)) // similar to x[hi:lo] in verilog

#define MAX_SIM_TIME 5
vluint64_t sim_time = 0;
int cpu_stop = 0;
Vtop* top;
#ifdef VerilatedVCD
VerilatedVcdC* tfp;
#endif
VerilatedContext* contextp;
uint64_t pc_now;

void cpu_exec(int n);
typedef struct
{
  uint64_t gpr[32];
  uint64_t pc;
  uint64_t csr[4];
} CPU_state;

void ebreak_handle(int flag){
  cpu_stop = flag;
}

void ecall_handle(int flag){
  if(flag)printf("ecall\n");
  is_ecall = flag;
}

void get_pc(long long pc){
  pc_now = pc;
}

uint64_t csr_reg[4];
extern "C" void set_csr_ptr(const svOpenArrayHandle r) {
  uint64_t *csr = NULL;
  csr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
  for (int i = 0; i < 4; i++)
    csr_reg[i] = csr[i];
}


CPU_state ref_r;
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

 static uint32_t paddr_read(paddr_t addr) {
   uint32_t ret = host_read(guest_to_host(addr));
   return ret;
 }
time_t boot_time = 0;
extern "C" void pmem_read(long long raddr, long long *rdata) {
  // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
  if(raddr>=DEVICE_BASE && raddr < DEVICE_BASE + 0x1200000 + 32){
    difftest_skip_ref();
  }
  if(raddr==RTC_ADDR){
    if(boot_time==0){
      boot_time = time(NULL);
      *rdata = 0;
      return;
    }
    time_t tmpcal_ptr;
    tmpcal_ptr = time(NULL);
    *rdata = (tmpcal_ptr - boot_time)*1000000;
    return;
  }
  if(raddr >=VGACTL_ADDR && raddr <VGACTL_ADDR+32){
    if(raddr==VGACTL_ADDR){
      *rdata = vgactl_port_base[0] & 0xffff;
    }else if(raddr == VGACTL_ADDR+2){
      *rdata = (vgactl_port_base[0]>>16);
    }else if(raddr == VGACTL_ADDR+4){
      *rdata = vgactl_port_base[1];
    }
    return;
  }
  if(raddr<CONFIG_MBASE||raddr>(CONFIG_MBASE+CONFIG_MSIZE)){
    return;
  }
  *rdata = *((long long *)guest_to_host(raddr));
  #ifdef CONFIG_MTRACE
    printf("read memory at %llx, value = %llx\n",raddr,*rdata);
  #endif
}


extern "C" void pmem_write(long long waddr, long long wdata, char wmask) {
  // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  if(waddr>=DEVICE_BASE && waddr < DEVICE_BASE + 0x1200000 + 32){
    difftest_skip_ref();
  }
  if(waddr==SERIAL_PORT){
    putchar((char)wdata&0xff);
    return ;
  }
  if(waddr >=VGACTL_ADDR && waddr <VGACTL_ADDR+32){
    if(waddr==VGACTL_ADDR+4){
      uint32_t data = 0;
      for (int i = 0; i < 4; i++) {
        if (wmask & 0x1) data = data | (wdata & 0xff);
        wdata >>= 8;
        wmask >>= 1;
        data = data << 8;
      }
      vgactl_port_base[1] = data;
      vga_update_screen();
      return;
    }
  }
  if(waddr>=FB_ADDR && waddr<=FB_ADDR + 0x200000){
    uint64_t fb_addr = waddr - FB_ADDR;
    uint8_t* p = (uint8_t*)(vmem+fb_addr);
    for (int i = 0; i < 8; i++) {
      if (wmask & 0x1) *p = (wdata & 0xff);
      wdata >>= 8;
      wmask >>= 1;
     p++;
    }
    return;
  }
  if(waddr<CONFIG_MBASE||waddr>(CONFIG_MBASE+CONFIG_MSIZE)){
    //printf("write out of bound\n");
    return;
  }
  #ifdef CONFIG_MTRACE
    printf("write memory at %llx, mask = %x, value = %llx\n",waddr,wmask,wdata);
  #endif
  uint8_t* p = guest_to_host(waddr);
  for (int i = 0; i < 8; i++) {
    if (wmask & 0x1) *p = (wdata & 0xff);
    wdata >>= 8;
    wmask >>= 1;
    p++;
  }
}

//==========================sdb============================
CPU_state cpu_gpr;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  uint64_t *gpr = NULL;
  gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
  for (int i = 0; i < 32; i++)
        cpu_gpr.gpr[i] = gpr[i];
  cpu_gpr.pc = pc_now;
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

void print_reg(){
  int i;
  for (i = 0; i < 32; i++) {
    printf("gpr[%d] %s = 0x%lx\n", i, regs[i], cpu_gpr.gpr[i]);
  }
}

static int cmd_info(char *args){
  print_reg();
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
    uint32_t temp = paddr_read(paddr);
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

//==========================difftest================================
static int skip_dut_nr_inst = 0;
static bool is_skip_ref = false;

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
void (*ref_difftest_memcpy)(uint32_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

void init_difftest(char *ref_so_file, long img_size) {
  assert(ref_so_file != NULL);
  
  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);
  
  ref_difftest_memcpy = (void (*)(uint32_t addr, void *buf, size_t n, bool direction))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);
  
  ref_difftest_regcpy = (void (*)(void *dut, bool direction))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);
  
  ref_difftest_exec = (void (*)(uint64_t n))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = (void (*)(uint64_t NO))dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)(int) = (void (*)(int port))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);


  ref_difftest_init(1);
  ref_difftest_memcpy(CONFIG_MBASE, pmem, img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&cpu_gpr, DIFFTEST_TO_REF);
}

void difftest_skip_dut(int nr_ref, int nr_dut) {
  skip_dut_nr_inst += nr_dut;

  while (nr_ref -- > 0) {
    ref_difftest_exec(1);
  }
}

void difftest_skip_ref() {
  is_skip_ref = true;
  skip_dut_nr_inst = 0;
}

bool isa_difftest_checkregs(CPU_state *ref_r, uint64_t pc) {
  if(cpu_stop)return true;
  if(ref_r->pc != pc){
    printf("wrong pc %lx: npc = %lx   ref = %lx\n",pc, pc, ref_r->pc);
    return false;
  }
  for (int i = 0; i < 32; i++) {
    if(ref_r->gpr[i] != cpu_gpr.gpr[i])
      {
        printf("Unmatched reg value at pc : %lx  reg%d %s: npc = %lx  ref = %lx\n", pc, i, regs[i],cpu_gpr.gpr[i], ref_r->gpr[i]);
        return false;
      }
  }
  
  return true;
}

static void checkregs(CPU_state *ref, uint64_t pc) {
  if (!isa_difftest_checkregs(ref, pc)) {
    print_reg();
    stop_status = 1;
    cpu_stop = 1;
  }
}

void difftest_step(uint64_t pc) {
  if (is_skip_ref) {
    printf("skip pc:%lx\n",pc);
    // to skip the checking of an instruction, just copy the reg state to reference design
    CPU_state cpu_gpr_s = cpu_gpr;
    cpu_gpr_s.pc +=4;
    printf("%lx %lx %lx\n", cpu_gpr_s.pc, cpu_gpr.pc, pc_now);
    ref_difftest_regcpy(&cpu_gpr_s, DIFFTEST_TO_REF);
    is_skip_ref = false;
    return;
  }
  if(is_ecall){
    printf("ecall\n");
    ref_difftest_raise_intr(0xb);
  }
  ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
  checkregs(&ref_r, pc);

}

//==========================difftest_end============================



//==========================load_img================================
void load_img(){
  
  char img_file[] = "/home/lmy/ysyx-workbench/npc/image.bin";
  FILE *fp = fopen(img_file, "rb");
  
  fseek(fp, 0, SEEK_END);
  
  long long size = ftell(fp);
  
  fseek(fp, 0, SEEK_SET);
  
  int ret = fread(guest_to_host(CONFIG_MBASE), size, 1, fp);
  
  fclose(fp);
}
//============================load_img_end===========================
#ifdef CONFIG_ITRACE
FILE* log_file = fopen("/home/lmy/ysyx-workbench/npc/npc-log.txt","w+");
#endif


void cpu_exec(int n){
  int flag = 0;
  if(n<0)flag=1;
  while (!cpu_stop && (flag==1||n--)) {
      top->reset = 0;
      //top->io_inst = pmem_read(top->io_pc);
      //printf("%lx %x\n",pc_now , top->io_inst);
      top->clock ^= 1;
      top->eval();
      top->clock ^= 1;
      top->eval();
      //printf("%lx %x\n",pc_now , top->io_inst);
      #ifdef CONFIG_ITRACE
    char p[1024];
    char *s = p;
    s += snprintf(s, sizeof(p), "0x%016lx:", top->io_pc);
    s += snprintf(s, 16, " %08x", top->io_inst);
    //printf("%s\n", p);
    memset(s, ' ', 1);
    s += 1;
    disassemble(s, 256, top->io_pc, (uint8_t*)guest_to_host(top->io_pc), 4);
    //printf("%s\n", p);
    if(fputs(p, log_file)==EOF)exit(0);
    fputc('\n', log_file);
#endif
#ifdef CONFIG_FTRACE
    if(top->io_inst==0x8067){
      is_func(top->io_pc,top->io_pc, true);
    }
    else if(BITS(top->io_inst, 6, 0)==0x6f || (BITS(top->io_inst, 6, 0)==0x67 && BITS(top->io_inst, 11, 7)!=0x0)){
      is_func(top->io_pc,top->io_pc_next, false);
    }
#endif
#ifdef CONFIG_DIFFTEST
    difftest_step(pc_now);
#endif
    #ifdef VerilatedVCD
    tfp->dump(contextp->time()); //dump wave
    #endif
    sim_time++;
  }
}


int main(int argc, char** argv) {
  contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  top = new Vtop{contextp};
  #ifdef VerilatedVCD
  tfp = new VerilatedVcdC; //初始化VCD对象指针
  contextp->traceEverOn(true); //打开追踪功能
  top->trace(tfp, 0);
  tfp->open("wave.vcd"); //设置输出的文件wave.vcd
  #endif
  load_img();
  printf("image succuss\n");
  init_vga();
  #ifdef CONFIG_ITRACE
  init_disasm("riscv64");
  #endif
  #ifdef CONFIG_FTRACE
  char elf_file[] = "/home/lmy/ysyx-workbench/npc/image.elf";
  init_elf(elf_file);
  printf("elf succuss\n");
  #endif
  while (sim_time<3)
  {
    top->reset = 1;
    top->clock = 0;
    top->eval();
    top->clock = 1;
    top->eval();
    sim_time++;
  }
  #ifdef CONFIG_DIFFTEST
  char difftest_file[] = "/home/lmy/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so";
  printf("so succuss\n");
  init_difftest(difftest_file,CONFIG_MSIZE);
  #endif
  while(sdb_mainloop() && !cpu_stop);
  if(stop_status==0)printf("\33[1;32mHIT GOOD TRAP\n\33[0m");
  else printf("\33[1;31mHIT BAD TRAP\n\33[0m");
  delete top;
  #ifdef VerilatedVCD
  tfp->close();
  #endif
  delete contextp;
  #ifdef CONFIG_FTRACE
  print_func(); 
  #endif
  return 0;
}
