// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

void Vtop___024unit____Vdpiimwrap_ebreak_handle_TOP____024unit(IData/*31:0*/ flag);

VL_INLINE_OPT void Vtop___024root___combo__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__1\n"); );
    // Body
    Vtop___024unit____Vdpiimwrap_ebreak_handle_TOP____024unit(
                                                              (2U 
                                                               == 
                                                               ((0x13U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->io_inst))
                                                                 ? 1U
                                                                 : 
                                                                ((0x100073U 
                                                                  == vlSelf->io_inst)
                                                                  ? 2U
                                                                  : 0U))));
    if ((0x13U == (0x707fU & vlSelf->io_inst))) {
        vlSelf->top__DOT__idu_step__DOT__imm_I = (vlSelf->io_inst 
                                                  >> 0x14U);
        vlSelf->top__DOT__idu_step_io_src1 = (0x1fU 
                                              & (vlSelf->io_inst 
                                                 >> 0xfU));
    } else {
        vlSelf->top__DOT__idu_step__DOT__imm_I = 0U;
        vlSelf->top__DOT__idu_step_io_src1 = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__exu_step__DOT__Regfile__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__exu_step__DOT__Regfile__v0;
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"%x\n",32,((0x13U == 
                                           (0x707fU 
                                            & vlSelf->io_inst))
                                           ? 1U : (
                                                   (0x100073U 
                                                    == vlSelf->io_inst)
                                                    ? 2U
                                                    : 0U)));
    }
    vlSelf->top__DOT__pc_now = ((IData)(vlSelf->reset)
                                 ? 0x80000000ULL : vlSelf->top__DOT___pc_now_T_1);
    __Vdlyvval__top__DOT__exu_step__DOT__Regfile__v0 
        = vlSelf->top__DOT__exu_step__DOT__Regfile_MPORT_data;
    __Vdlyvdim0__top__DOT__exu_step__DOT__Regfile__v0 
        = vlSelf->top__DOT__idu_step_io_rd;
    vlSelf->top__DOT__exu_step__DOT__Regfile[__Vdlyvdim0__top__DOT__exu_step__DOT__Regfile__v0] 
        = __Vdlyvval__top__DOT__exu_step__DOT__Regfile__v0;
    vlSelf->top__DOT___pc_now_T_1 = (4ULL + vlSelf->top__DOT__pc_now);
    vlSelf->io_pc = vlSelf->top__DOT__pc_now;
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__4\n"); );
    // Body
    vlSelf->top__DOT__idu_step_io_rd = ((0x13U == (0x707fU 
                                                   & vlSelf->io_inst))
                                         ? (0x1fU & 
                                            (vlSelf->io_inst 
                                             >> 7U))
                                         : 0U);
    vlSelf->top__DOT__exu_step_io_res2rd = ((1U == 
                                             ((0x13U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? 1U
                                               : ((0x100073U 
                                                   == vlSelf->io_inst)
                                                   ? 2U
                                                   : 0U)))
                                             ? (((0U 
                                                  == (IData)(vlSelf->top__DOT__idu_step_io_src1))
                                                  ? 0ULL
                                                  : 
                                                 vlSelf->top__DOT__exu_step__DOT__Regfile
                                                 [vlSelf->top__DOT__idu_step_io_src1]) 
                                                + (
                                                   (((0x800U 
                                                      & (IData)(vlSelf->top__DOT__idu_step__DOT__imm_I))
                                                      ? 0xfffffffffffffULL
                                                      : 0ULL) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(vlSelf->top__DOT__idu_step__DOT__imm_I))))
                                             : 0ULL);
    vlSelf->io_outval = vlSelf->top__DOT__exu_step_io_res2rd;
    vlSelf->top__DOT__exu_step__DOT__Regfile_MPORT_data 
        = ((0x13U == (0x707fU & vlSelf->io_inst)) ? vlSelf->top__DOT__exu_step_io_res2rd
            : ((0U == (IData)(vlSelf->top__DOT__idu_step_io_rd))
                ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
               [vlSelf->top__DOT__idu_step_io_rd]));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vtop___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vtop___024root___combo__TOP__4(vlSelf);
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
