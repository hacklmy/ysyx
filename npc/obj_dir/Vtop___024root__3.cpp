// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop___024root___combo__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__6\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp3992;
    VlWide<3>/*95:0*/ __Vtemp3995;
    VlWide<4>/*127:0*/ __Vtemp4000;
    VlWide<5>/*159:0*/ __Vtemp4001;
    VlWide<5>/*159:0*/ __Vtemp4004;
    VlWide<5>/*159:0*/ __Vtemp4007;
    VlWide<5>/*159:0*/ __Vtemp4021;
    VlWide<5>/*159:0*/ __Vtemp4024;
    // Body
    VL_EXTEND_WQ(65,64, __Vtemp3992, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2);
    VL_EXTEND_WQ(65,64, __Vtemp3995, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2);
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_23[0U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_23[1U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_23[2U] = 0U;
        vlSelf->top__DOT__d_cache__DOT___GEN_2507 = 0ULL;
    } else {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_23[0U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? ((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                        ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient) 
                           << 1U) : (1U | ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient) 
                                           << 1U)))
                    : __Vtemp3992[0U]) : __Vtemp3995[0U]);
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_23[1U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? ((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                        ? (((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient) 
                            >> 0x1fU) | ((IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient 
                                                  >> 0x20U)) 
                                         << 1U)) : 
                       (((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient) 
                         >> 0x1fU) | ((IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient 
                                               >> 0x20U)) 
                                      << 1U))) : __Vtemp3992[1U])
                : __Vtemp3995[1U]);
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_23[2U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? ((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                        ? ((IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient 
                                    >> 0x20U)) >> 0x1fU)
                        : ((IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient 
                                    >> 0x20U)) >> 0x1fU))
                    : __Vtemp3992[2U]) : __Vtemp3995[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_2507 = 
            ((0U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
              : ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                  : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                      ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                      : ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                          ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                          : ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                              ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                      ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                          ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                                          : ((0U == (IData)(vlSelf->top__DOT__d_cache__DOT__quene_1))
                                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_446)
                                                  ? 
                                                 (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_15)) 
                                                   << 0xaU) 
                                                  | (QData)((IData)(
                                                                    (0x3c0U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                                >> 6U)) 
                                                                        << 6U)))))
                                                  : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr)))
                                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_689)
                                                  ? 
                                                 (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_47)) 
                                                   << 0xaU) 
                                                  | (QData)((IData)(
                                                                    (0x3c0U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                                >> 6U)) 
                                                                        << 6U)))))
                                                  : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))))))
                                  : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))))))));
    }
    if (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_mul_valid) {
        __Vtemp4000[0U] = (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32);
        __Vtemp4000[1U] = (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                   >> 0x20U));
        __Vtemp4000[2U] = (IData)(((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                  >> 0x3fU)))
                                    ? 0xffffffffffffffffULL
                                    : 0ULL));
        __Vtemp4000[3U] = (IData)((((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                   >> 0x3fU)))
                                     ? 0xffffffffffffffffULL
                                     : 0ULL) >> 0x20U));
    } else {
        __Vtemp4000[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U];
        __Vtemp4000[1U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U];
        __Vtemp4000[2U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[2U];
        __Vtemp4000[3U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[3U];
    }
    VL_EXTEND_WW(130,128, __Vtemp4001, __Vtemp4000);
    VL_EXTEND_WW(130,128, __Vtemp4004, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1);
    VL_EXTEND_WW(130,128, __Vtemp4007, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1);
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[0U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[1U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[2U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[3U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[4U] = 0U;
    } else {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[0U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp4001[0U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                      ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                  | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                          ? (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U] 
                                             << 2U)
                                          : __Vtemp4004[0U])
                                      : __Vtemp4007[0U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[1U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp4001[1U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                      ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                  | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                          ? ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U] 
                                              >> 0x1eU) 
                                             | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U] 
                                                << 2U))
                                          : __Vtemp4004[1U])
                                      : __Vtemp4007[1U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[2U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp4001[2U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                      ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                  | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                          ? ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U] 
                                              >> 0x1eU) 
                                             | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[2U] 
                                                << 2U))
                                          : __Vtemp4004[2U])
                                      : __Vtemp4007[2U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[3U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp4001[3U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                      ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                  | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                          ? ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[2U] 
                                              >> 0x1eU) 
                                             | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[3U] 
                                                << 2U))
                                          : __Vtemp4004[3U])
                                      : __Vtemp4007[3U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[4U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp4001[4U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                      ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                  | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                          ? (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[3U] 
                                             >> 0x1eU)
                                          : __Vtemp4004[4U])
                                      : __Vtemp4007[4U]));
    }
    VL_EXTEND_WW(129,128, __Vtemp4021, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_1);
    VL_EXTEND_WW(129,128, __Vtemp4024, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_1);
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[0U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[1U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[2U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[3U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[4U] = 0U;
    } else {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[0U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? (((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                         ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U]
                         : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U]) 
                       << 1U) : __Vtemp4021[0U]) : 
               __Vtemp4024[0U]);
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[1U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? ((((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                          ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U]
                          : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U]) 
                        >> 0x1fU) | (((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                                       ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U]
                                       : ((0x7fffffffU 
                                           & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U]) 
                                          | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                                             << 0x1fU))) 
                                     << 1U)) : __Vtemp4021[1U])
                : __Vtemp4024[1U]);
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[2U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? ((((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                          ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U]
                          : ((0x7fffffffU & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U]) 
                             | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                                << 0x1fU))) >> 0x1fU) 
                       | (((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                            ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U]
                            : ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                                >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                          << 0x1fU))) 
                          << 1U)) : __Vtemp4021[2U])
                : __Vtemp4024[2U]);
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[3U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? ((((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                          ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U]
                          : ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                              >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                        << 0x1fU))) 
                        >> 0x1fU) | (((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                                       ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U]
                                       : ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                           >> 1U) | 
                                          (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                           << 0x1fU))) 
                                     << 1U)) : __Vtemp4021[3U])
                : __Vtemp4024[3U]);
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[4U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? (((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                         ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U]
                         : ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                             >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                       << 0x1fU))) 
                       >> 0x1fU) : __Vtemp4021[4U])
                : __Vtemp4024[4U]);
    }
}

void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vtop___024root___sequent__TOP__2(vlSelf);
        Vtop___024root___sequent__TOP__3(vlSelf);
    }
    Vtop___024root___combo__TOP__6(vlSelf);
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
