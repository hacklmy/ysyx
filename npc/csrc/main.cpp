#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include "verilated.h"
#include "Vtop__Dpi.h"
#include <verilated_vcd_c.h>

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

char* img_file = "/home/ysyx-workbench//dummy-riscv64-npc.bin";

void load_img(){
  FILE *fp = fopen(img_file, "rb");
  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(0x80000000), size, 1, fp);
  assert(ret == 1);
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
  //  uint32_t inst[] = {
  //    0x00108093,
  //    0x00108093,
  //    0x00108093,
  //    0x00108093,
  //    0x00108093,
  //    0x00108093,
  //    0x00108093,
  //    0x00100073
  //  };
  // memcpy(guest_to_host(0x80000000), inst, sizeof(inst));
  //int finish = 3;
  load_img();
  //Wprintf("%x\n",)
  top->reset = 1;
    int n = 10;
    while (n-- > 0) {
      top->clock = 0;
      top->eval();
      top->clock = 1;
      top->eval();
    }
  top->reset = 0;
  while (!cpu_stop) {
    top->io_inst = pmem_read(top->io_pc);
    printf("%lx %lx %x\n",top->io_pc ,top->io_outval, top->io_inst);
    top->clock = 0;
    top->eval();
    printf("%lx %lx\n",top->io_pc ,top->io_outval);
    top->clock = 1;
    top->eval();
    //printf("%lx %lx\n",top->io_pc ,top->io_outval);
    // top->clock = 0;
    // top->eval();
    // top->clock = 1;
    // top->eval();
    tfp->dump(contextp->time()); //dump wave
    //contextp->timeInc(1); //推动仿真时间
    sim_time++;
    //assert(top->f == a ^ b);
    
  }
  delete top;
  tfp->close();
  delete contextp;
  return 0;
}
