// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__exu_step__DOT__Regfile__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__exu_step__DOT__Regfile__v0;
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"%x\n",64,((6U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_20))
                                           ? vlSelf->top__DOT__exu_step__DOT__add_res
                                           : ((5U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_20))
                                               ? vlSelf->top__DOT__exu_step__DOT__add_res
                                               : (4ULL 
                                                  + vlSelf->top__DOT__pc_now))));
    }
    __Vdlyvval__top__DOT__exu_step__DOT__Regfile__v0 
        = vlSelf->top__DOT__exu_step__DOT__Regfile_MPORT_data;
    __Vdlyvdim0__top__DOT__exu_step__DOT__Regfile__v0 
        = (0x1fU & (vlSelf->io_inst >> 7U));
    vlSelf->top__DOT__exu_step__DOT__Regfile[__Vdlyvdim0__top__DOT__exu_step__DOT__Regfile__v0] 
        = __Vdlyvval__top__DOT__exu_step__DOT__Regfile__v0;
    vlSelf->top__DOT__pc_now = ((IData)(vlSelf->reset)
                                 ? 0x80000000ULL : 
                                ((6U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_20))
                                  ? vlSelf->top__DOT__exu_step__DOT__add_res
                                  : vlSelf->top__DOT__exu_step__DOT___io_pc_next_T_3));
    vlSelf->io_pc = vlSelf->top__DOT__pc_now;
}

void Vtop___024unit____Vdpiimwrap_ebreak_handle_TOP____024unit(IData/*31:0*/ flag);

VL_INLINE_OPT void Vtop___024root___combo__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__2\n"); );
    // Body
    if ((0x13U == (0x707fU & vlSelf->io_inst))) {
        vlSelf->top__DOT__idu_step__DOT___inst_type_T_17 = 0x40U;
        vlSelf->top__DOT__idu_step__DOT___inst_now_T_20 = 1U;
    } else {
        vlSelf->top__DOT__idu_step__DOT___inst_type_T_17 
            = ((0x17U == (0x7fU & vlSelf->io_inst))
                ? 0x42U : ((0x37U == (0x7fU & vlSelf->io_inst))
                            ? 0x42U : ((0x6fU == (0x7fU 
                                                  & vlSelf->io_inst))
                                        ? 0x43U : (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0x40U
                                                    : 
                                                   ((0x3023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0x44U
                                                     : 0U)))));
        vlSelf->top__DOT__idu_step__DOT___inst_now_T_20 
            = ((0x100073U == vlSelf->io_inst) ? 2U : 
               ((0x17U == (0x7fU & vlSelf->io_inst))
                 ? 3U : ((0x37U == (0x7fU & vlSelf->io_inst))
                          ? 4U : ((0x6fU == (0x7fU 
                                             & vlSelf->io_inst))
                                   ? 5U : ((0x67U == 
                                            (0x707fU 
                                             & vlSelf->io_inst))
                                            ? 6U : 
                                           ((0x3023U 
                                             == (0x707fU 
                                                 & vlSelf->io_inst))
                                             ? 7U : 0U))))));
    }
    vlSelf->top__DOT__idu_step_io_imm = ((0x44U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17))
                                          ? ((((vlSelf->io_inst 
                                                >> 0x1fU)
                                                ? 0xfffffffffffffULL
                                                : 0ULL) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               ((0xfe0U 
                                                                 & (vlSelf->io_inst 
                                                                    >> 0x14U)) 
                                                                | (0x1fU 
                                                                   & (vlSelf->io_inst 
                                                                      >> 7U))))))
                                          : ((0x42U 
                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17))
                                              ? (((QData)((IData)(
                                                                  ((vlSelf->io_inst 
                                                                    >> 0x1fU)
                                                                    ? 0xffffffffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (0xfffff000U 
                                                                    & vlSelf->io_inst))))
                                              : ((0x43U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17))
                                                  ? 
                                                 ((((vlSelf->io_inst 
                                                     >> 0x1fU)
                                                     ? 0x7ffffffffffULL
                                                     : 0ULL) 
                                                   << 0x15U) 
                                                  | (QData)((IData)(
                                                                    ((0x100000U 
                                                                      & (vlSelf->io_inst 
                                                                         >> 0xbU)) 
                                                                     | ((0xff000U 
                                                                         & vlSelf->io_inst) 
                                                                        | ((0x800U 
                                                                            & (vlSelf->io_inst 
                                                                               >> 9U)) 
                                                                           | (0x7feU 
                                                                              & (vlSelf->io_inst 
                                                                                >> 0x14U))))))))
                                                  : 
                                                 ((0x40U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17))
                                                   ? 
                                                  ((((vlSelf->io_inst 
                                                      >> 0x1fU)
                                                      ? 0xfffffffffffffULL
                                                      : 0ULL) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->io_inst 
                                                                      >> 0x14U))))
                                                   : 0ULL))));
    Vtop___024unit____Vdpiimwrap_ebreak_handle_TOP____024unit(
                                                              (2U 
                                                               == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_20)));
    vlSelf->top__DOT__exu_step__DOT__add_res = (((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->io_inst))
                                                  ? vlSelf->top__DOT__pc_now
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->io_inst 
                                                       >> 0xfU)))
                                                   ? 0ULL
                                                   : 
                                                  vlSelf->top__DOT__exu_step__DOT__Regfile
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 0xfU))])) 
                                                + (
                                                   ((0x43U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17)) 
                                                    | ((0x44U 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17)) 
                                                       | ((0x42U 
                                                           == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17)) 
                                                          | (0x40U 
                                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17)))))
                                                    ? vlSelf->top__DOT__idu_step_io_imm
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->io_inst 
                                                         >> 0x14U)))
                                                     ? 0ULL
                                                     : 
                                                    vlSelf->top__DOT__exu_step__DOT__Regfile
                                                    [
                                                    (0x1fU 
                                                     & (vlSelf->io_inst 
                                                        >> 0x14U))])));
    vlSelf->top__DOT__exu_step__DOT___io_pc_next_T_3 
        = ((5U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_20))
            ? vlSelf->top__DOT__exu_step__DOT__add_res
            : (4ULL + vlSelf->top__DOT__pc_now));
    vlSelf->top__DOT__exu_step_io_res2rd = ((6U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_20))
                                             ? (4ULL 
                                                + vlSelf->top__DOT__pc_now)
                                             : ((5U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_20))
                                                 ? 
                                                (4ULL 
                                                 + vlSelf->top__DOT__pc_now)
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_20))
                                                  ? vlSelf->top__DOT__idu_step_io_imm
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_20))
                                                   ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_20))
                                                    ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                    : 0ULL)))));
    vlSelf->io_outval = vlSelf->top__DOT__exu_step_io_res2rd;
    vlSelf->top__DOT__exu_step__DOT__Regfile_MPORT_data 
        = (((0x100073U != vlSelf->io_inst) & (0x3023U 
                                              != (0x707fU 
                                                  & vlSelf->io_inst)))
            ? vlSelf->top__DOT__exu_step_io_res2rd : 
           ((0U == (0x1fU & (vlSelf->io_inst >> 7U)))
             ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
            [(0x1fU & (vlSelf->io_inst >> 7U))]));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
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
