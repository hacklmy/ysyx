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
    VlWide<3>/*95:0*/ __Vtemp4002;
    VlWide<3>/*95:0*/ __Vtemp4005;
    VlWide<4>/*127:0*/ __Vtemp4010;
    VlWide<5>/*159:0*/ __Vtemp4011;
    VlWide<5>/*159:0*/ __Vtemp4014;
    VlWide<5>/*159:0*/ __Vtemp4017;
    VlWide<5>/*159:0*/ __Vtemp4031;
    VlWide<5>/*159:0*/ __Vtemp4034;
    // Body
    VL_EXTEND_WQ(65,64, __Vtemp4002, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2);
    VL_EXTEND_WQ(65,64, __Vtemp4005, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2);
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_23[0U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_23[1U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_23[2U] = 0U;
        vlSelf->top__DOT__d_cache__DOT___GEN_2522 = 0ULL;
    } else {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_23[0U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? ((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                        ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient) 
                           << 1U) : (1U | ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient) 
                                           << 1U)))
                    : __Vtemp4002[0U]) : __Vtemp4005[0U]);
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
                                      << 1U))) : __Vtemp4002[1U])
                : __Vtemp4005[1U]);
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_23[2U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? ((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                        ? ((IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient 
                                    >> 0x20U)) >> 0x1fU)
                        : ((IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient 
                                    >> 0x20U)) >> 0x1fU))
                    : __Vtemp4002[2U]) : __Vtemp4005[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_2522 = 
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
                                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_350))
                                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_689)
                                                  ? 
                                                 (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_47)) 
                                                   << 0xaU) 
                                                  | (QData)((IData)(
                                                                    (0x3c0U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                                >> 6U)) 
                                                                        << 6U)))))
                                                  : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr)))
                                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_446)
                                                  ? 
                                                 (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_15)) 
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
        __Vtemp4010[0U] = (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32);
        __Vtemp4010[1U] = (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                   >> 0x20U));
        __Vtemp4010[2U] = (IData)(((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                  >> 0x3fU)))
                                    ? 0xffffffffffffffffULL
                                    : 0ULL));
        __Vtemp4010[3U] = (IData)((((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                   >> 0x3fU)))
                                     ? 0xffffffffffffffffULL
                                     : 0ULL) >> 0x20U));
    } else {
        __Vtemp4010[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U];
        __Vtemp4010[1U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U];
        __Vtemp4010[2U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[2U];
        __Vtemp4010[3U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[3U];
    }
    VL_EXTEND_WW(130,128, __Vtemp4011, __Vtemp4010);
    VL_EXTEND_WW(130,128, __Vtemp4014, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1);
    VL_EXTEND_WW(130,128, __Vtemp4017, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1);
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[0U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[1U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[2U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[3U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[4U] = 0U;
    } else {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[0U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp4011[0U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                      ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                  | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                          ? (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U] 
                                             << 2U)
                                          : __Vtemp4014[0U])
                                      : __Vtemp4017[0U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[1U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp4011[1U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                      ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                  | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                          ? ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U] 
                                              >> 0x1eU) 
                                             | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U] 
                                                << 2U))
                                          : __Vtemp4014[1U])
                                      : __Vtemp4017[1U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[2U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp4011[2U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                      ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                  | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                          ? ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U] 
                                              >> 0x1eU) 
                                             | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[2U] 
                                                << 2U))
                                          : __Vtemp4014[2U])
                                      : __Vtemp4017[2U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[3U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp4011[3U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                      ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                  | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                          ? ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[2U] 
                                              >> 0x1eU) 
                                             | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[3U] 
                                                << 2U))
                                          : __Vtemp4014[3U])
                                      : __Vtemp4017[3U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[4U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp4011[4U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                      ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                  | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                          ? (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[3U] 
                                             >> 0x1eU)
                                          : __Vtemp4014[4U])
                                      : __Vtemp4017[4U]));
    }
    VL_EXTEND_WW(129,128, __Vtemp4031, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_1);
    VL_EXTEND_WW(129,128, __Vtemp4034, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_1);
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
                       << 1U) : __Vtemp4031[0U]) : 
               __Vtemp4034[0U]);
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
                                     << 1U)) : __Vtemp4031[1U])
                : __Vtemp4034[1U]);
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
                          << 1U)) : __Vtemp4031[2U])
                : __Vtemp4034[2U]);
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
                                     << 1U)) : __Vtemp4031[3U])
                : __Vtemp4034[3U]);
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[4U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? (((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                         ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U]
                         : ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                             >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                       << 0x1fU))) 
                       >> 0x1fU) : __Vtemp4031[4U])
                : __Vtemp4034[4U]);
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
