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

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__IDU_io_ds_to_es_valid;
        CData/*0:0*/ top__DOT__EXU_io_es_to_ms_valid;
        CData/*0:0*/ top__DOT__LSU_io_ms_rf_we;
        CData/*0:0*/ top__DOT__diff_step;
        CData/*0:0*/ top__DOT__IFU__DOT__fs_valid;
        CData/*0:0*/ top__DOT__IFU__DOT__fs_allowin;
        CData/*0:0*/ top__DOT__IFU__DOT___GEN_1;
        CData/*0:0*/ top__DOT__IDU__DOT__ds_valid;
        CData/*0:0*/ top__DOT__IDU__DOT__br_taken;
        CData/*0:0*/ top__DOT__IDU__DOT__src1_is_pc;
        CData/*6:0*/ top__DOT__IDU__DOT___inst_type_T_188;
        CData/*0:0*/ top__DOT__IDU__DOT__src2_is_imm;
        CData/*0:0*/ top__DOT__IDU__DOT__conflict;
        CData/*0:0*/ top__DOT__IDU__DOT__br_taken_cancel;
        CData/*0:0*/ top__DOT__IDU__DOT__ds_allowin;
        CData/*6:0*/ top__DOT__IDU__DOT___ALUop_T_162;
        CData/*3:0*/ top__DOT__IDU__DOT___Wmask_T_10;
        CData/*0:0*/ top__DOT__EXU__DOT__ALU_io_alu_busy;
        CData/*0:0*/ top__DOT__EXU__DOT__es_valid;
        CData/*4:0*/ top__DOT__EXU__DOT__es_rd;
        CData/*0:0*/ top__DOT__EXU__DOT__es_rf_we;
        CData/*7:0*/ top__DOT__EXU__DOT__st_wstrb;
        CData/*0:0*/ top__DOT__EXU__DOT__st_we;
        CData/*0:0*/ top__DOT__EXU__DOT__ld_we;
        CData/*2:0*/ top__DOT__EXU__DOT__load_type;
        CData/*0:0*/ top__DOT__EXU__DOT__es_allowin;
        CData/*0:0*/ top__DOT__EXU__DOT__ALU__DOT__Div_io_div_valid;
        CData/*0:0*/ top__DOT__EXU__DOT__ALU__DOT__Div_io_divw;
        CData/*0:0*/ top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed;
        CData/*0:0*/ top__DOT__EXU__DOT__ALU__DOT__div_valid;
        CData/*1:0*/ top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state;
        CData/*0:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg;
        CData/*0:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg;
        CData/*0:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start;
        CData/*0:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_0;
        CData/*0:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_10;
        CData/*0:0*/ top__DOT__LSU__DOT__ms_valid;
        CData/*0:0*/ top__DOT__LSU__DOT__ms_rf_we;
        CData/*4:0*/ top__DOT__LSU__DOT__ms_rf_dst;
        CData/*0:0*/ top__DOT__LSU__DOT__wen;
        CData/*7:0*/ top__DOT__LSU__DOT__wstrb;
        CData/*0:0*/ top__DOT__LSU__DOT__ren;
        CData/*2:0*/ top__DOT__LSU__DOT__load_type;
        CData/*0:0*/ top__DOT__WBU__DOT__ws_valid;
        CData/*0:0*/ top__DOT__WBU__DOT__ws_rf_we;
        CData/*4:0*/ top__DOT__WBU__DOT__ws_rf_dst;
        IData/*31:0*/ top__DOT__IDU__DOT__inst;
        IData/*31:0*/ top__DOT__EXU__DOT__ALUop;
        IData/*31:0*/ top__DOT__EXU__DOT__ALU__DOT__Mul_io_result_lo;
        IData/*31:0*/ top__DOT__EXU__DOT__ALU__DOT__srlw_res;
        VlWide<4>/*126:0*/ top__DOT__EXU__DOT__ALU__DOT__alu_res;
        VlWide<4>/*127:0*/ top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1;
        VlWide<3>/*64:0*/ top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2;
        VlWide<5>/*129:0*/ top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30;
        VlWide<4>/*127:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand;
        IData/*31:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num;
        VlWide<4>/*127:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_1;
        IData/*31:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_3;
        VlWide<3>/*64:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res;
        IData/*31:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT___step_num_T_1;
        VlWide<5>/*128:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_18;
        VlWide<3>/*64:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_19;
        QData/*63:0*/ top__DOT__Register_io_rdata1;
        QData/*63:0*/ top__DOT__Register_io_rdata2;
    };
    struct {
        QData/*63:0*/ top__DOT__IFU__DOT__inst_read_Rdata;
        QData/*63:0*/ top__DOT__IFU__DOT__fs_pc;
        QData/*63:0*/ top__DOT__IFU__DOT__seq_pc;
        QData/*63:0*/ top__DOT__IDU__DOT__ds_pc;
        QData/*63:0*/ top__DOT__IDU__DOT__imm;
        QData/*63:0*/ top__DOT__IDU__DOT___br_target_T_1;
        QData/*63:0*/ top__DOT__EXU__DOT__ALU_io_src1_value;
        QData/*63:0*/ top__DOT__EXU__DOT__es_pc;
        QData/*63:0*/ top__DOT__EXU__DOT__src1_value;
        QData/*63:0*/ top__DOT__EXU__DOT__src2_value;
        QData/*63:0*/ top__DOT__EXU__DOT__store_data;
        QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT__Div_io_quotient;
        QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder;
        QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT__add_res;
        QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT__sub_res;
        QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT__sra_res;
        QData/*62:0*/ top__DOT__EXU__DOT__ALU__DOT__sllw_res;
        QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__res;
        QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_20;
        QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s;
        QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s;
        QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient;
        QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2;
        QData/*63:0*/ top__DOT__LSU__DOT__Mem_modle_Rdata;
        QData/*63:0*/ top__DOT__LSU__DOT__ms_pc;
        QData/*63:0*/ top__DOT__LSU__DOT__ms_res;
        QData/*63:0*/ top__DOT__LSU__DOT__store_data;
        QData/*63:0*/ top__DOT__LSU__DOT__maddr;
        QData/*63:0*/ top__DOT__WBU__DOT__ws_pc;
        QData/*63:0*/ top__DOT__WBU__DOT__ws_res;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__Register__DOT__Reg;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__Register__DOT__reg_trace__DOT__traceregs;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clock;
    QData/*63:0*/ __Vtask_pmem_read__1__Rdata;
    QData/*63:0*/ __Vtask_pmem_read__2__Rdata;
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
