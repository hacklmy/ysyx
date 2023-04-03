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
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_type_T_127;
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_type_T_138;
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_type_T_149;
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_type_T_160;
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_type_T_171;
    CData/*5:0*/ top__DOT__idu_step__DOT___inst_now_T_129;
    CData/*5:0*/ top__DOT__idu_step__DOT___inst_now_T_140;
    CData/*5:0*/ top__DOT__idu_step__DOT___inst_now_T_151;
    CData/*5:0*/ top__DOT__idu_step__DOT___inst_now_T_162;
    CData/*5:0*/ top__DOT__idu_step__DOT___inst_now_T_173;
    CData/*0:0*/ top__DOT__exu_step__DOT___io_res2rd_T_4;
    CData/*0:0*/ top__DOT__exu_step__DOT___io_res2rd_T_10;
    VlWide<4>/*126:0*/ top__DOT__exu_step__DOT___io_res2rd_T_186;
    VlWide<4>/*127:0*/ __Vtemp77;
    VlWide<4>/*127:0*/ __Vtemp78;
    VlWide<3>/*95:0*/ __Vtemp82;
    VlWide<3>/*95:0*/ __Vtemp83;
    VlWide<3>/*95:0*/ __Vtemp85;
    VlWide<3>/*95:0*/ __Vtemp86;
    VlWide<3>/*95:0*/ __Vtemp87;
    VlWide<3>/*95:0*/ __Vtemp88;
    VlWide<4>/*127:0*/ __Vtemp89;
    VlWide<4>/*127:0*/ __Vtemp90;
    VlWide<4>/*127:0*/ __Vtemp91;
    VlWide<4>/*127:0*/ __Vtemp92;
    VlWide<4>/*127:0*/ __Vtemp93;
    VlWide<4>/*127:0*/ __Vtemp94;
    VlWide<4>/*127:0*/ __Vtemp95;
    VlWide<4>/*127:0*/ __Vtemp96;
    VlWide<4>/*127:0*/ __Vtemp97;
    VlWide<4>/*127:0*/ __Vtemp98;
    VlWide<4>/*127:0*/ __Vtemp99;
    VlWide<4>/*127:0*/ __Vtemp100;
    VlWide<4>/*127:0*/ __Vtemp101;
    VlWide<4>/*127:0*/ __Vtemp102;
    VlWide<4>/*127:0*/ __Vtemp103;
    VlWide<4>/*127:0*/ __Vtemp128;
    VlWide<4>/*127:0*/ __Vtemp129;
    VlWide<4>/*127:0*/ __Vtemp130;
    VlWide<4>/*127:0*/ __Vtemp131;
    VlWide<4>/*127:0*/ __Vtemp132;
    VlWide<4>/*127:0*/ __Vtemp133;
    VlWide<4>/*127:0*/ __Vtemp134;
    QData/*63:0*/ top__DOT__exu_step__DOT___src1_value_T_1;
    QData/*63:0*/ top__DOT__exu_step__DOT___src2_value_T_1;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_44;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_59;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_69;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_74;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_132;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_162;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_pc_next_T_44;
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
    vlSelf->top__DOT__exu_step__DOT___T_1 = (((0x100073U 
                                               != (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)) 
                                              & ((0x3023U 
                                                  != 
                                                  (0x707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                                                 & ((0x1023U 
                                                     != 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                                                    & ((0x23U 
                                                        != 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                                                       & ((0x2023U 
                                                           != 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                                                          & ((0x1063U 
                                                              != 
                                                              (0x707fU 
                                                               & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                                                             & ((0x63U 
                                                                 != 
                                                                 (0x707fU 
                                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                                                                & ((0x5063U 
                                                                    != 
                                                                    (0x707fU 
                                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                                                                   & ((0x4063U 
                                                                       != 
                                                                       (0x707fU 
                                                                        & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                                                                      & ((0x6063U 
                                                                          != 
                                                                          (0x707fU 
                                                                           & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                                                                         & (0x7063U 
                                                                            != 
                                                                            (0x707fU 
                                                                             & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))))))))))))) 
                                             & (0U 
                                                != 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                            >> 7U)))));
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
    vlSelf->top__DOT__idu_step_io_ctrl_sign_src1_is_pc 
        = ((0x6fU == (0x7fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
           | ((0x17U == (0x7fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
              | ((0x1063U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                 | ((0x63U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                    | ((0x5063U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                       | ((0x4063U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                          | ((0x6063U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                             | (0x7063U == (0x707fU 
                                            & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))))))))));
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
    if ((0x200703bU == (0xfe00707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))) {
        top__DOT__idu_step__DOT___inst_now_T_129 = 0x32U;
        top__DOT__idu_step__DOT___inst_type_T_127 = 0x41U;
    } else {
        top__DOT__idu_step__DOT___inst_now_T_129 = 
            ((0x2007033U == (0xfe00707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
              ? 0x33U : ((0x2006033U == (0xfe00707fU 
                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                          ? 0x34U : ((0x1033U == (0xfe00707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                      ? 0x37U : ((0x5033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                  ? 0x38U
                                                  : 
                                                 ((0x40005033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                   ? 0x39U
                                                   : 
                                                  ((0x2013U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                    ? 0x36U
                                                    : 
                                                   ((0x6003U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                     ? 0x3aU
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                      ? 0x3bU
                                                      : 
                                                     ((0x7063U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                       ? 0x3cU
                                                       : 0U)))))))));
        top__DOT__idu_step__DOT___inst_type_T_127 = 
            ((0x2007033U == (0xfe00707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
              ? 0x41U : ((0x2006033U == (0xfe00707fU 
                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                          ? 0x41U : ((0x1033U == (0xfe00707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                      ? 0x41U : ((0x5033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                  ? 0x41U
                                                  : 
                                                 ((0x40005033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                   ? 0x41U
                                                   : 
                                                  ((0x2013U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                    ? 0x40U
                                                    : 
                                                   ((0x6003U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                     ? 0x40U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                      ? 0x40U
                                                      : 
                                                     ((0x7063U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                       ? 0x45U
                                                       : 0U)))))))));
    }
    vlSelf->top__DOT__exu_step__DOT__src1_value = ((IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_src1_is_pc)
                                                    ? vlSelf->top__DOT__pc_now
                                                    : top__DOT__exu_step__DOT___src1_value_T_1);
    if ((0x1003U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))) {
        top__DOT__idu_step__DOT___inst_now_T_140 = 0x24U;
        top__DOT__idu_step__DOT___inst_type_T_138 = 0x40U;
    } else {
        top__DOT__idu_step__DOT___inst_now_T_140 = 
            ((0x5003U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
              ? 0x25U : ((0x2000033U == (0xfe00707fU 
                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                          ? 0x11U : ((0x200003bU == 
                                      (0xfe00707fU 
                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                      ? 0x12U : ((0x200403bU 
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
                                                   : 
                                                  ((0x4033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                    ? 0x2eU
                                                    : 
                                                   ((0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                     ? 0x2fU
                                                     : 
                                                    ((0x2005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                      ? 0x30U
                                                      : 
                                                     ((0x2004033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                       ? 0x31U
                                                       : 
                                                      ((0x200503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                        ? 0x35U
                                                        : (IData)(top__DOT__idu_step__DOT___inst_now_T_129)))))))))));
        top__DOT__idu_step__DOT___inst_type_T_138 = 
            ((0x5003U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
              ? 0x40U : ((0x2000033U == (0xfe00707fU 
                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                          ? 0x41U : ((0x200003bU == 
                                      (0xfe00707fU 
                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                      ? 0x41U : ((0x200403bU 
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
                                                   : 
                                                  ((0x4033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                    ? 0x41U
                                                    : 
                                                   ((0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                     ? 0x40U
                                                     : 
                                                    ((0x2005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                      ? 0x41U
                                                      : 
                                                     ((0x2004033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                       ? 0x41U
                                                       : 
                                                      ((0x200503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                        ? 0x41U
                                                        : (IData)(top__DOT__idu_step__DOT___inst_type_T_127)))))))))));
    }
    if ((0x101bU == (0xfe00707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))) {
        top__DOT__idu_step__DOT___inst_now_T_151 = 0x19U;
        top__DOT__idu_step__DOT___inst_type_T_149 = 0x40U;
    } else {
        top__DOT__idu_step__DOT___inst_now_T_151 = 
            ((0x4000501bU == (0xfe00707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
              ? 0x1aU : ((0x501bU == (0xfe00707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                          ? 0x1bU : ((0x4000503bU == 
                                      (0xfe00707fU 
                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                      ? 0x1cU : ((0x503bU 
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
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                     ? 0x2bU
                                                     : 
                                                    ((0x4063U 
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
                                                        : (IData)(top__DOT__idu_step__DOT___inst_now_T_140)))))))))));
        top__DOT__idu_step__DOT___inst_type_T_149 = 
            ((0x4000501bU == (0xfe00707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
              ? 0x40U : ((0x501bU == (0xfe00707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                          ? 0x40U : ((0x4000503bU == 
                                      (0xfe00707fU 
                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                      ? 0x41U : ((0x503bU 
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
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                     ? 0x45U
                                                     : 
                                                    ((0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                      ? 0x45U
                                                      : 
                                                     ((0x6063U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                       ? 0x45U
                                                       : 
                                                      ((0x2023U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                        ? 0x44U
                                                        : (IData)(top__DOT__idu_step__DOT___inst_type_T_138)))))))))));
    }
    if ((0x4003U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))) {
        top__DOT__idu_step__DOT___inst_now_T_162 = 0x23U;
        top__DOT__idu_step__DOT___inst_type_T_160 = 0x40U;
    } else {
        top__DOT__idu_step__DOT___inst_now_T_162 = 
            ((0x1023U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
              ? 0x26U : ((0x23U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                          ? 0x28U : ((0x6033U == (0xfe00707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                      ? 0xbU : ((0x4013U 
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
                                                   : 
                                                  ((0x4000003bU 
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
                                                       : (IData)(top__DOT__idu_step__DOT___inst_now_T_151)))))))))));
        top__DOT__idu_step__DOT___inst_type_T_160 = 
            ((0x1023U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
              ? 0x44U : ((0x23U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                          ? 0x44U : ((0x6033U == (0xfe00707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                      ? 0x41U : ((0x4013U 
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
                                                        : (IData)(top__DOT__idu_step__DOT___inst_type_T_149)))))))))));
    }
    if ((0x3023U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))) {
        top__DOT__idu_step__DOT___inst_now_T_173 = 7U;
        top__DOT__idu_step__DOT___inst_type_T_171 = 0x44U;
    } else {
        top__DOT__idu_step__DOT___inst_now_T_173 = 
            ((0x3013U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
              ? 0x20U : ((0x2003U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                          ? 0x21U : ((0x3bU == (0xfe00707fU 
                                                & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                      ? 0xcU : ((0x40000033U 
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
                                                   : 
                                                  ((0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                    ? 0x22U
                                                    : 
                                                   ((0x1bU 
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
                                                       : (IData)(top__DOT__idu_step__DOT___inst_now_T_162)))))))))));
        top__DOT__idu_step__DOT___inst_type_T_171 = 
            ((0x3013U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
              ? 0x40U : ((0x2003U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                          ? 0x40U : ((0x3bU == (0xfe00707fU 
                                                & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                      ? 0x41U : ((0x40000033U 
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
                                                        : (IData)(top__DOT__idu_step__DOT___inst_type_T_160)))))))))));
    }
    if ((0x13U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))) {
        vlSelf->top__DOT__idu_step__DOT___inst_now_T_179 = 1U;
        vlSelf->top__DOT__idu_step__DOT___inst_type_T_176 = 0x40U;
    } else {
        vlSelf->top__DOT__idu_step__DOT___inst_now_T_179 
            = ((0x100073U == (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))
                ? 2U : ((0x17U == (0x7fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                         ? 3U : ((0x37U == (0x7fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                  ? 4U : ((0x6fU == 
                                           (0x7fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                           ? 5U : (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                    ? 6U
                                                    : (IData)(top__DOT__idu_step__DOT___inst_now_T_173))))));
        vlSelf->top__DOT__idu_step__DOT___inst_type_T_176 
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
                                                    : (IData)(top__DOT__idu_step__DOT___inst_type_T_171)))));
    }
    Vtop___024unit____Vdpiimwrap_ebreak_handle_TOP____024unit(
                                                              (2U 
                                                               == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179)));
    vlSelf->top__DOT__idu_step_io_ctrl_sign_src2_is_imm 
        = ((0x45U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_176)) 
           | ((0x43U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_176)) 
              | ((0x44U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_176)) 
                 | ((0x42U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_176)) 
                    | (0x40U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_176))))));
    vlSelf->top__DOT__idu_step_io_imm = ((0x45U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_176))
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
                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_176))
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
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_176))
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
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_176))
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
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_176))
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
    vlSelf->top__DOT__exu_step__DOT__divuw_res = VL_DIV_III(32, (IData)(vlSelf->top__DOT__exu_step__DOT__src1_value), (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value));
    vlSelf->top__DOT__exu_step__DOT__remw_res = VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__exu_step__DOT__src1_value), (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value));
    vlSelf->top__DOT__exu_step__DOT__remuw_res = VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__exu_step__DOT__src1_value), (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value));
    vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2 
        = ((QData)((IData)(vlSelf->top__DOT__exu_step__DOT__src1_value)) 
           * (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)));
    vlSelf->top__DOT__exu_step__DOT___divw_res_T_4 
        = (0x1ffffffffULL & VL_DIVS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,32, (IData)(vlSelf->top__DOT__exu_step__DOT__src1_value))), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,32, (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)))));
    top__DOT__exu_step__DOT___io_res2rd_T_69 = (((QData)((IData)(
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
    vlSelf->top__DOT__exu_step__DOT__srl_res = (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)));
    VL_EXTEND_WQ(127,64, __Vtemp77, vlSelf->top__DOT__exu_step__DOT__src1_value);
    VL_SHIFTL_WWI(127,127,6, __Vtemp78, __Vtemp77, 
                  (0x3fU & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)));
    vlSelf->top__DOT__exu_step__DOT__sll_res[0U] = 
        __Vtemp78[0U];
    vlSelf->top__DOT__exu_step__DOT__sll_res[1U] = 
        __Vtemp78[1U];
    vlSelf->top__DOT__exu_step__DOT__sll_res[2U] = 
        __Vtemp78[2U];
    vlSelf->top__DOT__exu_step__DOT__sll_res[3U] = 
        (0x7fffffffU & __Vtemp78[3U]);
    vlSelf->top__DOT__exu_step__DOT__srlw_res = ((IData)(vlSelf->top__DOT__exu_step__DOT__src1_value) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)));
    vlSelf->top__DOT__exu_step__DOT__sub_res = (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                - vlSelf->top__DOT__exu_step__DOT__src2_value);
    vlSelf->top__DOT__exu_step__DOT__or_res = (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                               | vlSelf->top__DOT__exu_step__DOT__src2_value);
    vlSelf->top__DOT__exu_step__DOT__xor_res = (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                ^ vlSelf->top__DOT__exu_step__DOT__src2_value);
    vlSelf->top__DOT__exu_step__DOT__and_res = (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                & vlSelf->top__DOT__exu_step__DOT__src2_value);
    vlSelf->top__DOT__exu_step__DOT__sra_res = VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__exu_step__DOT__src1_value, 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)));
    top__DOT__exu_step__DOT___io_res2rd_T_4 = (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                               < vlSelf->top__DOT__exu_step__DOT__src2_value);
    top__DOT__exu_step__DOT___io_res2rd_T_10 = VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value);
    vlSelf->top__DOT__exu_step__DOT__sllw_res = (0x7fffffffffffffffULL 
                                                 & ((QData)((IData)(vlSelf->top__DOT__exu_step__DOT__src1_value)) 
                                                    << 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value))));
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                          (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                           + vlSelf->top__DOT__exu_step__DOT__src2_value), vlSelf->__Vtask_pmem_read__1__Rdata);
    vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata 
        = vlSelf->__Vtask_pmem_read__1__Rdata;
    if ((0x44U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_176))) {
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                               (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                                + vlSelf->top__DOT__exu_step__DOT__src2_value), 
                                                               ((0x27U 
                                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
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
                                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
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
                                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
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
                                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
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
    vlSelf->top__DOT__exu_step__DOT__add_res = (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                + vlSelf->top__DOT__exu_step__DOT__src2_value);
    top__DOT__exu_step__DOT___io_res2rd_T_74 = (((QData)((IData)(
                                                                 ((vlSelf->top__DOT__exu_step__DOT__srlw_res 
                                                                   >> 0x1fU)
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__srlw_res)));
    top__DOT__exu_step__DOT___io_res2rd_T_59 = (((QData)((IData)(
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__exu_step__DOT__sllw_res 
                                                                              >> 0x1fU)))
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__sllw_res)));
    top__DOT__exu_step__DOT___io_pc_next_T_44 = ((0x2cU 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
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
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
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
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                    ? 
                                                   ((0ULL 
                                                     == vlSelf->top__DOT__exu_step__DOT__cmp)
                                                     ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                     : 
                                                    (4ULL 
                                                     + vlSelf->top__DOT__pc_now))
                                                    : 
                                                   ((0x2aU 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                     ? 
                                                    ((0ULL 
                                                      != vlSelf->top__DOT__exu_step__DOT__cmp)
                                                      ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                      : 
                                                     (4ULL 
                                                      + vlSelf->top__DOT__pc_now))
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                      ? 
                                                     (0xfffffffffffffffeULL 
                                                      & vlSelf->top__DOT__exu_step__DOT__add_res)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                       ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                       : 
                                                      (4ULL 
                                                       + vlSelf->top__DOT__pc_now)))))));
    top__DOT__exu_step__DOT___io_res2rd_T_44 = (((QData)((IData)(
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                              >> 0x1fU)))
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__add_res)));
    top__DOT__exu_step__DOT___io_res2rd_T_132 = ((0x24U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
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
                                                 ((0x3aU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                   ? (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata))
                                                   : 
                                                  ((0x23U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata))))
                                                    : 
                                                   ((0x22U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                     ? vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata
                                                     : 
                                                    ((0x21U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
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
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                       ? (QData)((IData)(top__DOT__exu_step__DOT___io_res2rd_T_10))
                                                       : 
                                                      ((0x36U 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                        ? (QData)((IData)(top__DOT__exu_step__DOT___io_res2rd_T_10))
                                                        : 
                                                       ((0x1eU 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                         ? (QData)((IData)(top__DOT__exu_step__DOT___io_res2rd_T_4))
                                                         : 
                                                        ((0x20U 
                                                          == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                          ? (QData)((IData)(top__DOT__exu_step__DOT___io_res2rd_T_4))
                                                          : 
                                                         ((6U 
                                                           == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                           ? 
                                                          (4ULL 
                                                           + vlSelf->top__DOT__pc_now)
                                                           : 
                                                          ((5U 
                                                            == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                            ? 
                                                           (4ULL 
                                                            + vlSelf->top__DOT__pc_now)
                                                            : 
                                                           ((4U 
                                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                             ? vlSelf->top__DOT__idu_step_io_imm
                                                             : 
                                                            ((3U 
                                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                              ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                              : 
                                                             ((1U 
                                                               == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                               ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                               : 0ULL))))))))))))));
    vlSelf->top__DOT__exu_step_io_pc_next = ((0x3cU 
                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
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
                                                  >= 
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
                                              : ((0x2dU 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                  ? 
                                                 ((((0U 
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
                                                  : top__DOT__exu_step__DOT___io_pc_next_T_44));
    top__DOT__exu_step__DOT___io_res2rd_T_162 = ((0x16U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                  ? top__DOT__exu_step__DOT___io_res2rd_T_59
                                                  : 
                                                 ((0xdU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__exu_step__DOT__sub_res 
                                                                                >> 0x1fU)))
                                                                      ? 0xffffffffU
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__sub_res)))
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                    ? vlSelf->top__DOT__exu_step__DOT__and_res
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                     ? vlSelf->top__DOT__exu_step__DOT__and_res
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                      ? vlSelf->top__DOT__exu_step__DOT__xor_res
                                                      : 
                                                     ((0x2eU 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                       ? vlSelf->top__DOT__exu_step__DOT__xor_res
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                        ? vlSelf->top__DOT__exu_step__DOT__or_res
                                                        : 
                                                       ((0xbU 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                         ? vlSelf->top__DOT__exu_step__DOT__or_res
                                                         : 
                                                        ((0x15U 
                                                          == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                          ? vlSelf->top__DOT__exu_step__DOT__sra_res
                                                          : 
                                                         ((0xfU 
                                                           == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                           ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                           : 
                                                          ((0x10U 
                                                            == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                            ? top__DOT__exu_step__DOT___io_res2rd_T_44
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                             ? vlSelf->top__DOT__exu_step__DOT__sub_res
                                                             : 
                                                            ((0xcU 
                                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                              ? top__DOT__exu_step__DOT___io_res2rd_T_44
                                                              : 
                                                             ((0x25U 
                                                               == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                               ? (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata))))
                                                               : 
                                                              ((0x3bU 
                                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                                ? 
                                                               ((((1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata 
                                                                              >> 7U)))
                                                                   ? 0xffffffffffffffULL
                                                                   : 0ULL) 
                                                                 << 8U) 
                                                                | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata)))))
                                                                : top__DOT__exu_step__DOT___io_res2rd_T_132)))))))))))))));
    vlSelf->io_pc_next = vlSelf->top__DOT__exu_step_io_pc_next;
    VL_EXTENDS_WQ(65,64, __Vtemp82, vlSelf->top__DOT__exu_step__DOT__src1_value);
    __Vtemp83[0U] = __Vtemp82[0U];
    __Vtemp83[1U] = __Vtemp82[1U];
    __Vtemp83[2U] = (1U & __Vtemp82[2U]);
    VL_EXTENDS_WQ(65,64, __Vtemp85, vlSelf->top__DOT__exu_step__DOT__src2_value);
    __Vtemp86[0U] = __Vtemp85[0U];
    __Vtemp86[1U] = __Vtemp85[1U];
    __Vtemp86[2U] = (1U & __Vtemp85[2U]);
    VL_DIVS_WWW(65, __Vtemp87, __Vtemp83, __Vtemp86);
    __Vtemp88[0U] = __Vtemp87[0U];
    __Vtemp88[1U] = __Vtemp87[1U];
    __Vtemp88[2U] = (1U & __Vtemp87[2U]);
    VL_EXTEND_WW(127,65, __Vtemp89, __Vtemp88);
    VL_EXTEND_WQ(127,64, __Vtemp90, VL_DIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value));
    VL_EXTEND_WQ(127,64, __Vtemp91, (((QData)((IData)(
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT___divw_res_T_4 
                                                                   >> 0x1fU)))
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___divw_res_T_4))));
    VL_EXTEND_WQ(127,64, __Vtemp92, (((QData)((IData)(
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2 
                                                                   >> 0x1fU)))
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2))));
    VL_EXTEND_WQ(128,64, __Vtemp93, vlSelf->top__DOT__exu_step__DOT__src1_value);
    VL_EXTEND_WQ(128,64, __Vtemp94, vlSelf->top__DOT__exu_step__DOT__src2_value);
    VL_MUL_W(4, __Vtemp95, __Vtemp93, __Vtemp94);
    VL_EXTEND_WQ(127,64, __Vtemp96, (((QData)((IData)(
                                                      __Vtemp95[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp95[0U]))));
    VL_EXTEND_WQ(127,64, __Vtemp97, top__DOT__exu_step__DOT___io_res2rd_T_74);
    VL_EXTEND_WQ(127,64, __Vtemp98, top__DOT__exu_step__DOT___io_res2rd_T_69);
    VL_EXTEND_WQ(127,64, __Vtemp99, top__DOT__exu_step__DOT___io_res2rd_T_74);
    VL_EXTEND_WQ(127,64, __Vtemp100, top__DOT__exu_step__DOT___io_res2rd_T_69);
    VL_EXTEND_WQ(127,64, __Vtemp101, top__DOT__exu_step__DOT___io_res2rd_T_59);
    VL_EXTEND_WQ(127,64, __Vtemp102, vlSelf->top__DOT__exu_step__DOT__srl_res);
    VL_EXTEND_WQ(127,64, __Vtemp103, top__DOT__exu_step__DOT___io_res2rd_T_162);
    if ((0x31U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))) {
        top__DOT__exu_step__DOT___io_res2rd_T_186[0U] 
            = __Vtemp89[0U];
        top__DOT__exu_step__DOT___io_res2rd_T_186[1U] 
            = __Vtemp89[1U];
        top__DOT__exu_step__DOT___io_res2rd_T_186[2U] 
            = __Vtemp89[2U];
        top__DOT__exu_step__DOT___io_res2rd_T_186[3U] 
            = __Vtemp89[3U];
    } else {
        top__DOT__exu_step__DOT___io_res2rd_T_186[0U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                ? __Vtemp90[0U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                    ? __Vtemp91[0U]
                                    : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                        ? __Vtemp92[0U]
                                        : ((0x11U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                            ? __Vtemp96[0U]
                                            : ((0x1dU 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                ? __Vtemp97[0U]
                                                : (
                                                   (0x1cU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                    ? 
                                                   __Vtemp98[0U]
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                     ? 
                                                    __Vtemp99[0U]
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                      ? 
                                                     __Vtemp100[0U]
                                                      : 
                                                     ((0x19U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                       ? 
                                                      __Vtemp101[0U]
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                        ? 
                                                       __Vtemp102[0U]
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                         ? 
                                                        vlSelf->top__DOT__exu_step__DOT__sll_res[0U]
                                                         : 
                                                        __Vtemp103[0U])))))))))));
        top__DOT__exu_step__DOT___io_res2rd_T_186[1U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                ? __Vtemp90[1U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                    ? __Vtemp91[1U]
                                    : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                        ? __Vtemp92[1U]
                                        : ((0x11U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                            ? __Vtemp96[1U]
                                            : ((0x1dU 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                ? __Vtemp97[1U]
                                                : (
                                                   (0x1cU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                    ? 
                                                   __Vtemp98[1U]
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                     ? 
                                                    __Vtemp99[1U]
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                      ? 
                                                     __Vtemp100[1U]
                                                      : 
                                                     ((0x19U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                       ? 
                                                      __Vtemp101[1U]
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                        ? 
                                                       __Vtemp102[1U]
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                         ? 
                                                        vlSelf->top__DOT__exu_step__DOT__sll_res[1U]
                                                         : 
                                                        __Vtemp103[1U])))))))))));
        top__DOT__exu_step__DOT___io_res2rd_T_186[2U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                ? __Vtemp90[2U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                    ? __Vtemp91[2U]
                                    : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                        ? __Vtemp92[2U]
                                        : ((0x11U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                            ? __Vtemp96[2U]
                                            : ((0x1dU 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                ? __Vtemp97[2U]
                                                : (
                                                   (0x1cU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                    ? 
                                                   __Vtemp98[2U]
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                     ? 
                                                    __Vtemp99[2U]
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                      ? 
                                                     __Vtemp100[2U]
                                                      : 
                                                     ((0x19U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                       ? 
                                                      __Vtemp101[2U]
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                        ? 
                                                       __Vtemp102[2U]
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                         ? 
                                                        vlSelf->top__DOT__exu_step__DOT__sll_res[2U]
                                                         : 
                                                        __Vtemp103[2U])))))))))));
        top__DOT__exu_step__DOT___io_res2rd_T_186[3U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                ? __Vtemp90[3U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                    ? __Vtemp91[3U]
                                    : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                        ? __Vtemp92[3U]
                                        : ((0x11U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                            ? __Vtemp96[3U]
                                            : ((0x1dU 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                ? __Vtemp97[3U]
                                                : (
                                                   (0x1cU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                    ? 
                                                   __Vtemp98[3U]
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                     ? 
                                                    __Vtemp99[3U]
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                      ? 
                                                     __Vtemp100[3U]
                                                      : 
                                                     ((0x19U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                       ? 
                                                      __Vtemp101[3U]
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                        ? 
                                                       __Vtemp102[3U]
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                         ? 
                                                        vlSelf->top__DOT__exu_step__DOT__sll_res[3U]
                                                         : 
                                                        __Vtemp103[3U])))))))))));
    }
    VL_EXTEND_WQ(127,64, __Vtemp128, vlSelf->top__DOT__exu_step__DOT__srl_res);
    VL_EXTEND_WQ(127,64, __Vtemp129, vlSelf->top__DOT__exu_step__DOT__sra_res);
    VL_EXTEND_WQ(127,64, __Vtemp130, VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value));
    VL_EXTEND_WQ(127,64, __Vtemp131, VL_MODDIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value));
    VL_EXTEND_WQ(127,64, __Vtemp132, (((QData)((IData)(
                                                       ((vlSelf->top__DOT__exu_step__DOT__remuw_res 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__remuw_res))));
    VL_EXTEND_WQ(127,64, __Vtemp133, (((QData)((IData)(
                                                       ((vlSelf->top__DOT__exu_step__DOT__remw_res 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__remw_res))));
    VL_EXTEND_WQ(127,64, __Vtemp134, (((QData)((IData)(
                                                       ((vlSelf->top__DOT__exu_step__DOT__divuw_res 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__divuw_res))));
    if ((0x38U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))) {
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_202[0U] 
            = __Vtemp128[0U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_202[1U] 
            = __Vtemp128[1U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_202[2U] 
            = __Vtemp128[2U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_202[3U] 
            = __Vtemp128[3U];
    } else {
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_202[0U] 
            = ((0x39U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                ? __Vtemp129[0U] : ((0x37U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                     ? vlSelf->top__DOT__exu_step__DOT__sll_res[0U]
                                     : ((0x34U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                         ? __Vtemp130[0U]
                                         : ((0x33U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                             ? __Vtemp131[0U]
                                             : ((0x32U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                 ? 
                                                __Vtemp132[0U]
                                                 : 
                                                ((0x14U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                  ? 
                                                 __Vtemp133[0U]
                                                  : 
                                                 ((0x35U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                   ? 
                                                  __Vtemp134[0U]
                                                   : 
                                                  top__DOT__exu_step__DOT___io_res2rd_T_186[0U])))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_202[1U] 
            = ((0x39U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                ? __Vtemp129[1U] : ((0x37U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                     ? vlSelf->top__DOT__exu_step__DOT__sll_res[1U]
                                     : ((0x34U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                         ? __Vtemp130[1U]
                                         : ((0x33U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                             ? __Vtemp131[1U]
                                             : ((0x32U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                 ? 
                                                __Vtemp132[1U]
                                                 : 
                                                ((0x14U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                  ? 
                                                 __Vtemp133[1U]
                                                  : 
                                                 ((0x35U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                   ? 
                                                  __Vtemp134[1U]
                                                   : 
                                                  top__DOT__exu_step__DOT___io_res2rd_T_186[1U])))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_202[2U] 
            = ((0x39U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                ? __Vtemp129[2U] : ((0x37U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                     ? vlSelf->top__DOT__exu_step__DOT__sll_res[2U]
                                     : ((0x34U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                         ? __Vtemp130[2U]
                                         : ((0x33U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                             ? __Vtemp131[2U]
                                             : ((0x32U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                 ? 
                                                __Vtemp132[2U]
                                                 : 
                                                ((0x14U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                  ? 
                                                 __Vtemp133[2U]
                                                  : 
                                                 ((0x35U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                   ? 
                                                  __Vtemp134[2U]
                                                   : 
                                                  top__DOT__exu_step__DOT___io_res2rd_T_186[2U])))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_202[3U] 
            = ((0x39U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                ? __Vtemp129[3U] : ((0x37U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                     ? vlSelf->top__DOT__exu_step__DOT__sll_res[3U]
                                     : ((0x34U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                         ? __Vtemp130[3U]
                                         : ((0x33U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                             ? __Vtemp131[3U]
                                             : ((0x32U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                 ? 
                                                __Vtemp132[3U]
                                                 : 
                                                ((0x14U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                  ? 
                                                 __Vtemp133[3U]
                                                  : 
                                                 ((0x35U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_179))
                                                   ? 
                                                  __Vtemp134[3U]
                                                   : 
                                                  top__DOT__exu_step__DOT___io_res2rd_T_186[3U])))))));
    }
    vlSelf->io_outval = (((QData)((IData)(vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_202[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_202[0U])));
    vlSelf->top__DOT__exu_step__DOT__Regfile_MPORT_data 
        = ((IData)(vlSelf->top__DOT__exu_step__DOT___T_1)
            ? (((QData)((IData)(vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_202[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_202[0U])))
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
    vlSelf->top__DOT__idu_step__DOT___inst_type_T_176 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__idu_step__DOT___inst_now_T_179 = VL_RAND_RESET_I(6);
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
    vlSelf->top__DOT__exu_step__DOT__sra_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu_step__DOT__srl_res = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(127, vlSelf->top__DOT__exu_step__DOT__sll_res);
    vlSelf->top__DOT__exu_step__DOT__srlw_res = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__exu_step__DOT__sllw_res = VL_RAND_RESET_Q(63);
    vlSelf->top__DOT__exu_step__DOT__or_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu_step__DOT__xor_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu_step__DOT__and_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu_step__DOT___divw_res_T_4 = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__exu_step__DOT__divuw_res = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__exu_step__DOT__remw_res = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__exu_step__DOT__remuw_res = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_202);
    vlSelf->top__DOT__exu_step__DOT___T_1 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__Vtask_pmem_read__0__Rdata = 0;
    vlSelf->__Vtask_pmem_read__1__Rdata = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
