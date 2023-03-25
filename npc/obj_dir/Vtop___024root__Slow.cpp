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

void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
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
    vlSelf->io_pc = vlSelf->top__DOT__pc_now;
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
    Vtop___024root___settle__TOP__3(vlSelf);
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
    vlSelf->top__DOT__idu_step_io_imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu_step_io_res2rd = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__pc_now = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__idu_step__DOT___inst_type_T_17 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__idu_step__DOT___inst_now_T_20 = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__exu_step__DOT__Regfile[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__exu_step__DOT__Regfile_MPORT_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu_step__DOT__add_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu_step__DOT___io_pc_next_T_3 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
