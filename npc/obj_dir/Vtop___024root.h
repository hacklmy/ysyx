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
        CData/*0:0*/ top__DOT__IFU_io_axi_out_rready;
        CData/*0:0*/ top__DOT__IDU_io_ds_to_es_valid;
        CData/*0:0*/ top__DOT__IDU_io_br_taken;
        CData/*0:0*/ top__DOT__IDU_io_ds_allowin;
        CData/*0:0*/ top__DOT__IDU_io_ds_ready_go;
        CData/*4:0*/ top__DOT__IDU_io_raddr2;
        CData/*0:0*/ top__DOT__EXU_io_es_to_ms_valid;
        CData/*0:0*/ top__DOT__EXU_io_es_fwd_ready;
        CData/*0:0*/ top__DOT__EXU_io_es_ld;
        CData/*0:0*/ top__DOT__LSU_io_ms_to_ws_valid;
        CData/*0:0*/ top__DOT__LSU_io_ms_rf_we;
        CData/*0:0*/ top__DOT__LSU_io_ms_fwd_ready;
        CData/*0:0*/ top__DOT__LSU_io_axi_out_arvalid;
        CData/*0:0*/ top__DOT__LSU_io_axi_out_awvalid;
        CData/*0:0*/ top__DOT__arbiter_io_ifu_axi_out_rlast;
        CData/*0:0*/ top__DOT__arbiter_io_ifu_axi_out_rvalid;
        CData/*0:0*/ top__DOT__arbiter_io_lsu_axi_out_rlast;
        CData/*0:0*/ top__DOT__arbiter_io_lsu_axi_out_rvalid;
        CData/*0:0*/ top__DOT__arbiter_io_lsu_axi_out_bvalid;
        CData/*0:0*/ top__DOT__arbiter_io_axi_out_arvalid;
        CData/*0:0*/ top__DOT__arbiter_io_axi_out_rready;
        CData/*0:0*/ top__DOT__arbiter_io_axi_out_awvalid;
        CData/*0:0*/ top__DOT__arbiter_io_axi_out_wvalid;
        CData/*0:0*/ top__DOT__arbiter_io_axi_out_bready;
        CData/*0:0*/ top__DOT__i_cache_io_to_ifu_rvalid;
        CData/*0:0*/ top__DOT__i_cache_io_to_axi_arvalid;
        CData/*0:0*/ top__DOT__i_cache_io_to_axi_rready;
        CData/*7:0*/ top__DOT__d_cache_io_to_axi_arlen;
        CData/*0:0*/ top__DOT__d_cache_io_to_axi_arvalid;
        CData/*0:0*/ top__DOT__d_cache_io_to_axi_rready;
        CData/*7:0*/ top__DOT__d_cache_io_to_axi_awlen;
        CData/*0:0*/ top__DOT__d_cache_io_to_axi_awvalid;
        CData/*7:0*/ top__DOT__d_cache_io_to_axi_wstrb;
        CData/*0:0*/ top__DOT__d_cache_io_to_axi_wvalid;
        CData/*0:0*/ top__DOT__d_cache_io_to_axi_bready;
        CData/*0:0*/ top__DOT__axi_io_axi_out_rlast;
        CData/*0:0*/ top__DOT__diff_step;
        CData/*0:0*/ top__DOT__IFU__DOT__fs_valid;
        CData/*0:0*/ top__DOT__IFU__DOT__cache_init;
        CData/*0:0*/ top__DOT__IFU__DOT___GEN_2;
        CData/*0:0*/ top__DOT__IDU__DOT__ds_valid;
        CData/*0:0*/ top__DOT__IDU__DOT__br_taken_cancel;
        CData/*0:0*/ top__DOT__IDU__DOT__src1_is_pc;
        CData/*6:0*/ top__DOT__IDU__DOT___inst_type_T_188;
        CData/*1:0*/ top__DOT__IDU__DOT__csr_write;
        CData/*0:0*/ top__DOT__IDU__DOT__conflict_es_rs1;
        CData/*0:0*/ top__DOT__IDU__DOT__conflict_ms_rs1;
        CData/*0:0*/ top__DOT__IDU__DOT__conflict_ws_rs1;
        CData/*0:0*/ top__DOT__IDU__DOT__src2_is_imm;
        CData/*4:0*/ top__DOT__IDU__DOT__rs2;
        CData/*0:0*/ top__DOT__IDU__DOT__conflict_es_rs2;
        CData/*0:0*/ top__DOT__IDU__DOT__conflict_ms_rs2;
        CData/*0:0*/ top__DOT__IDU__DOT__conflict_ws_rs2;
        CData/*0:0*/ top__DOT__IDU__DOT__ds_allowin;
        CData/*0:0*/ top__DOT__IDU__DOT__br_taken;
        CData/*0:0*/ top__DOT__IDU__DOT___GEN_1;
        CData/*0:0*/ top__DOT__IDU__DOT___T_7;
        CData/*6:0*/ top__DOT__IDU__DOT___ALUop_T_176;
        CData/*1:0*/ top__DOT__IDU__DOT__csr_index;
        CData/*0:0*/ top__DOT__EXU__DOT__ALU_io_alu_busy;
        CData/*0:0*/ top__DOT__EXU__DOT__es_valid;
        CData/*4:0*/ top__DOT__EXU__DOT__es_rd;
        CData/*0:0*/ top__DOT__EXU__DOT__es_rf_we;
        CData/*7:0*/ top__DOT__EXU__DOT__st_wstrb;
    };
    struct {
        CData/*0:0*/ top__DOT__EXU__DOT__st_we;
        CData/*0:0*/ top__DOT__EXU__DOT__ld_we;
        CData/*2:0*/ top__DOT__EXU__DOT__load_type;
        CData/*0:0*/ top__DOT__EXU__DOT__es_allowin;
        CData/*0:0*/ top__DOT__EXU__DOT__ALU__DOT__Mul_io_mul_valid;
        CData/*0:0*/ top__DOT__EXU__DOT__ALU__DOT__Div_io_div_valid;
        CData/*0:0*/ top__DOT__EXU__DOT__ALU__DOT__Div_io_divw;
        CData/*0:0*/ top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed;
        CData/*0:0*/ top__DOT__EXU__DOT__ALU__DOT__mul_valid;
        CData/*0:0*/ top__DOT__EXU__DOT__ALU__DOT__div_valid;
        CData/*1:0*/ top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state;
        CData/*1:0*/ top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_4;
        CData/*0:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg;
        CData/*0:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg;
        CData/*0:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start;
        CData/*0:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_1;
        CData/*0:0*/ top__DOT__LSU__DOT__ms_valid;
        CData/*0:0*/ top__DOT__LSU__DOT__ms_rf_we;
        CData/*4:0*/ top__DOT__LSU__DOT__ms_rf_dst;
        CData/*0:0*/ top__DOT__LSU__DOT__wen;
        CData/*7:0*/ top__DOT__LSU__DOT__wstrb;
        CData/*0:0*/ top__DOT__LSU__DOT__ren;
        CData/*2:0*/ top__DOT__LSU__DOT__load_type;
        CData/*0:0*/ top__DOT__LSU__DOT__ms_ready_go;
        CData/*0:0*/ top__DOT__LSU__DOT__ms_allowin;
        CData/*0:0*/ top__DOT__WBU__DOT__ws_valid;
        CData/*0:0*/ top__DOT__WBU__DOT__ws_rf_we;
        CData/*4:0*/ top__DOT__WBU__DOT__ws_rf_dst;
        CData/*1:0*/ top__DOT__arbiter__DOT__state;
        CData/*1:0*/ top__DOT__arbiter__DOT___GEN_0;
        CData/*1:0*/ top__DOT__arbiter__DOT___GEN_94;
        CData/*1:0*/ top__DOT__arbiter__DOT___GEN_126;
        CData/*0:0*/ top__DOT__i_cache__DOT__validMem_valid_0_MPORT_data;
        CData/*0:0*/ top__DOT__i_cache__DOT__validMem_valid_1_MPORT_data;
        CData/*0:0*/ top__DOT__i_cache__DOT__validMem_valid_2_MPORT_data;
        CData/*0:0*/ top__DOT__i_cache__DOT__validMem_valid_3_MPORT_data;
        CData/*0:0*/ top__DOT__i_cache__DOT__allvalid;
        CData/*1:0*/ top__DOT__i_cache__DOT__foundUnvalidIndex;
        CData/*0:0*/ top__DOT__i_cache__DOT__tagMatch_0;
        CData/*0:0*/ top__DOT__i_cache__DOT__tagMatch_1;
        CData/*0:0*/ top__DOT__i_cache__DOT__tagMatch_2;
        CData/*0:0*/ top__DOT__i_cache__DOT__tagMatch_3;
        CData/*0:0*/ top__DOT__i_cache__DOT__anyMatch;
        CData/*2:0*/ top__DOT__i_cache__DOT__receive_num;
        CData/*7:0*/ top__DOT__i_cache__DOT__quene_0;
        CData/*7:0*/ top__DOT__i_cache__DOT__quene_1;
        CData/*7:0*/ top__DOT__i_cache__DOT__quene_2;
        CData/*7:0*/ top__DOT__i_cache__DOT__quene_3;
        CData/*7:0*/ top__DOT__i_cache__DOT__quene_4;
        CData/*7:0*/ top__DOT__i_cache__DOT__quene_5;
        CData/*7:0*/ top__DOT__i_cache__DOT__quene_6;
        CData/*7:0*/ top__DOT__i_cache__DOT__quene_7;
        CData/*7:0*/ top__DOT__i_cache__DOT__quene_8;
        CData/*7:0*/ top__DOT__i_cache__DOT__quene_9;
        CData/*7:0*/ top__DOT__i_cache__DOT__quene_10;
        CData/*7:0*/ top__DOT__i_cache__DOT__quene_11;
        CData/*7:0*/ top__DOT__i_cache__DOT__quene_12;
        CData/*7:0*/ top__DOT__i_cache__DOT__quene_13;
        CData/*7:0*/ top__DOT__i_cache__DOT__quene_14;
        CData/*7:0*/ top__DOT__i_cache__DOT__quene_15;
        CData/*7:0*/ top__DOT__i_cache__DOT___GEN_15;
        CData/*2:0*/ top__DOT__i_cache__DOT__state;
        CData/*2:0*/ top__DOT__i_cache__DOT___GEN_20;
        CData/*2:0*/ top__DOT__i_cache__DOT___GEN_28;
    };
    struct {
        CData/*2:0*/ top__DOT__i_cache__DOT___GEN_29;
        CData/*2:0*/ top__DOT__i_cache__DOT___GEN_193;
        CData/*7:0*/ top__DOT__i_cache__DOT___GEN_202;
        CData/*7:0*/ top__DOT__i_cache__DOT___GEN_203;
        CData/*7:0*/ top__DOT__i_cache__DOT___GEN_204;
        CData/*7:0*/ top__DOT__i_cache__DOT___GEN_205;
        CData/*7:0*/ top__DOT__i_cache__DOT___GEN_206;
        CData/*7:0*/ top__DOT__i_cache__DOT___GEN_207;
        CData/*7:0*/ top__DOT__i_cache__DOT___GEN_208;
        CData/*7:0*/ top__DOT__i_cache__DOT___GEN_209;
        CData/*7:0*/ top__DOT__i_cache__DOT___GEN_210;
        CData/*7:0*/ top__DOT__i_cache__DOT___GEN_211;
        CData/*7:0*/ top__DOT__i_cache__DOT___GEN_212;
        CData/*7:0*/ top__DOT__i_cache__DOT___GEN_213;
        CData/*7:0*/ top__DOT__i_cache__DOT___GEN_214;
        CData/*7:0*/ top__DOT__i_cache__DOT___GEN_215;
        CData/*7:0*/ top__DOT__i_cache__DOT___GEN_216;
        CData/*7:0*/ top__DOT__i_cache__DOT___GEN_217;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_400;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_424;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_432;
        CData/*0:0*/ top__DOT__d_cache__DOT__validMem_valid_0_MPORT_data;
        CData/*0:0*/ top__DOT__d_cache__DOT__validMem_valid_1_MPORT_data;
        CData/*0:0*/ top__DOT__d_cache__DOT__validMem_valid_2_MPORT_data;
        CData/*0:0*/ top__DOT__d_cache__DOT__validMem_valid_3_MPORT_data;
        CData/*0:0*/ top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data;
        CData/*0:0*/ top__DOT__d_cache__DOT__allvalid;
        CData/*1:0*/ top__DOT__d_cache__DOT__foundUnvalidIndex;
        CData/*0:0*/ top__DOT__d_cache__DOT__tagMatch_0;
        CData/*0:0*/ top__DOT__d_cache__DOT__tagMatch_1;
        CData/*0:0*/ top__DOT__d_cache__DOT__tagMatch_2;
        CData/*0:0*/ top__DOT__d_cache__DOT__tagMatch_3;
        CData/*0:0*/ top__DOT__d_cache__DOT__anyMatch;
        CData/*2:0*/ top__DOT__d_cache__DOT__receive_num;
        CData/*7:0*/ top__DOT__d_cache__DOT__quene_0;
        CData/*7:0*/ top__DOT__d_cache__DOT__quene_1;
        CData/*7:0*/ top__DOT__d_cache__DOT__quene_2;
        CData/*7:0*/ top__DOT__d_cache__DOT__quene_3;
        CData/*7:0*/ top__DOT__d_cache__DOT__quene_4;
        CData/*7:0*/ top__DOT__d_cache__DOT__quene_5;
        CData/*7:0*/ top__DOT__d_cache__DOT__quene_6;
        CData/*7:0*/ top__DOT__d_cache__DOT__quene_7;
        CData/*7:0*/ top__DOT__d_cache__DOT__quene_8;
        CData/*7:0*/ top__DOT__d_cache__DOT__quene_9;
        CData/*7:0*/ top__DOT__d_cache__DOT__quene_10;
        CData/*7:0*/ top__DOT__d_cache__DOT__quene_11;
        CData/*7:0*/ top__DOT__d_cache__DOT__quene_12;
        CData/*7:0*/ top__DOT__d_cache__DOT__quene_13;
        CData/*7:0*/ top__DOT__d_cache__DOT__quene_14;
        CData/*7:0*/ top__DOT__d_cache__DOT__quene_15;
        CData/*7:0*/ top__DOT__d_cache__DOT___GEN_15;
        CData/*3:0*/ top__DOT__d_cache__DOT__state;
        CData/*0:0*/ top__DOT__d_cache__DOT___T_3;
        CData/*3:0*/ top__DOT__d_cache__DOT___GEN_16;
        CData/*2:0*/ top__DOT__d_cache__DOT___GEN_252;
        CData/*3:0*/ top__DOT__d_cache__DOT___GEN_253;
        CData/*7:0*/ top__DOT__d_cache__DOT___GEN_262;
        CData/*7:0*/ top__DOT__d_cache__DOT___GEN_263;
        CData/*7:0*/ top__DOT__d_cache__DOT___GEN_264;
        CData/*7:0*/ top__DOT__d_cache__DOT___GEN_265;
        CData/*7:0*/ top__DOT__d_cache__DOT___GEN_266;
        CData/*7:0*/ top__DOT__d_cache__DOT___GEN_267;
        CData/*7:0*/ top__DOT__d_cache__DOT___GEN_268;
        CData/*7:0*/ top__DOT__d_cache__DOT___GEN_269;
    };
    struct {
        CData/*7:0*/ top__DOT__d_cache__DOT___GEN_270;
        CData/*7:0*/ top__DOT__d_cache__DOT___GEN_271;
        CData/*7:0*/ top__DOT__d_cache__DOT___GEN_272;
        CData/*7:0*/ top__DOT__d_cache__DOT___GEN_273;
        CData/*7:0*/ top__DOT__d_cache__DOT___GEN_274;
        CData/*7:0*/ top__DOT__d_cache__DOT___GEN_275;
        CData/*7:0*/ top__DOT__d_cache__DOT___GEN_276;
        CData/*7:0*/ top__DOT__d_cache__DOT___GEN_277;
        CData/*0:0*/ top__DOT__d_cache__DOT___GEN_353;
        CData/*0:0*/ top__DOT__d_cache__DOT___GEN_362;
        CData/*0:0*/ top__DOT__d_cache__DOT___GEN_386;
        CData/*0:0*/ top__DOT__d_cache__DOT___GEN_395;
        CData/*0:0*/ top__DOT__axi__DOT__axi_wready;
        CData/*0:0*/ top__DOT__axi__DOT__axi_bvalid;
        CData/*0:0*/ top__DOT__axi__DOT__axi_rvalid;
        CData/*7:0*/ top__DOT__axi__DOT__arlen;
        CData/*7:0*/ top__DOT__axi__DOT__awlen;
        CData/*2:0*/ top__DOT__axi__DOT__state;
        CData/*0:0*/ top__DOT__axi__DOT___GEN_4;
        CData/*0:0*/ top__DOT__axi__DOT___GEN_7;
        CData/*7:0*/ top__DOT__axi__DOT___GEN_15;
        CData/*0:0*/ top__DOT__axi__DOT___GEN_18;
        CData/*2:0*/ top__DOT__axi__DOT___GEN_27;
        CData/*0:0*/ top__DOT__axi__DOT___GEN_29;
        CData/*7:0*/ top__DOT__axi__DOT___GEN_31;
        CData/*2:0*/ top__DOT__axi__DOT___GEN_35;
        CData/*0:0*/ top__DOT__axi__DOT___GEN_36;
        SData/*8:0*/ top__DOT__i_cache__DOT__unvalidIndex;
        SData/*8:0*/ top__DOT__i_cache__DOT___replaceIndex_T_2;
        SData/*8:0*/ top__DOT__d_cache__DOT__unvalidIndex;
        SData/*8:0*/ top__DOT__d_cache__DOT__tagIndex;
        SData/*8:0*/ top__DOT__d_cache__DOT___replaceIndex_T_2;
        IData/*31:0*/ top__DOT__d_cache_io_to_axi_awaddr;
        IData/*31:0*/ top__DOT__IFU__DOT__fs_inst;
        IData/*31:0*/ top__DOT__IDU__DOT__inst;
        IData/*31:0*/ top__DOT__EXU__DOT__ALUop;
        IData/*31:0*/ top__DOT__EXU__DOT__ALU__DOT__Mul_io_result_lo;
        IData/*31:0*/ top__DOT__EXU__DOT__ALU__DOT__srlw_res;
        VlWide<4>/*126:0*/ top__DOT__EXU__DOT__ALU__DOT__alu_res;
        VlWide<4>/*127:0*/ top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1;
        VlWide<3>/*64:0*/ top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2;
        VlWide<5>/*129:0*/ top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25;
        VlWide<4>/*127:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand;
        IData/*31:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num;
        VlWide<4>/*127:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2;
        IData/*31:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_4;
        VlWide<3>/*64:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res;
        IData/*31:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT___step_num_T_1;
        VlWide<5>/*128:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_21;
        VlWide<3>/*64:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22;
        IData/*31:0*/ top__DOT__i_cache__DOT__addr;
        VlWide<4>/*127:0*/ top__DOT__d_cache__DOT__write_back_data;
        IData/*31:0*/ top__DOT__d_cache__DOT__write_back_addr;
        VlWide<6>/*190:0*/ top__DOT__d_cache__DOT___T_13;
        VlWide<4>/*127:0*/ top__DOT__d_cache__DOT___GEN_290;
        VlWide<4>/*127:0*/ top__DOT__d_cache__DOT___GEN_612;
        QData/*63:0*/ top__DOT__IDU_io_br_target;
        QData/*63:0*/ top__DOT__LSU_io_ms_fwd_res;
        QData/*63:0*/ top__DOT__arbiter_io_ifu_axi_out_rdata;
        QData/*63:0*/ top__DOT__arbiter_io_lsu_axi_out_rdata;
        QData/*63:0*/ top__DOT__d_cache_io_to_axi_wdata;
        QData/*63:0*/ top__DOT__IFU__DOT__br_target;
        QData/*63:0*/ top__DOT__IFU__DOT__fs_pc_next;
        QData/*63:0*/ top__DOT__IFU__DOT__fs_pc;
    };
    struct {
        QData/*63:0*/ top__DOT__IDU__DOT__ds_pc;
        QData/*63:0*/ top__DOT__IDU__DOT__rdata1;
        QData/*63:0*/ top__DOT__IDU__DOT___rdata2_T_1;
        QData/*63:0*/ top__DOT__IDU__DOT__rdata2;
        QData/*63:0*/ top__DOT__IDU__DOT__imm;
        QData/*63:0*/ top__DOT__IDU__DOT__src1;
        QData/*63:0*/ top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data;
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
        QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32;
        QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___res_T_3;
        QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s;
        QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s;
        QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient;
        QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_3;
        QData/*63:0*/ top__DOT__LSU__DOT__ms_pc;
        QData/*63:0*/ top__DOT__LSU__DOT__ms_res;
        QData/*63:0*/ top__DOT__LSU__DOT__store_data;
        QData/*63:0*/ top__DOT__LSU__DOT__maddr;
        QData/*63:0*/ top__DOT__LSU__DOT__rdata;
        QData/*63:0*/ top__DOT__WBU__DOT__ws_pc;
        QData/*63:0*/ top__DOT__WBU__DOT__ws_res;
        QData/*63:0*/ top__DOT__i_cache__DOT__receive_data_0;
        QData/*63:0*/ top__DOT__i_cache__DOT__receive_data_1;
        QData/*63:0*/ top__DOT__i_cache__DOT___GEN_26;
        QData/*63:0*/ top__DOT__i_cache__DOT___GEN_27;
        QData/*63:0*/ top__DOT__i_cache__DOT___GEN_606;
        QData/*63:0*/ top__DOT__d_cache__DOT__receive_data_0;
        QData/*63:0*/ top__DOT__d_cache__DOT__receive_data_1;
        QData/*63:0*/ top__DOT__d_cache__DOT__wmask;
        QData/*63:0*/ top__DOT__d_cache__DOT___GEN_250;
        QData/*63:0*/ top__DOT__d_cache__DOT___GEN_251;
        QData/*63:0*/ top__DOT__d_cache__DOT___GEN_594;
        QData/*40:0*/ top__DOT__d_cache__DOT___GEN_518;
        QData/*63:0*/ top__DOT__axi__DOT__Mem_modle_Rdata;
        QData/*63:0*/ top__DOT__axi__DOT__araddr;
        QData/*63:0*/ top__DOT__axi__DOT__awaddr;
        QData/*63:0*/ top__DOT__axi__DOT___GEN_14;
        QData/*63:0*/ top__DOT__axi__DOT___GEN_30;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__Register__DOT__Reg;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__Register__DOT__reg_trace__DOT__traceregs;
        VlUnpacked<QData/*63:0*/, 4> top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg;
        VlUnpacked<VlWide<4>/*127:0*/, 128> top__DOT__i_cache__DOT__cacheLine;
        VlUnpacked<CData/*0:0*/, 128> top__DOT__i_cache__DOT__validMem;
        VlUnpacked<IData/*31:0*/, 128> top__DOT__i_cache__DOT__tagMem;
        VlUnpacked<VlWide<4>/*127:0*/, 256> top__DOT__d_cache__DOT__cacheLine;
        VlUnpacked<CData/*0:0*/, 256> top__DOT__d_cache__DOT__validMem;
        VlUnpacked<IData/*31:0*/, 256> top__DOT__d_cache__DOT__tagMem;
        VlUnpacked<CData/*0:0*/, 256> top__DOT__d_cache__DOT__dirtyMem;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clock;
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
