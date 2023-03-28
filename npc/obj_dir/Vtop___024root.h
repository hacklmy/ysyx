// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;
class Vtop___024unit;


//----------

VL_MODULE(Vtop___024root) {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT(io_inst,31,0);
    VL_OUT64(io_pc,63,0);
    VL_OUT64(io_pc_next,63,0);
    VL_OUT64(io_outval,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ top__DOT__idu_step_io_ctrl_sign_src2_is_imm;
    CData/*0:0*/ top__DOT__idu_step_io_ctrl_sign_src1_is_pc;
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_type_T_131;
    CData/*5:0*/ top__DOT__idu_step__DOT___inst_now_T_131;
    IData/*31:0*/ top__DOT__exu_step__DOT__divw_res;
    IData/*31:0*/ top__DOT__exu_step__DOT__remw_res;
    VlWide<4>/*126:0*/ top__DOT__exu_step__DOT___io_res2rd_T_155;
    QData/*63:0*/ top__DOT__idu_step_io_imm;
    QData/*63:0*/ top__DOT__exu_step_io_pc_next;
    QData/*63:0*/ top__DOT__pc_now;
    QData/*63:0*/ top__DOT__ifu_step__DOT__inst_read_Rdata;
    QData/*63:0*/ top__DOT__exu_step__DOT__Mem_modle_Rdata;
    QData/*63:0*/ top__DOT__exu_step__DOT__Regfile_MPORT_data;
    QData/*63:0*/ top__DOT__exu_step__DOT__cmp;
    QData/*63:0*/ top__DOT__exu_step__DOT__src1_value;
    QData/*63:0*/ top__DOT__exu_step__DOT__src2_value;
    QData/*63:0*/ top__DOT__exu_step__DOT__add_res;
    QData/*63:0*/ top__DOT__exu_step__DOT__sub_res;
    QData/*62:0*/ top__DOT__exu_step__DOT__sllw_res;
    QData/*63:0*/ top__DOT__exu_step__DOT__and_res;
    QData/*63:0*/ top__DOT__exu_step__DOT___mluw_res_T_2;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__exu_step__DOT__Regfile;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__exu_step__DOT__reg_trace__DOT__traceregs;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clock;
    QData/*63:0*/ __Vtask_pmem_read__0__Rdata;
    QData/*63:0*/ __Vtask_pmem_read__1__Rdata;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
