// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

void Vtop___024unit____Vdpiimwrap_ebreak_handle_TOP____024unit(IData/*31:0*/ flag);
void Vtop___024unit____Vdpiimwrap_ecall_handle_TOP____024unit(IData/*31:0*/ flag);
void Vtop___024unit____Vdpiimwrap_get_pc_TOP____024unit(QData/*63:0*/ pc);

void Vtop___024root___settle__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__5\n"); );
    // Variables
    CData/*0:0*/ top__DOT__IFU__DOT___T_1;
    CData/*6:0*/ top__DOT__IDU__DOT___inst_type_T_185;
    CData/*0:0*/ top__DOT__IDU__DOT___conflict_es_rs1_T_4;
    CData/*0:0*/ top__DOT__IDU__DOT___conflict_es_rs2_T_6;
    CData/*0:0*/ top__DOT__IDU__DOT___ds_ready_go_T_33;
    CData/*3:0*/ top__DOT__d_cache__DOT___GEN_274;
    VlWide<4>/*126:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_112;
    VlWide<4>/*127:0*/ __Vtemp3718;
    VlWide<4>/*127:0*/ __Vtemp3873;
    VlWide<4>/*127:0*/ __Vtemp3874;
    VlWide<4>/*127:0*/ __Vtemp3875;
    VlWide<4>/*127:0*/ __Vtemp3877;
    VlWide<4>/*127:0*/ __Vtemp3878;
    VlWide<4>/*127:0*/ __Vtemp3879;
    VlWide<4>/*127:0*/ __Vtemp3880;
    VlWide<3>/*95:0*/ __Vtemp3882;
    VlWide<3>/*95:0*/ __Vtemp3883;
    VlWide<3>/*95:0*/ __Vtemp3884;
    VlWide<3>/*95:0*/ __Vtemp3885;
    VlWide<3>/*95:0*/ __Vtemp3886;
    VlWide<3>/*95:0*/ __Vtemp3888;
    VlWide<3>/*95:0*/ __Vtemp3889;
    VlWide<3>/*95:0*/ __Vtemp3891;
    VlWide<3>/*95:0*/ __Vtemp3892;
    VlWide<3>/*95:0*/ __Vtemp3893;
    VlWide<3>/*95:0*/ __Vtemp3894;
    VlWide<3>/*95:0*/ __Vtemp3907;
    VlWide<4>/*127:0*/ __Vtemp3908;
    VlWide<4>/*127:0*/ __Vtemp3916;
    VlWide<4>/*127:0*/ __Vtemp3917;
    VlWide<4>/*127:0*/ __Vtemp3921;
    VlWide<4>/*127:0*/ __Vtemp3924;
    VlWide<4>/*127:0*/ __Vtemp3925;
    VlWide<4>/*127:0*/ __Vtemp3926;
    QData/*63:0*/ top__DOT__IDU__DOT___rdata1_T_1;
    QData/*63:0*/ top__DOT__IDU__DOT___br_taken_T;
    QData/*63:0*/ top__DOT__IDU__DOT___br_taken_T_1;
    QData/*63:0*/ top__DOT__IDU__DOT___br_target_T_1;
    QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_92;
    // Body
    if ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_1654[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_2[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1654[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_2[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1654[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_2[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1654[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_2[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1655[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_3[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1655[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_3[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1655[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_3[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1655[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_3[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1656[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_4[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1656[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_4[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1656[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_4[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1656[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_4[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1657[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_5[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1657[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_5[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1657[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_5[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1657[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_5[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1658[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_6[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1658[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_6[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1658[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_6[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1658[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_6[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1659[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_7[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1659[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_7[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1659[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_7[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1659[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_7[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1660[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_8[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1660[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_8[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1660[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_8[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1660[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_8[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1661[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_9[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1661[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_9[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1661[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_9[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1661[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_9[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1662[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_10[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1662[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_10[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1662[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_10[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1662[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_10[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1663[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_11[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1663[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_11[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1663[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_11[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1663[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_11[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1664[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_12[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1664[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_12[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1664[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_12[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1664[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_12[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1665[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_13[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1665[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_13[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1665[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_13[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1665[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_13[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1666[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_14[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1666[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_14[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1666[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_14[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1666[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_14[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1667[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_15[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1667[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_15[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1667[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_15[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1667[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_15[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1668 = vlSelf->top__DOT__d_cache__DOT__tag_0_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_1669 = vlSelf->top__DOT__d_cache__DOT__tag_0_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_1670 = vlSelf->top__DOT__d_cache__DOT__tag_0_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_1671 = vlSelf->top__DOT__d_cache__DOT__tag_0_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_1672 = vlSelf->top__DOT__d_cache__DOT__tag_0_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_1673 = vlSelf->top__DOT__d_cache__DOT__tag_0_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_1674 = vlSelf->top__DOT__d_cache__DOT__tag_0_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_1675 = vlSelf->top__DOT__d_cache__DOT__tag_0_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_1676 = vlSelf->top__DOT__d_cache__DOT__tag_0_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_1677 = vlSelf->top__DOT__d_cache__DOT__tag_0_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_1678 = vlSelf->top__DOT__d_cache__DOT__tag_0_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_1679 = vlSelf->top__DOT__d_cache__DOT__tag_0_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_1680 = vlSelf->top__DOT__d_cache__DOT__tag_0_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_1681 = vlSelf->top__DOT__d_cache__DOT__tag_0_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_1682 = vlSelf->top__DOT__d_cache__DOT__tag_0_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_1683 = vlSelf->top__DOT__d_cache__DOT__tag_0_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_1684 = vlSelf->top__DOT__d_cache__DOT__valid_0_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_1685 = vlSelf->top__DOT__d_cache__DOT__valid_0_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_1686 = vlSelf->top__DOT__d_cache__DOT__valid_0_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_1687 = vlSelf->top__DOT__d_cache__DOT__valid_0_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_1688 = vlSelf->top__DOT__d_cache__DOT__valid_0_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_1689 = vlSelf->top__DOT__d_cache__DOT__valid_0_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_1690 = vlSelf->top__DOT__d_cache__DOT__valid_0_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_1691 = vlSelf->top__DOT__d_cache__DOT__valid_0_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_1692 = vlSelf->top__DOT__d_cache__DOT__valid_0_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_1693 = vlSelf->top__DOT__d_cache__DOT__valid_0_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_1694 = vlSelf->top__DOT__d_cache__DOT__valid_0_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_1695 = vlSelf->top__DOT__d_cache__DOT__valid_0_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_1696 = vlSelf->top__DOT__d_cache__DOT__valid_0_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_1697 = vlSelf->top__DOT__d_cache__DOT__valid_0_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_1698 = vlSelf->top__DOT__d_cache__DOT__valid_0_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_1699 = vlSelf->top__DOT__d_cache__DOT__valid_0_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_1716[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_0[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1716[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_0[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1716[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_0[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1716[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_0[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1717[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_1[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1717[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_1[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1717[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_1[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1717[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_1[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1718[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_2[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1718[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_2[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1718[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_2[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1718[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_2[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1719[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_3[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1719[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_3[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1719[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_3[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1719[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_3[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1720[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_4[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1720[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_4[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1720[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_4[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1720[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_4[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1721[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_5[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1721[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_5[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1721[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_5[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1721[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_5[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1722[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_6[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1722[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_6[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1722[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_6[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1722[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_6[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1723[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_7[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1723[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_7[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1723[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_7[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1723[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_7[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1724[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_8[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1724[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_8[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1724[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_8[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1724[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_8[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1725[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_9[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1725[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_9[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1725[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_9[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1725[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_9[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1726[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_10[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1726[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_10[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1726[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_10[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1726[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_10[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1727[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_11[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1727[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_11[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1727[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_11[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1727[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_11[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1728[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_12[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1728[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_12[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1728[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_12[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1728[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_12[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1729[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_13[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1729[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_13[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1729[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_13[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1729[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_13[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1730[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_14[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1730[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_14[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1730[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_14[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1730[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_14[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1731[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_15[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1731[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_15[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1731[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_15[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1731[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_15[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1732 = vlSelf->top__DOT__d_cache__DOT__tag_1_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_1733 = vlSelf->top__DOT__d_cache__DOT__tag_1_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_1734 = vlSelf->top__DOT__d_cache__DOT__tag_1_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_1735 = vlSelf->top__DOT__d_cache__DOT__tag_1_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_1736 = vlSelf->top__DOT__d_cache__DOT__tag_1_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_1737 = vlSelf->top__DOT__d_cache__DOT__tag_1_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_1738 = vlSelf->top__DOT__d_cache__DOT__tag_1_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_1739 = vlSelf->top__DOT__d_cache__DOT__tag_1_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_1740 = vlSelf->top__DOT__d_cache__DOT__tag_1_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_1741 = vlSelf->top__DOT__d_cache__DOT__tag_1_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_1742 = vlSelf->top__DOT__d_cache__DOT__tag_1_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_1743 = vlSelf->top__DOT__d_cache__DOT__tag_1_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_1744 = vlSelf->top__DOT__d_cache__DOT__tag_1_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_1745 = vlSelf->top__DOT__d_cache__DOT__tag_1_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_1746 = vlSelf->top__DOT__d_cache__DOT__tag_1_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_1747 = vlSelf->top__DOT__d_cache__DOT__tag_1_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_1748 = vlSelf->top__DOT__d_cache__DOT__valid_1_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_1749 = vlSelf->top__DOT__d_cache__DOT__valid_1_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_1750 = vlSelf->top__DOT__d_cache__DOT__valid_1_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_1751 = vlSelf->top__DOT__d_cache__DOT__valid_1_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_1752 = vlSelf->top__DOT__d_cache__DOT__valid_1_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_1753 = vlSelf->top__DOT__d_cache__DOT__valid_1_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_1754 = vlSelf->top__DOT__d_cache__DOT__valid_1_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_1755 = vlSelf->top__DOT__d_cache__DOT__valid_1_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_1756 = vlSelf->top__DOT__d_cache__DOT__valid_1_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_1757 = vlSelf->top__DOT__d_cache__DOT__valid_1_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_1758 = vlSelf->top__DOT__d_cache__DOT__valid_1_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_1759 = vlSelf->top__DOT__d_cache__DOT__valid_1_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_1760 = vlSelf->top__DOT__d_cache__DOT__valid_1_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_1761 = vlSelf->top__DOT__d_cache__DOT__valid_1_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_1762 = vlSelf->top__DOT__d_cache__DOT__valid_1_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_1763 = vlSelf->top__DOT__d_cache__DOT__valid_1_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_1700 = vlSelf->top__DOT__d_cache__DOT__quene_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_1701 = vlSelf->top__DOT__d_cache__DOT__quene_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_1702 = vlSelf->top__DOT__d_cache__DOT__quene_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_1703 = vlSelf->top__DOT__d_cache__DOT__quene_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_1704 = vlSelf->top__DOT__d_cache__DOT__quene_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_1705 = vlSelf->top__DOT__d_cache__DOT__quene_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_1706 = vlSelf->top__DOT__d_cache__DOT__quene_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_1707 = vlSelf->top__DOT__d_cache__DOT__quene_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_1708 = vlSelf->top__DOT__d_cache__DOT__quene_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_1709 = vlSelf->top__DOT__d_cache__DOT__quene_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_1710 = vlSelf->top__DOT__d_cache__DOT__quene_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_1711 = vlSelf->top__DOT__d_cache__DOT__quene_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_1712 = vlSelf->top__DOT__d_cache__DOT__quene_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_1713 = vlSelf->top__DOT__d_cache__DOT__quene_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_1714 = vlSelf->top__DOT__d_cache__DOT__quene_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_1715 = vlSelf->top__DOT__d_cache__DOT__quene_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_1766 = vlSelf->top__DOT__d_cache__DOT__dirty_0_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_1767 = vlSelf->top__DOT__d_cache__DOT__dirty_0_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_1768 = vlSelf->top__DOT__d_cache__DOT__dirty_0_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_1769 = vlSelf->top__DOT__d_cache__DOT__dirty_0_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_1770 = vlSelf->top__DOT__d_cache__DOT__dirty_0_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_1771 = vlSelf->top__DOT__d_cache__DOT__dirty_0_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_1772 = vlSelf->top__DOT__d_cache__DOT__dirty_0_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_1773 = vlSelf->top__DOT__d_cache__DOT__dirty_0_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_1774 = vlSelf->top__DOT__d_cache__DOT__dirty_0_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_1775 = vlSelf->top__DOT__d_cache__DOT__dirty_0_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_1776 = vlSelf->top__DOT__d_cache__DOT__dirty_0_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_1777 = vlSelf->top__DOT__d_cache__DOT__dirty_0_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_1778 = vlSelf->top__DOT__d_cache__DOT__dirty_0_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_1779 = vlSelf->top__DOT__d_cache__DOT__dirty_0_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_1780 = vlSelf->top__DOT__d_cache__DOT__dirty_0_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_1781 = vlSelf->top__DOT__d_cache__DOT__dirty_0_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_1782 = vlSelf->top__DOT__d_cache__DOT__dirty_1_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_1783 = vlSelf->top__DOT__d_cache__DOT__dirty_1_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_1784 = vlSelf->top__DOT__d_cache__DOT__dirty_1_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_1785 = vlSelf->top__DOT__d_cache__DOT__dirty_1_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_1786 = vlSelf->top__DOT__d_cache__DOT__dirty_1_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_1787 = vlSelf->top__DOT__d_cache__DOT__dirty_1_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_1788 = vlSelf->top__DOT__d_cache__DOT__dirty_1_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_1789 = vlSelf->top__DOT__d_cache__DOT__dirty_1_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_1790 = vlSelf->top__DOT__d_cache__DOT__dirty_1_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_1791 = vlSelf->top__DOT__d_cache__DOT__dirty_1_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_1792 = vlSelf->top__DOT__d_cache__DOT__dirty_1_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_1793 = vlSelf->top__DOT__d_cache__DOT__dirty_1_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_1794 = vlSelf->top__DOT__d_cache__DOT__dirty_1_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_1795 = vlSelf->top__DOT__d_cache__DOT__dirty_1_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_1796 = vlSelf->top__DOT__d_cache__DOT__dirty_1_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_1797 = vlSelf->top__DOT__d_cache__DOT__dirty_1_15;
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_1654[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_277[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_277[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_2[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1654[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_277[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_277[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_2[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1654[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_277[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_277[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_2[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1654[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_277[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_277[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_2[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1655[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_278[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_278[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_3[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1655[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_278[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_278[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_3[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1655[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_278[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_278[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_3[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1655[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_278[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_278[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_3[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1656[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_279[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_279[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_4[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1656[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_279[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_279[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_4[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1656[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_279[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_279[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_4[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1656[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_279[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_279[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_4[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1657[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_280[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_280[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_5[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1657[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_280[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_280[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_5[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1657[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_280[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_280[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_5[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1657[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_280[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_280[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_5[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1658[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_281[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_281[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_6[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1658[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_281[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_281[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_6[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1658[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_281[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_281[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_6[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1658[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_281[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_281[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_6[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1659[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_282[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_282[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_7[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1659[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_282[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_282[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_7[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1659[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_282[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_282[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_7[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1659[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_282[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_282[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_7[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1660[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_283[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_283[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_8[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1660[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_283[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_283[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_8[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1660[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_283[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_283[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_8[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1660[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_283[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_283[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_8[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1661[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_284[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_284[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_9[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1661[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_284[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_284[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_9[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1661[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_284[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_284[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_9[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1661[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_284[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_284[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_9[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1662[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_285[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_285[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_10[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1662[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_285[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_285[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_10[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1662[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_285[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_285[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_10[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1662[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_285[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_285[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_10[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1663[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_286[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_286[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_11[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1663[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_286[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_286[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_11[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1663[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_286[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_286[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_11[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1663[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_286[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_286[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_11[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1664[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_287[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_287[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_12[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1664[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_287[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_287[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_12[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1664[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_287[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_287[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_12[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1664[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_287[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_287[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_12[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1665[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_288[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_288[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_13[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1665[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_288[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_288[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_13[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1665[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_288[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_288[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_13[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1665[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_288[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_288[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_13[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1666[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_289[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_289[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_14[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1666[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_289[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_289[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_14[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1666[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_289[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_289[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_14[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1666[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_289[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_289[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_14[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1667[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_290[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_290[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_15[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1667[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_290[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_290[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_15[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1667[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_290[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_290[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_15[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1667[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_290[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_290[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_15[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1668 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_0
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_291
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_0
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_0
                              : vlSelf->top__DOT__d_cache__DOT___GEN_291)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_0));
        vlSelf->top__DOT__d_cache__DOT___GEN_1669 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_1
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_292
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_1
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_1
                              : vlSelf->top__DOT__d_cache__DOT___GEN_292)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_1));
        vlSelf->top__DOT__d_cache__DOT___GEN_1670 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_2
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_293
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_2
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_2
                              : vlSelf->top__DOT__d_cache__DOT___GEN_293)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_2));
        vlSelf->top__DOT__d_cache__DOT___GEN_1671 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_3
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_294
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_3
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_3
                              : vlSelf->top__DOT__d_cache__DOT___GEN_294)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_3));
        vlSelf->top__DOT__d_cache__DOT___GEN_1672 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_4
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_295
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_4
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_4
                              : vlSelf->top__DOT__d_cache__DOT___GEN_295)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_4));
        vlSelf->top__DOT__d_cache__DOT___GEN_1673 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_5
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_296
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_5
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_5
                              : vlSelf->top__DOT__d_cache__DOT___GEN_296)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_5));
        vlSelf->top__DOT__d_cache__DOT___GEN_1674 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_6
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_297
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_6
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_6
                              : vlSelf->top__DOT__d_cache__DOT___GEN_297)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_6));
        vlSelf->top__DOT__d_cache__DOT___GEN_1675 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_7
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_298
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_7
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_7
                              : vlSelf->top__DOT__d_cache__DOT___GEN_298)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_7));
        vlSelf->top__DOT__d_cache__DOT___GEN_1676 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_8
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_299
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_8
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_8
                              : vlSelf->top__DOT__d_cache__DOT___GEN_299)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_8));
        vlSelf->top__DOT__d_cache__DOT___GEN_1677 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_9
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_300
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_9
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_9
                              : vlSelf->top__DOT__d_cache__DOT___GEN_300)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_9));
        vlSelf->top__DOT__d_cache__DOT___GEN_1678 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_10
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_301
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_10
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_10
                              : vlSelf->top__DOT__d_cache__DOT___GEN_301)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_10));
        vlSelf->top__DOT__d_cache__DOT___GEN_1679 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_11
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_302
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_11
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_11
                              : vlSelf->top__DOT__d_cache__DOT___GEN_302)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_11));
        vlSelf->top__DOT__d_cache__DOT___GEN_1680 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_12
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_303
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_12
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_12
                              : vlSelf->top__DOT__d_cache__DOT___GEN_303)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_12));
        vlSelf->top__DOT__d_cache__DOT___GEN_1681 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_13
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_304
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_13
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_13
                              : vlSelf->top__DOT__d_cache__DOT___GEN_304)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_13));
        vlSelf->top__DOT__d_cache__DOT___GEN_1682 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_14
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_305
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_14
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_14
                              : vlSelf->top__DOT__d_cache__DOT___GEN_305)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_14));
        vlSelf->top__DOT__d_cache__DOT___GEN_1683 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_15
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_306
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_15
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_15
                              : vlSelf->top__DOT__d_cache__DOT___GEN_306)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_15));
        vlSelf->top__DOT__d_cache__DOT___GEN_1684 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_0)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_307)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_0)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_0)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_307))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_0)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1685 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_1)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_308)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_1)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_1)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_308))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_1)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1686 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_2)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_309)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_2)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_2)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_309))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_2)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1687 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_3)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_310)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_3)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_3)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_310))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_3)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1688 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_4)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_311)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_4)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_4)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_311))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_4)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1689 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_5)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_312)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_5)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_5)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_312))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_5)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1690 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_6)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_313)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_6)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_6)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_313))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_6)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1691 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_7)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_314)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_7)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_7)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_314))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_7)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1692 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_8)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_315)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_8)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_8)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_315))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_8)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1693 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_9)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_316)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_9)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_9)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_316))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_9)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1694 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_10)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_317)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_10)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_10)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_317))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_10)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1695 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_11)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_318)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_11)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_11)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_318))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_11)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1696 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_12)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_319)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_12)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_12)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_319))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_12)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1697 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_13)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_320)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_13)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_13)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_320))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_13)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1698 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_14)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_321)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_14)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_14)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_321))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_14)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1699 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_15)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_322)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_15)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_15)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_322))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_15)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1716[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_355[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_355[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_0[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_0[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1716[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_355[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_355[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_0[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_0[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1716[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_355[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_355[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_0[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_0[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1716[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_355[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_355[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_0[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_0[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1717[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_356[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_356[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_1[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_1[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1717[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_356[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_356[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_1[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_1[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1717[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_356[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_356[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_1[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_1[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1717[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_356[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_356[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_1[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_1[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1718[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_357[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_357[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_2[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_2[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1718[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_357[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_357[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_2[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_2[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1718[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_357[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_357[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_2[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_2[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1718[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_357[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_357[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_2[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_2[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1719[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_358[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_358[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_3[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_3[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1719[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_358[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_358[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_3[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_3[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1719[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_358[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_358[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_3[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_3[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1719[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_358[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_358[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_3[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_3[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1720[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_359[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_359[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_4[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_4[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1720[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_359[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_359[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_4[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_4[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1720[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_359[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_359[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_4[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_4[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1720[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_359[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_359[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_4[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_4[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1721[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_360[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_360[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_5[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_5[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1721[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_360[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_360[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_5[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_5[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1721[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_360[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_360[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_5[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_5[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1721[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_360[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_360[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_5[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_5[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1722[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_361[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_361[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_6[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_6[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1722[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_361[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_361[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_6[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_6[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1722[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_361[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_361[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_6[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_6[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1722[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_361[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_361[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_6[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_6[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1723[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_362[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_362[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_7[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_7[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1723[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_362[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_362[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_7[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_7[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1723[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_362[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_362[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_7[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_7[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1723[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_362[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_362[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_7[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_7[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1724[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_363[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_363[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_8[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_8[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1724[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_363[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_363[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_8[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_8[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1724[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_363[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_363[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_8[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_8[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1724[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_363[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_363[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_8[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_8[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1725[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_364[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_364[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_9[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_9[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1725[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_364[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_364[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_9[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_9[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1725[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_364[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_364[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_9[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_9[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1725[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_364[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_364[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_9[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_9[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1726[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_365[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_365[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_10[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_10[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1726[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_365[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_365[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_10[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_10[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1726[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_365[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_365[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_10[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_10[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1726[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_365[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_365[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_10[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_10[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1727[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_366[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_366[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_11[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_11[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1727[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_366[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_366[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_11[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_11[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1727[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_366[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_366[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_11[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_11[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1727[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_366[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_366[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_11[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_11[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1728[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_367[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_367[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_12[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_12[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1728[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_367[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_367[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_12[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_12[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1728[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_367[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_367[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_12[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_12[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1728[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_367[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_367[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_12[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_12[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1729[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_368[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_368[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_13[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_13[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1729[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_368[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_368[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_13[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_13[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1729[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_368[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_368[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_13[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_13[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1729[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_368[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_368[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_13[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_13[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1730[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_369[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_369[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_14[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_14[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1730[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_369[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_369[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_14[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_14[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1730[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_369[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_369[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_14[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_14[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1730[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_369[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_369[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_14[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_14[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1731[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_370[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_370[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_15[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_15[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1731[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_370[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_370[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_15[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_15[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1731[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_370[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_370[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_15[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_15[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1731[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_370[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_370[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_15[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_15[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1732 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_0
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_0
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_371
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_371
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_0)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_0));
        vlSelf->top__DOT__d_cache__DOT___GEN_1733 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_1
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_1
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_372
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_372
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_1)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_1));
        vlSelf->top__DOT__d_cache__DOT___GEN_1734 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_2
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_2
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_373
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_373
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_2)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_2));
        vlSelf->top__DOT__d_cache__DOT___GEN_1735 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_3
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_3
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_374
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_374
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_3)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_3));
        vlSelf->top__DOT__d_cache__DOT___GEN_1736 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_4
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_4
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_375
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_375
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_4)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_4));
        vlSelf->top__DOT__d_cache__DOT___GEN_1737 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_5
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_5
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_376
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_376
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_5)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_5));
        vlSelf->top__DOT__d_cache__DOT___GEN_1738 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_6
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_6
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_377
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_377
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_6)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_6));
        vlSelf->top__DOT__d_cache__DOT___GEN_1739 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_7
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_7
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_378
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_378
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_7)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_7));
        vlSelf->top__DOT__d_cache__DOT___GEN_1740 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_8
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_8
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_379
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_379
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_8)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_8));
        vlSelf->top__DOT__d_cache__DOT___GEN_1741 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_9
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_9
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_380
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_380
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_9)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_9));
        vlSelf->top__DOT__d_cache__DOT___GEN_1742 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_10
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_10
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_381
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_381
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_10)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_10));
        vlSelf->top__DOT__d_cache__DOT___GEN_1743 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_11
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_11
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_382
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_382
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_11)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_11));
        vlSelf->top__DOT__d_cache__DOT___GEN_1744 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_12
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_12
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_383
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_383
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_12)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_12));
        vlSelf->top__DOT__d_cache__DOT___GEN_1745 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_13
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_13
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_384
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_384
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_13)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_13));
        vlSelf->top__DOT__d_cache__DOT___GEN_1746 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_14
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_14
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_385
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_385
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_14)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_14));
        vlSelf->top__DOT__d_cache__DOT___GEN_1747 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_15
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_15
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_386
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_386
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_15)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_15));
        vlSelf->top__DOT__d_cache__DOT___GEN_1748 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_0)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_0)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_387)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_387)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_0))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_0)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1749 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_1)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_1)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_388)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_388)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_1))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_1)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1750 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_2)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_2)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_389)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_389)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_2))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_2)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1751 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_3)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_3)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_3))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_3)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1752 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_4)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_4)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_391)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_391)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_4))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_4)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1753 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_5)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_5)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_392)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_392)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_5))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_5)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1754 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_6)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_6)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_393)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_393)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_6))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_6)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1755 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_7)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_7)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_394)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_394)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_7))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_7)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1756 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_8)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_8)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_395)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_395)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_8))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_8)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1757 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_9)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_9)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_396)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_396)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_9))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_9)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1758 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_10)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_10)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_397)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_397)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_10))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_10)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1759 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_11)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_11)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_398)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_398)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_11))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_11)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1760 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_12)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_12)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_399)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_399)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_12))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_12)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1761 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_13)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_13)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_400)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_400)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_13))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_13)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1762 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_14)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_14)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_401)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_401)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_14))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_14)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1763 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_15)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_15)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_402)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_402)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_15))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_15)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1700 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_0)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_339)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_403)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_403)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_339))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_0)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1701 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_1)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_340)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_404)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_404)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_340))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_1)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1702 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_2)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_341)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_405)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_405)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_341))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_2)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1703 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_3)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_342)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_406)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_406)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_342))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_3)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1704 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_4)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_343)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_407)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_407)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_343))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_4)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1705 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_5)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_344)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_408)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_408)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_344))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_5)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1706 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_6)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_345)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_409)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_409)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_345))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_6)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1707 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_7)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_346)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_410)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_410)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_346))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_7)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1708 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_8)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_347)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_411)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_411)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_347))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_8)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1709 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_9)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_348)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_412)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_412)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_348))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_9)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1710 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_10)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_349)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_413)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_413)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_349))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_10)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1711 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_11)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_350)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_414)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_414)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_350))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_11)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1712 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_12)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_351)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_415)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_415)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_351))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_12)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1713 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_13)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_352)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_416)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_416)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_352))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_13)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1714 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_14)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_353)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_417)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_417)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_353))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_14)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1715 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_15)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_354)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_418)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_418)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_354))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_15)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1766 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((0U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1767 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((1U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1768 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((2U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1769 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((3U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1770 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((4U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1771 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((5U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1772 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((6U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1773 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((7U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1774 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((8U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1775 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((9U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1776 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((0xaU != (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1777 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((0xbU != (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1778 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((0xcU != (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1779 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((0xdU != (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1780 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((0xeU != (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1781 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((0xfU != (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1782 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_0)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_0)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_0)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((0U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_0))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_0))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_0))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_0)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1783 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_1)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_1)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_1)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((1U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_1))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_1))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_1))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_1)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1784 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_2)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_2)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_2)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((2U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_2))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_2))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_2))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_2)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1785 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_3)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_3)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_3)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((3U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_3))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_3))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_3))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_3)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1786 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_4)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_4)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_4)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((4U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_4))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_4))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_4))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_4)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1787 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_5)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_5)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_5)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((5U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_5))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_5))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_5))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_5)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1788 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_6)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_6)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_6)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((6U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_6))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_6))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_6))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_6)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1789 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_7)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_7)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_7)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((7U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_7))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_7))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_7))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_7)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1790 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_8)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_8)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_8)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((8U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_8))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_8))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_8))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_8)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1791 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_9)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_9)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_9)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((9U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_9))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_9))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_9))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_9)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1792 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_10)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_10)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_10)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((0xaU != (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_10))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_10))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_10))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_10)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1793 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_11)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_11)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_11)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((0xbU != (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_11))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_11))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_11))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_11)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1794 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_12)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_12)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_12)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((0xcU != (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_12))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_12))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_12))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_12)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1795 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_13)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_13)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_13)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((0xdU != (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_13))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_13))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_13))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_13)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1796 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_14)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_14)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_14)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((0xeU != (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_14))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_14))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_14))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_14)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1797 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_15)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_15)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_15)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((0xfU != (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_15))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_15))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_15))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_15)));
    }
    vlSelf->top__DOT__d_cache__DOT___GEN_2486 = ((IData)(vlSelf->reset)
                                                  ? 0ULL
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                     ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                      ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                       ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                        ? 
                                                       ((1U 
                                                         == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                         ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                                                         : 
                                                        ((2U 
                                                          == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                          ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                                           ? 
                                                          ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                                            ? 
                                                           (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_47)) 
                                                             << 8U) 
                                                            | (QData)((IData)(
                                                                              (0xf0U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                                >> 4U)) 
                                                                                << 4U)))))
                                                            : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr)))
                                                           : 
                                                          ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                                            ? 
                                                           (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_15)) 
                                                             << 8U) 
                                                            | (QData)((IData)(
                                                                              (0xf0U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                                >> 4U)) 
                                                                                << 4U)))))
                                                            : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))))))
                                                        : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr)))))))));
    VL_EXTEND_WQ(128,64, __Vtemp3718, (((QData)((IData)(
                                                        vlSelf->top__DOT__d_cache__DOT__write_back_data[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT__write_back_data[2U]))));
    if ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_1764[0U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1764[1U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1764[2U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1764[3U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[3U];
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_1764[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_136[0U]
                                    : vlSelf->top__DOT__d_cache__DOT__write_back_data[0U])
                                : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_88[0U]
                                    : vlSelf->top__DOT__d_cache__DOT__write_back_data[0U]))))
                    : ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                        ? (((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                             ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                 ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                 : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid) 
                                    & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))
                             : ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                    ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                    : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                       & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))))
                            ? __Vtemp3718[0U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_1764[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__write_back_data[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__write_back_data[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_136[1U]
                                    : vlSelf->top__DOT__d_cache__DOT__write_back_data[1U])
                                : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_88[1U]
                                    : vlSelf->top__DOT__d_cache__DOT__write_back_data[1U]))))
                    : ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                        ? (((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                             ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                 ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                 : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid) 
                                    & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))
                             : ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                    ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                    : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                       & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))))
                            ? __Vtemp3718[1U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[1U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[1U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_1764[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__write_back_data[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__write_back_data[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_136[2U]
                                    : vlSelf->top__DOT__d_cache__DOT__write_back_data[2U])
                                : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_88[2U]
                                    : vlSelf->top__DOT__d_cache__DOT__write_back_data[2U]))))
                    : ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                        ? (((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                             ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                 ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                 : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid) 
                                    & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))
                             : ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                    ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                    : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                       & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))))
                            ? __Vtemp3718[2U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[2U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[2U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_1764[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__write_back_data[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__write_back_data[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_136[3U]
                                    : vlSelf->top__DOT__d_cache__DOT__write_back_data[3U])
                                : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_88[3U]
                                    : vlSelf->top__DOT__d_cache__DOT__write_back_data[3U]))))
                    : ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                        ? (((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                             ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                 ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                 : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid) 
                                    & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))
                             : ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                    ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                    : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                       & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))))
                            ? __Vtemp3718[3U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[3U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[3U])));
    }
    if (vlSelf->top__DOT__d_cache__DOT__way0_hit) {
        vlSelf->top__DOT__d_cache__DOT___GEN_219 = 
            ((0U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0));
        vlSelf->top__DOT__d_cache__DOT___GEN_220 = 
            ((1U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1));
        vlSelf->top__DOT__d_cache__DOT___GEN_221 = 
            ((2U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2));
        vlSelf->top__DOT__d_cache__DOT___GEN_222 = 
            ((3U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3));
        vlSelf->top__DOT__d_cache__DOT___GEN_223 = 
            ((4U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4));
        vlSelf->top__DOT__d_cache__DOT___GEN_224 = 
            ((5U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5));
        vlSelf->top__DOT__d_cache__DOT___GEN_225 = 
            ((6U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6));
        vlSelf->top__DOT__d_cache__DOT___GEN_226 = 
            ((7U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7));
        vlSelf->top__DOT__d_cache__DOT___GEN_227 = 
            ((8U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8));
        vlSelf->top__DOT__d_cache__DOT___GEN_228 = 
            ((9U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9));
        vlSelf->top__DOT__d_cache__DOT___GEN_229 = 
            ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10));
        vlSelf->top__DOT__d_cache__DOT___GEN_230 = 
            ((0xbU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11));
        vlSelf->top__DOT__d_cache__DOT___GEN_231 = 
            ((0xcU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12));
        vlSelf->top__DOT__d_cache__DOT___GEN_232 = 
            ((0xdU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13));
        vlSelf->top__DOT__d_cache__DOT___GEN_233 = 
            ((0xeU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14));
        vlSelf->top__DOT__d_cache__DOT___GEN_234 = 
            ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15));
        vlSelf->top__DOT__d_cache__DOT___GEN_203[0U] 
            = ((0U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_0[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_203[1U] 
            = ((0U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_0[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_203[2U] 
            = ((0U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_0[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_203[3U] 
            = ((0U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_0[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_204[0U] 
            = ((1U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_1[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_204[1U] 
            = ((1U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_1[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_204[2U] 
            = ((1U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_1[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_204[3U] 
            = ((1U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_1[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_205[0U] 
            = ((2U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_2[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_205[1U] 
            = ((2U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_2[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_205[2U] 
            = ((2U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_2[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_205[3U] 
            = ((2U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_2[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_206[0U] 
            = ((3U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_3[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_206[1U] 
            = ((3U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_3[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_206[2U] 
            = ((3U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_3[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_206[3U] 
            = ((3U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_3[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_207[0U] 
            = ((4U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_4[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_207[1U] 
            = ((4U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_4[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_207[2U] 
            = ((4U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_4[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_207[3U] 
            = ((4U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_4[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_208[0U] 
            = ((5U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_5[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_208[1U] 
            = ((5U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_5[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_208[2U] 
            = ((5U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_5[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_208[3U] 
            = ((5U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_5[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_209[0U] 
            = ((6U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_6[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_209[1U] 
            = ((6U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_6[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_209[2U] 
            = ((6U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_6[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_209[3U] 
            = ((6U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_6[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_210[0U] 
            = ((7U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_7[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_210[1U] 
            = ((7U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_7[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_210[2U] 
            = ((7U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_7[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_210[3U] 
            = ((7U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_7[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_211[0U] 
            = ((8U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_8[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_211[1U] 
            = ((8U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_8[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_211[2U] 
            = ((8U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_8[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_211[3U] 
            = ((8U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_8[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_212[0U] 
            = ((9U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_9[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_212[1U] 
            = ((9U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_9[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_212[2U] 
            = ((9U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_9[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_212[3U] 
            = ((9U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_9[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_213[0U] 
            = ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_10[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_213[1U] 
            = ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_10[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_213[2U] 
            = ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_10[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_213[3U] 
            = ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_10[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_214[0U] 
            = ((0xbU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_11[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_214[1U] 
            = ((0xbU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_11[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_214[2U] 
            = ((0xbU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_11[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_214[3U] 
            = ((0xbU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_11[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_215[0U] 
            = ((0xcU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_12[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_215[1U] 
            = ((0xcU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_12[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_215[2U] 
            = ((0xcU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_12[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_215[3U] 
            = ((0xcU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_12[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_216[0U] 
            = ((0xdU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_13[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_216[1U] 
            = ((0xdU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_13[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_216[2U] 
            = ((0xdU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_13[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_216[3U] 
            = ((0xdU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_13[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_217[0U] 
            = ((0xeU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_14[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_217[1U] 
            = ((0xeU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_14[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_217[2U] 
            = ((0xeU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_14[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_217[3U] 
            = ((0xeU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_14[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_218[0U] 
            = ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_15[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_218[1U] 
            = ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_15[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_218[2U] 
            = ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_15[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_218[3U] 
            = ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_15[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_251 = vlSelf->top__DOT__d_cache__DOT__dirty_1_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_252 = vlSelf->top__DOT__d_cache__DOT__dirty_1_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_253 = vlSelf->top__DOT__d_cache__DOT__dirty_1_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_254 = vlSelf->top__DOT__d_cache__DOT__dirty_1_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_255 = vlSelf->top__DOT__d_cache__DOT__dirty_1_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_256 = vlSelf->top__DOT__d_cache__DOT__dirty_1_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_257 = vlSelf->top__DOT__d_cache__DOT__dirty_1_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_258 = vlSelf->top__DOT__d_cache__DOT__dirty_1_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_259 = vlSelf->top__DOT__d_cache__DOT__dirty_1_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_260 = vlSelf->top__DOT__d_cache__DOT__dirty_1_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_261 = vlSelf->top__DOT__d_cache__DOT__dirty_1_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_262 = vlSelf->top__DOT__d_cache__DOT__dirty_1_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_263 = vlSelf->top__DOT__d_cache__DOT__dirty_1_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_264 = vlSelf->top__DOT__d_cache__DOT__dirty_1_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_265 = vlSelf->top__DOT__d_cache__DOT__dirty_1_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_266 = vlSelf->top__DOT__d_cache__DOT__dirty_1_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_235[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_0[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_235[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_0[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_235[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_0[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_235[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_0[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_236[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_1[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_236[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_1[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_236[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_1[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_236[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_1[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_237[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_2[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_237[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_2[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_237[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_2[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_237[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_2[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_238[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_3[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_238[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_3[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_238[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_3[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_238[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_3[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_239[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_4[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_239[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_4[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_239[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_4[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_239[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_4[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_240[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_5[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_240[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_5[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_240[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_5[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_240[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_5[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_241[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_6[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_241[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_6[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_241[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_6[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_241[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_6[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_242[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_7[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_242[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_7[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_242[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_7[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_242[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_7[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_243[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_8[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_243[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_8[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_243[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_8[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_243[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_8[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_244[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_9[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_244[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_9[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_244[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_9[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_244[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_9[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_245[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_10[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_245[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_10[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_245[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_10[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_245[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_10[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_246[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_11[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_246[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_11[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_246[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_11[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_246[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_11[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_247[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_12[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_247[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_12[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_247[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_12[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_247[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_12[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_248[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_13[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_248[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_13[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_248[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_13[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_248[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_13[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_249[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_14[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_249[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_14[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_249[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_14[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_249[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_14[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_250[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_15[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_250[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_15[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_250[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_15[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_250[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_15[3U];
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_219 = vlSelf->top__DOT__d_cache__DOT__dirty_0_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_220 = vlSelf->top__DOT__d_cache__DOT__dirty_0_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_221 = vlSelf->top__DOT__d_cache__DOT__dirty_0_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_222 = vlSelf->top__DOT__d_cache__DOT__dirty_0_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_223 = vlSelf->top__DOT__d_cache__DOT__dirty_0_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_224 = vlSelf->top__DOT__d_cache__DOT__dirty_0_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_225 = vlSelf->top__DOT__d_cache__DOT__dirty_0_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_226 = vlSelf->top__DOT__d_cache__DOT__dirty_0_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_227 = vlSelf->top__DOT__d_cache__DOT__dirty_0_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_228 = vlSelf->top__DOT__d_cache__DOT__dirty_0_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_229 = vlSelf->top__DOT__d_cache__DOT__dirty_0_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_230 = vlSelf->top__DOT__d_cache__DOT__dirty_0_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_231 = vlSelf->top__DOT__d_cache__DOT__dirty_0_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_232 = vlSelf->top__DOT__d_cache__DOT__dirty_0_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_233 = vlSelf->top__DOT__d_cache__DOT__dirty_0_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_234 = vlSelf->top__DOT__d_cache__DOT__dirty_0_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_203[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_0[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_203[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_0[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_203[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_0[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_203[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_0[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_204[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_1[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_204[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_1[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_204[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_1[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_204[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_1[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_205[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_2[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_205[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_2[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_205[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_2[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_205[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_2[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_206[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_3[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_206[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_3[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_206[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_3[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_206[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_3[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_207[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_4[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_207[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_4[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_207[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_4[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_207[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_4[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_208[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_5[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_208[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_5[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_208[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_5[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_208[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_5[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_209[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_6[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_209[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_6[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_209[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_6[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_209[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_6[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_210[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_7[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_210[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_7[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_210[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_7[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_210[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_7[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_211[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_8[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_211[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_8[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_211[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_8[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_211[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_8[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_212[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_9[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_212[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_9[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_212[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_9[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_212[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_9[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_213[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_10[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_213[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_10[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_213[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_10[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_213[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_10[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_214[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_11[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_214[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_11[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_214[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_11[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_214[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_11[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_215[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_12[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_215[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_12[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_215[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_12[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_215[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_12[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_216[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_13[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_216[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_13[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_216[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_13[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_216[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_13[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_217[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_14[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_217[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_14[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_217[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_14[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_217[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_14[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_218[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_15[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_218[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_15[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_218[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_15[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_218[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_15[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_251 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_0))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_0));
        vlSelf->top__DOT__d_cache__DOT___GEN_252 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((1U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_1))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_1));
        vlSelf->top__DOT__d_cache__DOT___GEN_253 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((2U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_2))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_2));
        vlSelf->top__DOT__d_cache__DOT___GEN_254 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((3U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_3))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_3));
        vlSelf->top__DOT__d_cache__DOT___GEN_255 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((4U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_4))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_4));
        vlSelf->top__DOT__d_cache__DOT___GEN_256 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((5U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_5))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_5));
        vlSelf->top__DOT__d_cache__DOT___GEN_257 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((6U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_6))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_6));
        vlSelf->top__DOT__d_cache__DOT___GEN_258 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((7U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_7))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_7));
        vlSelf->top__DOT__d_cache__DOT___GEN_259 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((8U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_8))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_8));
        vlSelf->top__DOT__d_cache__DOT___GEN_260 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((9U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_9))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_9));
        vlSelf->top__DOT__d_cache__DOT___GEN_261 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_10))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_10));
        vlSelf->top__DOT__d_cache__DOT___GEN_262 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xbU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_11))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_11));
        vlSelf->top__DOT__d_cache__DOT___GEN_263 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xcU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_12))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_12));
        vlSelf->top__DOT__d_cache__DOT___GEN_264 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xdU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_13))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_13));
        vlSelf->top__DOT__d_cache__DOT___GEN_265 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xeU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_14))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_14));
        vlSelf->top__DOT__d_cache__DOT___GEN_266 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_15))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_15));
        vlSelf->top__DOT__d_cache__DOT___GEN_235[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_0[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_0[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_235[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_0[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_0[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_235[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_0[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_0[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_235[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_0[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_0[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_236[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((1U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_1[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_1[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_236[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((1U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_1[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_1[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_236[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((1U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_1[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_1[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_236[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((1U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_1[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_1[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_237[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((2U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_2[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_2[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_237[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((2U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_2[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_2[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_237[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((2U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_2[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_2[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_237[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((2U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_2[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_2[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_238[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((3U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_3[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_3[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_238[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((3U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_3[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_3[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_238[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((3U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_3[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_3[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_238[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((3U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_3[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_3[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_239[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((4U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_4[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_4[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_239[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((4U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_4[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_4[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_239[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((4U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_4[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_4[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_239[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((4U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_4[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_4[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_240[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((5U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_5[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_5[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_240[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((5U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_5[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_5[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_240[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((5U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_5[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_5[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_240[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((5U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_5[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_5[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_241[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((6U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_6[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_6[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_241[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((6U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_6[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_6[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_241[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((6U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_6[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_6[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_241[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((6U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_6[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_6[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_242[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((7U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_7[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_7[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_242[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((7U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_7[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_7[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_242[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((7U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_7[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_7[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_242[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((7U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_7[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_7[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_243[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((8U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_8[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_8[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_243[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((8U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_8[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_8[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_243[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((8U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_8[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_8[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_243[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((8U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_8[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_8[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_244[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((9U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_9[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_9[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_244[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((9U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_9[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_9[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_244[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((9U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_9[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_9[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_244[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((9U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_9[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_9[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_245[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_10[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_10[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_245[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_10[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_10[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_245[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_10[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_10[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_245[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_10[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_10[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_246[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xbU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_11[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_11[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_246[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xbU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_11[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_11[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_246[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xbU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_11[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_11[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_246[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xbU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_11[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_11[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_247[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xcU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_12[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_12[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_247[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xcU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_12[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_12[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_247[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xcU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_12[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_12[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_247[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xcU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_12[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_12[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_248[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xdU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_13[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_13[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_248[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xdU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_13[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_13[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_248[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xdU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_13[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_13[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_248[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xdU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_13[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_13[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_249[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xeU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_14[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_14[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_249[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xeU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_14[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_14[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_249[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xeU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_14[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_14[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_249[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xeU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_14[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_14[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_250[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_15[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_15[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_250[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_15[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_15[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_250[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_15[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_15[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_250[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_15[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_15[3U]);
    }
    vlSelf->top__DOT__d_cache__DOT___GEN_2253 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit) 
                                                 | (IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit));
    VL_EXTEND_WQ(128,64, __Vtemp3873, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_EXTEND_WQ(128,64, __Vtemp3874, vlSelf->top__DOT__EXU__DOT__src2_value);
    VL_MUL_W(4, __Vtemp3875, __Vtemp3873, __Vtemp3874);
    top__DOT__EXU__DOT__ALU__DOT___alu_res_T_92 = (
                                                   (0x13U 
                                                    == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__EXU__DOT__ALU__DOT___divw_res_T_4 
                                                                                >> 0x1fU)))
                                                                       ? 0xffffffffU
                                                                       : 0U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT___divw_res_T_4)))
                                                    : 
                                                   ((0x12U 
                                                     == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__EXU__DOT__ALU__DOT___mluw_res_T_2 
                                                                                >> 0x1fU)))
                                                                        ? 0xffffffffU
                                                                        : 0U))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT___mluw_res_T_2)))
                                                     : 
                                                    ((0x11U 
                                                      == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                      ? 
                                                     (((QData)((IData)(
                                                                       __Vtemp3875[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        __Vtemp3875[0U])))
                                                      : 
                                                     ((0x1dU 
                                                       == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__srlw_res 
                                                                          >> 0x1fU)
                                                                          ? 0xffffffffU
                                                                          : 0U))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__srlw_res)))
                                                       : 
                                                      ((0x1cU 
                                                        == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                        ? 
                                                       (((QData)((IData)(
                                                                         ((VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value), 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value))) 
                                                                           >> 0x1fU)
                                                                           ? 0xffffffffU
                                                                           : 0U))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value), 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value))))))
                                                        : 
                                                       ((0x16U 
                                                         == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                         ? 
                                                        (((QData)((IData)(
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT__EXU__DOT__ALU__DOT__sllw_res 
                                                                                >> 0x1fU)))
                                                                            ? 0xffffffffU
                                                                            : 0U))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sllw_res)))
                                                         : vlSelf->top__DOT__EXU__DOT__ALU__DOT___alu_res_T_80))))));
    vlSelf->top__DOT__IDU__DOT___ALUop_T_176 = ((0x13U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                                 ? 0xfU
                                                 : 
                                                ((0x100073U 
                                                  == vlSelf->top__DOT__IDU__DOT__inst)
                                                  ? 2U
                                                  : 
                                                 ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 0xfU
                                                   : 
                                                  ((0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 4U
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst))
                                                     ? 5U
                                                     : 
                                                    ((0x67U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__IDU__DOT__inst))
                                                      ? 6U
                                                      : 
                                                     ((0x3023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst))
                                                       ? 0xfU
                                                       : 
                                                      ((0x3013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst))
                                                        ? 0x1eU
                                                        : 
                                                       ((0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__IDU__DOT__inst))
                                                         ? 0xfU
                                                         : 
                                                        ((0x3bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__IDU__DOT__inst))
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__IDU__DOT__inst))
                                                           ? 0xeU
                                                           : 
                                                          ((0x3003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__IDU__DOT__inst))
                                                            ? 0xfU
                                                            : 
                                                           ((0x1bU 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__IDU__DOT__inst))
                                                             ? 0xcU
                                                             : 
                                                            ((0x33U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->top__DOT__IDU__DOT__inst))
                                                              ? 0xfU
                                                              : (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_162)))))))))))))));
    top__DOT__IDU__DOT___inst_type_T_185 = ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                             ? 0x43U
                                             : ((0x67U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                                 ? 0x40U
                                                 : 
                                                ((0x3023U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                                  ? 0x44U
                                                  : 
                                                 ((0x3013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 0x40U
                                                   : 
                                                  ((0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 0x40U
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst))
                                                     ? 0x41U
                                                     : 
                                                    ((0x40000033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__IDU__DOT__inst))
                                                      ? 0x41U
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst))
                                                       ? 0x45U
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst))
                                                        ? 0x45U
                                                        : 
                                                       ((0x3003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__IDU__DOT__inst))
                                                         ? 0x40U
                                                         : 
                                                        ((0x1bU 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__IDU__DOT__inst))
                                                          ? 0x40U
                                                          : 
                                                         ((0x33U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__IDU__DOT__inst))
                                                           ? 0x41U
                                                           : 
                                                          ((0x40005013U 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->top__DOT__IDU__DOT__inst))
                                                            ? 0x40U
                                                            : 
                                                           ((0x4003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__IDU__DOT__inst))
                                                             ? 0x40U
                                                             : 
                                                            ((0x1023U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__IDU__DOT__inst))
                                                              ? 0x44U
                                                              : (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_170))))))))))))))));
    if ((3U == (IData)(vlSelf->top__DOT__axi__DOT__state))) {
        vlSelf->top__DOT__axi__DOT___GEN_35 = ((IData)(vlSelf->top__DOT__arbiter_io_axi_out_bready)
                                                ? 0U
                                                : (IData)(vlSelf->top__DOT__axi__DOT__state));
        vlSelf->top__DOT__axi__DOT___GEN_36 = ((~ (IData)(vlSelf->top__DOT__arbiter_io_axi_out_bready)) 
                                               & (IData)(vlSelf->top__DOT__axi__DOT__axi_bvalid));
    } else {
        vlSelf->top__DOT__axi__DOT___GEN_35 = vlSelf->top__DOT__axi__DOT__state;
        vlSelf->top__DOT__axi__DOT___GEN_36 = vlSelf->top__DOT__axi__DOT__axi_bvalid;
    }
    vlSelf->top__DOT__axi__DOT___GEN_7 = (((IData)(vlSelf->top__DOT__arbiter_io_axi_out_awvalid) 
                                           & (IData)(vlSelf->top__DOT__arbiter_io_axi_out_wvalid)) 
                                          | (IData)(vlSelf->top__DOT__axi__DOT__axi_wready));
    if (((IData)(vlSelf->top__DOT__arbiter_io_axi_out_wvalid) 
         & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready))) {
        vlSelf->top__DOT__axi__DOT___GEN_14 = (8ULL 
                                               + vlSelf->top__DOT__axi__DOT__awaddr);
        vlSelf->top__DOT__axi__DOT___GEN_15 = (0xffU 
                                               & ((IData)(vlSelf->top__DOT__axi__DOT__awlen) 
                                                  - (IData)(1U)));
    } else {
        vlSelf->top__DOT__axi__DOT___GEN_14 = vlSelf->top__DOT__axi__DOT__awaddr;
        vlSelf->top__DOT__axi__DOT___GEN_15 = (0xffU 
                                               & (IData)(vlSelf->top__DOT__axi__DOT__awlen));
    }
    if ((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))) {
        vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata 
            = ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                    ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                    : 0ULL));
        vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata 
            = ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                ? 0ULL : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                           ? 0ULL : ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                      ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                                      : 0ULL)));
    } else {
        vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata 
            = ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                ? 0ULL : ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                           ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                           : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                               ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                               : 0ULL)));
        vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata 
            = ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                : 0ULL);
    }
    vlSelf->top__DOT__d_cache__DOT___GEN_1650 = (7U 
                                                 & ((3U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                     ? 
                                                    ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                                                     : (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num)));
    vlSelf->top__DOT__arbiter__DOT___GEN_94 = ((((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid) 
                                                 & (IData)(vlSelf->top__DOT__d_cache_io_to_axi_rready)) 
                                                & (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rlast))
                                                ? 0U
                                                : (IData)(vlSelf->top__DOT__arbiter__DOT__state));
    vlSelf->top__DOT__arbiter__DOT___GEN_126 = ((3U 
                                                 == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                 ? 
                                                (((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid) 
                                                  & (IData)(vlSelf->top__DOT__d_cache_io_to_axi_bready))
                                                  ? 0U
                                                  : (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                 : (IData)(vlSelf->top__DOT__arbiter__DOT__state));
    top__DOT__d_cache__DOT___GEN_274 = ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid)
                                         ? 0U : (IData)(vlSelf->top__DOT__d_cache__DOT__state));
    vlSelf->top__DOT__axi__DOT___GEN_4 = ((IData)(vlSelf->top__DOT__arbiter_io_axi_out_arvalid) 
                                          | (IData)(vlSelf->top__DOT__axi__DOT__axi_rvalid));
    if (vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid) {
        vlSelf->top__DOT__i_cache__DOT___GEN_140 = 
            (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__i_cache__DOT__receive_num)));
        vlSelf->top__DOT__i_cache__DOT___GEN_141 = 
            ((IData)(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast)
              ? 3U : (IData)(vlSelf->top__DOT__i_cache__DOT__state));
    } else {
        vlSelf->top__DOT__i_cache__DOT___GEN_140 = 
            (7U & (IData)(vlSelf->top__DOT__i_cache__DOT__receive_num));
        vlSelf->top__DOT__i_cache__DOT___GEN_141 = vlSelf->top__DOT__i_cache__DOT__state;
    }
    vlSelf->top__DOT__LSU__DOT__ms_ready_go = (1U & 
                                               ((((IData)(vlSelf->top__DOT__LSU__DOT__wen) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                     & ((2U 
                                                         == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2253)
                                                         : 
                                                        ((3U 
                                                          != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                         & (((4U 
                                                              == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                             | (8U 
                                                                == (IData)(vlSelf->top__DOT__d_cache__DOT__state)))
                                                             ? (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid)
                                                             : 
                                                            ((6U 
                                                              != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                             & ((7U 
                                                                 == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                                 ? (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid)
                                                                 : 
                                                                (((0U 
                                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3)) 
                                                                 & (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid))))))))) 
                                                 | ((IData)(vlSelf->top__DOT__LSU__DOT__ren) 
                                                    & ((1U 
                                                        == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2253)
                                                        : 
                                                       ((2U 
                                                         != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                        & ((3U 
                                                            != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                           & ((~ 
                                                               ((4U 
                                                                 == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                                | (8U 
                                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state)))) 
                                                              & ((6U 
                                                                  != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                                 & ((7U 
                                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                                     ? (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
                                                                     : 
                                                                    (((0U 
                                                                       == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                                      & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3)) 
                                                                     & (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)))))))))) 
                                                | (~ 
                                                   ((IData)(vlSelf->top__DOT__LSU__DOT__wen) 
                                                    | (IData)(vlSelf->top__DOT__LSU__DOT__ren)))));
    VL_EXTEND_WQ(127,64, __Vtemp3877, (vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                       >> (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value))));
    VL_EXTEND_WQ(127,64, __Vtemp3878, vlSelf->top__DOT__EXU__DOT__ALU__DOT__sra_res);
    VL_EXTEND_WQ(127,64, __Vtemp3879, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_SHIFTL_WWI(127,127,6, __Vtemp3880, __Vtemp3879, 
                  (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
    VL_EXTEND_WQ(65,64, __Vtemp3882, VL_MODDIVS_QQQ(64, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value, vlSelf->top__DOT__EXU__DOT__src2_value));
    VL_EXTEND_WQ(65,64, __Vtemp3883, VL_MODDIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value, vlSelf->top__DOT__EXU__DOT__src2_value));
    VL_EXTEND_WQ(65,64, __Vtemp3884, (((QData)((IData)(
                                                       ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__remuw_res 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__remuw_res))));
    VL_EXTEND_WQ(65,64, __Vtemp3885, (((QData)((IData)(
                                                       ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__remw_res 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__remw_res))));
    VL_EXTEND_WQ(65,64, __Vtemp3886, (((QData)((IData)(
                                                       ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__divuw_res 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__divuw_res))));
    VL_EXTENDS_WQ(65,64, __Vtemp3888, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    __Vtemp3889[0U] = __Vtemp3888[0U];
    __Vtemp3889[1U] = __Vtemp3888[1U];
    __Vtemp3889[2U] = (1U & __Vtemp3888[2U]);
    VL_EXTENDS_WQ(65,64, __Vtemp3891, vlSelf->top__DOT__EXU__DOT__src2_value);
    __Vtemp3892[0U] = __Vtemp3891[0U];
    __Vtemp3892[1U] = __Vtemp3891[1U];
    __Vtemp3892[2U] = (1U & __Vtemp3891[2U]);
    VL_DIVS_WWW(65, __Vtemp3893, __Vtemp3889, __Vtemp3892);
    VL_EXTEND_WQ(65,64, __Vtemp3894, ((0x30U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                       ? VL_DIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value, vlSelf->top__DOT__EXU__DOT__src2_value)
                                       : top__DOT__EXU__DOT__ALU__DOT___alu_res_T_92));
    if ((0x34U == vlSelf->top__DOT__EXU__DOT__ALUop)) {
        __Vtemp3907[0U] = __Vtemp3882[0U];
        __Vtemp3907[1U] = __Vtemp3882[1U];
        __Vtemp3907[2U] = (1U & __Vtemp3882[2U]);
    } else {
        __Vtemp3907[0U] = ((0x33U == vlSelf->top__DOT__EXU__DOT__ALUop)
                            ? __Vtemp3883[0U] : ((0x32U 
                                                  == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                  ? 
                                                 __Vtemp3884[0U]
                                                  : 
                                                 ((0x14U 
                                                   == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                   ? 
                                                  __Vtemp3885[0U]
                                                   : 
                                                  ((0x35U 
                                                    == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                    ? 
                                                   __Vtemp3886[0U]
                                                    : 
                                                   ((0x31U 
                                                     == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                     ? 
                                                    __Vtemp3893[0U]
                                                     : 
                                                    __Vtemp3894[0U])))));
        __Vtemp3907[1U] = ((0x33U == vlSelf->top__DOT__EXU__DOT__ALUop)
                            ? __Vtemp3883[1U] : ((0x32U 
                                                  == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                  ? 
                                                 __Vtemp3884[1U]
                                                  : 
                                                 ((0x14U 
                                                   == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                   ? 
                                                  __Vtemp3885[1U]
                                                   : 
                                                  ((0x35U 
                                                    == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                    ? 
                                                   __Vtemp3886[1U]
                                                    : 
                                                   ((0x31U 
                                                     == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                     ? 
                                                    __Vtemp3893[1U]
                                                     : 
                                                    __Vtemp3894[1U])))));
        __Vtemp3907[2U] = (1U & ((0x33U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                  ? __Vtemp3883[2U]
                                  : ((0x32U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                      ? __Vtemp3884[2U]
                                      : ((0x14U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                          ? __Vtemp3885[2U]
                                          : ((0x35U 
                                              == vlSelf->top__DOT__EXU__DOT__ALUop)
                                              ? __Vtemp3886[2U]
                                              : ((0x31U 
                                                  == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                  ? 
                                                 __Vtemp3893[2U]
                                                  : 
                                                 __Vtemp3894[2U]))))));
    }
    VL_EXTEND_WW(127,65, __Vtemp3908, __Vtemp3907);
    if ((0x38U == vlSelf->top__DOT__EXU__DOT__ALUop)) {
        top__DOT__EXU__DOT__ALU__DOT___alu_res_T_112[0U] 
            = __Vtemp3877[0U];
        top__DOT__EXU__DOT__ALU__DOT___alu_res_T_112[1U] 
            = __Vtemp3877[1U];
        top__DOT__EXU__DOT__ALU__DOT___alu_res_T_112[2U] 
            = __Vtemp3877[2U];
        top__DOT__EXU__DOT__ALU__DOT___alu_res_T_112[3U] 
            = (0x7fffffffU & __Vtemp3877[3U]);
    } else {
        top__DOT__EXU__DOT__ALU__DOT___alu_res_T_112[0U] 
            = ((0x39U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp3878[0U] : ((0x37U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                      ? __Vtemp3880[0U]
                                      : __Vtemp3908[0U]));
        top__DOT__EXU__DOT__ALU__DOT___alu_res_T_112[1U] 
            = ((0x39U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp3878[1U] : ((0x37U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                      ? __Vtemp3880[1U]
                                      : __Vtemp3908[1U]));
        top__DOT__EXU__DOT__ALU__DOT___alu_res_T_112[2U] 
            = ((0x39U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp3878[2U] : ((0x37U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                      ? __Vtemp3880[2U]
                                      : __Vtemp3908[2U]));
        top__DOT__EXU__DOT__ALU__DOT___alu_res_T_112[3U] 
            = (0x7fffffffU & ((0x39U == vlSelf->top__DOT__EXU__DOT__ALUop)
                               ? __Vtemp3878[3U] : 
                              ((0x37U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                ? __Vtemp3880[3U] : 
                               __Vtemp3908[3U])));
    }
    Vtop___024unit____Vdpiimwrap_ebreak_handle_TOP____024unit(
                                                              (2U 
                                                               == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176)));
    Vtop___024unit____Vdpiimwrap_ecall_handle_TOP____024unit(
                                                             (0x3dU 
                                                              == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176)));
    Vtop___024unit____Vdpiimwrap_get_pc_TOP____024unit(
                                                       ((IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)
                                                         ? vlSelf->top__DOT__WBU__DOT__ws_pc
                                                         : 
                                                        ((IData)(vlSelf->top__DOT__LSU__DOT__ms_valid)
                                                          ? vlSelf->top__DOT__LSU__DOT__ms_pc
                                                          : 
                                                         ((IData)(vlSelf->top__DOT__EXU__DOT__es_valid)
                                                           ? vlSelf->top__DOT__EXU__DOT__es_pc
                                                           : 
                                                          ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)
                                                            ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                                            : vlSelf->top__DOT__IFU__DOT__fs_pc)))));
    vlSelf->top__DOT__IDU__DOT___inst_type_T_188 = 
        ((0x13U == (0x707fU & vlSelf->top__DOT__IDU__DOT__inst))
          ? 0x40U : ((0x17U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))
                      ? 0x42U : ((0x37U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))
                                  ? 0x42U : (IData)(top__DOT__IDU__DOT___inst_type_T_185))));
    if ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_1648 = 
            ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
              ? ((1U & (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                  ? vlSelf->top__DOT__d_cache__DOT__receive_data_0
                  : vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata)
              : vlSelf->top__DOT__d_cache__DOT__receive_data_0);
        vlSelf->top__DOT__d_cache__DOT___GEN_1649 = 
            ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
              ? ((1U & (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                  ? vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata
                  : vlSelf->top__DOT__d_cache__DOT__receive_data_1)
              : vlSelf->top__DOT__d_cache__DOT__receive_data_1);
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_1648 = vlSelf->top__DOT__d_cache__DOT__receive_data_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_1649 = vlSelf->top__DOT__d_cache__DOT__receive_data_1;
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp3916, vlSelf->top__DOT__d_cache__DOT___GEN_88, 
                  (0x78U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                            << 3U)));
    VL_SHIFTR_WWI(128,128,7, __Vtemp3917, vlSelf->top__DOT__d_cache__DOT___GEN_136, 
                  (0x78U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                            << 3U)));
    VL_EXTEND_WQ(128,64, __Vtemp3921, ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                        ? 0ULL : ((3U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? 0ULL
                                                   : 
                                                  (((4U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                    | (8U 
                                                       == (IData)(vlSelf->top__DOT__d_cache__DOT__state)))
                                                    ? 0ULL
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                     ? 0ULL
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                      ? vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata
                                                      : 
                                                     (((0U 
                                                        == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                       & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3))
                                                       ? vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata
                                                       : 0ULL)))))));
    if ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_2408[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                ? __Vtemp3916[0U] : ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                      ? __Vtemp3917[0U]
                                      : 0U));
        vlSelf->top__DOT__d_cache__DOT___GEN_2408[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                ? __Vtemp3916[1U] : ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                      ? __Vtemp3917[1U]
                                      : 0U));
        vlSelf->top__DOT__d_cache__DOT___GEN_2408[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                ? __Vtemp3916[2U] : ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                      ? __Vtemp3917[2U]
                                      : 0U));
        vlSelf->top__DOT__d_cache__DOT___GEN_2408[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                ? __Vtemp3916[3U] : ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                      ? __Vtemp3917[3U]
                                      : 0U));
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_2408[0U] 
            = __Vtemp3921[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_2408[1U] 
            = __Vtemp3921[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_2408[2U] 
            = __Vtemp3921[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_2408[3U] 
            = __Vtemp3921[3U];
    }
    if (vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid) {
        vlSelf->top__DOT__i_cache__DOT___GEN_138 = 
            ((1U & (IData)(vlSelf->top__DOT__i_cache__DOT__receive_num))
              ? vlSelf->top__DOT__i_cache__DOT__receive_data_0
              : vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata);
        vlSelf->top__DOT__i_cache__DOT___GEN_139 = 
            ((1U & (IData)(vlSelf->top__DOT__i_cache__DOT__receive_num))
              ? vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata
              : vlSelf->top__DOT__i_cache__DOT__receive_data_1);
    } else {
        vlSelf->top__DOT__i_cache__DOT___GEN_138 = vlSelf->top__DOT__i_cache__DOT__receive_data_0;
        vlSelf->top__DOT__i_cache__DOT___GEN_139 = vlSelf->top__DOT__i_cache__DOT__receive_data_1;
    }
    vlSelf->top__DOT__d_cache__DOT___GEN_1651 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rlast)
                                                    ? 5U
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(top__DOT__d_cache__DOT___GEN_274)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? 1U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? 1U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                                        ? 6U
                                                        : 1U)
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                                        ? 6U
                                                        : 1U))))
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                     ? 
                                                    ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid)
                                                      ? 1U
                                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
                                                       ? 0U
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                       ? (IData)(top__DOT__d_cache__DOT___GEN_274)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__state)))))));
    vlSelf->top__DOT__LSU__DOT__ms_allowin = (1U & 
                                              ((~ (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid)) 
                                               | (IData)(vlSelf->top__DOT__LSU__DOT__ms_ready_go)));
    vlSelf->top__DOT__LSU_io_ms_to_ws_valid = ((IData)(vlSelf->top__DOT__LSU__DOT__ms_valid) 
                                               & (IData)(vlSelf->top__DOT__LSU__DOT__ms_ready_go));
    VL_EXTEND_WQ(127,64, __Vtemp3924, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_EXTEND_WQ(127,64, __Vtemp3925, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_EXTEND_WQ(127,64, __Vtemp3926, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    if ((0x47U == vlSelf->top__DOT__EXU__DOT__ALUop)) {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U] 
            = __Vtemp3924[0U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U] 
            = __Vtemp3924[1U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[2U] 
            = __Vtemp3924[2U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[3U] 
            = __Vtemp3924[3U];
    } else {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U] 
            = ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp3925[0U] : ((0x3fU == vlSelf->top__DOT__EXU__DOT__ALUop)
                                      ? __Vtemp3926[0U]
                                      : top__DOT__EXU__DOT__ALU__DOT___alu_res_T_112[0U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U] 
            = ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp3925[1U] : ((0x3fU == vlSelf->top__DOT__EXU__DOT__ALUop)
                                      ? __Vtemp3926[1U]
                                      : top__DOT__EXU__DOT__ALU__DOT___alu_res_T_112[1U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[2U] 
            = ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp3925[2U] : ((0x3fU == vlSelf->top__DOT__EXU__DOT__ALUop)
                                      ? __Vtemp3926[2U]
                                      : top__DOT__EXU__DOT__ALU__DOT___alu_res_T_112[2U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[3U] 
            = ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp3925[3U] : ((0x3fU == vlSelf->top__DOT__EXU__DOT__ALUop)
                                      ? __Vtemp3926[3U]
                                      : top__DOT__EXU__DOT__ALU__DOT___alu_res_T_112[3U]));
    }
    vlSelf->top__DOT__IDU__DOT__imm = ((0x45U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))
                                        ? ((((vlSelf->top__DOT__IDU__DOT__inst 
                                              >> 0x1fU)
                                              ? 0x7ffffffffffffULL
                                              : 0ULL) 
                                            << 0xdU) 
                                           | (QData)((IData)(
                                                             ((0x1000U 
                                                               & (vlSelf->top__DOT__IDU__DOT__inst 
                                                                  >> 0x13U)) 
                                                              | ((0x800U 
                                                                  & (vlSelf->top__DOT__IDU__DOT__inst 
                                                                     << 4U)) 
                                                                 | ((0x7e0U 
                                                                     & (vlSelf->top__DOT__IDU__DOT__inst 
                                                                        >> 0x14U)) 
                                                                    | (0x1eU 
                                                                       & (vlSelf->top__DOT__IDU__DOT__inst 
                                                                          >> 7U))))))))
                                        : ((0x44U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))
                                            ? ((((vlSelf->top__DOT__IDU__DOT__inst 
                                                  >> 0x1fU)
                                                  ? 0xfffffffffffffULL
                                                  : 0ULL) 
                                                << 0xcU) 
                                               | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->top__DOT__IDU__DOT__inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->top__DOT__IDU__DOT__inst 
                                                                        >> 7U))))))
                                            : ((0x42U 
                                                == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))
                                                ? (
                                                   ((QData)((IData)(
                                                                    ((vlSelf->top__DOT__IDU__DOT__inst 
                                                                      >> 0x1fU)
                                                                      ? 0xffffffffU
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (0xfffff000U 
                                                                      & vlSelf->top__DOT__IDU__DOT__inst))))
                                                : (
                                                   (0x43U 
                                                    == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))
                                                    ? 
                                                   ((((vlSelf->top__DOT__IDU__DOT__inst 
                                                       >> 0x1fU)
                                                       ? 0x7ffffffffffULL
                                                       : 0ULL) 
                                                     << 0x15U) 
                                                    | (QData)((IData)(
                                                                      ((0x100000U 
                                                                        & (vlSelf->top__DOT__IDU__DOT__inst 
                                                                           >> 0xbU)) 
                                                                       | ((0xff000U 
                                                                           & vlSelf->top__DOT__IDU__DOT__inst) 
                                                                          | ((0x800U 
                                                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                                                >> 9U)) 
                                                                             | (0x7feU 
                                                                                & (vlSelf->top__DOT__IDU__DOT__inst 
                                                                                >> 0x14U))))))))
                                                    : 
                                                   ((0x40U 
                                                     == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))
                                                     ? 
                                                    ((((vlSelf->top__DOT__IDU__DOT__inst 
                                                        >> 0x1fU)
                                                        ? 0xfffffffffffffULL
                                                        : 0ULL) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       (vlSelf->top__DOT__IDU__DOT__inst 
                                                                        >> 0x14U))))
                                                     : 0ULL)))));
    vlSelf->top__DOT__IDU__DOT__conflict_es_rs1 = (
                                                   (((~ (IData)(vlSelf->top__DOT__IDU__DOT__src1_is_pc)) 
                                                     | (0x45U 
                                                        == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))) 
                                                    | (1U 
                                                       == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))) 
                                                   & (((((0x1fU 
                                                          & (vlSelf->top__DOT__IDU__DOT__inst 
                                                             >> 0xfU)) 
                                                         == (IData)(vlSelf->top__DOT__EXU__DOT__es_rd)) 
                                                        & (0U 
                                                           != 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                                               >> 0xfU)))) 
                                                       & (IData)(vlSelf->top__DOT__EXU__DOT__es_rf_we)) 
                                                      & (IData)(vlSelf->top__DOT__EXU__DOT__es_valid)));
    top__DOT__IDU__DOT___conflict_es_rs1_T_4 = (1U 
                                                & (((~ (IData)(vlSelf->top__DOT__IDU__DOT__src1_is_pc)) 
                                                    | (0x45U 
                                                       == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))) 
                                                   | (1U 
                                                      == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))));
    vlSelf->top__DOT__IDU__DOT__src2_is_imm = ((0x45U 
                                                == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188)) 
                                               | ((0x43U 
                                                   == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188)) 
                                                  | ((0x44U 
                                                      == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188)) 
                                                     | ((0x42U 
                                                         == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188)) 
                                                        | (0x40U 
                                                           == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))))));
    vlSelf->top__DOT__LSU__DOT__rdata = ((7U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                          ? (QData)((IData)(
                                                            (0xffffU 
                                                             & vlSelf->top__DOT__d_cache__DOT___GEN_2408[0U])))
                                          : ((6U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                              ? (((
                                                   (0x80U 
                                                    & vlSelf->top__DOT__d_cache__DOT___GEN_2408[0U])
                                                    ? 0xffffffffffffffULL
                                                    : 0ULL) 
                                                  << 8U) 
                                                 | (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlSelf->top__DOT__d_cache__DOT___GEN_2408[0U]))))
                                              : ((5U 
                                                  == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                  ? 
                                                 ((((0x8000U 
                                                     & vlSelf->top__DOT__d_cache__DOT___GEN_2408[0U])
                                                     ? 0xffffffffffffULL
                                                     : 0ULL) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlSelf->top__DOT__d_cache__DOT___GEN_2408[0U]))))
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                   ? (QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___GEN_2408[0U]))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & vlSelf->top__DOT__d_cache__DOT___GEN_2408[0U])))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__d_cache__DOT___GEN_2408[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__d_cache__DOT___GEN_2408[0U])))
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       ((vlSelf->top__DOT__d_cache__DOT___GEN_2408[0U] 
                                                                         >> 0x1fU)
                                                                         ? 0xffffffffU
                                                                         : 0U))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__d_cache__DOT___GEN_2408[0U])))
                                                      : 
                                                     (((QData)((IData)(
                                                                       vlSelf->top__DOT__d_cache__DOT___GEN_2408[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__d_cache__DOT___GEN_2408[0U]))))))))));
    vlSelf->top__DOT__EXU__DOT__es_allowin = (1U & 
                                              ((~ (IData)(vlSelf->top__DOT__EXU__DOT__es_valid)) 
                                               | (IData)(vlSelf->top__DOT__LSU__DOT__ms_allowin)));
    vlSelf->top__DOT__IDU__DOT__csr_index = ((0x342U 
                                              == (0xfffU 
                                                  & (IData)(vlSelf->top__DOT__IDU__DOT__imm)))
                                              ? 3U : 
                                             ((0x300U 
                                               == (0xfffU 
                                                   & (IData)(vlSelf->top__DOT__IDU__DOT__imm)))
                                               ? 2U
                                               : (0x341U 
                                                  == 
                                                  (0xfffU 
                                                   & (IData)(vlSelf->top__DOT__IDU__DOT__imm)))));
    vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1 = ((IData)(top__DOT__IDU__DOT___conflict_es_rs1_T_4) 
                                                   & (((((0x1fU 
                                                          & (vlSelf->top__DOT__IDU__DOT__inst 
                                                             >> 0xfU)) 
                                                         == (IData)(vlSelf->top__DOT__LSU__DOT__ms_rf_dst)) 
                                                        & (0U 
                                                           != 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                                               >> 0xfU)))) 
                                                       & (IData)(vlSelf->top__DOT__LSU_io_ms_rf_we)) 
                                                      & (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid)));
    vlSelf->top__DOT__IDU__DOT__conflict_ws_rs1 = ((IData)(top__DOT__IDU__DOT___conflict_es_rs1_T_4) 
                                                   & (((((0x1fU 
                                                          & (vlSelf->top__DOT__IDU__DOT__inst 
                                                             >> 0xfU)) 
                                                         == (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_dst)) 
                                                        & (0U 
                                                           != 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                                               >> 0xfU)))) 
                                                       & (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we)) 
                                                      & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)));
    vlSelf->top__DOT__IDU__DOT__conflict_es_rs2 = (
                                                   ((((~ (IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)) 
                                                      | (0x44U 
                                                         == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))) 
                                                     | (0x45U 
                                                        == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))) 
                                                    | (3U 
                                                       == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))) 
                                                   & (((((IData)(vlSelf->top__DOT__IDU__DOT__rs2) 
                                                         == (IData)(vlSelf->top__DOT__EXU__DOT__es_rd)) 
                                                        & (0U 
                                                           != (IData)(vlSelf->top__DOT__IDU__DOT__rs2))) 
                                                       & (IData)(vlSelf->top__DOT__EXU__DOT__es_rf_we)) 
                                                      & (IData)(vlSelf->top__DOT__EXU__DOT__es_valid)));
    top__DOT__IDU__DOT___conflict_es_rs2_T_6 = (1U 
                                                & ((((~ (IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)) 
                                                     | (0x44U 
                                                        == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))) 
                                                    | (0x45U 
                                                       == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))) 
                                                   | (3U 
                                                      == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))));
    vlSelf->top__DOT__LSU_io_ms_fwd_res = ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                            ? vlSelf->top__DOT__LSU__DOT__rdata
                                            : vlSelf->top__DOT__LSU__DOT__ms_res);
    vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data 
        = vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg
        [((2U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
           ? 0U : ((0x3eU == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))
                    ? 1U : (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)))];
    vlSelf->top__DOT__IDU__DOT__conflict_ms_rs2 = ((IData)(top__DOT__IDU__DOT___conflict_es_rs2_T_6) 
                                                   & (((((IData)(vlSelf->top__DOT__IDU__DOT__rs2) 
                                                         == (IData)(vlSelf->top__DOT__LSU__DOT__ms_rf_dst)) 
                                                        & (0U 
                                                           != (IData)(vlSelf->top__DOT__IDU__DOT__rs2))) 
                                                       & (IData)(vlSelf->top__DOT__LSU_io_ms_rf_we)) 
                                                      & (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid)));
    vlSelf->top__DOT__IDU__DOT__conflict_ws_rs2 = ((IData)(top__DOT__IDU__DOT___conflict_es_rs2_T_6) 
                                                   & (((((IData)(vlSelf->top__DOT__IDU__DOT__rs2) 
                                                         == (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_dst)) 
                                                        & (0U 
                                                           != (IData)(vlSelf->top__DOT__IDU__DOT__rs2))) 
                                                       & (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we)) 
                                                      & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)));
    top__DOT__IDU__DOT___rdata1_T_1 = ((IData)(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1)
                                        ? vlSelf->top__DOT__LSU_io_ms_fwd_res
                                        : ((IData)(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs1)
                                            ? vlSelf->top__DOT__WBU__DOT__ws_res
                                            : ((0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__IDU__DOT__inst 
                                                    >> 0xfU)))
                                                ? 0ULL
                                                : vlSelf->top__DOT__Register__DOT__Reg
                                               [(0x1fU 
                                                 & (vlSelf->top__DOT__IDU__DOT__inst 
                                                    >> 0xfU))])));
    vlSelf->top__DOT__IDU__DOT___rdata2_T_1 = ((IData)(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs2)
                                                ? vlSelf->top__DOT__LSU_io_ms_fwd_res
                                                : ((IData)(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs2)
                                                    ? vlSelf->top__DOT__WBU__DOT__ws_res
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->top__DOT__IDU_io_raddr2))
                                                     ? 0ULL
                                                     : 
                                                    vlSelf->top__DOT__Register__DOT__Reg
                                                    [vlSelf->top__DOT__IDU_io_raddr2])));
    top__DOT__IDU__DOT___ds_ready_go_T_33 = (1U & (
                                                   ((((IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2) 
                                                      & ((IData)(vlSelf->top__DOT__EXU__DOT__es_valid) 
                                                         & (~ (IData)(vlSelf->top__DOT__EXU_io_es_ld)))) 
                                                     | (((~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2)) 
                                                         & (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs2)) 
                                                        & (IData)(vlSelf->top__DOT__LSU_io_ms_to_ws_valid))) 
                                                    | (((~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2)) 
                                                        & (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs2))) 
                                                       & (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs2))) 
                                                   | (~ 
                                                      (((IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs2)) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs2)))));
    if (vlSelf->top__DOT__IDU__DOT__conflict_es_rs1) {
        top__DOT__IDU__DOT___br_taken_T = (((QData)((IData)(
                                                            vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])));
        vlSelf->top__DOT__IDU__DOT__rdata1 = (((QData)((IData)(
                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])));
    } else {
        top__DOT__IDU__DOT___br_taken_T = top__DOT__IDU__DOT___rdata1_T_1;
        vlSelf->top__DOT__IDU__DOT__rdata1 = top__DOT__IDU__DOT___rdata1_T_1;
    }
    if (vlSelf->top__DOT__IDU__DOT__conflict_es_rs2) {
        top__DOT__IDU__DOT___br_taken_T_1 = (((QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])));
        vlSelf->top__DOT__IDU__DOT__rdata2 = (((QData)((IData)(
                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])));
    } else {
        top__DOT__IDU__DOT___br_taken_T_1 = vlSelf->top__DOT__IDU__DOT___rdata2_T_1;
        vlSelf->top__DOT__IDU__DOT__rdata2 = vlSelf->top__DOT__IDU__DOT___rdata2_T_1;
    }
    vlSelf->top__DOT__IDU_io_ds_ready_go = ((((((IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1) 
                                                & ((IData)(vlSelf->top__DOT__EXU__DOT__es_valid) 
                                                   & (~ (IData)(vlSelf->top__DOT__EXU_io_es_ld)))) 
                                               | (((~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1)) 
                                                   & (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1)) 
                                                  & (IData)(vlSelf->top__DOT__LSU_io_ms_to_ws_valid))) 
                                              | (((~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1)) 
                                                  & (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1))) 
                                                 & (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs1))) 
                                             | (~ (
                                                   ((IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1)) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs1)))) 
                                            & (IData)(top__DOT__IDU__DOT___ds_ready_go_T_33));
    vlSelf->top__DOT__IDU__DOT__ds_ready_go = ((((((IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1) 
                                                   & ((IData)(vlSelf->top__DOT__EXU__DOT__es_valid) 
                                                      & (~ (IData)(vlSelf->top__DOT__EXU_io_es_ld)))) 
                                                  | (((~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1)) 
                                                      & (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1)) 
                                                     & (IData)(vlSelf->top__DOT__LSU_io_ms_to_ws_valid))) 
                                                 | (((~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1)) 
                                                     & (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1))) 
                                                    & (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs1))) 
                                                | (~ 
                                                   (((IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1)) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs1)))) 
                                               & (IData)(top__DOT__IDU__DOT___ds_ready_go_T_33));
    vlSelf->top__DOT__IDU__DOT__src1 = ((IData)(vlSelf->top__DOT__IDU__DOT__src1_is_pc)
                                         ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                         : vlSelf->top__DOT__IDU__DOT__rdata1);
    vlSelf->top__DOT__IDU__DOT__br_taken = ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst)) 
                                            | ((0x67U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst)) 
                                               | ((0x1063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 
                                                  (top__DOT__IDU__DOT___br_taken_T 
                                                   != top__DOT__IDU__DOT___br_taken_T_1)
                                                   : 
                                                  ((0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 
                                                   (top__DOT__IDU__DOT___br_taken_T 
                                                    == top__DOT__IDU__DOT___br_taken_T_1)
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst))
                                                     ? 
                                                    VL_GTES_IQQ(1,64,64, top__DOT__IDU__DOT___br_taken_T, top__DOT__IDU__DOT___br_taken_T_1)
                                                     : 
                                                    ((0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__IDU__DOT__inst))
                                                      ? 
                                                     VL_LTS_IQQ(1,64,64, top__DOT__IDU__DOT___br_taken_T, top__DOT__IDU__DOT___br_taken_T_1)
                                                      : 
                                                     ((0x6063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst))
                                                       ? 
                                                      (vlSelf->top__DOT__IDU__DOT__rdata1 
                                                       < vlSelf->top__DOT__IDU__DOT__rdata2)
                                                       : 
                                                      ((0x7063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst))
                                                        ? 
                                                       (vlSelf->top__DOT__IDU__DOT__rdata1 
                                                        >= vlSelf->top__DOT__IDU__DOT__rdata2)
                                                        : 
                                                       ((0x73U 
                                                         == vlSelf->top__DOT__IDU__DOT__inst) 
                                                        | (0x30200073U 
                                                           == vlSelf->top__DOT__IDU__DOT__inst))))))))));
    vlSelf->top__DOT__IDU_io_ds_to_es_valid = ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid) 
                                               & (IData)(vlSelf->top__DOT__IDU__DOT__ds_ready_go));
    vlSelf->top__DOT__IDU__DOT__ds_allowin = (1U & 
                                              ((~ (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)) 
                                               | ((IData)(vlSelf->top__DOT__IDU__DOT__ds_ready_go) 
                                                  & (IData)(vlSelf->top__DOT__EXU__DOT__es_allowin))));
    vlSelf->top__DOT__IDU_io_ds_allowin = (1U & ((~ (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)) 
                                                 | ((IData)(vlSelf->top__DOT__IDU__DOT__ds_ready_go) 
                                                    & (IData)(vlSelf->top__DOT__EXU__DOT__es_allowin))));
    top__DOT__IDU__DOT___br_target_T_1 = (vlSelf->top__DOT__IDU__DOT__src1 
                                          + ((IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)
                                              ? vlSelf->top__DOT__IDU__DOT__imm
                                              : vlSelf->top__DOT__IDU__DOT__rdata2));
    vlSelf->top__DOT__IDU__DOT___T_7 = ((IData)(vlSelf->top__DOT__IDU__DOT__br_taken) 
                                        & (~ (IData)(vlSelf->top__DOT__IDU__DOT__br_taken_cancel)));
    vlSelf->top__DOT__IDU_io_br_taken = (((IData)(vlSelf->top__DOT__IDU__DOT__br_taken) 
                                          & (IData)(vlSelf->top__DOT__IDU__DOT__ds_ready_go)) 
                                         & (~ (IData)(vlSelf->top__DOT__IDU__DOT__br_taken_cancel)));
    vlSelf->top__DOT__IDU__DOT___GEN_1 = (((((IData)(vlSelf->top__DOT__IDU__DOT__ds_allowin) 
                                             & (IData)(vlSelf->top__DOT__IFU__DOT__fs_valid)) 
                                            & (IData)(vlSelf->top__DOT__IDU__DOT__br_taken)) 
                                           & (~ (IData)(vlSelf->top__DOT__IDU__DOT__br_taken_cancel))) 
                                          | ((~ (((IData)(vlSelf->top__DOT__IDU__DOT__ds_allowin) 
                                                  & (IData)(vlSelf->top__DOT__IFU__DOT__fs_valid)) 
                                                 & (IData)(vlSelf->top__DOT__IDU__DOT__br_taken_cancel))) 
                                             & (IData)(vlSelf->top__DOT__IDU__DOT__br_taken_cancel)));
    vlSelf->top__DOT__IFU__DOT___GEN_2 = ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                          | ((~ (((IData)(vlSelf->top__DOT__IFU__DOT__fs_valid) 
                                                  & (IData)(vlSelf->top__DOT__IDU_io_ds_allowin)) 
                                                 & (IData)(vlSelf->top__DOT__IFU__DOT__cache_init))) 
                                             & (IData)(vlSelf->top__DOT__IFU__DOT__cache_init)));
    top__DOT__IFU__DOT___T_1 = ((IData)(vlSelf->top__DOT__IFU__DOT__fs_valid) 
                                & (IData)(vlSelf->top__DOT__IDU_io_ds_allowin));
    vlSelf->top__DOT__IDU_io_br_target = ((0x67U == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__IDU__DOT__inst))
                                           ? (0xfffffffffffffffeULL 
                                              & top__DOT__IDU__DOT___br_target_T_1)
                                           : ((0x73U 
                                               == vlSelf->top__DOT__IDU__DOT__inst)
                                               ? vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data
                                               : ((0x30200073U 
                                                   == vlSelf->top__DOT__IDU__DOT__inst)
                                                   ? 
                                                  (4ULL 
                                                   + vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data)
                                                   : top__DOT__IDU__DOT___br_target_T_1)));
    vlSelf->top__DOT__IFU_io_axi_out_rready = (1U & 
                                               ((~ (IData)(vlSelf->top__DOT__IFU__DOT__fs_valid)) 
                                                | (IData)(top__DOT__IFU__DOT___T_1)));
    vlSelf->top__DOT__i_cache__DOT___GEN_132 = ((IData)(vlSelf->top__DOT__IFU_io_axi_out_rready)
                                                 ? 0U
                                                 : (IData)(vlSelf->top__DOT__i_cache__DOT__state));
    vlSelf->top__DOT__i_cache_io_to_axi_rready = ((1U 
                                                   != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                  & ((2U 
                                                      == (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                     | (IData)(vlSelf->top__DOT__IFU_io_axi_out_rready)));
    vlSelf->top__DOT__arbiter_io_axi_out_rready = (
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                                     ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_rready)
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                      ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_rready)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid) 
                                                      & (IData)(vlSelf->top__DOT__i_cache_io_to_axi_rready))))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                     ? (IData)(vlSelf->top__DOT__i_cache_io_to_axi_rready)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                      ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_rready)
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                                      & (IData)(vlSelf->top__DOT__d_cache_io_to_axi_rready)))));
    if ((0U == (IData)(vlSelf->top__DOT__axi__DOT__arlen))) {
        vlSelf->top__DOT__axi__DOT___GEN_31 = (0xffU 
                                               & (IData)(vlSelf->top__DOT__axi__DOT__arlen));
        vlSelf->top__DOT__axi__DOT___GEN_27 = ((IData)(vlSelf->top__DOT__arbiter_io_axi_out_rready)
                                                ? 0U
                                                : (IData)(vlSelf->top__DOT__axi__DOT__state));
        vlSelf->top__DOT__axi__DOT___GEN_29 = ((~ (IData)(vlSelf->top__DOT__arbiter_io_axi_out_rready)) 
                                               & (IData)(vlSelf->top__DOT__axi__DOT__axi_rvalid));
        vlSelf->top__DOT__axi__DOT___GEN_30 = vlSelf->top__DOT__axi__DOT__araddr;
    } else {
        vlSelf->top__DOT__axi__DOT___GEN_31 = (0xffU 
                                               & ((IData)(vlSelf->top__DOT__arbiter_io_axi_out_rready)
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__axi__DOT__arlen) 
                                                   - (IData)(1U))
                                                   : (IData)(vlSelf->top__DOT__axi__DOT__arlen)));
        vlSelf->top__DOT__axi__DOT___GEN_27 = vlSelf->top__DOT__axi__DOT__state;
        vlSelf->top__DOT__axi__DOT___GEN_29 = vlSelf->top__DOT__axi__DOT__axi_rvalid;
        vlSelf->top__DOT__axi__DOT___GEN_30 = ((IData)(vlSelf->top__DOT__arbiter_io_axi_out_rready)
                                                ? (8ULL 
                                                   + vlSelf->top__DOT__axi__DOT__araddr)
                                                : vlSelf->top__DOT__axi__DOT__araddr);
    }
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void Vtop___024root___settle__TOP__4(Vtop___024root* vlSelf) VL_ATTR_COLD;

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtop___024root___settle__TOP__5(vlSelf);
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_inst = VL_RAND_RESET_I(32);
    vlSelf->io_pc = VL_RAND_RESET_Q(64);
    vlSelf->io_step = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IFU_io_axi_out_rready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_io_ds_to_es_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_io_br_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_io_br_target = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU_io_ds_allowin = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_io_ds_ready_go = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_io_raddr2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__EXU_io_es_ld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU_io_ms_to_ws_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU_io_ms_rf_we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU_io_ms_fwd_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__LSU_io_axi_out_arvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU_io_axi_out_awvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__arbiter_io_lsu_axi_out_rlast = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__arbiter_io_axi_out_arvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__arbiter_io_axi_out_rready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__arbiter_io_axi_out_awvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__arbiter_io_axi_out_wvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__arbiter_io_axi_out_bready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache_io_to_ifu_rvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache_io_to_axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache_io_to_axi_rready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache_io_to_axi_arlen = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache_io_to_axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache_io_to_axi_rready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache_io_to_axi_awaddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache_io_to_axi_awlen = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache_io_to_axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache_io_to_axi_wdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache_io_to_axi_wstrb = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache_io_to_axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache_io_to_axi_bready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi_io_axi_out_rlast = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__diff_step = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__Register__DOT__Reg[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__IFU__DOT__br_target = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IFU__DOT__fs_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IFU__DOT__fs_pc_next = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IFU__DOT__cache_init = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IFU__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IFU__DOT__fs_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IFU__DOT__fs_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT__ds_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__ds_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT__br_taken_cancel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__src1_is_pc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT___inst_type_T_155 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__IDU__DOT___inst_type_T_170 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__IDU__DOT___inst_type_T_188 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__IDU__DOT__csr_write = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__IDU__DOT__conflict_es_rs1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__conflict_ws_rs1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__src2_is_imm = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__IDU__DOT__conflict_es_rs2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__conflict_ms_rs2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__conflict_ws_rs2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__ds_ready_go = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__ds_allowin = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__rdata1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU__DOT___rdata2_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU__DOT__rdata2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU__DOT__br_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT___T_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU__DOT___ALUop_T_147 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__IDU__DOT___ALUop_T_162 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__IDU__DOT___ALUop_T_176 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__IDU__DOT__csr_index = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__IDU__DOT__src1 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__es_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__es_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__es_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__EXU__DOT__es_rf_we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__src1_value = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__src2_value = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__store_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__st_wstrb = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__EXU__DOT__st_we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__ld_we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__ALUop = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__load_type = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__EXU__DOT__es_allowin = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__sub_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__sra_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__srlw_res = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__sllw_res = VL_RAND_RESET_Q(63);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT___mluw_res_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT___divw_res_T_4 = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__divuw_res = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__remw_res = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__remuw_res = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT___alu_res_T_80 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(127, vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res);
    vlSelf->top__DOT__LSU__DOT__ms_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__ms_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__LSU__DOT__ms_rf_we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__ms_rf_dst = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__LSU__DOT__ms_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__LSU__DOT__store_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__LSU__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__wstrb = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__LSU__DOT__ren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__maddr = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__LSU__DOT__load_type = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__LSU__DOT__ms_ready_go = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__ms_allowin = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__WBU__DOT__ws_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__WBU__DOT__ws_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__WBU__DOT__ws_rf_we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__WBU__DOT__ws_rf_dst = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__WBU__DOT__ws_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__arbiter__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__arbiter__DOT___GEN_0 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__arbiter__DOT___GEN_94 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__arbiter__DOT___GEN_126 = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_0);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_2);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_3);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_4);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_5);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_6);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_7);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_9);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_10);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_11);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_12);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_13);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_14);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_15);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_0);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_2);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_3);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_4);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_5);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_6);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_7);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_9);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_10);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_11);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_12);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_13);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_14);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_15);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_0);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_2);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_3);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_4);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_5);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_6);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_7);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_9);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_10);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_11);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_12);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_13);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_14);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_15);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_0);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_2);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_3);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_4);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_5);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_6);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_7);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_9);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_10);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_11);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_12);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_13);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_14);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_15);
    vlSelf->top__DOT__i_cache__DOT__tag_0_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_8 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_9 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_10 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_11 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_12 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_13 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_14 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_15 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_8 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_9 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_10 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_11 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_12 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_13 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_14 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_15 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_8 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_9 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_10 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_11 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_12 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_13 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_14 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_15 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_8 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_9 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_10 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_11 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_12 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_13 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_14 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_15 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__valid_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__receive_data_0 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__i_cache__DOT__receive_data_1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__i_cache__DOT__receive_num = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__i_cache__DOT__quene_0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_3 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_4 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_5 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_6 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_7 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_8 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_9 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_10 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_11 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_12 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_13 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_14 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_15 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__way0_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__way1_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__way2_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__way3_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__unuse_way = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__i_cache__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__i_cache__DOT___GEN_132 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__i_cache__DOT___GEN_138 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__i_cache__DOT___GEN_139 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__i_cache__DOT___GEN_140 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__i_cache__DOT___GEN_141 = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_153);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_154);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_155);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_156);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_157);
    vlSelf->top__DOT__i_cache__DOT___GEN_158 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_159 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_160 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_161 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_162 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_163 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_164 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_165 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_166 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_167 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_168 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_169 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_170 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_171 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_172 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_173 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_174 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_175 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_176 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_177 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_178 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_179 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_180 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_181 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_182 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_183 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_184 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_185 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_186 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_187 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_188 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_189 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_205 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_206 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_207 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_208 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_209 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_210 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_211 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_212 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_213 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_214 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_215 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_216 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_217 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_218 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_219 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_220 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_221 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_222);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_223);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_224);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_225);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_226);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_227);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_228);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_229);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_230);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_231);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_232);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_233);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_234);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_235);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_236);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_237);
    vlSelf->top__DOT__i_cache__DOT___GEN_238 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_239 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_240 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_241 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_242 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_243 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_244 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_245 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_246 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_247 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_248 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_249 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_250 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_251 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_252 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_253 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_254 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_255 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_256 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_257 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_258 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_259 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_260 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_261 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_262 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_263 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_264 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_265 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_266 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_267 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_268 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_269 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_270 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_271 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_272 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_273 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_274 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_275 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_276 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_277 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_278 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_279 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_280 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_281 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_282 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_283 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_284 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_285 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_286);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_287);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_288);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_289);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_290);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_291);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_292);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_293);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_294);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_295);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_296);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_297);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_298);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_299);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_300);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_301);
    vlSelf->top__DOT__i_cache__DOT___GEN_302 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_303 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_304 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_305 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_306 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_307 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_308 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_309 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_310 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_311 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_312 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_313 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_314 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_315 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_316 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_317 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_318 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_319 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_320 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_321 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_322 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_323 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_324 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_325 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_326 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_327 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_328 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_329 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_330 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_331 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_332 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_333 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_334 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_335 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_336 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_337 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_338 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_339 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_340 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_341 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_342 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_343 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_344 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_345 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_346 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_347 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_348 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_349 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_350);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_351);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_352);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_353);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_354);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_355);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_356);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_357);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_358);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_359);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_360);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_361);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_362);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_363);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_364);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_365);
    vlSelf->top__DOT__i_cache__DOT___GEN_366 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_367 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_368 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_369 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_370 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_371 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_372 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_373 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_374 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_375 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_376 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_377 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_378 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_379 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_380 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_381 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_382 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_383 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_384 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_385 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_386 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_387 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_388 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_389 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_390 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_391 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_392 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_393 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_394 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_395 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_396 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_397 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_398 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_399 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_400 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_401 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_402 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_403 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_404 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_405 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_406 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_407 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_408 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_409 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_410 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_411 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_412 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_413 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2015 = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2016);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2017);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2018);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2019);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2020);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2021);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2022);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2023);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2024);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2025);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2026);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2027);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2028);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2029);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2030);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2031);
    vlSelf->top__DOT__i_cache__DOT___GEN_2032 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2033 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2034 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2035 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2036 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2037 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2038 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2039 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2040 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2041 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2042 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2043 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2044 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2045 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2046 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2047 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2048 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2049 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2050 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2051 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2052 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2053 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2054 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2055 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2056 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2057 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2058 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2059 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2060 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2061 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2062 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2063 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2064 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2065 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2066 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2067 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2068 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2069 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2070 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2071 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2072 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2073 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2074 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2075 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2076 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2077 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2078 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2079 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2080);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2081);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2082);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2083);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2084);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2085);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2086);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2087);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2088);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2089);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2090);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2091);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2092);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2093);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2094);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2095);
    vlSelf->top__DOT__i_cache__DOT___GEN_2096 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2097 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2098 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2099 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2100 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2101 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2102 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2103 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2104 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2105 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2106 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2107 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2108 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2109 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2110 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2111 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2112 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2113 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2114 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2115 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2116 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2117 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2118 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2119 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2120 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2121 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2122 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2123 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2124 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2125 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2126 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2127 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2128);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2129);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2130);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2131);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2132);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2133);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2134);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2135);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2136);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2137);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2138);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2139);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2140);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2141);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2142);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2143);
    vlSelf->top__DOT__i_cache__DOT___GEN_2144 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2145 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2146 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2147 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2148 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2149 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2150 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2151 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2152 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2153 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2154 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2155 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2156 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2157 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2158 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2159 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2160 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2161 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2162 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2163 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2164 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2165 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2166 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2167 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2168 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2169 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2170 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2171 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2172 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2173 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2174 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2175 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2176);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2177);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2178);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2179);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2180);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2181);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2182);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2183);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2184);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2185);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2186);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2187);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2188);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2189);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2190);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2191);
    vlSelf->top__DOT__i_cache__DOT___GEN_2192 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2193 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2194 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2195 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2196 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2197 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2198 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2199 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2200 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2201 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2202 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2203 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2204 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2205 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2206 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2207 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2208 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2209 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2210 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2211 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2212 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2213 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2214 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2215 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2216 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2217 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2218 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2219 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2220 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2221 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2222 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2223 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___io_to_ifu_rdata_T_6);
    vlSelf->top__DOT__i_cache__DOT___GEN_2932 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_0);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_2);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_3);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_4);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_5);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_6);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_7);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_9);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_10);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_11);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_12);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_13);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_14);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_15);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_0);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_2);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_3);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_4);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_5);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_6);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_7);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_9);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_10);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_11);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_12);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_13);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_14);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_15);
    vlSelf->top__DOT__d_cache__DOT__tag_0_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_8 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_9 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_10 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_11 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_12 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_13 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_14 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_15 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_8 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_9 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_10 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_11 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_12 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_13 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_14 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_15 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__valid_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_1_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_1_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_1_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_1_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_1_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_1_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_1_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_1_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_1_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_1_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_1_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_1_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_1_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_1_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_1_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_1_15 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__write_back_data);
    vlSelf->top__DOT__d_cache__DOT__write_back_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__receive_data_0 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT__receive_data_1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT__receive_num = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__d_cache__DOT__quene_0 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT__quene_1 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT__quene_2 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT__quene_3 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT__quene_4 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT__quene_5 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT__quene_6 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT__quene_7 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT__quene_8 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT__quene_9 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT__quene_10 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT__quene_11 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT__quene_12 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT__quene_13 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT__quene_14 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT__quene_15 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT__wmask = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT___GEN_15 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__way0_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_47 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__way1_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__unuse_way = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__d_cache__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_64 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__d_cache__DOT___GEN_69 = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_88);
    VL_RAND_RESET_W(191, vlSelf->top__DOT__d_cache__DOT___ram_0_T_5);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_136);
    VL_RAND_RESET_W(191, vlSelf->top__DOT__d_cache__DOT___ram_1_T_5);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_203);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_204);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_205);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_206);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_207);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_208);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_209);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_210);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_211);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_212);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_213);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_214);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_215);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_216);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_217);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_218);
    vlSelf->top__DOT__d_cache__DOT___GEN_219 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_220 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_221 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_222 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_223 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_224 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_225 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_226 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_227 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_228 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_229 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_230 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_231 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_232 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_233 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_234 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_235);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_236);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_237);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_238);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_239);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_240);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_241);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_242);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_243);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_244);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_245);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_246);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_247);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_248);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_249);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_250);
    vlSelf->top__DOT__d_cache__DOT___GEN_251 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_252 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_253 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_254 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_255 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_256 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_257 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_258 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_259 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_260 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_261 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_262 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_263 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_264 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_265 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_266 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_277);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_278);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_279);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_280);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_281);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_282);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_283);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_284);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_285);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_286);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_287);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_288);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_289);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_290);
    vlSelf->top__DOT__d_cache__DOT___GEN_291 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_292 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_293 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_294 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_295 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_296 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_297 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_298 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_299 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_300 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_301 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_302 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_303 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_304 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_305 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_306 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_307 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_308 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_309 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_310 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_311 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_312 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_313 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_314 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_315 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_316 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_317 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_318 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_319 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_320 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_321 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_322 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_338 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_339 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_340 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_341 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_342 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_343 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_344 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_345 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_346 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_347 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_348 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_349 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_350 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_351 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_352 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_353 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_354 = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_355);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_356);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_357);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_358);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_359);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_360);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_361);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_362);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_363);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_364);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_365);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_366);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_367);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_368);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_369);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_370);
    vlSelf->top__DOT__d_cache__DOT___GEN_371 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_372 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_373 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_374 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_375 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_376 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_377 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_378 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_379 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_380 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_381 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_382 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_383 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_384 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_385 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_386 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_387 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_388 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_389 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_390 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_391 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_392 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_393 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_394 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_395 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_396 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_397 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_398 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_399 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_400 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_401 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_402 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_403 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_404 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_405 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_406 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_407 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_408 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_409 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_410 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_411 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_412 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_413 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_414 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_415 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_416 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_417 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_418 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_434 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_677 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1648 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT___GEN_1649 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT___GEN_1650 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__d_cache__DOT___GEN_1651 = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1652);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1653);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1654);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1655);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1656);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1657);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1658);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1659);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1660);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1661);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1662);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1663);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1664);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1665);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1666);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1667);
    vlSelf->top__DOT__d_cache__DOT___GEN_1668 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1669 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1670 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1671 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1672 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1673 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1674 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1675 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1676 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1677 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1678 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1679 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1680 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1681 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1682 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1683 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1684 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1685 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1686 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1687 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1688 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1689 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1690 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1691 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1692 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1693 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1694 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1695 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1696 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1697 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1698 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1699 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1700 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_1701 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_1702 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_1703 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_1704 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_1705 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_1706 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_1707 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_1708 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_1709 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_1710 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_1711 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_1712 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_1713 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_1714 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT___GEN_1715 = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1716);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1717);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1718);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1719);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1720);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1721);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1722);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1723);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1724);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1725);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1726);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1727);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1728);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1729);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1730);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1731);
    vlSelf->top__DOT__d_cache__DOT___GEN_1732 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1733 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1734 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1735 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1736 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1737 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1738 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1739 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1740 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1741 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1742 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1743 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1744 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1745 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1746 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1747 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_1748 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1749 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1750 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1751 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1752 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1753 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1754 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1755 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1756 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1757 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1758 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1759 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1760 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1761 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1762 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1763 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_1764);
    vlSelf->top__DOT__d_cache__DOT___GEN_1766 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1767 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1768 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1769 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1770 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1771 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1772 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1773 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1774 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1775 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1776 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1777 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1778 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1779 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1780 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1781 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1782 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1783 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1784 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1785 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1786 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1787 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1788 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1789 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1790 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1791 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1792 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1793 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1794 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1795 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1796 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1797 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_2253 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_2393 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_2408);
    vlSelf->top__DOT__d_cache__DOT___GEN_2486 = VL_RAND_RESET_Q(40);
    vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__axi__DOT__axi_wready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi__DOT__axi_bvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi__DOT__axi_rvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi__DOT__arlen = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__axi__DOT__awlen = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__axi__DOT__araddr = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__axi__DOT__awaddr = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__axi__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__axi__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi__DOT___GEN_14 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__axi__DOT___GEN_15 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__axi__DOT___GEN_18 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi__DOT___GEN_27 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__axi__DOT___GEN_29 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi__DOT___GEN_30 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__axi__DOT___GEN_31 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__axi__DOT___GEN_35 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__axi__DOT___GEN_36 = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_pmem_read__1__Rdata = 0;
    vlSelf->__Vdlyvset__top__DOT__Register__DOT__Reg__v0 = 0;
    vlSelf->__Vdly__top__DOT__IFU__DOT__fs_pc_next = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvdim0__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v0 = 0;
    vlSelf->__Vdlyvval__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v0 = 0;
    vlSelf->__Vdlyvval__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v1 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v1 = 0;
    vlSelf->__Vdly__top__DOT__arbiter__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__top__DOT__i_cache__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__top__DOT__axi__DOT__awlen = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__top__DOT__axi__DOT__state = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
