#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <assert.h>
#include "Vtop.h"
#include "Vtop__Dpi.h"
#include "Vtop__Syms.h"
#include "verilated.h"
#include <verilated_vcd_c.h>
#include "Vtop___024unit.h"
#include "Vtop___024root.h"
#define MAX_SIM_TIME 20
vluint64_t sim_time = 0;
uint32_t inst[] = {
	0x10400b3,
	0x10400b3,
	0x10400b3
};

#define PMEM64 1
#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0x8000000
#define CONFIG_ISA64 1
#define CONFIG_RT_CHECK 1
#define PG_ALIGN __attribute((aligned(4096)))
typedef uint64_t paddr_t;
typedef uint64_t word_t;


static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {0};
uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }

static inline uint32_t host_read(void *addr){
  return *(uint64_t *)addr;
}

static uint32_t pmem_read(paddr_t addr) {
  uint32_t ret = host_read(guest_to_host(addr));
  return ret;
}

int stop = 0;
void ebreak(int flag) {
  if(flag)printf("ebreak\n");
  stop = flag;
}

void cpu_init();
void exec_once(VerilatedVcdC* m_trace);
void cpu_exec(uint64_t n);
void pmem_init();

int main(int argc, char** argv, char** env) {
  Vtop* dut = new Vtop;
  Verilated::traceEverOn(true);
  VerilatedVcdC *m_trace = new VerilatedVcdC;
  dut->trace(m_trace, 5);
  m_trace->open("waveform.vcd");
  memcpy(guest_to_host(CONFIG_MBASE), inst, sizeof(inst));
	while (sim_time < MAX_SIM_TIME && !stop ) {
		if(sim_time < 3){
			dut->reset = 1;
		}else{
      dut->reset = 0;
    }
		dut->clock ^= 1;
    dut->io_inst = pmem_read(dut->io_pc);
		dut->eval();
		m_trace->dump(sim_time);
    printf("pc:%lx, inst:%x, stop:%d\n", dut->io_pc, dut->io_inst,stop);
		sim_time++;
	}
  delete dut;
  m_trace->close();
  exit(EXIT_SUCCESS);
}
