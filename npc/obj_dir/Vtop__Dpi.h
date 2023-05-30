// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/DPI.v:1:30
    extern void ebreak_handle(int flag);
    // DPI import at vsrc/DPI.v:2:30
    extern void ecall_handle(int flag);
    // DPI import at vsrc/traceregs.v:2:30
    extern void get_pc(long long pc);
    // DPI import at vsrc/MEM.v:1:30
    extern void pmem_read(long long Raddr, long long* Rdata);
    // DPI import at vsrc/MEM.v:3:30
    extern void pmem_write(long long Waddr, long long Wdata, char Wmask);
    // DPI import at vsrc/traceregs.v:3:30
    extern void set_csr_ptr(const svOpenArrayHandle Regfile);
    // DPI import at vsrc/traceregs.v:1:30
    extern void set_gpr_ptr(const svOpenArrayHandle Regfile);

#ifdef __cplusplus
}
#endif
