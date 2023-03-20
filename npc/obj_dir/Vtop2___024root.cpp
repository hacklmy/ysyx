// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop2.h for the primary calling header

#include "Vtop2___024root.h"
#include "Vtop2__Syms.h"

//==========

VL_INLINE_OPT void Vtop2___024root___sequent__TOP__1(Vtop2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop2___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top2__DOT__exu_step__DOT__Regfile__v0;
    QData/*63:0*/ __Vdlyvval__top2__DOT__exu_step__DOT__Regfile__v0;
    // Body
    vlSelf->top2__DOT__pc_now = ((IData)(vlSelf->reset)
                                  ? 0x80000000ULL : vlSelf->top2__DOT___pc_now_T_1);
    __Vdlyvval__top2__DOT__exu_step__DOT__Regfile__v0 
        = vlSelf->top2__DOT__exu_step__DOT__Regfile_MPORT_data;
    __Vdlyvdim0__top2__DOT__exu_step__DOT__Regfile__v0 
        = vlSelf->top2__DOT__idu_step_io_rd;
    vlSelf->top2__DOT__exu_step__DOT__Regfile[__Vdlyvdim0__top2__DOT__exu_step__DOT__Regfile__v0] 
        = __Vdlyvval__top2__DOT__exu_step__DOT__Regfile__v0;
    vlSelf->top2__DOT___pc_now_T_1 = (4ULL + vlSelf->top2__DOT__pc_now);
    vlSelf->io_pc = vlSelf->top2__DOT__pc_now;
}

VL_INLINE_OPT void Vtop2___024root___combo__TOP__2(Vtop2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop2___024root___combo__TOP__2\n"); );
    // Body
    if ((0x13U == (0x707fU & vlSelf->io_inst))) {
        vlSelf->top2__DOT__idu_step__DOT__imm_I = (vlSelf->io_inst 
                                                   >> 0x14U);
        vlSelf->top2__DOT__idu_step_io_src1 = (0x1fU 
                                               & (vlSelf->io_inst 
                                                  >> 0xfU));
        vlSelf->top2__DOT__idu_step_io_rd = (0x1fU 
                                             & (vlSelf->io_inst 
                                                >> 7U));
        vlSelf->top2__DOT__exu_step_io_res2rd = (((0U 
                                                   == (IData)(vlSelf->top2__DOT__idu_step_io_src1))
                                                   ? 0ULL
                                                   : 
                                                  vlSelf->top2__DOT__exu_step__DOT__Regfile
                                                  [vlSelf->top2__DOT__idu_step_io_src1]) 
                                                 + 
                                                 ((((0x800U 
                                                     & (IData)(vlSelf->top2__DOT__idu_step__DOT__imm_I))
                                                     ? 0xfffffffffffffULL
                                                     : 0ULL) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(vlSelf->top2__DOT__idu_step__DOT__imm_I))));
    } else {
        vlSelf->top2__DOT__idu_step__DOT__imm_I = 0U;
        vlSelf->top2__DOT__idu_step_io_src1 = 0U;
        vlSelf->top2__DOT__idu_step_io_rd = 0U;
        vlSelf->top2__DOT__exu_step_io_res2rd = 0ULL;
    }
    vlSelf->io_outval = vlSelf->top2__DOT__exu_step_io_res2rd;
    vlSelf->top2__DOT__exu_step__DOT__Regfile_MPORT_data 
        = ((0x13U == (0x707fU & vlSelf->io_inst)) ? vlSelf->top2__DOT__exu_step_io_res2rd
            : ((0U == (IData)(vlSelf->top2__DOT__idu_step_io_rd))
                ? 0ULL : vlSelf->top2__DOT__exu_step__DOT__Regfile
               [vlSelf->top2__DOT__idu_step_io_rd]));
}

void Vtop2___024root___eval(Vtop2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop2___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vtop2___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop2___024root___combo__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData Vtop2___024root___change_request_1(Vtop2___024root* vlSelf);

VL_INLINE_OPT QData Vtop2___024root___change_request(Vtop2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop2___024root___change_request\n"); );
    // Body
    return (Vtop2___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop2___024root___change_request_1(Vtop2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop2___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop2___024root___eval_debug_assertions(Vtop2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop2___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
