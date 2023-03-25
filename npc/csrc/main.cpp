#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include "verilated.h"
#include "Vtop__Dpi.h"
#include <verilated_vcd_c.h>

int stop_status = 0;

#define MAX_SIM_TIME 5
vluint64_t sim_time = 0;
int cpu_stop = 0;
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


void load_img(){
  
  char img_file[] = "/home/lmy/ysyx-workbench/npc/image.bin";
  FILE *fp = fopen(img_file, "rb");
  
  fseek(fp, 0, SEEK_END);
  
  long size = ftell(fp);
  
  fseek(fp, 0, SEEK_SET);
  
  int ret = fread(guest_to_host(CONFIG_MBASE), size, 1, fp);
  
  fclose(fp);
}

int main(int argc, char** argv) {
  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  Vtop* top = new Vtop{contextp};
  
  VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针
  contextp->traceEverOn(true); //打开追踪功能
  top->trace(tfp, 0);
  tfp->open("wave.vcd"); //设置输出的文件wave.vcd
  load_img();
  while (!cpu_stop && sim_time<30) {
    if(sim_time<3){
      top->reset = 1;
      top->clock^=1;
      top->eval();
    }else{
      top->reset = 0;
      top->io_inst = pmem_read(top->io_pc);
      printf("%lx %x\n",top->io_pc , top->io_inst);
      top->clock ^= 1;
      top->eval();
    }
    tfp->dump(contextp->time()); //dump wave
    sim_time++;
    
  }
  if(stop_status==0)printf("\33[1;32mHIT GOOD TRAP\33[0m");
  else printf("\33[1;31mHIT BAD TRAP\33[0m");
  delete top;
  tfp->close();
  delete contextp;
  return 0;
}
