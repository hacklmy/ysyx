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
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_type_T_97;
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_type_T_108;
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_type_T_119;
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_type_T_130;
    CData/*5:0*/ top__DOT__idu_step__DOT___inst_now_T_99;
    CData/*5:0*/ top__DOT__idu_step__DOT___inst_now_T_110;
    CData/*5:0*/ top__DOT__idu_step__DOT___inst_now_T_121;
    CData/*5:0*/ top__DOT__idu_step__DOT___inst_now_T_132;
    CData/*0:0*/ top__DOT__exu_step__DOT___io_res2rd_T_4;
    VlWide<4>/*126:0*/ top__DOT__exu_step__DOT___io_res2rd_T_139;
    VlWide<4>/*127:0*/ __Vtemp42;
    VlWide<4>/*127:0*/ __Vtemp43;
    VlWide<4>/*127:0*/ __Vtemp44;
    VlWide<4>/*127:0*/ __Vtemp45;
    VlWide<4>/*127:0*/ __Vtemp46;
    VlWide<4>/*127:0*/ __Vtemp54;
    VlWide<4>/*127:0*/ __Vtemp55;
    VlWide<4>/*127:0*/ __Vtemp56;
    VlWide<4>/*127:0*/ __Vtemp57;
    VlWide<4>/*127:0*/ __Vtemp58;
    VlWide<4>/*127:0*/ __Vtemp59;
    VlWide<4>/*127:0*/ __Vtemp60;
    VlWide<4>/*127:0*/ __Vtemp61;
    VlWide<4>/*127:0*/ __Vtemp62;
    VlWide<4>/*127:0*/ __Vtemp63;
    VlWide<4>/*127:0*/ __Vtemp64;
    QData/*63:0*/ top__DOT__exu_step__DOT___src1_value_T_1;
    QData/*63:0*/ top__DOT__exu_step__DOT___src2_value_T_1;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_32;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_48;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_58;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_111;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_pc_next_T_38;
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
    top__DOT__exu_step__DOT___src2_value_T_1 = ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                             >> 0x14U))))
                                                 ? 0ULL
                                                 : 
                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                [(0x1fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                             >> 0x14U)))]);
    vlSelf->top__DOT__idu_step_io_ctrl_sign_src1_is_pc 
        = ((0x6fU == (0x7fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
           | ((0x17U == (0x7fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
              | ((0x1063U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                 | ((0x63U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                    | ((0x5063U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                       | ((0x4063U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                          | (0x6063U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))))))));
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
    if ((0x5063U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))) {
        top__DOT__idu_step__DOT___inst_now_T_99 = 0x2bU;
        top__DOT__idu_step__DOT___inst_type_T_97 = 0x45U;
    } else {
        top__DOT__idu_step__DOT___inst_now_T_99 = (
                                                   (0x4063U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                    ? 0x2cU
                                                    : 
                                                   ((0x6063U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                     ? 0x2dU
                                                     : 
                                                    ((0x2023U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                      ? 0x27U
                                                      : 
                                                     ((0x1003U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                       ? 0x24U
                                                       : 
                                                      ((0x5003U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                        ? 0x25U
                                                        : 
                                                       ((0x2000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                         ? 0x11U
                                                         : 
                                                        ((0x200003bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                          ? 0x12U
                                                          : 
                                                         ((0x200403bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                           ? 0x13U
                                                           : 
                                                          ((0x200603bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                            ? 0x14U
                                                            : 0U)))))))));
        top__DOT__idu_step__DOT___inst_type_T_97 = 
            ((0x4063U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
              ? 0x45U : ((0x6063U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                          ? 0x45U : ((0x2023U == (0x707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                      ? 0x44U : ((0x1003U 
                                                  == 
                                                  (0x707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                  ? 0x40U
                                                  : 
                                                 ((0x5003U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                   ? 0x40U
                                                   : 
                                                  ((0x2000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                    ? 0x41U
                                                    : 
                                                   ((0x200003bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                     ? 0x41U
                                                     : 
                                                    ((0x200403bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                      ? 0x41U
                                                      : 
                                                     ((0x200603bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                       ? 0x41U
                                                       : 0U)))))))));
    }
    vlSelf->top__DOT__exu_step__DOT__src1_value = ((IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_src1_is_pc)
                                                    ? vlSelf->top__DOT__pc_now
                                                    : top__DOT__exu_step__DOT___src1_value_T_1);
    if ((0x4000003bU == (0xfe00707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))) {
        top__DOT__idu_step__DOT___inst_now_T_110 = 0xdU;
        top__DOT__idu_step__DOT___inst_type_T_108 = 0x41U;
    } else {
        top__DOT__idu_step__DOT___inst_now_T_110 = 
            ((0x103bU == (0xfe00707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
              ? 0x16U : ((0x1013U == (0xfc00707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                          ? 0x17U : ((0x5013U == (0xfc00707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                      ? 0x18U : ((0x101bU 
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
                                                      : 
                                                     ((0x3033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                       ? 0x1eU
                                                       : 
                                                      ((0x2033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                        ? 0x1fU
                                                        : (IData)(top__DOT__idu_step__DOT___inst_now_T_99)))))))))));
        top__DOT__idu_step__DOT___inst_type_T_108 = 
            ((0x103bU == (0xfe00707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
              ? 0x41U : ((0x1013U == (0xfc00707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                          ? 0x40U : ((0x5013U == (0xfc00707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                      ? 0x40U : ((0x101bU 
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
                                                      : 
                                                     ((0x3033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                       ? 0x41U
                                                       : 
                                                      ((0x2033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                        ? 0x41U
                                                        : (IData)(top__DOT__idu_step__DOT___inst_type_T_97)))))))))));
    }
    if ((0x3003U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))) {
        top__DOT__idu_step__DOT___inst_now_T_121 = 0x22U;
        top__DOT__idu_step__DOT___inst_type_T_119 = 0x40U;
    } else {
        top__DOT__idu_step__DOT___inst_now_T_121 = 
            ((0x1bU == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
              ? 0x10U : ((0x33U == (0xfe00707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                          ? 0xfU : ((0x40005013U == 
                                     (0xfc00707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                     ? 0x15U : ((0x4003U 
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
                                                      : 
                                                     ((0x7013U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                       ? 9U
                                                       : (IData)(top__DOT__idu_step__DOT___inst_now_T_110)))))))))));
        top__DOT__idu_step__DOT___inst_type_T_119 = 
            ((0x1bU == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
              ? 0x40U : ((0x33U == (0xfe00707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                          ? 0x41U : ((0x40005013U == 
                                      (0xfc00707fU 
                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                      ? 0x40U : ((0x4003U 
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
                                                       : 
                                                      ((0x7013U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                        ? 0x40U
                                                        : (IData)(top__DOT__idu_step__DOT___inst_type_T_108)))))))))));
    }
    if ((0x17U == (0x7fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))) {
        top__DOT__idu_step__DOT___inst_now_T_132 = 3U;
        top__DOT__idu_step__DOT___inst_type_T_130 = 0x42U;
    } else {
        top__DOT__idu_step__DOT___inst_now_T_132 = 
            ((0x37U == (0x7fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
              ? 4U : ((0x6fU == (0x7fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                       ? 5U : ((0x67U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                ? 6U : ((0x3023U == 
                                         (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                         ? 7U : ((0x3013U 
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
                                                       : (IData)(top__DOT__idu_step__DOT___inst_now_T_121)))))))))));
        top__DOT__idu_step__DOT___inst_type_T_130 = 
            ((0x37U == (0x7fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
              ? 0x42U : ((0x6fU == (0x7fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                          ? 0x43U : ((0x67U == (0x707fU 
                                                & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                      ? 0x40U : ((0x3023U 
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
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                        ? 0x45U
                                                        : (IData)(top__DOT__idu_step__DOT___inst_type_T_119)))))))))));
    }
    if ((0x13U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))) {
        vlSelf->top__DOT__idu_step__DOT___inst_now_T_134 = 1U;
        vlSelf->top__DOT__idu_step__DOT___inst_type_T_131 = 0x40U;
    } else {
        vlSelf->top__DOT__idu_step__DOT___inst_now_T_134 
            = ((0x100073U == (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))
                ? 2U : (IData)(top__DOT__idu_step__DOT___inst_now_T_132));
        vlSelf->top__DOT__idu_step__DOT___inst_type_T_131 
            = top__DOT__idu_step__DOT___inst_type_T_130;
    }
    Vtop___024unit____Vdpiimwrap_ebreak_handle_TOP____024unit(
                                                              (2U 
                                                               == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134)));
    vlSelf->top__DOT__idu_step_io_ctrl_sign_src2_is_imm 
        = ((0x45U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_131)) 
           | ((0x43U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_131)) 
              | ((0x44U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_131)) 
                 | ((0x42U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_131)) 
                    | (0x40U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_131))))));
    vlSelf->top__DOT__idu_step_io_imm = ((0x45U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_131))
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
                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_131))
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
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_131))
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
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_131))
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
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_131))
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
    vlSelf->top__DOT__exu_step__DOT__src2_value = ((IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_src2_is_imm)
                                                    ? vlSelf->top__DOT__idu_step_io_imm
                                                    : top__DOT__exu_step__DOT___src2_value_T_1);
    vlSelf->top__DOT__exu_step__DOT__srlw_res = ((IData)(vlSelf->top__DOT__exu_step__DOT__src1_value) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)));
    vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2 
        = ((QData)((IData)(vlSelf->top__DOT__exu_step__DOT__src1_value)) 
           * (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)));
    vlSelf->top__DOT__exu_step__DOT__divw_res = VL_DIV_III(32, (IData)(vlSelf->top__DOT__exu_step__DOT__src1_value), (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value));
    vlSelf->top__DOT__exu_step__DOT__remw_res = VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__exu_step__DOT__src1_value), (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value));
    top__DOT__exu_step__DOT___io_res2rd_T_58 = (((QData)((IData)(
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
    vlSelf->top__DOT__exu_step__DOT__sub_res = (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                - vlSelf->top__DOT__exu_step__DOT__src2_value);
    vlSelf->top__DOT__exu_step__DOT__and_res = (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                & vlSelf->top__DOT__exu_step__DOT__src2_value);
    top__DOT__exu_step__DOT___io_res2rd_T_4 = (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                               < vlSelf->top__DOT__exu_step__DOT__src2_value);
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                          (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                           + vlSelf->top__DOT__exu_step__DOT__src2_value), vlSelf->__Vtask_pmem_read__1__Rdata);
    vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata 
        = vlSelf->__Vtask_pmem_read__1__Rdata;
    if ((0x44U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_131))) {
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                               (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                                + vlSelf->top__DOT__exu_step__DOT__src2_value), 
                                                               ((0x27U 
                                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                                 ? (QData)((IData)(
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
                                                                                >> 0x14U)))])))
                                                                 : 
                                                                ((0x28U 
                                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
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
                                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
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
                                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
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
                                                                    : 0ULL)))), 
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
                                                                  ? 3U
                                                                  : 
                                                                 ((0x23U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                                   ? 1U
                                                                   : 
                                                                  ((0x2023U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                                    ? 0xfU
                                                                    : 0U)))));
    }
    vlSelf->top__DOT__exu_step__DOT__sllw_res = (0x7fffffffffffffffULL 
                                                 & ((QData)((IData)(vlSelf->top__DOT__exu_step__DOT__src1_value)) 
                                                    << 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value))));
    vlSelf->top__DOT__exu_step__DOT__add_res = (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                + vlSelf->top__DOT__exu_step__DOT__src2_value);
    top__DOT__exu_step__DOT___io_res2rd_T_48 = (((QData)((IData)(
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__exu_step__DOT__sllw_res 
                                                                              >> 0x1fU)))
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__sllw_res)));
    top__DOT__exu_step__DOT___io_pc_next_T_38 = ((0x2cU 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                  ? 
                                                 (VL_LTS_IQQ(1,64,64, 
                                                             ((0U 
                                                               == 
                                                               (0x1fU 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                                           >> 0xfU))))
                                                               ? 0ULL
                                                               : 
                                                              vlSelf->top__DOT__exu_step__DOT__Regfile
                                                              [
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                                          >> 0xfU)))]), 
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
                                                                          >> 0x14U)))]))
                                                   ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                   : 
                                                  (4ULL 
                                                   + vlSelf->top__DOT__pc_now))
                                                  : 
                                                 ((0x2bU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                   ? 
                                                  (VL_GTES_IQQ(1,64,64, 
                                                               ((0U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                                             >> 0xfU))))
                                                                 ? 0ULL
                                                                 : 
                                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                [
                                                                (0x1fU 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                                            >> 0xfU)))]), 
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
                                                                            >> 0x14U)))]))
                                                    ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                    : 
                                                   (4ULL 
                                                    + vlSelf->top__DOT__pc_now))
                                                   : 
                                                  ((0x29U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                    ? 
                                                   ((0ULL 
                                                     == vlSelf->top__DOT__exu_step__DOT__cmp)
                                                     ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                     : 
                                                    (4ULL 
                                                     + vlSelf->top__DOT__pc_now))
                                                    : 
                                                   ((0x2aU 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                     ? 
                                                    ((0ULL 
                                                      != vlSelf->top__DOT__exu_step__DOT__cmp)
                                                      ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                      : 
                                                     (4ULL 
                                                      + vlSelf->top__DOT__pc_now))
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                      ? 
                                                     (0xfffffffffffffffeULL 
                                                      & vlSelf->top__DOT__exu_step__DOT__add_res)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                       ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                       : 
                                                      (4ULL 
                                                       + vlSelf->top__DOT__pc_now)))))));
    top__DOT__exu_step__DOT___io_res2rd_T_32 = (((QData)((IData)(
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                              >> 0x1fU)))
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__add_res)));
    top__DOT__exu_step__DOT___io_res2rd_T_111 = ((0x25U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                  ? (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata))))
                                                  : 
                                                 ((0x24U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                   ? 
                                                  ((((1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata 
                                                                 >> 0xfU)))
                                                      ? 0xffffffffffffULL
                                                      : 0ULL) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata)))))
                                                   : 
                                                  ((0x23U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata))))
                                                    : 
                                                   ((0x22U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                     ? vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata
                                                     : 
                                                    ((0x21U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
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
                                                     ((0x1fU 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                       ? (QData)((IData)(
                                                                         VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__exu_step__DOT__src1_value, 
                                                                                ((IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_src2_is_imm)
                                                                                 ? vlSelf->top__DOT__idu_step_io_imm
                                                                                 : top__DOT__exu_step__DOT___src2_value_T_1))))
                                                       : 
                                                      ((0x1eU 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                        ? (QData)((IData)(top__DOT__exu_step__DOT___io_res2rd_T_4))
                                                        : 
                                                       ((0x20U 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                         ? (QData)((IData)(top__DOT__exu_step__DOT___io_res2rd_T_4))
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                          ? 
                                                         (4ULL 
                                                          + vlSelf->top__DOT__pc_now)
                                                          : 
                                                         ((5U 
                                                           == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                           ? 
                                                          (4ULL 
                                                           + vlSelf->top__DOT__pc_now)
                                                           : 
                                                          ((4U 
                                                            == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                            ? vlSelf->top__DOT__idu_step_io_imm
                                                            : 
                                                           ((3U 
                                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                             ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                              ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                              : 0ULL)))))))))))));
    vlSelf->top__DOT__exu_step_io_pc_next = ((0x2dU 
                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                              ? (((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                                >> 0xfU))))
                                                    ? 0ULL
                                                    : 
                                                   vlSelf->top__DOT__exu_step__DOT__Regfile
                                                   [
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                               >> 0xfU)))]) 
                                                  < 
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
                                                               >> 0x14U)))]))
                                                  ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                  : 
                                                 (4ULL 
                                                  + vlSelf->top__DOT__pc_now))
                                              : top__DOT__exu_step__DOT___io_pc_next_T_38);
    VL_EXTEND_WQ(127,64, __Vtemp42, top__DOT__exu_step__DOT___io_res2rd_T_48);
    VL_EXTEND_WQ(127,64, __Vtemp43, (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value))));
    VL_EXTEND_WQ(127,64, __Vtemp44, vlSelf->top__DOT__exu_step__DOT__src1_value);
    VL_SHIFTL_WWI(127,127,6, __Vtemp45, __Vtemp44, 
                  (0x3fU & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)));
    VL_EXTEND_WQ(127,64, __Vtemp46, ((0x16U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                      ? top__DOT__exu_step__DOT___io_res2rd_T_48
                                      : ((0xdU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                          ? (((QData)((IData)(
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__exu_step__DOT__sub_res 
                                                                           >> 0x1fU)))
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__sub_res)))
                                          : ((9U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                              ? vlSelf->top__DOT__exu_step__DOT__and_res
                                              : ((8U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                  ? vlSelf->top__DOT__exu_step__DOT__and_res
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                   ? 
                                                  (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                   ^ vlSelf->top__DOT__exu_step__DOT__src2_value)
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                    ? 
                                                   (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                    | vlSelf->top__DOT__exu_step__DOT__src2_value)
                                                    : 
                                                   ((0x15U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                     ? 
                                                    VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__exu_step__DOT__src1_value, 
                                                                   (0x3fU 
                                                                    & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)))
                                                     : 
                                                    ((0xfU 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                      ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                      : 
                                                     ((0x10U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                       ? top__DOT__exu_step__DOT___io_res2rd_T_32
                                                       : 
                                                      ((0xeU 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                        ? vlSelf->top__DOT__exu_step__DOT__sub_res
                                                        : 
                                                       ((0xcU 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                         ? top__DOT__exu_step__DOT___io_res2rd_T_32
                                                         : top__DOT__exu_step__DOT___io_res2rd_T_111))))))))))));
    if ((0x19U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))) {
        top__DOT__exu_step__DOT___io_res2rd_T_139[0U] 
            = __Vtemp42[0U];
        top__DOT__exu_step__DOT___io_res2rd_T_139[1U] 
            = __Vtemp42[1U];
        top__DOT__exu_step__DOT___io_res2rd_T_139[2U] 
            = __Vtemp42[2U];
        top__DOT__exu_step__DOT___io_res2rd_T_139[3U] 
            = (0x7fffffffU & __Vtemp42[3U]);
    } else {
        top__DOT__exu_step__DOT___io_res2rd_T_139[0U] 
            = ((0x18U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                ? __Vtemp43[0U] : ((0x17U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                    ? __Vtemp45[0U]
                                    : __Vtemp46[0U]));
        top__DOT__exu_step__DOT___io_res2rd_T_139[1U] 
            = ((0x18U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                ? __Vtemp43[1U] : ((0x17U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                    ? __Vtemp45[1U]
                                    : __Vtemp46[1U]));
        top__DOT__exu_step__DOT___io_res2rd_T_139[2U] 
            = ((0x18U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                ? __Vtemp43[2U] : ((0x17U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                    ? __Vtemp45[2U]
                                    : __Vtemp46[2U]));
        top__DOT__exu_step__DOT___io_res2rd_T_139[3U] 
            = (0x7fffffffU & ((0x18U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                               ? __Vtemp43[3U] : ((0x17U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                   ? 
                                                  __Vtemp45[3U]
                                                   : 
                                                  __Vtemp46[3U])));
    }
    vlSelf->io_pc_next = vlSelf->top__DOT__exu_step_io_pc_next;
    VL_EXTEND_WQ(127,64, __Vtemp54, (((QData)((IData)(
                                                      ((vlSelf->top__DOT__exu_step__DOT__remw_res 
                                                        >> 0x1fU)
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__remw_res))));
    VL_EXTEND_WQ(127,64, __Vtemp55, (((QData)((IData)(
                                                      ((vlSelf->top__DOT__exu_step__DOT__divw_res 
                                                        >> 0x1fU)
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__divw_res))));
    VL_EXTEND_WQ(127,64, __Vtemp56, (((QData)((IData)(
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2 
                                                                   >> 0x1fU)))
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2))));
    VL_EXTEND_WQ(128,64, __Vtemp57, vlSelf->top__DOT__exu_step__DOT__src1_value);
    VL_EXTEND_WQ(128,64, __Vtemp58, vlSelf->top__DOT__exu_step__DOT__src2_value);
    VL_MUL_W(4, __Vtemp59, __Vtemp57, __Vtemp58);
    VL_EXTEND_WQ(127,64, __Vtemp60, (((QData)((IData)(
                                                      __Vtemp59[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp59[0U]))));
    VL_EXTEND_WQ(127,64, __Vtemp61, (((QData)((IData)(
                                                      ((vlSelf->top__DOT__exu_step__DOT__srlw_res 
                                                        >> 0x1fU)
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__sllw_res))));
    VL_EXTEND_WQ(127,64, __Vtemp62, top__DOT__exu_step__DOT___io_res2rd_T_58);
    VL_EXTEND_WQ(127,64, __Vtemp63, (((QData)((IData)(
                                                      ((vlSelf->top__DOT__exu_step__DOT__srlw_res 
                                                        >> 0x1fU)
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__srlw_res))));
    VL_EXTEND_WQ(127,64, __Vtemp64, top__DOT__exu_step__DOT___io_res2rd_T_58);
    if ((0x14U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))) {
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_155[0U] 
            = __Vtemp54[0U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_155[1U] 
            = __Vtemp54[1U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_155[2U] 
            = __Vtemp54[2U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_155[3U] 
            = __Vtemp54[3U];
    } else {
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_155[0U] 
            = ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                ? __Vtemp55[0U] : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                    ? __Vtemp56[0U]
                                    : ((0x11U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                        ? __Vtemp60[0U]
                                        : ((0x1dU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                            ? __Vtemp61[0U]
                                            : ((0x1cU 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                ? __Vtemp62[0U]
                                                : (
                                                   (0x1bU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                    ? 
                                                   __Vtemp63[0U]
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                     ? 
                                                    __Vtemp64[0U]
                                                     : 
                                                    top__DOT__exu_step__DOT___io_res2rd_T_139[0U])))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_155[1U] 
            = ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                ? __Vtemp55[1U] : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                    ? __Vtemp56[1U]
                                    : ((0x11U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                        ? __Vtemp60[1U]
                                        : ((0x1dU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                            ? __Vtemp61[1U]
                                            : ((0x1cU 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                ? __Vtemp62[1U]
                                                : (
                                                   (0x1bU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                    ? 
                                                   __Vtemp63[1U]
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                     ? 
                                                    __Vtemp64[1U]
                                                     : 
                                                    top__DOT__exu_step__DOT___io_res2rd_T_139[1U])))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_155[2U] 
            = ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                ? __Vtemp55[2U] : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                    ? __Vtemp56[2U]
                                    : ((0x11U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                        ? __Vtemp60[2U]
                                        : ((0x1dU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                            ? __Vtemp61[2U]
                                            : ((0x1cU 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                ? __Vtemp62[2U]
                                                : (
                                                   (0x1bU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                    ? 
                                                   __Vtemp63[2U]
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                     ? 
                                                    __Vtemp64[2U]
                                                     : 
                                                    top__DOT__exu_step__DOT___io_res2rd_T_139[2U])))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_155[3U] 
            = ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                ? __Vtemp55[3U] : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                    ? __Vtemp56[3U]
                                    : ((0x11U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                        ? __Vtemp60[3U]
                                        : ((0x1dU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                            ? __Vtemp61[3U]
                                            : ((0x1cU 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                ? __Vtemp62[3U]
                                                : (
                                                   (0x1bU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                    ? 
                                                   __Vtemp63[3U]
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                     ? 
                                                    __Vtemp64[3U]
                                                     : 
                                                    top__DOT__exu_step__DOT___io_res2rd_T_139[3U])))))));
    }
    vlSelf->io_outval = (((QData)((IData)(vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_155[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_155[0U])));
    vlSelf->top__DOT__exu_step__DOT__Regfile_MPORT_data 
        = ((((0x100073U != (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)) 
             & ((0x3023U != (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                & ((0x1023U != (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                   & ((0x23U != (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                      & ((0x2023U != (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                         & ((0x1063U != (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                            & ((0x63U != (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                               & ((0x5063U != (0x707fU 
                                               & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                                  & ((0x4063U != (0x707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                                     & (0x6063U != 
                                        (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))))))))))) 
            & (0U != (0x1fU & (IData)((vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                       >> 7U))))) ? 
           (((QData)((IData)(vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_155[1U])) 
             << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_155[0U])))
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
    vlSelf->top__DOT__idu_step_io_ctrl_sign_src2_is_imm = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__idu_step_io_ctrl_sign_src1_is_pc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__exu_step_io_pc_next = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__pc_now = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__idu_step__DOT___inst_type_T_131 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__idu_step__DOT___inst_now_T_134 = VL_RAND_RESET_I(6);
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
    vlSelf->top__DOT__exu_step__DOT__srlw_res = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__exu_step__DOT__sllw_res = VL_RAND_RESET_Q(63);
    vlSelf->top__DOT__exu_step__DOT__and_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu_step__DOT__divw_res = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__exu_step__DOT__remw_res = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_155);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__Vtask_pmem_read__0__Rdata = 0;
    vlSelf->__Vtask_pmem_read__1__Rdata = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
