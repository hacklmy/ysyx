// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ Raddr, QData/*63:0*/ &Rdata);
void Vtop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &Regfile);
void Vtop___024unit____Vdpiimwrap_get_pc_TOP____024unit(QData/*63:0*/ pc);
void Vtop___024unit____Vdpiimwrap_ebreak_handle_TOP____024unit(IData/*31:0*/ flag);
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ Waddr, QData/*63:0*/ Wdata, CData/*7:0*/ Wmask);

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
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
    CData/*4:0*/ __Vdlyvdim0__top__DOT__exu_step__DOT__Regfile__v0;
    VlWide<4>/*126:0*/ top__DOT__exu_step__DOT___io_res2rd_T_139;
    VlWide<4>/*127:0*/ __Vtemp2;
    VlWide<4>/*127:0*/ __Vtemp3;
    VlWide<4>/*127:0*/ __Vtemp4;
    VlWide<4>/*127:0*/ __Vtemp5;
    VlWide<4>/*127:0*/ __Vtemp6;
    VlWide<4>/*127:0*/ __Vtemp14;
    VlWide<4>/*127:0*/ __Vtemp15;
    VlWide<4>/*127:0*/ __Vtemp16;
    VlWide<4>/*127:0*/ __Vtemp17;
    VlWide<4>/*127:0*/ __Vtemp18;
    VlWide<4>/*127:0*/ __Vtemp19;
    VlWide<4>/*127:0*/ __Vtemp20;
    VlWide<4>/*127:0*/ __Vtemp21;
    VlWide<4>/*127:0*/ __Vtemp22;
    VlWide<4>/*127:0*/ __Vtemp23;
    VlWide<4>/*127:0*/ __Vtemp24;
    QData/*63:0*/ top__DOT__exu_step__DOT___src1_value_T_1;
    QData/*63:0*/ top__DOT__exu_step__DOT___src2_value_T_1;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_32;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_48;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_58;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_63;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_111;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_pc_next_T_38;
    QData/*63:0*/ __Vdlyvval__top__DOT__exu_step__DOT__Regfile__v0;
    // Body
    __Vdlyvval__top__DOT__exu_step__DOT__Regfile__v0 
        = vlSelf->top__DOT__exu_step__DOT__Regfile_MPORT_data;
    __Vdlyvdim0__top__DOT__exu_step__DOT__Regfile__v0 
        = (0x1fU & (IData)((vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                            >> 7U)));
    vlSelf->top__DOT__pc_now = ((IData)(vlSelf->reset)
                                 ? 0x80000000ULL : vlSelf->top__DOT__exu_step_io_pc_next);
    vlSelf->top__DOT__exu_step__DOT__Regfile[__Vdlyvdim0__top__DOT__exu_step__DOT__Regfile__v0] 
        = __Vdlyvval__top__DOT__exu_step__DOT__Regfile__v0;
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
    vlSelf->io_pc = vlSelf->top__DOT__pc_now;
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
    top__DOT__exu_step__DOT___io_res2rd_T_63 = (((QData)((IData)(
                                                                 ((((IData)(vlSelf->top__DOT__exu_step__DOT__src1_value) 
                                                                    >> 
                                                                    (0x1fU 
                                                                     & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value))) 
                                                                   >> 0x1fU)
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__sllw_res)));
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
    VL_EXTEND_WQ(127,64, __Vtemp2, top__DOT__exu_step__DOT___io_res2rd_T_48);
    VL_EXTEND_WQ(127,64, __Vtemp3, (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                    >> (0x3fU & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value))));
    VL_EXTEND_WQ(127,64, __Vtemp4, vlSelf->top__DOT__exu_step__DOT__src1_value);
    VL_SHIFTL_WWI(127,127,6, __Vtemp5, __Vtemp4, (0x3fU 
                                                  & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)));
    VL_EXTEND_WQ(127,64, __Vtemp6, ((0x16U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
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
            = __Vtemp2[0U];
        top__DOT__exu_step__DOT___io_res2rd_T_139[1U] 
            = __Vtemp2[1U];
        top__DOT__exu_step__DOT___io_res2rd_T_139[2U] 
            = __Vtemp2[2U];
        top__DOT__exu_step__DOT___io_res2rd_T_139[3U] 
            = (0x7fffffffU & __Vtemp2[3U]);
    } else {
        top__DOT__exu_step__DOT___io_res2rd_T_139[0U] 
            = ((0x18U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                ? __Vtemp3[0U] : ((0x17U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                   ? __Vtemp5[0U] : 
                                  __Vtemp6[0U]));
        top__DOT__exu_step__DOT___io_res2rd_T_139[1U] 
            = ((0x18U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                ? __Vtemp3[1U] : ((0x17U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                   ? __Vtemp5[1U] : 
                                  __Vtemp6[1U]));
        top__DOT__exu_step__DOT___io_res2rd_T_139[2U] 
            = ((0x18U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                ? __Vtemp3[2U] : ((0x17U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                   ? __Vtemp5[2U] : 
                                  __Vtemp6[2U]));
        top__DOT__exu_step__DOT___io_res2rd_T_139[3U] 
            = (0x7fffffffU & ((0x18U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                               ? __Vtemp3[3U] : ((0x17U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                  ? 
                                                 __Vtemp5[3U]
                                                  : 
                                                 __Vtemp6[3U])));
    }
    vlSelf->io_pc_next = vlSelf->top__DOT__exu_step_io_pc_next;
    VL_EXTEND_WQ(127,64, __Vtemp14, (((QData)((IData)(
                                                      ((vlSelf->top__DOT__exu_step__DOT__remw_res 
                                                        >> 0x1fU)
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__remw_res))));
    VL_EXTEND_WQ(127,64, __Vtemp15, (((QData)((IData)(
                                                      ((vlSelf->top__DOT__exu_step__DOT__divw_res 
                                                        >> 0x1fU)
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__divw_res))));
    VL_EXTEND_WQ(127,64, __Vtemp16, (((QData)((IData)(
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2 
                                                                   >> 0x1fU)))
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2))));
    VL_EXTEND_WQ(128,64, __Vtemp17, vlSelf->top__DOT__exu_step__DOT__src1_value);
    VL_EXTEND_WQ(128,64, __Vtemp18, vlSelf->top__DOT__exu_step__DOT__src2_value);
    VL_MUL_W(4, __Vtemp19, __Vtemp17, __Vtemp18);
    VL_EXTEND_WQ(127,64, __Vtemp20, (((QData)((IData)(
                                                      __Vtemp19[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp19[0U]))));
    VL_EXTEND_WQ(127,64, __Vtemp21, top__DOT__exu_step__DOT___io_res2rd_T_63);
    VL_EXTEND_WQ(127,64, __Vtemp22, top__DOT__exu_step__DOT___io_res2rd_T_58);
    VL_EXTEND_WQ(127,64, __Vtemp23, top__DOT__exu_step__DOT___io_res2rd_T_63);
    VL_EXTEND_WQ(127,64, __Vtemp24, top__DOT__exu_step__DOT___io_res2rd_T_58);
    if ((0x14U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))) {
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_155[0U] 
            = __Vtemp14[0U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_155[1U] 
            = __Vtemp14[1U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_155[2U] 
            = __Vtemp14[2U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_155[3U] 
            = __Vtemp14[3U];
    } else {
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_155[0U] 
            = ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                ? __Vtemp15[0U] : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                    ? __Vtemp16[0U]
                                    : ((0x11U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                        ? __Vtemp20[0U]
                                        : ((0x1dU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                            ? __Vtemp21[0U]
                                            : ((0x1cU 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                ? __Vtemp22[0U]
                                                : (
                                                   (0x1bU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                    ? 
                                                   __Vtemp23[0U]
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                     ? 
                                                    __Vtemp24[0U]
                                                     : 
                                                    top__DOT__exu_step__DOT___io_res2rd_T_139[0U])))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_155[1U] 
            = ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                ? __Vtemp15[1U] : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                    ? __Vtemp16[1U]
                                    : ((0x11U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                        ? __Vtemp20[1U]
                                        : ((0x1dU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                            ? __Vtemp21[1U]
                                            : ((0x1cU 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                ? __Vtemp22[1U]
                                                : (
                                                   (0x1bU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                    ? 
                                                   __Vtemp23[1U]
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                     ? 
                                                    __Vtemp24[1U]
                                                     : 
                                                    top__DOT__exu_step__DOT___io_res2rd_T_139[1U])))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_155[2U] 
            = ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                ? __Vtemp15[2U] : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                    ? __Vtemp16[2U]
                                    : ((0x11U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                        ? __Vtemp20[2U]
                                        : ((0x1dU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                            ? __Vtemp21[2U]
                                            : ((0x1cU 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                ? __Vtemp22[2U]
                                                : (
                                                   (0x1bU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                    ? 
                                                   __Vtemp23[2U]
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                     ? 
                                                    __Vtemp24[2U]
                                                     : 
                                                    top__DOT__exu_step__DOT___io_res2rd_T_139[2U])))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_155[3U] 
            = ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                ? __Vtemp15[3U] : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                    ? __Vtemp16[3U]
                                    : ((0x11U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                        ? __Vtemp20[3U]
                                        : ((0x1dU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                            ? __Vtemp21[3U]
                                            : ((0x1cU 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                ? __Vtemp22[3U]
                                                : (
                                                   (0x1bU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                    ? 
                                                   __Vtemp23[3U]
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
                                                     ? 
                                                    __Vtemp24[3U]
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

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
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
