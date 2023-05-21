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
    VlWide<3>/*95:0*/ __Vtemp111;
    VlWide<3>/*95:0*/ __Vtemp112;
    VlWide<3>/*95:0*/ __Vtemp114;
    VlWide<3>/*95:0*/ __Vtemp115;
    VlWide<3>/*95:0*/ __Vtemp116;
    VlWide<3>/*95:0*/ __Vtemp117;
    VlWide<4>/*127:0*/ __Vtemp118;
    VlWide<4>/*127:0*/ __Vtemp119;
    VlWide<4>/*127:0*/ __Vtemp120;
    VlWide<4>/*127:0*/ __Vtemp121;
    VlWide<4>/*127:0*/ __Vtemp122;
    VlWide<4>/*127:0*/ __Vtemp123;
    VlWide<4>/*127:0*/ __Vtemp124;
    VlWide<4>/*127:0*/ __Vtemp125;
    VlWide<4>/*127:0*/ __Vtemp126;
    VlWide<4>/*127:0*/ __Vtemp127;
    VlWide<4>/*127:0*/ __Vtemp128;
    VlWide<4>/*127:0*/ __Vtemp129;
    VlWide<4>/*127:0*/ __Vtemp130;
    VlWide<4>/*127:0*/ __Vtemp131;
    VlWide<4>/*127:0*/ __Vtemp132;
    VlWide<4>/*127:0*/ __Vtemp157;
    VlWide<4>/*127:0*/ __Vtemp158;
    VlWide<4>/*127:0*/ __Vtemp159;
    VlWide<4>/*127:0*/ __Vtemp160;
    VlWide<4>/*127:0*/ __Vtemp161;
    VlWide<4>/*127:0*/ __Vtemp162;
    VlWide<4>/*127:0*/ __Vtemp163;
    VlWide<4>/*127:0*/ __Vtemp164;
    VlWide<4>/*127:0*/ __Vtemp165;
    VlWide<4>/*127:0*/ __Vtemp166;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_162;
    // Body
    if (vlSelf->top__DOT__d_cache__DOT__way0_hit) {
        vlSelf->top__DOT__d_cache__DOT___GEN_1871 = 
            ((0x44U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_68);
        vlSelf->top__DOT__d_cache__DOT___GEN_1872 = 
            ((0x45U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_69);
        vlSelf->top__DOT__d_cache__DOT___GEN_1873 = 
            ((0x46U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_70);
        vlSelf->top__DOT__d_cache__DOT___GEN_1874 = 
            ((0x47U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_71);
        vlSelf->top__DOT__d_cache__DOT___GEN_1875 = 
            ((0x48U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_72);
        vlSelf->top__DOT__d_cache__DOT___GEN_1876 = 
            ((0x49U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_73);
        vlSelf->top__DOT__d_cache__DOT___GEN_1877 = 
            ((0x4aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_74);
        vlSelf->top__DOT__d_cache__DOT___GEN_1878 = 
            ((0x4bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_75);
        vlSelf->top__DOT__d_cache__DOT___GEN_1879 = 
            ((0x4cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_76);
        vlSelf->top__DOT__d_cache__DOT___GEN_1880 = 
            ((0x4dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_77);
        vlSelf->top__DOT__d_cache__DOT___GEN_1881 = 
            ((0x4eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_78);
        vlSelf->top__DOT__d_cache__DOT___GEN_1882 = 
            ((0x4fU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_79);
        vlSelf->top__DOT__d_cache__DOT___GEN_1883 = 
            ((0x50U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_80);
        vlSelf->top__DOT__d_cache__DOT___GEN_1884 = 
            ((0x51U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_81);
        vlSelf->top__DOT__d_cache__DOT___GEN_1885 = 
            ((0x52U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_82);
        vlSelf->top__DOT__d_cache__DOT___GEN_1886 = 
            ((0x53U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_83);
        vlSelf->top__DOT__d_cache__DOT___GEN_1887 = 
            ((0x54U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_84);
        vlSelf->top__DOT__d_cache__DOT___GEN_1888 = 
            ((0x55U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_85);
        vlSelf->top__DOT__d_cache__DOT___GEN_1889 = 
            ((0x56U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_86);
        vlSelf->top__DOT__d_cache__DOT___GEN_1890 = 
            ((0x57U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_87);
        vlSelf->top__DOT__d_cache__DOT___GEN_1891 = 
            ((0x58U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_88);
        vlSelf->top__DOT__d_cache__DOT___GEN_1892 = 
            ((0x59U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_89);
        vlSelf->top__DOT__d_cache__DOT___GEN_1893 = 
            ((0x5aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_90);
        vlSelf->top__DOT__d_cache__DOT___GEN_1894 = 
            ((0x5bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_91);
        vlSelf->top__DOT__d_cache__DOT___GEN_1895 = 
            ((0x5cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_92);
        vlSelf->top__DOT__d_cache__DOT___GEN_1896 = 
            ((0x5dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_93);
        vlSelf->top__DOT__d_cache__DOT___GEN_1897 = 
            ((0x5eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_94);
        vlSelf->top__DOT__d_cache__DOT___GEN_1898 = 
            ((0x5fU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_95);
        vlSelf->top__DOT__d_cache__DOT___GEN_1899 = 
            ((0x60U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_96);
        vlSelf->top__DOT__d_cache__DOT___GEN_1900 = 
            ((0x61U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_97);
        vlSelf->top__DOT__d_cache__DOT___GEN_1901 = 
            ((0x62U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_98);
        vlSelf->top__DOT__d_cache__DOT___GEN_1902 = 
            ((0x63U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_99);
        vlSelf->top__DOT__d_cache__DOT___GEN_1903 = 
            ((0x64U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_100);
        vlSelf->top__DOT__d_cache__DOT___GEN_1904 = 
            ((0x65U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_101);
        vlSelf->top__DOT__d_cache__DOT___GEN_1905 = 
            ((0x66U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_102);
        vlSelf->top__DOT__d_cache__DOT___GEN_1906 = 
            ((0x67U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_103);
        vlSelf->top__DOT__d_cache__DOT___GEN_1907 = 
            ((0x68U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_104);
        vlSelf->top__DOT__d_cache__DOT___GEN_1908 = 
            ((0x69U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_105);
        vlSelf->top__DOT__d_cache__DOT___GEN_1909 = 
            ((0x6aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_106);
        vlSelf->top__DOT__d_cache__DOT___GEN_1910 = 
            ((0x6bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_107);
        vlSelf->top__DOT__d_cache__DOT___GEN_1911 = 
            ((0x6cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_108);
        vlSelf->top__DOT__d_cache__DOT___GEN_1912 = 
            ((0x6dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_109);
        vlSelf->top__DOT__d_cache__DOT___GEN_1913 = 
            ((0x6eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_110);
        vlSelf->top__DOT__d_cache__DOT___GEN_1914 = 
            ((0x6fU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_111);
        vlSelf->top__DOT__d_cache__DOT___GEN_1915 = 
            ((0x70U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_112);
        vlSelf->top__DOT__d_cache__DOT___GEN_1916 = 
            ((0x71U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_113);
        vlSelf->top__DOT__d_cache__DOT___GEN_1917 = 
            ((0x72U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_114);
        vlSelf->top__DOT__d_cache__DOT___GEN_1918 = 
            ((0x73U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_115);
        vlSelf->top__DOT__d_cache__DOT___GEN_1919 = 
            ((0x74U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_116);
        vlSelf->top__DOT__d_cache__DOT___GEN_1920 = 
            ((0x75U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_117);
        vlSelf->top__DOT__d_cache__DOT___GEN_1921 = 
            ((0x76U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_118);
        vlSelf->top__DOT__d_cache__DOT___GEN_1922 = 
            ((0x77U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_119);
        vlSelf->top__DOT__d_cache__DOT___GEN_1923 = 
            ((0x78U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_120);
        vlSelf->top__DOT__d_cache__DOT___GEN_1924 = 
            ((0x79U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_121);
        vlSelf->top__DOT__d_cache__DOT___GEN_1925 = 
            ((0x7aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_122);
        vlSelf->top__DOT__d_cache__DOT___GEN_1926 = 
            ((0x7bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_123);
        vlSelf->top__DOT__d_cache__DOT___GEN_1927 = 
            ((0x7cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_124);
        vlSelf->top__DOT__d_cache__DOT___GEN_1928 = 
            ((0x7dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_125);
        vlSelf->top__DOT__d_cache__DOT___GEN_1929 = 
            ((0x7eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_126);
        vlSelf->top__DOT__d_cache__DOT___GEN_1930 = 
            ((0x7fU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_127);
        vlSelf->top__DOT__d_cache__DOT___GEN_2059 = vlSelf->top__DOT__d_cache__DOT__ram_1_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_2060 = vlSelf->top__DOT__d_cache__DOT__ram_1_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_2061 = vlSelf->top__DOT__d_cache__DOT__ram_1_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_2062 = vlSelf->top__DOT__d_cache__DOT__ram_1_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_2063 = vlSelf->top__DOT__d_cache__DOT__ram_1_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_2064 = vlSelf->top__DOT__d_cache__DOT__ram_1_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_2065 = vlSelf->top__DOT__d_cache__DOT__ram_1_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_2066 = vlSelf->top__DOT__d_cache__DOT__ram_1_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_2067 = vlSelf->top__DOT__d_cache__DOT__ram_1_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_2068 = vlSelf->top__DOT__d_cache__DOT__ram_1_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_2069 = vlSelf->top__DOT__d_cache__DOT__ram_1_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_2070 = vlSelf->top__DOT__d_cache__DOT__ram_1_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_2071 = vlSelf->top__DOT__d_cache__DOT__ram_1_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_2072 = vlSelf->top__DOT__d_cache__DOT__ram_1_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_2073 = vlSelf->top__DOT__d_cache__DOT__ram_1_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_2074 = vlSelf->top__DOT__d_cache__DOT__ram_1_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_2075 = vlSelf->top__DOT__d_cache__DOT__ram_1_16;
        vlSelf->top__DOT__d_cache__DOT___GEN_2076 = vlSelf->top__DOT__d_cache__DOT__ram_1_17;
        vlSelf->top__DOT__d_cache__DOT___GEN_2077 = vlSelf->top__DOT__d_cache__DOT__ram_1_18;
        vlSelf->top__DOT__d_cache__DOT___GEN_2078 = vlSelf->top__DOT__d_cache__DOT__ram_1_19;
        vlSelf->top__DOT__d_cache__DOT___GEN_2079 = vlSelf->top__DOT__d_cache__DOT__ram_1_20;
        vlSelf->top__DOT__d_cache__DOT___GEN_2080 = vlSelf->top__DOT__d_cache__DOT__ram_1_21;
        vlSelf->top__DOT__d_cache__DOT___GEN_2081 = vlSelf->top__DOT__d_cache__DOT__ram_1_22;
        vlSelf->top__DOT__d_cache__DOT___GEN_2082 = vlSelf->top__DOT__d_cache__DOT__ram_1_23;
        vlSelf->top__DOT__d_cache__DOT___GEN_2083 = vlSelf->top__DOT__d_cache__DOT__ram_1_24;
        vlSelf->top__DOT__d_cache__DOT___GEN_2084 = vlSelf->top__DOT__d_cache__DOT__ram_1_25;
        vlSelf->top__DOT__d_cache__DOT___GEN_2085 = vlSelf->top__DOT__d_cache__DOT__ram_1_26;
        vlSelf->top__DOT__d_cache__DOT___GEN_2086 = vlSelf->top__DOT__d_cache__DOT__ram_1_27;
        vlSelf->top__DOT__d_cache__DOT___GEN_2087 = vlSelf->top__DOT__d_cache__DOT__ram_1_28;
        vlSelf->top__DOT__d_cache__DOT___GEN_2088 = vlSelf->top__DOT__d_cache__DOT__ram_1_29;
        vlSelf->top__DOT__d_cache__DOT___GEN_2089 = vlSelf->top__DOT__d_cache__DOT__ram_1_30;
        vlSelf->top__DOT__d_cache__DOT___GEN_2090 = vlSelf->top__DOT__d_cache__DOT__ram_1_31;
        vlSelf->top__DOT__d_cache__DOT___GEN_2091 = vlSelf->top__DOT__d_cache__DOT__ram_1_32;
        vlSelf->top__DOT__d_cache__DOT___GEN_2092 = vlSelf->top__DOT__d_cache__DOT__ram_1_33;
        vlSelf->top__DOT__d_cache__DOT___GEN_2093 = vlSelf->top__DOT__d_cache__DOT__ram_1_34;
        vlSelf->top__DOT__d_cache__DOT___GEN_2094 = vlSelf->top__DOT__d_cache__DOT__ram_1_35;
        vlSelf->top__DOT__d_cache__DOT___GEN_2095 = vlSelf->top__DOT__d_cache__DOT__ram_1_36;
        vlSelf->top__DOT__d_cache__DOT___GEN_2096 = vlSelf->top__DOT__d_cache__DOT__ram_1_37;
        vlSelf->top__DOT__d_cache__DOT___GEN_2097 = vlSelf->top__DOT__d_cache__DOT__ram_1_38;
        vlSelf->top__DOT__d_cache__DOT___GEN_2098 = vlSelf->top__DOT__d_cache__DOT__ram_1_39;
        vlSelf->top__DOT__d_cache__DOT___GEN_2099 = vlSelf->top__DOT__d_cache__DOT__ram_1_40;
        vlSelf->top__DOT__d_cache__DOT___GEN_2100 = vlSelf->top__DOT__d_cache__DOT__ram_1_41;
        vlSelf->top__DOT__d_cache__DOT___GEN_2101 = vlSelf->top__DOT__d_cache__DOT__ram_1_42;
        vlSelf->top__DOT__d_cache__DOT___GEN_2102 = vlSelf->top__DOT__d_cache__DOT__ram_1_43;
        vlSelf->top__DOT__d_cache__DOT___GEN_2103 = vlSelf->top__DOT__d_cache__DOT__ram_1_44;
        vlSelf->top__DOT__d_cache__DOT___GEN_2104 = vlSelf->top__DOT__d_cache__DOT__ram_1_45;
        vlSelf->top__DOT__d_cache__DOT___GEN_2105 = vlSelf->top__DOT__d_cache__DOT__ram_1_46;
        vlSelf->top__DOT__d_cache__DOT___GEN_2106 = vlSelf->top__DOT__d_cache__DOT__ram_1_47;
        vlSelf->top__DOT__d_cache__DOT___GEN_2107 = vlSelf->top__DOT__d_cache__DOT__ram_1_48;
        vlSelf->top__DOT__d_cache__DOT___GEN_2108 = vlSelf->top__DOT__d_cache__DOT__ram_1_49;
        vlSelf->top__DOT__d_cache__DOT___GEN_2109 = vlSelf->top__DOT__d_cache__DOT__ram_1_50;
        vlSelf->top__DOT__d_cache__DOT___GEN_2110 = vlSelf->top__DOT__d_cache__DOT__ram_1_51;
        vlSelf->top__DOT__d_cache__DOT___GEN_2111 = vlSelf->top__DOT__d_cache__DOT__ram_1_52;
        vlSelf->top__DOT__d_cache__DOT___GEN_2112 = vlSelf->top__DOT__d_cache__DOT__ram_1_53;
        vlSelf->top__DOT__d_cache__DOT___GEN_2113 = vlSelf->top__DOT__d_cache__DOT__ram_1_54;
        vlSelf->top__DOT__d_cache__DOT___GEN_2114 = vlSelf->top__DOT__d_cache__DOT__ram_1_55;
        vlSelf->top__DOT__d_cache__DOT___GEN_2115 = vlSelf->top__DOT__d_cache__DOT__ram_1_56;
        vlSelf->top__DOT__d_cache__DOT___GEN_2116 = vlSelf->top__DOT__d_cache__DOT__ram_1_57;
        vlSelf->top__DOT__d_cache__DOT___GEN_2117 = vlSelf->top__DOT__d_cache__DOT__ram_1_58;
        vlSelf->top__DOT__d_cache__DOT___GEN_2118 = vlSelf->top__DOT__d_cache__DOT__ram_1_59;
        vlSelf->top__DOT__d_cache__DOT___GEN_2119 = vlSelf->top__DOT__d_cache__DOT__ram_1_60;
        vlSelf->top__DOT__d_cache__DOT___GEN_2120 = vlSelf->top__DOT__d_cache__DOT__ram_1_61;
        vlSelf->top__DOT__d_cache__DOT___GEN_2121 = vlSelf->top__DOT__d_cache__DOT__ram_1_62;
        vlSelf->top__DOT__d_cache__DOT___GEN_2122 = vlSelf->top__DOT__d_cache__DOT__ram_1_63;
        vlSelf->top__DOT__d_cache__DOT___GEN_2123 = vlSelf->top__DOT__d_cache__DOT__ram_1_64;
        vlSelf->top__DOT__d_cache__DOT___GEN_2124 = vlSelf->top__DOT__d_cache__DOT__ram_1_65;
        vlSelf->top__DOT__d_cache__DOT___GEN_2125 = vlSelf->top__DOT__d_cache__DOT__ram_1_66;
        vlSelf->top__DOT__d_cache__DOT___GEN_2126 = vlSelf->top__DOT__d_cache__DOT__ram_1_67;
        vlSelf->top__DOT__d_cache__DOT___GEN_2127 = vlSelf->top__DOT__d_cache__DOT__ram_1_68;
        vlSelf->top__DOT__d_cache__DOT___GEN_2128 = vlSelf->top__DOT__d_cache__DOT__ram_1_69;
        vlSelf->top__DOT__d_cache__DOT___GEN_2129 = vlSelf->top__DOT__d_cache__DOT__ram_1_70;
        vlSelf->top__DOT__d_cache__DOT___GEN_2130 = vlSelf->top__DOT__d_cache__DOT__ram_1_71;
        vlSelf->top__DOT__d_cache__DOT___GEN_2131 = vlSelf->top__DOT__d_cache__DOT__ram_1_72;
        vlSelf->top__DOT__d_cache__DOT___GEN_2132 = vlSelf->top__DOT__d_cache__DOT__ram_1_73;
        vlSelf->top__DOT__d_cache__DOT___GEN_2133 = vlSelf->top__DOT__d_cache__DOT__ram_1_74;
        vlSelf->top__DOT__d_cache__DOT___GEN_2134 = vlSelf->top__DOT__d_cache__DOT__ram_1_75;
        vlSelf->top__DOT__d_cache__DOT___GEN_2135 = vlSelf->top__DOT__d_cache__DOT__ram_1_76;
        vlSelf->top__DOT__d_cache__DOT___GEN_2136 = vlSelf->top__DOT__d_cache__DOT__ram_1_77;
        vlSelf->top__DOT__d_cache__DOT___GEN_2137 = vlSelf->top__DOT__d_cache__DOT__ram_1_78;
        vlSelf->top__DOT__d_cache__DOT___GEN_2138 = vlSelf->top__DOT__d_cache__DOT__ram_1_79;
        vlSelf->top__DOT__d_cache__DOT___GEN_2139 = vlSelf->top__DOT__d_cache__DOT__ram_1_80;
        vlSelf->top__DOT__d_cache__DOT___GEN_2140 = vlSelf->top__DOT__d_cache__DOT__ram_1_81;
        vlSelf->top__DOT__d_cache__DOT___GEN_2141 = vlSelf->top__DOT__d_cache__DOT__ram_1_82;
        vlSelf->top__DOT__d_cache__DOT___GEN_2142 = vlSelf->top__DOT__d_cache__DOT__ram_1_83;
        vlSelf->top__DOT__d_cache__DOT___GEN_2143 = vlSelf->top__DOT__d_cache__DOT__ram_1_84;
        vlSelf->top__DOT__d_cache__DOT___GEN_2144 = vlSelf->top__DOT__d_cache__DOT__ram_1_85;
        vlSelf->top__DOT__d_cache__DOT___GEN_2145 = vlSelf->top__DOT__d_cache__DOT__ram_1_86;
        vlSelf->top__DOT__d_cache__DOT___GEN_2146 = vlSelf->top__DOT__d_cache__DOT__ram_1_87;
        vlSelf->top__DOT__d_cache__DOT___GEN_2147 = vlSelf->top__DOT__d_cache__DOT__ram_1_88;
        vlSelf->top__DOT__d_cache__DOT___GEN_2148 = vlSelf->top__DOT__d_cache__DOT__ram_1_89;
        vlSelf->top__DOT__d_cache__DOT___GEN_2149 = vlSelf->top__DOT__d_cache__DOT__ram_1_90;
        vlSelf->top__DOT__d_cache__DOT___GEN_2150 = vlSelf->top__DOT__d_cache__DOT__ram_1_91;
        vlSelf->top__DOT__d_cache__DOT___GEN_2151 = vlSelf->top__DOT__d_cache__DOT__ram_1_92;
        vlSelf->top__DOT__d_cache__DOT___GEN_2152 = vlSelf->top__DOT__d_cache__DOT__ram_1_93;
        vlSelf->top__DOT__d_cache__DOT___GEN_2153 = vlSelf->top__DOT__d_cache__DOT__ram_1_94;
        vlSelf->top__DOT__d_cache__DOT___GEN_2154 = vlSelf->top__DOT__d_cache__DOT__ram_1_95;
        vlSelf->top__DOT__d_cache__DOT___GEN_2155 = vlSelf->top__DOT__d_cache__DOT__ram_1_96;
        vlSelf->top__DOT__d_cache__DOT___GEN_2156 = vlSelf->top__DOT__d_cache__DOT__ram_1_97;
        vlSelf->top__DOT__d_cache__DOT___GEN_2157 = vlSelf->top__DOT__d_cache__DOT__ram_1_98;
        vlSelf->top__DOT__d_cache__DOT___GEN_2158 = vlSelf->top__DOT__d_cache__DOT__ram_1_99;
        vlSelf->top__DOT__d_cache__DOT___GEN_2159 = vlSelf->top__DOT__d_cache__DOT__ram_1_100;
        vlSelf->top__DOT__d_cache__DOT___GEN_2160 = vlSelf->top__DOT__d_cache__DOT__ram_1_101;
        vlSelf->top__DOT__d_cache__DOT___GEN_2161 = vlSelf->top__DOT__d_cache__DOT__ram_1_102;
        vlSelf->top__DOT__d_cache__DOT___GEN_2162 = vlSelf->top__DOT__d_cache__DOT__ram_1_103;
        vlSelf->top__DOT__d_cache__DOT___GEN_2163 = vlSelf->top__DOT__d_cache__DOT__ram_1_104;
        vlSelf->top__DOT__d_cache__DOT___GEN_2164 = vlSelf->top__DOT__d_cache__DOT__ram_1_105;
        vlSelf->top__DOT__d_cache__DOT___GEN_2165 = vlSelf->top__DOT__d_cache__DOT__ram_1_106;
        vlSelf->top__DOT__d_cache__DOT___GEN_2166 = vlSelf->top__DOT__d_cache__DOT__ram_1_107;
        vlSelf->top__DOT__d_cache__DOT___GEN_2167 = vlSelf->top__DOT__d_cache__DOT__ram_1_108;
        vlSelf->top__DOT__d_cache__DOT___GEN_2168 = vlSelf->top__DOT__d_cache__DOT__ram_1_109;
        vlSelf->top__DOT__d_cache__DOT___GEN_2169 = vlSelf->top__DOT__d_cache__DOT__ram_1_110;
        vlSelf->top__DOT__d_cache__DOT___GEN_2170 = vlSelf->top__DOT__d_cache__DOT__ram_1_111;
        vlSelf->top__DOT__d_cache__DOT___GEN_2171 = vlSelf->top__DOT__d_cache__DOT__ram_1_112;
        vlSelf->top__DOT__d_cache__DOT___GEN_2172 = vlSelf->top__DOT__d_cache__DOT__ram_1_113;
        vlSelf->top__DOT__d_cache__DOT___GEN_2173 = vlSelf->top__DOT__d_cache__DOT__ram_1_114;
        vlSelf->top__DOT__d_cache__DOT___GEN_2174 = vlSelf->top__DOT__d_cache__DOT__ram_1_115;
        vlSelf->top__DOT__d_cache__DOT___GEN_2175 = vlSelf->top__DOT__d_cache__DOT__ram_1_116;
        vlSelf->top__DOT__d_cache__DOT___GEN_2176 = vlSelf->top__DOT__d_cache__DOT__ram_1_117;
        vlSelf->top__DOT__d_cache__DOT___GEN_2177 = vlSelf->top__DOT__d_cache__DOT__ram_1_118;
        vlSelf->top__DOT__d_cache__DOT___GEN_2178 = vlSelf->top__DOT__d_cache__DOT__ram_1_119;
        vlSelf->top__DOT__d_cache__DOT___GEN_2179 = vlSelf->top__DOT__d_cache__DOT__ram_1_120;
        vlSelf->top__DOT__d_cache__DOT___GEN_2180 = vlSelf->top__DOT__d_cache__DOT__ram_1_121;
        vlSelf->top__DOT__d_cache__DOT___GEN_2181 = vlSelf->top__DOT__d_cache__DOT__ram_1_122;
        vlSelf->top__DOT__d_cache__DOT___GEN_2182 = vlSelf->top__DOT__d_cache__DOT__ram_1_123;
        vlSelf->top__DOT__d_cache__DOT___GEN_2183 = vlSelf->top__DOT__d_cache__DOT__ram_1_124;
        vlSelf->top__DOT__d_cache__DOT___GEN_2184 = vlSelf->top__DOT__d_cache__DOT__ram_1_125;
        vlSelf->top__DOT__d_cache__DOT___GEN_2185 = vlSelf->top__DOT__d_cache__DOT__ram_1_126;
        vlSelf->top__DOT__d_cache__DOT___GEN_2186 = vlSelf->top__DOT__d_cache__DOT__ram_1_127;
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_1871 = vlSelf->top__DOT__d_cache__DOT__ram_0_68;
        vlSelf->top__DOT__d_cache__DOT___GEN_1872 = vlSelf->top__DOT__d_cache__DOT__ram_0_69;
        vlSelf->top__DOT__d_cache__DOT___GEN_1873 = vlSelf->top__DOT__d_cache__DOT__ram_0_70;
        vlSelf->top__DOT__d_cache__DOT___GEN_1874 = vlSelf->top__DOT__d_cache__DOT__ram_0_71;
        vlSelf->top__DOT__d_cache__DOT___GEN_1875 = vlSelf->top__DOT__d_cache__DOT__ram_0_72;
        vlSelf->top__DOT__d_cache__DOT___GEN_1876 = vlSelf->top__DOT__d_cache__DOT__ram_0_73;
        vlSelf->top__DOT__d_cache__DOT___GEN_1877 = vlSelf->top__DOT__d_cache__DOT__ram_0_74;
        vlSelf->top__DOT__d_cache__DOT___GEN_1878 = vlSelf->top__DOT__d_cache__DOT__ram_0_75;
        vlSelf->top__DOT__d_cache__DOT___GEN_1879 = vlSelf->top__DOT__d_cache__DOT__ram_0_76;
        vlSelf->top__DOT__d_cache__DOT___GEN_1880 = vlSelf->top__DOT__d_cache__DOT__ram_0_77;
        vlSelf->top__DOT__d_cache__DOT___GEN_1881 = vlSelf->top__DOT__d_cache__DOT__ram_0_78;
        vlSelf->top__DOT__d_cache__DOT___GEN_1882 = vlSelf->top__DOT__d_cache__DOT__ram_0_79;
        vlSelf->top__DOT__d_cache__DOT___GEN_1883 = vlSelf->top__DOT__d_cache__DOT__ram_0_80;
        vlSelf->top__DOT__d_cache__DOT___GEN_1884 = vlSelf->top__DOT__d_cache__DOT__ram_0_81;
        vlSelf->top__DOT__d_cache__DOT___GEN_1885 = vlSelf->top__DOT__d_cache__DOT__ram_0_82;
        vlSelf->top__DOT__d_cache__DOT___GEN_1886 = vlSelf->top__DOT__d_cache__DOT__ram_0_83;
        vlSelf->top__DOT__d_cache__DOT___GEN_1887 = vlSelf->top__DOT__d_cache__DOT__ram_0_84;
        vlSelf->top__DOT__d_cache__DOT___GEN_1888 = vlSelf->top__DOT__d_cache__DOT__ram_0_85;
        vlSelf->top__DOT__d_cache__DOT___GEN_1889 = vlSelf->top__DOT__d_cache__DOT__ram_0_86;
        vlSelf->top__DOT__d_cache__DOT___GEN_1890 = vlSelf->top__DOT__d_cache__DOT__ram_0_87;
        vlSelf->top__DOT__d_cache__DOT___GEN_1891 = vlSelf->top__DOT__d_cache__DOT__ram_0_88;
        vlSelf->top__DOT__d_cache__DOT___GEN_1892 = vlSelf->top__DOT__d_cache__DOT__ram_0_89;
        vlSelf->top__DOT__d_cache__DOT___GEN_1893 = vlSelf->top__DOT__d_cache__DOT__ram_0_90;
        vlSelf->top__DOT__d_cache__DOT___GEN_1894 = vlSelf->top__DOT__d_cache__DOT__ram_0_91;
        vlSelf->top__DOT__d_cache__DOT___GEN_1895 = vlSelf->top__DOT__d_cache__DOT__ram_0_92;
        vlSelf->top__DOT__d_cache__DOT___GEN_1896 = vlSelf->top__DOT__d_cache__DOT__ram_0_93;
        vlSelf->top__DOT__d_cache__DOT___GEN_1897 = vlSelf->top__DOT__d_cache__DOT__ram_0_94;
        vlSelf->top__DOT__d_cache__DOT___GEN_1898 = vlSelf->top__DOT__d_cache__DOT__ram_0_95;
        vlSelf->top__DOT__d_cache__DOT___GEN_1899 = vlSelf->top__DOT__d_cache__DOT__ram_0_96;
        vlSelf->top__DOT__d_cache__DOT___GEN_1900 = vlSelf->top__DOT__d_cache__DOT__ram_0_97;
        vlSelf->top__DOT__d_cache__DOT___GEN_1901 = vlSelf->top__DOT__d_cache__DOT__ram_0_98;
        vlSelf->top__DOT__d_cache__DOT___GEN_1902 = vlSelf->top__DOT__d_cache__DOT__ram_0_99;
        vlSelf->top__DOT__d_cache__DOT___GEN_1903 = vlSelf->top__DOT__d_cache__DOT__ram_0_100;
        vlSelf->top__DOT__d_cache__DOT___GEN_1904 = vlSelf->top__DOT__d_cache__DOT__ram_0_101;
        vlSelf->top__DOT__d_cache__DOT___GEN_1905 = vlSelf->top__DOT__d_cache__DOT__ram_0_102;
        vlSelf->top__DOT__d_cache__DOT___GEN_1906 = vlSelf->top__DOT__d_cache__DOT__ram_0_103;
        vlSelf->top__DOT__d_cache__DOT___GEN_1907 = vlSelf->top__DOT__d_cache__DOT__ram_0_104;
        vlSelf->top__DOT__d_cache__DOT___GEN_1908 = vlSelf->top__DOT__d_cache__DOT__ram_0_105;
        vlSelf->top__DOT__d_cache__DOT___GEN_1909 = vlSelf->top__DOT__d_cache__DOT__ram_0_106;
        vlSelf->top__DOT__d_cache__DOT___GEN_1910 = vlSelf->top__DOT__d_cache__DOT__ram_0_107;
        vlSelf->top__DOT__d_cache__DOT___GEN_1911 = vlSelf->top__DOT__d_cache__DOT__ram_0_108;
        vlSelf->top__DOT__d_cache__DOT___GEN_1912 = vlSelf->top__DOT__d_cache__DOT__ram_0_109;
        vlSelf->top__DOT__d_cache__DOT___GEN_1913 = vlSelf->top__DOT__d_cache__DOT__ram_0_110;
        vlSelf->top__DOT__d_cache__DOT___GEN_1914 = vlSelf->top__DOT__d_cache__DOT__ram_0_111;
        vlSelf->top__DOT__d_cache__DOT___GEN_1915 = vlSelf->top__DOT__d_cache__DOT__ram_0_112;
        vlSelf->top__DOT__d_cache__DOT___GEN_1916 = vlSelf->top__DOT__d_cache__DOT__ram_0_113;
        vlSelf->top__DOT__d_cache__DOT___GEN_1917 = vlSelf->top__DOT__d_cache__DOT__ram_0_114;
        vlSelf->top__DOT__d_cache__DOT___GEN_1918 = vlSelf->top__DOT__d_cache__DOT__ram_0_115;
        vlSelf->top__DOT__d_cache__DOT___GEN_1919 = vlSelf->top__DOT__d_cache__DOT__ram_0_116;
        vlSelf->top__DOT__d_cache__DOT___GEN_1920 = vlSelf->top__DOT__d_cache__DOT__ram_0_117;
        vlSelf->top__DOT__d_cache__DOT___GEN_1921 = vlSelf->top__DOT__d_cache__DOT__ram_0_118;
        vlSelf->top__DOT__d_cache__DOT___GEN_1922 = vlSelf->top__DOT__d_cache__DOT__ram_0_119;
        vlSelf->top__DOT__d_cache__DOT___GEN_1923 = vlSelf->top__DOT__d_cache__DOT__ram_0_120;
        vlSelf->top__DOT__d_cache__DOT___GEN_1924 = vlSelf->top__DOT__d_cache__DOT__ram_0_121;
        vlSelf->top__DOT__d_cache__DOT___GEN_1925 = vlSelf->top__DOT__d_cache__DOT__ram_0_122;
        vlSelf->top__DOT__d_cache__DOT___GEN_1926 = vlSelf->top__DOT__d_cache__DOT__ram_0_123;
        vlSelf->top__DOT__d_cache__DOT___GEN_1927 = vlSelf->top__DOT__d_cache__DOT__ram_0_124;
        vlSelf->top__DOT__d_cache__DOT___GEN_1928 = vlSelf->top__DOT__d_cache__DOT__ram_0_125;
        vlSelf->top__DOT__d_cache__DOT___GEN_1929 = vlSelf->top__DOT__d_cache__DOT__ram_0_126;
        vlSelf->top__DOT__d_cache__DOT___GEN_1930 = vlSelf->top__DOT__d_cache__DOT__ram_0_127;
        vlSelf->top__DOT__d_cache__DOT___GEN_2059 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_0)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_0);
        vlSelf->top__DOT__d_cache__DOT___GEN_2060 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((1U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_1)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_1);
        vlSelf->top__DOT__d_cache__DOT___GEN_2061 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((2U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_2)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_2);
        vlSelf->top__DOT__d_cache__DOT___GEN_2062 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((3U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_3)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_3);
        vlSelf->top__DOT__d_cache__DOT___GEN_2063 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((4U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_4)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_4);
        vlSelf->top__DOT__d_cache__DOT___GEN_2064 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((5U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_5)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_5);
        vlSelf->top__DOT__d_cache__DOT___GEN_2065 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((6U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_6)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_6);
        vlSelf->top__DOT__d_cache__DOT___GEN_2066 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((7U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_7)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_7);
        vlSelf->top__DOT__d_cache__DOT___GEN_2067 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((8U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_8)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_8);
        vlSelf->top__DOT__d_cache__DOT___GEN_2068 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((9U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_9)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_9);
        vlSelf->top__DOT__d_cache__DOT___GEN_2069 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xaU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                            >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_10)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_10);
        vlSelf->top__DOT__d_cache__DOT___GEN_2070 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xbU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                            >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_11)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_11);
        vlSelf->top__DOT__d_cache__DOT___GEN_2071 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xcU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                            >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_12)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_12);
        vlSelf->top__DOT__d_cache__DOT___GEN_2072 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xdU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                            >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_13)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_13);
        vlSelf->top__DOT__d_cache__DOT___GEN_2073 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xeU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                            >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_14)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_14);
        vlSelf->top__DOT__d_cache__DOT___GEN_2074 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xfU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                            >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_15)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_15);
        vlSelf->top__DOT__d_cache__DOT___GEN_2075 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x10U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_16)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_16);
        vlSelf->top__DOT__d_cache__DOT___GEN_2076 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x11U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_17)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_17);
        vlSelf->top__DOT__d_cache__DOT___GEN_2077 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x12U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_18)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_18);
        vlSelf->top__DOT__d_cache__DOT___GEN_2078 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x13U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_19)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_19);
        vlSelf->top__DOT__d_cache__DOT___GEN_2079 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x14U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_20)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_20);
        vlSelf->top__DOT__d_cache__DOT___GEN_2080 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x15U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_21)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_21);
        vlSelf->top__DOT__d_cache__DOT___GEN_2081 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x16U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_22)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_22);
        vlSelf->top__DOT__d_cache__DOT___GEN_2082 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x17U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_23)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_23);
        vlSelf->top__DOT__d_cache__DOT___GEN_2083 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x18U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_24)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_24);
        vlSelf->top__DOT__d_cache__DOT___GEN_2084 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x19U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_25)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_25);
        vlSelf->top__DOT__d_cache__DOT___GEN_2085 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_26)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_26);
        vlSelf->top__DOT__d_cache__DOT___GEN_2086 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_27)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_27);
        vlSelf->top__DOT__d_cache__DOT___GEN_2087 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_28)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_28);
        vlSelf->top__DOT__d_cache__DOT___GEN_2088 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_29)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_29);
        vlSelf->top__DOT__d_cache__DOT___GEN_2089 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_30)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_30);
        vlSelf->top__DOT__d_cache__DOT___GEN_2090 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1fU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_31)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_31);
        vlSelf->top__DOT__d_cache__DOT___GEN_2091 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x20U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_32)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_32);
        vlSelf->top__DOT__d_cache__DOT___GEN_2092 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x21U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_33)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_33);
        vlSelf->top__DOT__d_cache__DOT___GEN_2093 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x22U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_34)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_34);
        vlSelf->top__DOT__d_cache__DOT___GEN_2094 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x23U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_35)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_35);
        vlSelf->top__DOT__d_cache__DOT___GEN_2095 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x24U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_36)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_36);
        vlSelf->top__DOT__d_cache__DOT___GEN_2096 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x25U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_37)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_37);
        vlSelf->top__DOT__d_cache__DOT___GEN_2097 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x26U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_38)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_38);
        vlSelf->top__DOT__d_cache__DOT___GEN_2098 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x27U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_39)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_39);
        vlSelf->top__DOT__d_cache__DOT___GEN_2099 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x28U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_40)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_40);
        vlSelf->top__DOT__d_cache__DOT___GEN_2100 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x29U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_41)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_41);
        vlSelf->top__DOT__d_cache__DOT___GEN_2101 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_42)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_42);
        vlSelf->top__DOT__d_cache__DOT___GEN_2102 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_43)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_43);
        vlSelf->top__DOT__d_cache__DOT___GEN_2103 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_44)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_44);
        vlSelf->top__DOT__d_cache__DOT___GEN_2104 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_45)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_45);
        vlSelf->top__DOT__d_cache__DOT___GEN_2105 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_46)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_46);
        vlSelf->top__DOT__d_cache__DOT___GEN_2106 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2fU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_47)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_47);
        vlSelf->top__DOT__d_cache__DOT___GEN_2107 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x30U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_48)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_48);
        vlSelf->top__DOT__d_cache__DOT___GEN_2108 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x31U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_49)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_49);
        vlSelf->top__DOT__d_cache__DOT___GEN_2109 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x32U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_50)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_50);
        vlSelf->top__DOT__d_cache__DOT___GEN_2110 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x33U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_51)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_51);
        vlSelf->top__DOT__d_cache__DOT___GEN_2111 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x34U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_52)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_52);
        vlSelf->top__DOT__d_cache__DOT___GEN_2112 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x35U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_53)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_53);
        vlSelf->top__DOT__d_cache__DOT___GEN_2113 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x36U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_54)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_54);
        vlSelf->top__DOT__d_cache__DOT___GEN_2114 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x37U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_55)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_55);
        vlSelf->top__DOT__d_cache__DOT___GEN_2115 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x38U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_56)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_56);
        vlSelf->top__DOT__d_cache__DOT___GEN_2116 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x39U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_57)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_57);
        vlSelf->top__DOT__d_cache__DOT___GEN_2117 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_58)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_58);
        vlSelf->top__DOT__d_cache__DOT___GEN_2118 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_59)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_59);
        vlSelf->top__DOT__d_cache__DOT___GEN_2119 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_60)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_60);
        vlSelf->top__DOT__d_cache__DOT___GEN_2120 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_61)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_61);
        vlSelf->top__DOT__d_cache__DOT___GEN_2121 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_62)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_62);
        vlSelf->top__DOT__d_cache__DOT___GEN_2122 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3fU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_63)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_63);
        vlSelf->top__DOT__d_cache__DOT___GEN_2123 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x40U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_64)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_64);
        vlSelf->top__DOT__d_cache__DOT___GEN_2124 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x41U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_65)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_65);
        vlSelf->top__DOT__d_cache__DOT___GEN_2125 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x42U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_66)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_66);
        vlSelf->top__DOT__d_cache__DOT___GEN_2126 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x43U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_67)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_67);
        vlSelf->top__DOT__d_cache__DOT___GEN_2127 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x44U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_68)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_68);
        vlSelf->top__DOT__d_cache__DOT___GEN_2128 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x45U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_69)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_69);
        vlSelf->top__DOT__d_cache__DOT___GEN_2129 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x46U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_70)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_70);
        vlSelf->top__DOT__d_cache__DOT___GEN_2130 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x47U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_71)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_71);
        vlSelf->top__DOT__d_cache__DOT___GEN_2131 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x48U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_72)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_72);
        vlSelf->top__DOT__d_cache__DOT___GEN_2132 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x49U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_73)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_73);
        vlSelf->top__DOT__d_cache__DOT___GEN_2133 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x4aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_74)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_74);
        vlSelf->top__DOT__d_cache__DOT___GEN_2134 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x4bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_75)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_75);
        vlSelf->top__DOT__d_cache__DOT___GEN_2135 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x4cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_76)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_76);
        vlSelf->top__DOT__d_cache__DOT___GEN_2136 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x4dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_77)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_77);
        vlSelf->top__DOT__d_cache__DOT___GEN_2137 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x4eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_78)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_78);
        vlSelf->top__DOT__d_cache__DOT___GEN_2138 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x4fU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_79)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_79);
        vlSelf->top__DOT__d_cache__DOT___GEN_2139 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x50U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_80)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_80);
        vlSelf->top__DOT__d_cache__DOT___GEN_2140 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x51U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_81)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_81);
        vlSelf->top__DOT__d_cache__DOT___GEN_2141 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x52U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_82)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_82);
        vlSelf->top__DOT__d_cache__DOT___GEN_2142 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x53U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_83)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_83);
        vlSelf->top__DOT__d_cache__DOT___GEN_2143 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x54U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_84)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_84);
        vlSelf->top__DOT__d_cache__DOT___GEN_2144 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x55U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_85)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_85);
        vlSelf->top__DOT__d_cache__DOT___GEN_2145 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x56U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_86)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_86);
        vlSelf->top__DOT__d_cache__DOT___GEN_2146 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x57U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_87)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_87);
        vlSelf->top__DOT__d_cache__DOT___GEN_2147 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x58U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_88)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_88);
        vlSelf->top__DOT__d_cache__DOT___GEN_2148 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x59U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_89)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_89);
        vlSelf->top__DOT__d_cache__DOT___GEN_2149 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x5aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_90)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_90);
        vlSelf->top__DOT__d_cache__DOT___GEN_2150 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x5bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_91)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_91);
        vlSelf->top__DOT__d_cache__DOT___GEN_2151 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x5cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_92)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_92);
        vlSelf->top__DOT__d_cache__DOT___GEN_2152 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x5dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_93)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_93);
        vlSelf->top__DOT__d_cache__DOT___GEN_2153 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x5eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_94)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_94);
        vlSelf->top__DOT__d_cache__DOT___GEN_2154 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x5fU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_95)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_95);
        vlSelf->top__DOT__d_cache__DOT___GEN_2155 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x60U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_96)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_96);
        vlSelf->top__DOT__d_cache__DOT___GEN_2156 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x61U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_97)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_97);
        vlSelf->top__DOT__d_cache__DOT___GEN_2157 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x62U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_98)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_98);
        vlSelf->top__DOT__d_cache__DOT___GEN_2158 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x63U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_99)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_99);
        vlSelf->top__DOT__d_cache__DOT___GEN_2159 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x64U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_100)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_100);
        vlSelf->top__DOT__d_cache__DOT___GEN_2160 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x65U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_101)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_101);
        vlSelf->top__DOT__d_cache__DOT___GEN_2161 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x66U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_102)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_102);
        vlSelf->top__DOT__d_cache__DOT___GEN_2162 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x67U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_103)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_103);
        vlSelf->top__DOT__d_cache__DOT___GEN_2163 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x68U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_104)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_104);
        vlSelf->top__DOT__d_cache__DOT___GEN_2164 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x69U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_105)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_105);
        vlSelf->top__DOT__d_cache__DOT___GEN_2165 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x6aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_106)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_106);
        vlSelf->top__DOT__d_cache__DOT___GEN_2166 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x6bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_107)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_107);
        vlSelf->top__DOT__d_cache__DOT___GEN_2167 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x6cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_108)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_108);
        vlSelf->top__DOT__d_cache__DOT___GEN_2168 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x6dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_109)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_109);
        vlSelf->top__DOT__d_cache__DOT___GEN_2169 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x6eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_110)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_110);
        vlSelf->top__DOT__d_cache__DOT___GEN_2170 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x6fU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_111)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_111);
        vlSelf->top__DOT__d_cache__DOT___GEN_2171 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x70U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_112)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_112);
        vlSelf->top__DOT__d_cache__DOT___GEN_2172 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x71U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_113)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_113);
        vlSelf->top__DOT__d_cache__DOT___GEN_2173 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x72U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_114)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_114);
        vlSelf->top__DOT__d_cache__DOT___GEN_2174 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x73U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_115)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_115);
        vlSelf->top__DOT__d_cache__DOT___GEN_2175 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x74U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_116)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_116);
        vlSelf->top__DOT__d_cache__DOT___GEN_2176 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x75U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_117)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_117);
        vlSelf->top__DOT__d_cache__DOT___GEN_2177 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x76U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_118)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_118);
        vlSelf->top__DOT__d_cache__DOT___GEN_2178 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x77U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_119)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_119);
        vlSelf->top__DOT__d_cache__DOT___GEN_2179 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x78U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_120)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_120);
        vlSelf->top__DOT__d_cache__DOT___GEN_2180 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x79U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_121)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_121);
        vlSelf->top__DOT__d_cache__DOT___GEN_2181 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x7aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_122)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_122);
        vlSelf->top__DOT__d_cache__DOT___GEN_2182 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x7bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_123)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_123);
        vlSelf->top__DOT__d_cache__DOT___GEN_2183 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x7cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_124)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_124);
        vlSelf->top__DOT__d_cache__DOT___GEN_2184 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x7dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_125)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_125);
        vlSelf->top__DOT__d_cache__DOT___GEN_2185 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x7eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_126)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_126);
        vlSelf->top__DOT__d_cache__DOT___GEN_2186 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x7fU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
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
    VL_EXTENDS_WQ(65,64, __Vtemp111, vlSelf->top__DOT__exu_step__DOT__src1_value);
    __Vtemp112[0U] = __Vtemp111[0U];
    __Vtemp112[1U] = __Vtemp111[1U];
    __Vtemp112[2U] = (1U & __Vtemp111[2U]);
    VL_EXTENDS_WQ(65,64, __Vtemp114, vlSelf->top__DOT__exu_step__DOT__src2_value);
    __Vtemp115[0U] = __Vtemp114[0U];
    __Vtemp115[1U] = __Vtemp114[1U];
    __Vtemp115[2U] = (1U & __Vtemp114[2U]);
    VL_DIVS_WWW(65, __Vtemp116, __Vtemp112, __Vtemp115);
    __Vtemp117[0U] = __Vtemp116[0U];
    __Vtemp117[1U] = __Vtemp116[1U];
    __Vtemp117[2U] = (1U & __Vtemp116[2U]);
    VL_EXTEND_WW(127,65, __Vtemp118, __Vtemp117);
    VL_EXTEND_WQ(127,64, __Vtemp119, VL_DIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value));
    VL_EXTEND_WQ(127,64, __Vtemp120, (((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT___divw_res_T_4 
                                                                    >> 0x1fU)))
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___divw_res_T_4))));
    VL_EXTEND_WQ(127,64, __Vtemp121, (((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2 
                                                                    >> 0x1fU)))
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2))));
    VL_EXTEND_WQ(128,64, __Vtemp122, vlSelf->top__DOT__exu_step__DOT__src1_value);
    VL_EXTEND_WQ(128,64, __Vtemp123, vlSelf->top__DOT__exu_step__DOT__src2_value);
    VL_MUL_W(4, __Vtemp124, __Vtemp122, __Vtemp123);
    VL_EXTEND_WQ(127,64, __Vtemp125, (((QData)((IData)(
                                                       __Vtemp124[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vtemp124[0U]))));
    VL_EXTEND_WQ(127,64, __Vtemp126, vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_74);
    VL_EXTEND_WQ(127,64, __Vtemp127, vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_69);
    VL_EXTEND_WQ(127,64, __Vtemp128, vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_74);
    VL_EXTEND_WQ(127,64, __Vtemp129, vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_69);
    VL_EXTEND_WQ(127,64, __Vtemp130, vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_59);
    VL_EXTEND_WQ(127,64, __Vtemp131, vlSelf->top__DOT__exu_step__DOT__srl_res);
    VL_EXTEND_WQ(127,64, __Vtemp132, top__DOT__exu_step__DOT___io_res2rd_T_162);
    if ((0x31U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))) {
        top__DOT__exu_step__DOT___io_res2rd_T_186[0U] 
            = __Vtemp118[0U];
        top__DOT__exu_step__DOT___io_res2rd_T_186[1U] 
            = __Vtemp118[1U];
        top__DOT__exu_step__DOT___io_res2rd_T_186[2U] 
            = __Vtemp118[2U];
        top__DOT__exu_step__DOT___io_res2rd_T_186[3U] 
            = __Vtemp118[3U];
    } else {
        top__DOT__exu_step__DOT___io_res2rd_T_186[0U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp119[0U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp120[0U]
                                     : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp121[0U]
                                         : ((0x11U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp125[0U]
                                             : ((0x1dU 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                __Vtemp126[0U]
                                                 : 
                                                ((0x1cU 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp127[0U]
                                                  : 
                                                 ((0x1bU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp128[0U]
                                                   : 
                                                  ((0x1aU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp129[0U]
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp130[0U]
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp131[0U]
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      vlSelf->top__DOT__exu_step__DOT__sll_res[0U]
                                                       : 
                                                      __Vtemp132[0U])))))))))));
        top__DOT__exu_step__DOT___io_res2rd_T_186[1U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp119[1U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp120[1U]
                                     : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp121[1U]
                                         : ((0x11U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp125[1U]
                                             : ((0x1dU 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                __Vtemp126[1U]
                                                 : 
                                                ((0x1cU 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp127[1U]
                                                  : 
                                                 ((0x1bU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp128[1U]
                                                   : 
                                                  ((0x1aU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp129[1U]
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp130[1U]
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp131[1U]
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      vlSelf->top__DOT__exu_step__DOT__sll_res[1U]
                                                       : 
                                                      __Vtemp132[1U])))))))))));
        top__DOT__exu_step__DOT___io_res2rd_T_186[2U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp119[2U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp120[2U]
                                     : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp121[2U]
                                         : ((0x11U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp125[2U]
                                             : ((0x1dU 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                __Vtemp126[2U]
                                                 : 
                                                ((0x1cU 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp127[2U]
                                                  : 
                                                 ((0x1bU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp128[2U]
                                                   : 
                                                  ((0x1aU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp129[2U]
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp130[2U]
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp131[2U]
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      vlSelf->top__DOT__exu_step__DOT__sll_res[2U]
                                                       : 
                                                      __Vtemp132[2U])))))))))));
        top__DOT__exu_step__DOT___io_res2rd_T_186[3U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp119[3U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp120[3U]
                                     : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp121[3U]
                                         : ((0x11U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp125[3U]
                                             : ((0x1dU 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                __Vtemp126[3U]
                                                 : 
                                                ((0x1cU 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp127[3U]
                                                  : 
                                                 ((0x1bU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp128[3U]
                                                   : 
                                                  ((0x1aU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp129[3U]
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp130[3U]
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp131[3U]
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      vlSelf->top__DOT__exu_step__DOT__sll_res[3U]
                                                       : 
                                                      __Vtemp132[3U])))))))))));
    }
    VL_EXTEND_WQ(127,64, __Vtemp157, vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                 [((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                    ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]);
    VL_EXTEND_WQ(127,64, __Vtemp158, vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                 [((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                    ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]);
    VL_EXTEND_WQ(127,64, __Vtemp159, vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                 [((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                    ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]);
    VL_EXTEND_WQ(127,64, __Vtemp160, vlSelf->top__DOT__exu_step__DOT__srl_res);
    VL_EXTEND_WQ(127,64, __Vtemp161, vlSelf->top__DOT__exu_step__DOT__sra_res);
    VL_EXTEND_WQ(127,64, __Vtemp162, VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value));
    VL_EXTEND_WQ(127,64, __Vtemp163, VL_MODDIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value));
    VL_EXTEND_WQ(127,64, __Vtemp164, (((QData)((IData)(
                                                       ((vlSelf->top__DOT__exu_step__DOT__remuw_res 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__remuw_res))));
    VL_EXTEND_WQ(127,64, __Vtemp165, (((QData)((IData)(
                                                       ((vlSelf->top__DOT__exu_step__DOT__remw_res 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__remw_res))));
    VL_EXTEND_WQ(127,64, __Vtemp166, (((QData)((IData)(
                                                       ((vlSelf->top__DOT__exu_step__DOT__divuw_res 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__divuw_res))));
    if ((0x47U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))) {
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U] 
            = __Vtemp157[0U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U] 
            = __Vtemp157[1U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[2U] 
            = __Vtemp157[2U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[3U] 
            = __Vtemp157[3U];
    } else {
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U] 
            = ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp158[0U] : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp159[0U]
                                     : ((0x38U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp160[0U]
                                         : ((0x39U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp161[0U]
                                             : ((0x37U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                vlSelf->top__DOT__exu_step__DOT__sll_res[0U]
                                                 : 
                                                ((0x34U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp162[0U]
                                                  : 
                                                 ((0x33U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp163[0U]
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp164[0U]
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp165[0U]
                                                     : 
                                                    ((0x35U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp166[0U]
                                                      : 
                                                     top__DOT__exu_step__DOT___io_res2rd_T_186[0U]))))))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U] 
            = ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp158[1U] : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp159[1U]
                                     : ((0x38U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp160[1U]
                                         : ((0x39U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp161[1U]
                                             : ((0x37U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                vlSelf->top__DOT__exu_step__DOT__sll_res[1U]
                                                 : 
                                                ((0x34U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp162[1U]
                                                  : 
                                                 ((0x33U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp163[1U]
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp164[1U]
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp165[1U]
                                                     : 
                                                    ((0x35U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp166[1U]
                                                      : 
                                                     top__DOT__exu_step__DOT___io_res2rd_T_186[1U]))))))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[2U] 
            = ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp158[2U] : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp159[2U]
                                     : ((0x38U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp160[2U]
                                         : ((0x39U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp161[2U]
                                             : ((0x37U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                vlSelf->top__DOT__exu_step__DOT__sll_res[2U]
                                                 : 
                                                ((0x34U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp162[2U]
                                                  : 
                                                 ((0x33U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp163[2U]
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp164[2U]
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp165[2U]
                                                     : 
                                                    ((0x35U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp166[2U]
                                                      : 
                                                     top__DOT__exu_step__DOT___io_res2rd_T_186[2U]))))))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[3U] 
            = ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp158[3U] : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp159[3U]
                                     : ((0x38U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp160[3U]
                                         : ((0x39U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp161[3U]
                                             : ((0x37U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                vlSelf->top__DOT__exu_step__DOT__sll_res[3U]
                                                 : 
                                                ((0x34U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp162[3U]
                                                  : 
                                                 ((0x33U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp163[3U]
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp164[3U]
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp165[3U]
                                                     : 
                                                    ((0x35U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp166[3U]
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
    vlSelf->top__DOT__d_cache__DOT___GEN_17322 = ((IData)(vlSelf->reset)
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
                                                           ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_5009)
                                                             ? 
                                                            (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_384)) 
                                                              << 0xaU) 
                                                             | ((QData)((IData)(
                                                                                (0x7fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                                >> 3U))))) 
                                                                << 3U))
                                                             : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr)))
                                                            : 
                                                           ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_3213)
                                                             ? 
                                                            (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_127)) 
                                                              << 0xaU) 
                                                             | ((QData)((IData)(
                                                                                (0x7fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                                >> 3U))))) 
                                                                << 3U))
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
