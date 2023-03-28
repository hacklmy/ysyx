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

void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ Raddr, QData/*63:0*/ &Rdata);
void Vtop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &Regfile);
void Vtop___024unit____Vdpiimwrap_get_pc_TOP____024unit(QData/*63:0*/ pc);
void Vtop___024unit____Vdpiimwrap_ebreak_handle_TOP____024unit(IData/*31:0*/ flag);
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ Waddr, QData/*63:0*/ Wdata, CData/*7:0*/ Wmask);

void Vtop___024root___settle__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__2\n"); );
    // Variables
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_type_T_73;
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_type_T_84;
    CData/*4:0*/ top__DOT__idu_step__DOT___inst_now_T_75;
    CData/*5:0*/ top__DOT__idu_step__DOT___inst_now_T_85;
    CData/*5:0*/ top__DOT__idu_step__DOT___inst_now_T_96;
    VlWide<4>/*127:0*/ __Vtemp27;
    VlWide<4>/*127:0*/ __Vtemp28;
    VlWide<4>/*127:0*/ __Vtemp29;
    VlWide<4>/*127:0*/ __Vtemp30;
    VlWide<4>/*127:0*/ __Vtemp31;
    VlWide<4>/*127:0*/ __Vtemp32;
    VlWide<4>/*127:0*/ __Vtemp33;
    VlWide<4>/*127:0*/ __Vtemp34;
    VlWide<4>/*127:0*/ __Vtemp35;
    QData/*63:0*/ top__DOT__exu_step__DOT___src1_value_T_1;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_19;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_35;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_45;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_50;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_88;
    // Body
    vlSelf->io_pc = vlSelf->top__DOT__pc_now;
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[1U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[1U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[2U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[2U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[3U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[3U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[4U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[4U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[5U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[5U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[6U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[6U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[7U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[7U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[8U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[8U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[9U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[9U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0xaU] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0xaU];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0xbU] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0xbU];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0xcU] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0xcU];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0xdU] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0xdU];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0xeU] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0xeU];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0xfU] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0xfU];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x10U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x10U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x11U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x11U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x12U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x12U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x13U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x13U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x14U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x14U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x15U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x15U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x16U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x16U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x17U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x17U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x18U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x18U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x19U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x19U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x1aU] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x1aU];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x1bU] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x1bU];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x1cU] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x1cU];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x1dU] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x1dU];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x1eU] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x1eU];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x1fU] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x1fU];
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__pc_now, vlSelf->__Vtask_pmem_read__0__Rdata);
    vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
        = vlSelf->__Vtask_pmem_read__0__Rdata;
    Vtop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs);
    Vtop___024unit____Vdpiimwrap_get_pc_TOP____024unit(vlSelf->top__DOT__pc_now);
    vlSelf->io_inst = (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata);
    vlSelf->top__DOT__exu_step__DOT__cmp = (((0U == 
                                              (0x1fU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                          >> 0xfU))))
                                              ? 0ULL
                                              : vlSelf->top__DOT__exu_step__DOT__Regfile
                                             [(0x1fU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                          >> 0xfU)))]) 
                                            - ((0U 
                                                == 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                            >> 0x14U))))
                                                ? 0ULL
                                                : vlSelf->top__DOT__exu_step__DOT__Regfile
                                               [(0x1fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                            >> 0x14U)))]));
    top__DOT__idu_step__DOT___inst_now_T_75 = ((0x7013U 
                                                == 
                                                (0x707fU 
                                                 & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                ? 9U
                                                : (
                                                   (0x4000003bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                    ? 0xdU
                                                    : 
                                                   ((0x103bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                     ? 0x16U
                                                     : 
                                                    ((0x1013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                      ? 0x17U
                                                      : 
                                                     ((0x5013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                       ? 0x18U
                                                       : 
                                                      ((0x101bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                        ? 0x19U
                                                        : 
                                                       ((0x4000501bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                         ? 0x1aU
                                                         : 
                                                        ((0x501bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                          ? 0x1bU
                                                          : 
                                                         ((0x4000503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                           ? 0x1cU
                                                           : 
                                                          ((0x503bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                            ? 0x1dU
                                                            : 0U))))))))));
    vlSelf->top__DOT__idu_step_io_ctrl_sign_src1_is_pc 
        = ((0x6fU == (0x7fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
           | ((0x17U == (0x7fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
              | ((0x1063U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                 | (0x63U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))))));
    top__DOT__exu_step__DOT___src1_value_T_1 = ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                             >> 0xfU))))
                                                 ? 0ULL
                                                 : 
                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                [(0x1fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                             >> 0xfU)))]);
    top__DOT__idu_step__DOT___inst_type_T_73 = ((0x7013U 
                                                 == 
                                                 (0x707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                 ? 0x40U
                                                 : 
                                                ((0x4000003bU 
                                                  == 
                                                  (0xfe00707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                  ? 0x41U
                                                  : 
                                                 ((0x103bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                   ? 0x41U
                                                   : 
                                                  ((0x1013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                    ? 0x40U
                                                    : 
                                                   ((0x5013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                     ? 0x40U
                                                     : 
                                                    ((0x101bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                      ? 0x40U
                                                      : 
                                                     ((0x4000501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                       ? 0x40U
                                                       : 
                                                      ((0x501bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                        ? 0x40U
                                                        : 
                                                       ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                         ? 0x41U
                                                         : 
                                                        ((0x503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                          ? 0x41U
                                                          : 0U))))))))));
    top__DOT__idu_step__DOT___inst_now_T_85 = ((0x3003U 
                                                == 
                                                (0x707fU 
                                                 & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                ? 0x22U
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                    ? 0x10U
                                                    : 
                                                   ((0x33U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                     ? 0xfU
                                                     : 
                                                    ((0x40005013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                      ? 0x15U
                                                      : 
                                                     ((0x4003U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                       ? 0x23U
                                                       : 
                                                      ((0x1023U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                        ? 0x26U
                                                        : 
                                                       ((0x23U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                         ? 0x28U
                                                         : 
                                                        ((0x6033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                          ? 0xbU
                                                          : 
                                                         ((0x4013U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                           ? 0xaU
                                                           : 
                                                          ((0x7033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                            ? 8U
                                                            : (IData)(top__DOT__idu_step__DOT___inst_now_T_75)))))))))));
    vlSelf->top__DOT__exu_step__DOT__src1_value = ((IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_src1_is_pc)
                                                    ? vlSelf->top__DOT__pc_now
                                                    : top__DOT__exu_step__DOT___src1_value_T_1);
    top__DOT__idu_step__DOT___inst_type_T_84 = ((0x63U 
                                                 == 
                                                 (0x707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                 ? 0x45U
                                                 : 
                                                ((0x3003U 
                                                  == 
                                                  (0x707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                  ? 0x40U
                                                  : 
                                                 ((0x1bU 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                   ? 0x40U
                                                   : 
                                                  ((0x33U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                    ? 0x41U
                                                    : 
                                                   ((0x40005013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                     ? 0x40U
                                                     : 
                                                    ((0x4003U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                      ? 0x40U
                                                      : 
                                                     ((0x1023U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                       ? 0x44U
                                                       : 
                                                      ((0x23U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                        ? 0x44U
                                                        : 
                                                       ((0x6033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                         ? 0x41U
                                                         : 
                                                        ((0x4013U 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                          ? 0x40U
                                                          : 
                                                         ((0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                           ? 0x41U
                                                           : (IData)(top__DOT__idu_step__DOT___inst_type_T_73))))))))))));
    top__DOT__idu_step__DOT___inst_now_T_96 = ((0x17U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                ? 3U
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                    ? 4U
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                     ? 5U
                                                     : 
                                                    ((0x67U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                      ? 6U
                                                      : 
                                                     ((0x3023U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                       ? 7U
                                                       : 
                                                      ((0x3013U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                        ? 0x20U
                                                        : 
                                                       ((0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                         ? 0x21U
                                                         : 
                                                        ((0x3bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                           ? 0xeU
                                                           : 
                                                          ((0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                            ? 0x2aU
                                                            : 
                                                           ((0x63U 
                                                             == 
                                                             (0x707fU 
                                                              & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                             ? 0x29U
                                                             : (IData)(top__DOT__idu_step__DOT___inst_now_T_85))))))))))));
    if ((0x13U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))) {
        vlSelf->top__DOT__idu_step__DOT___inst_type_T_95 = 0x40U;
        vlSelf->top__DOT__idu_step__DOT___inst_now_T_98 = 1U;
    } else {
        vlSelf->top__DOT__idu_step__DOT___inst_type_T_95 
            = ((0x17U == (0x7fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                ? 0x42U : ((0x37U == (0x7fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                            ? 0x42U : ((0x6fU == (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                        ? 0x43U : (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                    ? 0x40U
                                                    : 
                                                   ((0x3023U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                     ? 0x44U
                                                     : 
                                                    ((0x3013U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                      ? 0x40U
                                                      : 
                                                     ((0x2003U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                       ? 0x40U
                                                       : 
                                                      ((0x3bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                        ? 0x41U
                                                        : 
                                                       ((0x40000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                         ? 0x41U
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                          ? 0x45U
                                                          : (IData)(top__DOT__idu_step__DOT___inst_type_T_84)))))))))));
        vlSelf->top__DOT__idu_step__DOT___inst_now_T_98 
            = ((0x100073U == (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))
                ? 2U : (IData)(top__DOT__idu_step__DOT___inst_now_T_96));
    }
    vlSelf->top__DOT__idu_step_io_imm = ((0x45U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_95))
                                          ? ((((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                           >> 0x1fU)))
                                                ? 0x7ffffffffffffULL
                                                : 0ULL) 
                                              << 0xdU) 
                                             | (QData)((IData)(
                                                               ((0x1000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                                             >> 0x1fU)) 
                                                                    << 0xcU)) 
                                                                | ((0x800U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                                                >> 7U)) 
                                                                       << 0xbU)) 
                                                                   | ((0x7e0U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                                                >> 0x19U)) 
                                                                          << 5U)) 
                                                                      | (0x1eU 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                                                >> 8U)) 
                                                                            << 1U))))))))
                                          : ((0x44U 
                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_95))
                                              ? (((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                               >> 0x1fU)))
                                                    ? 0xfffffffffffffULL
                                                    : 0ULL) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   ((0xfe0U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                                                >> 0x19U)) 
                                                                        << 5U)) 
                                                                    | (0x1fU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                                                >> 7U)))))))
                                              : ((0x42U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_95))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                                                >> 0x1fU)))
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((IData)(
                                                                             (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                                              >> 0xcU)) 
                                                                     << 0xcU))))
                                                  : 
                                                 ((0x43U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_95))
                                                   ? 
                                                  ((((1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                                 >> 0x1fU)))
                                                      ? 0x7ffffffffffULL
                                                      : 0ULL) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(
                                                                     ((0x100000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                                                >> 0x1fU)) 
                                                                          << 0x14U)) 
                                                                      | ((0xff000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                                                >> 0xcU)) 
                                                                             << 0xcU)) 
                                                                         | ((0x800U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                            | (0x7feU 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                                                >> 0x15U)) 
                                                                                << 1U))))))))
                                                   : 
                                                  ((0x40U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_95))
                                                    ? 
                                                   ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                                  >> 0x1fU)))
                                                       ? 0xfffffffffffffULL
                                                       : 0ULL) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (0xfffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                                                >> 0x14U))))))
                                                    : 0ULL)))));
    Vtop___024unit____Vdpiimwrap_ebreak_handle_TOP____024unit(
                                                              (2U 
                                                               == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98)));
    vlSelf->top__DOT__exu_step__DOT__src2_value = (
                                                   ((0x45U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_95)) 
                                                    | ((0x43U 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_95)) 
                                                       | ((0x44U 
                                                           == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_95)) 
                                                          | ((0x42U 
                                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_95)) 
                                                             | (0x40U 
                                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_95))))))
                                                    ? vlSelf->top__DOT__idu_step_io_imm
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                                 >> 0x14U))))
                                                     ? 0ULL
                                                     : 
                                                    vlSelf->top__DOT__exu_step__DOT__Regfile
                                                    [
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                                >> 0x14U)))]));
    vlSelf->top__DOT__exu_step__DOT__and_res = (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                & vlSelf->top__DOT__exu_step__DOT__src2_value);
    top__DOT__exu_step__DOT___io_res2rd_T_45 = (((QData)((IData)(
                                                                 ((VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__exu_step__DOT__src1_value), 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value))) 
                                                                   >> 0x1fU)
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__exu_step__DOT__src1_value), 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value))))));
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                          (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                           + vlSelf->top__DOT__exu_step__DOT__src2_value), vlSelf->__Vtask_pmem_read__1__Rdata);
    vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata 
        = vlSelf->__Vtask_pmem_read__1__Rdata;
    if ((0x44U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_95))) {
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                               (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                                + vlSelf->top__DOT__exu_step__DOT__src2_value), 
                                                               ((0x28U 
                                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                                 ? (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                                                >> 0x14U))))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                                [
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                                                >> 0x14U)))])))))
                                                                 : 
                                                                ((0x26U 
                                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                                  ? (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                                                >> 0x14U))))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                                [
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                                                >> 0x14U)))])))))
                                                                  : 
                                                                 ((7U 
                                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                                   ? 
                                                                  ((0U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                                                >> 0x14U))))
                                                                    ? 0ULL
                                                                    : 
                                                                   vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                   [
                                                                   (0x1fU 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                                               >> 0x14U)))])
                                                                   : 0ULL))), 
                                                               ((0x3023U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                                 ? 0xffU
                                                                 : 
                                                                ((0x1023U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                                  ? 0xfU
                                                                  : 
                                                                 (0x23U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))))));
    }
    vlSelf->top__DOT__exu_step__DOT__sub_res = (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                - vlSelf->top__DOT__exu_step__DOT__src2_value);
    vlSelf->top__DOT__exu_step__DOT__sllw_res = (0x7fffffffffffffffULL 
                                                 & ((QData)((IData)(vlSelf->top__DOT__exu_step__DOT__src1_value)) 
                                                    << 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value))));
    vlSelf->top__DOT__exu_step__DOT__add_res = (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                + vlSelf->top__DOT__exu_step__DOT__src2_value);
    top__DOT__exu_step__DOT___io_res2rd_T_35 = (((QData)((IData)(
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__exu_step__DOT__sllw_res 
                                                                              >> 0x1fU)))
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__sllw_res)));
    top__DOT__exu_step__DOT___io_res2rd_T_50 = (((QData)((IData)(
                                                                 ((((IData)(vlSelf->top__DOT__exu_step__DOT__src1_value) 
                                                                    >> 
                                                                    (0x1fU 
                                                                     & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value))) 
                                                                   >> 0x1fU)
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__sllw_res)));
    vlSelf->top__DOT__exu_step_io_pc_next = ((0x29U 
                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                              ? ((0ULL 
                                                  == vlSelf->top__DOT__exu_step__DOT__cmp)
                                                  ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                  : 
                                                 (4ULL 
                                                  + vlSelf->top__DOT__pc_now))
                                              : ((0x2aU 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                  ? 
                                                 ((0ULL 
                                                   != vlSelf->top__DOT__exu_step__DOT__cmp)
                                                   ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                   : 
                                                  (4ULL 
                                                   + vlSelf->top__DOT__pc_now))
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                   ? 
                                                  (0xfffffffffffffffeULL 
                                                   & vlSelf->top__DOT__exu_step__DOT__add_res)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                    ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                    : 
                                                   (4ULL 
                                                    + vlSelf->top__DOT__pc_now)))));
    top__DOT__exu_step__DOT___io_res2rd_T_19 = (((QData)((IData)(
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                              >> 0x1fU)))
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__add_res)));
    vlSelf->io_pc_next = vlSelf->top__DOT__exu_step_io_pc_next;
    top__DOT__exu_step__DOT___io_res2rd_T_88 = ((0x15U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                 ? 
                                                VL_SHIFTRS_QQI(64,64,6, 
                                                               ((IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_src1_is_pc)
                                                                 ? vlSelf->top__DOT__pc_now
                                                                 : top__DOT__exu_step__DOT___src1_value_T_1), 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)))
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                  ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                  : 
                                                 ((0x10U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                   ? top__DOT__exu_step__DOT___io_res2rd_T_19
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                    ? vlSelf->top__DOT__exu_step__DOT__sub_res
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                     ? top__DOT__exu_step__DOT___io_res2rd_T_19
                                                     : 
                                                    ((0x23U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                      ? (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata))))
                                                      : 
                                                     ((0x22U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                       ? vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata
                                                       : 
                                                      ((0x21U 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata 
                                                                                >> 0x1fU)))
                                                                           ? 0xffffffffU
                                                                           : 0U))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata)))
                                                        : 
                                                       ((0x20U 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                         ? (QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT__exu_step__DOT__sub_res 
                                                                                >> 0x3fU)))))
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                          ? 
                                                         (4ULL 
                                                          + vlSelf->top__DOT__pc_now)
                                                          : 
                                                         ((5U 
                                                           == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                           ? 
                                                          (4ULL 
                                                           + vlSelf->top__DOT__pc_now)
                                                           : 
                                                          ((4U 
                                                            == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                            ? vlSelf->top__DOT__idu_step_io_imm
                                                            : 
                                                           ((3U 
                                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                             ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                              ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                              : 0ULL))))))))))))));
    VL_EXTEND_WQ(127,64, __Vtemp27, top__DOT__exu_step__DOT___io_res2rd_T_50);
    VL_EXTEND_WQ(127,64, __Vtemp28, top__DOT__exu_step__DOT___io_res2rd_T_45);
    VL_EXTEND_WQ(127,64, __Vtemp29, top__DOT__exu_step__DOT___io_res2rd_T_50);
    VL_EXTEND_WQ(127,64, __Vtemp30, top__DOT__exu_step__DOT___io_res2rd_T_45);
    VL_EXTEND_WQ(127,64, __Vtemp31, top__DOT__exu_step__DOT___io_res2rd_T_35);
    VL_EXTEND_WQ(127,64, __Vtemp32, (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value))));
    VL_EXTEND_WQ(127,64, __Vtemp33, vlSelf->top__DOT__exu_step__DOT__src1_value);
    VL_SHIFTL_WWI(127,127,6, __Vtemp34, __Vtemp33, 
                  (0x3fU & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)));
    VL_EXTEND_WQ(127,64, __Vtemp35, ((0x16U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                      ? top__DOT__exu_step__DOT___io_res2rd_T_35
                                      : ((0xdU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                          ? (((QData)((IData)(
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__exu_step__DOT__sub_res 
                                                                           >> 0x1fU)))
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__sub_res)))
                                          : ((9U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                              ? vlSelf->top__DOT__exu_step__DOT__and_res
                                              : ((8U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                  ? vlSelf->top__DOT__exu_step__DOT__and_res
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                   ? 
                                                  (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                   ^ vlSelf->top__DOT__exu_step__DOT__src2_value)
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                    ? 
                                                   (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                    | vlSelf->top__DOT__exu_step__DOT__src2_value)
                                                    : top__DOT__exu_step__DOT___io_res2rd_T_88)))))));
    if ((0x1dU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))) {
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_114[0U] 
            = __Vtemp27[0U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_114[1U] 
            = __Vtemp27[1U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_114[2U] 
            = __Vtemp27[2U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_114[3U] 
            = (0x7fffffffU & __Vtemp27[3U]);
    } else {
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_114[0U] 
            = ((0x1cU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                ? __Vtemp28[0U] : ((0x1bU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                    ? __Vtemp29[0U]
                                    : ((0x1aU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                        ? __Vtemp30[0U]
                                        : ((0x19U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                            ? __Vtemp31[0U]
                                            : ((0x18U 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                ? __Vtemp32[0U]
                                                : (
                                                   (0x17U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                    ? 
                                                   __Vtemp34[0U]
                                                    : 
                                                   __Vtemp35[0U]))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_114[1U] 
            = ((0x1cU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                ? __Vtemp28[1U] : ((0x1bU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                    ? __Vtemp29[1U]
                                    : ((0x1aU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                        ? __Vtemp30[1U]
                                        : ((0x19U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                            ? __Vtemp31[1U]
                                            : ((0x18U 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                ? __Vtemp32[1U]
                                                : (
                                                   (0x17U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                    ? 
                                                   __Vtemp34[1U]
                                                    : 
                                                   __Vtemp35[1U]))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_114[2U] 
            = ((0x1cU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                ? __Vtemp28[2U] : ((0x1bU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                    ? __Vtemp29[2U]
                                    : ((0x1aU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                        ? __Vtemp30[2U]
                                        : ((0x19U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                            ? __Vtemp31[2U]
                                            : ((0x18U 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                ? __Vtemp32[2U]
                                                : (
                                                   (0x17U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                    ? 
                                                   __Vtemp34[2U]
                                                    : 
                                                   __Vtemp35[2U]))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_114[3U] 
            = (0x7fffffffU & ((0x1cU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                               ? __Vtemp28[3U] : ((0x1bU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                   ? 
                                                  __Vtemp29[3U]
                                                   : 
                                                  ((0x1aU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                    ? 
                                                   __Vtemp30[3U]
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                     ? 
                                                    __Vtemp31[3U]
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                      ? 
                                                     __Vtemp32[3U]
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_98))
                                                       ? 
                                                      __Vtemp34[3U]
                                                       : 
                                                      __Vtemp35[3U])))))));
    }
    vlSelf->io_outval = (((QData)((IData)(vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_114[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_114[0U])));
    vlSelf->top__DOT__exu_step__DOT__Regfile_MPORT_data 
        = ((((0x100073U != (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)) 
             & ((0x3023U != (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                & ((0x1023U != (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                   & ((0x23U != (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                      & ((0x1063U != (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                         & (0x63U != (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))))))) 
            & (0U != (0x1fU & (IData)((vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                       >> 7U))))) ? 
           (((QData)((IData)(vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_114[1U])) 
             << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_114[0U])))
            : ((0U == (0x1fU & (IData)((vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                        >> 7U)))) ? 0ULL
                : vlSelf->top__DOT__exu_step__DOT__Regfile
               [(0x1fU & (IData)((vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                  >> 7U)))]));
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
    vlSelf->io_pc_next = VL_RAND_RESET_Q(64);
    vlSelf->io_outval = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__idu_step_io_imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__idu_step_io_ctrl_sign_src1_is_pc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__exu_step_io_pc_next = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__pc_now = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__idu_step__DOT___inst_type_T_95 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__idu_step__DOT___inst_now_T_98 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__exu_step__DOT__Regfile[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__exu_step__DOT__Regfile_MPORT_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu_step__DOT__cmp = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu_step__DOT__src1_value = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu_step__DOT__src2_value = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu_step__DOT__add_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu_step__DOT__sub_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu_step__DOT__sllw_res = VL_RAND_RESET_Q(63);
    vlSelf->top__DOT__exu_step__DOT__and_res = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(127, vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_114);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__Vtask_pmem_read__0__Rdata = 0;
    vlSelf->__Vtask_pmem_read__1__Rdata = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
