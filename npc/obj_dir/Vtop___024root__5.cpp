// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__15(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__15\n"); );
    // Variables
    VlWide<4>/*126:0*/ top__DOT__exu_step__DOT___io_res2rd_T_186;
    VlWide<3>/*95:0*/ __Vtemp91;
    VlWide<3>/*95:0*/ __Vtemp92;
    VlWide<3>/*95:0*/ __Vtemp94;
    VlWide<3>/*95:0*/ __Vtemp95;
    VlWide<3>/*95:0*/ __Vtemp96;
    VlWide<3>/*95:0*/ __Vtemp97;
    VlWide<4>/*127:0*/ __Vtemp98;
    VlWide<4>/*127:0*/ __Vtemp99;
    VlWide<4>/*127:0*/ __Vtemp100;
    VlWide<4>/*127:0*/ __Vtemp101;
    VlWide<4>/*127:0*/ __Vtemp102;
    VlWide<4>/*127:0*/ __Vtemp103;
    VlWide<4>/*127:0*/ __Vtemp104;
    VlWide<4>/*127:0*/ __Vtemp105;
    VlWide<4>/*127:0*/ __Vtemp106;
    VlWide<4>/*127:0*/ __Vtemp107;
    VlWide<4>/*127:0*/ __Vtemp108;
    VlWide<4>/*127:0*/ __Vtemp109;
    VlWide<4>/*127:0*/ __Vtemp110;
    VlWide<4>/*127:0*/ __Vtemp111;
    VlWide<4>/*127:0*/ __Vtemp112;
    VlWide<4>/*127:0*/ __Vtemp137;
    VlWide<4>/*127:0*/ __Vtemp138;
    VlWide<4>/*127:0*/ __Vtemp139;
    VlWide<4>/*127:0*/ __Vtemp140;
    VlWide<4>/*127:0*/ __Vtemp141;
    VlWide<4>/*127:0*/ __Vtemp142;
    VlWide<4>/*127:0*/ __Vtemp143;
    VlWide<4>/*127:0*/ __Vtemp144;
    VlWide<4>/*127:0*/ __Vtemp145;
    VlWide<4>/*127:0*/ __Vtemp146;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_162;
    // Body
    if (vlSelf->top__DOT__d_cache__DOT__way0_hit) {
        vlSelf->top__DOT__d_cache__DOT___GEN_1750 = 
            ((0x4bU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_75);
        vlSelf->top__DOT__d_cache__DOT___GEN_1751 = 
            ((0x4cU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_76);
        vlSelf->top__DOT__d_cache__DOT___GEN_1752 = 
            ((0x4dU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_77);
        vlSelf->top__DOT__d_cache__DOT___GEN_1753 = 
            ((0x4eU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_78);
        vlSelf->top__DOT__d_cache__DOT___GEN_1754 = 
            ((0x4fU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_79);
        vlSelf->top__DOT__d_cache__DOT___GEN_1755 = 
            ((0x50U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_80);
        vlSelf->top__DOT__d_cache__DOT___GEN_1756 = 
            ((0x51U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_81);
        vlSelf->top__DOT__d_cache__DOT___GEN_1757 = 
            ((0x52U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_82);
        vlSelf->top__DOT__d_cache__DOT___GEN_1758 = 
            ((0x53U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_83);
        vlSelf->top__DOT__d_cache__DOT___GEN_1759 = 
            ((0x54U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_84);
        vlSelf->top__DOT__d_cache__DOT___GEN_1760 = 
            ((0x55U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_85);
        vlSelf->top__DOT__d_cache__DOT___GEN_1761 = 
            ((0x56U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_86);
        vlSelf->top__DOT__d_cache__DOT___GEN_1762 = 
            ((0x57U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_87);
        vlSelf->top__DOT__d_cache__DOT___GEN_1763 = 
            ((0x58U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_88);
        vlSelf->top__DOT__d_cache__DOT___GEN_1764 = 
            ((0x59U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_89);
        vlSelf->top__DOT__d_cache__DOT___GEN_1765 = 
            ((0x5aU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_90);
        vlSelf->top__DOT__d_cache__DOT___GEN_1766 = 
            ((0x5bU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_91);
        vlSelf->top__DOT__d_cache__DOT___GEN_1767 = 
            ((0x5cU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_92);
        vlSelf->top__DOT__d_cache__DOT___GEN_1768 = 
            ((0x5dU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_93);
        vlSelf->top__DOT__d_cache__DOT___GEN_1769 = 
            ((0x5eU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_94);
        vlSelf->top__DOT__d_cache__DOT___GEN_1770 = 
            ((0x5fU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_95);
        vlSelf->top__DOT__d_cache__DOT___GEN_1771 = 
            ((0x60U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_96);
        vlSelf->top__DOT__d_cache__DOT___GEN_1772 = 
            ((0x61U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_97);
        vlSelf->top__DOT__d_cache__DOT___GEN_1773 = 
            ((0x62U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_98);
        vlSelf->top__DOT__d_cache__DOT___GEN_1774 = 
            ((0x63U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_99);
        vlSelf->top__DOT__d_cache__DOT___GEN_1775 = 
            ((0x64U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_100);
        vlSelf->top__DOT__d_cache__DOT___GEN_1776 = 
            ((0x65U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_101);
        vlSelf->top__DOT__d_cache__DOT___GEN_1777 = 
            ((0x66U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_102);
        vlSelf->top__DOT__d_cache__DOT___GEN_1778 = 
            ((0x67U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_103);
        vlSelf->top__DOT__d_cache__DOT___GEN_1779 = 
            ((0x68U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_104);
        vlSelf->top__DOT__d_cache__DOT___GEN_1780 = 
            ((0x69U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_105);
        vlSelf->top__DOT__d_cache__DOT___GEN_1781 = 
            ((0x6aU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_106);
        vlSelf->top__DOT__d_cache__DOT___GEN_1782 = 
            ((0x6bU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_107);
        vlSelf->top__DOT__d_cache__DOT___GEN_1783 = 
            ((0x6cU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_108);
        vlSelf->top__DOT__d_cache__DOT___GEN_1784 = 
            ((0x6dU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_109);
        vlSelf->top__DOT__d_cache__DOT___GEN_1785 = 
            ((0x6eU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_110);
        vlSelf->top__DOT__d_cache__DOT___GEN_1786 = 
            ((0x6fU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_111);
        vlSelf->top__DOT__d_cache__DOT___GEN_1787 = 
            ((0x70U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_112);
        vlSelf->top__DOT__d_cache__DOT___GEN_1788 = 
            ((0x71U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_113);
        vlSelf->top__DOT__d_cache__DOT___GEN_1789 = 
            ((0x72U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_114);
        vlSelf->top__DOT__d_cache__DOT___GEN_1790 = 
            ((0x73U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_115);
        vlSelf->top__DOT__d_cache__DOT___GEN_1791 = 
            ((0x74U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_116);
        vlSelf->top__DOT__d_cache__DOT___GEN_1792 = 
            ((0x75U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_117);
        vlSelf->top__DOT__d_cache__DOT___GEN_1793 = 
            ((0x76U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_118);
        vlSelf->top__DOT__d_cache__DOT___GEN_1794 = 
            ((0x77U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_119);
        vlSelf->top__DOT__d_cache__DOT___GEN_1795 = 
            ((0x78U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_120);
        vlSelf->top__DOT__d_cache__DOT___GEN_1796 = 
            ((0x79U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_121);
        vlSelf->top__DOT__d_cache__DOT___GEN_1797 = 
            ((0x7aU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_122);
        vlSelf->top__DOT__d_cache__DOT___GEN_1798 = 
            ((0x7bU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_123);
        vlSelf->top__DOT__d_cache__DOT___GEN_1799 = 
            ((0x7cU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_124);
        vlSelf->top__DOT__d_cache__DOT___GEN_1800 = 
            ((0x7dU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_125);
        vlSelf->top__DOT__d_cache__DOT___GEN_1801 = 
            ((0x7eU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_126);
        vlSelf->top__DOT__d_cache__DOT___GEN_1802 = 
            ((0x7fU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
              ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
              : vlSelf->top__DOT__d_cache__DOT__ram_0_127);
        vlSelf->top__DOT__d_cache__DOT___GEN_1931 = vlSelf->top__DOT__d_cache__DOT__ram_1_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_1932 = vlSelf->top__DOT__d_cache__DOT__ram_1_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_1933 = vlSelf->top__DOT__d_cache__DOT__ram_1_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_1934 = vlSelf->top__DOT__d_cache__DOT__ram_1_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_1935 = vlSelf->top__DOT__d_cache__DOT__ram_1_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_1936 = vlSelf->top__DOT__d_cache__DOT__ram_1_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_1937 = vlSelf->top__DOT__d_cache__DOT__ram_1_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_1938 = vlSelf->top__DOT__d_cache__DOT__ram_1_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_1939 = vlSelf->top__DOT__d_cache__DOT__ram_1_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_1940 = vlSelf->top__DOT__d_cache__DOT__ram_1_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_1941 = vlSelf->top__DOT__d_cache__DOT__ram_1_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_1942 = vlSelf->top__DOT__d_cache__DOT__ram_1_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_1943 = vlSelf->top__DOT__d_cache__DOT__ram_1_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_1944 = vlSelf->top__DOT__d_cache__DOT__ram_1_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_1945 = vlSelf->top__DOT__d_cache__DOT__ram_1_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_1946 = vlSelf->top__DOT__d_cache__DOT__ram_1_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_1947 = vlSelf->top__DOT__d_cache__DOT__ram_1_16;
        vlSelf->top__DOT__d_cache__DOT___GEN_1948 = vlSelf->top__DOT__d_cache__DOT__ram_1_17;
        vlSelf->top__DOT__d_cache__DOT___GEN_1949 = vlSelf->top__DOT__d_cache__DOT__ram_1_18;
        vlSelf->top__DOT__d_cache__DOT___GEN_1950 = vlSelf->top__DOT__d_cache__DOT__ram_1_19;
        vlSelf->top__DOT__d_cache__DOT___GEN_1951 = vlSelf->top__DOT__d_cache__DOT__ram_1_20;
        vlSelf->top__DOT__d_cache__DOT___GEN_1952 = vlSelf->top__DOT__d_cache__DOT__ram_1_21;
        vlSelf->top__DOT__d_cache__DOT___GEN_1953 = vlSelf->top__DOT__d_cache__DOT__ram_1_22;
        vlSelf->top__DOT__d_cache__DOT___GEN_1954 = vlSelf->top__DOT__d_cache__DOT__ram_1_23;
        vlSelf->top__DOT__d_cache__DOT___GEN_1955 = vlSelf->top__DOT__d_cache__DOT__ram_1_24;
        vlSelf->top__DOT__d_cache__DOT___GEN_1956 = vlSelf->top__DOT__d_cache__DOT__ram_1_25;
        vlSelf->top__DOT__d_cache__DOT___GEN_1957 = vlSelf->top__DOT__d_cache__DOT__ram_1_26;
        vlSelf->top__DOT__d_cache__DOT___GEN_1958 = vlSelf->top__DOT__d_cache__DOT__ram_1_27;
        vlSelf->top__DOT__d_cache__DOT___GEN_1959 = vlSelf->top__DOT__d_cache__DOT__ram_1_28;
        vlSelf->top__DOT__d_cache__DOT___GEN_1960 = vlSelf->top__DOT__d_cache__DOT__ram_1_29;
        vlSelf->top__DOT__d_cache__DOT___GEN_1961 = vlSelf->top__DOT__d_cache__DOT__ram_1_30;
        vlSelf->top__DOT__d_cache__DOT___GEN_1962 = vlSelf->top__DOT__d_cache__DOT__ram_1_31;
        vlSelf->top__DOT__d_cache__DOT___GEN_1963 = vlSelf->top__DOT__d_cache__DOT__ram_1_32;
        vlSelf->top__DOT__d_cache__DOT___GEN_1964 = vlSelf->top__DOT__d_cache__DOT__ram_1_33;
        vlSelf->top__DOT__d_cache__DOT___GEN_1965 = vlSelf->top__DOT__d_cache__DOT__ram_1_34;
        vlSelf->top__DOT__d_cache__DOT___GEN_1966 = vlSelf->top__DOT__d_cache__DOT__ram_1_35;
        vlSelf->top__DOT__d_cache__DOT___GEN_1967 = vlSelf->top__DOT__d_cache__DOT__ram_1_36;
        vlSelf->top__DOT__d_cache__DOT___GEN_1968 = vlSelf->top__DOT__d_cache__DOT__ram_1_37;
        vlSelf->top__DOT__d_cache__DOT___GEN_1969 = vlSelf->top__DOT__d_cache__DOT__ram_1_38;
        vlSelf->top__DOT__d_cache__DOT___GEN_1970 = vlSelf->top__DOT__d_cache__DOT__ram_1_39;
        vlSelf->top__DOT__d_cache__DOT___GEN_1971 = vlSelf->top__DOT__d_cache__DOT__ram_1_40;
        vlSelf->top__DOT__d_cache__DOT___GEN_1972 = vlSelf->top__DOT__d_cache__DOT__ram_1_41;
        vlSelf->top__DOT__d_cache__DOT___GEN_1973 = vlSelf->top__DOT__d_cache__DOT__ram_1_42;
        vlSelf->top__DOT__d_cache__DOT___GEN_1974 = vlSelf->top__DOT__d_cache__DOT__ram_1_43;
        vlSelf->top__DOT__d_cache__DOT___GEN_1975 = vlSelf->top__DOT__d_cache__DOT__ram_1_44;
        vlSelf->top__DOT__d_cache__DOT___GEN_1976 = vlSelf->top__DOT__d_cache__DOT__ram_1_45;
        vlSelf->top__DOT__d_cache__DOT___GEN_1977 = vlSelf->top__DOT__d_cache__DOT__ram_1_46;
        vlSelf->top__DOT__d_cache__DOT___GEN_1978 = vlSelf->top__DOT__d_cache__DOT__ram_1_47;
        vlSelf->top__DOT__d_cache__DOT___GEN_1979 = vlSelf->top__DOT__d_cache__DOT__ram_1_48;
        vlSelf->top__DOT__d_cache__DOT___GEN_1980 = vlSelf->top__DOT__d_cache__DOT__ram_1_49;
        vlSelf->top__DOT__d_cache__DOT___GEN_1981 = vlSelf->top__DOT__d_cache__DOT__ram_1_50;
        vlSelf->top__DOT__d_cache__DOT___GEN_1982 = vlSelf->top__DOT__d_cache__DOT__ram_1_51;
        vlSelf->top__DOT__d_cache__DOT___GEN_1983 = vlSelf->top__DOT__d_cache__DOT__ram_1_52;
        vlSelf->top__DOT__d_cache__DOT___GEN_1984 = vlSelf->top__DOT__d_cache__DOT__ram_1_53;
        vlSelf->top__DOT__d_cache__DOT___GEN_1985 = vlSelf->top__DOT__d_cache__DOT__ram_1_54;
        vlSelf->top__DOT__d_cache__DOT___GEN_1986 = vlSelf->top__DOT__d_cache__DOT__ram_1_55;
        vlSelf->top__DOT__d_cache__DOT___GEN_1987 = vlSelf->top__DOT__d_cache__DOT__ram_1_56;
        vlSelf->top__DOT__d_cache__DOT___GEN_1988 = vlSelf->top__DOT__d_cache__DOT__ram_1_57;
        vlSelf->top__DOT__d_cache__DOT___GEN_1989 = vlSelf->top__DOT__d_cache__DOT__ram_1_58;
        vlSelf->top__DOT__d_cache__DOT___GEN_1990 = vlSelf->top__DOT__d_cache__DOT__ram_1_59;
        vlSelf->top__DOT__d_cache__DOT___GEN_1991 = vlSelf->top__DOT__d_cache__DOT__ram_1_60;
        vlSelf->top__DOT__d_cache__DOT___GEN_1992 = vlSelf->top__DOT__d_cache__DOT__ram_1_61;
        vlSelf->top__DOT__d_cache__DOT___GEN_1993 = vlSelf->top__DOT__d_cache__DOT__ram_1_62;
        vlSelf->top__DOT__d_cache__DOT___GEN_1994 = vlSelf->top__DOT__d_cache__DOT__ram_1_63;
        vlSelf->top__DOT__d_cache__DOT___GEN_1995 = vlSelf->top__DOT__d_cache__DOT__ram_1_64;
        vlSelf->top__DOT__d_cache__DOT___GEN_1996 = vlSelf->top__DOT__d_cache__DOT__ram_1_65;
        vlSelf->top__DOT__d_cache__DOT___GEN_1997 = vlSelf->top__DOT__d_cache__DOT__ram_1_66;
        vlSelf->top__DOT__d_cache__DOT___GEN_1998 = vlSelf->top__DOT__d_cache__DOT__ram_1_67;
        vlSelf->top__DOT__d_cache__DOT___GEN_1999 = vlSelf->top__DOT__d_cache__DOT__ram_1_68;
        vlSelf->top__DOT__d_cache__DOT___GEN_2000 = vlSelf->top__DOT__d_cache__DOT__ram_1_69;
        vlSelf->top__DOT__d_cache__DOT___GEN_2001 = vlSelf->top__DOT__d_cache__DOT__ram_1_70;
        vlSelf->top__DOT__d_cache__DOT___GEN_2002 = vlSelf->top__DOT__d_cache__DOT__ram_1_71;
        vlSelf->top__DOT__d_cache__DOT___GEN_2003 = vlSelf->top__DOT__d_cache__DOT__ram_1_72;
        vlSelf->top__DOT__d_cache__DOT___GEN_2004 = vlSelf->top__DOT__d_cache__DOT__ram_1_73;
        vlSelf->top__DOT__d_cache__DOT___GEN_2005 = vlSelf->top__DOT__d_cache__DOT__ram_1_74;
        vlSelf->top__DOT__d_cache__DOT___GEN_2006 = vlSelf->top__DOT__d_cache__DOT__ram_1_75;
        vlSelf->top__DOT__d_cache__DOT___GEN_2007 = vlSelf->top__DOT__d_cache__DOT__ram_1_76;
        vlSelf->top__DOT__d_cache__DOT___GEN_2008 = vlSelf->top__DOT__d_cache__DOT__ram_1_77;
        vlSelf->top__DOT__d_cache__DOT___GEN_2009 = vlSelf->top__DOT__d_cache__DOT__ram_1_78;
        vlSelf->top__DOT__d_cache__DOT___GEN_2010 = vlSelf->top__DOT__d_cache__DOT__ram_1_79;
        vlSelf->top__DOT__d_cache__DOT___GEN_2011 = vlSelf->top__DOT__d_cache__DOT__ram_1_80;
        vlSelf->top__DOT__d_cache__DOT___GEN_2012 = vlSelf->top__DOT__d_cache__DOT__ram_1_81;
        vlSelf->top__DOT__d_cache__DOT___GEN_2013 = vlSelf->top__DOT__d_cache__DOT__ram_1_82;
        vlSelf->top__DOT__d_cache__DOT___GEN_2014 = vlSelf->top__DOT__d_cache__DOT__ram_1_83;
        vlSelf->top__DOT__d_cache__DOT___GEN_2015 = vlSelf->top__DOT__d_cache__DOT__ram_1_84;
        vlSelf->top__DOT__d_cache__DOT___GEN_2016 = vlSelf->top__DOT__d_cache__DOT__ram_1_85;
        vlSelf->top__DOT__d_cache__DOT___GEN_2017 = vlSelf->top__DOT__d_cache__DOT__ram_1_86;
        vlSelf->top__DOT__d_cache__DOT___GEN_2018 = vlSelf->top__DOT__d_cache__DOT__ram_1_87;
        vlSelf->top__DOT__d_cache__DOT___GEN_2019 = vlSelf->top__DOT__d_cache__DOT__ram_1_88;
        vlSelf->top__DOT__d_cache__DOT___GEN_2020 = vlSelf->top__DOT__d_cache__DOT__ram_1_89;
        vlSelf->top__DOT__d_cache__DOT___GEN_2021 = vlSelf->top__DOT__d_cache__DOT__ram_1_90;
        vlSelf->top__DOT__d_cache__DOT___GEN_2022 = vlSelf->top__DOT__d_cache__DOT__ram_1_91;
        vlSelf->top__DOT__d_cache__DOT___GEN_2023 = vlSelf->top__DOT__d_cache__DOT__ram_1_92;
        vlSelf->top__DOT__d_cache__DOT___GEN_2024 = vlSelf->top__DOT__d_cache__DOT__ram_1_93;
        vlSelf->top__DOT__d_cache__DOT___GEN_2025 = vlSelf->top__DOT__d_cache__DOT__ram_1_94;
        vlSelf->top__DOT__d_cache__DOT___GEN_2026 = vlSelf->top__DOT__d_cache__DOT__ram_1_95;
        vlSelf->top__DOT__d_cache__DOT___GEN_2027 = vlSelf->top__DOT__d_cache__DOT__ram_1_96;
        vlSelf->top__DOT__d_cache__DOT___GEN_2028 = vlSelf->top__DOT__d_cache__DOT__ram_1_97;
        vlSelf->top__DOT__d_cache__DOT___GEN_2029 = vlSelf->top__DOT__d_cache__DOT__ram_1_98;
        vlSelf->top__DOT__d_cache__DOT___GEN_2030 = vlSelf->top__DOT__d_cache__DOT__ram_1_99;
        vlSelf->top__DOT__d_cache__DOT___GEN_2031 = vlSelf->top__DOT__d_cache__DOT__ram_1_100;
        vlSelf->top__DOT__d_cache__DOT___GEN_2032 = vlSelf->top__DOT__d_cache__DOT__ram_1_101;
        vlSelf->top__DOT__d_cache__DOT___GEN_2033 = vlSelf->top__DOT__d_cache__DOT__ram_1_102;
        vlSelf->top__DOT__d_cache__DOT___GEN_2034 = vlSelf->top__DOT__d_cache__DOT__ram_1_103;
        vlSelf->top__DOT__d_cache__DOT___GEN_2035 = vlSelf->top__DOT__d_cache__DOT__ram_1_104;
        vlSelf->top__DOT__d_cache__DOT___GEN_2036 = vlSelf->top__DOT__d_cache__DOT__ram_1_105;
        vlSelf->top__DOT__d_cache__DOT___GEN_2037 = vlSelf->top__DOT__d_cache__DOT__ram_1_106;
        vlSelf->top__DOT__d_cache__DOT___GEN_2038 = vlSelf->top__DOT__d_cache__DOT__ram_1_107;
        vlSelf->top__DOT__d_cache__DOT___GEN_2039 = vlSelf->top__DOT__d_cache__DOT__ram_1_108;
        vlSelf->top__DOT__d_cache__DOT___GEN_2040 = vlSelf->top__DOT__d_cache__DOT__ram_1_109;
        vlSelf->top__DOT__d_cache__DOT___GEN_2041 = vlSelf->top__DOT__d_cache__DOT__ram_1_110;
        vlSelf->top__DOT__d_cache__DOT___GEN_2042 = vlSelf->top__DOT__d_cache__DOT__ram_1_111;
        vlSelf->top__DOT__d_cache__DOT___GEN_2043 = vlSelf->top__DOT__d_cache__DOT__ram_1_112;
        vlSelf->top__DOT__d_cache__DOT___GEN_2044 = vlSelf->top__DOT__d_cache__DOT__ram_1_113;
        vlSelf->top__DOT__d_cache__DOT___GEN_2045 = vlSelf->top__DOT__d_cache__DOT__ram_1_114;
        vlSelf->top__DOT__d_cache__DOT___GEN_2046 = vlSelf->top__DOT__d_cache__DOT__ram_1_115;
        vlSelf->top__DOT__d_cache__DOT___GEN_2047 = vlSelf->top__DOT__d_cache__DOT__ram_1_116;
        vlSelf->top__DOT__d_cache__DOT___GEN_2048 = vlSelf->top__DOT__d_cache__DOT__ram_1_117;
        vlSelf->top__DOT__d_cache__DOT___GEN_2049 = vlSelf->top__DOT__d_cache__DOT__ram_1_118;
        vlSelf->top__DOT__d_cache__DOT___GEN_2050 = vlSelf->top__DOT__d_cache__DOT__ram_1_119;
        vlSelf->top__DOT__d_cache__DOT___GEN_2051 = vlSelf->top__DOT__d_cache__DOT__ram_1_120;
        vlSelf->top__DOT__d_cache__DOT___GEN_2052 = vlSelf->top__DOT__d_cache__DOT__ram_1_121;
        vlSelf->top__DOT__d_cache__DOT___GEN_2053 = vlSelf->top__DOT__d_cache__DOT__ram_1_122;
        vlSelf->top__DOT__d_cache__DOT___GEN_2054 = vlSelf->top__DOT__d_cache__DOT__ram_1_123;
        vlSelf->top__DOT__d_cache__DOT___GEN_2055 = vlSelf->top__DOT__d_cache__DOT__ram_1_124;
        vlSelf->top__DOT__d_cache__DOT___GEN_2056 = vlSelf->top__DOT__d_cache__DOT__ram_1_125;
        vlSelf->top__DOT__d_cache__DOT___GEN_2057 = vlSelf->top__DOT__d_cache__DOT__ram_1_126;
        vlSelf->top__DOT__d_cache__DOT___GEN_2058 = vlSelf->top__DOT__d_cache__DOT__ram_1_127;
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_1750 = vlSelf->top__DOT__d_cache__DOT__ram_0_75;
        vlSelf->top__DOT__d_cache__DOT___GEN_1751 = vlSelf->top__DOT__d_cache__DOT__ram_0_76;
        vlSelf->top__DOT__d_cache__DOT___GEN_1752 = vlSelf->top__DOT__d_cache__DOT__ram_0_77;
        vlSelf->top__DOT__d_cache__DOT___GEN_1753 = vlSelf->top__DOT__d_cache__DOT__ram_0_78;
        vlSelf->top__DOT__d_cache__DOT___GEN_1754 = vlSelf->top__DOT__d_cache__DOT__ram_0_79;
        vlSelf->top__DOT__d_cache__DOT___GEN_1755 = vlSelf->top__DOT__d_cache__DOT__ram_0_80;
        vlSelf->top__DOT__d_cache__DOT___GEN_1756 = vlSelf->top__DOT__d_cache__DOT__ram_0_81;
        vlSelf->top__DOT__d_cache__DOT___GEN_1757 = vlSelf->top__DOT__d_cache__DOT__ram_0_82;
        vlSelf->top__DOT__d_cache__DOT___GEN_1758 = vlSelf->top__DOT__d_cache__DOT__ram_0_83;
        vlSelf->top__DOT__d_cache__DOT___GEN_1759 = vlSelf->top__DOT__d_cache__DOT__ram_0_84;
        vlSelf->top__DOT__d_cache__DOT___GEN_1760 = vlSelf->top__DOT__d_cache__DOT__ram_0_85;
        vlSelf->top__DOT__d_cache__DOT___GEN_1761 = vlSelf->top__DOT__d_cache__DOT__ram_0_86;
        vlSelf->top__DOT__d_cache__DOT___GEN_1762 = vlSelf->top__DOT__d_cache__DOT__ram_0_87;
        vlSelf->top__DOT__d_cache__DOT___GEN_1763 = vlSelf->top__DOT__d_cache__DOT__ram_0_88;
        vlSelf->top__DOT__d_cache__DOT___GEN_1764 = vlSelf->top__DOT__d_cache__DOT__ram_0_89;
        vlSelf->top__DOT__d_cache__DOT___GEN_1765 = vlSelf->top__DOT__d_cache__DOT__ram_0_90;
        vlSelf->top__DOT__d_cache__DOT___GEN_1766 = vlSelf->top__DOT__d_cache__DOT__ram_0_91;
        vlSelf->top__DOT__d_cache__DOT___GEN_1767 = vlSelf->top__DOT__d_cache__DOT__ram_0_92;
        vlSelf->top__DOT__d_cache__DOT___GEN_1768 = vlSelf->top__DOT__d_cache__DOT__ram_0_93;
        vlSelf->top__DOT__d_cache__DOT___GEN_1769 = vlSelf->top__DOT__d_cache__DOT__ram_0_94;
        vlSelf->top__DOT__d_cache__DOT___GEN_1770 = vlSelf->top__DOT__d_cache__DOT__ram_0_95;
        vlSelf->top__DOT__d_cache__DOT___GEN_1771 = vlSelf->top__DOT__d_cache__DOT__ram_0_96;
        vlSelf->top__DOT__d_cache__DOT___GEN_1772 = vlSelf->top__DOT__d_cache__DOT__ram_0_97;
        vlSelf->top__DOT__d_cache__DOT___GEN_1773 = vlSelf->top__DOT__d_cache__DOT__ram_0_98;
        vlSelf->top__DOT__d_cache__DOT___GEN_1774 = vlSelf->top__DOT__d_cache__DOT__ram_0_99;
        vlSelf->top__DOT__d_cache__DOT___GEN_1775 = vlSelf->top__DOT__d_cache__DOT__ram_0_100;
        vlSelf->top__DOT__d_cache__DOT___GEN_1776 = vlSelf->top__DOT__d_cache__DOT__ram_0_101;
        vlSelf->top__DOT__d_cache__DOT___GEN_1777 = vlSelf->top__DOT__d_cache__DOT__ram_0_102;
        vlSelf->top__DOT__d_cache__DOT___GEN_1778 = vlSelf->top__DOT__d_cache__DOT__ram_0_103;
        vlSelf->top__DOT__d_cache__DOT___GEN_1779 = vlSelf->top__DOT__d_cache__DOT__ram_0_104;
        vlSelf->top__DOT__d_cache__DOT___GEN_1780 = vlSelf->top__DOT__d_cache__DOT__ram_0_105;
        vlSelf->top__DOT__d_cache__DOT___GEN_1781 = vlSelf->top__DOT__d_cache__DOT__ram_0_106;
        vlSelf->top__DOT__d_cache__DOT___GEN_1782 = vlSelf->top__DOT__d_cache__DOT__ram_0_107;
        vlSelf->top__DOT__d_cache__DOT___GEN_1783 = vlSelf->top__DOT__d_cache__DOT__ram_0_108;
        vlSelf->top__DOT__d_cache__DOT___GEN_1784 = vlSelf->top__DOT__d_cache__DOT__ram_0_109;
        vlSelf->top__DOT__d_cache__DOT___GEN_1785 = vlSelf->top__DOT__d_cache__DOT__ram_0_110;
        vlSelf->top__DOT__d_cache__DOT___GEN_1786 = vlSelf->top__DOT__d_cache__DOT__ram_0_111;
        vlSelf->top__DOT__d_cache__DOT___GEN_1787 = vlSelf->top__DOT__d_cache__DOT__ram_0_112;
        vlSelf->top__DOT__d_cache__DOT___GEN_1788 = vlSelf->top__DOT__d_cache__DOT__ram_0_113;
        vlSelf->top__DOT__d_cache__DOT___GEN_1789 = vlSelf->top__DOT__d_cache__DOT__ram_0_114;
        vlSelf->top__DOT__d_cache__DOT___GEN_1790 = vlSelf->top__DOT__d_cache__DOT__ram_0_115;
        vlSelf->top__DOT__d_cache__DOT___GEN_1791 = vlSelf->top__DOT__d_cache__DOT__ram_0_116;
        vlSelf->top__DOT__d_cache__DOT___GEN_1792 = vlSelf->top__DOT__d_cache__DOT__ram_0_117;
        vlSelf->top__DOT__d_cache__DOT___GEN_1793 = vlSelf->top__DOT__d_cache__DOT__ram_0_118;
        vlSelf->top__DOT__d_cache__DOT___GEN_1794 = vlSelf->top__DOT__d_cache__DOT__ram_0_119;
        vlSelf->top__DOT__d_cache__DOT___GEN_1795 = vlSelf->top__DOT__d_cache__DOT__ram_0_120;
        vlSelf->top__DOT__d_cache__DOT___GEN_1796 = vlSelf->top__DOT__d_cache__DOT__ram_0_121;
        vlSelf->top__DOT__d_cache__DOT___GEN_1797 = vlSelf->top__DOT__d_cache__DOT__ram_0_122;
        vlSelf->top__DOT__d_cache__DOT___GEN_1798 = vlSelf->top__DOT__d_cache__DOT__ram_0_123;
        vlSelf->top__DOT__d_cache__DOT___GEN_1799 = vlSelf->top__DOT__d_cache__DOT__ram_0_124;
        vlSelf->top__DOT__d_cache__DOT___GEN_1800 = vlSelf->top__DOT__d_cache__DOT__ram_0_125;
        vlSelf->top__DOT__d_cache__DOT___GEN_1801 = vlSelf->top__DOT__d_cache__DOT__ram_0_126;
        vlSelf->top__DOT__d_cache__DOT___GEN_1802 = vlSelf->top__DOT__d_cache__DOT__ram_0_127;
        vlSelf->top__DOT__d_cache__DOT___GEN_1931 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_0)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_0);
        vlSelf->top__DOT__d_cache__DOT___GEN_1932 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((1U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_1)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_1);
        vlSelf->top__DOT__d_cache__DOT___GEN_1933 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((2U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_2)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_2);
        vlSelf->top__DOT__d_cache__DOT___GEN_1934 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((3U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_3)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_3);
        vlSelf->top__DOT__d_cache__DOT___GEN_1935 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((4U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_4)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_4);
        vlSelf->top__DOT__d_cache__DOT___GEN_1936 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((5U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_5)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_5);
        vlSelf->top__DOT__d_cache__DOT___GEN_1937 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((6U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_6)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_6);
        vlSelf->top__DOT__d_cache__DOT___GEN_1938 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((7U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_7)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_7);
        vlSelf->top__DOT__d_cache__DOT___GEN_1939 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((8U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_8)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_8);
        vlSelf->top__DOT__d_cache__DOT___GEN_1940 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((9U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_9)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_9);
        vlSelf->top__DOT__d_cache__DOT___GEN_1941 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xaU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_10)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_10);
        vlSelf->top__DOT__d_cache__DOT___GEN_1942 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xbU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_11)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_11);
        vlSelf->top__DOT__d_cache__DOT___GEN_1943 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xcU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_12)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_12);
        vlSelf->top__DOT__d_cache__DOT___GEN_1944 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xdU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_13)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_13);
        vlSelf->top__DOT__d_cache__DOT___GEN_1945 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xeU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_14)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_14);
        vlSelf->top__DOT__d_cache__DOT___GEN_1946 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xfU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_15)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_15);
        vlSelf->top__DOT__d_cache__DOT___GEN_1947 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x10U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_16)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_16);
        vlSelf->top__DOT__d_cache__DOT___GEN_1948 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x11U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_17)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_17);
        vlSelf->top__DOT__d_cache__DOT___GEN_1949 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x12U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_18)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_18);
        vlSelf->top__DOT__d_cache__DOT___GEN_1950 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x13U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_19)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_19);
        vlSelf->top__DOT__d_cache__DOT___GEN_1951 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x14U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_20)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_20);
        vlSelf->top__DOT__d_cache__DOT___GEN_1952 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x15U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_21)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_21);
        vlSelf->top__DOT__d_cache__DOT___GEN_1953 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x16U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_22)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_22);
        vlSelf->top__DOT__d_cache__DOT___GEN_1954 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x17U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_23)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_23);
        vlSelf->top__DOT__d_cache__DOT___GEN_1955 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x18U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_24)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_24);
        vlSelf->top__DOT__d_cache__DOT___GEN_1956 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x19U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_25)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_25);
        vlSelf->top__DOT__d_cache__DOT___GEN_1957 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1aU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_26)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_26);
        vlSelf->top__DOT__d_cache__DOT___GEN_1958 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1bU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_27)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_27);
        vlSelf->top__DOT__d_cache__DOT___GEN_1959 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1cU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_28)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_28);
        vlSelf->top__DOT__d_cache__DOT___GEN_1960 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1dU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_29)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_29);
        vlSelf->top__DOT__d_cache__DOT___GEN_1961 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1eU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_30)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_30);
        vlSelf->top__DOT__d_cache__DOT___GEN_1962 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1fU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_31)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_31);
        vlSelf->top__DOT__d_cache__DOT___GEN_1963 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x20U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_32)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_32);
        vlSelf->top__DOT__d_cache__DOT___GEN_1964 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x21U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_33)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_33);
        vlSelf->top__DOT__d_cache__DOT___GEN_1965 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x22U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_34)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_34);
        vlSelf->top__DOT__d_cache__DOT___GEN_1966 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x23U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_35)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_35);
        vlSelf->top__DOT__d_cache__DOT___GEN_1967 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x24U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_36)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_36);
        vlSelf->top__DOT__d_cache__DOT___GEN_1968 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x25U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_37)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_37);
        vlSelf->top__DOT__d_cache__DOT___GEN_1969 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x26U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_38)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_38);
        vlSelf->top__DOT__d_cache__DOT___GEN_1970 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x27U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_39)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_39);
        vlSelf->top__DOT__d_cache__DOT___GEN_1971 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x28U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_40)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_40);
        vlSelf->top__DOT__d_cache__DOT___GEN_1972 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x29U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_41)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_41);
        vlSelf->top__DOT__d_cache__DOT___GEN_1973 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2aU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_42)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_42);
        vlSelf->top__DOT__d_cache__DOT___GEN_1974 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2bU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_43)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_43);
        vlSelf->top__DOT__d_cache__DOT___GEN_1975 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2cU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_44)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_44);
        vlSelf->top__DOT__d_cache__DOT___GEN_1976 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2dU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_45)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_45);
        vlSelf->top__DOT__d_cache__DOT___GEN_1977 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2eU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_46)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_46);
        vlSelf->top__DOT__d_cache__DOT___GEN_1978 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2fU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_47)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_47);
        vlSelf->top__DOT__d_cache__DOT___GEN_1979 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x30U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_48)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_48);
        vlSelf->top__DOT__d_cache__DOT___GEN_1980 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x31U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_49)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_49);
        vlSelf->top__DOT__d_cache__DOT___GEN_1981 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x32U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_50)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_50);
        vlSelf->top__DOT__d_cache__DOT___GEN_1982 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x33U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_51)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_51);
        vlSelf->top__DOT__d_cache__DOT___GEN_1983 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x34U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_52)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_52);
        vlSelf->top__DOT__d_cache__DOT___GEN_1984 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x35U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_53)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_53);
        vlSelf->top__DOT__d_cache__DOT___GEN_1985 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x36U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_54)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_54);
        vlSelf->top__DOT__d_cache__DOT___GEN_1986 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x37U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_55)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_55);
        vlSelf->top__DOT__d_cache__DOT___GEN_1987 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x38U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_56)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_56);
        vlSelf->top__DOT__d_cache__DOT___GEN_1988 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x39U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_57)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_57);
        vlSelf->top__DOT__d_cache__DOT___GEN_1989 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3aU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_58)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_58);
        vlSelf->top__DOT__d_cache__DOT___GEN_1990 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3bU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_59)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_59);
        vlSelf->top__DOT__d_cache__DOT___GEN_1991 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3cU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_60)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_60);
        vlSelf->top__DOT__d_cache__DOT___GEN_1992 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3dU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_61)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_61);
        vlSelf->top__DOT__d_cache__DOT___GEN_1993 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3eU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_62)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_62);
        vlSelf->top__DOT__d_cache__DOT___GEN_1994 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3fU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_63)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_63);
        vlSelf->top__DOT__d_cache__DOT___GEN_1995 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x40U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_64)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_64);
        vlSelf->top__DOT__d_cache__DOT___GEN_1996 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x41U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_65)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_65);
        vlSelf->top__DOT__d_cache__DOT___GEN_1997 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x42U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_66)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_66);
        vlSelf->top__DOT__d_cache__DOT___GEN_1998 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x43U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_67)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_67);
        vlSelf->top__DOT__d_cache__DOT___GEN_1999 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x44U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_68)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_68);
        vlSelf->top__DOT__d_cache__DOT___GEN_2000 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x45U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_69)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_69);
        vlSelf->top__DOT__d_cache__DOT___GEN_2001 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x46U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_70)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_70);
        vlSelf->top__DOT__d_cache__DOT___GEN_2002 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x47U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_71)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_71);
        vlSelf->top__DOT__d_cache__DOT___GEN_2003 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x48U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_72)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_72);
        vlSelf->top__DOT__d_cache__DOT___GEN_2004 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x49U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_73)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_73);
        vlSelf->top__DOT__d_cache__DOT___GEN_2005 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x4aU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_74)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_74);
        vlSelf->top__DOT__d_cache__DOT___GEN_2006 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x4bU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_75)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_75);
        vlSelf->top__DOT__d_cache__DOT___GEN_2007 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x4cU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_76)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_76);
        vlSelf->top__DOT__d_cache__DOT___GEN_2008 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x4dU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_77)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_77);
        vlSelf->top__DOT__d_cache__DOT___GEN_2009 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x4eU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_78)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_78);
        vlSelf->top__DOT__d_cache__DOT___GEN_2010 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x4fU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_79)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_79);
        vlSelf->top__DOT__d_cache__DOT___GEN_2011 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x50U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_80)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_80);
        vlSelf->top__DOT__d_cache__DOT___GEN_2012 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x51U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_81)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_81);
        vlSelf->top__DOT__d_cache__DOT___GEN_2013 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x52U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_82)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_82);
        vlSelf->top__DOT__d_cache__DOT___GEN_2014 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x53U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_83)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_83);
        vlSelf->top__DOT__d_cache__DOT___GEN_2015 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x54U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_84)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_84);
        vlSelf->top__DOT__d_cache__DOT___GEN_2016 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x55U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_85)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_85);
        vlSelf->top__DOT__d_cache__DOT___GEN_2017 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x56U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_86)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_86);
        vlSelf->top__DOT__d_cache__DOT___GEN_2018 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x57U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_87)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_87);
        vlSelf->top__DOT__d_cache__DOT___GEN_2019 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x58U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_88)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_88);
        vlSelf->top__DOT__d_cache__DOT___GEN_2020 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x59U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_89)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_89);
        vlSelf->top__DOT__d_cache__DOT___GEN_2021 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x5aU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_90)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_90);
        vlSelf->top__DOT__d_cache__DOT___GEN_2022 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x5bU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_91)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_91);
        vlSelf->top__DOT__d_cache__DOT___GEN_2023 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x5cU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_92)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_92);
        vlSelf->top__DOT__d_cache__DOT___GEN_2024 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x5dU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_93)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_93);
        vlSelf->top__DOT__d_cache__DOT___GEN_2025 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x5eU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_94)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_94);
        vlSelf->top__DOT__d_cache__DOT___GEN_2026 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x5fU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_95)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_95);
        vlSelf->top__DOT__d_cache__DOT___GEN_2027 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x60U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_96)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_96);
        vlSelf->top__DOT__d_cache__DOT___GEN_2028 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x61U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_97)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_97);
        vlSelf->top__DOT__d_cache__DOT___GEN_2029 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x62U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_98)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_98);
        vlSelf->top__DOT__d_cache__DOT___GEN_2030 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x63U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_99)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_99);
        vlSelf->top__DOT__d_cache__DOT___GEN_2031 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x64U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_100)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_100);
        vlSelf->top__DOT__d_cache__DOT___GEN_2032 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x65U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_101)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_101);
        vlSelf->top__DOT__d_cache__DOT___GEN_2033 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x66U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_102)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_102);
        vlSelf->top__DOT__d_cache__DOT___GEN_2034 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x67U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_103)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_103);
        vlSelf->top__DOT__d_cache__DOT___GEN_2035 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x68U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_104)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_104);
        vlSelf->top__DOT__d_cache__DOT___GEN_2036 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x69U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_105)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_105);
        vlSelf->top__DOT__d_cache__DOT___GEN_2037 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x6aU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_106)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_106);
        vlSelf->top__DOT__d_cache__DOT___GEN_2038 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x6bU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_107)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_107);
        vlSelf->top__DOT__d_cache__DOT___GEN_2039 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x6cU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_108)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_108);
        vlSelf->top__DOT__d_cache__DOT___GEN_2040 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x6dU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_109)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_109);
        vlSelf->top__DOT__d_cache__DOT___GEN_2041 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x6eU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_110)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_110);
        vlSelf->top__DOT__d_cache__DOT___GEN_2042 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x6fU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_111)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_111);
        vlSelf->top__DOT__d_cache__DOT___GEN_2043 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x70U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_112)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_112);
        vlSelf->top__DOT__d_cache__DOT___GEN_2044 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x71U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_113)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_113);
        vlSelf->top__DOT__d_cache__DOT___GEN_2045 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x72U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_114)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_114);
        vlSelf->top__DOT__d_cache__DOT___GEN_2046 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x73U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_115)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_115);
        vlSelf->top__DOT__d_cache__DOT___GEN_2047 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x74U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_116)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_116);
        vlSelf->top__DOT__d_cache__DOT___GEN_2048 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x75U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_117)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_117);
        vlSelf->top__DOT__d_cache__DOT___GEN_2049 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x76U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_118)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_118);
        vlSelf->top__DOT__d_cache__DOT___GEN_2050 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x77U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_119)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_119);
        vlSelf->top__DOT__d_cache__DOT___GEN_2051 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x78U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_120)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_120);
        vlSelf->top__DOT__d_cache__DOT___GEN_2052 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x79U == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_121)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_121);
        vlSelf->top__DOT__d_cache__DOT___GEN_2053 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x7aU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_122)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_122);
        vlSelf->top__DOT__d_cache__DOT___GEN_2054 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x7bU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_123)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_123);
        vlSelf->top__DOT__d_cache__DOT___GEN_2055 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x7cU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_124)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_124);
        vlSelf->top__DOT__d_cache__DOT___GEN_2056 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x7dU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_125)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_125);
        vlSelf->top__DOT__d_cache__DOT___GEN_2057 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x7eU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_126)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_126);
        vlSelf->top__DOT__d_cache__DOT___GEN_2058 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x7fU == (0x7fU & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                  ? vlSelf->top__DOT__d_cache__DOT___ram_0_T_3
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_127)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_127);
    }
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
                                                                : vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_132)))))))))))))));
    VL_EXTENDS_WQ(65,64, __Vtemp91, vlSelf->top__DOT__exu_step__DOT__src1_value);
    __Vtemp92[0U] = __Vtemp91[0U];
    __Vtemp92[1U] = __Vtemp91[1U];
    __Vtemp92[2U] = (1U & __Vtemp91[2U]);
    VL_EXTENDS_WQ(65,64, __Vtemp94, vlSelf->top__DOT__exu_step__DOT__src2_value);
    __Vtemp95[0U] = __Vtemp94[0U];
    __Vtemp95[1U] = __Vtemp94[1U];
    __Vtemp95[2U] = (1U & __Vtemp94[2U]);
    VL_DIVS_WWW(65, __Vtemp96, __Vtemp92, __Vtemp95);
    __Vtemp97[0U] = __Vtemp96[0U];
    __Vtemp97[1U] = __Vtemp96[1U];
    __Vtemp97[2U] = (1U & __Vtemp96[2U]);
    VL_EXTEND_WW(127,65, __Vtemp98, __Vtemp97);
    VL_EXTEND_WQ(127,64, __Vtemp99, VL_DIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value));
    VL_EXTEND_WQ(127,64, __Vtemp100, (((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT___divw_res_T_4 
                                                                    >> 0x1fU)))
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___divw_res_T_4))));
    VL_EXTEND_WQ(127,64, __Vtemp101, (((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2 
                                                                    >> 0x1fU)))
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2))));
    VL_EXTEND_WQ(128,64, __Vtemp102, vlSelf->top__DOT__exu_step__DOT__src1_value);
    VL_EXTEND_WQ(128,64, __Vtemp103, vlSelf->top__DOT__exu_step__DOT__src2_value);
    VL_MUL_W(4, __Vtemp104, __Vtemp102, __Vtemp103);
    VL_EXTEND_WQ(127,64, __Vtemp105, (((QData)((IData)(
                                                       __Vtemp104[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vtemp104[0U]))));
    VL_EXTEND_WQ(127,64, __Vtemp106, vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_74);
    VL_EXTEND_WQ(127,64, __Vtemp107, vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_69);
    VL_EXTEND_WQ(127,64, __Vtemp108, vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_74);
    VL_EXTEND_WQ(127,64, __Vtemp109, vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_69);
    VL_EXTEND_WQ(127,64, __Vtemp110, vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_59);
    VL_EXTEND_WQ(127,64, __Vtemp111, vlSelf->top__DOT__exu_step__DOT__srl_res);
    VL_EXTEND_WQ(127,64, __Vtemp112, top__DOT__exu_step__DOT___io_res2rd_T_162);
    if ((0x31U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))) {
        top__DOT__exu_step__DOT___io_res2rd_T_186[0U] 
            = __Vtemp98[0U];
        top__DOT__exu_step__DOT___io_res2rd_T_186[1U] 
            = __Vtemp98[1U];
        top__DOT__exu_step__DOT___io_res2rd_T_186[2U] 
            = __Vtemp98[2U];
        top__DOT__exu_step__DOT___io_res2rd_T_186[3U] 
            = __Vtemp98[3U];
    } else {
        top__DOT__exu_step__DOT___io_res2rd_T_186[0U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp99[0U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                    ? __Vtemp100[0U]
                                    : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                        ? __Vtemp101[0U]
                                        : ((0x11U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                            ? __Vtemp105[0U]
                                            : ((0x1dU 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                ? __Vtemp106[0U]
                                                : (
                                                   (0x1cU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp107[0U]
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp108[0U]
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp109[0U]
                                                      : 
                                                     ((0x19U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      __Vtemp110[0U]
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                        ? 
                                                       __Vtemp111[0U]
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                         ? 
                                                        vlSelf->top__DOT__exu_step__DOT__sll_res[0U]
                                                         : 
                                                        __Vtemp112[0U])))))))))));
        top__DOT__exu_step__DOT___io_res2rd_T_186[1U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp99[1U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                    ? __Vtemp100[1U]
                                    : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                        ? __Vtemp101[1U]
                                        : ((0x11U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                            ? __Vtemp105[1U]
                                            : ((0x1dU 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                ? __Vtemp106[1U]
                                                : (
                                                   (0x1cU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp107[1U]
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp108[1U]
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp109[1U]
                                                      : 
                                                     ((0x19U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      __Vtemp110[1U]
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                        ? 
                                                       __Vtemp111[1U]
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                         ? 
                                                        vlSelf->top__DOT__exu_step__DOT__sll_res[1U]
                                                         : 
                                                        __Vtemp112[1U])))))))))));
        top__DOT__exu_step__DOT___io_res2rd_T_186[2U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp99[2U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                    ? __Vtemp100[2U]
                                    : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                        ? __Vtemp101[2U]
                                        : ((0x11U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                            ? __Vtemp105[2U]
                                            : ((0x1dU 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                ? __Vtemp106[2U]
                                                : (
                                                   (0x1cU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp107[2U]
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp108[2U]
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp109[2U]
                                                      : 
                                                     ((0x19U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      __Vtemp110[2U]
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                        ? 
                                                       __Vtemp111[2U]
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                         ? 
                                                        vlSelf->top__DOT__exu_step__DOT__sll_res[2U]
                                                         : 
                                                        __Vtemp112[2U])))))))))));
        top__DOT__exu_step__DOT___io_res2rd_T_186[3U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp99[3U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                    ? __Vtemp100[3U]
                                    : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                        ? __Vtemp101[3U]
                                        : ((0x11U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                            ? __Vtemp105[3U]
                                            : ((0x1dU 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                ? __Vtemp106[3U]
                                                : (
                                                   (0x1cU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp107[3U]
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp108[3U]
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp109[3U]
                                                      : 
                                                     ((0x19U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      __Vtemp110[3U]
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                        ? 
                                                       __Vtemp111[3U]
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                         ? 
                                                        vlSelf->top__DOT__exu_step__DOT__sll_res[3U]
                                                         : 
                                                        __Vtemp112[3U])))))))))));
    }
    VL_EXTEND_WQ(127,64, __Vtemp137, vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                 [((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                    ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]);
    VL_EXTEND_WQ(127,64, __Vtemp138, vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                 [((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                    ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]);
    VL_EXTEND_WQ(127,64, __Vtemp139, vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                 [((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                    ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]);
    VL_EXTEND_WQ(127,64, __Vtemp140, vlSelf->top__DOT__exu_step__DOT__srl_res);
    VL_EXTEND_WQ(127,64, __Vtemp141, vlSelf->top__DOT__exu_step__DOT__sra_res);
    VL_EXTEND_WQ(127,64, __Vtemp142, VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value));
    VL_EXTEND_WQ(127,64, __Vtemp143, VL_MODDIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value));
    VL_EXTEND_WQ(127,64, __Vtemp144, (((QData)((IData)(
                                                       ((vlSelf->top__DOT__exu_step__DOT__remuw_res 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__remuw_res))));
    VL_EXTEND_WQ(127,64, __Vtemp145, (((QData)((IData)(
                                                       ((vlSelf->top__DOT__exu_step__DOT__remw_res 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__remw_res))));
    VL_EXTEND_WQ(127,64, __Vtemp146, (((QData)((IData)(
                                                       ((vlSelf->top__DOT__exu_step__DOT__divuw_res 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__divuw_res))));
    if ((0x47U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))) {
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U] 
            = __Vtemp137[0U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U] 
            = __Vtemp137[1U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[2U] 
            = __Vtemp137[2U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[3U] 
            = __Vtemp137[3U];
    } else {
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U] 
            = ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp138[0U] : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp139[0U]
                                     : ((0x38U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp140[0U]
                                         : ((0x39U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp141[0U]
                                             : ((0x37U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                vlSelf->top__DOT__exu_step__DOT__sll_res[0U]
                                                 : 
                                                ((0x34U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp142[0U]
                                                  : 
                                                 ((0x33U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp143[0U]
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp144[0U]
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp145[0U]
                                                     : 
                                                    ((0x35U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp146[0U]
                                                      : 
                                                     top__DOT__exu_step__DOT___io_res2rd_T_186[0U]))))))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U] 
            = ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp138[1U] : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp139[1U]
                                     : ((0x38U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp140[1U]
                                         : ((0x39U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp141[1U]
                                             : ((0x37U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                vlSelf->top__DOT__exu_step__DOT__sll_res[1U]
                                                 : 
                                                ((0x34U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp142[1U]
                                                  : 
                                                 ((0x33U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp143[1U]
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp144[1U]
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp145[1U]
                                                     : 
                                                    ((0x35U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp146[1U]
                                                      : 
                                                     top__DOT__exu_step__DOT___io_res2rd_T_186[1U]))))))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[2U] 
            = ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp138[2U] : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp139[2U]
                                     : ((0x38U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp140[2U]
                                         : ((0x39U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp141[2U]
                                             : ((0x37U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                vlSelf->top__DOT__exu_step__DOT__sll_res[2U]
                                                 : 
                                                ((0x34U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp142[2U]
                                                  : 
                                                 ((0x33U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp143[2U]
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp144[2U]
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp145[2U]
                                                     : 
                                                    ((0x35U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp146[2U]
                                                      : 
                                                     top__DOT__exu_step__DOT___io_res2rd_T_186[2U]))))))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[3U] 
            = ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp138[3U] : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp139[3U]
                                     : ((0x38U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp140[3U]
                                         : ((0x39U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp141[3U]
                                             : ((0x37U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                vlSelf->top__DOT__exu_step__DOT__sll_res[3U]
                                                 : 
                                                ((0x34U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp142[3U]
                                                  : 
                                                 ((0x33U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp143[3U]
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp144[3U]
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp145[3U]
                                                     : 
                                                    ((0x35U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp146[3U]
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

VL_INLINE_OPT void Vtop___024root___combo__TOP__16(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__16\n"); );
    // Body
    vlSelf->top__DOT__d_cache__DOT___GEN_16299 = ((IData)(vlSelf->reset)
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
                                                          ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                            ? 
                                                           ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_774)
                                                             ? 
                                                            (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_384)) 
                                                              << 7U) 
                                                             | (QData)((IData)(
                                                                               (0x7fU 
                                                                                & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))))
                                                             : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr)))
                                                            : 
                                                           ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_645)
                                                             ? 
                                                            (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_127)) 
                                                              << 7U) 
                                                             | (QData)((IData)(
                                                                               (0x7fU 
                                                                                & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))))
                                                             : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))))))
                                                         : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr)))))))));
}

void Vtop___024root___sequent__TOP__8(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__9(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__10(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__11(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__12(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__13(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__14(Vtop___024root* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vtop___024root___sequent__TOP__8(vlSelf);
        Vtop___024root___sequent__TOP__9(vlSelf);
        Vtop___024root___sequent__TOP__10(vlSelf);
        Vtop___024root___sequent__TOP__11(vlSelf);
        Vtop___024root___sequent__TOP__12(vlSelf);
        Vtop___024root___sequent__TOP__13(vlSelf);
        Vtop___024root___sequent__TOP__14(vlSelf);
        Vtop___024root___sequent__TOP__15(vlSelf);
    }
    Vtop___024root___combo__TOP__16(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
