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
        CData/*0:0*/ top__DOT__d_cache_io_to_axi_arvalid;
        CData/*0:0*/ top__DOT__d_cache_io_to_axi_rready;
        CData/*7:0*/ top__DOT__d_cache_io_to_axi_awlen;
        CData/*0:0*/ top__DOT__d_cache_io_to_axi_awvalid;
        CData/*7:0*/ top__DOT__d_cache_io_to_axi_wstrb;
        CData/*0:0*/ top__DOT__d_cache_io_to_axi_wvalid;
        CData/*0:0*/ top__DOT__d_cache_io_to_axi_bready;
        CData/*0:0*/ top__DOT__axi_io_axi_out_rlast;
        CData/*0:0*/ top__DOT__IFU__DOT__fs_valid;
        CData/*0:0*/ top__DOT__IFU__DOT___GEN_3;
        CData/*0:0*/ top__DOT__IFU__DOT__inst_ready;
        CData/*0:0*/ top__DOT__IFU__DOT___GEN_5;
        CData/*1:0*/ top__DOT__arbiter__DOT__state;
        CData/*1:0*/ top__DOT__arbiter__DOT___GEN_0;
        CData/*1:0*/ top__DOT__arbiter__DOT___GEN_94;
        CData/*1:0*/ top__DOT__arbiter__DOT___GEN_126;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_0_0;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_0_1;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_0_2;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_0_3;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_0_4;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_0_5;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_0_6;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_0_7;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_0_8;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_0_9;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_0_10;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_0_11;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_0_12;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_0_13;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_0_14;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_0_15;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_1_0;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_1_1;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_1_2;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_1_3;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_1_4;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_1_5;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_1_6;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_1_7;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_1_8;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_1_9;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_1_10;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_1_11;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_1_12;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_1_13;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_1_14;
        CData/*0:0*/ top__DOT__i_cache__DOT__valid_1_15;
        CData/*0:0*/ top__DOT__i_cache__DOT__way0_hit;
        CData/*0:0*/ top__DOT__i_cache__DOT__way1_hit;
        CData/*1:0*/ top__DOT__i_cache__DOT__unuse_way;
    };
    struct {
        CData/*2:0*/ top__DOT__i_cache__DOT__receive_num;
        CData/*0:0*/ top__DOT__i_cache__DOT__quene;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_31;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_64;
        CData/*2:0*/ top__DOT__i_cache__DOT__state;
        CData/*2:0*/ top__DOT__i_cache__DOT___GEN_69;
        CData/*2:0*/ top__DOT__i_cache__DOT___GEN_71;
        CData/*2:0*/ top__DOT__i_cache__DOT___GEN_91;
        CData/*2:0*/ top__DOT__i_cache__DOT___GEN_92;
        CData/*2:0*/ top__DOT__i_cache__DOT___GEN_577;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_610;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_611;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_612;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_613;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_614;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_615;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_616;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_617;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_618;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_619;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_620;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_621;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_622;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_623;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_624;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_625;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_626;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_659;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_660;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_661;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_662;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_663;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_664;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_665;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_666;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_667;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_668;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_669;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_670;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_671;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_672;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_673;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_674;
        CData/*0:0*/ top__DOT__i_cache__DOT___GEN_1034;
        CData/*2:0*/ top__DOT__i_cache__DOT___GEN_1044;
        CData/*0:0*/ top__DOT__d_cache__DOT__valid_0_0;
        CData/*0:0*/ top__DOT__d_cache__DOT__valid_1_0;
        CData/*0:0*/ top__DOT__d_cache__DOT__dirty_0_0;
        CData/*0:0*/ top__DOT__d_cache__DOT__dirty_1_0;
        CData/*0:0*/ top__DOT__d_cache__DOT__way0_hit;
        CData/*0:0*/ top__DOT__d_cache__DOT__way1_hit;
        CData/*1:0*/ top__DOT__d_cache__DOT__unuse_way;
        CData/*2:0*/ top__DOT__d_cache__DOT__receive_num;
        CData/*0:0*/ top__DOT__d_cache__DOT__quene;
        CData/*2:0*/ top__DOT__d_cache__DOT__state;
        CData/*2:0*/ top__DOT__d_cache__DOT___GEN_72;
        CData/*0:0*/ top__DOT__d_cache__DOT___GEN_221;
        CData/*0:0*/ top__DOT__d_cache__DOT___GEN_253;
        CData/*2:0*/ top__DOT__d_cache__DOT___GEN_1450;
        CData/*2:0*/ top__DOT__d_cache__DOT___GEN_1451;
        CData/*0:0*/ top__DOT__d_cache__DOT___GEN_1484;
        CData/*0:0*/ top__DOT__d_cache__DOT___GEN_1500;
        CData/*0:0*/ top__DOT__d_cache__DOT___GEN_1533;
        CData/*0:0*/ top__DOT__d_cache__DOT___GEN_1551;
    };
    struct {
        CData/*0:0*/ top__DOT__d_cache__DOT___GEN_1567;
        CData/*2:0*/ top__DOT__d_cache__DOT___GEN_2087;
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
        IData/*31:0*/ top__DOT__d_cache_io_to_axi_awaddr;
        IData/*31:0*/ top__DOT__IFU__DOT__fs_inst;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_0_0;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_0_1;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_0_2;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_0_3;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_0_4;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_0_5;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_0_6;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_0_7;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_0_8;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_0_9;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_0_10;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_0_11;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_0_12;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_0_13;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_0_14;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_0_15;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_1_0;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_1_1;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_1_2;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_1_3;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_1_4;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_1_5;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_1_6;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_1_7;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_1_8;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_1_9;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_1_10;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_1_11;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_1_12;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_1_13;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_1_14;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT__ram_1_15;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_0_0;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_0_1;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_0_2;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_0_3;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_0_4;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_0_5;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_0_6;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_0_7;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_0_8;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_0_9;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_0_10;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_0_11;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_0_12;
    };
    struct {
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_0_13;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_0_14;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_0_15;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_1_0;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_1_1;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_1_2;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_1_3;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_1_4;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_1_5;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_1_6;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_1_7;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_1_8;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_1_9;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_1_10;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_1_11;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_1_12;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_1_13;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_1_14;
        IData/*31:0*/ top__DOT__i_cache__DOT__tag_1_15;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_13;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_46;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_578;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_579;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_580;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_581;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_582;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_583;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_584;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_585;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_586;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_587;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_588;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_589;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_590;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_591;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_592;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_593;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_594;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_595;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_596;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_597;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_598;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_599;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_600;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_601;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_602;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_603;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_604;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_605;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_606;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_607;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_608;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_609;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_627;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_628;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_629;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_630;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_631;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_632;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_633;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_634;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_635;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_636;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_637;
    };
    struct {
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_638;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_639;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_640;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_641;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_642;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_643;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_644;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_645;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_646;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_647;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_648;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_649;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_650;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_651;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_652;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_653;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_654;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_655;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_656;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_657;
        IData/*31:0*/ top__DOT__i_cache__DOT___GEN_658;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_1009;
        VlWide<16>/*511:0*/ top__DOT__i_cache__DOT___GEN_1025;
        VlWide<16>/*511:0*/ top__DOT__d_cache__DOT__ram_0_0;
        VlWide<16>/*511:0*/ top__DOT__d_cache__DOT__ram_1_0;
        VlWide<16>/*511:0*/ top__DOT__d_cache__DOT__write_back_data;
        IData/*31:0*/ top__DOT__d_cache__DOT__write_back_addr;
        VlWide<16>/*511:0*/ top__DOT__d_cache__DOT___GEN_205;
        VlWide<16>/*511:0*/ top__DOT__d_cache__DOT___GEN_237;
        VlWide<16>/*511:0*/ top__DOT__d_cache__DOT___GEN_1452;
        VlWide<16>/*511:0*/ top__DOT__d_cache__DOT___GEN_1501;
        VlWide<16>/*511:0*/ top__DOT__d_cache__DOT___GEN_1549;
        QData/*63:0*/ top__DOT__arbiter_io_ifu_axi_out_rdata;
        QData/*63:0*/ top__DOT__arbiter_io_lsu_axi_out_rdata;
        QData/*63:0*/ top__DOT__d_cache_io_to_axi_wdata;
        QData/*63:0*/ top__DOT__IFU__DOT__fs_pc;
        QData/*63:0*/ top__DOT__IFU__DOT__seq_pc;
        QData/*63:0*/ top__DOT__i_cache__DOT__receive_data_0;
        QData/*63:0*/ top__DOT__i_cache__DOT__receive_data_1;
        QData/*63:0*/ top__DOT__i_cache__DOT__receive_data_2;
        QData/*63:0*/ top__DOT__i_cache__DOT__receive_data_3;
        QData/*63:0*/ top__DOT__i_cache__DOT__receive_data_4;
        QData/*63:0*/ top__DOT__i_cache__DOT__receive_data_5;
        QData/*63:0*/ top__DOT__i_cache__DOT__receive_data_6;
        QData/*63:0*/ top__DOT__i_cache__DOT__receive_data_7;
        QData/*63:0*/ top__DOT__i_cache__DOT___GEN_83;
        QData/*63:0*/ top__DOT__i_cache__DOT___GEN_84;
        QData/*63:0*/ top__DOT__i_cache__DOT___GEN_85;
        QData/*63:0*/ top__DOT__i_cache__DOT___GEN_86;
        QData/*63:0*/ top__DOT__i_cache__DOT___GEN_87;
        QData/*63:0*/ top__DOT__i_cache__DOT___GEN_88;
        QData/*63:0*/ top__DOT__i_cache__DOT___GEN_89;
        QData/*63:0*/ top__DOT__i_cache__DOT___GEN_90;
        QData/*63:0*/ top__DOT__i_cache__DOT___GEN_1043;
        QData/*63:0*/ top__DOT__d_cache__DOT__receive_data_0;
        QData/*63:0*/ top__DOT__d_cache__DOT__receive_data_1;
        QData/*63:0*/ top__DOT__d_cache__DOT__receive_data_2;
        QData/*63:0*/ top__DOT__d_cache__DOT__receive_data_3;
        QData/*63:0*/ top__DOT__d_cache__DOT__receive_data_4;
        QData/*63:0*/ top__DOT__d_cache__DOT__receive_data_5;
        QData/*63:0*/ top__DOT__d_cache__DOT__receive_data_6;
        QData/*63:0*/ top__DOT__d_cache__DOT__receive_data_7;
        QData/*63:0*/ top__DOT__d_cache__DOT___GEN_1442;
        QData/*63:0*/ top__DOT__d_cache__DOT___GEN_1443;
    };
    struct {
        QData/*63:0*/ top__DOT__d_cache__DOT___GEN_1444;
        QData/*63:0*/ top__DOT__d_cache__DOT___GEN_1445;
        QData/*63:0*/ top__DOT__d_cache__DOT___GEN_1446;
        QData/*63:0*/ top__DOT__d_cache__DOT___GEN_1447;
        QData/*63:0*/ top__DOT__d_cache__DOT___GEN_1448;
        QData/*63:0*/ top__DOT__d_cache__DOT___GEN_1449;
        QData/*41:0*/ top__DOT__d_cache__DOT___GEN_2011;
        QData/*63:0*/ top__DOT__axi__DOT__Mem_modle_Rdata;
        QData/*63:0*/ top__DOT__axi__DOT__araddr;
        QData/*63:0*/ top__DOT__axi__DOT__awaddr;
        QData/*63:0*/ top__DOT__axi__DOT___GEN_14;
        QData/*63:0*/ top__DOT__axi__DOT___GEN_30;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__Register__DOT__Reg;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__Register__DOT__reg_trace__DOT__traceregs;
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
