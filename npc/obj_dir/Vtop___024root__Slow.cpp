// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024unit____Vdpiimwrap_ebreak_handle_TOP____024unit(IData/*31:0*/ flag);

void Vtop___024root___settle__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__2\n"); );
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
        vlSelf->top__DOT__idu_step_io_rd = (0x1fU & 
                                            (vlSelf->io_inst 
                                             >> 7U));
    } else {
        vlSelf->top__DOT__idu_step__DOT__imm_I = 0U;
        vlSelf->top__DOT__idu_step_io_src1 = 0U;
        vlSelf->top__DOT__idu_step_io_rd = 0U;
    }
    vlSelf->top__DOT___pc_now_T_1 = (4ULL + vlSelf->top__DOT__pc_now);
    vlSelf->io_pc = vlSelf->top__DOT__pc_now;
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

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
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
    vlSelf->io_outval = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__idu_step_io_src1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__idu_step_io_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__exu_step_io_res2rd = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__pc_now = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT___pc_now_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__idu_step__DOT__imm_I = VL_RAND_RESET_I(12);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__exu_step__DOT__Regfile[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__exu_step__DOT__Regfile_MPORT_data = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
