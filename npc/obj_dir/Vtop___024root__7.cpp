// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop___024root___combo__TOP__18(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__18\n"); );
    // Body
    vlSelf->top__DOT__d_cache__DOT___GEN_20776 = ((IData)(vlSelf->reset)
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
                                                              << 0xaU) 
                                                             | (QData)((IData)(
                                                                               (0x3f8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                                >> 3U)) 
                                                                                << 3U)))))
                                                             : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr)))
                                                            : 
                                                           ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_645)
                                                             ? 
                                                            (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_127)) 
                                                              << 0xaU) 
                                                             | (QData)((IData)(
                                                                               (0x3f8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                                >> 3U)) 
                                                                                << 3U)))))
                                                             : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))))))
                                                         : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr)))))))));
}

void Vtop___024root___sequent__TOP__9(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__10(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__11(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__12(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__13(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__14(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__15(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__16(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__17(Vtop___024root* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vtop___024root___sequent__TOP__9(vlSelf);
        Vtop___024root___sequent__TOP__10(vlSelf);
        Vtop___024root___sequent__TOP__11(vlSelf);
        Vtop___024root___sequent__TOP__12(vlSelf);
        Vtop___024root___sequent__TOP__13(vlSelf);
        Vtop___024root___sequent__TOP__14(vlSelf);
        Vtop___024root___sequent__TOP__15(vlSelf);
        Vtop___024root___sequent__TOP__16(vlSelf);
        Vtop___024root___sequent__TOP__17(vlSelf);
    }
    Vtop___024root___combo__TOP__18(vlSelf);
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
