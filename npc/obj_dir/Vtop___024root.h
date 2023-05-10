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
    VL_OUT8(io_step,0,0);
    VL_OUT(io_inst,31,0);
    VL_OUT64(io_pc,63,0);
    VL_OUT64(io_pc_next,63,0);
    VL_OUT64(io_outval,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__arbiter_io_ifu_axi_out_rvalid;
        CData/*0:0*/ top__DOT__arbiter_io_lsu_axi_out_rvalid;
        CData/*0:0*/ top__DOT__arbiter_io_lsu_axi_out_bvalid;
        CData/*0:0*/ top__DOT__arbiter_io_axi_out_arvalid;
        CData/*0:0*/ top__DOT__arbiter_io_axi_out_rready;
        CData/*0:0*/ top__DOT__arbiter_io_axi_out_awvalid;
        CData/*0:0*/ top__DOT__arbiter_io_axi_out_wvalid;
        CData/*0:0*/ top__DOT__arbiter_io_axi_out_bready;
        CData/*0:0*/ top__DOT__idu_step_io_ctrl_sign_src2_is_imm;
        CData/*0:0*/ top__DOT__idu_step_io_ctrl_sign_src1_is_pc;
        CData/*0:0*/ top__DOT__idu_step_io_ctrl_sign_Readmem_en;
        CData/*7:0*/ top__DOT__idu_step_io_ctrl_sign_Wmask;
        CData/*0:0*/ top__DOT__execute_end;
        CData/*0:0*/ top__DOT__pc_valid;
        CData/*0:0*/ top__DOT__diff_step;
        CData/*0:0*/ top__DOT__axi__DOT__axi_awready;
        CData/*0:0*/ top__DOT__axi__DOT__axi_wready;
        CData/*0:0*/ top__DOT__axi__DOT__axi_bvalid;
        CData/*0:0*/ top__DOT__axi__DOT__axi_arready;
        CData/*0:0*/ top__DOT__axi__DOT__axi_rvalid;
        CData/*2:0*/ top__DOT__axi__DOT__state;
        CData/*0:0*/ top__DOT__axi__DOT___GEN_2;
        CData/*0:0*/ top__DOT__axi__DOT___GEN_6;
        CData/*2:0*/ top__DOT__axi__DOT___GEN_13;
        CData/*0:0*/ top__DOT__axi__DOT___GEN_15;
        CData/*0:0*/ top__DOT__axi__DOT___GEN_26;
        CData/*0:0*/ top__DOT__axi__DOT___GEN_27;
        CData/*0:0*/ top__DOT__axi__DOT___GEN_29;
        CData/*0:0*/ top__DOT__lsu_step__DOT__axi_arvalid;
        CData/*0:0*/ top__DOT__lsu_step__DOT__axi_rready;
        CData/*0:0*/ top__DOT__lsu_step__DOT__axi_awvalid;
        CData/*0:0*/ top__DOT__lsu_step__DOT__axi_wvalid;
        CData/*0:0*/ top__DOT__lsu_step__DOT__axi_bready;
        CData/*1:0*/ top__DOT__lsu_step__DOT__state;
        CData/*0:0*/ top__DOT__lsu_step__DOT___GEN_1;
        CData/*0:0*/ top__DOT__lsu_step__DOT___GEN_2;
        CData/*0:0*/ top__DOT__lsu_step__DOT___GEN_5;
        CData/*0:0*/ top__DOT__lsu_step__DOT___GEN_14;
        CData/*1:0*/ top__DOT__lsu_step__DOT___GEN_15;
        CData/*0:0*/ top__DOT__lsu_step__DOT___GEN_28;
        CData/*0:0*/ top__DOT__lsu_step__DOT___GEN_31;
        CData/*1:0*/ top__DOT__arbiter__DOT__state;
        CData/*1:0*/ top__DOT__arbiter__DOT___GEN_0;
        CData/*0:0*/ top__DOT__arbiter__DOT___GEN_57;
        CData/*0:0*/ top__DOT__arbiter__DOT___GEN_58;
        CData/*1:0*/ top__DOT__arbiter__DOT___GEN_67;
        CData/*1:0*/ top__DOT__arbiter__DOT___GEN_90;
        CData/*0:0*/ top__DOT__ifu_step__DOT__inst_ready;
        CData/*0:0*/ top__DOT__ifu_step__DOT___GEN_0;
        CData/*6:0*/ top__DOT__idu_step__DOT___inst_type_T_188;
        CData/*6:0*/ top__DOT__idu_step__DOT___inst_now_T_194;
        CData/*1:0*/ top__DOT__exu_step__DOT___csr_index_T_5;
        CData/*0:0*/ top__DOT__exu_step__DOT___T_7;
        IData/*31:0*/ top__DOT__idu_step_io_inst;
        IData/*31:0*/ top__DOT__ifu_step__DOT__inst_reg;
        VlWide<4>/*126:0*/ top__DOT__exu_step__DOT__sll_res;
        IData/*31:0*/ top__DOT__exu_step__DOT__srlw_res;
        IData/*31:0*/ top__DOT__exu_step__DOT__divuw_res;
        IData/*31:0*/ top__DOT__exu_step__DOT__remw_res;
        IData/*31:0*/ top__DOT__exu_step__DOT__remuw_res;
        VlWide<4>/*126:0*/ top__DOT__exu_step__DOT___io_res2rd_T_208;
        QData/*63:0*/ top__DOT__arbiter_io_ifu_axi_out_rdata;
        QData/*63:0*/ top__DOT__arbiter_io_lsu_axi_out_rdata;
        QData/*63:0*/ top__DOT__idu_step_io_imm;
    };
    struct {
        QData/*63:0*/ top__DOT__exu_step_io_Mem_wdata;
        QData/*63:0*/ top__DOT__pc_now;
        QData/*63:0*/ top__DOT__axi__DOT__Mem_modle_Rdata;
        QData/*63:0*/ top__DOT__exu_step__DOT__Regfile_MPORT_data;
        QData/*63:0*/ top__DOT__exu_step__DOT__CSR_Reg_MPORT_1_data;
        QData/*63:0*/ top__DOT__exu_step__DOT__CSR_Reg_MPORT_3_data;
        QData/*63:0*/ top__DOT__exu_step__DOT__CSR_Reg_MPORT_6_data;
        QData/*63:0*/ top__DOT__exu_step__DOT__src1_value;
        QData/*63:0*/ top__DOT__exu_step__DOT__src2_value;
        QData/*63:0*/ top__DOT__exu_step__DOT__add_res;
        QData/*63:0*/ top__DOT__exu_step__DOT__sub_res;
        QData/*63:0*/ top__DOT__exu_step__DOT__sra_res;
        QData/*63:0*/ top__DOT__exu_step__DOT__srl_res;
        QData/*62:0*/ top__DOT__exu_step__DOT__sllw_res;
        QData/*63:0*/ top__DOT__exu_step__DOT__or_res;
        QData/*63:0*/ top__DOT__exu_step__DOT__xor_res;
        QData/*63:0*/ top__DOT__exu_step__DOT__and_res;
        QData/*63:0*/ top__DOT__exu_step__DOT___mluw_res_T_2;
        QData/*32:0*/ top__DOT__exu_step__DOT___divw_res_T_4;
        QData/*63:0*/ top__DOT__exu_step__DOT___j_pc_T_62;
        QData/*63:0*/ top__DOT__exu_step__DOT__pc_next;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__exu_step__DOT__Regfile;
        VlUnpacked<QData/*63:0*/, 4> top__DOT__exu_step__DOT__CSR_Reg;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__exu_step__DOT__reg_trace__DOT__traceregs;
        VlUnpacked<QData/*63:0*/, 4> top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clock;
    QData/*63:0*/ __Vtask_pmem_read__0__Rdata;
    QData/*63:0*/ __Vchglast__TOP__top__DOT__axi__DOT__Mem_modle_Rdata;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

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
