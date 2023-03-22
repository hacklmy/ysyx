// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop2.h for the primary calling header

#ifndef VERILATED_VTOP2___024ROOT_H_
#define VERILATED_VTOP2___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop2__Syms;
class Vtop2_VerilatedVcd;


//----------

VL_MODULE(Vtop2___024root) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN(io_inst,31,0);
    VL_OUT64(io_pc,63,0);
    VL_OUT64(io_outval,63,0);

    // LOCAL SIGNALS
    CData/*4:0*/ top2__DOT__idu_step_io_src1;
    CData/*4:0*/ top2__DOT__idu_step_io_rd;
    SData/*11:0*/ top2__DOT__idu_step__DOT__imm_I;
    QData/*63:0*/ top2__DOT__exu_step_io_res2rd;
    QData/*63:0*/ top2__DOT__pc_now;
    QData/*63:0*/ top2__DOT___pc_now_T_1;
    QData/*63:0*/ top2__DOT__exu_step__DOT__Regfile_MPORT_data;
    VlUnpacked<QData/*63:0*/, 32> top2__DOT__exu_step__DOT__Regfile;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop2__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop2___024root);  ///< Copying not allowed
  public:
    Vtop2___024root(const char* name);
    ~Vtop2___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop2__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
