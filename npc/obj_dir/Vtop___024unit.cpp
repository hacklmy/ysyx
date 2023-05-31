// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024unit.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void ebreak_handle(int flag);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_ebreak_handle_TOP____024unit(IData/*31:0*/ flag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_ebreak_handle_TOP____024unit\n"); );
    // Body
    int flag__Vcvt;
    for (size_t flag__Vidx = 0; flag__Vidx < 1; ++flag__Vidx) flag__Vcvt = flag;
    ebreak_handle(flag__Vcvt);
}

extern "C" void ecall_handle(int flag);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_ecall_handle_TOP____024unit(IData/*31:0*/ flag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_ecall_handle_TOP____024unit\n"); );
    // Body
    int flag__Vcvt;
    for (size_t flag__Vidx = 0; flag__Vidx < 1; ++flag__Vidx) flag__Vcvt = flag;
    ecall_handle(flag__Vcvt);
}

extern "C" void get_pc(long long pc);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_get_pc_TOP____024unit(QData/*63:0*/ pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_get_pc_TOP____024unit\n"); );
    // Body
    long long pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    get_pc(pc__Vcvt);
}

extern "C" void pmem_read(long long Raddr, long long* Rdata);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ Raddr, QData/*63:0*/ &Rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit\n"); );
    // Body
    long long Raddr__Vcvt;
    for (size_t Raddr__Vidx = 0; Raddr__Vidx < 1; ++Raddr__Vidx) Raddr__Vcvt = Raddr;
    long long Rdata__Vcvt;
    pmem_read(Raddr__Vcvt, &Rdata__Vcvt);
    Rdata = Rdata__Vcvt;
}

extern "C" void pmem_write(long long Waddr, long long Wdata, char Wmask);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ Waddr, QData/*63:0*/ Wdata, CData/*7:0*/ Wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit\n"); );
    // Body
    long long Waddr__Vcvt;
    for (size_t Waddr__Vidx = 0; Waddr__Vidx < 1; ++Waddr__Vidx) Waddr__Vcvt = Waddr;
    long long Wdata__Vcvt;
    for (size_t Wdata__Vidx = 0; Wdata__Vidx < 1; ++Wdata__Vidx) Wdata__Vcvt = Wdata;
    char Wmask__Vcvt;
    for (size_t Wmask__Vidx = 0; Wmask__Vidx < 1; ++Wmask__Vidx) Wmask__Vcvt = Wmask;
    pmem_write(Waddr__Vcvt, Wdata__Vcvt, Wmask__Vcvt);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle Regfile);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &Regfile) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const int Regfile__Vopenprops__ulims[2] = {0, 31};
    static const VerilatedVarProps Regfile__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, Regfile__Vopenprops__ulims);
    VerilatedDpiOpenVar Regfile__Vopenarray (&Regfile__Vopenprops, &Regfile);
    set_gpr_ptr(&Regfile__Vopenarray);
}
