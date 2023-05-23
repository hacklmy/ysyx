// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ Raddr, QData/*63:0*/ &Rdata);
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ Waddr, QData/*63:0*/ Wdata, CData/*7:0*/ Wmask);

VL_INLINE_OPT void Vtop___024root___sequent__TOP__11(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__11\n"); );
    // Variables
    CData/*0:0*/ top__DOT__d_cache__DOT___GEN_90;
    CData/*0:0*/ top__DOT__d_cache__DOT___GEN_103;
    CData/*0:0*/ top__DOT__d_cache__DOT___GEN_116;
    CData/*0:0*/ top__DOT__d_cache__DOT___GEN_219;
    CData/*0:0*/ top__DOT__d_cache__DOT___GEN_232;
    CData/*0:0*/ top__DOT__d_cache__DOT___GEN_245;
    CData/*0:0*/ top__DOT__d_cache__DOT___GEN_288;
    CData/*0:0*/ top__DOT__d_cache__DOT___GEN_301;
    CData/*0:0*/ top__DOT__d_cache__DOT___GEN_314;
    CData/*0:0*/ top__DOT__d_cache__DOT___GEN_353;
    CData/*0:0*/ top__DOT__d_cache__DOT___GEN_366;
    CData/*0:0*/ top__DOT__d_cache__DOT___GEN_379;
    IData/*31:0*/ top__DOT__d_cache__DOT___GEN_26;
    IData/*31:0*/ top__DOT__d_cache__DOT___GEN_39;
    IData/*31:0*/ top__DOT__d_cache__DOT___GEN_52;
    IData/*31:0*/ top__DOT__d_cache__DOT___GEN_155;
    IData/*31:0*/ top__DOT__d_cache__DOT___GEN_168;
    IData/*31:0*/ top__DOT__d_cache__DOT___GEN_181;
    VlWide<4>/*126:0*/ top__DOT__d_cache__DOT___ram_0_T_1;
    VlWide<4>/*126:0*/ top__DOT__d_cache__DOT___ram_0_T_2;
    VlWide<4>/*126:0*/ top__DOT__exu_step__DOT___io_res2rd_T_186;
    VlWide<4>/*127:0*/ __Vtemp106;
    VlWide<4>/*127:0*/ __Vtemp107;
    VlWide<4>/*127:0*/ __Vtemp110;
    VlWide<4>/*127:0*/ __Vtemp111;
    VlWide<4>/*127:0*/ __Vtemp113;
    VlWide<4>/*127:0*/ __Vtemp117;
    VlWide<3>/*95:0*/ __Vtemp123;
    VlWide<3>/*95:0*/ __Vtemp124;
    VlWide<3>/*95:0*/ __Vtemp126;
    VlWide<3>/*95:0*/ __Vtemp127;
    VlWide<3>/*95:0*/ __Vtemp128;
    VlWide<3>/*95:0*/ __Vtemp129;
    VlWide<4>/*127:0*/ __Vtemp130;
    VlWide<4>/*127:0*/ __Vtemp131;
    VlWide<4>/*127:0*/ __Vtemp132;
    VlWide<4>/*127:0*/ __Vtemp133;
    VlWide<4>/*127:0*/ __Vtemp134;
    VlWide<4>/*127:0*/ __Vtemp135;
    VlWide<4>/*127:0*/ __Vtemp136;
    VlWide<4>/*127:0*/ __Vtemp137;
    VlWide<4>/*127:0*/ __Vtemp138;
    VlWide<4>/*127:0*/ __Vtemp139;
    VlWide<4>/*127:0*/ __Vtemp140;
    VlWide<4>/*127:0*/ __Vtemp141;
    VlWide<4>/*127:0*/ __Vtemp142;
    VlWide<4>/*127:0*/ __Vtemp143;
    VlWide<4>/*127:0*/ __Vtemp144;
    VlWide<4>/*127:0*/ __Vtemp169;
    VlWide<4>/*127:0*/ __Vtemp170;
    VlWide<4>/*127:0*/ __Vtemp171;
    VlWide<4>/*127:0*/ __Vtemp172;
    VlWide<4>/*127:0*/ __Vtemp173;
    VlWide<4>/*127:0*/ __Vtemp174;
    VlWide<4>/*127:0*/ __Vtemp175;
    VlWide<4>/*127:0*/ __Vtemp176;
    VlWide<4>/*127:0*/ __Vtemp177;
    VlWide<4>/*127:0*/ __Vtemp178;
    QData/*63:0*/ top__DOT__d_cache__DOT___GEN_419;
    QData/*63:0*/ top__DOT__d_cache__DOT___GEN_432;
    QData/*63:0*/ top__DOT__d_cache__DOT___GEN_445;
    QData/*63:0*/ top__DOT__d_cache__DOT___GEN_611;
    QData/*63:0*/ top__DOT__d_cache__DOT___GEN_624;
    QData/*63:0*/ top__DOT__d_cache__DOT___GEN_637;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_132;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_162;
    // Body
    if ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_5919 = vlSelf->top__DOT__d_cache__DOT__valid_1_47;
        vlSelf->top__DOT__d_cache__DOT___GEN_5920 = vlSelf->top__DOT__d_cache__DOT__valid_1_48;
        vlSelf->top__DOT__d_cache__DOT___GEN_5921 = vlSelf->top__DOT__d_cache__DOT__valid_1_49;
        vlSelf->top__DOT__d_cache__DOT___GEN_5922 = vlSelf->top__DOT__d_cache__DOT__valid_1_50;
        vlSelf->top__DOT__d_cache__DOT___GEN_5923 = vlSelf->top__DOT__d_cache__DOT__valid_1_51;
        vlSelf->top__DOT__d_cache__DOT___GEN_5924 = vlSelf->top__DOT__d_cache__DOT__valid_1_52;
        vlSelf->top__DOT__d_cache__DOT___GEN_5925 = vlSelf->top__DOT__d_cache__DOT__valid_1_53;
        vlSelf->top__DOT__d_cache__DOT___GEN_5926 = vlSelf->top__DOT__d_cache__DOT__valid_1_54;
        vlSelf->top__DOT__d_cache__DOT___GEN_5927 = vlSelf->top__DOT__d_cache__DOT__valid_1_55;
        vlSelf->top__DOT__d_cache__DOT___GEN_5928 = vlSelf->top__DOT__d_cache__DOT__valid_1_56;
        vlSelf->top__DOT__d_cache__DOT___GEN_5929 = vlSelf->top__DOT__d_cache__DOT__valid_1_57;
        vlSelf->top__DOT__d_cache__DOT___GEN_5930 = vlSelf->top__DOT__d_cache__DOT__valid_1_58;
        vlSelf->top__DOT__d_cache__DOT___GEN_5931 = vlSelf->top__DOT__d_cache__DOT__valid_1_59;
        vlSelf->top__DOT__d_cache__DOT___GEN_5932 = vlSelf->top__DOT__d_cache__DOT__valid_1_60;
        vlSelf->top__DOT__d_cache__DOT___GEN_5933 = vlSelf->top__DOT__d_cache__DOT__valid_1_61;
        vlSelf->top__DOT__d_cache__DOT___GEN_5934 = vlSelf->top__DOT__d_cache__DOT__valid_1_62;
        vlSelf->top__DOT__d_cache__DOT___GEN_5935 = vlSelf->top__DOT__d_cache__DOT__valid_1_63;
        vlSelf->top__DOT__d_cache__DOT___GEN_5551 = vlSelf->top__DOT__d_cache__DOT__ram_0_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_5552 = vlSelf->top__DOT__d_cache__DOT__ram_0_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_5553 = vlSelf->top__DOT__d_cache__DOT__ram_0_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_5554 = vlSelf->top__DOT__d_cache__DOT__ram_0_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_5555 = vlSelf->top__DOT__d_cache__DOT__ram_0_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_5556 = vlSelf->top__DOT__d_cache__DOT__ram_0_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_5557 = vlSelf->top__DOT__d_cache__DOT__ram_0_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_5558 = vlSelf->top__DOT__d_cache__DOT__ram_0_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_5559 = vlSelf->top__DOT__d_cache__DOT__ram_0_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_5560 = vlSelf->top__DOT__d_cache__DOT__ram_0_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_5561 = vlSelf->top__DOT__d_cache__DOT__ram_0_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_5562 = vlSelf->top__DOT__d_cache__DOT__ram_0_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_5563 = vlSelf->top__DOT__d_cache__DOT__ram_0_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_5564 = vlSelf->top__DOT__d_cache__DOT__ram_0_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_5565 = vlSelf->top__DOT__d_cache__DOT__ram_0_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_5566 = vlSelf->top__DOT__d_cache__DOT__ram_0_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_5567 = vlSelf->top__DOT__d_cache__DOT__ram_0_16;
        vlSelf->top__DOT__d_cache__DOT___GEN_5568 = vlSelf->top__DOT__d_cache__DOT__ram_0_17;
        vlSelf->top__DOT__d_cache__DOT___GEN_5569 = vlSelf->top__DOT__d_cache__DOT__ram_0_18;
        vlSelf->top__DOT__d_cache__DOT___GEN_5570 = vlSelf->top__DOT__d_cache__DOT__ram_0_19;
        vlSelf->top__DOT__d_cache__DOT___GEN_5571 = vlSelf->top__DOT__d_cache__DOT__ram_0_20;
        vlSelf->top__DOT__d_cache__DOT___GEN_5572 = vlSelf->top__DOT__d_cache__DOT__ram_0_21;
        vlSelf->top__DOT__d_cache__DOT___GEN_5573 = vlSelf->top__DOT__d_cache__DOT__ram_0_22;
        vlSelf->top__DOT__d_cache__DOT___GEN_5574 = vlSelf->top__DOT__d_cache__DOT__ram_0_23;
        vlSelf->top__DOT__d_cache__DOT___GEN_5575 = vlSelf->top__DOT__d_cache__DOT__ram_0_24;
        vlSelf->top__DOT__d_cache__DOT___GEN_5576 = vlSelf->top__DOT__d_cache__DOT__ram_0_25;
        vlSelf->top__DOT__d_cache__DOT___GEN_5577 = vlSelf->top__DOT__d_cache__DOT__ram_0_26;
        vlSelf->top__DOT__d_cache__DOT___GEN_5578 = vlSelf->top__DOT__d_cache__DOT__ram_0_27;
        vlSelf->top__DOT__d_cache__DOT___GEN_5579 = vlSelf->top__DOT__d_cache__DOT__ram_0_28;
        vlSelf->top__DOT__d_cache__DOT___GEN_5580 = vlSelf->top__DOT__d_cache__DOT__ram_0_29;
        vlSelf->top__DOT__d_cache__DOT___GEN_5581 = vlSelf->top__DOT__d_cache__DOT__ram_0_30;
        vlSelf->top__DOT__d_cache__DOT___GEN_5582 = vlSelf->top__DOT__d_cache__DOT__ram_0_31;
        vlSelf->top__DOT__d_cache__DOT___GEN_5583 = vlSelf->top__DOT__d_cache__DOT__ram_0_32;
        vlSelf->top__DOT__d_cache__DOT___GEN_5584 = vlSelf->top__DOT__d_cache__DOT__ram_0_33;
        vlSelf->top__DOT__d_cache__DOT___GEN_5585 = vlSelf->top__DOT__d_cache__DOT__ram_0_34;
        vlSelf->top__DOT__d_cache__DOT___GEN_5586 = vlSelf->top__DOT__d_cache__DOT__ram_0_35;
        vlSelf->top__DOT__d_cache__DOT___GEN_5587 = vlSelf->top__DOT__d_cache__DOT__ram_0_36;
        vlSelf->top__DOT__d_cache__DOT___GEN_5588 = vlSelf->top__DOT__d_cache__DOT__ram_0_37;
        vlSelf->top__DOT__d_cache__DOT___GEN_5589 = vlSelf->top__DOT__d_cache__DOT__ram_0_38;
        vlSelf->top__DOT__d_cache__DOT___GEN_5590 = vlSelf->top__DOT__d_cache__DOT__ram_0_39;
        vlSelf->top__DOT__d_cache__DOT___GEN_5591 = vlSelf->top__DOT__d_cache__DOT__ram_0_40;
        vlSelf->top__DOT__d_cache__DOT___GEN_5592 = vlSelf->top__DOT__d_cache__DOT__ram_0_41;
        vlSelf->top__DOT__d_cache__DOT___GEN_5593 = vlSelf->top__DOT__d_cache__DOT__ram_0_42;
        vlSelf->top__DOT__d_cache__DOT___GEN_5594 = vlSelf->top__DOT__d_cache__DOT__ram_0_43;
        vlSelf->top__DOT__d_cache__DOT___GEN_5595 = vlSelf->top__DOT__d_cache__DOT__ram_0_44;
        vlSelf->top__DOT__d_cache__DOT___GEN_5596 = vlSelf->top__DOT__d_cache__DOT__ram_0_45;
        vlSelf->top__DOT__d_cache__DOT___GEN_5597 = vlSelf->top__DOT__d_cache__DOT__ram_0_46;
        vlSelf->top__DOT__d_cache__DOT___GEN_5598 = vlSelf->top__DOT__d_cache__DOT__ram_0_47;
        vlSelf->top__DOT__d_cache__DOT___GEN_5599 = vlSelf->top__DOT__d_cache__DOT__ram_0_48;
        vlSelf->top__DOT__d_cache__DOT___GEN_5600 = vlSelf->top__DOT__d_cache__DOT__ram_0_49;
        vlSelf->top__DOT__d_cache__DOT___GEN_5601 = vlSelf->top__DOT__d_cache__DOT__ram_0_50;
        vlSelf->top__DOT__d_cache__DOT___GEN_5602 = vlSelf->top__DOT__d_cache__DOT__ram_0_51;
        vlSelf->top__DOT__d_cache__DOT___GEN_5603 = vlSelf->top__DOT__d_cache__DOT__ram_0_52;
        vlSelf->top__DOT__d_cache__DOT___GEN_5604 = vlSelf->top__DOT__d_cache__DOT__ram_0_53;
        vlSelf->top__DOT__d_cache__DOT___GEN_5605 = vlSelf->top__DOT__d_cache__DOT__ram_0_54;
        vlSelf->top__DOT__d_cache__DOT___GEN_5606 = vlSelf->top__DOT__d_cache__DOT__ram_0_55;
        vlSelf->top__DOT__d_cache__DOT___GEN_5607 = vlSelf->top__DOT__d_cache__DOT__ram_0_56;
        vlSelf->top__DOT__d_cache__DOT___GEN_5608 = vlSelf->top__DOT__d_cache__DOT__ram_0_57;
        vlSelf->top__DOT__d_cache__DOT___GEN_5609 = vlSelf->top__DOT__d_cache__DOT__ram_0_58;
        vlSelf->top__DOT__d_cache__DOT___GEN_5610 = vlSelf->top__DOT__d_cache__DOT__ram_0_59;
        vlSelf->top__DOT__d_cache__DOT___GEN_5611 = vlSelf->top__DOT__d_cache__DOT__ram_0_60;
        vlSelf->top__DOT__d_cache__DOT___GEN_5612 = vlSelf->top__DOT__d_cache__DOT__ram_0_61;
        vlSelf->top__DOT__d_cache__DOT___GEN_5613 = vlSelf->top__DOT__d_cache__DOT__ram_0_62;
        vlSelf->top__DOT__d_cache__DOT___GEN_5614 = vlSelf->top__DOT__d_cache__DOT__ram_0_63;
        vlSelf->top__DOT__d_cache__DOT___GEN_5744 = vlSelf->top__DOT__d_cache__DOT__ram_1_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_5745 = vlSelf->top__DOT__d_cache__DOT__ram_1_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_5746 = vlSelf->top__DOT__d_cache__DOT__ram_1_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_5747 = vlSelf->top__DOT__d_cache__DOT__ram_1_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_5748 = vlSelf->top__DOT__d_cache__DOT__ram_1_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_5749 = vlSelf->top__DOT__d_cache__DOT__ram_1_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_5750 = vlSelf->top__DOT__d_cache__DOT__ram_1_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_5751 = vlSelf->top__DOT__d_cache__DOT__ram_1_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_5752 = vlSelf->top__DOT__d_cache__DOT__ram_1_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_5753 = vlSelf->top__DOT__d_cache__DOT__ram_1_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_5754 = vlSelf->top__DOT__d_cache__DOT__ram_1_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_5755 = vlSelf->top__DOT__d_cache__DOT__ram_1_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_5756 = vlSelf->top__DOT__d_cache__DOT__ram_1_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_5757 = vlSelf->top__DOT__d_cache__DOT__ram_1_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_5758 = vlSelf->top__DOT__d_cache__DOT__ram_1_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_5759 = vlSelf->top__DOT__d_cache__DOT__ram_1_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_5760 = vlSelf->top__DOT__d_cache__DOT__ram_1_16;
        vlSelf->top__DOT__d_cache__DOT___GEN_5761 = vlSelf->top__DOT__d_cache__DOT__ram_1_17;
        vlSelf->top__DOT__d_cache__DOT___GEN_5762 = vlSelf->top__DOT__d_cache__DOT__ram_1_18;
        vlSelf->top__DOT__d_cache__DOT___GEN_5763 = vlSelf->top__DOT__d_cache__DOT__ram_1_19;
        vlSelf->top__DOT__d_cache__DOT___GEN_5764 = vlSelf->top__DOT__d_cache__DOT__ram_1_20;
        vlSelf->top__DOT__d_cache__DOT___GEN_5765 = vlSelf->top__DOT__d_cache__DOT__ram_1_21;
        vlSelf->top__DOT__d_cache__DOT___GEN_5766 = vlSelf->top__DOT__d_cache__DOT__ram_1_22;
        vlSelf->top__DOT__d_cache__DOT___GEN_5767 = vlSelf->top__DOT__d_cache__DOT__ram_1_23;
        vlSelf->top__DOT__d_cache__DOT___GEN_5768 = vlSelf->top__DOT__d_cache__DOT__ram_1_24;
        vlSelf->top__DOT__d_cache__DOT___GEN_5769 = vlSelf->top__DOT__d_cache__DOT__ram_1_25;
        vlSelf->top__DOT__d_cache__DOT___GEN_5770 = vlSelf->top__DOT__d_cache__DOT__ram_1_26;
        vlSelf->top__DOT__d_cache__DOT___GEN_5771 = vlSelf->top__DOT__d_cache__DOT__ram_1_27;
        vlSelf->top__DOT__d_cache__DOT___GEN_5772 = vlSelf->top__DOT__d_cache__DOT__ram_1_28;
        vlSelf->top__DOT__d_cache__DOT___GEN_5773 = vlSelf->top__DOT__d_cache__DOT__ram_1_29;
        vlSelf->top__DOT__d_cache__DOT___GEN_5774 = vlSelf->top__DOT__d_cache__DOT__ram_1_30;
        vlSelf->top__DOT__d_cache__DOT___GEN_5775 = vlSelf->top__DOT__d_cache__DOT__ram_1_31;
        vlSelf->top__DOT__d_cache__DOT___GEN_5776 = vlSelf->top__DOT__d_cache__DOT__ram_1_32;
        vlSelf->top__DOT__d_cache__DOT___GEN_5777 = vlSelf->top__DOT__d_cache__DOT__ram_1_33;
        vlSelf->top__DOT__d_cache__DOT___GEN_5778 = vlSelf->top__DOT__d_cache__DOT__ram_1_34;
        vlSelf->top__DOT__d_cache__DOT___GEN_5779 = vlSelf->top__DOT__d_cache__DOT__ram_1_35;
        vlSelf->top__DOT__d_cache__DOT___GEN_5780 = vlSelf->top__DOT__d_cache__DOT__ram_1_36;
        vlSelf->top__DOT__d_cache__DOT___GEN_5781 = vlSelf->top__DOT__d_cache__DOT__ram_1_37;
        vlSelf->top__DOT__d_cache__DOT___GEN_5782 = vlSelf->top__DOT__d_cache__DOT__ram_1_38;
        vlSelf->top__DOT__d_cache__DOT___GEN_5783 = vlSelf->top__DOT__d_cache__DOT__ram_1_39;
        vlSelf->top__DOT__d_cache__DOT___GEN_5784 = vlSelf->top__DOT__d_cache__DOT__ram_1_40;
        vlSelf->top__DOT__d_cache__DOT___GEN_5785 = vlSelf->top__DOT__d_cache__DOT__ram_1_41;
        vlSelf->top__DOT__d_cache__DOT___GEN_5786 = vlSelf->top__DOT__d_cache__DOT__ram_1_42;
        vlSelf->top__DOT__d_cache__DOT___GEN_5787 = vlSelf->top__DOT__d_cache__DOT__ram_1_43;
        vlSelf->top__DOT__d_cache__DOT___GEN_5788 = vlSelf->top__DOT__d_cache__DOT__ram_1_44;
        vlSelf->top__DOT__d_cache__DOT___GEN_5789 = vlSelf->top__DOT__d_cache__DOT__ram_1_45;
        vlSelf->top__DOT__d_cache__DOT___GEN_5790 = vlSelf->top__DOT__d_cache__DOT__ram_1_46;
        vlSelf->top__DOT__d_cache__DOT___GEN_5791 = vlSelf->top__DOT__d_cache__DOT__ram_1_47;
        vlSelf->top__DOT__d_cache__DOT___GEN_5792 = vlSelf->top__DOT__d_cache__DOT__ram_1_48;
        vlSelf->top__DOT__d_cache__DOT___GEN_5793 = vlSelf->top__DOT__d_cache__DOT__ram_1_49;
        vlSelf->top__DOT__d_cache__DOT___GEN_5794 = vlSelf->top__DOT__d_cache__DOT__ram_1_50;
        vlSelf->top__DOT__d_cache__DOT___GEN_5795 = vlSelf->top__DOT__d_cache__DOT__ram_1_51;
        vlSelf->top__DOT__d_cache__DOT___GEN_5796 = vlSelf->top__DOT__d_cache__DOT__ram_1_52;
        vlSelf->top__DOT__d_cache__DOT___GEN_5797 = vlSelf->top__DOT__d_cache__DOT__ram_1_53;
        vlSelf->top__DOT__d_cache__DOT___GEN_5798 = vlSelf->top__DOT__d_cache__DOT__ram_1_54;
        vlSelf->top__DOT__d_cache__DOT___GEN_5799 = vlSelf->top__DOT__d_cache__DOT__ram_1_55;
        vlSelf->top__DOT__d_cache__DOT___GEN_5800 = vlSelf->top__DOT__d_cache__DOT__ram_1_56;
        vlSelf->top__DOT__d_cache__DOT___GEN_5801 = vlSelf->top__DOT__d_cache__DOT__ram_1_57;
        vlSelf->top__DOT__d_cache__DOT___GEN_5802 = vlSelf->top__DOT__d_cache__DOT__ram_1_58;
        vlSelf->top__DOT__d_cache__DOT___GEN_5803 = vlSelf->top__DOT__d_cache__DOT__ram_1_59;
        vlSelf->top__DOT__d_cache__DOT___GEN_5804 = vlSelf->top__DOT__d_cache__DOT__ram_1_60;
        vlSelf->top__DOT__d_cache__DOT___GEN_5805 = vlSelf->top__DOT__d_cache__DOT__ram_1_61;
        vlSelf->top__DOT__d_cache__DOT___GEN_5806 = vlSelf->top__DOT__d_cache__DOT__ram_1_62;
        vlSelf->top__DOT__d_cache__DOT___GEN_5807 = vlSelf->top__DOT__d_cache__DOT__ram_1_63;
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_5919 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_47)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_47)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1533)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1533)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_47))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_47)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5920 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_48)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_48)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1534)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1534)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_48))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_48)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5921 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_49)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_49)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1535)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1535)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_49))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_49)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5922 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_50)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_50)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1536)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1536)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_50))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_50)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5923 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_51)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_51)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1537)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1537)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_51))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_51)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5924 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_52)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_52)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1538)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1538)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_52))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_52)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5925 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_53)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_53)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1539)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1539)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_53))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_53)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5926 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_54)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_54)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1540)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1540)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_54))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_54)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5927 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_55)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_55)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1541)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1541)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_55))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_55)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5928 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_56)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_56)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1542)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1542)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_56))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_56)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5929 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_57)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_57)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1543)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1543)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_57))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_57)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5930 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_58)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_58)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1544)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1544)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_58))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_58)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5931 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_59)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_59)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1545)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1545)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_59))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_59)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5932 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_60)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_60)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1546)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1546)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_60))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_60)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5933 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_61)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_61)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1547)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1547)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_61))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_61)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5934 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_62)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_62)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1548)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1548)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_62))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_62)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5935 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_63)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_63)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1549)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1549)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_63))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_63)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5551 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_0
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1166
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_0
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_0
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1166)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_0));
        vlSelf->top__DOT__d_cache__DOT___GEN_5552 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_1
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1167
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_1
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_1
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1167)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_1));
        vlSelf->top__DOT__d_cache__DOT___GEN_5553 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_2
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1168
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_2
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_2
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1168)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_2));
        vlSelf->top__DOT__d_cache__DOT___GEN_5554 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_3
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1169
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_3
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_3
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1169)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_3));
        vlSelf->top__DOT__d_cache__DOT___GEN_5555 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_4
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1170
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_4
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_4
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1170)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_4));
        vlSelf->top__DOT__d_cache__DOT___GEN_5556 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_5
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1171
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_5
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_5
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1171)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_5));
        vlSelf->top__DOT__d_cache__DOT___GEN_5557 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_6
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1172
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_6
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_6
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1172)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_6));
        vlSelf->top__DOT__d_cache__DOT___GEN_5558 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_7
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1173
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_7
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_7
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1173)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_7));
        vlSelf->top__DOT__d_cache__DOT___GEN_5559 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_8
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1174
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_8
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_8
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1174)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_8));
        vlSelf->top__DOT__d_cache__DOT___GEN_5560 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_9
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1175
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_9
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_9
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1175)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_9));
        vlSelf->top__DOT__d_cache__DOT___GEN_5561 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_10
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1176
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_10
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_10
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1176)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_10));
        vlSelf->top__DOT__d_cache__DOT___GEN_5562 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_11
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1177
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_11
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_11
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1177)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_11));
        vlSelf->top__DOT__d_cache__DOT___GEN_5563 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_12
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1178
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_12
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_12
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1178)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_12));
        vlSelf->top__DOT__d_cache__DOT___GEN_5564 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_13
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1179
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_13
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_13
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1179)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_13));
        vlSelf->top__DOT__d_cache__DOT___GEN_5565 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_14
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1180
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_14
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_14
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1180)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_14));
        vlSelf->top__DOT__d_cache__DOT___GEN_5566 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_15
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1181
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_15
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_15
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1181)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_15));
        vlSelf->top__DOT__d_cache__DOT___GEN_5567 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_16
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1182
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_16
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_16
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1182)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_16));
        vlSelf->top__DOT__d_cache__DOT___GEN_5568 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_17
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1183
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_17
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_17
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1183)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_17));
        vlSelf->top__DOT__d_cache__DOT___GEN_5569 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_18
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1184
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_18
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_18
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1184)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_18));
        vlSelf->top__DOT__d_cache__DOT___GEN_5570 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_19
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1185
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_19
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_19
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1185)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_19));
        vlSelf->top__DOT__d_cache__DOT___GEN_5571 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_20
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1186
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_20
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_20
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1186)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_20));
        vlSelf->top__DOT__d_cache__DOT___GEN_5572 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_21
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1187
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_21
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_21
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1187)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_21));
        vlSelf->top__DOT__d_cache__DOT___GEN_5573 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_22
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1188
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_22
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_22
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1188)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_22));
        vlSelf->top__DOT__d_cache__DOT___GEN_5574 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_23
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1189
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_23
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_23
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1189)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_23));
        vlSelf->top__DOT__d_cache__DOT___GEN_5575 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_24
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1190
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_24
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_24
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1190)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_24));
        vlSelf->top__DOT__d_cache__DOT___GEN_5576 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_25
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1191
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_25
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_25
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1191)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_25));
        vlSelf->top__DOT__d_cache__DOT___GEN_5577 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_26
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1192
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_26
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_26
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1192)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_26));
        vlSelf->top__DOT__d_cache__DOT___GEN_5578 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_27
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1193
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_27
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_27
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1193)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_27));
        vlSelf->top__DOT__d_cache__DOT___GEN_5579 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_28
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1194
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_28
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_28
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1194)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_28));
        vlSelf->top__DOT__d_cache__DOT___GEN_5580 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_29
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1195
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_29
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_29
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1195)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_29));
        vlSelf->top__DOT__d_cache__DOT___GEN_5581 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_30
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1196
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_30
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_30
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1196)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_30));
        vlSelf->top__DOT__d_cache__DOT___GEN_5582 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_31
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1197
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_31
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_31
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1197)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_31));
        vlSelf->top__DOT__d_cache__DOT___GEN_5583 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_32
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1198
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_32
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_32
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1198)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_32));
        vlSelf->top__DOT__d_cache__DOT___GEN_5584 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_33
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1199
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_33
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_33
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1199)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_33));
        vlSelf->top__DOT__d_cache__DOT___GEN_5585 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_34
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1200
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_34
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_34
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1200)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_34));
        vlSelf->top__DOT__d_cache__DOT___GEN_5586 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_35
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1201
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_35
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_35
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1201)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_35));
        vlSelf->top__DOT__d_cache__DOT___GEN_5587 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_36
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1202
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_36
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_36
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1202)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_36));
        vlSelf->top__DOT__d_cache__DOT___GEN_5588 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_37
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1203
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_37
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_37
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1203)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_37));
        vlSelf->top__DOT__d_cache__DOT___GEN_5589 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_38
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1204
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_38
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_38
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1204)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_38));
        vlSelf->top__DOT__d_cache__DOT___GEN_5590 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_39
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1205
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_39
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_39
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1205)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_39));
        vlSelf->top__DOT__d_cache__DOT___GEN_5591 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_40
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1206
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_40
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_40
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1206)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_40));
        vlSelf->top__DOT__d_cache__DOT___GEN_5592 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_41
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1207
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_41
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_41
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1207)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_41));
        vlSelf->top__DOT__d_cache__DOT___GEN_5593 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_42
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1208
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_42
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_42
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1208)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_42));
        vlSelf->top__DOT__d_cache__DOT___GEN_5594 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_43
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1209
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_43
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_43
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1209)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_43));
        vlSelf->top__DOT__d_cache__DOT___GEN_5595 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_44
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1210
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_44
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_44
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1210)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_44));
        vlSelf->top__DOT__d_cache__DOT___GEN_5596 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_45
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1211
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_45
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_45
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1211)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_45));
        vlSelf->top__DOT__d_cache__DOT___GEN_5597 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_46
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1212
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_46
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_46
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1212)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_46));
        vlSelf->top__DOT__d_cache__DOT___GEN_5598 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_47
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1213
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_47
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_47
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1213)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_47));
        vlSelf->top__DOT__d_cache__DOT___GEN_5599 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_48
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1214
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_48
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_48
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1214)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_48));
        vlSelf->top__DOT__d_cache__DOT___GEN_5600 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_49
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1215
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_49
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_49
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1215)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_49));
        vlSelf->top__DOT__d_cache__DOT___GEN_5601 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_50
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1216
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_50
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_50
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1216)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_50));
        vlSelf->top__DOT__d_cache__DOT___GEN_5602 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_51
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1217
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_51
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_51
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1217)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_51));
        vlSelf->top__DOT__d_cache__DOT___GEN_5603 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_52
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1218
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_52
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_52
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1218)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_52));
        vlSelf->top__DOT__d_cache__DOT___GEN_5604 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_53
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1219
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_53
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_53
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1219)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_53));
        vlSelf->top__DOT__d_cache__DOT___GEN_5605 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_54
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1220
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_54
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_54
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1220)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_54));
        vlSelf->top__DOT__d_cache__DOT___GEN_5606 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_55
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1221
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_55
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_55
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1221)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_55));
        vlSelf->top__DOT__d_cache__DOT___GEN_5607 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_56
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1222
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_56
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_56
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1222)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_56));
        vlSelf->top__DOT__d_cache__DOT___GEN_5608 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_57
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1223
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_57
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_57
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1223)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_57));
        vlSelf->top__DOT__d_cache__DOT___GEN_5609 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_58
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1224
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_58
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_58
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1224)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_58));
        vlSelf->top__DOT__d_cache__DOT___GEN_5610 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_59
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1225
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_59
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_59
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1225)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_59));
        vlSelf->top__DOT__d_cache__DOT___GEN_5611 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_60
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1226
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_60
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_60
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1226)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_60));
        vlSelf->top__DOT__d_cache__DOT___GEN_5612 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_61
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1227
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_61
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_61
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1227)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_61));
        vlSelf->top__DOT__d_cache__DOT___GEN_5613 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_62
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1228
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_62
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_62
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1228)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_62));
        vlSelf->top__DOT__d_cache__DOT___GEN_5614 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_63
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_1229
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_63
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_63
                              : vlSelf->top__DOT__d_cache__DOT___GEN_1229)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_63));
        vlSelf->top__DOT__d_cache__DOT___GEN_5744 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_0
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_0
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1358
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1358
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_0)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_0));
        vlSelf->top__DOT__d_cache__DOT___GEN_5745 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_1
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_1
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1359
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1359
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_1)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_1));
        vlSelf->top__DOT__d_cache__DOT___GEN_5746 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_2
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_2
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1360
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1360
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_2)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_2));
        vlSelf->top__DOT__d_cache__DOT___GEN_5747 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_3
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_3
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1361
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1361
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_3)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_3));
        vlSelf->top__DOT__d_cache__DOT___GEN_5748 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_4
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_4
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1362
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1362
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_4)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_4));
        vlSelf->top__DOT__d_cache__DOT___GEN_5749 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_5
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_5
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1363
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1363
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_5)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_5));
        vlSelf->top__DOT__d_cache__DOT___GEN_5750 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_6
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_6
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1364
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1364
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_6)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_6));
        vlSelf->top__DOT__d_cache__DOT___GEN_5751 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_7
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_7
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1365
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1365
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_7)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_7));
        vlSelf->top__DOT__d_cache__DOT___GEN_5752 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_8
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_8
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1366
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1366
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_8)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_8));
        vlSelf->top__DOT__d_cache__DOT___GEN_5753 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_9
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_9
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1367
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1367
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_9)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_9));
        vlSelf->top__DOT__d_cache__DOT___GEN_5754 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_10
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_10
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1368
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1368
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_10)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_10));
        vlSelf->top__DOT__d_cache__DOT___GEN_5755 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_11
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_11
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1369
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1369
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_11)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_11));
        vlSelf->top__DOT__d_cache__DOT___GEN_5756 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_12
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_12
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1370
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1370
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_12)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_12));
        vlSelf->top__DOT__d_cache__DOT___GEN_5757 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_13
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_13
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1371
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1371
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_13)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_13));
        vlSelf->top__DOT__d_cache__DOT___GEN_5758 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_14
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_14
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1372
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1372
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_14)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_14));
        vlSelf->top__DOT__d_cache__DOT___GEN_5759 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_15
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_15
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1373
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1373
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_15)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_15));
        vlSelf->top__DOT__d_cache__DOT___GEN_5760 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_16
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_16
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1374
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1374
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_16)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_16));
        vlSelf->top__DOT__d_cache__DOT___GEN_5761 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_17
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_17
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1375
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1375
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_17)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_17));
        vlSelf->top__DOT__d_cache__DOT___GEN_5762 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_18
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_18
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1376
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1376
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_18)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_18));
        vlSelf->top__DOT__d_cache__DOT___GEN_5763 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_19
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_19
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1377
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1377
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_19)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_19));
        vlSelf->top__DOT__d_cache__DOT___GEN_5764 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_20
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_20
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1378
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1378
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_20)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_20));
        vlSelf->top__DOT__d_cache__DOT___GEN_5765 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_21
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_21
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1379
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1379
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_21)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_21));
        vlSelf->top__DOT__d_cache__DOT___GEN_5766 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_22
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_22
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1380
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1380
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_22)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_22));
        vlSelf->top__DOT__d_cache__DOT___GEN_5767 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_23
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_23
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1381
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1381
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_23)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_23));
        vlSelf->top__DOT__d_cache__DOT___GEN_5768 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_24
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_24
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1382
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1382
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_24)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_24));
        vlSelf->top__DOT__d_cache__DOT___GEN_5769 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_25
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_25
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1383
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1383
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_25)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_25));
        vlSelf->top__DOT__d_cache__DOT___GEN_5770 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_26
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_26
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1384
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1384
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_26)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_26));
        vlSelf->top__DOT__d_cache__DOT___GEN_5771 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_27
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_27
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1385
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1385
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_27)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_27));
        vlSelf->top__DOT__d_cache__DOT___GEN_5772 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_28
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_28
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1386
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1386
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_28)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_28));
        vlSelf->top__DOT__d_cache__DOT___GEN_5773 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_29
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_29
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1387
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1387
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_29)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_29));
        vlSelf->top__DOT__d_cache__DOT___GEN_5774 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_30
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_30
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1388
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1388
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_30)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_30));
        vlSelf->top__DOT__d_cache__DOT___GEN_5775 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_31
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_31
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1389
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1389
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_31)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_31));
        vlSelf->top__DOT__d_cache__DOT___GEN_5776 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_32
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_32
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1390
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1390
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_32)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_32));
        vlSelf->top__DOT__d_cache__DOT___GEN_5777 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_33
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_33
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1391
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1391
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_33)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_33));
        vlSelf->top__DOT__d_cache__DOT___GEN_5778 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_34
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_34
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1392
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1392
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_34)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_34));
        vlSelf->top__DOT__d_cache__DOT___GEN_5779 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_35
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_35
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1393
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1393
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_35)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_35));
        vlSelf->top__DOT__d_cache__DOT___GEN_5780 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_36
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_36
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1394
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1394
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_36)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_36));
        vlSelf->top__DOT__d_cache__DOT___GEN_5781 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_37
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_37
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1395
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1395
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_37)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_37));
        vlSelf->top__DOT__d_cache__DOT___GEN_5782 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_38
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_38
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1396
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1396
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_38)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_38));
        vlSelf->top__DOT__d_cache__DOT___GEN_5783 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_39
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_39
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1397
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1397
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_39)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_39));
        vlSelf->top__DOT__d_cache__DOT___GEN_5784 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_40
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_40
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1398
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1398
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_40)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_40));
        vlSelf->top__DOT__d_cache__DOT___GEN_5785 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_41
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_41
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1399
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1399
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_41)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_41));
        vlSelf->top__DOT__d_cache__DOT___GEN_5786 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_42
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_42
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1400
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1400
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_42)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_42));
        vlSelf->top__DOT__d_cache__DOT___GEN_5787 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_43
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_43
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1401
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1401
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_43)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_43));
        vlSelf->top__DOT__d_cache__DOT___GEN_5788 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_44
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_44
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1402
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1402
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_44)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_44));
        vlSelf->top__DOT__d_cache__DOT___GEN_5789 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_45
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_45
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1403
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1403
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_45)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_45));
        vlSelf->top__DOT__d_cache__DOT___GEN_5790 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_46
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_46
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1404
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1404
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_46)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_46));
        vlSelf->top__DOT__d_cache__DOT___GEN_5791 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_47
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_47
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1405
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1405
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_47)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_47));
        vlSelf->top__DOT__d_cache__DOT___GEN_5792 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_48
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_48
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1406
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1406
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_48)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_48));
        vlSelf->top__DOT__d_cache__DOT___GEN_5793 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_49
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_49
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1407
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1407
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_49)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_49));
        vlSelf->top__DOT__d_cache__DOT___GEN_5794 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_50
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_50
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1408
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1408
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_50)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_50));
        vlSelf->top__DOT__d_cache__DOT___GEN_5795 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_51
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_51
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1409
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1409
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_51)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_51));
        vlSelf->top__DOT__d_cache__DOT___GEN_5796 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_52
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_52
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1410
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1410
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_52)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_52));
        vlSelf->top__DOT__d_cache__DOT___GEN_5797 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_53
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_53
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1411
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1411
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_53)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_53));
        vlSelf->top__DOT__d_cache__DOT___GEN_5798 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_54
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_54
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1412
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1412
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_54)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_54));
        vlSelf->top__DOT__d_cache__DOT___GEN_5799 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_55
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_55
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1413
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1413
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_55)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_55));
        vlSelf->top__DOT__d_cache__DOT___GEN_5800 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_56
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_56
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1414
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1414
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_56)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_56));
        vlSelf->top__DOT__d_cache__DOT___GEN_5801 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_57
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_57
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1415
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1415
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_57)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_57));
        vlSelf->top__DOT__d_cache__DOT___GEN_5802 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_58
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_58
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1416
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1416
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_58)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_58));
        vlSelf->top__DOT__d_cache__DOT___GEN_5803 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_59
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_59
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1417
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1417
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_59)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_59));
        vlSelf->top__DOT__d_cache__DOT___GEN_5804 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_60
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_60
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1418
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1418
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_60)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_60));
        vlSelf->top__DOT__d_cache__DOT___GEN_5805 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_61
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_61
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1419
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1419
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_61)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_61));
        vlSelf->top__DOT__d_cache__DOT___GEN_5806 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_62
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_62
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1420
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1420
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_62)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_62));
        vlSelf->top__DOT__d_cache__DOT___GEN_5807 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_63
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_63
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1421
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1421
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_63)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_63));
    }
    vlSelf->top__DOT__exu_step__DOT___j_pc_T_62 = (
                                                   (0x3cU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   ((((0U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__idu_step_io_inst 
                                                           >> 0xfU)))
                                                       ? 0ULL
                                                       : 
                                                      vlSelf->top__DOT__exu_step__DOT__Regfile
                                                      [
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__idu_step_io_inst 
                                                          >> 0xfU))]) 
                                                     >= 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__idu_step_io_inst 
                                                           >> 0x14U)))
                                                       ? 0ULL
                                                       : 
                                                      vlSelf->top__DOT__exu_step__DOT__Regfile
                                                      [
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__idu_step_io_inst 
                                                          >> 0x14U))]))
                                                     ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                     : 
                                                    (4ULL 
                                                     + vlSelf->top__DOT__pc_now))
                                                    : 
                                                   ((0x2dU 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    ((((0U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__idu_step_io_inst 
                                                            >> 0xfU)))
                                                        ? 0ULL
                                                        : 
                                                       vlSelf->top__DOT__exu_step__DOT__Regfile
                                                       [
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__idu_step_io_inst 
                                                           >> 0xfU))]) 
                                                      < 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__idu_step_io_inst 
                                                            >> 0x14U)))
                                                        ? 0ULL
                                                        : 
                                                       vlSelf->top__DOT__exu_step__DOT__Regfile
                                                       [
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__idu_step_io_inst 
                                                           >> 0x14U))]))
                                                      ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                      : 
                                                     (4ULL 
                                                      + vlSelf->top__DOT__pc_now))
                                                     : 
                                                    ((0x2cU 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     (VL_LTS_IQQ(1,64,64, 
                                                                 ((0U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelf->top__DOT__idu_step_io_inst 
                                                                       >> 0xfU)))
                                                                   ? 0ULL
                                                                   : 
                                                                  vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                  [
                                                                  (0x1fU 
                                                                   & (vlSelf->top__DOT__idu_step_io_inst 
                                                                      >> 0xfU))]), 
                                                                 ((0U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelf->top__DOT__idu_step_io_inst 
                                                                       >> 0x14U)))
                                                                   ? 0ULL
                                                                   : 
                                                                  vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                  [
                                                                  (0x1fU 
                                                                   & (vlSelf->top__DOT__idu_step_io_inst 
                                                                      >> 0x14U))]))
                                                       ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                       : 
                                                      (4ULL 
                                                       + vlSelf->top__DOT__pc_now))
                                                      : vlSelf->top__DOT__exu_step__DOT___j_pc_T_56)));
    if (((IData)(vlSelf->top__DOT__axi__DOT__axi_arready) 
         & (IData)(vlSelf->top__DOT__arbiter_io_axi_out_arvalid))) {
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit((QData)((IData)(
                                                                              ((0U 
                                                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                                ? 
                                                                               ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_7705)
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_7705)
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                                                 ? (IData)(vlSelf->top__DOT__pc_now)
                                                                                 : 0U)))
                                                                                : 
                                                                               ((1U 
                                                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                                 ? (IData)(vlSelf->top__DOT__pc_now)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_7705)
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_7705)
                                                                                 : 0U)))))), vlSelf->__Vtask_pmem_read__0__Rdata);
        vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata 
            = vlSelf->__Vtask_pmem_read__0__Rdata;
    }
    if (((IData)(vlSelf->top__DOT__axi__DOT__axi_wready) 
         & (IData)(vlSelf->top__DOT__arbiter_io_axi_out_wvalid))) {
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit((QData)((IData)(
                                                                               ((0U 
                                                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                                                                 ? vlSelf->top__DOT__d_cache_io_to_axi_awaddr
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                                                 ? vlSelf->top__DOT__d_cache_io_to_axi_awaddr
                                                                                 : 0U))
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                                 ? vlSelf->top__DOT__d_cache_io_to_axi_awaddr
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                                 ? vlSelf->top__DOT__d_cache_io_to_axi_awaddr
                                                                                 : 0U)))))), (QData)((IData)(
                                                                                ((0U 
                                                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_7709)
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_7709)
                                                                                 : 0U))
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_7709)
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_7709)
                                                                                 : 0U)))))), 
                                                               ((0U 
                                                                 == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                 ? 
                                                                ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                                                  ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wstrb)
                                                                  : 
                                                                 ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                                   ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wstrb)
                                                                   : 0U))
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                  ? 0U
                                                                  : 
                                                                 ((2U 
                                                                   == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                   ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wstrb)
                                                                   : 
                                                                  ((3U 
                                                                    == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                    ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wstrb)
                                                                    : 0U)))));
    }
    if ((0x1aU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                    >> 3U))))) {
        top__DOT__d_cache__DOT___GEN_90 = vlSelf->top__DOT__d_cache__DOT__valid_0_26;
        top__DOT__d_cache__DOT___GEN_219 = vlSelf->top__DOT__d_cache__DOT__valid_1_26;
        top__DOT__d_cache__DOT___GEN_26 = vlSelf->top__DOT__d_cache__DOT__tag_0_26;
        top__DOT__d_cache__DOT___GEN_155 = vlSelf->top__DOT__d_cache__DOT__tag_1_26;
    } else {
        top__DOT__d_cache__DOT___GEN_90 = ((0x19U == 
                                            (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U))))
                                            ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_25)
                                            : ((0x18U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                                ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_24)
                                                : (
                                                   (0x17U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_23)
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_22)
                                                     : 
                                                    ((0x15U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_21)
                                                      : 
                                                     ((0x14U 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_20)
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_19)
                                                        : 
                                                       ((0x12U 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_18)
                                                         : 
                                                        ((0x11U 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_17)
                                                          : 
                                                         ((0x10U 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_16)
                                                           : 
                                                          ((0xfU 
                                                            == 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                        >> 3U))))
                                                            ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_15)
                                                            : 
                                                           ((0xeU 
                                                             == 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                         >> 3U))))
                                                             ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_14)
                                                             : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_77)))))))))))));
        top__DOT__d_cache__DOT___GEN_219 = ((0x19U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                             ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_25)
                                             : ((0x18U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_24)
                                                 : 
                                                ((0x17U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_23)
                                                  : 
                                                 ((0x16U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_22)
                                                   : 
                                                  ((0x15U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_21)
                                                    : 
                                                   ((0x14U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_20)
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_19)
                                                      : 
                                                     ((0x12U 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_18)
                                                       : 
                                                      ((0x11U 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_17)
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_16)
                                                         : 
                                                        ((0xfU 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_15)
                                                          : 
                                                         ((0xeU 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_14)
                                                           : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_206)))))))))))));
        top__DOT__d_cache__DOT___GEN_26 = ((0x19U == 
                                            (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U))))
                                            ? vlSelf->top__DOT__d_cache__DOT__tag_0_25
                                            : ((0x18U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                                ? vlSelf->top__DOT__d_cache__DOT__tag_0_24
                                                : (
                                                   (0x17U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? vlSelf->top__DOT__d_cache__DOT__tag_0_23
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? vlSelf->top__DOT__d_cache__DOT__tag_0_22
                                                     : 
                                                    ((0x15U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? vlSelf->top__DOT__d_cache__DOT__tag_0_21
                                                      : 
                                                     ((0x14U 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? vlSelf->top__DOT__d_cache__DOT__tag_0_20
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? vlSelf->top__DOT__d_cache__DOT__tag_0_19
                                                        : 
                                                       ((0x12U 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? vlSelf->top__DOT__d_cache__DOT__tag_0_18
                                                         : 
                                                        ((0x11U 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_17
                                                          : 
                                                         ((0x10U 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? vlSelf->top__DOT__d_cache__DOT__tag_0_16
                                                           : 
                                                          ((0xfU 
                                                            == 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                        >> 3U))))
                                                            ? vlSelf->top__DOT__d_cache__DOT__tag_0_15
                                                            : 
                                                           ((0xeU 
                                                             == 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                         >> 3U))))
                                                             ? vlSelf->top__DOT__d_cache__DOT__tag_0_14
                                                             : vlSelf->top__DOT__d_cache__DOT___GEN_13))))))))))));
        top__DOT__d_cache__DOT___GEN_155 = ((0x19U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                             ? vlSelf->top__DOT__d_cache__DOT__tag_1_25
                                             : ((0x18U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                                 ? vlSelf->top__DOT__d_cache__DOT__tag_1_24
                                                 : 
                                                ((0x17U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? vlSelf->top__DOT__d_cache__DOT__tag_1_23
                                                  : 
                                                 ((0x16U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? vlSelf->top__DOT__d_cache__DOT__tag_1_22
                                                   : 
                                                  ((0x15U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? vlSelf->top__DOT__d_cache__DOT__tag_1_21
                                                    : 
                                                   ((0x14U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? vlSelf->top__DOT__d_cache__DOT__tag_1_20
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_19
                                                      : 
                                                     ((0x12U 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? vlSelf->top__DOT__d_cache__DOT__tag_1_18
                                                       : 
                                                      ((0x11U 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? vlSelf->top__DOT__d_cache__DOT__tag_1_17
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? vlSelf->top__DOT__d_cache__DOT__tag_1_16
                                                         : 
                                                        ((0xfU 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? vlSelf->top__DOT__d_cache__DOT__tag_1_15
                                                          : 
                                                         ((0xeU 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? vlSelf->top__DOT__d_cache__DOT__tag_1_14
                                                           : vlSelf->top__DOT__d_cache__DOT___GEN_142))))))))))));
    }
    VL_EXTEND_WQ(127,64, __Vtemp106, vlSelf->top__DOT__d_cache__DOT__wmask);
    VL_SHIFTL_WWI(127,127,6, __Vtemp107, __Vtemp106, (IData)(vlSelf->top__DOT__d_cache__DOT__shift_bit));
    top__DOT__d_cache__DOT___ram_0_T_2[0U] = __Vtemp107[0U];
    top__DOT__d_cache__DOT___ram_0_T_2[1U] = __Vtemp107[1U];
    top__DOT__d_cache__DOT___ram_0_T_2[2U] = __Vtemp107[2U];
    top__DOT__d_cache__DOT___ram_0_T_2[3U] = (0x7fffffffU 
                                              & __Vtemp107[3U]);
    VL_EXTEND_WQ(127,64, __Vtemp110, ((QData)((IData)(vlSelf->top__DOT__exu_step_io_Mem_wdata)) 
                                      & vlSelf->top__DOT__d_cache__DOT__wmask));
    VL_SHIFTL_WWI(127,127,6, __Vtemp111, __Vtemp110, (IData)(vlSelf->top__DOT__d_cache__DOT__shift_bit));
    top__DOT__d_cache__DOT___ram_0_T_1[0U] = __Vtemp111[0U];
    top__DOT__d_cache__DOT___ram_0_T_1[1U] = __Vtemp111[1U];
    top__DOT__d_cache__DOT___ram_0_T_1[2U] = __Vtemp111[2U];
    top__DOT__d_cache__DOT___ram_0_T_1[3U] = (0x7fffffffU 
                                              & __Vtemp111[3U]);
    if ((0x1aU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                    >> 3U))))) {
        top__DOT__d_cache__DOT___GEN_288 = vlSelf->top__DOT__d_cache__DOT__dirty_0_26;
        top__DOT__d_cache__DOT___GEN_353 = vlSelf->top__DOT__d_cache__DOT__dirty_1_26;
        top__DOT__d_cache__DOT___GEN_419 = vlSelf->top__DOT__d_cache__DOT__ram_0_26;
        top__DOT__d_cache__DOT___GEN_611 = vlSelf->top__DOT__d_cache__DOT__ram_1_26;
    } else {
        top__DOT__d_cache__DOT___GEN_288 = ((0x19U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                             ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_25)
                                             : ((0x18U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_24)
                                                 : 
                                                ((0x17U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_23)
                                                  : 
                                                 ((0x16U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_22)
                                                   : 
                                                  ((0x15U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_21)
                                                    : 
                                                   ((0x14U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_20)
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_19)
                                                      : 
                                                     ((0x12U 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_18)
                                                       : 
                                                      ((0x11U 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_17)
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_16)
                                                         : 
                                                        ((0xfU 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)
                                                          : 
                                                         ((0xeU 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)
                                                           : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_275)))))))))))));
        top__DOT__d_cache__DOT___GEN_353 = ((0x19U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                             ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_25)
                                             : ((0x18U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_24)
                                                 : 
                                                ((0x17U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_23)
                                                  : 
                                                 ((0x16U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_22)
                                                   : 
                                                  ((0x15U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_21)
                                                    : 
                                                   ((0x14U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_20)
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_19)
                                                      : 
                                                     ((0x12U 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_18)
                                                       : 
                                                      ((0x11U 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_17)
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_16)
                                                         : 
                                                        ((0xfU 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_15)
                                                          : 
                                                         ((0xeU 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_14)
                                                           : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_340)))))))))))));
        top__DOT__d_cache__DOT___GEN_419 = ((0x19U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                             ? vlSelf->top__DOT__d_cache__DOT__ram_0_25
                                             : ((0x18U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                                 ? vlSelf->top__DOT__d_cache__DOT__ram_0_24
                                                 : 
                                                ((0x17U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? vlSelf->top__DOT__d_cache__DOT__ram_0_23
                                                  : 
                                                 ((0x16U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? vlSelf->top__DOT__d_cache__DOT__ram_0_22
                                                   : 
                                                  ((0x15U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_21
                                                    : 
                                                   ((0x14U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? vlSelf->top__DOT__d_cache__DOT__ram_0_20
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? vlSelf->top__DOT__d_cache__DOT__ram_0_19
                                                      : 
                                                     ((0x12U 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? vlSelf->top__DOT__d_cache__DOT__ram_0_18
                                                       : 
                                                      ((0x11U 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? vlSelf->top__DOT__d_cache__DOT__ram_0_17
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? vlSelf->top__DOT__d_cache__DOT__ram_0_16
                                                         : 
                                                        ((0xfU 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_15
                                                          : 
                                                         ((0xeU 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? vlSelf->top__DOT__d_cache__DOT__ram_0_14
                                                           : vlSelf->top__DOT__d_cache__DOT___GEN_406))))))))))));
        top__DOT__d_cache__DOT___GEN_611 = ((0x19U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                             ? vlSelf->top__DOT__d_cache__DOT__ram_1_25
                                             : ((0x18U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                                 ? vlSelf->top__DOT__d_cache__DOT__ram_1_24
                                                 : 
                                                ((0x17U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? vlSelf->top__DOT__d_cache__DOT__ram_1_23
                                                  : 
                                                 ((0x16U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? vlSelf->top__DOT__d_cache__DOT__ram_1_22
                                                   : 
                                                  ((0x15U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_21
                                                    : 
                                                   ((0x14U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? vlSelf->top__DOT__d_cache__DOT__ram_1_20
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_19
                                                      : 
                                                     ((0x12U 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? vlSelf->top__DOT__d_cache__DOT__ram_1_18
                                                       : 
                                                      ((0x11U 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_17
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? vlSelf->top__DOT__d_cache__DOT__ram_1_16
                                                         : 
                                                        ((0xfU 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? vlSelf->top__DOT__d_cache__DOT__ram_1_15
                                                          : 
                                                         ((0xeU 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? vlSelf->top__DOT__d_cache__DOT__ram_1_14
                                                           : vlSelf->top__DOT__d_cache__DOT___GEN_598))))))))))));
    }
    vlSelf->top__DOT__i_cache__DOT___GEN_521 = ((IData)(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid)
                                                 ? 
                                                ((0U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                                   ? 0ULL
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                    ? 0ULL
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                     ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                                                     : 0ULL)))
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                   ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                                                   : 0ULL))
                                                 : vlSelf->top__DOT__i_cache__DOT__receive_data);
    vlSelf->top__DOT__d_cache__DOT___GEN_5550 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                                     ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                      ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                                                      : 0ULL))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                     ? 0ULL
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                      ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                       ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                                                       : 0ULL))))
                                                   : vlSelf->top__DOT__d_cache__DOT__receive_data)
                                                  : vlSelf->top__DOT__d_cache__DOT__receive_data);
    if ((0x27U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                    >> 3U))))) {
        top__DOT__d_cache__DOT___GEN_103 = vlSelf->top__DOT__d_cache__DOT__valid_0_39;
        top__DOT__d_cache__DOT___GEN_232 = vlSelf->top__DOT__d_cache__DOT__valid_1_39;
        top__DOT__d_cache__DOT___GEN_39 = vlSelf->top__DOT__d_cache__DOT__tag_0_39;
        top__DOT__d_cache__DOT___GEN_168 = vlSelf->top__DOT__d_cache__DOT__tag_1_39;
        top__DOT__d_cache__DOT___GEN_301 = vlSelf->top__DOT__d_cache__DOT__dirty_0_39;
        top__DOT__d_cache__DOT___GEN_366 = vlSelf->top__DOT__d_cache__DOT__dirty_1_39;
        top__DOT__d_cache__DOT___GEN_432 = vlSelf->top__DOT__d_cache__DOT__ram_0_39;
        top__DOT__d_cache__DOT___GEN_624 = vlSelf->top__DOT__d_cache__DOT__ram_1_39;
    } else {
        top__DOT__d_cache__DOT___GEN_103 = ((0x26U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                             ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_38)
                                             : ((0x25U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_37)
                                                 : 
                                                ((0x24U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_36)
                                                  : 
                                                 ((0x23U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_35)
                                                   : 
                                                  ((0x22U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_34)
                                                    : 
                                                   ((0x21U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_33)
                                                     : 
                                                    ((0x20U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_32)
                                                      : 
                                                     ((0x1fU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_31)
                                                       : 
                                                      ((0x1eU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_30)
                                                        : 
                                                       ((0x1dU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_29)
                                                         : 
                                                        ((0x1cU 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_28)
                                                          : 
                                                         ((0x1bU 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_27)
                                                           : (IData)(top__DOT__d_cache__DOT___GEN_90)))))))))))));
        top__DOT__d_cache__DOT___GEN_232 = ((0x26U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                             ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_38)
                                             : ((0x25U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_37)
                                                 : 
                                                ((0x24U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_36)
                                                  : 
                                                 ((0x23U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_35)
                                                   : 
                                                  ((0x22U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_34)
                                                    : 
                                                   ((0x21U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_33)
                                                     : 
                                                    ((0x20U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_32)
                                                      : 
                                                     ((0x1fU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_31)
                                                       : 
                                                      ((0x1eU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_30)
                                                        : 
                                                       ((0x1dU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_29)
                                                         : 
                                                        ((0x1cU 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_28)
                                                          : 
                                                         ((0x1bU 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_27)
                                                           : (IData)(top__DOT__d_cache__DOT___GEN_219)))))))))))));
        top__DOT__d_cache__DOT___GEN_39 = ((0x26U == 
                                            (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U))))
                                            ? vlSelf->top__DOT__d_cache__DOT__tag_0_38
                                            : ((0x25U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                                ? vlSelf->top__DOT__d_cache__DOT__tag_0_37
                                                : (
                                                   (0x24U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? vlSelf->top__DOT__d_cache__DOT__tag_0_36
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? vlSelf->top__DOT__d_cache__DOT__tag_0_35
                                                     : 
                                                    ((0x22U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? vlSelf->top__DOT__d_cache__DOT__tag_0_34
                                                      : 
                                                     ((0x21U 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? vlSelf->top__DOT__d_cache__DOT__tag_0_33
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? vlSelf->top__DOT__d_cache__DOT__tag_0_32
                                                        : 
                                                       ((0x1fU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? vlSelf->top__DOT__d_cache__DOT__tag_0_31
                                                         : 
                                                        ((0x1eU 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_30
                                                          : 
                                                         ((0x1dU 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? vlSelf->top__DOT__d_cache__DOT__tag_0_29
                                                           : 
                                                          ((0x1cU 
                                                            == 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                        >> 3U))))
                                                            ? vlSelf->top__DOT__d_cache__DOT__tag_0_28
                                                            : 
                                                           ((0x1bU 
                                                             == 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                         >> 3U))))
                                                             ? vlSelf->top__DOT__d_cache__DOT__tag_0_27
                                                             : top__DOT__d_cache__DOT___GEN_26))))))))))));
        top__DOT__d_cache__DOT___GEN_168 = ((0x26U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                             ? vlSelf->top__DOT__d_cache__DOT__tag_1_38
                                             : ((0x25U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                                 ? vlSelf->top__DOT__d_cache__DOT__tag_1_37
                                                 : 
                                                ((0x24U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? vlSelf->top__DOT__d_cache__DOT__tag_1_36
                                                  : 
                                                 ((0x23U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? vlSelf->top__DOT__d_cache__DOT__tag_1_35
                                                   : 
                                                  ((0x22U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? vlSelf->top__DOT__d_cache__DOT__tag_1_34
                                                    : 
                                                   ((0x21U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? vlSelf->top__DOT__d_cache__DOT__tag_1_33
                                                     : 
                                                    ((0x20U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_32
                                                      : 
                                                     ((0x1fU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? vlSelf->top__DOT__d_cache__DOT__tag_1_31
                                                       : 
                                                      ((0x1eU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? vlSelf->top__DOT__d_cache__DOT__tag_1_30
                                                        : 
                                                       ((0x1dU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? vlSelf->top__DOT__d_cache__DOT__tag_1_29
                                                         : 
                                                        ((0x1cU 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? vlSelf->top__DOT__d_cache__DOT__tag_1_28
                                                          : 
                                                         ((0x1bU 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? vlSelf->top__DOT__d_cache__DOT__tag_1_27
                                                           : top__DOT__d_cache__DOT___GEN_155))))))))))));
        top__DOT__d_cache__DOT___GEN_301 = ((0x26U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                             ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_38)
                                             : ((0x25U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_37)
                                                 : 
                                                ((0x24U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_36)
                                                  : 
                                                 ((0x23U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_35)
                                                   : 
                                                  ((0x22U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_34)
                                                    : 
                                                   ((0x21U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_33)
                                                     : 
                                                    ((0x20U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_32)
                                                      : 
                                                     ((0x1fU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_31)
                                                       : 
                                                      ((0x1eU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_30)
                                                        : 
                                                       ((0x1dU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_29)
                                                         : 
                                                        ((0x1cU 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_28)
                                                          : 
                                                         ((0x1bU 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_27)
                                                           : (IData)(top__DOT__d_cache__DOT___GEN_288)))))))))))));
        top__DOT__d_cache__DOT___GEN_366 = ((0x26U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                             ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_38)
                                             : ((0x25U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_37)
                                                 : 
                                                ((0x24U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_36)
                                                  : 
                                                 ((0x23U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_35)
                                                   : 
                                                  ((0x22U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_34)
                                                    : 
                                                   ((0x21U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_33)
                                                     : 
                                                    ((0x20U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_32)
                                                      : 
                                                     ((0x1fU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_31)
                                                       : 
                                                      ((0x1eU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_30)
                                                        : 
                                                       ((0x1dU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_29)
                                                         : 
                                                        ((0x1cU 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_28)
                                                          : 
                                                         ((0x1bU 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_27)
                                                           : (IData)(top__DOT__d_cache__DOT___GEN_353)))))))))))));
        top__DOT__d_cache__DOT___GEN_432 = ((0x26U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                             ? vlSelf->top__DOT__d_cache__DOT__ram_0_38
                                             : ((0x25U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                                 ? vlSelf->top__DOT__d_cache__DOT__ram_0_37
                                                 : 
                                                ((0x24U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? vlSelf->top__DOT__d_cache__DOT__ram_0_36
                                                  : 
                                                 ((0x23U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? vlSelf->top__DOT__d_cache__DOT__ram_0_35
                                                   : 
                                                  ((0x22U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_34
                                                    : 
                                                   ((0x21U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? vlSelf->top__DOT__d_cache__DOT__ram_0_33
                                                     : 
                                                    ((0x20U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? vlSelf->top__DOT__d_cache__DOT__ram_0_32
                                                      : 
                                                     ((0x1fU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? vlSelf->top__DOT__d_cache__DOT__ram_0_31
                                                       : 
                                                      ((0x1eU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? vlSelf->top__DOT__d_cache__DOT__ram_0_30
                                                        : 
                                                       ((0x1dU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? vlSelf->top__DOT__d_cache__DOT__ram_0_29
                                                         : 
                                                        ((0x1cU 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_28
                                                          : 
                                                         ((0x1bU 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? vlSelf->top__DOT__d_cache__DOT__ram_0_27
                                                           : top__DOT__d_cache__DOT___GEN_419))))))))))));
        top__DOT__d_cache__DOT___GEN_624 = ((0x26U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                             ? vlSelf->top__DOT__d_cache__DOT__ram_1_38
                                             : ((0x25U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                                 ? vlSelf->top__DOT__d_cache__DOT__ram_1_37
                                                 : 
                                                ((0x24U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? vlSelf->top__DOT__d_cache__DOT__ram_1_36
                                                  : 
                                                 ((0x23U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? vlSelf->top__DOT__d_cache__DOT__ram_1_35
                                                   : 
                                                  ((0x22U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_34
                                                    : 
                                                   ((0x21U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? vlSelf->top__DOT__d_cache__DOT__ram_1_33
                                                     : 
                                                    ((0x20U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_32
                                                      : 
                                                     ((0x1fU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? vlSelf->top__DOT__d_cache__DOT__ram_1_31
                                                       : 
                                                      ((0x1eU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_30
                                                        : 
                                                       ((0x1dU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? vlSelf->top__DOT__d_cache__DOT__ram_1_29
                                                         : 
                                                        ((0x1cU 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? vlSelf->top__DOT__d_cache__DOT__ram_1_28
                                                          : 
                                                         ((0x1bU 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? vlSelf->top__DOT__d_cache__DOT__ram_1_27
                                                           : top__DOT__d_cache__DOT___GEN_611))))))))))));
    }
    if ((0x34U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                    >> 3U))))) {
        top__DOT__d_cache__DOT___GEN_116 = vlSelf->top__DOT__d_cache__DOT__valid_0_52;
        top__DOT__d_cache__DOT___GEN_245 = vlSelf->top__DOT__d_cache__DOT__valid_1_52;
        top__DOT__d_cache__DOT___GEN_52 = vlSelf->top__DOT__d_cache__DOT__tag_0_52;
        top__DOT__d_cache__DOT___GEN_181 = vlSelf->top__DOT__d_cache__DOT__tag_1_52;
        top__DOT__d_cache__DOT___GEN_314 = vlSelf->top__DOT__d_cache__DOT__dirty_0_52;
        top__DOT__d_cache__DOT___GEN_379 = vlSelf->top__DOT__d_cache__DOT__dirty_1_52;
        top__DOT__d_cache__DOT___GEN_445 = vlSelf->top__DOT__d_cache__DOT__ram_0_52;
        top__DOT__d_cache__DOT___GEN_637 = vlSelf->top__DOT__d_cache__DOT__ram_1_52;
    } else {
        top__DOT__d_cache__DOT___GEN_116 = ((0x33U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                             ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_51)
                                             : ((0x32U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_50)
                                                 : 
                                                ((0x31U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_49)
                                                  : 
                                                 ((0x30U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_48)
                                                   : 
                                                  ((0x2fU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_47)
                                                    : 
                                                   ((0x2eU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_46)
                                                     : 
                                                    ((0x2dU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_45)
                                                      : 
                                                     ((0x2cU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_44)
                                                       : 
                                                      ((0x2bU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_43)
                                                        : 
                                                       ((0x2aU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_42)
                                                         : 
                                                        ((0x29U 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_41)
                                                          : 
                                                         ((0x28U 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_40)
                                                           : (IData)(top__DOT__d_cache__DOT___GEN_103)))))))))))));
        top__DOT__d_cache__DOT___GEN_245 = ((0x33U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                             ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_51)
                                             : ((0x32U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_50)
                                                 : 
                                                ((0x31U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_49)
                                                  : 
                                                 ((0x30U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_48)
                                                   : 
                                                  ((0x2fU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_47)
                                                    : 
                                                   ((0x2eU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_46)
                                                     : 
                                                    ((0x2dU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_45)
                                                      : 
                                                     ((0x2cU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_44)
                                                       : 
                                                      ((0x2bU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_43)
                                                        : 
                                                       ((0x2aU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_42)
                                                         : 
                                                        ((0x29U 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_41)
                                                          : 
                                                         ((0x28U 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_40)
                                                           : (IData)(top__DOT__d_cache__DOT___GEN_232)))))))))))));
        top__DOT__d_cache__DOT___GEN_52 = ((0x33U == 
                                            (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U))))
                                            ? vlSelf->top__DOT__d_cache__DOT__tag_0_51
                                            : ((0x32U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                                ? vlSelf->top__DOT__d_cache__DOT__tag_0_50
                                                : (
                                                   (0x31U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? vlSelf->top__DOT__d_cache__DOT__tag_0_49
                                                    : 
                                                   ((0x30U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? vlSelf->top__DOT__d_cache__DOT__tag_0_48
                                                     : 
                                                    ((0x2fU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? vlSelf->top__DOT__d_cache__DOT__tag_0_47
                                                      : 
                                                     ((0x2eU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? vlSelf->top__DOT__d_cache__DOT__tag_0_46
                                                       : 
                                                      ((0x2dU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? vlSelf->top__DOT__d_cache__DOT__tag_0_45
                                                        : 
                                                       ((0x2cU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? vlSelf->top__DOT__d_cache__DOT__tag_0_44
                                                         : 
                                                        ((0x2bU 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_43
                                                          : 
                                                         ((0x2aU 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? vlSelf->top__DOT__d_cache__DOT__tag_0_42
                                                           : 
                                                          ((0x29U 
                                                            == 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                        >> 3U))))
                                                            ? vlSelf->top__DOT__d_cache__DOT__tag_0_41
                                                            : 
                                                           ((0x28U 
                                                             == 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                         >> 3U))))
                                                             ? vlSelf->top__DOT__d_cache__DOT__tag_0_40
                                                             : top__DOT__d_cache__DOT___GEN_39))))))))))));
        top__DOT__d_cache__DOT___GEN_181 = ((0x33U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                             ? vlSelf->top__DOT__d_cache__DOT__tag_1_51
                                             : ((0x32U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                                 ? vlSelf->top__DOT__d_cache__DOT__tag_1_50
                                                 : 
                                                ((0x31U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? vlSelf->top__DOT__d_cache__DOT__tag_1_49
                                                  : 
                                                 ((0x30U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? vlSelf->top__DOT__d_cache__DOT__tag_1_48
                                                   : 
                                                  ((0x2fU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? vlSelf->top__DOT__d_cache__DOT__tag_1_47
                                                    : 
                                                   ((0x2eU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? vlSelf->top__DOT__d_cache__DOT__tag_1_46
                                                     : 
                                                    ((0x2dU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_45
                                                      : 
                                                     ((0x2cU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? vlSelf->top__DOT__d_cache__DOT__tag_1_44
                                                       : 
                                                      ((0x2bU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? vlSelf->top__DOT__d_cache__DOT__tag_1_43
                                                        : 
                                                       ((0x2aU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? vlSelf->top__DOT__d_cache__DOT__tag_1_42
                                                         : 
                                                        ((0x29U 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? vlSelf->top__DOT__d_cache__DOT__tag_1_41
                                                          : 
                                                         ((0x28U 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? vlSelf->top__DOT__d_cache__DOT__tag_1_40
                                                           : top__DOT__d_cache__DOT___GEN_168))))))))))));
        top__DOT__d_cache__DOT___GEN_314 = ((0x33U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                             ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_51)
                                             : ((0x32U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_50)
                                                 : 
                                                ((0x31U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_49)
                                                  : 
                                                 ((0x30U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_48)
                                                   : 
                                                  ((0x2fU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_47)
                                                    : 
                                                   ((0x2eU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_46)
                                                     : 
                                                    ((0x2dU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_45)
                                                      : 
                                                     ((0x2cU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_44)
                                                       : 
                                                      ((0x2bU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_43)
                                                        : 
                                                       ((0x2aU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_42)
                                                         : 
                                                        ((0x29U 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_41)
                                                          : 
                                                         ((0x28U 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_40)
                                                           : (IData)(top__DOT__d_cache__DOT___GEN_301)))))))))))));
        top__DOT__d_cache__DOT___GEN_379 = ((0x33U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                             ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_51)
                                             : ((0x32U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_50)
                                                 : 
                                                ((0x31U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_49)
                                                  : 
                                                 ((0x30U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_48)
                                                   : 
                                                  ((0x2fU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_47)
                                                    : 
                                                   ((0x2eU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_46)
                                                     : 
                                                    ((0x2dU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_45)
                                                      : 
                                                     ((0x2cU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_44)
                                                       : 
                                                      ((0x2bU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_43)
                                                        : 
                                                       ((0x2aU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_42)
                                                         : 
                                                        ((0x29U 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_41)
                                                          : 
                                                         ((0x28U 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_40)
                                                           : (IData)(top__DOT__d_cache__DOT___GEN_366)))))))))))));
        top__DOT__d_cache__DOT___GEN_445 = ((0x33U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                             ? vlSelf->top__DOT__d_cache__DOT__ram_0_51
                                             : ((0x32U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                                 ? vlSelf->top__DOT__d_cache__DOT__ram_0_50
                                                 : 
                                                ((0x31U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? vlSelf->top__DOT__d_cache__DOT__ram_0_49
                                                  : 
                                                 ((0x30U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? vlSelf->top__DOT__d_cache__DOT__ram_0_48
                                                   : 
                                                  ((0x2fU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_47
                                                    : 
                                                   ((0x2eU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? vlSelf->top__DOT__d_cache__DOT__ram_0_46
                                                     : 
                                                    ((0x2dU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? vlSelf->top__DOT__d_cache__DOT__ram_0_45
                                                      : 
                                                     ((0x2cU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? vlSelf->top__DOT__d_cache__DOT__ram_0_44
                                                       : 
                                                      ((0x2bU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? vlSelf->top__DOT__d_cache__DOT__ram_0_43
                                                        : 
                                                       ((0x2aU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? vlSelf->top__DOT__d_cache__DOT__ram_0_42
                                                         : 
                                                        ((0x29U 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_41
                                                          : 
                                                         ((0x28U 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? vlSelf->top__DOT__d_cache__DOT__ram_0_40
                                                           : top__DOT__d_cache__DOT___GEN_432))))))))))));
        top__DOT__d_cache__DOT___GEN_637 = ((0x33U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                             ? vlSelf->top__DOT__d_cache__DOT__ram_1_51
                                             : ((0x32U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                                 ? vlSelf->top__DOT__d_cache__DOT__ram_1_50
                                                 : 
                                                ((0x31U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? vlSelf->top__DOT__d_cache__DOT__ram_1_49
                                                  : 
                                                 ((0x30U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? vlSelf->top__DOT__d_cache__DOT__ram_1_48
                                                   : 
                                                  ((0x2fU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_47
                                                    : 
                                                   ((0x2eU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? vlSelf->top__DOT__d_cache__DOT__ram_1_46
                                                     : 
                                                    ((0x2dU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_45
                                                      : 
                                                     ((0x2cU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? vlSelf->top__DOT__d_cache__DOT__ram_1_44
                                                       : 
                                                      ((0x2bU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_43
                                                        : 
                                                       ((0x2aU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? vlSelf->top__DOT__d_cache__DOT__ram_1_42
                                                         : 
                                                        ((0x29U 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? vlSelf->top__DOT__d_cache__DOT__ram_1_41
                                                          : 
                                                         ((0x28U 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? vlSelf->top__DOT__d_cache__DOT__ram_1_40
                                                           : top__DOT__d_cache__DOT___GEN_624))))))))))));
    }
    if ((0x3fU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                    >> 3U))))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_127 = vlSelf->top__DOT__d_cache__DOT__valid_0_63;
        vlSelf->top__DOT__d_cache__DOT___GEN_256 = vlSelf->top__DOT__d_cache__DOT__valid_1_63;
        vlSelf->top__DOT__d_cache__DOT___GEN_63 = vlSelf->top__DOT__d_cache__DOT__tag_0_63;
        vlSelf->top__DOT__d_cache__DOT___GEN_192 = vlSelf->top__DOT__d_cache__DOT__tag_1_63;
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_127 = 
            ((0x3eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_62)
              : ((0x3dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_61)
                  : ((0x3cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_60)
                      : ((0x3bU == (0x3fU & (IData)(
                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                     >> 3U))))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_59)
                          : ((0x3aU == (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U))))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_58)
                              : ((0x39U == (0x3fU & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_57)
                                  : ((0x38U == (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U))))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_56)
                                      : ((0x37U == 
                                          (0x3fU & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_55)
                                          : ((0x36U 
                                              == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_54)
                                              : ((0x35U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_53)
                                                  : (IData)(top__DOT__d_cache__DOT___GEN_116)))))))))));
        vlSelf->top__DOT__d_cache__DOT___GEN_256 = 
            ((0x3eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_62)
              : ((0x3dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_61)
                  : ((0x3cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_60)
                      : ((0x3bU == (0x3fU & (IData)(
                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                     >> 3U))))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_59)
                          : ((0x3aU == (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U))))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_58)
                              : ((0x39U == (0x3fU & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_57)
                                  : ((0x38U == (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U))))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_56)
                                      : ((0x37U == 
                                          (0x3fU & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_55)
                                          : ((0x36U 
                                              == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_54)
                                              : ((0x35U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_53)
                                                  : (IData)(top__DOT__d_cache__DOT___GEN_245)))))))))));
        vlSelf->top__DOT__d_cache__DOT___GEN_63 = (
                                                   (0x3eU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? vlSelf->top__DOT__d_cache__DOT__tag_0_62
                                                    : 
                                                   ((0x3dU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? vlSelf->top__DOT__d_cache__DOT__tag_0_61
                                                     : 
                                                    ((0x3cU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? vlSelf->top__DOT__d_cache__DOT__tag_0_60
                                                      : 
                                                     ((0x3bU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? vlSelf->top__DOT__d_cache__DOT__tag_0_59
                                                       : 
                                                      ((0x3aU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? vlSelf->top__DOT__d_cache__DOT__tag_0_58
                                                        : 
                                                       ((0x39U 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? vlSelf->top__DOT__d_cache__DOT__tag_0_57
                                                         : 
                                                        ((0x38U 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_56
                                                          : 
                                                         ((0x37U 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? vlSelf->top__DOT__d_cache__DOT__tag_0_55
                                                           : 
                                                          ((0x36U 
                                                            == 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                        >> 3U))))
                                                            ? vlSelf->top__DOT__d_cache__DOT__tag_0_54
                                                            : 
                                                           ((0x35U 
                                                             == 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                         >> 3U))))
                                                             ? vlSelf->top__DOT__d_cache__DOT__tag_0_53
                                                             : top__DOT__d_cache__DOT___GEN_52))))))))));
        vlSelf->top__DOT__d_cache__DOT___GEN_192 = 
            ((0x3eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? vlSelf->top__DOT__d_cache__DOT__tag_1_62
              : ((0x3dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? vlSelf->top__DOT__d_cache__DOT__tag_1_61
                  : ((0x3cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_60
                      : ((0x3bU == (0x3fU & (IData)(
                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                     >> 3U))))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_1_59
                          : ((0x3aU == (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U))))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_1_58
                              : ((0x39U == (0x3fU & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_1_57
                                  : ((0x38U == (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U))))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_56
                                      : ((0x37U == 
                                          (0x3fU & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_1_55
                                          : ((0x36U 
                                              == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                              ? vlSelf->top__DOT__d_cache__DOT__tag_1_54
                                              : ((0x35U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? vlSelf->top__DOT__d_cache__DOT__tag_1_53
                                                  : top__DOT__d_cache__DOT___GEN_181))))))))));
    }
    if ((0x3eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                    >> 3U))))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_324 = vlSelf->top__DOT__d_cache__DOT__dirty_0_62;
        vlSelf->top__DOT__d_cache__DOT___GEN_389 = vlSelf->top__DOT__d_cache__DOT__dirty_1_62;
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_324 = 
            ((0x3dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_61)
              : ((0x3cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_60)
                  : ((0x3bU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_59)
                      : ((0x3aU == (0x3fU & (IData)(
                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                     >> 3U))))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_58)
                          : ((0x39U == (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U))))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_57)
                              : ((0x38U == (0x3fU & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_56)
                                  : ((0x37U == (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U))))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_55)
                                      : ((0x36U == 
                                          (0x3fU & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_54)
                                          : ((0x35U 
                                              == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_53)
                                              : (IData)(top__DOT__d_cache__DOT___GEN_314))))))))));
        vlSelf->top__DOT__d_cache__DOT___GEN_389 = 
            ((0x3dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_61)
              : ((0x3cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_60)
                  : ((0x3bU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_59)
                      : ((0x3aU == (0x3fU & (IData)(
                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                     >> 3U))))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_58)
                          : ((0x39U == (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U))))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_57)
                              : ((0x38U == (0x3fU & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_56)
                                  : ((0x37U == (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U))))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_55)
                                      : ((0x36U == 
                                          (0x3fU & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_54)
                                          : ((0x35U 
                                              == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_53)
                                              : (IData)(top__DOT__d_cache__DOT___GEN_379))))))))));
    }
    if ((0x3fU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                    >> 3U))))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_456 = vlSelf->top__DOT__d_cache__DOT__ram_0_63;
        vlSelf->top__DOT__d_cache__DOT___GEN_648 = vlSelf->top__DOT__d_cache__DOT__ram_1_63;
        vlSelf->top__DOT__d_cache__DOT___GEN_325 = vlSelf->top__DOT__d_cache__DOT__dirty_0_63;
        vlSelf->top__DOT__d_cache__DOT___GEN_390 = vlSelf->top__DOT__d_cache__DOT__dirty_1_63;
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_456 = 
            ((0x3eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? vlSelf->top__DOT__d_cache__DOT__ram_0_62
              : ((0x3dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? vlSelf->top__DOT__d_cache__DOT__ram_0_61
                  : ((0x3cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_0_60
                      : ((0x3bU == (0x3fU & (IData)(
                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                     >> 3U))))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_59
                          : ((0x3aU == (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U))))
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_58
                              : ((0x39U == (0x3fU & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                  ? vlSelf->top__DOT__d_cache__DOT__ram_0_57
                                  : ((0x38U == (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U))))
                                      ? vlSelf->top__DOT__d_cache__DOT__ram_0_56
                                      : ((0x37U == 
                                          (0x3fU & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_55
                                          : ((0x36U 
                                              == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_54
                                              : ((0x35U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? vlSelf->top__DOT__d_cache__DOT__ram_0_53
                                                  : top__DOT__d_cache__DOT___GEN_445))))))))));
        vlSelf->top__DOT__d_cache__DOT___GEN_648 = 
            ((0x3eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? vlSelf->top__DOT__d_cache__DOT__ram_1_62
              : ((0x3dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? vlSelf->top__DOT__d_cache__DOT__ram_1_61
                  : ((0x3cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_60
                      : ((0x3bU == (0x3fU & (IData)(
                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                     >> 3U))))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_1_59
                          : ((0x3aU == (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U))))
                              ? vlSelf->top__DOT__d_cache__DOT__ram_1_58
                              : ((0x39U == (0x3fU & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                  ? vlSelf->top__DOT__d_cache__DOT__ram_1_57
                                  : ((0x38U == (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U))))
                                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_56
                                      : ((0x37U == 
                                          (0x3fU & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                          ? vlSelf->top__DOT__d_cache__DOT__ram_1_55
                                          : ((0x36U 
                                              == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                              ? vlSelf->top__DOT__d_cache__DOT__ram_1_54
                                              : ((0x35U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? vlSelf->top__DOT__d_cache__DOT__ram_1_53
                                                  : top__DOT__d_cache__DOT___GEN_637))))))))));
        vlSelf->top__DOT__d_cache__DOT___GEN_325 = vlSelf->top__DOT__d_cache__DOT___GEN_324;
        vlSelf->top__DOT__d_cache__DOT___GEN_390 = vlSelf->top__DOT__d_cache__DOT___GEN_389;
    }
    VL_EXTEND_WQ(127,64, __Vtemp113, vlSelf->top__DOT__d_cache__DOT___GEN_456);
    vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U] 
        = (top__DOT__d_cache__DOT___ram_0_T_1[0U] | 
           (__Vtemp113[0U] & (~ top__DOT__d_cache__DOT___ram_0_T_2[0U])));
    vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U] 
        = (top__DOT__d_cache__DOT___ram_0_T_1[1U] | 
           (__Vtemp113[1U] & (~ top__DOT__d_cache__DOT___ram_0_T_2[1U])));
    vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U] 
        = (top__DOT__d_cache__DOT___ram_0_T_1[2U] | 
           (__Vtemp113[2U] & (~ top__DOT__d_cache__DOT___ram_0_T_2[2U])));
    vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U] 
        = (top__DOT__d_cache__DOT___ram_0_T_1[3U] | 
           (__Vtemp113[3U] & (~ top__DOT__d_cache__DOT___ram_0_T_2[3U])));
    VL_EXTEND_WQ(127,64, __Vtemp117, vlSelf->top__DOT__d_cache__DOT___GEN_648);
    vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U] 
        = (top__DOT__d_cache__DOT___ram_0_T_1[0U] | 
           (__Vtemp117[0U] & (~ top__DOT__d_cache__DOT___ram_0_T_2[0U])));
    vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U] 
        = (top__DOT__d_cache__DOT___ram_0_T_1[1U] | 
           (__Vtemp117[1U] & (~ top__DOT__d_cache__DOT___ram_0_T_2[1U])));
    vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U] 
        = (top__DOT__d_cache__DOT___ram_0_T_1[2U] | 
           (__Vtemp117[2U] & (~ top__DOT__d_cache__DOT___ram_0_T_2[2U])));
    vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U] 
        = (top__DOT__d_cache__DOT___ram_0_T_1[3U] | 
           (__Vtemp117[3U] & (~ top__DOT__d_cache__DOT___ram_0_T_2[3U])));
    vlSelf->top__DOT__d_cache_io_to_lsu_rdata = ((0U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? 0ULL
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                    ? 
                                                   (vlSelf->top__DOT__d_cache__DOT___GEN_456 
                                                    >> (IData)(vlSelf->top__DOT__d_cache__DOT__shift_bit))
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                     ? 
                                                    (vlSelf->top__DOT__d_cache__DOT___GEN_648 
                                                     >> (IData)(vlSelf->top__DOT__d_cache__DOT__shift_bit))
                                                     : 0ULL))
                                                   : 0ULL));
    if ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_5938 = vlSelf->top__DOT__d_cache__DOT__dirty_0_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_5939 = vlSelf->top__DOT__d_cache__DOT__dirty_0_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_5940 = vlSelf->top__DOT__d_cache__DOT__dirty_0_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_5941 = vlSelf->top__DOT__d_cache__DOT__dirty_0_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_5942 = vlSelf->top__DOT__d_cache__DOT__dirty_0_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_5943 = vlSelf->top__DOT__d_cache__DOT__dirty_0_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_5944 = vlSelf->top__DOT__d_cache__DOT__dirty_0_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_5945 = vlSelf->top__DOT__d_cache__DOT__dirty_0_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_5946 = vlSelf->top__DOT__d_cache__DOT__dirty_0_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_5947 = vlSelf->top__DOT__d_cache__DOT__dirty_0_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_5948 = vlSelf->top__DOT__d_cache__DOT__dirty_0_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_5949 = vlSelf->top__DOT__d_cache__DOT__dirty_0_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_5950 = vlSelf->top__DOT__d_cache__DOT__dirty_0_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_5951 = vlSelf->top__DOT__d_cache__DOT__dirty_0_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_5952 = vlSelf->top__DOT__d_cache__DOT__dirty_0_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_5953 = vlSelf->top__DOT__d_cache__DOT__dirty_0_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_5954 = vlSelf->top__DOT__d_cache__DOT__dirty_0_16;
        vlSelf->top__DOT__d_cache__DOT___GEN_5955 = vlSelf->top__DOT__d_cache__DOT__dirty_0_17;
        vlSelf->top__DOT__d_cache__DOT___GEN_5956 = vlSelf->top__DOT__d_cache__DOT__dirty_0_18;
        vlSelf->top__DOT__d_cache__DOT___GEN_5957 = vlSelf->top__DOT__d_cache__DOT__dirty_0_19;
        vlSelf->top__DOT__d_cache__DOT___GEN_5958 = vlSelf->top__DOT__d_cache__DOT__dirty_0_20;
        vlSelf->top__DOT__d_cache__DOT___GEN_5959 = vlSelf->top__DOT__d_cache__DOT__dirty_0_21;
        vlSelf->top__DOT__d_cache__DOT___GEN_5960 = vlSelf->top__DOT__d_cache__DOT__dirty_0_22;
        vlSelf->top__DOT__d_cache__DOT___GEN_5961 = vlSelf->top__DOT__d_cache__DOT__dirty_0_23;
        vlSelf->top__DOT__d_cache__DOT___GEN_5962 = vlSelf->top__DOT__d_cache__DOT__dirty_0_24;
        vlSelf->top__DOT__d_cache__DOT___GEN_5963 = vlSelf->top__DOT__d_cache__DOT__dirty_0_25;
        vlSelf->top__DOT__d_cache__DOT___GEN_5964 = vlSelf->top__DOT__d_cache__DOT__dirty_0_26;
        vlSelf->top__DOT__d_cache__DOT___GEN_5965 = vlSelf->top__DOT__d_cache__DOT__dirty_0_27;
        vlSelf->top__DOT__d_cache__DOT___GEN_5966 = vlSelf->top__DOT__d_cache__DOT__dirty_0_28;
        vlSelf->top__DOT__d_cache__DOT___GEN_5967 = vlSelf->top__DOT__d_cache__DOT__dirty_0_29;
        vlSelf->top__DOT__d_cache__DOT___GEN_5968 = vlSelf->top__DOT__d_cache__DOT__dirty_0_30;
        vlSelf->top__DOT__d_cache__DOT___GEN_5969 = vlSelf->top__DOT__d_cache__DOT__dirty_0_31;
        vlSelf->top__DOT__d_cache__DOT___GEN_5970 = vlSelf->top__DOT__d_cache__DOT__dirty_0_32;
        vlSelf->top__DOT__d_cache__DOT___GEN_5971 = vlSelf->top__DOT__d_cache__DOT__dirty_0_33;
        vlSelf->top__DOT__d_cache__DOT___GEN_5972 = vlSelf->top__DOT__d_cache__DOT__dirty_0_34;
        vlSelf->top__DOT__d_cache__DOT___GEN_5973 = vlSelf->top__DOT__d_cache__DOT__dirty_0_35;
        vlSelf->top__DOT__d_cache__DOT___GEN_5974 = vlSelf->top__DOT__d_cache__DOT__dirty_0_36;
        vlSelf->top__DOT__d_cache__DOT___GEN_5975 = vlSelf->top__DOT__d_cache__DOT__dirty_0_37;
        vlSelf->top__DOT__d_cache__DOT___GEN_5976 = vlSelf->top__DOT__d_cache__DOT__dirty_0_38;
        vlSelf->top__DOT__d_cache__DOT___GEN_5977 = vlSelf->top__DOT__d_cache__DOT__dirty_0_39;
        vlSelf->top__DOT__d_cache__DOT___GEN_5978 = vlSelf->top__DOT__d_cache__DOT__dirty_0_40;
        vlSelf->top__DOT__d_cache__DOT___GEN_5979 = vlSelf->top__DOT__d_cache__DOT__dirty_0_41;
        vlSelf->top__DOT__d_cache__DOT___GEN_5980 = vlSelf->top__DOT__d_cache__DOT__dirty_0_42;
        vlSelf->top__DOT__d_cache__DOT___GEN_5981 = vlSelf->top__DOT__d_cache__DOT__dirty_0_43;
        vlSelf->top__DOT__d_cache__DOT___GEN_5982 = vlSelf->top__DOT__d_cache__DOT__dirty_0_44;
        vlSelf->top__DOT__d_cache__DOT___GEN_5983 = vlSelf->top__DOT__d_cache__DOT__dirty_0_45;
        vlSelf->top__DOT__d_cache__DOT___GEN_5984 = vlSelf->top__DOT__d_cache__DOT__dirty_0_46;
        vlSelf->top__DOT__d_cache__DOT___GEN_5985 = vlSelf->top__DOT__d_cache__DOT__dirty_0_47;
        vlSelf->top__DOT__d_cache__DOT___GEN_5986 = vlSelf->top__DOT__d_cache__DOT__dirty_0_48;
        vlSelf->top__DOT__d_cache__DOT___GEN_5987 = vlSelf->top__DOT__d_cache__DOT__dirty_0_49;
        vlSelf->top__DOT__d_cache__DOT___GEN_5988 = vlSelf->top__DOT__d_cache__DOT__dirty_0_50;
        vlSelf->top__DOT__d_cache__DOT___GEN_5989 = vlSelf->top__DOT__d_cache__DOT__dirty_0_51;
        vlSelf->top__DOT__d_cache__DOT___GEN_5990 = vlSelf->top__DOT__d_cache__DOT__dirty_0_52;
        vlSelf->top__DOT__d_cache__DOT___GEN_5991 = vlSelf->top__DOT__d_cache__DOT__dirty_0_53;
        vlSelf->top__DOT__d_cache__DOT___GEN_5992 = vlSelf->top__DOT__d_cache__DOT__dirty_0_54;
        vlSelf->top__DOT__d_cache__DOT___GEN_5993 = vlSelf->top__DOT__d_cache__DOT__dirty_0_55;
        vlSelf->top__DOT__d_cache__DOT___GEN_5994 = vlSelf->top__DOT__d_cache__DOT__dirty_0_56;
        vlSelf->top__DOT__d_cache__DOT___GEN_5995 = vlSelf->top__DOT__d_cache__DOT__dirty_0_57;
        vlSelf->top__DOT__d_cache__DOT___GEN_5996 = vlSelf->top__DOT__d_cache__DOT__dirty_0_58;
        vlSelf->top__DOT__d_cache__DOT___GEN_5997 = vlSelf->top__DOT__d_cache__DOT__dirty_0_59;
        vlSelf->top__DOT__d_cache__DOT___GEN_5998 = vlSelf->top__DOT__d_cache__DOT__dirty_0_60;
        vlSelf->top__DOT__d_cache__DOT___GEN_5999 = vlSelf->top__DOT__d_cache__DOT__dirty_0_61;
        vlSelf->top__DOT__d_cache__DOT___GEN_6000 = vlSelf->top__DOT__d_cache__DOT__dirty_0_62;
        vlSelf->top__DOT__d_cache__DOT___GEN_6001 = vlSelf->top__DOT__d_cache__DOT__dirty_0_63;
        vlSelf->top__DOT__d_cache__DOT___GEN_6002 = vlSelf->top__DOT__d_cache__DOT__dirty_1_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_6003 = vlSelf->top__DOT__d_cache__DOT__dirty_1_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_6004 = vlSelf->top__DOT__d_cache__DOT__dirty_1_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_6005 = vlSelf->top__DOT__d_cache__DOT__dirty_1_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_6006 = vlSelf->top__DOT__d_cache__DOT__dirty_1_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_6007 = vlSelf->top__DOT__d_cache__DOT__dirty_1_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_6008 = vlSelf->top__DOT__d_cache__DOT__dirty_1_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_6009 = vlSelf->top__DOT__d_cache__DOT__dirty_1_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_6010 = vlSelf->top__DOT__d_cache__DOT__dirty_1_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_6011 = vlSelf->top__DOT__d_cache__DOT__dirty_1_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_6012 = vlSelf->top__DOT__d_cache__DOT__dirty_1_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_6013 = vlSelf->top__DOT__d_cache__DOT__dirty_1_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_6014 = vlSelf->top__DOT__d_cache__DOT__dirty_1_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_6015 = vlSelf->top__DOT__d_cache__DOT__dirty_1_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_6016 = vlSelf->top__DOT__d_cache__DOT__dirty_1_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_6017 = vlSelf->top__DOT__d_cache__DOT__dirty_1_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_6018 = vlSelf->top__DOT__d_cache__DOT__dirty_1_16;
        vlSelf->top__DOT__d_cache__DOT___GEN_6019 = vlSelf->top__DOT__d_cache__DOT__dirty_1_17;
        vlSelf->top__DOT__d_cache__DOT___GEN_6020 = vlSelf->top__DOT__d_cache__DOT__dirty_1_18;
        vlSelf->top__DOT__d_cache__DOT___GEN_6021 = vlSelf->top__DOT__d_cache__DOT__dirty_1_19;
        vlSelf->top__DOT__d_cache__DOT___GEN_6022 = vlSelf->top__DOT__d_cache__DOT__dirty_1_20;
        vlSelf->top__DOT__d_cache__DOT___GEN_6023 = vlSelf->top__DOT__d_cache__DOT__dirty_1_21;
        vlSelf->top__DOT__d_cache__DOT___GEN_6024 = vlSelf->top__DOT__d_cache__DOT__dirty_1_22;
        vlSelf->top__DOT__d_cache__DOT___GEN_6025 = vlSelf->top__DOT__d_cache__DOT__dirty_1_23;
        vlSelf->top__DOT__d_cache__DOT___GEN_6026 = vlSelf->top__DOT__d_cache__DOT__dirty_1_24;
        vlSelf->top__DOT__d_cache__DOT___GEN_6027 = vlSelf->top__DOT__d_cache__DOT__dirty_1_25;
        vlSelf->top__DOT__d_cache__DOT___GEN_6028 = vlSelf->top__DOT__d_cache__DOT__dirty_1_26;
        vlSelf->top__DOT__d_cache__DOT___GEN_6029 = vlSelf->top__DOT__d_cache__DOT__dirty_1_27;
        vlSelf->top__DOT__d_cache__DOT___GEN_6030 = vlSelf->top__DOT__d_cache__DOT__dirty_1_28;
        vlSelf->top__DOT__d_cache__DOT___GEN_6031 = vlSelf->top__DOT__d_cache__DOT__dirty_1_29;
        vlSelf->top__DOT__d_cache__DOT___GEN_6032 = vlSelf->top__DOT__d_cache__DOT__dirty_1_30;
        vlSelf->top__DOT__d_cache__DOT___GEN_6033 = vlSelf->top__DOT__d_cache__DOT__dirty_1_31;
        vlSelf->top__DOT__d_cache__DOT___GEN_6034 = vlSelf->top__DOT__d_cache__DOT__dirty_1_32;
        vlSelf->top__DOT__d_cache__DOT___GEN_6035 = vlSelf->top__DOT__d_cache__DOT__dirty_1_33;
        vlSelf->top__DOT__d_cache__DOT___GEN_6036 = vlSelf->top__DOT__d_cache__DOT__dirty_1_34;
        vlSelf->top__DOT__d_cache__DOT___GEN_6037 = vlSelf->top__DOT__d_cache__DOT__dirty_1_35;
        vlSelf->top__DOT__d_cache__DOT___GEN_6038 = vlSelf->top__DOT__d_cache__DOT__dirty_1_36;
        vlSelf->top__DOT__d_cache__DOT___GEN_6039 = vlSelf->top__DOT__d_cache__DOT__dirty_1_37;
        vlSelf->top__DOT__d_cache__DOT___GEN_6040 = vlSelf->top__DOT__d_cache__DOT__dirty_1_38;
        vlSelf->top__DOT__d_cache__DOT___GEN_6041 = vlSelf->top__DOT__d_cache__DOT__dirty_1_39;
        vlSelf->top__DOT__d_cache__DOT___GEN_6042 = vlSelf->top__DOT__d_cache__DOT__dirty_1_40;
        vlSelf->top__DOT__d_cache__DOT___GEN_6043 = vlSelf->top__DOT__d_cache__DOT__dirty_1_41;
        vlSelf->top__DOT__d_cache__DOT___GEN_6044 = vlSelf->top__DOT__d_cache__DOT__dirty_1_42;
        vlSelf->top__DOT__d_cache__DOT___GEN_6045 = vlSelf->top__DOT__d_cache__DOT__dirty_1_43;
        vlSelf->top__DOT__d_cache__DOT___GEN_6046 = vlSelf->top__DOT__d_cache__DOT__dirty_1_44;
        vlSelf->top__DOT__d_cache__DOT___GEN_6047 = vlSelf->top__DOT__d_cache__DOT__dirty_1_45;
        vlSelf->top__DOT__d_cache__DOT___GEN_6048 = vlSelf->top__DOT__d_cache__DOT__dirty_1_46;
        vlSelf->top__DOT__d_cache__DOT___GEN_6049 = vlSelf->top__DOT__d_cache__DOT__dirty_1_47;
        vlSelf->top__DOT__d_cache__DOT___GEN_6050 = vlSelf->top__DOT__d_cache__DOT__dirty_1_48;
        vlSelf->top__DOT__d_cache__DOT___GEN_6051 = vlSelf->top__DOT__d_cache__DOT__dirty_1_49;
        vlSelf->top__DOT__d_cache__DOT___GEN_6052 = vlSelf->top__DOT__d_cache__DOT__dirty_1_50;
        vlSelf->top__DOT__d_cache__DOT___GEN_6053 = vlSelf->top__DOT__d_cache__DOT__dirty_1_51;
        vlSelf->top__DOT__d_cache__DOT___GEN_6054 = vlSelf->top__DOT__d_cache__DOT__dirty_1_52;
        vlSelf->top__DOT__d_cache__DOT___GEN_6055 = vlSelf->top__DOT__d_cache__DOT__dirty_1_53;
        vlSelf->top__DOT__d_cache__DOT___GEN_6056 = vlSelf->top__DOT__d_cache__DOT__dirty_1_54;
        vlSelf->top__DOT__d_cache__DOT___GEN_6057 = vlSelf->top__DOT__d_cache__DOT__dirty_1_55;
        vlSelf->top__DOT__d_cache__DOT___GEN_6058 = vlSelf->top__DOT__d_cache__DOT__dirty_1_56;
        vlSelf->top__DOT__d_cache__DOT___GEN_6059 = vlSelf->top__DOT__d_cache__DOT__dirty_1_57;
        vlSelf->top__DOT__d_cache__DOT___GEN_6060 = vlSelf->top__DOT__d_cache__DOT__dirty_1_58;
        vlSelf->top__DOT__d_cache__DOT___GEN_6061 = vlSelf->top__DOT__d_cache__DOT__dirty_1_59;
        vlSelf->top__DOT__d_cache__DOT___GEN_6062 = vlSelf->top__DOT__d_cache__DOT__dirty_1_60;
        vlSelf->top__DOT__d_cache__DOT___GEN_6063 = vlSelf->top__DOT__d_cache__DOT__dirty_1_61;
        vlSelf->top__DOT__d_cache__DOT___GEN_6064 = vlSelf->top__DOT__d_cache__DOT__dirty_1_62;
        vlSelf->top__DOT__d_cache__DOT___GEN_6065 = vlSelf->top__DOT__d_cache__DOT__dirty_1_63;
        vlSelf->top__DOT__d_cache__DOT___GEN_5549 = 
            ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
              ? 5U : (IData)(vlSelf->top__DOT__d_cache__DOT__state));
        vlSelf->top__DOT__d_cache__DOT___GEN_5936 = vlSelf->top__DOT__d_cache__DOT__write_back_data;
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_5938 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0U != (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5939 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((1U != (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5940 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((2U != (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5941 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((3U != (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5942 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((4U != (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5943 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((5U != (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5944 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((6U != (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5945 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((7U != (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5946 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((8U != (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5947 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((9U != (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5948 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0xaU != (0x3fU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                          >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5949 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0xbU != (0x3fU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                          >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5950 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0xcU != (0x3fU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                          >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5951 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0xdU != (0x3fU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                          >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5952 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0xeU != (0x3fU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                          >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5953 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0xfU != (0x3fU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                          >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5954 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_16)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_16)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_16)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_16)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x10U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_16))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_16)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_16)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5955 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_17)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_17)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_17)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_17)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x11U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_17))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_17)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_17)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5956 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_18)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_18)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_18)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_18)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x12U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_18))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_18)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_18)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5957 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_19)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_19)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_19)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_19)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x13U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_19))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_19)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_19)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5958 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_20)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_20)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_20)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_20)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x14U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_20))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_20)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_20)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5959 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_21)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_21)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_21)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_21)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x15U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_21))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_21)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_21)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5960 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_22)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_22)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_22)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_22)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x16U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_22))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_22)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_22)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5961 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_23)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_23)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_23)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_23)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x17U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_23))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_23)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_23)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5962 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_24)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_24)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_24)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_24)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x18U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_24))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_24)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_24)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5963 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_25)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_25)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_25)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_25)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x19U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_25))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_25)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_25)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5964 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_26)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_26)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_26)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_26)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x1aU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_26))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_26)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_26)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5965 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_27)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_27)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_27)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_27)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x1bU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_27))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_27)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_27)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5966 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_28)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_28)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_28)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_28)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x1cU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_28))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_28)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_28)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5967 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_29)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_29)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_29)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_29)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x1dU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_29))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_29)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_29)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5968 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_30)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_30)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_30)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_30)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x1eU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_30))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_30)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_30)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5969 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_31)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_31)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_31)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_31)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x1fU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_31))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_31)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_31)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5970 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_32)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_32)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_32)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_32)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x20U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_32))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_32)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_32)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5971 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_33)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_33)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_33)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_33)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x21U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_33))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_33)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_33)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5972 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_34)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_34)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_34)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_34)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x22U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_34))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_34)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_34)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5973 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_35)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_35)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_35)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_35)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x23U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_35))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_35)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_35)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5974 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_36)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_36)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_36)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_36)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x24U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_36))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_36)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_36)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5975 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_37)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_37)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_37)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_37)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x25U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_37))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_37)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_37)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5976 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_38)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_38)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_38)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_38)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x26U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_38))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_38)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_38)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5977 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_39)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_39)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_39)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_39)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x27U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_39))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_39)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_39)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5978 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_40)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_40)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_40)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_40)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x28U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_40))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_40)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_40)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5979 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_41)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_41)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_41)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_41)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x29U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_41))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_41)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_41)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5980 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_42)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_42)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_42)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_42)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x2aU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_42))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_42)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_42)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5981 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_43)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_43)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_43)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_43)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x2bU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_43))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_43)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_43)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5982 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_44)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_44)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_44)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_44)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x2cU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_44))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_44)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_44)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5983 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_45)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_45)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_45)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_45)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x2dU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_45))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_45)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_45)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5984 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_46)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_46)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_46)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_46)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x2eU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_46))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_46)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_46)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5985 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_47)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_47)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_47)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_47)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x2fU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_47))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_47)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_47)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5986 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_48)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_48)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_48)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_48)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x30U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_48))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_48)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_48)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5987 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_49)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_49)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_49)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_49)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x31U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_49))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_49)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_49)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5988 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_50)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_50)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_50)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_50)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x32U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_50))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_50)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_50)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5989 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_51)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_51)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_51)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_51)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x33U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_51))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_51)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_51)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5990 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_52)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_52)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_52)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_52)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x34U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_52))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_52)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_52)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5991 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_53)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_53)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_53)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_53)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x35U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_53))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_53)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_53)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5992 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_54)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_54)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_54)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_54)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x36U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_54))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_54)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_54)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5993 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_55)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_55)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_55)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_55)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x37U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_55))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_55)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_55)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5994 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_56)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_56)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_56)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_56)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x38U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_56))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_56)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_56)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5995 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_57)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_57)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_57)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_57)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x39U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_57))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_57)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_57)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5996 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_58)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_58)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_58)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_58)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x3aU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_58))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_58)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_58)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5997 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_59)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_59)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_59)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_59)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x3bU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_59))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_59)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_59)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5998 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_60)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_60)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_60)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_60)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x3cU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_60))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_60)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_60)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5999 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_61)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_61)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_61)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_61)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x3dU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_61))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_61)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_61)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6000 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_62)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_62)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_62)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_62)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x3eU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_62))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_62)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_62)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6001 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_63)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_63)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_63)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_63)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? ((0x3fU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_63))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_63)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_63)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6002 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_0)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_0)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_0)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0U != (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_0))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_0))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_0))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_0)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6003 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_1)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_1)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_1)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((1U != (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_1))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_1))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_1))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_1)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6004 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_2)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_2)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_2)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((2U != (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_2))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_2))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_2))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_2)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6005 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_3)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_3)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_3)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((3U != (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_3))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_3))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_3))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_3)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6006 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_4)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_4)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_4)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((4U != (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_4))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_4))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_4))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_4)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6007 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_5)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_5)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_5)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((5U != (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_5))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_5))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_5))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_5)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6008 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_6)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_6)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_6)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((6U != (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_6))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_6))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_6))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_6)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6009 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_7)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_7)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_7)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((7U != (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_7))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_7))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_7))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_7)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6010 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_8)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_8)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_8)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((8U != (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_8))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_8))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_8))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_8)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6011 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_9)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_9)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_9)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((9U != (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_9))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_9))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_9))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_9)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6012 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_10)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_10)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_10)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0xaU != (0x3fU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                          >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_10))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_10))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_10))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_10)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6013 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_11)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_11)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_11)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0xbU != (0x3fU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                          >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_11))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_11))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_11))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_11)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6014 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_12)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_12)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_12)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0xcU != (0x3fU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                          >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_12))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_12))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_12))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_12)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6015 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_13)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_13)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_13)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0xdU != (0x3fU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                          >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_13))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_13))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_13))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_13)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6016 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_14)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_14)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_14)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0xeU != (0x3fU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                          >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_14))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_14))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_14))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_14)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6017 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_15)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_15)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_15)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0xfU != (0x3fU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                          >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_15))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_15))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_15))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_15)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6018 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_16)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_16)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_16)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x10U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_16))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_16))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_16))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_16)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6019 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_17)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_17)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_17)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x11U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_17))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_17))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_17))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_17)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6020 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_18)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_18)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_18)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x12U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_18))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_18))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_18))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_18)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6021 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_19)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_19)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_19)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x13U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_19))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_19))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_19))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_19)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6022 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_20)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_20)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_20)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x14U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_20))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_20))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_20))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_20)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6023 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_21)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_21)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_21)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x15U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_21))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_21))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_21))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_21)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6024 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_22)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_22)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_22)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x16U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_22))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_22))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_22))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_22)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6025 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_23)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_23)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_23)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x17U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_23))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_23))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_23))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_23)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6026 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_24)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_24)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_24)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x18U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_24))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_24))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_24))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_24)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6027 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_25)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_25)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_25)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x19U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_25))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_25))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_25))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_25)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6028 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_26)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_26)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_26)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x1aU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_26))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_26))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_26))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_26)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6029 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_27)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_27)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_27)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x1bU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_27))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_27))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_27))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_27)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6030 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_28)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_28)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_28)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x1cU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_28))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_28))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_28))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_28)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6031 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_29)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_29)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_29)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x1dU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_29))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_29))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_29))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_29)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6032 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_30)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_30)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_30)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x1eU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_30))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_30))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_30))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_30)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6033 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_31)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_31)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_31)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x1fU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_31))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_31))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_31))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_31)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6034 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_32)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_32)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_32)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x20U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_32))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_32))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_32))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_32)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6035 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_33)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_33)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_33)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x21U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_33))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_33))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_33))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_33)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6036 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_34)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_34)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_34)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x22U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_34))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_34))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_34))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_34)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6037 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_35)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_35)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_35)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x23U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_35))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_35))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_35))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_35)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6038 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_36)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_36)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_36)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x24U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_36))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_36))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_36))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_36)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6039 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_37)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_37)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_37)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x25U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_37))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_37))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_37))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_37)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6040 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_38)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_38)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_38)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x26U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_38))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_38))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_38))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_38)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6041 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_39)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_39)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_39)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x27U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_39))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_39))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_39))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_39)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6042 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_40)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_40)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_40)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x28U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_40))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_40))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_40))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_40)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6043 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_41)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_41)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_41)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x29U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_41))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_41))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_41))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_41)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6044 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_42)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_42)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_42)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x2aU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_42))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_42))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_42))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_42)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6045 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_43)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_43)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_43)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x2bU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_43))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_43))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_43))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_43)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6046 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_44)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_44)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_44)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x2cU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_44))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_44))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_44))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_44)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6047 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_45)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_45)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_45)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x2dU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_45))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_45))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_45))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_45)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6048 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_46)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_46)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_46)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x2eU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_46))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_46))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_46))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_46)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6049 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_47)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_47)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_47)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x2fU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_47))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_47))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_47))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_47)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6050 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_48)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_48)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_48)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x30U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_48))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_48))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_48))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_48)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6051 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_49)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_49)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_49)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x31U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_49))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_49))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_49))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_49)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6052 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_50)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_50)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_50)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x32U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_50))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_50))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_50))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_50)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6053 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_51)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_51)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_51)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x33U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_51))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_51))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_51))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_51)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6054 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_52)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_52)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_52)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x34U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_52))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_52))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_52))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_52)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6055 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_53)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_53)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_53)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x35U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_53))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_53))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_53))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_53)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6056 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_54)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_54)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_54)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x36U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_54))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_54))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_54))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_54)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6057 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_55)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_55)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_55)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x37U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_55))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_55))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_55))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_55)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6058 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_56)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_56)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_56)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x38U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_56))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_56))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_56))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_56)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6059 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_57)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_57)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_57)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x39U != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_57))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_57))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_57))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_57)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6060 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_58)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_58)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_58)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x3aU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_58))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_58))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_58))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_58)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6061 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_59)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_59)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_59)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x3bU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_59))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_59))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_59))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_59)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6062 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_60)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_60)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_60)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x3cU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_60))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_60))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_60))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_60)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6063 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_61)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_61)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_61)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x3dU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_61))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_61))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_61))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_61)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6064 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_62)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_62)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_62)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x3eU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_62))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_62))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_62))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_62)));
        vlSelf->top__DOT__d_cache__DOT___GEN_6065 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_63)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_63)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_63)
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? ((0x3fU != (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_63))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_63))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_63))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_63)));
        vlSelf->top__DOT__d_cache__DOT___GEN_5549 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid)
                  ? 0U : (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? 7U : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                               ? 7U : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                            ? 6U : 7U)
                                        : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                            ? 6U : 7U))))
                  : ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                      ? ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid)
                          ? 7U : (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                      : ((7U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                          ? 1U : (IData)(vlSelf->top__DOT__d_cache__DOT__state)))));
        vlSelf->top__DOT__d_cache__DOT___GEN_5936 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__write_back_data
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__write_back_data
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__write_back_data
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? vlSelf->top__DOT__d_cache__DOT___GEN_648
                                  : vlSelf->top__DOT__d_cache__DOT__write_back_data)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? vlSelf->top__DOT__d_cache__DOT___GEN_456
                                  : vlSelf->top__DOT__d_cache__DOT__write_back_data))))
                  : vlSelf->top__DOT__d_cache__DOT__write_back_data));
    }
    if (vlSelf->top__DOT__d_cache__DOT__way0_hit) {
        vlSelf->top__DOT__d_cache__DOT___GEN_907 = 
            ((0U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_0);
        vlSelf->top__DOT__d_cache__DOT___GEN_908 = 
            ((1U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_1);
        vlSelf->top__DOT__d_cache__DOT___GEN_909 = 
            ((2U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_2);
        vlSelf->top__DOT__d_cache__DOT___GEN_910 = 
            ((3U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_3);
        vlSelf->top__DOT__d_cache__DOT___GEN_911 = 
            ((4U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_4);
        vlSelf->top__DOT__d_cache__DOT___GEN_912 = 
            ((5U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_5);
        vlSelf->top__DOT__d_cache__DOT___GEN_913 = 
            ((6U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_6);
        vlSelf->top__DOT__d_cache__DOT___GEN_914 = 
            ((7U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_7);
        vlSelf->top__DOT__d_cache__DOT___GEN_915 = 
            ((8U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_8);
        vlSelf->top__DOT__d_cache__DOT___GEN_916 = 
            ((9U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_9);
        vlSelf->top__DOT__d_cache__DOT___GEN_917 = 
            ((0xaU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                        >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_10);
        vlSelf->top__DOT__d_cache__DOT___GEN_918 = 
            ((0xbU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                        >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_11);
        vlSelf->top__DOT__d_cache__DOT___GEN_919 = 
            ((0xcU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                        >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_12);
        vlSelf->top__DOT__d_cache__DOT___GEN_920 = 
            ((0xdU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                        >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_13);
        vlSelf->top__DOT__d_cache__DOT___GEN_921 = 
            ((0xeU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                        >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_14);
        vlSelf->top__DOT__d_cache__DOT___GEN_922 = 
            ((0xfU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                        >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_15);
        vlSelf->top__DOT__d_cache__DOT___GEN_923 = 
            ((0x10U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_16);
        vlSelf->top__DOT__d_cache__DOT___GEN_924 = 
            ((0x11U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_17);
        vlSelf->top__DOT__d_cache__DOT___GEN_925 = 
            ((0x12U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_18);
        vlSelf->top__DOT__d_cache__DOT___GEN_926 = 
            ((0x13U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_19);
        vlSelf->top__DOT__d_cache__DOT___GEN_927 = 
            ((0x14U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_20);
        vlSelf->top__DOT__d_cache__DOT___GEN_928 = 
            ((0x15U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_21);
        vlSelf->top__DOT__d_cache__DOT___GEN_929 = 
            ((0x16U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_22);
        vlSelf->top__DOT__d_cache__DOT___GEN_930 = 
            ((0x17U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_23);
        vlSelf->top__DOT__d_cache__DOT___GEN_931 = 
            ((0x18U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_24);
        vlSelf->top__DOT__d_cache__DOT___GEN_932 = 
            ((0x19U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_25);
        vlSelf->top__DOT__d_cache__DOT___GEN_933 = 
            ((0x1aU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_26);
        vlSelf->top__DOT__d_cache__DOT___GEN_934 = 
            ((0x1bU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_27);
        vlSelf->top__DOT__d_cache__DOT___GEN_935 = 
            ((0x1cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_28);
        vlSelf->top__DOT__d_cache__DOT___GEN_936 = 
            ((0x1dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_29);
        vlSelf->top__DOT__d_cache__DOT___GEN_937 = 
            ((0x1eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_30);
        vlSelf->top__DOT__d_cache__DOT___GEN_938 = 
            ((0x1fU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_31);
        vlSelf->top__DOT__d_cache__DOT___GEN_939 = 
            ((0x20U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_32);
        vlSelf->top__DOT__d_cache__DOT___GEN_940 = 
            ((0x21U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_33);
        vlSelf->top__DOT__d_cache__DOT___GEN_941 = 
            ((0x22U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_34);
        vlSelf->top__DOT__d_cache__DOT___GEN_942 = 
            ((0x23U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_35);
        vlSelf->top__DOT__d_cache__DOT___GEN_943 = 
            ((0x24U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_36);
        vlSelf->top__DOT__d_cache__DOT___GEN_944 = 
            ((0x25U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_37);
        vlSelf->top__DOT__d_cache__DOT___GEN_945 = 
            ((0x26U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_38);
        vlSelf->top__DOT__d_cache__DOT___GEN_946 = 
            ((0x27U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_39);
        vlSelf->top__DOT__d_cache__DOT___GEN_947 = 
            ((0x28U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_40);
        vlSelf->top__DOT__d_cache__DOT___GEN_948 = 
            ((0x29U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_41);
        vlSelf->top__DOT__d_cache__DOT___GEN_949 = 
            ((0x2aU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_42);
        vlSelf->top__DOT__d_cache__DOT___GEN_950 = 
            ((0x2bU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_43);
        vlSelf->top__DOT__d_cache__DOT___GEN_951 = 
            ((0x2cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_44);
        vlSelf->top__DOT__d_cache__DOT___GEN_952 = 
            ((0x2dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_45);
        vlSelf->top__DOT__d_cache__DOT___GEN_953 = 
            ((0x2eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_46);
        vlSelf->top__DOT__d_cache__DOT___GEN_954 = 
            ((0x2fU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_47);
        vlSelf->top__DOT__d_cache__DOT___GEN_955 = 
            ((0x30U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_48);
        vlSelf->top__DOT__d_cache__DOT___GEN_956 = 
            ((0x31U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_49);
        vlSelf->top__DOT__d_cache__DOT___GEN_957 = 
            ((0x32U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_50);
        vlSelf->top__DOT__d_cache__DOT___GEN_958 = 
            ((0x33U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_51);
        vlSelf->top__DOT__d_cache__DOT___GEN_959 = 
            ((0x34U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_52);
        vlSelf->top__DOT__d_cache__DOT___GEN_960 = 
            ((0x35U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_53);
        vlSelf->top__DOT__d_cache__DOT___GEN_961 = 
            ((0x36U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_54);
        vlSelf->top__DOT__d_cache__DOT___GEN_962 = 
            ((0x37U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_55);
        vlSelf->top__DOT__d_cache__DOT___GEN_963 = 
            ((0x38U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_56);
        vlSelf->top__DOT__d_cache__DOT___GEN_964 = 
            ((0x39U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_57);
        vlSelf->top__DOT__d_cache__DOT___GEN_965 = 
            ((0x3aU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_58);
        vlSelf->top__DOT__d_cache__DOT___GEN_966 = 
            ((0x3bU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_59);
        vlSelf->top__DOT__d_cache__DOT___GEN_967 = 
            ((0x3cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_60);
        vlSelf->top__DOT__d_cache__DOT___GEN_968 = 
            ((0x3dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_61);
        vlSelf->top__DOT__d_cache__DOT___GEN_969 = 
            ((0x3eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_62);
        vlSelf->top__DOT__d_cache__DOT___GEN_970 = 
            ((0x3fU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_63);
        vlSelf->top__DOT__d_cache__DOT___GEN_1035 = vlSelf->top__DOT__d_cache__DOT__ram_1_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_1036 = vlSelf->top__DOT__d_cache__DOT__ram_1_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_1037 = vlSelf->top__DOT__d_cache__DOT__ram_1_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_1038 = vlSelf->top__DOT__d_cache__DOT__ram_1_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_1039 = vlSelf->top__DOT__d_cache__DOT__ram_1_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_1040 = vlSelf->top__DOT__d_cache__DOT__ram_1_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_1041 = vlSelf->top__DOT__d_cache__DOT__ram_1_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_1042 = vlSelf->top__DOT__d_cache__DOT__ram_1_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_1043 = vlSelf->top__DOT__d_cache__DOT__ram_1_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_1044 = vlSelf->top__DOT__d_cache__DOT__ram_1_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_1045 = vlSelf->top__DOT__d_cache__DOT__ram_1_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_1046 = vlSelf->top__DOT__d_cache__DOT__ram_1_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_1047 = vlSelf->top__DOT__d_cache__DOT__ram_1_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_1048 = vlSelf->top__DOT__d_cache__DOT__ram_1_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_1049 = vlSelf->top__DOT__d_cache__DOT__ram_1_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_1050 = vlSelf->top__DOT__d_cache__DOT__ram_1_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_1051 = vlSelf->top__DOT__d_cache__DOT__ram_1_16;
        vlSelf->top__DOT__d_cache__DOT___GEN_1052 = vlSelf->top__DOT__d_cache__DOT__ram_1_17;
        vlSelf->top__DOT__d_cache__DOT___GEN_1053 = vlSelf->top__DOT__d_cache__DOT__ram_1_18;
        vlSelf->top__DOT__d_cache__DOT___GEN_1054 = vlSelf->top__DOT__d_cache__DOT__ram_1_19;
        vlSelf->top__DOT__d_cache__DOT___GEN_1055 = vlSelf->top__DOT__d_cache__DOT__ram_1_20;
        vlSelf->top__DOT__d_cache__DOT___GEN_1056 = vlSelf->top__DOT__d_cache__DOT__ram_1_21;
        vlSelf->top__DOT__d_cache__DOT___GEN_1057 = vlSelf->top__DOT__d_cache__DOT__ram_1_22;
        vlSelf->top__DOT__d_cache__DOT___GEN_1058 = vlSelf->top__DOT__d_cache__DOT__ram_1_23;
        vlSelf->top__DOT__d_cache__DOT___GEN_1059 = vlSelf->top__DOT__d_cache__DOT__ram_1_24;
        vlSelf->top__DOT__d_cache__DOT___GEN_1060 = vlSelf->top__DOT__d_cache__DOT__ram_1_25;
        vlSelf->top__DOT__d_cache__DOT___GEN_1061 = vlSelf->top__DOT__d_cache__DOT__ram_1_26;
        vlSelf->top__DOT__d_cache__DOT___GEN_1062 = vlSelf->top__DOT__d_cache__DOT__ram_1_27;
        vlSelf->top__DOT__d_cache__DOT___GEN_1063 = vlSelf->top__DOT__d_cache__DOT__ram_1_28;
        vlSelf->top__DOT__d_cache__DOT___GEN_1064 = vlSelf->top__DOT__d_cache__DOT__ram_1_29;
        vlSelf->top__DOT__d_cache__DOT___GEN_1065 = vlSelf->top__DOT__d_cache__DOT__ram_1_30;
        vlSelf->top__DOT__d_cache__DOT___GEN_1066 = vlSelf->top__DOT__d_cache__DOT__ram_1_31;
        vlSelf->top__DOT__d_cache__DOT___GEN_1067 = vlSelf->top__DOT__d_cache__DOT__ram_1_32;
        vlSelf->top__DOT__d_cache__DOT___GEN_1068 = vlSelf->top__DOT__d_cache__DOT__ram_1_33;
        vlSelf->top__DOT__d_cache__DOT___GEN_1069 = vlSelf->top__DOT__d_cache__DOT__ram_1_34;
        vlSelf->top__DOT__d_cache__DOT___GEN_1070 = vlSelf->top__DOT__d_cache__DOT__ram_1_35;
        vlSelf->top__DOT__d_cache__DOT___GEN_1071 = vlSelf->top__DOT__d_cache__DOT__ram_1_36;
        vlSelf->top__DOT__d_cache__DOT___GEN_1072 = vlSelf->top__DOT__d_cache__DOT__ram_1_37;
        vlSelf->top__DOT__d_cache__DOT___GEN_1073 = vlSelf->top__DOT__d_cache__DOT__ram_1_38;
        vlSelf->top__DOT__d_cache__DOT___GEN_1074 = vlSelf->top__DOT__d_cache__DOT__ram_1_39;
        vlSelf->top__DOT__d_cache__DOT___GEN_1075 = vlSelf->top__DOT__d_cache__DOT__ram_1_40;
        vlSelf->top__DOT__d_cache__DOT___GEN_1076 = vlSelf->top__DOT__d_cache__DOT__ram_1_41;
        vlSelf->top__DOT__d_cache__DOT___GEN_1077 = vlSelf->top__DOT__d_cache__DOT__ram_1_42;
        vlSelf->top__DOT__d_cache__DOT___GEN_1078 = vlSelf->top__DOT__d_cache__DOT__ram_1_43;
        vlSelf->top__DOT__d_cache__DOT___GEN_1079 = vlSelf->top__DOT__d_cache__DOT__ram_1_44;
        vlSelf->top__DOT__d_cache__DOT___GEN_1080 = vlSelf->top__DOT__d_cache__DOT__ram_1_45;
        vlSelf->top__DOT__d_cache__DOT___GEN_1081 = vlSelf->top__DOT__d_cache__DOT__ram_1_46;
        vlSelf->top__DOT__d_cache__DOT___GEN_1082 = vlSelf->top__DOT__d_cache__DOT__ram_1_47;
        vlSelf->top__DOT__d_cache__DOT___GEN_1083 = vlSelf->top__DOT__d_cache__DOT__ram_1_48;
        vlSelf->top__DOT__d_cache__DOT___GEN_1084 = vlSelf->top__DOT__d_cache__DOT__ram_1_49;
        vlSelf->top__DOT__d_cache__DOT___GEN_1085 = vlSelf->top__DOT__d_cache__DOT__ram_1_50;
        vlSelf->top__DOT__d_cache__DOT___GEN_1086 = vlSelf->top__DOT__d_cache__DOT__ram_1_51;
        vlSelf->top__DOT__d_cache__DOT___GEN_1087 = vlSelf->top__DOT__d_cache__DOT__ram_1_52;
        vlSelf->top__DOT__d_cache__DOT___GEN_1088 = vlSelf->top__DOT__d_cache__DOT__ram_1_53;
        vlSelf->top__DOT__d_cache__DOT___GEN_1089 = vlSelf->top__DOT__d_cache__DOT__ram_1_54;
        vlSelf->top__DOT__d_cache__DOT___GEN_1090 = vlSelf->top__DOT__d_cache__DOT__ram_1_55;
        vlSelf->top__DOT__d_cache__DOT___GEN_1091 = vlSelf->top__DOT__d_cache__DOT__ram_1_56;
        vlSelf->top__DOT__d_cache__DOT___GEN_1092 = vlSelf->top__DOT__d_cache__DOT__ram_1_57;
        vlSelf->top__DOT__d_cache__DOT___GEN_1093 = vlSelf->top__DOT__d_cache__DOT__ram_1_58;
        vlSelf->top__DOT__d_cache__DOT___GEN_1094 = vlSelf->top__DOT__d_cache__DOT__ram_1_59;
        vlSelf->top__DOT__d_cache__DOT___GEN_1095 = vlSelf->top__DOT__d_cache__DOT__ram_1_60;
        vlSelf->top__DOT__d_cache__DOT___GEN_1096 = vlSelf->top__DOT__d_cache__DOT__ram_1_61;
        vlSelf->top__DOT__d_cache__DOT___GEN_1097 = vlSelf->top__DOT__d_cache__DOT__ram_1_62;
        vlSelf->top__DOT__d_cache__DOT___GEN_1098 = vlSelf->top__DOT__d_cache__DOT__ram_1_63;
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_907 = vlSelf->top__DOT__d_cache__DOT__ram_0_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_908 = vlSelf->top__DOT__d_cache__DOT__ram_0_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_909 = vlSelf->top__DOT__d_cache__DOT__ram_0_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_910 = vlSelf->top__DOT__d_cache__DOT__ram_0_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_911 = vlSelf->top__DOT__d_cache__DOT__ram_0_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_912 = vlSelf->top__DOT__d_cache__DOT__ram_0_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_913 = vlSelf->top__DOT__d_cache__DOT__ram_0_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_914 = vlSelf->top__DOT__d_cache__DOT__ram_0_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_915 = vlSelf->top__DOT__d_cache__DOT__ram_0_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_916 = vlSelf->top__DOT__d_cache__DOT__ram_0_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_917 = vlSelf->top__DOT__d_cache__DOT__ram_0_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_918 = vlSelf->top__DOT__d_cache__DOT__ram_0_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_919 = vlSelf->top__DOT__d_cache__DOT__ram_0_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_920 = vlSelf->top__DOT__d_cache__DOT__ram_0_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_921 = vlSelf->top__DOT__d_cache__DOT__ram_0_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_922 = vlSelf->top__DOT__d_cache__DOT__ram_0_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_923 = vlSelf->top__DOT__d_cache__DOT__ram_0_16;
        vlSelf->top__DOT__d_cache__DOT___GEN_924 = vlSelf->top__DOT__d_cache__DOT__ram_0_17;
        vlSelf->top__DOT__d_cache__DOT___GEN_925 = vlSelf->top__DOT__d_cache__DOT__ram_0_18;
        vlSelf->top__DOT__d_cache__DOT___GEN_926 = vlSelf->top__DOT__d_cache__DOT__ram_0_19;
        vlSelf->top__DOT__d_cache__DOT___GEN_927 = vlSelf->top__DOT__d_cache__DOT__ram_0_20;
        vlSelf->top__DOT__d_cache__DOT___GEN_928 = vlSelf->top__DOT__d_cache__DOT__ram_0_21;
        vlSelf->top__DOT__d_cache__DOT___GEN_929 = vlSelf->top__DOT__d_cache__DOT__ram_0_22;
        vlSelf->top__DOT__d_cache__DOT___GEN_930 = vlSelf->top__DOT__d_cache__DOT__ram_0_23;
        vlSelf->top__DOT__d_cache__DOT___GEN_931 = vlSelf->top__DOT__d_cache__DOT__ram_0_24;
        vlSelf->top__DOT__d_cache__DOT___GEN_932 = vlSelf->top__DOT__d_cache__DOT__ram_0_25;
        vlSelf->top__DOT__d_cache__DOT___GEN_933 = vlSelf->top__DOT__d_cache__DOT__ram_0_26;
        vlSelf->top__DOT__d_cache__DOT___GEN_934 = vlSelf->top__DOT__d_cache__DOT__ram_0_27;
        vlSelf->top__DOT__d_cache__DOT___GEN_935 = vlSelf->top__DOT__d_cache__DOT__ram_0_28;
        vlSelf->top__DOT__d_cache__DOT___GEN_936 = vlSelf->top__DOT__d_cache__DOT__ram_0_29;
        vlSelf->top__DOT__d_cache__DOT___GEN_937 = vlSelf->top__DOT__d_cache__DOT__ram_0_30;
        vlSelf->top__DOT__d_cache__DOT___GEN_938 = vlSelf->top__DOT__d_cache__DOT__ram_0_31;
        vlSelf->top__DOT__d_cache__DOT___GEN_939 = vlSelf->top__DOT__d_cache__DOT__ram_0_32;
        vlSelf->top__DOT__d_cache__DOT___GEN_940 = vlSelf->top__DOT__d_cache__DOT__ram_0_33;
        vlSelf->top__DOT__d_cache__DOT___GEN_941 = vlSelf->top__DOT__d_cache__DOT__ram_0_34;
        vlSelf->top__DOT__d_cache__DOT___GEN_942 = vlSelf->top__DOT__d_cache__DOT__ram_0_35;
        vlSelf->top__DOT__d_cache__DOT___GEN_943 = vlSelf->top__DOT__d_cache__DOT__ram_0_36;
        vlSelf->top__DOT__d_cache__DOT___GEN_944 = vlSelf->top__DOT__d_cache__DOT__ram_0_37;
        vlSelf->top__DOT__d_cache__DOT___GEN_945 = vlSelf->top__DOT__d_cache__DOT__ram_0_38;
        vlSelf->top__DOT__d_cache__DOT___GEN_946 = vlSelf->top__DOT__d_cache__DOT__ram_0_39;
        vlSelf->top__DOT__d_cache__DOT___GEN_947 = vlSelf->top__DOT__d_cache__DOT__ram_0_40;
        vlSelf->top__DOT__d_cache__DOT___GEN_948 = vlSelf->top__DOT__d_cache__DOT__ram_0_41;
        vlSelf->top__DOT__d_cache__DOT___GEN_949 = vlSelf->top__DOT__d_cache__DOT__ram_0_42;
        vlSelf->top__DOT__d_cache__DOT___GEN_950 = vlSelf->top__DOT__d_cache__DOT__ram_0_43;
        vlSelf->top__DOT__d_cache__DOT___GEN_951 = vlSelf->top__DOT__d_cache__DOT__ram_0_44;
        vlSelf->top__DOT__d_cache__DOT___GEN_952 = vlSelf->top__DOT__d_cache__DOT__ram_0_45;
        vlSelf->top__DOT__d_cache__DOT___GEN_953 = vlSelf->top__DOT__d_cache__DOT__ram_0_46;
        vlSelf->top__DOT__d_cache__DOT___GEN_954 = vlSelf->top__DOT__d_cache__DOT__ram_0_47;
        vlSelf->top__DOT__d_cache__DOT___GEN_955 = vlSelf->top__DOT__d_cache__DOT__ram_0_48;
        vlSelf->top__DOT__d_cache__DOT___GEN_956 = vlSelf->top__DOT__d_cache__DOT__ram_0_49;
        vlSelf->top__DOT__d_cache__DOT___GEN_957 = vlSelf->top__DOT__d_cache__DOT__ram_0_50;
        vlSelf->top__DOT__d_cache__DOT___GEN_958 = vlSelf->top__DOT__d_cache__DOT__ram_0_51;
        vlSelf->top__DOT__d_cache__DOT___GEN_959 = vlSelf->top__DOT__d_cache__DOT__ram_0_52;
        vlSelf->top__DOT__d_cache__DOT___GEN_960 = vlSelf->top__DOT__d_cache__DOT__ram_0_53;
        vlSelf->top__DOT__d_cache__DOT___GEN_961 = vlSelf->top__DOT__d_cache__DOT__ram_0_54;
        vlSelf->top__DOT__d_cache__DOT___GEN_962 = vlSelf->top__DOT__d_cache__DOT__ram_0_55;
        vlSelf->top__DOT__d_cache__DOT___GEN_963 = vlSelf->top__DOT__d_cache__DOT__ram_0_56;
        vlSelf->top__DOT__d_cache__DOT___GEN_964 = vlSelf->top__DOT__d_cache__DOT__ram_0_57;
        vlSelf->top__DOT__d_cache__DOT___GEN_965 = vlSelf->top__DOT__d_cache__DOT__ram_0_58;
        vlSelf->top__DOT__d_cache__DOT___GEN_966 = vlSelf->top__DOT__d_cache__DOT__ram_0_59;
        vlSelf->top__DOT__d_cache__DOT___GEN_967 = vlSelf->top__DOT__d_cache__DOT__ram_0_60;
        vlSelf->top__DOT__d_cache__DOT___GEN_968 = vlSelf->top__DOT__d_cache__DOT__ram_0_61;
        vlSelf->top__DOT__d_cache__DOT___GEN_969 = vlSelf->top__DOT__d_cache__DOT__ram_0_62;
        vlSelf->top__DOT__d_cache__DOT___GEN_970 = vlSelf->top__DOT__d_cache__DOT__ram_0_63;
        vlSelf->top__DOT__d_cache__DOT___GEN_1035 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_0)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_0);
        vlSelf->top__DOT__d_cache__DOT___GEN_1036 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((1U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_1)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_1);
        vlSelf->top__DOT__d_cache__DOT___GEN_1037 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((2U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_2)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_2);
        vlSelf->top__DOT__d_cache__DOT___GEN_1038 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((3U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_3)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_3);
        vlSelf->top__DOT__d_cache__DOT___GEN_1039 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((4U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_4)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_4);
        vlSelf->top__DOT__d_cache__DOT___GEN_1040 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((5U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_5)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_5);
        vlSelf->top__DOT__d_cache__DOT___GEN_1041 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((6U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_6)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_6);
        vlSelf->top__DOT__d_cache__DOT___GEN_1042 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((7U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_7)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_7);
        vlSelf->top__DOT__d_cache__DOT___GEN_1043 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((8U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_8)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_8);
        vlSelf->top__DOT__d_cache__DOT___GEN_1044 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((9U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_9)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_9);
        vlSelf->top__DOT__d_cache__DOT___GEN_1045 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xaU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                            >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_10)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_10);
        vlSelf->top__DOT__d_cache__DOT___GEN_1046 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xbU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                            >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_11)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_11);
        vlSelf->top__DOT__d_cache__DOT___GEN_1047 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xcU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                            >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_12)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_12);
        vlSelf->top__DOT__d_cache__DOT___GEN_1048 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xdU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                            >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_13)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_13);
        vlSelf->top__DOT__d_cache__DOT___GEN_1049 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xeU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                            >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_14)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_14);
        vlSelf->top__DOT__d_cache__DOT___GEN_1050 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xfU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                            >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_15)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_15);
        vlSelf->top__DOT__d_cache__DOT___GEN_1051 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x10U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_16)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_16);
        vlSelf->top__DOT__d_cache__DOT___GEN_1052 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x11U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_17)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_17);
        vlSelf->top__DOT__d_cache__DOT___GEN_1053 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x12U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_18)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_18);
        vlSelf->top__DOT__d_cache__DOT___GEN_1054 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x13U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_19)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_19);
        vlSelf->top__DOT__d_cache__DOT___GEN_1055 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x14U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_20)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_20);
        vlSelf->top__DOT__d_cache__DOT___GEN_1056 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x15U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_21)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_21);
        vlSelf->top__DOT__d_cache__DOT___GEN_1057 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x16U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_22)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_22);
        vlSelf->top__DOT__d_cache__DOT___GEN_1058 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x17U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_23)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_23);
        vlSelf->top__DOT__d_cache__DOT___GEN_1059 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x18U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_24)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_24);
        vlSelf->top__DOT__d_cache__DOT___GEN_1060 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x19U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_25)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_25);
        vlSelf->top__DOT__d_cache__DOT___GEN_1061 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1aU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_26)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_26);
        vlSelf->top__DOT__d_cache__DOT___GEN_1062 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1bU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_27)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_27);
        vlSelf->top__DOT__d_cache__DOT___GEN_1063 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_28)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_28);
        vlSelf->top__DOT__d_cache__DOT___GEN_1064 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_29)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_29);
        vlSelf->top__DOT__d_cache__DOT___GEN_1065 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_30)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_30);
        vlSelf->top__DOT__d_cache__DOT___GEN_1066 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1fU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_31)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_31);
        vlSelf->top__DOT__d_cache__DOT___GEN_1067 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x20U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_32)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_32);
        vlSelf->top__DOT__d_cache__DOT___GEN_1068 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x21U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_33)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_33);
        vlSelf->top__DOT__d_cache__DOT___GEN_1069 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x22U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_34)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_34);
        vlSelf->top__DOT__d_cache__DOT___GEN_1070 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x23U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_35)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_35);
        vlSelf->top__DOT__d_cache__DOT___GEN_1071 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x24U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_36)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_36);
        vlSelf->top__DOT__d_cache__DOT___GEN_1072 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x25U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_37)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_37);
        vlSelf->top__DOT__d_cache__DOT___GEN_1073 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x26U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_38)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_38);
        vlSelf->top__DOT__d_cache__DOT___GEN_1074 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x27U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_39)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_39);
        vlSelf->top__DOT__d_cache__DOT___GEN_1075 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x28U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_40)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_40);
        vlSelf->top__DOT__d_cache__DOT___GEN_1076 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x29U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_41)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_41);
        vlSelf->top__DOT__d_cache__DOT___GEN_1077 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2aU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_42)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_42);
        vlSelf->top__DOT__d_cache__DOT___GEN_1078 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2bU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_43)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_43);
        vlSelf->top__DOT__d_cache__DOT___GEN_1079 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_44)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_44);
        vlSelf->top__DOT__d_cache__DOT___GEN_1080 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_45)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_45);
        vlSelf->top__DOT__d_cache__DOT___GEN_1081 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_46)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_46);
        vlSelf->top__DOT__d_cache__DOT___GEN_1082 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2fU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_47)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_47);
        vlSelf->top__DOT__d_cache__DOT___GEN_1083 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x30U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_48)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_48);
        vlSelf->top__DOT__d_cache__DOT___GEN_1084 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x31U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_49)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_49);
        vlSelf->top__DOT__d_cache__DOT___GEN_1085 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x32U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_50)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_50);
        vlSelf->top__DOT__d_cache__DOT___GEN_1086 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x33U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_51)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_51);
        vlSelf->top__DOT__d_cache__DOT___GEN_1087 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x34U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_52)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_52);
        vlSelf->top__DOT__d_cache__DOT___GEN_1088 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x35U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_53)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_53);
        vlSelf->top__DOT__d_cache__DOT___GEN_1089 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x36U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_54)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_54);
        vlSelf->top__DOT__d_cache__DOT___GEN_1090 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x37U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_55)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_55);
        vlSelf->top__DOT__d_cache__DOT___GEN_1091 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x38U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_56)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_56);
        vlSelf->top__DOT__d_cache__DOT___GEN_1092 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x39U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_57)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_57);
        vlSelf->top__DOT__d_cache__DOT___GEN_1093 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3aU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_58)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_58);
        vlSelf->top__DOT__d_cache__DOT___GEN_1094 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3bU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_59)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_59);
        vlSelf->top__DOT__d_cache__DOT___GEN_1095 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_60)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_60);
        vlSelf->top__DOT__d_cache__DOT___GEN_1096 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_61)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_61);
        vlSelf->top__DOT__d_cache__DOT___GEN_1097 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_62)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_62);
        vlSelf->top__DOT__d_cache__DOT___GEN_1098 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3fU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_63)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_63);
    }
    top__DOT__exu_step__DOT___io_res2rd_T_132 = ((0x24U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 ((((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__d_cache_io_to_lsu_rdata 
                                                                >> 0xfU)))
                                                     ? 0xffffffffffffULL
                                                     : 0ULL) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->top__DOT__d_cache_io_to_lsu_rdata)))))
                                                  : 
                                                 ((0x3aU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? (QData)((IData)(vlSelf->top__DOT__d_cache_io_to_lsu_rdata))
                                                   : 
                                                  ((0x23U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->top__DOT__d_cache_io_to_lsu_rdata))))
                                                    : 
                                                   ((0x22U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? vlSelf->top__DOT__d_cache_io_to_lsu_rdata
                                                     : 
                                                    ((0x21U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__d_cache_io_to_lsu_rdata 
                                                                                >> 0x1fU)))
                                                                         ? 0xffffffffU
                                                                         : 0U))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->top__DOT__d_cache_io_to_lsu_rdata)))
                                                      : 
                                                     ((0x1fU 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_10))
                                                       : 
                                                      ((0x36U 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                        ? (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_10))
                                                        : 
                                                       ((0x1eU 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                         ? (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_4))
                                                         : 
                                                        ((0x20U 
                                                          == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                          ? (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_4))
                                                          : 
                                                         ((6U 
                                                           == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                           ? 
                                                          (4ULL 
                                                           + vlSelf->top__DOT__pc_now)
                                                           : 
                                                          ((5U 
                                                            == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                            ? 
                                                           (4ULL 
                                                            + vlSelf->top__DOT__pc_now)
                                                            : 
                                                           ((4U 
                                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                             ? vlSelf->top__DOT__idu_step_io_imm
                                                             : 
                                                            ((3U 
                                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                              ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                              : 
                                                             ((1U 
                                                               == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                               ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                               : 0ULL))))))))))))));
    top__DOT__exu_step__DOT___io_res2rd_T_162 = ((0x16U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_59
                                                  : 
                                                 ((0xdU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__exu_step__DOT__sub_res 
                                                                                >> 0x1fU)))
                                                                      ? 0xffffffffU
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__sub_res)))
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? vlSelf->top__DOT__exu_step__DOT__and_res
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? vlSelf->top__DOT__exu_step__DOT__and_res
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? vlSelf->top__DOT__exu_step__DOT__xor_res
                                                      : 
                                                     ((0x2eU 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? vlSelf->top__DOT__exu_step__DOT__xor_res
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                        ? vlSelf->top__DOT__exu_step__DOT__or_res
                                                        : 
                                                       ((0xbU 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                         ? vlSelf->top__DOT__exu_step__DOT__or_res
                                                         : 
                                                        ((0x15U 
                                                          == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                          ? vlSelf->top__DOT__exu_step__DOT__sra_res
                                                          : 
                                                         ((0xfU 
                                                           == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                           ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                           : 
                                                          ((0x10U 
                                                            == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                            ? vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_44
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                             ? vlSelf->top__DOT__exu_step__DOT__sub_res
                                                             : 
                                                            ((0xcU 
                                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                              ? vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_44
                                                              : 
                                                             ((0x25U 
                                                               == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                               ? (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->top__DOT__d_cache_io_to_lsu_rdata))))
                                                               : 
                                                              ((0x3bU 
                                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                                ? 
                                                               ((((1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__d_cache_io_to_lsu_rdata 
                                                                              >> 7U)))
                                                                   ? 0xffffffffffffffULL
                                                                   : 0ULL) 
                                                                 << 8U) 
                                                                | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->top__DOT__d_cache_io_to_lsu_rdata)))))
                                                                : top__DOT__exu_step__DOT___io_res2rd_T_132)))))))))))))));
    VL_EXTENDS_WQ(65,64, __Vtemp123, vlSelf->top__DOT__exu_step__DOT__src1_value);
    __Vtemp124[0U] = __Vtemp123[0U];
    __Vtemp124[1U] = __Vtemp123[1U];
    __Vtemp124[2U] = (1U & __Vtemp123[2U]);
    VL_EXTENDS_WQ(65,64, __Vtemp126, vlSelf->top__DOT__exu_step__DOT__src2_value);
    __Vtemp127[0U] = __Vtemp126[0U];
    __Vtemp127[1U] = __Vtemp126[1U];
    __Vtemp127[2U] = (1U & __Vtemp126[2U]);
    VL_DIVS_WWW(65, __Vtemp128, __Vtemp124, __Vtemp127);
    __Vtemp129[0U] = __Vtemp128[0U];
    __Vtemp129[1U] = __Vtemp128[1U];
    __Vtemp129[2U] = (1U & __Vtemp128[2U]);
    VL_EXTEND_WW(127,65, __Vtemp130, __Vtemp129);
    VL_EXTEND_WQ(127,64, __Vtemp131, VL_DIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value));
    VL_EXTEND_WQ(127,64, __Vtemp132, (((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT___divw_res_T_4 
                                                                    >> 0x1fU)))
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___divw_res_T_4))));
    VL_EXTEND_WQ(127,64, __Vtemp133, (((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2 
                                                                    >> 0x1fU)))
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2))));
    VL_EXTEND_WQ(128,64, __Vtemp134, vlSelf->top__DOT__exu_step__DOT__src1_value);
    VL_EXTEND_WQ(128,64, __Vtemp135, vlSelf->top__DOT__exu_step__DOT__src2_value);
    VL_MUL_W(4, __Vtemp136, __Vtemp134, __Vtemp135);
    VL_EXTEND_WQ(127,64, __Vtemp137, (((QData)((IData)(
                                                       __Vtemp136[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vtemp136[0U]))));
    VL_EXTEND_WQ(127,64, __Vtemp138, vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_74);
    VL_EXTEND_WQ(127,64, __Vtemp139, vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_69);
    VL_EXTEND_WQ(127,64, __Vtemp140, vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_74);
    VL_EXTEND_WQ(127,64, __Vtemp141, vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_69);
    VL_EXTEND_WQ(127,64, __Vtemp142, vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_59);
    VL_EXTEND_WQ(127,64, __Vtemp143, vlSelf->top__DOT__exu_step__DOT__srl_res);
    VL_EXTEND_WQ(127,64, __Vtemp144, top__DOT__exu_step__DOT___io_res2rd_T_162);
    if ((0x31U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))) {
        top__DOT__exu_step__DOT___io_res2rd_T_186[0U] 
            = __Vtemp130[0U];
        top__DOT__exu_step__DOT___io_res2rd_T_186[1U] 
            = __Vtemp130[1U];
        top__DOT__exu_step__DOT___io_res2rd_T_186[2U] 
            = __Vtemp130[2U];
        top__DOT__exu_step__DOT___io_res2rd_T_186[3U] 
            = __Vtemp130[3U];
    } else {
        top__DOT__exu_step__DOT___io_res2rd_T_186[0U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp131[0U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp132[0U]
                                     : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp133[0U]
                                         : ((0x11U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp137[0U]
                                             : ((0x1dU 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                __Vtemp138[0U]
                                                 : 
                                                ((0x1cU 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp139[0U]
                                                  : 
                                                 ((0x1bU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp140[0U]
                                                   : 
                                                  ((0x1aU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp141[0U]
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp142[0U]
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp143[0U]
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      vlSelf->top__DOT__exu_step__DOT__sll_res[0U]
                                                       : 
                                                      __Vtemp144[0U])))))))))));
        top__DOT__exu_step__DOT___io_res2rd_T_186[1U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp131[1U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp132[1U]
                                     : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp133[1U]
                                         : ((0x11U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp137[1U]
                                             : ((0x1dU 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                __Vtemp138[1U]
                                                 : 
                                                ((0x1cU 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp139[1U]
                                                  : 
                                                 ((0x1bU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp140[1U]
                                                   : 
                                                  ((0x1aU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp141[1U]
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp142[1U]
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp143[1U]
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      vlSelf->top__DOT__exu_step__DOT__sll_res[1U]
                                                       : 
                                                      __Vtemp144[1U])))))))))));
        top__DOT__exu_step__DOT___io_res2rd_T_186[2U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp131[2U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp132[2U]
                                     : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp133[2U]
                                         : ((0x11U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp137[2U]
                                             : ((0x1dU 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                __Vtemp138[2U]
                                                 : 
                                                ((0x1cU 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp139[2U]
                                                  : 
                                                 ((0x1bU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp140[2U]
                                                   : 
                                                  ((0x1aU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp141[2U]
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp142[2U]
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp143[2U]
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      vlSelf->top__DOT__exu_step__DOT__sll_res[2U]
                                                       : 
                                                      __Vtemp144[2U])))))))))));
        top__DOT__exu_step__DOT___io_res2rd_T_186[3U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp131[3U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp132[3U]
                                     : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp133[3U]
                                         : ((0x11U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp137[3U]
                                             : ((0x1dU 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                __Vtemp138[3U]
                                                 : 
                                                ((0x1cU 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp139[3U]
                                                  : 
                                                 ((0x1bU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp140[3U]
                                                   : 
                                                  ((0x1aU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp141[3U]
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp142[3U]
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp143[3U]
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      vlSelf->top__DOT__exu_step__DOT__sll_res[3U]
                                                       : 
                                                      __Vtemp144[3U])))))))))));
    }
    VL_EXTEND_WQ(127,64, __Vtemp169, vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                 [((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                    ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]);
    VL_EXTEND_WQ(127,64, __Vtemp170, vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                 [((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                    ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]);
    VL_EXTEND_WQ(127,64, __Vtemp171, vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                 [((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                    ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]);
    VL_EXTEND_WQ(127,64, __Vtemp172, vlSelf->top__DOT__exu_step__DOT__srl_res);
    VL_EXTEND_WQ(127,64, __Vtemp173, vlSelf->top__DOT__exu_step__DOT__sra_res);
    VL_EXTEND_WQ(127,64, __Vtemp174, VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value));
    VL_EXTEND_WQ(127,64, __Vtemp175, VL_MODDIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value));
    VL_EXTEND_WQ(127,64, __Vtemp176, (((QData)((IData)(
                                                       ((vlSelf->top__DOT__exu_step__DOT__remuw_res 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__remuw_res))));
    VL_EXTEND_WQ(127,64, __Vtemp177, (((QData)((IData)(
                                                       ((vlSelf->top__DOT__exu_step__DOT__remw_res 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__remw_res))));
    VL_EXTEND_WQ(127,64, __Vtemp178, (((QData)((IData)(
                                                       ((vlSelf->top__DOT__exu_step__DOT__divuw_res 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__divuw_res))));
    if ((0x47U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))) {
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U] 
            = __Vtemp169[0U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U] 
            = __Vtemp169[1U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[2U] 
            = __Vtemp169[2U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[3U] 
            = __Vtemp169[3U];
    } else {
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U] 
            = ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp170[0U] : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp171[0U]
                                     : ((0x38U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp172[0U]
                                         : ((0x39U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp173[0U]
                                             : ((0x37U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                vlSelf->top__DOT__exu_step__DOT__sll_res[0U]
                                                 : 
                                                ((0x34U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp174[0U]
                                                  : 
                                                 ((0x33U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp175[0U]
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp176[0U]
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp177[0U]
                                                     : 
                                                    ((0x35U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp178[0U]
                                                      : 
                                                     top__DOT__exu_step__DOT___io_res2rd_T_186[0U]))))))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U] 
            = ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp170[1U] : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp171[1U]
                                     : ((0x38U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp172[1U]
                                         : ((0x39U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp173[1U]
                                             : ((0x37U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                vlSelf->top__DOT__exu_step__DOT__sll_res[1U]
                                                 : 
                                                ((0x34U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp174[1U]
                                                  : 
                                                 ((0x33U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp175[1U]
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp176[1U]
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp177[1U]
                                                     : 
                                                    ((0x35U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp178[1U]
                                                      : 
                                                     top__DOT__exu_step__DOT___io_res2rd_T_186[1U]))))))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[2U] 
            = ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp170[2U] : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp171[2U]
                                     : ((0x38U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp172[2U]
                                         : ((0x39U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp173[2U]
                                             : ((0x37U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                vlSelf->top__DOT__exu_step__DOT__sll_res[2U]
                                                 : 
                                                ((0x34U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp174[2U]
                                                  : 
                                                 ((0x33U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp175[2U]
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp176[2U]
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp177[2U]
                                                     : 
                                                    ((0x35U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp178[2U]
                                                      : 
                                                     top__DOT__exu_step__DOT___io_res2rd_T_186[2U]))))))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[3U] 
            = ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp170[3U] : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp171[3U]
                                     : ((0x38U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp172[3U]
                                         : ((0x39U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp173[3U]
                                             : ((0x37U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                vlSelf->top__DOT__exu_step__DOT__sll_res[3U]
                                                 : 
                                                ((0x34U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp174[3U]
                                                  : 
                                                 ((0x33U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp175[3U]
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp176[3U]
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp177[3U]
                                                     : 
                                                    ((0x35U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp178[3U]
                                                      : 
                                                     top__DOT__exu_step__DOT___io_res2rd_T_186[3U]))))))))));
    }
    vlSelf->io_outval = (((QData)((IData)(vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U])));
    vlSelf->top__DOT__exu_step__DOT__Regfile_MPORT_data 
        = (((((0x100073U != vlSelf->top__DOT__idu_step_io_inst) 
              & ((0x3023U != (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                 & ((0x1023U != (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                    & ((0x23U != (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                       & ((0x2023U != (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                          & ((0x1063U != (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                             & ((0x63U != (0x707fU 
                                           & vlSelf->top__DOT__idu_step_io_inst)) 
                                & ((0x5063U != (0x707fU 
                                                & vlSelf->top__DOT__idu_step_io_inst)) 
                                   & ((0x4063U != (0x707fU 
                                                   & vlSelf->top__DOT__idu_step_io_inst)) 
                                      & ((0x6063U != 
                                          (0x707fU 
                                           & vlSelf->top__DOT__idu_step_io_inst)) 
                                         & ((0x7063U 
                                             != (0x707fU 
                                                 & vlSelf->top__DOT__idu_step_io_inst)) 
                                            & ((0x73U 
                                                != vlSelf->top__DOT__idu_step_io_inst) 
                                               & (0x30200073U 
                                                  != vlSelf->top__DOT__idu_step_io_inst))))))))))))) 
             & (0U != (0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                >> 7U)))) & (((IData)(vlSelf->top__DOT__i_cache_io_to_ifu_rvalid) 
                                              & (~ (IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_Readmem_en))) 
                                             | ((IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_Readmem_en) 
                                                & (IData)(vlSelf->top__DOT__d_cache_io_to_lsu_rvalid))))
            ? (((QData)((IData)(vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U])))
            : ((0U == (0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                >> 7U))) ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
               [(0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                          >> 7U))]));
}
