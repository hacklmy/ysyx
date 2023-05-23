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
    QData/*63:0*/ top__DOT__d_cache__DOT___GEN_675;
    QData/*63:0*/ top__DOT__d_cache__DOT___GEN_688;
    QData/*63:0*/ top__DOT__d_cache__DOT___GEN_701;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_132;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_162;
    // Body
    if ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_6095 = vlSelf->top__DOT__d_cache__DOT__ram_1_37;
        vlSelf->top__DOT__d_cache__DOT___GEN_6096 = vlSelf->top__DOT__d_cache__DOT__ram_1_38;
        vlSelf->top__DOT__d_cache__DOT___GEN_6097 = vlSelf->top__DOT__d_cache__DOT__ram_1_39;
        vlSelf->top__DOT__d_cache__DOT___GEN_6098 = vlSelf->top__DOT__d_cache__DOT__ram_1_40;
        vlSelf->top__DOT__d_cache__DOT___GEN_6099 = vlSelf->top__DOT__d_cache__DOT__ram_1_41;
        vlSelf->top__DOT__d_cache__DOT___GEN_6100 = vlSelf->top__DOT__d_cache__DOT__ram_1_42;
        vlSelf->top__DOT__d_cache__DOT___GEN_6101 = vlSelf->top__DOT__d_cache__DOT__ram_1_43;
        vlSelf->top__DOT__d_cache__DOT___GEN_6102 = vlSelf->top__DOT__d_cache__DOT__ram_1_44;
        vlSelf->top__DOT__d_cache__DOT___GEN_6103 = vlSelf->top__DOT__d_cache__DOT__ram_1_45;
        vlSelf->top__DOT__d_cache__DOT___GEN_6104 = vlSelf->top__DOT__d_cache__DOT__ram_1_46;
        vlSelf->top__DOT__d_cache__DOT___GEN_6105 = vlSelf->top__DOT__d_cache__DOT__ram_1_47;
        vlSelf->top__DOT__d_cache__DOT___GEN_6106 = vlSelf->top__DOT__d_cache__DOT__ram_1_48;
        vlSelf->top__DOT__d_cache__DOT___GEN_6107 = vlSelf->top__DOT__d_cache__DOT__ram_1_49;
        vlSelf->top__DOT__d_cache__DOT___GEN_6108 = vlSelf->top__DOT__d_cache__DOT__ram_1_50;
        vlSelf->top__DOT__d_cache__DOT___GEN_6109 = vlSelf->top__DOT__d_cache__DOT__ram_1_51;
        vlSelf->top__DOT__d_cache__DOT___GEN_6110 = vlSelf->top__DOT__d_cache__DOT__ram_1_52;
        vlSelf->top__DOT__d_cache__DOT___GEN_6111 = vlSelf->top__DOT__d_cache__DOT__ram_1_53;
        vlSelf->top__DOT__d_cache__DOT___GEN_6112 = vlSelf->top__DOT__d_cache__DOT__ram_1_54;
        vlSelf->top__DOT__d_cache__DOT___GEN_6113 = vlSelf->top__DOT__d_cache__DOT__ram_1_55;
        vlSelf->top__DOT__d_cache__DOT___GEN_6114 = vlSelf->top__DOT__d_cache__DOT__ram_1_56;
        vlSelf->top__DOT__d_cache__DOT___GEN_6115 = vlSelf->top__DOT__d_cache__DOT__ram_1_57;
        vlSelf->top__DOT__d_cache__DOT___GEN_6116 = vlSelf->top__DOT__d_cache__DOT__ram_1_58;
        vlSelf->top__DOT__d_cache__DOT___GEN_6117 = vlSelf->top__DOT__d_cache__DOT__ram_1_59;
        vlSelf->top__DOT__d_cache__DOT___GEN_6118 = vlSelf->top__DOT__d_cache__DOT__ram_1_60;
        vlSelf->top__DOT__d_cache__DOT___GEN_6119 = vlSelf->top__DOT__d_cache__DOT__ram_1_61;
        vlSelf->top__DOT__d_cache__DOT___GEN_6120 = vlSelf->top__DOT__d_cache__DOT__ram_1_62;
        vlSelf->top__DOT__d_cache__DOT___GEN_6121 = vlSelf->top__DOT__d_cache__DOT__ram_1_63;
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_6095 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_37
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_37
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1717
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1717
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_37)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_37));
        vlSelf->top__DOT__d_cache__DOT___GEN_6096 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_38
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_38
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1718
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1718
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_38)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_38));
        vlSelf->top__DOT__d_cache__DOT___GEN_6097 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_39
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_39
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1719
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1719
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_39)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_39));
        vlSelf->top__DOT__d_cache__DOT___GEN_6098 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_40
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_40
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1720
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1720
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_40)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_40));
        vlSelf->top__DOT__d_cache__DOT___GEN_6099 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_41
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_41
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1721
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1721
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_41)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_41));
        vlSelf->top__DOT__d_cache__DOT___GEN_6100 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_42
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_42
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1722
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1722
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_42)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_42));
        vlSelf->top__DOT__d_cache__DOT___GEN_6101 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_43
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_43
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1723
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1723
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_43)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_43));
        vlSelf->top__DOT__d_cache__DOT___GEN_6102 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_44
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_44
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1724
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1724
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_44)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_44));
        vlSelf->top__DOT__d_cache__DOT___GEN_6103 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_45
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_45
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1725
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1725
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_45)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_45));
        vlSelf->top__DOT__d_cache__DOT___GEN_6104 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_46
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_46
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1726
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1726
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_46)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_46));
        vlSelf->top__DOT__d_cache__DOT___GEN_6105 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_47
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_47
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1727
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1727
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_47)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_47));
        vlSelf->top__DOT__d_cache__DOT___GEN_6106 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_48
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_48
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1728
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1728
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_48)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_48));
        vlSelf->top__DOT__d_cache__DOT___GEN_6107 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_49
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_49
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1729
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1729
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_49)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_49));
        vlSelf->top__DOT__d_cache__DOT___GEN_6108 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_50
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_50
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1730
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1730
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_50)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_50));
        vlSelf->top__DOT__d_cache__DOT___GEN_6109 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_51
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_51
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1731
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1731
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_51)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_51));
        vlSelf->top__DOT__d_cache__DOT___GEN_6110 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_52
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_52
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1732
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1732
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_52)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_52));
        vlSelf->top__DOT__d_cache__DOT___GEN_6111 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_53
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_53
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1733
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1733
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_53)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_53));
        vlSelf->top__DOT__d_cache__DOT___GEN_6112 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_54
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_54
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1734
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1734
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_54)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_54));
        vlSelf->top__DOT__d_cache__DOT___GEN_6113 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_55
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_55
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1735
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1735
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_55)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_55));
        vlSelf->top__DOT__d_cache__DOT___GEN_6114 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_56
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_56
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1736
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1736
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_56)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_56));
        vlSelf->top__DOT__d_cache__DOT___GEN_6115 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_57
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_57
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1737
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1737
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_57)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_57));
        vlSelf->top__DOT__d_cache__DOT___GEN_6116 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_58
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_58
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1738
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1738
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_58)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_58));
        vlSelf->top__DOT__d_cache__DOT___GEN_6117 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_59
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_59
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1739
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1739
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_59)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_59));
        vlSelf->top__DOT__d_cache__DOT___GEN_6118 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_60
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_60
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1740
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1740
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_60)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_60));
        vlSelf->top__DOT__d_cache__DOT___GEN_6119 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_61
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_61
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1741
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1741
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_61)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_61));
        vlSelf->top__DOT__d_cache__DOT___GEN_6120 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_62
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_62
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1742
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1742
                              : vlSelf->top__DOT__d_cache__DOT__ram_1_62)))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_62));
        vlSelf->top__DOT__d_cache__DOT___GEN_6121 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_1_63
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_1_63
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_1743
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_1743
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
    vlSelf->top__DOT__d_cache__DOT___GEN_1164 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_521)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_0));
    vlSelf->top__DOT__d_cache__DOT___GEN_5994 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_0)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_0)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_521)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_0)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_0)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_521))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_0))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1165 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_522)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_1));
    vlSelf->top__DOT__d_cache__DOT___GEN_5995 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_1)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_1)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_522)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_1)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_1)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_522))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_1))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1166 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_523)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_2));
    vlSelf->top__DOT__d_cache__DOT___GEN_5996 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_2)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_2)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_523)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_2)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_2)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_523))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_2))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1167 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_524)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_3));
    vlSelf->top__DOT__d_cache__DOT___GEN_5997 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_3)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_3)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_524)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_3)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_3)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_524))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_3))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1168 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_525)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_4));
    vlSelf->top__DOT__d_cache__DOT___GEN_5998 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_4)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_4)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_525)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_4)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_4)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_525))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_4))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1169 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_526)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_5));
    vlSelf->top__DOT__d_cache__DOT___GEN_5999 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_5)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_5)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_526)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_5)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_5)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_526))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_5))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1170 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_527)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_6));
    vlSelf->top__DOT__d_cache__DOT___GEN_6000 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_6)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_6)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_527)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_6)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_6)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_527))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_6))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1171 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_528)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_7));
    vlSelf->top__DOT__d_cache__DOT___GEN_6001 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_7)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_7)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_528)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_7)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_7)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_528))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_7))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1172 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_529)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_8));
    vlSelf->top__DOT__d_cache__DOT___GEN_6002 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_8)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_8)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_529)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_8)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_8)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_529))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_8))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1173 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_530)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_9));
    vlSelf->top__DOT__d_cache__DOT___GEN_6003 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_9)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_9)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_530)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_9)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_9)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_530))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_9))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1174 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_531)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_10));
    vlSelf->top__DOT__d_cache__DOT___GEN_6004 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_10)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_10)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_531)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_10)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_10)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_531))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_10))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1175 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_532)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_11));
    vlSelf->top__DOT__d_cache__DOT___GEN_6005 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_11)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_11)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_532)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_11)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_11)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_532))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_11))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1176 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_533)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_12));
    vlSelf->top__DOT__d_cache__DOT___GEN_6006 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_12)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_12)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_533)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_12)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_12)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_533))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_12))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1177 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_534)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_13));
    vlSelf->top__DOT__d_cache__DOT___GEN_6007 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_13)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_13)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_534)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_13)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_13)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_534))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_13))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1178 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_535)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_14));
    vlSelf->top__DOT__d_cache__DOT___GEN_6008 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_14)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_14)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_535)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_14)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_14)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_535))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_14))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1179 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_536)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_15));
    vlSelf->top__DOT__d_cache__DOT___GEN_6009 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_15)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_15)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_536)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_15)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_15)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_536))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_15))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1180 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_537)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_16));
    vlSelf->top__DOT__d_cache__DOT___GEN_6010 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_16)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_16)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_537)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_16)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_16)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_537))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_16))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1181 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_538)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_17));
    vlSelf->top__DOT__d_cache__DOT___GEN_6011 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_17)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_17)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_538)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_17)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_17)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_538))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_17))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1182 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_539)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_18));
    vlSelf->top__DOT__d_cache__DOT___GEN_6012 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_18)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_18)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_539)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_18)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_18)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_539))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_18))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1183 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_540)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_19));
    vlSelf->top__DOT__d_cache__DOT___GEN_6013 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_19)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_19)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_540)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_19)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_19)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_540))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_19))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1184 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_541)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_20));
    vlSelf->top__DOT__d_cache__DOT___GEN_6014 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_20)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_20)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_541)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_20)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_20)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_541))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_20))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1185 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_542)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_21));
    vlSelf->top__DOT__d_cache__DOT___GEN_6015 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_21)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_21)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_542)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_21)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_21)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_542))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_21))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1186 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_543)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_22));
    vlSelf->top__DOT__d_cache__DOT___GEN_6016 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_22)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_22)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_543)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_22)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_22)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_543))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_22))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1187 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_544)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_23));
    vlSelf->top__DOT__d_cache__DOT___GEN_6017 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_23)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_23)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_544)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_23)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_23)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_544))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_23))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1188 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_545)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_24));
    vlSelf->top__DOT__d_cache__DOT___GEN_6018 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_24)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_24)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_545)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_24)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_24)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_545))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_24))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1189 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_546)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_25));
    vlSelf->top__DOT__d_cache__DOT___GEN_6019 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_25)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_25)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_546)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_25)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_25)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_546))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_25))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1190 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_547)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_26));
    vlSelf->top__DOT__d_cache__DOT___GEN_6020 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_26)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_26)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_547)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_26)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_26)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_547))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_26))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1191 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_548)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_27));
    vlSelf->top__DOT__d_cache__DOT___GEN_6021 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_27)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_27)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_548)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_27)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_27)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_548))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_27))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1192 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_549)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_28));
    vlSelf->top__DOT__d_cache__DOT___GEN_6022 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_28)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_28)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_549)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_28)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_28)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_549))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_28))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1193 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_550)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_29));
    vlSelf->top__DOT__d_cache__DOT___GEN_6023 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_29)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_29)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_550)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_29)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_29)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_550))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_29))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1194 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_551)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_30));
    vlSelf->top__DOT__d_cache__DOT___GEN_6024 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_30)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_30)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_551)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_30)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_30)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_551))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_30))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1195 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_552)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_31));
    vlSelf->top__DOT__d_cache__DOT___GEN_6025 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_31)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_31)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_552)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_31)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_31)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_552))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_31))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1196 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_553)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_32));
    vlSelf->top__DOT__d_cache__DOT___GEN_6026 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_32)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_32)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_553)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_32)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_32)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_553))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_32))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1197 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_554)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_33));
    vlSelf->top__DOT__d_cache__DOT___GEN_6027 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_33)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_33)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_554)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_33)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_33)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_554))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_33))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1198 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_555)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_34));
    vlSelf->top__DOT__d_cache__DOT___GEN_6028 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_34)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_34)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_555)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_34)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_34)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_555))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_34))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1199 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_556)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_35));
    vlSelf->top__DOT__d_cache__DOT___GEN_6029 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_35)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_35)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_556)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_35)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_35)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_556))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_35))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1200 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_557)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_36));
    vlSelf->top__DOT__d_cache__DOT___GEN_6030 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_36)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_36)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_557)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_36)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_36)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_557))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_36))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1201 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_558)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_37));
    vlSelf->top__DOT__d_cache__DOT___GEN_6031 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_37)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_37)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_558)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_37)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_37)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_558))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_37))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1202 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_559)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_38));
    vlSelf->top__DOT__d_cache__DOT___GEN_6032 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_38)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_38)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_559)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_38)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_38)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_559))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_38))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1203 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_560)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_39));
    vlSelf->top__DOT__d_cache__DOT___GEN_6033 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_39)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_39)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_560)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_39)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_39)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_560))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_39))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1204 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_561)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_40));
    vlSelf->top__DOT__d_cache__DOT___GEN_6034 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_40)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_40)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_561)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_40)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_40)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_561))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_40))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1205 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_562)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_41));
    vlSelf->top__DOT__d_cache__DOT___GEN_6035 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_41)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_41)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_562)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_41)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_41)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_562))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_41))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1206 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_563)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_42));
    vlSelf->top__DOT__d_cache__DOT___GEN_6036 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_42)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_42)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_563)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_42)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_42)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_563))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_42))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1207 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_564)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_43));
    vlSelf->top__DOT__d_cache__DOT___GEN_6037 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_43)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_43)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_564)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_43)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_43)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_564))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_43))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1208 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_565)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_44));
    vlSelf->top__DOT__d_cache__DOT___GEN_6038 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_44)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_44)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_565)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_44)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_44)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_565))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_44))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1209 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_566)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_45));
    vlSelf->top__DOT__d_cache__DOT___GEN_6039 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_45)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_45)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_566)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_45)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_45)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_566))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_45))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1210 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_567)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_46));
    vlSelf->top__DOT__d_cache__DOT___GEN_6040 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_46)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_46)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_567)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_46)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_46)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_567))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_46))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1211 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_568)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_47));
    vlSelf->top__DOT__d_cache__DOT___GEN_6041 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_47)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_47)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_568)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_47)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_47)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_568))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_47))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1212 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_569)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_48));
    vlSelf->top__DOT__d_cache__DOT___GEN_6042 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_48)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_48)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_569)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_48)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_48)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_569))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_48))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1213 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_570)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_49));
    vlSelf->top__DOT__d_cache__DOT___GEN_6043 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_49)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_49)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_570)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_49)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_49)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_570))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_49))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1214 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_571)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_50));
    vlSelf->top__DOT__d_cache__DOT___GEN_6044 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_50)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_50)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_571)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_50)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_50)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_571))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_50))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1215 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_572)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_51));
    vlSelf->top__DOT__d_cache__DOT___GEN_6045 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_51)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_51)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_572)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_51)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_51)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_572))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_51))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1216 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_573)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_52));
    vlSelf->top__DOT__d_cache__DOT___GEN_6046 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_52)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_52)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_573)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_52)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_52)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_573))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_52))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1217 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_574)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_53));
    vlSelf->top__DOT__d_cache__DOT___GEN_6047 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_53)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_53)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_574)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_53)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_53)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_574))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_53))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1218 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_575)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_54));
    vlSelf->top__DOT__d_cache__DOT___GEN_6048 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_54)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_54)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_575)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_54)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_54)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_575))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_54))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1219 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_576)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_55));
    vlSelf->top__DOT__d_cache__DOT___GEN_6049 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_55)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_55)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_576)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_55)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_55)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_576))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_55))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1220 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_577)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_56));
    vlSelf->top__DOT__d_cache__DOT___GEN_6050 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_56)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_56)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_577)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_56)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_56)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_577))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_56))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1221 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_578)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_57));
    vlSelf->top__DOT__d_cache__DOT___GEN_6051 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_57)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_57)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_578)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_57)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_57)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_578))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_57))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1222 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_579)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_58));
    vlSelf->top__DOT__d_cache__DOT___GEN_6052 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_58)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_58)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_579)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_58)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_58)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_579))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_58))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1223 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_580)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_59));
    vlSelf->top__DOT__d_cache__DOT___GEN_6053 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_59)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_59)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_580)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_59)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_59)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_580))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_59))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1224 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_581)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_60));
    vlSelf->top__DOT__d_cache__DOT___GEN_6054 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_60)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_60)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_581)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_60)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_60)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_581))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_60))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1225 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_582)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_61));
    vlSelf->top__DOT__d_cache__DOT___GEN_6055 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_61)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_61)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_582)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_61)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_61)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_582))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_61))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1226 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_583)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_62));
    vlSelf->top__DOT__d_cache__DOT___GEN_6056 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_62)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_62)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_583)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_62)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_62)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_583))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_62))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1227 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_584)
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_63));
    vlSelf->top__DOT__d_cache__DOT___GEN_6057 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_63)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_63)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_584)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_63)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_63)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_584))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_63))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1357 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_0)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_777)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_0)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6186 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_0)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_0)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_0)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_777)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_777)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_0))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_0))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1358 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_1)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_778)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_1)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6187 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_1)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_1)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_1)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_778)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_778)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_1))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_1))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1359 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_2)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_779)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_2)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6188 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_2)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_2)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_2)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_779)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_779)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_2))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_2))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1360 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_3)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_780)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_3)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6189 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_3)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_3)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_3)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_780)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_780)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_3))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_3))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1361 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_4)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_781)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_4)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6190 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_4)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_4)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_4)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_781)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_781)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_4))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_4))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1362 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_5)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_782)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_5)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6191 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_5)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_5)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_5)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_782)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_782)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_5))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_5))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1363 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_6)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_783)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_6)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6192 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_6)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_6)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_6)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_783)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_783)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_6))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_6))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1364 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_7)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_784)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_7)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6193 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_7)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_7)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_7)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_784)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_784)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_7))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_7))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1365 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_8)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_785)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_8)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6194 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_8)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_8)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_8)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_785)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_785)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_8))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_8))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1366 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_9)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_786)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_9)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6195 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_9)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_9)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_9)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_786)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_786)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_9))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_9))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1367 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_10)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_787)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_10)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6196 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_10)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_10)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_10)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_787)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_787)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_10))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_10))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1368 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_11)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_788)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_11)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6197 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_11)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_11)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_11)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_788)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_788)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_11))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_11))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1369 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_12)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_789)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_12)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6198 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_12)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_12)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_12)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_789)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_789)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_12))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_12))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1370 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_13)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_790)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_13)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6199 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_13)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_13)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_13)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_790)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_790)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_13))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_13))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1371 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_14)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_791)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_14)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6200 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_14)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_14)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_14)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_791)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_791)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_14))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_14))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1372 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_15)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_792)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_15)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6201 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_15)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_15)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_15)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_792)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_792)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_15))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_15))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1373 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_16)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_793)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_16)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6202 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_16)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_16)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_16)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_793)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_793)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_16))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_16))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1374 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_17)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_794)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_17)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6203 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_17)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_17)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_17)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_794)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_794)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_17))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_17))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1375 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_18)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_795)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_18)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6204 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_18)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_18)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_18)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_795)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_795)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_18))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_18))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1376 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_19)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_796)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_19)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6205 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_19)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_19)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_19)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_796)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_796)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_19))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_19))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1377 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_20)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_797)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_20)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6206 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_20)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_20)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_20)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_797)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_797)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_20))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_20))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1378 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_21)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_798)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_21)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6207 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_21)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_21)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_21)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_798)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_798)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_21))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_21))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1379 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_22)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_799)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_22)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6208 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_22)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_22)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_22)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_799)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_799)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_22))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_22))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1380 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_23)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_800)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_23)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6209 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_23)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_23)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_23)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_800)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_800)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_23))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_23))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1381 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_24)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_801)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_24)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6210 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_24)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_24)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_24)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_801)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_801)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_24))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_24))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1382 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_25)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_802)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_25)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6211 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_25)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_25)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_25)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_802)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_802)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_25))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_25))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1383 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_26)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_803)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_26)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6212 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_26)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_26)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_26)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_803)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_803)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_26))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_26))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1384 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_27)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_804)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_27)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6213 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_27)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_27)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_27)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_804)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_804)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_27))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_27))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1385 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_28)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_805)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_28)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6214 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_28)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_28)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_28)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_805)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_805)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_28))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_28))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1386 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_29)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_806)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_29)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6215 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_29)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_29)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_29)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_806)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_806)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_29))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_29))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1387 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_30)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_807)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_30)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6216 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_30)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_30)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_30)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_807)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_807)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_30))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_30))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1388 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_31)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_808)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_31)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6217 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_31)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_31)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_31)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_808)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_808)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_31))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_31))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1389 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_32)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_809)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_32)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6218 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_32)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_32)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_32)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_809)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_809)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_32))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_32))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1390 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_33)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_810)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_33)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6219 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_33)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_33)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_33)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_810)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_810)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_33))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_33))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1391 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_34)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_811)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_34)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6220 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_34)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_34)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_34)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_811)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_811)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_34))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_34))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1392 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_35)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_812)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_35)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6221 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_35)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_35)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_35)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_812)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_812)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_35))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_35))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1393 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_36)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_813)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_36)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6222 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_36)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_36)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_36)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_813)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_813)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_36))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_36))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1394 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_37)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_814)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_37)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6223 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_37)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_37)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_37)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_814)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_814)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_37))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_37))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1395 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_38)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_815)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_38)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6224 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_38)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_38)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_38)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_815)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_815)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_38))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_38))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1396 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_39)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_816)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_39)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6225 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_39)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_39)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_39)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_816)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_816)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_39))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_39))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1397 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_40)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_817)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_40)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6226 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_40)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_40)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_40)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_817)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_817)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_40))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_40))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1398 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_41)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_818)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_41)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6227 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_41)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_41)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_41)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_818)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_818)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_41))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_41))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1399 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_42)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_819)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_42)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6228 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_42)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_42)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_42)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_819)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_819)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_42))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_42))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1400 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_43)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_820)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_43)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6229 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_43)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_43)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_43)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_820)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_820)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_43))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_43))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1401 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_44)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_821)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_44)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6230 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_44)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_44)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_44)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_821)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_821)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_44))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_44))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1402 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_45)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_822)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_45)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6231 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_45)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_45)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_45)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_822)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_822)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_45))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_45))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1403 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_46)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_823)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_46)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6232 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_46)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_46)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_46)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_823)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_823)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_46))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_46))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1404 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_47)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_824)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_47)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6233 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_47)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_47)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_47)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_824)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_824)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_47))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_47))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1405 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_48)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_825)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_48)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6234 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_48)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_48)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_48)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_825)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_825)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_48))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_48))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1406 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_49)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_826)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_49)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6235 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_49)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_49)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_49)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_826)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_826)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_49))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_49))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1407 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_50)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_827)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_50)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6236 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_50)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_50)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_50)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_827)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_827)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_50))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_50))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1408 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_51)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_828)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_51)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6237 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_51)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_51)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_51)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_828)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_828)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_51))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_51))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1409 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_52)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_829)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_52)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6238 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_52)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_52)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_52)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_829)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_829)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_52))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_52))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1410 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_53)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_830)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_53)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6239 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_53)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_53)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_53)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_830)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_830)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_53))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_53))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1411 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_54)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_831)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_54)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6240 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_54)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_54)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_54)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_831)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_831)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_54))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_54))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1412 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_55)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_832)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_55)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6241 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_55)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_55)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_55)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_832)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_832)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_55))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_55))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1413 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_56)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_833)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_56)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6242 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_56)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_56)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_56)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_833)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_833)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_56))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_56))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1414 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_57)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_834)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_57)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6243 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_57)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_57)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_57)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_834)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_834)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_57))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_57))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1415 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_58)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_835)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_58)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6244 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_58)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_58)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_58)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_835)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_835)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_58))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_58))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1416 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_59)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_836)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_59)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6245 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_59)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_59)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_59)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_836)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_836)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_59))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_59))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1417 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_60)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_837)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_60)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6246 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_60)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_60)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_60)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_837)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_837)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_60))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_60))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1418 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_61)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_838)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_61)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6247 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_61)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_61)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_61)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_838)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_838)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_61))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_61))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1419 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_62)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_839)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_62)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6248 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_62)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_62)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_62)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_839)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_839)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_62))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_62))));
    vlSelf->top__DOT__d_cache__DOT___GEN_1420 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_63)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_840)
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_63)));
    vlSelf->top__DOT__d_cache__DOT___GEN_6249 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_63)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_63)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_63)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_840)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_840)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_63))))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_63))));
    if (((IData)(vlSelf->top__DOT__axi__DOT__axi_arready) 
         & (IData)(vlSelf->top__DOT__arbiter_io_axi_out_arvalid))) {
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit((QData)((IData)(
                                                                              ((0U 
                                                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                                ? 
                                                                               ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_8019)
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_8019)
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
                                                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_8019)
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_8019)
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
                                                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_8023)
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_8023)
                                                                                 : 0U))
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_8023)
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_8023)
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
        top__DOT__d_cache__DOT___GEN_675 = vlSelf->top__DOT__d_cache__DOT__ram_1_26;
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
        top__DOT__d_cache__DOT___GEN_675 = ((0x19U 
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
                                                           : vlSelf->top__DOT__d_cache__DOT___GEN_662))))))))))));
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
    vlSelf->top__DOT__d_cache__DOT___GEN_5865 = ((3U 
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
        top__DOT__d_cache__DOT___GEN_688 = vlSelf->top__DOT__d_cache__DOT__ram_1_39;
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
        top__DOT__d_cache__DOT___GEN_688 = ((0x26U 
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
                                                           : top__DOT__d_cache__DOT___GEN_675))))))))))));
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
        top__DOT__d_cache__DOT___GEN_701 = vlSelf->top__DOT__d_cache__DOT__ram_1_52;
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
        top__DOT__d_cache__DOT___GEN_701 = ((0x33U 
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
                                                           : top__DOT__d_cache__DOT___GEN_688))))))))))));
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
        vlSelf->top__DOT__d_cache__DOT___GEN_712 = vlSelf->top__DOT__d_cache__DOT__ram_1_63;
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
        vlSelf->top__DOT__d_cache__DOT___GEN_712 = 
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
                                                  : top__DOT__d_cache__DOT___GEN_701))))))))));
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
    VL_EXTEND_WQ(127,64, __Vtemp117, vlSelf->top__DOT__d_cache__DOT___GEN_712);
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
                                                    (vlSelf->top__DOT__d_cache__DOT___GEN_712 
                                                     >> (IData)(vlSelf->top__DOT__d_cache__DOT__shift_bit))
                                                     : 0ULL))
                                                   : 0ULL));
    if ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_6252 = vlSelf->top__DOT__d_cache__DOT__dirty_0_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_6253 = vlSelf->top__DOT__d_cache__DOT__dirty_0_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_6254 = vlSelf->top__DOT__d_cache__DOT__dirty_0_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_6255 = vlSelf->top__DOT__d_cache__DOT__dirty_0_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_6256 = vlSelf->top__DOT__d_cache__DOT__dirty_0_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_6257 = vlSelf->top__DOT__d_cache__DOT__dirty_0_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_6258 = vlSelf->top__DOT__d_cache__DOT__dirty_0_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_6259 = vlSelf->top__DOT__d_cache__DOT__dirty_0_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_6260 = vlSelf->top__DOT__d_cache__DOT__dirty_0_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_6261 = vlSelf->top__DOT__d_cache__DOT__dirty_0_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_6262 = vlSelf->top__DOT__d_cache__DOT__dirty_0_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_6263 = vlSelf->top__DOT__d_cache__DOT__dirty_0_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_6264 = vlSelf->top__DOT__d_cache__DOT__dirty_0_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_6265 = vlSelf->top__DOT__d_cache__DOT__dirty_0_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_6266 = vlSelf->top__DOT__d_cache__DOT__dirty_0_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_6267 = vlSelf->top__DOT__d_cache__DOT__dirty_0_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_6268 = vlSelf->top__DOT__d_cache__DOT__dirty_0_16;
        vlSelf->top__DOT__d_cache__DOT___GEN_6269 = vlSelf->top__DOT__d_cache__DOT__dirty_0_17;
        vlSelf->top__DOT__d_cache__DOT___GEN_6270 = vlSelf->top__DOT__d_cache__DOT__dirty_0_18;
        vlSelf->top__DOT__d_cache__DOT___GEN_6271 = vlSelf->top__DOT__d_cache__DOT__dirty_0_19;
        vlSelf->top__DOT__d_cache__DOT___GEN_6272 = vlSelf->top__DOT__d_cache__DOT__dirty_0_20;
        vlSelf->top__DOT__d_cache__DOT___GEN_6273 = vlSelf->top__DOT__d_cache__DOT__dirty_0_21;
        vlSelf->top__DOT__d_cache__DOT___GEN_6274 = vlSelf->top__DOT__d_cache__DOT__dirty_0_22;
        vlSelf->top__DOT__d_cache__DOT___GEN_6275 = vlSelf->top__DOT__d_cache__DOT__dirty_0_23;
        vlSelf->top__DOT__d_cache__DOT___GEN_6276 = vlSelf->top__DOT__d_cache__DOT__dirty_0_24;
        vlSelf->top__DOT__d_cache__DOT___GEN_6277 = vlSelf->top__DOT__d_cache__DOT__dirty_0_25;
        vlSelf->top__DOT__d_cache__DOT___GEN_6278 = vlSelf->top__DOT__d_cache__DOT__dirty_0_26;
        vlSelf->top__DOT__d_cache__DOT___GEN_6279 = vlSelf->top__DOT__d_cache__DOT__dirty_0_27;
        vlSelf->top__DOT__d_cache__DOT___GEN_6280 = vlSelf->top__DOT__d_cache__DOT__dirty_0_28;
        vlSelf->top__DOT__d_cache__DOT___GEN_6281 = vlSelf->top__DOT__d_cache__DOT__dirty_0_29;
        vlSelf->top__DOT__d_cache__DOT___GEN_6282 = vlSelf->top__DOT__d_cache__DOT__dirty_0_30;
        vlSelf->top__DOT__d_cache__DOT___GEN_6283 = vlSelf->top__DOT__d_cache__DOT__dirty_0_31;
        vlSelf->top__DOT__d_cache__DOT___GEN_6284 = vlSelf->top__DOT__d_cache__DOT__dirty_0_32;
        vlSelf->top__DOT__d_cache__DOT___GEN_6285 = vlSelf->top__DOT__d_cache__DOT__dirty_0_33;
        vlSelf->top__DOT__d_cache__DOT___GEN_6286 = vlSelf->top__DOT__d_cache__DOT__dirty_0_34;
        vlSelf->top__DOT__d_cache__DOT___GEN_6287 = vlSelf->top__DOT__d_cache__DOT__dirty_0_35;
        vlSelf->top__DOT__d_cache__DOT___GEN_6288 = vlSelf->top__DOT__d_cache__DOT__dirty_0_36;
        vlSelf->top__DOT__d_cache__DOT___GEN_6289 = vlSelf->top__DOT__d_cache__DOT__dirty_0_37;
        vlSelf->top__DOT__d_cache__DOT___GEN_6290 = vlSelf->top__DOT__d_cache__DOT__dirty_0_38;
        vlSelf->top__DOT__d_cache__DOT___GEN_6291 = vlSelf->top__DOT__d_cache__DOT__dirty_0_39;
        vlSelf->top__DOT__d_cache__DOT___GEN_6292 = vlSelf->top__DOT__d_cache__DOT__dirty_0_40;
        vlSelf->top__DOT__d_cache__DOT___GEN_6293 = vlSelf->top__DOT__d_cache__DOT__dirty_0_41;
        vlSelf->top__DOT__d_cache__DOT___GEN_6294 = vlSelf->top__DOT__d_cache__DOT__dirty_0_42;
        vlSelf->top__DOT__d_cache__DOT___GEN_6295 = vlSelf->top__DOT__d_cache__DOT__dirty_0_43;
        vlSelf->top__DOT__d_cache__DOT___GEN_6296 = vlSelf->top__DOT__d_cache__DOT__dirty_0_44;
        vlSelf->top__DOT__d_cache__DOT___GEN_6297 = vlSelf->top__DOT__d_cache__DOT__dirty_0_45;
        vlSelf->top__DOT__d_cache__DOT___GEN_6298 = vlSelf->top__DOT__d_cache__DOT__dirty_0_46;
        vlSelf->top__DOT__d_cache__DOT___GEN_6299 = vlSelf->top__DOT__d_cache__DOT__dirty_0_47;
        vlSelf->top__DOT__d_cache__DOT___GEN_6300 = vlSelf->top__DOT__d_cache__DOT__dirty_0_48;
        vlSelf->top__DOT__d_cache__DOT___GEN_6301 = vlSelf->top__DOT__d_cache__DOT__dirty_0_49;
        vlSelf->top__DOT__d_cache__DOT___GEN_6302 = vlSelf->top__DOT__d_cache__DOT__dirty_0_50;
        vlSelf->top__DOT__d_cache__DOT___GEN_6303 = vlSelf->top__DOT__d_cache__DOT__dirty_0_51;
        vlSelf->top__DOT__d_cache__DOT___GEN_6304 = vlSelf->top__DOT__d_cache__DOT__dirty_0_52;
        vlSelf->top__DOT__d_cache__DOT___GEN_6305 = vlSelf->top__DOT__d_cache__DOT__dirty_0_53;
        vlSelf->top__DOT__d_cache__DOT___GEN_6306 = vlSelf->top__DOT__d_cache__DOT__dirty_0_54;
        vlSelf->top__DOT__d_cache__DOT___GEN_6307 = vlSelf->top__DOT__d_cache__DOT__dirty_0_55;
        vlSelf->top__DOT__d_cache__DOT___GEN_6308 = vlSelf->top__DOT__d_cache__DOT__dirty_0_56;
        vlSelf->top__DOT__d_cache__DOT___GEN_6309 = vlSelf->top__DOT__d_cache__DOT__dirty_0_57;
        vlSelf->top__DOT__d_cache__DOT___GEN_6310 = vlSelf->top__DOT__d_cache__DOT__dirty_0_58;
        vlSelf->top__DOT__d_cache__DOT___GEN_6311 = vlSelf->top__DOT__d_cache__DOT__dirty_0_59;
        vlSelf->top__DOT__d_cache__DOT___GEN_6312 = vlSelf->top__DOT__d_cache__DOT__dirty_0_60;
        vlSelf->top__DOT__d_cache__DOT___GEN_6313 = vlSelf->top__DOT__d_cache__DOT__dirty_0_61;
        vlSelf->top__DOT__d_cache__DOT___GEN_6314 = vlSelf->top__DOT__d_cache__DOT__dirty_0_62;
        vlSelf->top__DOT__d_cache__DOT___GEN_6315 = vlSelf->top__DOT__d_cache__DOT__dirty_0_63;
        vlSelf->top__DOT__d_cache__DOT___GEN_6316 = vlSelf->top__DOT__d_cache__DOT__dirty_1_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_6317 = vlSelf->top__DOT__d_cache__DOT__dirty_1_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_6318 = vlSelf->top__DOT__d_cache__DOT__dirty_1_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_6319 = vlSelf->top__DOT__d_cache__DOT__dirty_1_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_6320 = vlSelf->top__DOT__d_cache__DOT__dirty_1_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_6321 = vlSelf->top__DOT__d_cache__DOT__dirty_1_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_6322 = vlSelf->top__DOT__d_cache__DOT__dirty_1_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_6323 = vlSelf->top__DOT__d_cache__DOT__dirty_1_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_6324 = vlSelf->top__DOT__d_cache__DOT__dirty_1_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_6325 = vlSelf->top__DOT__d_cache__DOT__dirty_1_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_6326 = vlSelf->top__DOT__d_cache__DOT__dirty_1_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_6327 = vlSelf->top__DOT__d_cache__DOT__dirty_1_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_6328 = vlSelf->top__DOT__d_cache__DOT__dirty_1_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_6329 = vlSelf->top__DOT__d_cache__DOT__dirty_1_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_6330 = vlSelf->top__DOT__d_cache__DOT__dirty_1_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_6331 = vlSelf->top__DOT__d_cache__DOT__dirty_1_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_6332 = vlSelf->top__DOT__d_cache__DOT__dirty_1_16;
        vlSelf->top__DOT__d_cache__DOT___GEN_6333 = vlSelf->top__DOT__d_cache__DOT__dirty_1_17;
        vlSelf->top__DOT__d_cache__DOT___GEN_6334 = vlSelf->top__DOT__d_cache__DOT__dirty_1_18;
        vlSelf->top__DOT__d_cache__DOT___GEN_6335 = vlSelf->top__DOT__d_cache__DOT__dirty_1_19;
        vlSelf->top__DOT__d_cache__DOT___GEN_6336 = vlSelf->top__DOT__d_cache__DOT__dirty_1_20;
        vlSelf->top__DOT__d_cache__DOT___GEN_6337 = vlSelf->top__DOT__d_cache__DOT__dirty_1_21;
        vlSelf->top__DOT__d_cache__DOT___GEN_6338 = vlSelf->top__DOT__d_cache__DOT__dirty_1_22;
        vlSelf->top__DOT__d_cache__DOT___GEN_6339 = vlSelf->top__DOT__d_cache__DOT__dirty_1_23;
        vlSelf->top__DOT__d_cache__DOT___GEN_6340 = vlSelf->top__DOT__d_cache__DOT__dirty_1_24;
        vlSelf->top__DOT__d_cache__DOT___GEN_6341 = vlSelf->top__DOT__d_cache__DOT__dirty_1_25;
        vlSelf->top__DOT__d_cache__DOT___GEN_6342 = vlSelf->top__DOT__d_cache__DOT__dirty_1_26;
        vlSelf->top__DOT__d_cache__DOT___GEN_6343 = vlSelf->top__DOT__d_cache__DOT__dirty_1_27;
        vlSelf->top__DOT__d_cache__DOT___GEN_6344 = vlSelf->top__DOT__d_cache__DOT__dirty_1_28;
        vlSelf->top__DOT__d_cache__DOT___GEN_6345 = vlSelf->top__DOT__d_cache__DOT__dirty_1_29;
        vlSelf->top__DOT__d_cache__DOT___GEN_6346 = vlSelf->top__DOT__d_cache__DOT__dirty_1_30;
        vlSelf->top__DOT__d_cache__DOT___GEN_6347 = vlSelf->top__DOT__d_cache__DOT__dirty_1_31;
        vlSelf->top__DOT__d_cache__DOT___GEN_6348 = vlSelf->top__DOT__d_cache__DOT__dirty_1_32;
        vlSelf->top__DOT__d_cache__DOT___GEN_6349 = vlSelf->top__DOT__d_cache__DOT__dirty_1_33;
        vlSelf->top__DOT__d_cache__DOT___GEN_6350 = vlSelf->top__DOT__d_cache__DOT__dirty_1_34;
        vlSelf->top__DOT__d_cache__DOT___GEN_6351 = vlSelf->top__DOT__d_cache__DOT__dirty_1_35;
        vlSelf->top__DOT__d_cache__DOT___GEN_6352 = vlSelf->top__DOT__d_cache__DOT__dirty_1_36;
        vlSelf->top__DOT__d_cache__DOT___GEN_6353 = vlSelf->top__DOT__d_cache__DOT__dirty_1_37;
        vlSelf->top__DOT__d_cache__DOT___GEN_6354 = vlSelf->top__DOT__d_cache__DOT__dirty_1_38;
        vlSelf->top__DOT__d_cache__DOT___GEN_6355 = vlSelf->top__DOT__d_cache__DOT__dirty_1_39;
        vlSelf->top__DOT__d_cache__DOT___GEN_6356 = vlSelf->top__DOT__d_cache__DOT__dirty_1_40;
        vlSelf->top__DOT__d_cache__DOT___GEN_6357 = vlSelf->top__DOT__d_cache__DOT__dirty_1_41;
        vlSelf->top__DOT__d_cache__DOT___GEN_6358 = vlSelf->top__DOT__d_cache__DOT__dirty_1_42;
        vlSelf->top__DOT__d_cache__DOT___GEN_6359 = vlSelf->top__DOT__d_cache__DOT__dirty_1_43;
        vlSelf->top__DOT__d_cache__DOT___GEN_6360 = vlSelf->top__DOT__d_cache__DOT__dirty_1_44;
        vlSelf->top__DOT__d_cache__DOT___GEN_6361 = vlSelf->top__DOT__d_cache__DOT__dirty_1_45;
        vlSelf->top__DOT__d_cache__DOT___GEN_6362 = vlSelf->top__DOT__d_cache__DOT__dirty_1_46;
        vlSelf->top__DOT__d_cache__DOT___GEN_6363 = vlSelf->top__DOT__d_cache__DOT__dirty_1_47;
        vlSelf->top__DOT__d_cache__DOT___GEN_6364 = vlSelf->top__DOT__d_cache__DOT__dirty_1_48;
        vlSelf->top__DOT__d_cache__DOT___GEN_6365 = vlSelf->top__DOT__d_cache__DOT__dirty_1_49;
        vlSelf->top__DOT__d_cache__DOT___GEN_6366 = vlSelf->top__DOT__d_cache__DOT__dirty_1_50;
        vlSelf->top__DOT__d_cache__DOT___GEN_6367 = vlSelf->top__DOT__d_cache__DOT__dirty_1_51;
        vlSelf->top__DOT__d_cache__DOT___GEN_6368 = vlSelf->top__DOT__d_cache__DOT__dirty_1_52;
        vlSelf->top__DOT__d_cache__DOT___GEN_6369 = vlSelf->top__DOT__d_cache__DOT__dirty_1_53;
        vlSelf->top__DOT__d_cache__DOT___GEN_6370 = vlSelf->top__DOT__d_cache__DOT__dirty_1_54;
        vlSelf->top__DOT__d_cache__DOT___GEN_6371 = vlSelf->top__DOT__d_cache__DOT__dirty_1_55;
        vlSelf->top__DOT__d_cache__DOT___GEN_6372 = vlSelf->top__DOT__d_cache__DOT__dirty_1_56;
        vlSelf->top__DOT__d_cache__DOT___GEN_6373 = vlSelf->top__DOT__d_cache__DOT__dirty_1_57;
        vlSelf->top__DOT__d_cache__DOT___GEN_6374 = vlSelf->top__DOT__d_cache__DOT__dirty_1_58;
        vlSelf->top__DOT__d_cache__DOT___GEN_6375 = vlSelf->top__DOT__d_cache__DOT__dirty_1_59;
        vlSelf->top__DOT__d_cache__DOT___GEN_6376 = vlSelf->top__DOT__d_cache__DOT__dirty_1_60;
        vlSelf->top__DOT__d_cache__DOT___GEN_6377 = vlSelf->top__DOT__d_cache__DOT__dirty_1_61;
        vlSelf->top__DOT__d_cache__DOT___GEN_6378 = vlSelf->top__DOT__d_cache__DOT__dirty_1_62;
        vlSelf->top__DOT__d_cache__DOT___GEN_6379 = vlSelf->top__DOT__d_cache__DOT__dirty_1_63;
        vlSelf->top__DOT__d_cache__DOT___GEN_5864 = 
            ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
              ? 5U : (IData)(vlSelf->top__DOT__d_cache__DOT__state));
        vlSelf->top__DOT__d_cache__DOT___GEN_6250 = vlSelf->top__DOT__d_cache__DOT__write_back_data;
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_6252 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6253 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6254 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6255 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6256 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6257 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6258 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6259 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6260 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6261 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6262 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6263 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6264 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6265 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6266 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6267 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6268 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6269 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6270 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6271 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6272 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6273 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6274 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6275 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6276 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6277 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6278 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6279 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6280 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6281 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6282 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6283 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6284 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6285 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6286 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6287 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6288 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6289 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6290 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6291 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6292 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6293 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6294 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6295 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6296 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6297 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6298 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6299 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6300 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6301 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6302 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6303 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6304 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6305 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6306 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6307 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6308 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6309 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6310 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6311 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6312 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6313 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6314 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6315 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6316 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6317 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6318 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6319 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6320 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6321 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6322 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6323 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6324 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6325 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6326 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6327 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6328 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6329 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6330 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6331 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6332 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6333 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6334 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6335 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6336 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6337 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6338 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6339 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6340 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6341 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6342 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6343 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6344 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6345 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6346 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6347 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6348 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6349 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6350 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6351 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6352 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6353 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6354 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6355 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6356 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6357 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6358 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6359 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6360 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6361 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6362 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6363 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6364 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6365 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6366 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6367 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6368 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6369 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6370 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6371 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6372 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6373 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6374 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6375 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6376 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6377 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6378 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6379 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_5864 = 
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
        vlSelf->top__DOT__d_cache__DOT___GEN_6250 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__write_back_data
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__write_back_data
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__write_back_data
                          : ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                                  ? vlSelf->top__DOT__d_cache__DOT___GEN_712
                                  : vlSelf->top__DOT__d_cache__DOT__write_back_data)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_325)
                                  ? vlSelf->top__DOT__d_cache__DOT___GEN_456
                                  : vlSelf->top__DOT__d_cache__DOT__write_back_data))))
                  : vlSelf->top__DOT__d_cache__DOT__write_back_data));
    }
    if (vlSelf->top__DOT__d_cache__DOT__way0_hit) {
        vlSelf->top__DOT__d_cache__DOT___GEN_1100 = 
            ((0U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_0);
        vlSelf->top__DOT__d_cache__DOT___GEN_1101 = 
            ((1U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_1);
        vlSelf->top__DOT__d_cache__DOT___GEN_1102 = 
            ((2U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_2);
        vlSelf->top__DOT__d_cache__DOT___GEN_1103 = 
            ((3U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_3);
        vlSelf->top__DOT__d_cache__DOT___GEN_1104 = 
            ((4U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_4);
        vlSelf->top__DOT__d_cache__DOT___GEN_1105 = 
            ((5U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_5);
        vlSelf->top__DOT__d_cache__DOT___GEN_1106 = 
            ((6U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_6);
        vlSelf->top__DOT__d_cache__DOT___GEN_1107 = 
            ((7U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_7);
        vlSelf->top__DOT__d_cache__DOT___GEN_1108 = 
            ((8U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_8);
        vlSelf->top__DOT__d_cache__DOT___GEN_1109 = 
            ((9U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_9);
        vlSelf->top__DOT__d_cache__DOT___GEN_1110 = 
            ((0xaU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                        >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_10);
        vlSelf->top__DOT__d_cache__DOT___GEN_1111 = 
            ((0xbU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                        >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_11);
        vlSelf->top__DOT__d_cache__DOT___GEN_1112 = 
            ((0xcU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                        >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_12);
        vlSelf->top__DOT__d_cache__DOT___GEN_1113 = 
            ((0xdU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                        >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_13);
        vlSelf->top__DOT__d_cache__DOT___GEN_1114 = 
            ((0xeU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                        >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_14);
        vlSelf->top__DOT__d_cache__DOT___GEN_1115 = 
            ((0xfU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                        >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_15);
        vlSelf->top__DOT__d_cache__DOT___GEN_1116 = 
            ((0x10U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_16);
        vlSelf->top__DOT__d_cache__DOT___GEN_1117 = 
            ((0x11U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_17);
        vlSelf->top__DOT__d_cache__DOT___GEN_1118 = 
            ((0x12U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_18);
        vlSelf->top__DOT__d_cache__DOT___GEN_1119 = 
            ((0x13U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_19);
        vlSelf->top__DOT__d_cache__DOT___GEN_1120 = 
            ((0x14U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_20);
        vlSelf->top__DOT__d_cache__DOT___GEN_1121 = 
            ((0x15U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_21);
        vlSelf->top__DOT__d_cache__DOT___GEN_1122 = 
            ((0x16U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_22);
        vlSelf->top__DOT__d_cache__DOT___GEN_1123 = 
            ((0x17U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_23);
        vlSelf->top__DOT__d_cache__DOT___GEN_1124 = 
            ((0x18U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_24);
        vlSelf->top__DOT__d_cache__DOT___GEN_1125 = 
            ((0x19U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_25);
        vlSelf->top__DOT__d_cache__DOT___GEN_1126 = 
            ((0x1aU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_26);
        vlSelf->top__DOT__d_cache__DOT___GEN_1127 = 
            ((0x1bU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_27);
        vlSelf->top__DOT__d_cache__DOT___GEN_1128 = 
            ((0x1cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_28);
        vlSelf->top__DOT__d_cache__DOT___GEN_1129 = 
            ((0x1dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_29);
        vlSelf->top__DOT__d_cache__DOT___GEN_1130 = 
            ((0x1eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_30);
        vlSelf->top__DOT__d_cache__DOT___GEN_1131 = 
            ((0x1fU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_31);
        vlSelf->top__DOT__d_cache__DOT___GEN_1132 = 
            ((0x20U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_32);
        vlSelf->top__DOT__d_cache__DOT___GEN_1133 = 
            ((0x21U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_33);
        vlSelf->top__DOT__d_cache__DOT___GEN_1134 = 
            ((0x22U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_34);
        vlSelf->top__DOT__d_cache__DOT___GEN_1135 = 
            ((0x23U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_35);
        vlSelf->top__DOT__d_cache__DOT___GEN_1136 = 
            ((0x24U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_36);
        vlSelf->top__DOT__d_cache__DOT___GEN_1137 = 
            ((0x25U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_37);
        vlSelf->top__DOT__d_cache__DOT___GEN_1138 = 
            ((0x26U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_38);
        vlSelf->top__DOT__d_cache__DOT___GEN_1139 = 
            ((0x27U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_39);
        vlSelf->top__DOT__d_cache__DOT___GEN_1140 = 
            ((0x28U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_40);
        vlSelf->top__DOT__d_cache__DOT___GEN_1141 = 
            ((0x29U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_41);
        vlSelf->top__DOT__d_cache__DOT___GEN_1142 = 
            ((0x2aU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_42);
        vlSelf->top__DOT__d_cache__DOT___GEN_1143 = 
            ((0x2bU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_43);
        vlSelf->top__DOT__d_cache__DOT___GEN_1144 = 
            ((0x2cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_44);
        vlSelf->top__DOT__d_cache__DOT___GEN_1145 = 
            ((0x2dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_45);
        vlSelf->top__DOT__d_cache__DOT___GEN_1146 = 
            ((0x2eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_46);
        vlSelf->top__DOT__d_cache__DOT___GEN_1147 = 
            ((0x2fU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_47);
        vlSelf->top__DOT__d_cache__DOT___GEN_1148 = 
            ((0x30U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_48);
        vlSelf->top__DOT__d_cache__DOT___GEN_1149 = 
            ((0x31U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_49);
        vlSelf->top__DOT__d_cache__DOT___GEN_1150 = 
            ((0x32U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_50);
        vlSelf->top__DOT__d_cache__DOT___GEN_1151 = 
            ((0x33U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_51);
        vlSelf->top__DOT__d_cache__DOT___GEN_1152 = 
            ((0x34U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_52);
        vlSelf->top__DOT__d_cache__DOT___GEN_1153 = 
            ((0x35U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_53);
        vlSelf->top__DOT__d_cache__DOT___GEN_1154 = 
            ((0x36U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_54);
        vlSelf->top__DOT__d_cache__DOT___GEN_1155 = 
            ((0x37U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_55);
        vlSelf->top__DOT__d_cache__DOT___GEN_1156 = 
            ((0x38U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_56);
        vlSelf->top__DOT__d_cache__DOT___GEN_1157 = 
            ((0x39U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_57);
        vlSelf->top__DOT__d_cache__DOT___GEN_1158 = 
            ((0x3aU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_58);
        vlSelf->top__DOT__d_cache__DOT___GEN_1159 = 
            ((0x3bU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_59);
        vlSelf->top__DOT__d_cache__DOT___GEN_1160 = 
            ((0x3cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_60);
        vlSelf->top__DOT__d_cache__DOT___GEN_1161 = 
            ((0x3dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_61);
        vlSelf->top__DOT__d_cache__DOT___GEN_1162 = 
            ((0x3eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_62);
        vlSelf->top__DOT__d_cache__DOT___GEN_1163 = 
            ((0x3fU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_63);
        vlSelf->top__DOT__d_cache__DOT___GEN_1293 = vlSelf->top__DOT__d_cache__DOT__ram_1_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_1294 = vlSelf->top__DOT__d_cache__DOT__ram_1_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_1295 = vlSelf->top__DOT__d_cache__DOT__ram_1_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_1296 = vlSelf->top__DOT__d_cache__DOT__ram_1_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_1297 = vlSelf->top__DOT__d_cache__DOT__ram_1_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_1298 = vlSelf->top__DOT__d_cache__DOT__ram_1_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_1299 = vlSelf->top__DOT__d_cache__DOT__ram_1_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_1300 = vlSelf->top__DOT__d_cache__DOT__ram_1_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_1301 = vlSelf->top__DOT__d_cache__DOT__ram_1_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_1302 = vlSelf->top__DOT__d_cache__DOT__ram_1_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_1303 = vlSelf->top__DOT__d_cache__DOT__ram_1_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_1304 = vlSelf->top__DOT__d_cache__DOT__ram_1_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_1305 = vlSelf->top__DOT__d_cache__DOT__ram_1_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_1306 = vlSelf->top__DOT__d_cache__DOT__ram_1_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_1307 = vlSelf->top__DOT__d_cache__DOT__ram_1_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_1308 = vlSelf->top__DOT__d_cache__DOT__ram_1_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_1309 = vlSelf->top__DOT__d_cache__DOT__ram_1_16;
        vlSelf->top__DOT__d_cache__DOT___GEN_1310 = vlSelf->top__DOT__d_cache__DOT__ram_1_17;
        vlSelf->top__DOT__d_cache__DOT___GEN_1311 = vlSelf->top__DOT__d_cache__DOT__ram_1_18;
        vlSelf->top__DOT__d_cache__DOT___GEN_1312 = vlSelf->top__DOT__d_cache__DOT__ram_1_19;
        vlSelf->top__DOT__d_cache__DOT___GEN_1313 = vlSelf->top__DOT__d_cache__DOT__ram_1_20;
        vlSelf->top__DOT__d_cache__DOT___GEN_1314 = vlSelf->top__DOT__d_cache__DOT__ram_1_21;
        vlSelf->top__DOT__d_cache__DOT___GEN_1315 = vlSelf->top__DOT__d_cache__DOT__ram_1_22;
        vlSelf->top__DOT__d_cache__DOT___GEN_1316 = vlSelf->top__DOT__d_cache__DOT__ram_1_23;
        vlSelf->top__DOT__d_cache__DOT___GEN_1317 = vlSelf->top__DOT__d_cache__DOT__ram_1_24;
        vlSelf->top__DOT__d_cache__DOT___GEN_1318 = vlSelf->top__DOT__d_cache__DOT__ram_1_25;
        vlSelf->top__DOT__d_cache__DOT___GEN_1319 = vlSelf->top__DOT__d_cache__DOT__ram_1_26;
        vlSelf->top__DOT__d_cache__DOT___GEN_1320 = vlSelf->top__DOT__d_cache__DOT__ram_1_27;
        vlSelf->top__DOT__d_cache__DOT___GEN_1321 = vlSelf->top__DOT__d_cache__DOT__ram_1_28;
        vlSelf->top__DOT__d_cache__DOT___GEN_1322 = vlSelf->top__DOT__d_cache__DOT__ram_1_29;
        vlSelf->top__DOT__d_cache__DOT___GEN_1323 = vlSelf->top__DOT__d_cache__DOT__ram_1_30;
        vlSelf->top__DOT__d_cache__DOT___GEN_1324 = vlSelf->top__DOT__d_cache__DOT__ram_1_31;
        vlSelf->top__DOT__d_cache__DOT___GEN_1325 = vlSelf->top__DOT__d_cache__DOT__ram_1_32;
        vlSelf->top__DOT__d_cache__DOT___GEN_1326 = vlSelf->top__DOT__d_cache__DOT__ram_1_33;
        vlSelf->top__DOT__d_cache__DOT___GEN_1327 = vlSelf->top__DOT__d_cache__DOT__ram_1_34;
        vlSelf->top__DOT__d_cache__DOT___GEN_1328 = vlSelf->top__DOT__d_cache__DOT__ram_1_35;
        vlSelf->top__DOT__d_cache__DOT___GEN_1329 = vlSelf->top__DOT__d_cache__DOT__ram_1_36;
        vlSelf->top__DOT__d_cache__DOT___GEN_1330 = vlSelf->top__DOT__d_cache__DOT__ram_1_37;
        vlSelf->top__DOT__d_cache__DOT___GEN_1331 = vlSelf->top__DOT__d_cache__DOT__ram_1_38;
        vlSelf->top__DOT__d_cache__DOT___GEN_1332 = vlSelf->top__DOT__d_cache__DOT__ram_1_39;
        vlSelf->top__DOT__d_cache__DOT___GEN_1333 = vlSelf->top__DOT__d_cache__DOT__ram_1_40;
        vlSelf->top__DOT__d_cache__DOT___GEN_1334 = vlSelf->top__DOT__d_cache__DOT__ram_1_41;
        vlSelf->top__DOT__d_cache__DOT___GEN_1335 = vlSelf->top__DOT__d_cache__DOT__ram_1_42;
        vlSelf->top__DOT__d_cache__DOT___GEN_1336 = vlSelf->top__DOT__d_cache__DOT__ram_1_43;
        vlSelf->top__DOT__d_cache__DOT___GEN_1337 = vlSelf->top__DOT__d_cache__DOT__ram_1_44;
        vlSelf->top__DOT__d_cache__DOT___GEN_1338 = vlSelf->top__DOT__d_cache__DOT__ram_1_45;
        vlSelf->top__DOT__d_cache__DOT___GEN_1339 = vlSelf->top__DOT__d_cache__DOT__ram_1_46;
        vlSelf->top__DOT__d_cache__DOT___GEN_1340 = vlSelf->top__DOT__d_cache__DOT__ram_1_47;
        vlSelf->top__DOT__d_cache__DOT___GEN_1341 = vlSelf->top__DOT__d_cache__DOT__ram_1_48;
        vlSelf->top__DOT__d_cache__DOT___GEN_1342 = vlSelf->top__DOT__d_cache__DOT__ram_1_49;
        vlSelf->top__DOT__d_cache__DOT___GEN_1343 = vlSelf->top__DOT__d_cache__DOT__ram_1_50;
        vlSelf->top__DOT__d_cache__DOT___GEN_1344 = vlSelf->top__DOT__d_cache__DOT__ram_1_51;
        vlSelf->top__DOT__d_cache__DOT___GEN_1345 = vlSelf->top__DOT__d_cache__DOT__ram_1_52;
        vlSelf->top__DOT__d_cache__DOT___GEN_1346 = vlSelf->top__DOT__d_cache__DOT__ram_1_53;
        vlSelf->top__DOT__d_cache__DOT___GEN_1347 = vlSelf->top__DOT__d_cache__DOT__ram_1_54;
        vlSelf->top__DOT__d_cache__DOT___GEN_1348 = vlSelf->top__DOT__d_cache__DOT__ram_1_55;
        vlSelf->top__DOT__d_cache__DOT___GEN_1349 = vlSelf->top__DOT__d_cache__DOT__ram_1_56;
        vlSelf->top__DOT__d_cache__DOT___GEN_1350 = vlSelf->top__DOT__d_cache__DOT__ram_1_57;
        vlSelf->top__DOT__d_cache__DOT___GEN_1351 = vlSelf->top__DOT__d_cache__DOT__ram_1_58;
        vlSelf->top__DOT__d_cache__DOT___GEN_1352 = vlSelf->top__DOT__d_cache__DOT__ram_1_59;
        vlSelf->top__DOT__d_cache__DOT___GEN_1353 = vlSelf->top__DOT__d_cache__DOT__ram_1_60;
        vlSelf->top__DOT__d_cache__DOT___GEN_1354 = vlSelf->top__DOT__d_cache__DOT__ram_1_61;
        vlSelf->top__DOT__d_cache__DOT___GEN_1355 = vlSelf->top__DOT__d_cache__DOT__ram_1_62;
        vlSelf->top__DOT__d_cache__DOT___GEN_1356 = vlSelf->top__DOT__d_cache__DOT__ram_1_63;
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_1100 = vlSelf->top__DOT__d_cache__DOT__ram_0_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_1101 = vlSelf->top__DOT__d_cache__DOT__ram_0_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_1102 = vlSelf->top__DOT__d_cache__DOT__ram_0_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_1103 = vlSelf->top__DOT__d_cache__DOT__ram_0_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_1104 = vlSelf->top__DOT__d_cache__DOT__ram_0_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_1105 = vlSelf->top__DOT__d_cache__DOT__ram_0_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_1106 = vlSelf->top__DOT__d_cache__DOT__ram_0_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_1107 = vlSelf->top__DOT__d_cache__DOT__ram_0_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_1108 = vlSelf->top__DOT__d_cache__DOT__ram_0_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_1109 = vlSelf->top__DOT__d_cache__DOT__ram_0_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_1110 = vlSelf->top__DOT__d_cache__DOT__ram_0_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_1111 = vlSelf->top__DOT__d_cache__DOT__ram_0_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_1112 = vlSelf->top__DOT__d_cache__DOT__ram_0_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_1113 = vlSelf->top__DOT__d_cache__DOT__ram_0_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_1114 = vlSelf->top__DOT__d_cache__DOT__ram_0_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_1115 = vlSelf->top__DOT__d_cache__DOT__ram_0_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_1116 = vlSelf->top__DOT__d_cache__DOT__ram_0_16;
        vlSelf->top__DOT__d_cache__DOT___GEN_1117 = vlSelf->top__DOT__d_cache__DOT__ram_0_17;
        vlSelf->top__DOT__d_cache__DOT___GEN_1118 = vlSelf->top__DOT__d_cache__DOT__ram_0_18;
        vlSelf->top__DOT__d_cache__DOT___GEN_1119 = vlSelf->top__DOT__d_cache__DOT__ram_0_19;
        vlSelf->top__DOT__d_cache__DOT___GEN_1120 = vlSelf->top__DOT__d_cache__DOT__ram_0_20;
        vlSelf->top__DOT__d_cache__DOT___GEN_1121 = vlSelf->top__DOT__d_cache__DOT__ram_0_21;
        vlSelf->top__DOT__d_cache__DOT___GEN_1122 = vlSelf->top__DOT__d_cache__DOT__ram_0_22;
        vlSelf->top__DOT__d_cache__DOT___GEN_1123 = vlSelf->top__DOT__d_cache__DOT__ram_0_23;
        vlSelf->top__DOT__d_cache__DOT___GEN_1124 = vlSelf->top__DOT__d_cache__DOT__ram_0_24;
        vlSelf->top__DOT__d_cache__DOT___GEN_1125 = vlSelf->top__DOT__d_cache__DOT__ram_0_25;
        vlSelf->top__DOT__d_cache__DOT___GEN_1126 = vlSelf->top__DOT__d_cache__DOT__ram_0_26;
        vlSelf->top__DOT__d_cache__DOT___GEN_1127 = vlSelf->top__DOT__d_cache__DOT__ram_0_27;
        vlSelf->top__DOT__d_cache__DOT___GEN_1128 = vlSelf->top__DOT__d_cache__DOT__ram_0_28;
        vlSelf->top__DOT__d_cache__DOT___GEN_1129 = vlSelf->top__DOT__d_cache__DOT__ram_0_29;
        vlSelf->top__DOT__d_cache__DOT___GEN_1130 = vlSelf->top__DOT__d_cache__DOT__ram_0_30;
        vlSelf->top__DOT__d_cache__DOT___GEN_1131 = vlSelf->top__DOT__d_cache__DOT__ram_0_31;
        vlSelf->top__DOT__d_cache__DOT___GEN_1132 = vlSelf->top__DOT__d_cache__DOT__ram_0_32;
        vlSelf->top__DOT__d_cache__DOT___GEN_1133 = vlSelf->top__DOT__d_cache__DOT__ram_0_33;
        vlSelf->top__DOT__d_cache__DOT___GEN_1134 = vlSelf->top__DOT__d_cache__DOT__ram_0_34;
        vlSelf->top__DOT__d_cache__DOT___GEN_1135 = vlSelf->top__DOT__d_cache__DOT__ram_0_35;
        vlSelf->top__DOT__d_cache__DOT___GEN_1136 = vlSelf->top__DOT__d_cache__DOT__ram_0_36;
        vlSelf->top__DOT__d_cache__DOT___GEN_1137 = vlSelf->top__DOT__d_cache__DOT__ram_0_37;
        vlSelf->top__DOT__d_cache__DOT___GEN_1138 = vlSelf->top__DOT__d_cache__DOT__ram_0_38;
        vlSelf->top__DOT__d_cache__DOT___GEN_1139 = vlSelf->top__DOT__d_cache__DOT__ram_0_39;
        vlSelf->top__DOT__d_cache__DOT___GEN_1140 = vlSelf->top__DOT__d_cache__DOT__ram_0_40;
        vlSelf->top__DOT__d_cache__DOT___GEN_1141 = vlSelf->top__DOT__d_cache__DOT__ram_0_41;
        vlSelf->top__DOT__d_cache__DOT___GEN_1142 = vlSelf->top__DOT__d_cache__DOT__ram_0_42;
        vlSelf->top__DOT__d_cache__DOT___GEN_1143 = vlSelf->top__DOT__d_cache__DOT__ram_0_43;
        vlSelf->top__DOT__d_cache__DOT___GEN_1144 = vlSelf->top__DOT__d_cache__DOT__ram_0_44;
        vlSelf->top__DOT__d_cache__DOT___GEN_1145 = vlSelf->top__DOT__d_cache__DOT__ram_0_45;
        vlSelf->top__DOT__d_cache__DOT___GEN_1146 = vlSelf->top__DOT__d_cache__DOT__ram_0_46;
        vlSelf->top__DOT__d_cache__DOT___GEN_1147 = vlSelf->top__DOT__d_cache__DOT__ram_0_47;
        vlSelf->top__DOT__d_cache__DOT___GEN_1148 = vlSelf->top__DOT__d_cache__DOT__ram_0_48;
        vlSelf->top__DOT__d_cache__DOT___GEN_1149 = vlSelf->top__DOT__d_cache__DOT__ram_0_49;
        vlSelf->top__DOT__d_cache__DOT___GEN_1150 = vlSelf->top__DOT__d_cache__DOT__ram_0_50;
        vlSelf->top__DOT__d_cache__DOT___GEN_1151 = vlSelf->top__DOT__d_cache__DOT__ram_0_51;
        vlSelf->top__DOT__d_cache__DOT___GEN_1152 = vlSelf->top__DOT__d_cache__DOT__ram_0_52;
        vlSelf->top__DOT__d_cache__DOT___GEN_1153 = vlSelf->top__DOT__d_cache__DOT__ram_0_53;
        vlSelf->top__DOT__d_cache__DOT___GEN_1154 = vlSelf->top__DOT__d_cache__DOT__ram_0_54;
        vlSelf->top__DOT__d_cache__DOT___GEN_1155 = vlSelf->top__DOT__d_cache__DOT__ram_0_55;
        vlSelf->top__DOT__d_cache__DOT___GEN_1156 = vlSelf->top__DOT__d_cache__DOT__ram_0_56;
        vlSelf->top__DOT__d_cache__DOT___GEN_1157 = vlSelf->top__DOT__d_cache__DOT__ram_0_57;
        vlSelf->top__DOT__d_cache__DOT___GEN_1158 = vlSelf->top__DOT__d_cache__DOT__ram_0_58;
        vlSelf->top__DOT__d_cache__DOT___GEN_1159 = vlSelf->top__DOT__d_cache__DOT__ram_0_59;
        vlSelf->top__DOT__d_cache__DOT___GEN_1160 = vlSelf->top__DOT__d_cache__DOT__ram_0_60;
        vlSelf->top__DOT__d_cache__DOT___GEN_1161 = vlSelf->top__DOT__d_cache__DOT__ram_0_61;
        vlSelf->top__DOT__d_cache__DOT___GEN_1162 = vlSelf->top__DOT__d_cache__DOT__ram_0_62;
        vlSelf->top__DOT__d_cache__DOT___GEN_1163 = vlSelf->top__DOT__d_cache__DOT__ram_0_63;
        vlSelf->top__DOT__d_cache__DOT___GEN_1293 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_0)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_0);
        vlSelf->top__DOT__d_cache__DOT___GEN_1294 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((1U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_1)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_1);
        vlSelf->top__DOT__d_cache__DOT___GEN_1295 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((2U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_2)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_2);
        vlSelf->top__DOT__d_cache__DOT___GEN_1296 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((3U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_3)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_3);
        vlSelf->top__DOT__d_cache__DOT___GEN_1297 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((4U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_4)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_4);
        vlSelf->top__DOT__d_cache__DOT___GEN_1298 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((5U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_5)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_5);
        vlSelf->top__DOT__d_cache__DOT___GEN_1299 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((6U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_6)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_6);
        vlSelf->top__DOT__d_cache__DOT___GEN_1300 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((7U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_7)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_7);
        vlSelf->top__DOT__d_cache__DOT___GEN_1301 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((8U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_8)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_8);
        vlSelf->top__DOT__d_cache__DOT___GEN_1302 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((9U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_9)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_9);
        vlSelf->top__DOT__d_cache__DOT___GEN_1303 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xaU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                            >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_10)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_10);
        vlSelf->top__DOT__d_cache__DOT___GEN_1304 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xbU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                            >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_11)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_11);
        vlSelf->top__DOT__d_cache__DOT___GEN_1305 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xcU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                            >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_12)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_12);
        vlSelf->top__DOT__d_cache__DOT___GEN_1306 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xdU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                            >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_13)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_13);
        vlSelf->top__DOT__d_cache__DOT___GEN_1307 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xeU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                            >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_14)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_14);
        vlSelf->top__DOT__d_cache__DOT___GEN_1308 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xfU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                            >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_15)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_15);
        vlSelf->top__DOT__d_cache__DOT___GEN_1309 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x10U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_16)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_16);
        vlSelf->top__DOT__d_cache__DOT___GEN_1310 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x11U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_17)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_17);
        vlSelf->top__DOT__d_cache__DOT___GEN_1311 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x12U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_18)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_18);
        vlSelf->top__DOT__d_cache__DOT___GEN_1312 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x13U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_19)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_19);
        vlSelf->top__DOT__d_cache__DOT___GEN_1313 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x14U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_20)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_20);
        vlSelf->top__DOT__d_cache__DOT___GEN_1314 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x15U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_21)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_21);
        vlSelf->top__DOT__d_cache__DOT___GEN_1315 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x16U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_22)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_22);
        vlSelf->top__DOT__d_cache__DOT___GEN_1316 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x17U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_23)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_23);
        vlSelf->top__DOT__d_cache__DOT___GEN_1317 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x18U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_24)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_24);
        vlSelf->top__DOT__d_cache__DOT___GEN_1318 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x19U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_25)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_25);
        vlSelf->top__DOT__d_cache__DOT___GEN_1319 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1aU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_26)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_26);
        vlSelf->top__DOT__d_cache__DOT___GEN_1320 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1bU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_27)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_27);
        vlSelf->top__DOT__d_cache__DOT___GEN_1321 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_28)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_28);
        vlSelf->top__DOT__d_cache__DOT___GEN_1322 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_29)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_29);
        vlSelf->top__DOT__d_cache__DOT___GEN_1323 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_30)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_30);
        vlSelf->top__DOT__d_cache__DOT___GEN_1324 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1fU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_31)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_31);
        vlSelf->top__DOT__d_cache__DOT___GEN_1325 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x20U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_32)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_32);
        vlSelf->top__DOT__d_cache__DOT___GEN_1326 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x21U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_33)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_33);
        vlSelf->top__DOT__d_cache__DOT___GEN_1327 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x22U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_34)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_34);
        vlSelf->top__DOT__d_cache__DOT___GEN_1328 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x23U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_35)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_35);
        vlSelf->top__DOT__d_cache__DOT___GEN_1329 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x24U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_36)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_36);
        vlSelf->top__DOT__d_cache__DOT___GEN_1330 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x25U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_37)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_37);
        vlSelf->top__DOT__d_cache__DOT___GEN_1331 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x26U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_38)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_38);
        vlSelf->top__DOT__d_cache__DOT___GEN_1332 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x27U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_39)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_39);
        vlSelf->top__DOT__d_cache__DOT___GEN_1333 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x28U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_40)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_40);
        vlSelf->top__DOT__d_cache__DOT___GEN_1334 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x29U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_41)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_41);
        vlSelf->top__DOT__d_cache__DOT___GEN_1335 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2aU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_42)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_42);
        vlSelf->top__DOT__d_cache__DOT___GEN_1336 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2bU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_43)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_43);
        vlSelf->top__DOT__d_cache__DOT___GEN_1337 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_44)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_44);
        vlSelf->top__DOT__d_cache__DOT___GEN_1338 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_45)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_45);
        vlSelf->top__DOT__d_cache__DOT___GEN_1339 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_46)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_46);
        vlSelf->top__DOT__d_cache__DOT___GEN_1340 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2fU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_47)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_47);
        vlSelf->top__DOT__d_cache__DOT___GEN_1341 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x30U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_48)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_48);
        vlSelf->top__DOT__d_cache__DOT___GEN_1342 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x31U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_49)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_49);
        vlSelf->top__DOT__d_cache__DOT___GEN_1343 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x32U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_50)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_50);
        vlSelf->top__DOT__d_cache__DOT___GEN_1344 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x33U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_51)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_51);
        vlSelf->top__DOT__d_cache__DOT___GEN_1345 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x34U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_52)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_52);
        vlSelf->top__DOT__d_cache__DOT___GEN_1346 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x35U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_53)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_53);
        vlSelf->top__DOT__d_cache__DOT___GEN_1347 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x36U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_54)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_54);
        vlSelf->top__DOT__d_cache__DOT___GEN_1348 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x37U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_55)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_55);
        vlSelf->top__DOT__d_cache__DOT___GEN_1349 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x38U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_56)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_56);
        vlSelf->top__DOT__d_cache__DOT___GEN_1350 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x39U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_57)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_57);
        vlSelf->top__DOT__d_cache__DOT___GEN_1351 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3aU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_58)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_58);
        vlSelf->top__DOT__d_cache__DOT___GEN_1352 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3bU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_59)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_59);
        vlSelf->top__DOT__d_cache__DOT___GEN_1353 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_60)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_60);
        vlSelf->top__DOT__d_cache__DOT___GEN_1354 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_61)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_61);
        vlSelf->top__DOT__d_cache__DOT___GEN_1355 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_62)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_62);
        vlSelf->top__DOT__d_cache__DOT___GEN_1356 = 
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
