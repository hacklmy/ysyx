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
        vlSelf->top__DOT__d_cache__DOT___GEN_2114 = 
            ((0x37U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_55);
        vlSelf->top__DOT__d_cache__DOT___GEN_2115 = 
            ((0x38U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_56);
        vlSelf->top__DOT__d_cache__DOT___GEN_2116 = 
            ((0x39U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_57);
        vlSelf->top__DOT__d_cache__DOT___GEN_2117 = 
            ((0x3aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_58);
        vlSelf->top__DOT__d_cache__DOT___GEN_2118 = 
            ((0x3bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_59);
        vlSelf->top__DOT__d_cache__DOT___GEN_2119 = 
            ((0x3cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_60);
        vlSelf->top__DOT__d_cache__DOT___GEN_2120 = 
            ((0x3dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_61);
        vlSelf->top__DOT__d_cache__DOT___GEN_2121 = 
            ((0x3eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_62);
        vlSelf->top__DOT__d_cache__DOT___GEN_2122 = 
            ((0x3fU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_63);
        vlSelf->top__DOT__d_cache__DOT___GEN_2123 = 
            ((0x40U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_64);
        vlSelf->top__DOT__d_cache__DOT___GEN_2124 = 
            ((0x41U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_65);
        vlSelf->top__DOT__d_cache__DOT___GEN_2125 = 
            ((0x42U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_66);
        vlSelf->top__DOT__d_cache__DOT___GEN_2126 = 
            ((0x43U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_67);
        vlSelf->top__DOT__d_cache__DOT___GEN_2127 = 
            ((0x44U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_68);
        vlSelf->top__DOT__d_cache__DOT___GEN_2128 = 
            ((0x45U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_69);
        vlSelf->top__DOT__d_cache__DOT___GEN_2129 = 
            ((0x46U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_70);
        vlSelf->top__DOT__d_cache__DOT___GEN_2130 = 
            ((0x47U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_71);
        vlSelf->top__DOT__d_cache__DOT___GEN_2131 = 
            ((0x48U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_72);
        vlSelf->top__DOT__d_cache__DOT___GEN_2132 = 
            ((0x49U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_73);
        vlSelf->top__DOT__d_cache__DOT___GEN_2133 = 
            ((0x4aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_74);
        vlSelf->top__DOT__d_cache__DOT___GEN_2134 = 
            ((0x4bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_75);
        vlSelf->top__DOT__d_cache__DOT___GEN_2135 = 
            ((0x4cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_76);
        vlSelf->top__DOT__d_cache__DOT___GEN_2136 = 
            ((0x4dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_77);
        vlSelf->top__DOT__d_cache__DOT___GEN_2137 = 
            ((0x4eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_78);
        vlSelf->top__DOT__d_cache__DOT___GEN_2138 = 
            ((0x4fU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_79);
        vlSelf->top__DOT__d_cache__DOT___GEN_2139 = 
            ((0x50U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_80);
        vlSelf->top__DOT__d_cache__DOT___GEN_2140 = 
            ((0x51U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_81);
        vlSelf->top__DOT__d_cache__DOT___GEN_2141 = 
            ((0x52U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_82);
        vlSelf->top__DOT__d_cache__DOT___GEN_2142 = 
            ((0x53U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_83);
        vlSelf->top__DOT__d_cache__DOT___GEN_2143 = 
            ((0x54U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_84);
        vlSelf->top__DOT__d_cache__DOT___GEN_2144 = 
            ((0x55U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_85);
        vlSelf->top__DOT__d_cache__DOT___GEN_2145 = 
            ((0x56U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_86);
        vlSelf->top__DOT__d_cache__DOT___GEN_2146 = 
            ((0x57U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_87);
        vlSelf->top__DOT__d_cache__DOT___GEN_2147 = 
            ((0x58U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_88);
        vlSelf->top__DOT__d_cache__DOT___GEN_2148 = 
            ((0x59U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_89);
        vlSelf->top__DOT__d_cache__DOT___GEN_2149 = 
            ((0x5aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_90);
        vlSelf->top__DOT__d_cache__DOT___GEN_2150 = 
            ((0x5bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_91);
        vlSelf->top__DOT__d_cache__DOT___GEN_2151 = 
            ((0x5cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_92);
        vlSelf->top__DOT__d_cache__DOT___GEN_2152 = 
            ((0x5dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_93);
        vlSelf->top__DOT__d_cache__DOT___GEN_2153 = 
            ((0x5eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_94);
        vlSelf->top__DOT__d_cache__DOT___GEN_2154 = 
            ((0x5fU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_95);
        vlSelf->top__DOT__d_cache__DOT___GEN_2155 = 
            ((0x60U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_96);
        vlSelf->top__DOT__d_cache__DOT___GEN_2156 = 
            ((0x61U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_97);
        vlSelf->top__DOT__d_cache__DOT___GEN_2157 = 
            ((0x62U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_98);
        vlSelf->top__DOT__d_cache__DOT___GEN_2158 = 
            ((0x63U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_99);
        vlSelf->top__DOT__d_cache__DOT___GEN_2159 = 
            ((0x64U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_100);
        vlSelf->top__DOT__d_cache__DOT___GEN_2160 = 
            ((0x65U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_101);
        vlSelf->top__DOT__d_cache__DOT___GEN_2161 = 
            ((0x66U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_102);
        vlSelf->top__DOT__d_cache__DOT___GEN_2162 = 
            ((0x67U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_103);
        vlSelf->top__DOT__d_cache__DOT___GEN_2163 = 
            ((0x68U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_104);
        vlSelf->top__DOT__d_cache__DOT___GEN_2164 = 
            ((0x69U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_105);
        vlSelf->top__DOT__d_cache__DOT___GEN_2165 = 
            ((0x6aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_106);
        vlSelf->top__DOT__d_cache__DOT___GEN_2166 = 
            ((0x6bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_107);
        vlSelf->top__DOT__d_cache__DOT___GEN_2167 = 
            ((0x6cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_108);
        vlSelf->top__DOT__d_cache__DOT___GEN_2168 = 
            ((0x6dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_109);
        vlSelf->top__DOT__d_cache__DOT___GEN_2169 = 
            ((0x6eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_110);
        vlSelf->top__DOT__d_cache__DOT___GEN_2170 = 
            ((0x6fU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_111);
        vlSelf->top__DOT__d_cache__DOT___GEN_2171 = 
            ((0x70U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_112);
        vlSelf->top__DOT__d_cache__DOT___GEN_2172 = 
            ((0x71U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_113);
        vlSelf->top__DOT__d_cache__DOT___GEN_2173 = 
            ((0x72U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_114);
        vlSelf->top__DOT__d_cache__DOT___GEN_2174 = 
            ((0x73U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_115);
        vlSelf->top__DOT__d_cache__DOT___GEN_2175 = 
            ((0x74U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_116);
        vlSelf->top__DOT__d_cache__DOT___GEN_2176 = 
            ((0x75U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_117);
        vlSelf->top__DOT__d_cache__DOT___GEN_2177 = 
            ((0x76U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_118);
        vlSelf->top__DOT__d_cache__DOT___GEN_2178 = 
            ((0x77U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_119);
        vlSelf->top__DOT__d_cache__DOT___GEN_2179 = 
            ((0x78U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_120);
        vlSelf->top__DOT__d_cache__DOT___GEN_2180 = 
            ((0x79U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_121);
        vlSelf->top__DOT__d_cache__DOT___GEN_2181 = 
            ((0x7aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_122);
        vlSelf->top__DOT__d_cache__DOT___GEN_2182 = 
            ((0x7bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_123);
        vlSelf->top__DOT__d_cache__DOT___GEN_2183 = 
            ((0x7cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_124);
        vlSelf->top__DOT__d_cache__DOT___GEN_2184 = 
            ((0x7dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_125);
        vlSelf->top__DOT__d_cache__DOT___GEN_2185 = 
            ((0x7eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_126);
        vlSelf->top__DOT__d_cache__DOT___GEN_2186 = 
            ((0x7fU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_127);
        vlSelf->top__DOT__d_cache__DOT___GEN_2315 = vlSelf->top__DOT__d_cache__DOT__ram_1_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_2316 = vlSelf->top__DOT__d_cache__DOT__ram_1_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_2317 = vlSelf->top__DOT__d_cache__DOT__ram_1_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_2318 = vlSelf->top__DOT__d_cache__DOT__ram_1_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_2319 = vlSelf->top__DOT__d_cache__DOT__ram_1_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_2320 = vlSelf->top__DOT__d_cache__DOT__ram_1_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_2321 = vlSelf->top__DOT__d_cache__DOT__ram_1_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_2322 = vlSelf->top__DOT__d_cache__DOT__ram_1_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_2323 = vlSelf->top__DOT__d_cache__DOT__ram_1_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_2324 = vlSelf->top__DOT__d_cache__DOT__ram_1_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_2325 = vlSelf->top__DOT__d_cache__DOT__ram_1_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_2326 = vlSelf->top__DOT__d_cache__DOT__ram_1_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_2327 = vlSelf->top__DOT__d_cache__DOT__ram_1_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_2328 = vlSelf->top__DOT__d_cache__DOT__ram_1_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_2329 = vlSelf->top__DOT__d_cache__DOT__ram_1_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_2330 = vlSelf->top__DOT__d_cache__DOT__ram_1_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_2331 = vlSelf->top__DOT__d_cache__DOT__ram_1_16;
        vlSelf->top__DOT__d_cache__DOT___GEN_2332 = vlSelf->top__DOT__d_cache__DOT__ram_1_17;
        vlSelf->top__DOT__d_cache__DOT___GEN_2333 = vlSelf->top__DOT__d_cache__DOT__ram_1_18;
        vlSelf->top__DOT__d_cache__DOT___GEN_2334 = vlSelf->top__DOT__d_cache__DOT__ram_1_19;
        vlSelf->top__DOT__d_cache__DOT___GEN_2335 = vlSelf->top__DOT__d_cache__DOT__ram_1_20;
        vlSelf->top__DOT__d_cache__DOT___GEN_2336 = vlSelf->top__DOT__d_cache__DOT__ram_1_21;
        vlSelf->top__DOT__d_cache__DOT___GEN_2337 = vlSelf->top__DOT__d_cache__DOT__ram_1_22;
        vlSelf->top__DOT__d_cache__DOT___GEN_2338 = vlSelf->top__DOT__d_cache__DOT__ram_1_23;
        vlSelf->top__DOT__d_cache__DOT___GEN_2339 = vlSelf->top__DOT__d_cache__DOT__ram_1_24;
        vlSelf->top__DOT__d_cache__DOT___GEN_2340 = vlSelf->top__DOT__d_cache__DOT__ram_1_25;
        vlSelf->top__DOT__d_cache__DOT___GEN_2341 = vlSelf->top__DOT__d_cache__DOT__ram_1_26;
        vlSelf->top__DOT__d_cache__DOT___GEN_2342 = vlSelf->top__DOT__d_cache__DOT__ram_1_27;
        vlSelf->top__DOT__d_cache__DOT___GEN_2343 = vlSelf->top__DOT__d_cache__DOT__ram_1_28;
        vlSelf->top__DOT__d_cache__DOT___GEN_2344 = vlSelf->top__DOT__d_cache__DOT__ram_1_29;
        vlSelf->top__DOT__d_cache__DOT___GEN_2345 = vlSelf->top__DOT__d_cache__DOT__ram_1_30;
        vlSelf->top__DOT__d_cache__DOT___GEN_2346 = vlSelf->top__DOT__d_cache__DOT__ram_1_31;
        vlSelf->top__DOT__d_cache__DOT___GEN_2347 = vlSelf->top__DOT__d_cache__DOT__ram_1_32;
        vlSelf->top__DOT__d_cache__DOT___GEN_2348 = vlSelf->top__DOT__d_cache__DOT__ram_1_33;
        vlSelf->top__DOT__d_cache__DOT___GEN_2349 = vlSelf->top__DOT__d_cache__DOT__ram_1_34;
        vlSelf->top__DOT__d_cache__DOT___GEN_2350 = vlSelf->top__DOT__d_cache__DOT__ram_1_35;
        vlSelf->top__DOT__d_cache__DOT___GEN_2351 = vlSelf->top__DOT__d_cache__DOT__ram_1_36;
        vlSelf->top__DOT__d_cache__DOT___GEN_2352 = vlSelf->top__DOT__d_cache__DOT__ram_1_37;
        vlSelf->top__DOT__d_cache__DOT___GEN_2353 = vlSelf->top__DOT__d_cache__DOT__ram_1_38;
        vlSelf->top__DOT__d_cache__DOT___GEN_2354 = vlSelf->top__DOT__d_cache__DOT__ram_1_39;
        vlSelf->top__DOT__d_cache__DOT___GEN_2355 = vlSelf->top__DOT__d_cache__DOT__ram_1_40;
        vlSelf->top__DOT__d_cache__DOT___GEN_2356 = vlSelf->top__DOT__d_cache__DOT__ram_1_41;
        vlSelf->top__DOT__d_cache__DOT___GEN_2357 = vlSelf->top__DOT__d_cache__DOT__ram_1_42;
        vlSelf->top__DOT__d_cache__DOT___GEN_2358 = vlSelf->top__DOT__d_cache__DOT__ram_1_43;
        vlSelf->top__DOT__d_cache__DOT___GEN_2359 = vlSelf->top__DOT__d_cache__DOT__ram_1_44;
        vlSelf->top__DOT__d_cache__DOT___GEN_2360 = vlSelf->top__DOT__d_cache__DOT__ram_1_45;
        vlSelf->top__DOT__d_cache__DOT___GEN_2361 = vlSelf->top__DOT__d_cache__DOT__ram_1_46;
        vlSelf->top__DOT__d_cache__DOT___GEN_2362 = vlSelf->top__DOT__d_cache__DOT__ram_1_47;
        vlSelf->top__DOT__d_cache__DOT___GEN_2363 = vlSelf->top__DOT__d_cache__DOT__ram_1_48;
        vlSelf->top__DOT__d_cache__DOT___GEN_2364 = vlSelf->top__DOT__d_cache__DOT__ram_1_49;
        vlSelf->top__DOT__d_cache__DOT___GEN_2365 = vlSelf->top__DOT__d_cache__DOT__ram_1_50;
        vlSelf->top__DOT__d_cache__DOT___GEN_2366 = vlSelf->top__DOT__d_cache__DOT__ram_1_51;
        vlSelf->top__DOT__d_cache__DOT___GEN_2367 = vlSelf->top__DOT__d_cache__DOT__ram_1_52;
        vlSelf->top__DOT__d_cache__DOT___GEN_2368 = vlSelf->top__DOT__d_cache__DOT__ram_1_53;
        vlSelf->top__DOT__d_cache__DOT___GEN_2369 = vlSelf->top__DOT__d_cache__DOT__ram_1_54;
        vlSelf->top__DOT__d_cache__DOT___GEN_2370 = vlSelf->top__DOT__d_cache__DOT__ram_1_55;
        vlSelf->top__DOT__d_cache__DOT___GEN_2371 = vlSelf->top__DOT__d_cache__DOT__ram_1_56;
        vlSelf->top__DOT__d_cache__DOT___GEN_2372 = vlSelf->top__DOT__d_cache__DOT__ram_1_57;
        vlSelf->top__DOT__d_cache__DOT___GEN_2373 = vlSelf->top__DOT__d_cache__DOT__ram_1_58;
        vlSelf->top__DOT__d_cache__DOT___GEN_2374 = vlSelf->top__DOT__d_cache__DOT__ram_1_59;
        vlSelf->top__DOT__d_cache__DOT___GEN_2375 = vlSelf->top__DOT__d_cache__DOT__ram_1_60;
        vlSelf->top__DOT__d_cache__DOT___GEN_2376 = vlSelf->top__DOT__d_cache__DOT__ram_1_61;
        vlSelf->top__DOT__d_cache__DOT___GEN_2377 = vlSelf->top__DOT__d_cache__DOT__ram_1_62;
        vlSelf->top__DOT__d_cache__DOT___GEN_2378 = vlSelf->top__DOT__d_cache__DOT__ram_1_63;
        vlSelf->top__DOT__d_cache__DOT___GEN_2379 = vlSelf->top__DOT__d_cache__DOT__ram_1_64;
        vlSelf->top__DOT__d_cache__DOT___GEN_2380 = vlSelf->top__DOT__d_cache__DOT__ram_1_65;
        vlSelf->top__DOT__d_cache__DOT___GEN_2381 = vlSelf->top__DOT__d_cache__DOT__ram_1_66;
        vlSelf->top__DOT__d_cache__DOT___GEN_2382 = vlSelf->top__DOT__d_cache__DOT__ram_1_67;
        vlSelf->top__DOT__d_cache__DOT___GEN_2383 = vlSelf->top__DOT__d_cache__DOT__ram_1_68;
        vlSelf->top__DOT__d_cache__DOT___GEN_2384 = vlSelf->top__DOT__d_cache__DOT__ram_1_69;
        vlSelf->top__DOT__d_cache__DOT___GEN_2385 = vlSelf->top__DOT__d_cache__DOT__ram_1_70;
        vlSelf->top__DOT__d_cache__DOT___GEN_2386 = vlSelf->top__DOT__d_cache__DOT__ram_1_71;
        vlSelf->top__DOT__d_cache__DOT___GEN_2387 = vlSelf->top__DOT__d_cache__DOT__ram_1_72;
        vlSelf->top__DOT__d_cache__DOT___GEN_2388 = vlSelf->top__DOT__d_cache__DOT__ram_1_73;
        vlSelf->top__DOT__d_cache__DOT___GEN_2389 = vlSelf->top__DOT__d_cache__DOT__ram_1_74;
        vlSelf->top__DOT__d_cache__DOT___GEN_2390 = vlSelf->top__DOT__d_cache__DOT__ram_1_75;
        vlSelf->top__DOT__d_cache__DOT___GEN_2391 = vlSelf->top__DOT__d_cache__DOT__ram_1_76;
        vlSelf->top__DOT__d_cache__DOT___GEN_2392 = vlSelf->top__DOT__d_cache__DOT__ram_1_77;
        vlSelf->top__DOT__d_cache__DOT___GEN_2393 = vlSelf->top__DOT__d_cache__DOT__ram_1_78;
        vlSelf->top__DOT__d_cache__DOT___GEN_2394 = vlSelf->top__DOT__d_cache__DOT__ram_1_79;
        vlSelf->top__DOT__d_cache__DOT___GEN_2395 = vlSelf->top__DOT__d_cache__DOT__ram_1_80;
        vlSelf->top__DOT__d_cache__DOT___GEN_2396 = vlSelf->top__DOT__d_cache__DOT__ram_1_81;
        vlSelf->top__DOT__d_cache__DOT___GEN_2397 = vlSelf->top__DOT__d_cache__DOT__ram_1_82;
        vlSelf->top__DOT__d_cache__DOT___GEN_2398 = vlSelf->top__DOT__d_cache__DOT__ram_1_83;
        vlSelf->top__DOT__d_cache__DOT___GEN_2399 = vlSelf->top__DOT__d_cache__DOT__ram_1_84;
        vlSelf->top__DOT__d_cache__DOT___GEN_2400 = vlSelf->top__DOT__d_cache__DOT__ram_1_85;
        vlSelf->top__DOT__d_cache__DOT___GEN_2401 = vlSelf->top__DOT__d_cache__DOT__ram_1_86;
        vlSelf->top__DOT__d_cache__DOT___GEN_2402 = vlSelf->top__DOT__d_cache__DOT__ram_1_87;
        vlSelf->top__DOT__d_cache__DOT___GEN_2403 = vlSelf->top__DOT__d_cache__DOT__ram_1_88;
        vlSelf->top__DOT__d_cache__DOT___GEN_2404 = vlSelf->top__DOT__d_cache__DOT__ram_1_89;
        vlSelf->top__DOT__d_cache__DOT___GEN_2405 = vlSelf->top__DOT__d_cache__DOT__ram_1_90;
        vlSelf->top__DOT__d_cache__DOT___GEN_2406 = vlSelf->top__DOT__d_cache__DOT__ram_1_91;
        vlSelf->top__DOT__d_cache__DOT___GEN_2407 = vlSelf->top__DOT__d_cache__DOT__ram_1_92;
        vlSelf->top__DOT__d_cache__DOT___GEN_2408 = vlSelf->top__DOT__d_cache__DOT__ram_1_93;
        vlSelf->top__DOT__d_cache__DOT___GEN_2409 = vlSelf->top__DOT__d_cache__DOT__ram_1_94;
        vlSelf->top__DOT__d_cache__DOT___GEN_2410 = vlSelf->top__DOT__d_cache__DOT__ram_1_95;
        vlSelf->top__DOT__d_cache__DOT___GEN_2411 = vlSelf->top__DOT__d_cache__DOT__ram_1_96;
        vlSelf->top__DOT__d_cache__DOT___GEN_2412 = vlSelf->top__DOT__d_cache__DOT__ram_1_97;
        vlSelf->top__DOT__d_cache__DOT___GEN_2413 = vlSelf->top__DOT__d_cache__DOT__ram_1_98;
        vlSelf->top__DOT__d_cache__DOT___GEN_2414 = vlSelf->top__DOT__d_cache__DOT__ram_1_99;
        vlSelf->top__DOT__d_cache__DOT___GEN_2415 = vlSelf->top__DOT__d_cache__DOT__ram_1_100;
        vlSelf->top__DOT__d_cache__DOT___GEN_2416 = vlSelf->top__DOT__d_cache__DOT__ram_1_101;
        vlSelf->top__DOT__d_cache__DOT___GEN_2417 = vlSelf->top__DOT__d_cache__DOT__ram_1_102;
        vlSelf->top__DOT__d_cache__DOT___GEN_2418 = vlSelf->top__DOT__d_cache__DOT__ram_1_103;
        vlSelf->top__DOT__d_cache__DOT___GEN_2419 = vlSelf->top__DOT__d_cache__DOT__ram_1_104;
        vlSelf->top__DOT__d_cache__DOT___GEN_2420 = vlSelf->top__DOT__d_cache__DOT__ram_1_105;
        vlSelf->top__DOT__d_cache__DOT___GEN_2421 = vlSelf->top__DOT__d_cache__DOT__ram_1_106;
        vlSelf->top__DOT__d_cache__DOT___GEN_2422 = vlSelf->top__DOT__d_cache__DOT__ram_1_107;
        vlSelf->top__DOT__d_cache__DOT___GEN_2423 = vlSelf->top__DOT__d_cache__DOT__ram_1_108;
        vlSelf->top__DOT__d_cache__DOT___GEN_2424 = vlSelf->top__DOT__d_cache__DOT__ram_1_109;
        vlSelf->top__DOT__d_cache__DOT___GEN_2425 = vlSelf->top__DOT__d_cache__DOT__ram_1_110;
        vlSelf->top__DOT__d_cache__DOT___GEN_2426 = vlSelf->top__DOT__d_cache__DOT__ram_1_111;
        vlSelf->top__DOT__d_cache__DOT___GEN_2427 = vlSelf->top__DOT__d_cache__DOT__ram_1_112;
        vlSelf->top__DOT__d_cache__DOT___GEN_2428 = vlSelf->top__DOT__d_cache__DOT__ram_1_113;
        vlSelf->top__DOT__d_cache__DOT___GEN_2429 = vlSelf->top__DOT__d_cache__DOT__ram_1_114;
        vlSelf->top__DOT__d_cache__DOT___GEN_2430 = vlSelf->top__DOT__d_cache__DOT__ram_1_115;
        vlSelf->top__DOT__d_cache__DOT___GEN_2431 = vlSelf->top__DOT__d_cache__DOT__ram_1_116;
        vlSelf->top__DOT__d_cache__DOT___GEN_2432 = vlSelf->top__DOT__d_cache__DOT__ram_1_117;
        vlSelf->top__DOT__d_cache__DOT___GEN_2433 = vlSelf->top__DOT__d_cache__DOT__ram_1_118;
        vlSelf->top__DOT__d_cache__DOT___GEN_2434 = vlSelf->top__DOT__d_cache__DOT__ram_1_119;
        vlSelf->top__DOT__d_cache__DOT___GEN_2435 = vlSelf->top__DOT__d_cache__DOT__ram_1_120;
        vlSelf->top__DOT__d_cache__DOT___GEN_2436 = vlSelf->top__DOT__d_cache__DOT__ram_1_121;
        vlSelf->top__DOT__d_cache__DOT___GEN_2437 = vlSelf->top__DOT__d_cache__DOT__ram_1_122;
        vlSelf->top__DOT__d_cache__DOT___GEN_2438 = vlSelf->top__DOT__d_cache__DOT__ram_1_123;
        vlSelf->top__DOT__d_cache__DOT___GEN_2439 = vlSelf->top__DOT__d_cache__DOT__ram_1_124;
        vlSelf->top__DOT__d_cache__DOT___GEN_2440 = vlSelf->top__DOT__d_cache__DOT__ram_1_125;
        vlSelf->top__DOT__d_cache__DOT___GEN_2441 = vlSelf->top__DOT__d_cache__DOT__ram_1_126;
        vlSelf->top__DOT__d_cache__DOT___GEN_2442 = vlSelf->top__DOT__d_cache__DOT__ram_1_127;
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_2114 = vlSelf->top__DOT__d_cache__DOT__ram_0_55;
        vlSelf->top__DOT__d_cache__DOT___GEN_2115 = vlSelf->top__DOT__d_cache__DOT__ram_0_56;
        vlSelf->top__DOT__d_cache__DOT___GEN_2116 = vlSelf->top__DOT__d_cache__DOT__ram_0_57;
        vlSelf->top__DOT__d_cache__DOT___GEN_2117 = vlSelf->top__DOT__d_cache__DOT__ram_0_58;
        vlSelf->top__DOT__d_cache__DOT___GEN_2118 = vlSelf->top__DOT__d_cache__DOT__ram_0_59;
        vlSelf->top__DOT__d_cache__DOT___GEN_2119 = vlSelf->top__DOT__d_cache__DOT__ram_0_60;
        vlSelf->top__DOT__d_cache__DOT___GEN_2120 = vlSelf->top__DOT__d_cache__DOT__ram_0_61;
        vlSelf->top__DOT__d_cache__DOT___GEN_2121 = vlSelf->top__DOT__d_cache__DOT__ram_0_62;
        vlSelf->top__DOT__d_cache__DOT___GEN_2122 = vlSelf->top__DOT__d_cache__DOT__ram_0_63;
        vlSelf->top__DOT__d_cache__DOT___GEN_2123 = vlSelf->top__DOT__d_cache__DOT__ram_0_64;
        vlSelf->top__DOT__d_cache__DOT___GEN_2124 = vlSelf->top__DOT__d_cache__DOT__ram_0_65;
        vlSelf->top__DOT__d_cache__DOT___GEN_2125 = vlSelf->top__DOT__d_cache__DOT__ram_0_66;
        vlSelf->top__DOT__d_cache__DOT___GEN_2126 = vlSelf->top__DOT__d_cache__DOT__ram_0_67;
        vlSelf->top__DOT__d_cache__DOT___GEN_2127 = vlSelf->top__DOT__d_cache__DOT__ram_0_68;
        vlSelf->top__DOT__d_cache__DOT___GEN_2128 = vlSelf->top__DOT__d_cache__DOT__ram_0_69;
        vlSelf->top__DOT__d_cache__DOT___GEN_2129 = vlSelf->top__DOT__d_cache__DOT__ram_0_70;
        vlSelf->top__DOT__d_cache__DOT___GEN_2130 = vlSelf->top__DOT__d_cache__DOT__ram_0_71;
        vlSelf->top__DOT__d_cache__DOT___GEN_2131 = vlSelf->top__DOT__d_cache__DOT__ram_0_72;
        vlSelf->top__DOT__d_cache__DOT___GEN_2132 = vlSelf->top__DOT__d_cache__DOT__ram_0_73;
        vlSelf->top__DOT__d_cache__DOT___GEN_2133 = vlSelf->top__DOT__d_cache__DOT__ram_0_74;
        vlSelf->top__DOT__d_cache__DOT___GEN_2134 = vlSelf->top__DOT__d_cache__DOT__ram_0_75;
        vlSelf->top__DOT__d_cache__DOT___GEN_2135 = vlSelf->top__DOT__d_cache__DOT__ram_0_76;
        vlSelf->top__DOT__d_cache__DOT___GEN_2136 = vlSelf->top__DOT__d_cache__DOT__ram_0_77;
        vlSelf->top__DOT__d_cache__DOT___GEN_2137 = vlSelf->top__DOT__d_cache__DOT__ram_0_78;
        vlSelf->top__DOT__d_cache__DOT___GEN_2138 = vlSelf->top__DOT__d_cache__DOT__ram_0_79;
        vlSelf->top__DOT__d_cache__DOT___GEN_2139 = vlSelf->top__DOT__d_cache__DOT__ram_0_80;
        vlSelf->top__DOT__d_cache__DOT___GEN_2140 = vlSelf->top__DOT__d_cache__DOT__ram_0_81;
        vlSelf->top__DOT__d_cache__DOT___GEN_2141 = vlSelf->top__DOT__d_cache__DOT__ram_0_82;
        vlSelf->top__DOT__d_cache__DOT___GEN_2142 = vlSelf->top__DOT__d_cache__DOT__ram_0_83;
        vlSelf->top__DOT__d_cache__DOT___GEN_2143 = vlSelf->top__DOT__d_cache__DOT__ram_0_84;
        vlSelf->top__DOT__d_cache__DOT___GEN_2144 = vlSelf->top__DOT__d_cache__DOT__ram_0_85;
        vlSelf->top__DOT__d_cache__DOT___GEN_2145 = vlSelf->top__DOT__d_cache__DOT__ram_0_86;
        vlSelf->top__DOT__d_cache__DOT___GEN_2146 = vlSelf->top__DOT__d_cache__DOT__ram_0_87;
        vlSelf->top__DOT__d_cache__DOT___GEN_2147 = vlSelf->top__DOT__d_cache__DOT__ram_0_88;
        vlSelf->top__DOT__d_cache__DOT___GEN_2148 = vlSelf->top__DOT__d_cache__DOT__ram_0_89;
        vlSelf->top__DOT__d_cache__DOT___GEN_2149 = vlSelf->top__DOT__d_cache__DOT__ram_0_90;
        vlSelf->top__DOT__d_cache__DOT___GEN_2150 = vlSelf->top__DOT__d_cache__DOT__ram_0_91;
        vlSelf->top__DOT__d_cache__DOT___GEN_2151 = vlSelf->top__DOT__d_cache__DOT__ram_0_92;
        vlSelf->top__DOT__d_cache__DOT___GEN_2152 = vlSelf->top__DOT__d_cache__DOT__ram_0_93;
        vlSelf->top__DOT__d_cache__DOT___GEN_2153 = vlSelf->top__DOT__d_cache__DOT__ram_0_94;
        vlSelf->top__DOT__d_cache__DOT___GEN_2154 = vlSelf->top__DOT__d_cache__DOT__ram_0_95;
        vlSelf->top__DOT__d_cache__DOT___GEN_2155 = vlSelf->top__DOT__d_cache__DOT__ram_0_96;
        vlSelf->top__DOT__d_cache__DOT___GEN_2156 = vlSelf->top__DOT__d_cache__DOT__ram_0_97;
        vlSelf->top__DOT__d_cache__DOT___GEN_2157 = vlSelf->top__DOT__d_cache__DOT__ram_0_98;
        vlSelf->top__DOT__d_cache__DOT___GEN_2158 = vlSelf->top__DOT__d_cache__DOT__ram_0_99;
        vlSelf->top__DOT__d_cache__DOT___GEN_2159 = vlSelf->top__DOT__d_cache__DOT__ram_0_100;
        vlSelf->top__DOT__d_cache__DOT___GEN_2160 = vlSelf->top__DOT__d_cache__DOT__ram_0_101;
        vlSelf->top__DOT__d_cache__DOT___GEN_2161 = vlSelf->top__DOT__d_cache__DOT__ram_0_102;
        vlSelf->top__DOT__d_cache__DOT___GEN_2162 = vlSelf->top__DOT__d_cache__DOT__ram_0_103;
        vlSelf->top__DOT__d_cache__DOT___GEN_2163 = vlSelf->top__DOT__d_cache__DOT__ram_0_104;
        vlSelf->top__DOT__d_cache__DOT___GEN_2164 = vlSelf->top__DOT__d_cache__DOT__ram_0_105;
        vlSelf->top__DOT__d_cache__DOT___GEN_2165 = vlSelf->top__DOT__d_cache__DOT__ram_0_106;
        vlSelf->top__DOT__d_cache__DOT___GEN_2166 = vlSelf->top__DOT__d_cache__DOT__ram_0_107;
        vlSelf->top__DOT__d_cache__DOT___GEN_2167 = vlSelf->top__DOT__d_cache__DOT__ram_0_108;
        vlSelf->top__DOT__d_cache__DOT___GEN_2168 = vlSelf->top__DOT__d_cache__DOT__ram_0_109;
        vlSelf->top__DOT__d_cache__DOT___GEN_2169 = vlSelf->top__DOT__d_cache__DOT__ram_0_110;
        vlSelf->top__DOT__d_cache__DOT___GEN_2170 = vlSelf->top__DOT__d_cache__DOT__ram_0_111;
        vlSelf->top__DOT__d_cache__DOT___GEN_2171 = vlSelf->top__DOT__d_cache__DOT__ram_0_112;
        vlSelf->top__DOT__d_cache__DOT___GEN_2172 = vlSelf->top__DOT__d_cache__DOT__ram_0_113;
        vlSelf->top__DOT__d_cache__DOT___GEN_2173 = vlSelf->top__DOT__d_cache__DOT__ram_0_114;
        vlSelf->top__DOT__d_cache__DOT___GEN_2174 = vlSelf->top__DOT__d_cache__DOT__ram_0_115;
        vlSelf->top__DOT__d_cache__DOT___GEN_2175 = vlSelf->top__DOT__d_cache__DOT__ram_0_116;
        vlSelf->top__DOT__d_cache__DOT___GEN_2176 = vlSelf->top__DOT__d_cache__DOT__ram_0_117;
        vlSelf->top__DOT__d_cache__DOT___GEN_2177 = vlSelf->top__DOT__d_cache__DOT__ram_0_118;
        vlSelf->top__DOT__d_cache__DOT___GEN_2178 = vlSelf->top__DOT__d_cache__DOT__ram_0_119;
        vlSelf->top__DOT__d_cache__DOT___GEN_2179 = vlSelf->top__DOT__d_cache__DOT__ram_0_120;
        vlSelf->top__DOT__d_cache__DOT___GEN_2180 = vlSelf->top__DOT__d_cache__DOT__ram_0_121;
        vlSelf->top__DOT__d_cache__DOT___GEN_2181 = vlSelf->top__DOT__d_cache__DOT__ram_0_122;
        vlSelf->top__DOT__d_cache__DOT___GEN_2182 = vlSelf->top__DOT__d_cache__DOT__ram_0_123;
        vlSelf->top__DOT__d_cache__DOT___GEN_2183 = vlSelf->top__DOT__d_cache__DOT__ram_0_124;
        vlSelf->top__DOT__d_cache__DOT___GEN_2184 = vlSelf->top__DOT__d_cache__DOT__ram_0_125;
        vlSelf->top__DOT__d_cache__DOT___GEN_2185 = vlSelf->top__DOT__d_cache__DOT__ram_0_126;
        vlSelf->top__DOT__d_cache__DOT___GEN_2186 = vlSelf->top__DOT__d_cache__DOT__ram_0_127;
        vlSelf->top__DOT__d_cache__DOT___GEN_2315 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_0)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_0);
        vlSelf->top__DOT__d_cache__DOT___GEN_2316 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((1U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_1)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_1);
        vlSelf->top__DOT__d_cache__DOT___GEN_2317 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((2U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_2)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_2);
        vlSelf->top__DOT__d_cache__DOT___GEN_2318 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((3U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_3)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_3);
        vlSelf->top__DOT__d_cache__DOT___GEN_2319 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((4U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_4)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_4);
        vlSelf->top__DOT__d_cache__DOT___GEN_2320 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((5U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_5)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_5);
        vlSelf->top__DOT__d_cache__DOT___GEN_2321 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((6U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_6)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_6);
        vlSelf->top__DOT__d_cache__DOT___GEN_2322 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((7U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_7)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_7);
        vlSelf->top__DOT__d_cache__DOT___GEN_2323 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((8U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_8)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_8);
        vlSelf->top__DOT__d_cache__DOT___GEN_2324 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((9U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                          >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_9)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_9);
        vlSelf->top__DOT__d_cache__DOT___GEN_2325 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xaU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                            >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_10)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_10);
        vlSelf->top__DOT__d_cache__DOT___GEN_2326 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xbU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                            >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_11)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_11);
        vlSelf->top__DOT__d_cache__DOT___GEN_2327 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xcU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                            >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_12)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_12);
        vlSelf->top__DOT__d_cache__DOT___GEN_2328 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xdU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                            >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_13)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_13);
        vlSelf->top__DOT__d_cache__DOT___GEN_2329 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xeU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                            >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_14)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_14);
        vlSelf->top__DOT__d_cache__DOT___GEN_2330 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xfU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                            >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_15)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_15);
        vlSelf->top__DOT__d_cache__DOT___GEN_2331 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x10U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_16)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_16);
        vlSelf->top__DOT__d_cache__DOT___GEN_2332 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x11U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_17)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_17);
        vlSelf->top__DOT__d_cache__DOT___GEN_2333 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x12U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_18)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_18);
        vlSelf->top__DOT__d_cache__DOT___GEN_2334 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x13U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_19)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_19);
        vlSelf->top__DOT__d_cache__DOT___GEN_2335 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x14U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_20)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_20);
        vlSelf->top__DOT__d_cache__DOT___GEN_2336 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x15U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_21)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_21);
        vlSelf->top__DOT__d_cache__DOT___GEN_2337 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x16U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_22)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_22);
        vlSelf->top__DOT__d_cache__DOT___GEN_2338 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x17U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_23)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_23);
        vlSelf->top__DOT__d_cache__DOT___GEN_2339 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x18U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_24)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_24);
        vlSelf->top__DOT__d_cache__DOT___GEN_2340 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x19U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_25)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_25);
        vlSelf->top__DOT__d_cache__DOT___GEN_2341 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_26)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_26);
        vlSelf->top__DOT__d_cache__DOT___GEN_2342 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_27)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_27);
        vlSelf->top__DOT__d_cache__DOT___GEN_2343 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_28)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_28);
        vlSelf->top__DOT__d_cache__DOT___GEN_2344 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_29)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_29);
        vlSelf->top__DOT__d_cache__DOT___GEN_2345 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_30)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_30);
        vlSelf->top__DOT__d_cache__DOT___GEN_2346 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1fU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_31)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_31);
        vlSelf->top__DOT__d_cache__DOT___GEN_2347 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x20U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_32)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_32);
        vlSelf->top__DOT__d_cache__DOT___GEN_2348 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x21U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_33)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_33);
        vlSelf->top__DOT__d_cache__DOT___GEN_2349 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x22U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_34)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_34);
        vlSelf->top__DOT__d_cache__DOT___GEN_2350 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x23U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_35)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_35);
        vlSelf->top__DOT__d_cache__DOT___GEN_2351 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x24U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_36)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_36);
        vlSelf->top__DOT__d_cache__DOT___GEN_2352 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x25U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_37)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_37);
        vlSelf->top__DOT__d_cache__DOT___GEN_2353 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x26U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_38)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_38);
        vlSelf->top__DOT__d_cache__DOT___GEN_2354 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x27U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_39)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_39);
        vlSelf->top__DOT__d_cache__DOT___GEN_2355 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x28U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_40)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_40);
        vlSelf->top__DOT__d_cache__DOT___GEN_2356 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x29U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_41)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_41);
        vlSelf->top__DOT__d_cache__DOT___GEN_2357 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_42)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_42);
        vlSelf->top__DOT__d_cache__DOT___GEN_2358 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_43)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_43);
        vlSelf->top__DOT__d_cache__DOT___GEN_2359 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_44)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_44);
        vlSelf->top__DOT__d_cache__DOT___GEN_2360 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_45)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_45);
        vlSelf->top__DOT__d_cache__DOT___GEN_2361 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_46)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_46);
        vlSelf->top__DOT__d_cache__DOT___GEN_2362 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2fU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_47)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_47);
        vlSelf->top__DOT__d_cache__DOT___GEN_2363 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x30U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_48)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_48);
        vlSelf->top__DOT__d_cache__DOT___GEN_2364 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x31U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_49)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_49);
        vlSelf->top__DOT__d_cache__DOT___GEN_2365 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x32U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_50)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_50);
        vlSelf->top__DOT__d_cache__DOT___GEN_2366 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x33U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_51)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_51);
        vlSelf->top__DOT__d_cache__DOT___GEN_2367 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x34U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_52)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_52);
        vlSelf->top__DOT__d_cache__DOT___GEN_2368 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x35U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_53)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_53);
        vlSelf->top__DOT__d_cache__DOT___GEN_2369 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x36U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_54)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_54);
        vlSelf->top__DOT__d_cache__DOT___GEN_2370 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x37U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_55)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_55);
        vlSelf->top__DOT__d_cache__DOT___GEN_2371 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x38U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_56)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_56);
        vlSelf->top__DOT__d_cache__DOT___GEN_2372 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x39U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_57)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_57);
        vlSelf->top__DOT__d_cache__DOT___GEN_2373 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_58)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_58);
        vlSelf->top__DOT__d_cache__DOT___GEN_2374 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_59)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_59);
        vlSelf->top__DOT__d_cache__DOT___GEN_2375 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_60)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_60);
        vlSelf->top__DOT__d_cache__DOT___GEN_2376 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_61)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_61);
        vlSelf->top__DOT__d_cache__DOT___GEN_2377 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_62)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_62);
        vlSelf->top__DOT__d_cache__DOT___GEN_2378 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3fU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_63)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_63);
        vlSelf->top__DOT__d_cache__DOT___GEN_2379 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x40U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_64)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_64);
        vlSelf->top__DOT__d_cache__DOT___GEN_2380 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x41U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_65)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_65);
        vlSelf->top__DOT__d_cache__DOT___GEN_2381 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x42U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_66)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_66);
        vlSelf->top__DOT__d_cache__DOT___GEN_2382 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x43U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_67)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_67);
        vlSelf->top__DOT__d_cache__DOT___GEN_2383 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x44U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_68)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_68);
        vlSelf->top__DOT__d_cache__DOT___GEN_2384 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x45U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_69)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_69);
        vlSelf->top__DOT__d_cache__DOT___GEN_2385 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x46U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_70)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_70);
        vlSelf->top__DOT__d_cache__DOT___GEN_2386 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x47U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_71)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_71);
        vlSelf->top__DOT__d_cache__DOT___GEN_2387 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x48U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_72)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_72);
        vlSelf->top__DOT__d_cache__DOT___GEN_2388 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x49U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_73)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_73);
        vlSelf->top__DOT__d_cache__DOT___GEN_2389 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x4aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_74)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_74);
        vlSelf->top__DOT__d_cache__DOT___GEN_2390 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x4bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_75)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_75);
        vlSelf->top__DOT__d_cache__DOT___GEN_2391 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x4cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_76)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_76);
        vlSelf->top__DOT__d_cache__DOT___GEN_2392 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x4dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_77)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_77);
        vlSelf->top__DOT__d_cache__DOT___GEN_2393 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x4eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_78)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_78);
        vlSelf->top__DOT__d_cache__DOT___GEN_2394 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x4fU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_79)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_79);
        vlSelf->top__DOT__d_cache__DOT___GEN_2395 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x50U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_80)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_80);
        vlSelf->top__DOT__d_cache__DOT___GEN_2396 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x51U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_81)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_81);
        vlSelf->top__DOT__d_cache__DOT___GEN_2397 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x52U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_82)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_82);
        vlSelf->top__DOT__d_cache__DOT___GEN_2398 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x53U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_83)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_83);
        vlSelf->top__DOT__d_cache__DOT___GEN_2399 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x54U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_84)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_84);
        vlSelf->top__DOT__d_cache__DOT___GEN_2400 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x55U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_85)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_85);
        vlSelf->top__DOT__d_cache__DOT___GEN_2401 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x56U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_86)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_86);
        vlSelf->top__DOT__d_cache__DOT___GEN_2402 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x57U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_87)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_87);
        vlSelf->top__DOT__d_cache__DOT___GEN_2403 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x58U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_88)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_88);
        vlSelf->top__DOT__d_cache__DOT___GEN_2404 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x59U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_89)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_89);
        vlSelf->top__DOT__d_cache__DOT___GEN_2405 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x5aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_90)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_90);
        vlSelf->top__DOT__d_cache__DOT___GEN_2406 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x5bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_91)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_91);
        vlSelf->top__DOT__d_cache__DOT___GEN_2407 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x5cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_92)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_92);
        vlSelf->top__DOT__d_cache__DOT___GEN_2408 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x5dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_93)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_93);
        vlSelf->top__DOT__d_cache__DOT___GEN_2409 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x5eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_94)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_94);
        vlSelf->top__DOT__d_cache__DOT___GEN_2410 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x5fU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_95)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_95);
        vlSelf->top__DOT__d_cache__DOT___GEN_2411 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x60U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_96)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_96);
        vlSelf->top__DOT__d_cache__DOT___GEN_2412 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x61U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_97)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_97);
        vlSelf->top__DOT__d_cache__DOT___GEN_2413 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x62U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_98)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_98);
        vlSelf->top__DOT__d_cache__DOT___GEN_2414 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x63U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_99)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_99);
        vlSelf->top__DOT__d_cache__DOT___GEN_2415 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x64U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_100)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_100);
        vlSelf->top__DOT__d_cache__DOT___GEN_2416 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x65U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_101)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_101);
        vlSelf->top__DOT__d_cache__DOT___GEN_2417 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x66U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_102)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_102);
        vlSelf->top__DOT__d_cache__DOT___GEN_2418 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x67U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_103)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_103);
        vlSelf->top__DOT__d_cache__DOT___GEN_2419 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x68U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_104)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_104);
        vlSelf->top__DOT__d_cache__DOT___GEN_2420 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x69U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_105)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_105);
        vlSelf->top__DOT__d_cache__DOT___GEN_2421 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x6aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_106)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_106);
        vlSelf->top__DOT__d_cache__DOT___GEN_2422 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x6bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_107)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_107);
        vlSelf->top__DOT__d_cache__DOT___GEN_2423 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x6cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_108)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_108);
        vlSelf->top__DOT__d_cache__DOT___GEN_2424 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x6dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_109)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_109);
        vlSelf->top__DOT__d_cache__DOT___GEN_2425 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x6eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_110)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_110);
        vlSelf->top__DOT__d_cache__DOT___GEN_2426 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x6fU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_111)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_111);
        vlSelf->top__DOT__d_cache__DOT___GEN_2427 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x70U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_112)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_112);
        vlSelf->top__DOT__d_cache__DOT___GEN_2428 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x71U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_113)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_113);
        vlSelf->top__DOT__d_cache__DOT___GEN_2429 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x72U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_114)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_114);
        vlSelf->top__DOT__d_cache__DOT___GEN_2430 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x73U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_115)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_115);
        vlSelf->top__DOT__d_cache__DOT___GEN_2431 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x74U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_116)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_116);
        vlSelf->top__DOT__d_cache__DOT___GEN_2432 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x75U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_117)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_117);
        vlSelf->top__DOT__d_cache__DOT___GEN_2433 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x76U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_118)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_118);
        vlSelf->top__DOT__d_cache__DOT___GEN_2434 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x77U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_119)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_119);
        vlSelf->top__DOT__d_cache__DOT___GEN_2435 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x78U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_120)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_120);
        vlSelf->top__DOT__d_cache__DOT___GEN_2436 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x79U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_121)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_121);
        vlSelf->top__DOT__d_cache__DOT___GEN_2437 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x7aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_122)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_122);
        vlSelf->top__DOT__d_cache__DOT___GEN_2438 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x7bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_123)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_123);
        vlSelf->top__DOT__d_cache__DOT___GEN_2439 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x7cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_124)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_124);
        vlSelf->top__DOT__d_cache__DOT___GEN_2440 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x7dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_125)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_125);
        vlSelf->top__DOT__d_cache__DOT___GEN_2441 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x7eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_0_T_6[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_126)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_126);
        vlSelf->top__DOT__d_cache__DOT___GEN_2442 = 
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
    vlSelf->top__DOT__d_cache__DOT___GEN_17833 = ((IData)(vlSelf->reset)
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
                                                           ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1030)
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
                                                           ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_901)
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
