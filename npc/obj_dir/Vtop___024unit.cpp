// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024unit.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void set_gpr_ptr(const svOpenArrayHandle Regfile);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &Regfile) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const int Regfile__Vopenprops__ulims[2] = {0, 31};
    static const VerilatedVarProps Regfile__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, Regfile__Vopenprops__ulims);
    VerilatedDpiOpenVar Regfile__Vopenarray (&Regfile__Vopenprops, &Regfile);
    set_gpr_ptr(&Regfile__Vopenarray);
}

extern "C" void ebreak_handle(int flag);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_ebreak_handle_TOP____024unit(IData/*31:0*/ flag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_ebreak_handle_TOP____024unit\n"); );
    // Body
    int flag__Vcvt;
    for (size_t flag__Vidx = 0; flag__Vidx < 1; ++flag__Vidx) flag__Vcvt = flag;
    ebreak_handle(flag__Vcvt);
}
