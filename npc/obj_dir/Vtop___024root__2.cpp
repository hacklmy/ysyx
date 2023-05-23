// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

void Vtop___024unit____Vdpiimwrap_ebreak_handle_TOP____024unit(IData/*31:0*/ flag);
void Vtop___024unit____Vdpiimwrap_ecall_handle_TOP____024unit(IData/*31:0*/ flag);
void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ Raddr, QData/*63:0*/ &Rdata);
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ Waddr, QData/*63:0*/ Wdata, CData/*7:0*/ Wmask);

VL_INLINE_OPT void Vtop___024root___sequent__TOP__8(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__8\n"); );
    // Variables
    CData/*0:0*/ top__DOT__d_cache__DOT___GEN_90;
    CData/*0:0*/ top__DOT__d_cache__DOT___GEN_103;
    CData/*0:0*/ top__DOT__d_cache__DOT___GEN_116;
    CData/*0:0*/ top__DOT__d_cache__DOT___GEN_158;
    CData/*0:0*/ top__DOT__d_cache__DOT___GEN_171;
    CData/*0:0*/ top__DOT__d_cache__DOT___GEN_184;
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_type_T_140;
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_type_T_155;
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_type_T_170;
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_type_T_185;
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_now_T_144;
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_now_T_159;
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_now_T_174;
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_now_T_189;
    IData/*31:0*/ top__DOT__d_cache__DOT___GEN_26;
    IData/*31:0*/ top__DOT__d_cache__DOT___GEN_39;
    IData/*31:0*/ top__DOT__d_cache__DOT___GEN_52;
    VlWide<4>/*126:0*/ top__DOT__d_cache__DOT___ram_0_T_5;
    VlWide<4>/*126:0*/ top__DOT__exu_step__DOT___io_res2rd_T_186;
    VlWide<4>/*127:0*/ __Vtemp96;
    VlWide<4>/*127:0*/ __Vtemp97;
    VlWide<4>/*127:0*/ __Vtemp100;
    VlWide<4>/*127:0*/ __Vtemp101;
    VlWide<4>/*127:0*/ __Vtemp102;
    VlWide<4>/*127:0*/ __Vtemp103;
    VlWide<4>/*127:0*/ __Vtemp104;
    VlWide<3>/*95:0*/ __Vtemp111;
    VlWide<3>/*95:0*/ __Vtemp112;
    VlWide<3>/*95:0*/ __Vtemp114;
    VlWide<3>/*95:0*/ __Vtemp115;
    VlWide<3>/*95:0*/ __Vtemp116;
    VlWide<3>/*95:0*/ __Vtemp117;
    VlWide<4>/*127:0*/ __Vtemp118;
    VlWide<4>/*127:0*/ __Vtemp119;
    VlWide<4>/*127:0*/ __Vtemp120;
    VlWide<4>/*127:0*/ __Vtemp121;
    VlWide<4>/*127:0*/ __Vtemp122;
    VlWide<4>/*127:0*/ __Vtemp123;
    VlWide<4>/*127:0*/ __Vtemp124;
    VlWide<4>/*127:0*/ __Vtemp125;
    VlWide<4>/*127:0*/ __Vtemp126;
    VlWide<4>/*127:0*/ __Vtemp127;
    VlWide<4>/*127:0*/ __Vtemp128;
    VlWide<4>/*127:0*/ __Vtemp129;
    VlWide<4>/*127:0*/ __Vtemp130;
    VlWide<4>/*127:0*/ __Vtemp131;
    VlWide<4>/*127:0*/ __Vtemp132;
    VlWide<4>/*127:0*/ __Vtemp157;
    VlWide<4>/*127:0*/ __Vtemp158;
    VlWide<4>/*127:0*/ __Vtemp159;
    VlWide<4>/*127:0*/ __Vtemp160;
    VlWide<4>/*127:0*/ __Vtemp161;
    VlWide<4>/*127:0*/ __Vtemp162;
    VlWide<4>/*127:0*/ __Vtemp163;
    VlWide<4>/*127:0*/ __Vtemp164;
    VlWide<4>/*127:0*/ __Vtemp165;
    VlWide<4>/*127:0*/ __Vtemp166;
    QData/*63:0*/ top__DOT__i_cache__DOT___GEN_7709;
    QData/*63:0*/ top__DOT__d_cache__DOT___GEN_224;
    QData/*63:0*/ top__DOT__d_cache__DOT___GEN_237;
    QData/*63:0*/ top__DOT__d_cache__DOT___GEN_250;
    QData/*63:0*/ top__DOT__exu_step__DOT___src1_value_T_1;
    QData/*63:0*/ top__DOT__exu_step__DOT___src2_value_T_1;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_132;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_162;
    // Body
    vlSelf->top__DOT__i_cache__DOT___GEN_512 = ((0x7fU 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__pc_now)))
                                                 ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_1_127)
                                                 : 
                                                ((0x7eU 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->top__DOT__pc_now)))
                                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_1_126)
                                                  : 
                                                 ((0x7dU 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->top__DOT__pc_now)))
                                                   ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_1_125)
                                                   : 
                                                  ((0x7cU 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->top__DOT__pc_now)))
                                                    ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_1_124)
                                                    : 
                                                   ((0x7bU 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlSelf->top__DOT__pc_now)))
                                                     ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_1_123)
                                                     : 
                                                    ((0x7aU 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->top__DOT__pc_now)))
                                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_1_122)
                                                      : 
                                                     ((0x79U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->top__DOT__pc_now)))
                                                       ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_1_121)
                                                       : 
                                                      ((0x78U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->top__DOT__pc_now)))
                                                        ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_1_120)
                                                        : 
                                                       ((0x77U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->top__DOT__pc_now)))
                                                         ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_1_119)
                                                         : 
                                                        ((0x76U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlSelf->top__DOT__pc_now)))
                                                          ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_1_118)
                                                          : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_502)))))))))));
    top__DOT__i_cache__DOT___GEN_7709 = ((IData)(vlSelf->top__DOT__i_cache__DOT__way0_hit)
                                          ? ((0x7fU 
                                              == (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__pc_now)))
                                              ? vlSelf->top__DOT__i_cache__DOT__ram_0_127
                                              : ((0x7eU 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->top__DOT__pc_now)))
                                                  ? vlSelf->top__DOT__i_cache__DOT__ram_0_126
                                                  : 
                                                 ((0x7dU 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->top__DOT__pc_now)))
                                                   ? vlSelf->top__DOT__i_cache__DOT__ram_0_125
                                                   : 
                                                  ((0x7cU 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->top__DOT__pc_now)))
                                                    ? vlSelf->top__DOT__i_cache__DOT__ram_0_124
                                                    : 
                                                   ((0x7bU 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlSelf->top__DOT__pc_now)))
                                                     ? vlSelf->top__DOT__i_cache__DOT__ram_0_123
                                                     : 
                                                    ((0x7aU 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->top__DOT__pc_now)))
                                                      ? vlSelf->top__DOT__i_cache__DOT__ram_0_122
                                                      : 
                                                     ((0x79U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->top__DOT__pc_now)))
                                                       ? vlSelf->top__DOT__i_cache__DOT__ram_0_121
                                                       : 
                                                      ((0x78U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->top__DOT__pc_now)))
                                                        ? vlSelf->top__DOT__i_cache__DOT__ram_0_120
                                                        : 
                                                       ((0x77U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->top__DOT__pc_now)))
                                                         ? vlSelf->top__DOT__i_cache__DOT__ram_0_119
                                                         : 
                                                        ((0x76U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlSelf->top__DOT__pc_now)))
                                                          ? vlSelf->top__DOT__i_cache__DOT__ram_0_118
                                                          : vlSelf->top__DOT__i_cache__DOT___GEN_7566))))))))))
                                          : ((IData)(vlSelf->top__DOT__i_cache__DOT__way1_hit)
                                              ? ((0x7fU 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->top__DOT__pc_now)))
                                                  ? vlSelf->top__DOT__i_cache__DOT__ram_1_127
                                                  : 
                                                 ((0x7eU 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->top__DOT__pc_now)))
                                                   ? vlSelf->top__DOT__i_cache__DOT__ram_1_126
                                                   : 
                                                  ((0x7dU 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->top__DOT__pc_now)))
                                                    ? vlSelf->top__DOT__i_cache__DOT__ram_1_125
                                                    : 
                                                   ((0x7cU 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlSelf->top__DOT__pc_now)))
                                                     ? vlSelf->top__DOT__i_cache__DOT__ram_1_124
                                                     : 
                                                    ((0x7bU 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->top__DOT__pc_now)))
                                                      ? vlSelf->top__DOT__i_cache__DOT__ram_1_123
                                                      : 
                                                     ((0x7aU 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->top__DOT__pc_now)))
                                                       ? vlSelf->top__DOT__i_cache__DOT__ram_1_122
                                                       : 
                                                      ((0x79U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->top__DOT__pc_now)))
                                                        ? vlSelf->top__DOT__i_cache__DOT__ram_1_121
                                                        : 
                                                       ((0x78U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->top__DOT__pc_now)))
                                                         ? vlSelf->top__DOT__i_cache__DOT__ram_1_120
                                                         : 
                                                        ((0x77U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlSelf->top__DOT__pc_now)))
                                                          ? vlSelf->top__DOT__i_cache__DOT__ram_1_119
                                                          : 
                                                         ((0x76U 
                                                           == 
                                                           (0x7fU 
                                                            & (IData)(vlSelf->top__DOT__pc_now)))
                                                           ? vlSelf->top__DOT__i_cache__DOT__ram_1_118
                                                           : vlSelf->top__DOT__i_cache__DOT___GEN_7694))))))))))
                                              : 0ULL));
    vlSelf->top__DOT__i_cache_io_to_ifu_rdata = ((0U 
                                                  == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                  ? 0ULL
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                   ? top__DOT__i_cache__DOT___GEN_7709
                                                   : 0ULL));
    vlSelf->io_inst = (IData)(vlSelf->top__DOT__i_cache_io_to_ifu_rdata);
    vlSelf->top__DOT__idu_step_io_inst = ((1U & (((~ (IData)(vlSelf->top__DOT__i_cache_io_to_ifu_rvalid)) 
                                                  & (~ (IData)(vlSelf->top__DOT__pc_valid))) 
                                                 & (~ (IData)(vlSelf->top__DOT__execute_end))))
                                           ? vlSelf->top__DOT__ifu_step__DOT__inst_reg
                                           : (IData)(vlSelf->top__DOT__i_cache_io_to_ifu_rdata));
    vlSelf->top__DOT__idu_step_io_ctrl_sign_Readmem_en 
        = ((0x3003U == (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
           | ((0x2003U == (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
              | ((0x6003U == (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                 | ((0x1003U == (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                    | ((0x5003U == (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                       | ((3U == (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                          | (0x4003U == (0x707fU & vlSelf->top__DOT__idu_step_io_inst))))))));
    vlSelf->top__DOT__idu_step_io_ctrl_sign_Wmask = 
        ((0x3023U == (0x707fU & vlSelf->top__DOT__idu_step_io_inst))
          ? 0xffU : ((0x1023U == (0x707fU & vlSelf->top__DOT__idu_step_io_inst))
                      ? 3U : ((0x23U == (0x707fU & vlSelf->top__DOT__idu_step_io_inst))
                               ? 1U : ((0x2023U == 
                                        (0x707fU & vlSelf->top__DOT__idu_step_io_inst))
                                        ? 0xfU : 0U))));
    top__DOT__idu_step__DOT___inst_now_T_144 = ((0x200703bU 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__idu_step_io_inst))
                                                 ? 0x32U
                                                 : 
                                                ((0x2007033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__idu_step_io_inst))
                                                  ? 0x33U
                                                  : 
                                                 ((0x2006033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__idu_step_io_inst))
                                                   ? 0x34U
                                                   : 
                                                  ((0x1033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__idu_step_io_inst))
                                                    ? 0x37U
                                                    : 
                                                   ((0x5033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__idu_step_io_inst))
                                                     ? 0x38U
                                                     : 
                                                    ((0x40005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__idu_step_io_inst))
                                                      ? 0x39U
                                                      : 
                                                     ((0x2013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__idu_step_io_inst))
                                                       ? 0x36U
                                                       : 
                                                      ((0x6003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__idu_step_io_inst))
                                                        ? 0x3aU
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__idu_step_io_inst))
                                                         ? 0x3bU
                                                         : 
                                                        ((0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__idu_step_io_inst))
                                                          ? 0x3cU
                                                          : 
                                                         ((0x73U 
                                                           == vlSelf->top__DOT__idu_step_io_inst)
                                                           ? 0x3dU
                                                           : 
                                                          ((0x30200073U 
                                                            == vlSelf->top__DOT__idu_step_io_inst)
                                                            ? 0x3eU
                                                            : 
                                                           ((0x1073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__idu_step_io_inst))
                                                             ? 0x3fU
                                                             : 
                                                            ((0x2073U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__idu_step_io_inst))
                                                              ? 0x46U
                                                              : 
                                                             ((0x3073U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__idu_step_io_inst))
                                                               ? 0x47U
                                                               : 0U)))))))))))))));
    top__DOT__exu_step__DOT___src2_value_T_1 = ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__idu_step_io_inst 
                                                     >> 0x14U)))
                                                 ? 0ULL
                                                 : 
                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                [(0x1fU 
                                                  & (vlSelf->top__DOT__idu_step_io_inst 
                                                     >> 0x14U))]);
    vlSelf->top__DOT__idu_step_io_ctrl_sign_src1_is_pc 
        = ((0x6fU == (0x7fU & vlSelf->top__DOT__idu_step_io_inst)) 
           | ((0x17U == (0x7fU & vlSelf->top__DOT__idu_step_io_inst)) 
              | ((0x1063U == (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                 | ((0x63U == (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                    | ((0x5063U == (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                       | ((0x4063U == (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                          | ((0x6063U == (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                             | (0x7063U == (0x707fU 
                                            & vlSelf->top__DOT__idu_step_io_inst)))))))));
    top__DOT__exu_step__DOT___src1_value_T_1 = ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__idu_step_io_inst 
                                                     >> 0xfU)))
                                                 ? 0ULL
                                                 : 
                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                [(0x1fU 
                                                  & (vlSelf->top__DOT__idu_step_io_inst 
                                                     >> 0xfU))]);
    top__DOT__idu_step__DOT___inst_type_T_140 = ((0x200503bU 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__idu_step_io_inst))
                                                  ? 0x41U
                                                  : 
                                                 ((0x200703bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__idu_step_io_inst))
                                                   ? 0x41U
                                                   : 
                                                  ((0x2007033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__idu_step_io_inst))
                                                    ? 0x41U
                                                    : 
                                                   ((0x2006033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__idu_step_io_inst))
                                                     ? 0x41U
                                                     : 
                                                    ((0x1033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__idu_step_io_inst))
                                                      ? 0x41U
                                                      : 
                                                     ((0x5033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__idu_step_io_inst))
                                                       ? 0x41U
                                                       : 
                                                      ((0x40005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__idu_step_io_inst))
                                                        ? 0x41U
                                                        : 
                                                       ((0x2013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__idu_step_io_inst))
                                                         ? 0x40U
                                                         : 
                                                        ((0x6003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__idu_step_io_inst))
                                                          ? 0x40U
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__idu_step_io_inst))
                                                           ? 0x40U
                                                           : 
                                                          ((0x7063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__idu_step_io_inst))
                                                            ? 0x45U
                                                            : 
                                                           ((0x73U 
                                                             == vlSelf->top__DOT__idu_step_io_inst)
                                                             ? 0x40U
                                                             : 
                                                            ((0x1073U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__idu_step_io_inst))
                                                              ? 0x40U
                                                              : 
                                                             ((0x2073U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__idu_step_io_inst))
                                                               ? 0x40U
                                                               : 
                                                              ((0x3073U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__idu_step_io_inst))
                                                                ? 0x40U
                                                                : 0U)))))))))))))));
    vlSelf->top__DOT__lsu_step__DOT___GEN_5 = ((IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_Readmem_en) 
                                               | (IData)(vlSelf->top__DOT__lsu_step__DOT__axi_arvalid));
    vlSelf->top__DOT__lsu_step__DOT___GEN_28 = ((0U 
                                                 == (IData)(vlSelf->top__DOT__lsu_step__DOT__state))
                                                 ? 
                                                ((IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_Readmem_en) 
                                                 | (IData)(vlSelf->top__DOT__lsu_step__DOT__axi_rready))
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->top__DOT__lsu_step__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__lsu_step__DOT__axi_rready)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->top__DOT__lsu_step__DOT__state))
                                                   ? 
                                                  ((~ (IData)(vlSelf->top__DOT__d_cache_io_to_lsu_rvalid)) 
                                                   & (IData)(vlSelf->top__DOT__lsu_step__DOT__axi_rready))
                                                   : (IData)(vlSelf->top__DOT__lsu_step__DOT__axi_rready))));
    vlSelf->top__DOT__d_cache_io_to_axi_wstrb = ((0U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                      ? (IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_Wmask)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                       ? 0U
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                        ? 0xffU
                                                        : 0U)))))));
    vlSelf->top__DOT__d_cache__DOT__wmask = ((1U == (IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_Wmask))
                                              ? 0xffULL
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_Wmask))
                                                  ? 0xffffULL
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_Wmask))
                                                   ? 0xffffffffULL
                                                   : 
                                                  ((0xffU 
                                                    == (IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_Wmask))
                                                    ? 0xffffffffffffffffULL
                                                    : 0ULL))));
    top__DOT__idu_step__DOT___inst_now_T_159 = ((0x5063U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__idu_step_io_inst))
                                                 ? 0x2bU
                                                 : 
                                                ((0x4063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__idu_step_io_inst))
                                                  ? 0x2cU
                                                  : 
                                                 ((0x6063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__idu_step_io_inst))
                                                   ? 0x2dU
                                                   : 
                                                  ((0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__idu_step_io_inst))
                                                    ? 0x27U
                                                    : 
                                                   ((0x1003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__idu_step_io_inst))
                                                     ? 0x24U
                                                     : 
                                                    ((0x5003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__idu_step_io_inst))
                                                      ? 0x25U
                                                      : 
                                                     ((0x2000033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__idu_step_io_inst))
                                                       ? 0x11U
                                                       : 
                                                      ((0x200003bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__idu_step_io_inst))
                                                        ? 0x12U
                                                        : 
                                                       ((0x200403bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__idu_step_io_inst))
                                                         ? 0x13U
                                                         : 
                                                        ((0x200603bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__idu_step_io_inst))
                                                          ? 0x14U
                                                          : 
                                                         ((0x4033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__idu_step_io_inst))
                                                           ? 0x2eU
                                                           : 
                                                          ((0x6013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__idu_step_io_inst))
                                                            ? 0x2fU
                                                            : 
                                                           ((0x2005033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->top__DOT__idu_step_io_inst))
                                                             ? 0x30U
                                                             : 
                                                            ((0x2004033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->top__DOT__idu_step_io_inst))
                                                              ? 0x31U
                                                              : 
                                                             ((0x200503bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->top__DOT__idu_step_io_inst))
                                                               ? 0x35U
                                                               : (IData)(top__DOT__idu_step__DOT___inst_now_T_144))))))))))))))));
    vlSelf->top__DOT__exu_step__DOT__src1_value = ((IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_src1_is_pc)
                                                    ? vlSelf->top__DOT__pc_now
                                                    : top__DOT__exu_step__DOT___src1_value_T_1);
    top__DOT__idu_step__DOT___inst_type_T_155 = ((0x2033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__idu_step_io_inst))
                                                  ? 0x41U
                                                  : 
                                                 ((0x5063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__idu_step_io_inst))
                                                   ? 0x45U
                                                   : 
                                                  ((0x4063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__idu_step_io_inst))
                                                    ? 0x45U
                                                    : 
                                                   ((0x6063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__idu_step_io_inst))
                                                     ? 0x45U
                                                     : 
                                                    ((0x2023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__idu_step_io_inst))
                                                      ? 0x44U
                                                      : 
                                                     ((0x1003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__idu_step_io_inst))
                                                       ? 0x40U
                                                       : 
                                                      ((0x5003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__idu_step_io_inst))
                                                        ? 0x40U
                                                        : 
                                                       ((0x2000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__idu_step_io_inst))
                                                         ? 0x41U
                                                         : 
                                                        ((0x200003bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__idu_step_io_inst))
                                                          ? 0x41U
                                                          : 
                                                         ((0x200403bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__idu_step_io_inst))
                                                           ? 0x41U
                                                           : 
                                                          ((0x200603bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->top__DOT__idu_step_io_inst))
                                                            ? 0x41U
                                                            : 
                                                           ((0x4033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->top__DOT__idu_step_io_inst))
                                                             ? 0x41U
                                                             : 
                                                            ((0x6013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__idu_step_io_inst))
                                                              ? 0x40U
                                                              : 
                                                             ((0x2005033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->top__DOT__idu_step_io_inst))
                                                               ? 0x41U
                                                               : 
                                                              ((0x2004033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->top__DOT__idu_step_io_inst))
                                                                ? 0x41U
                                                                : (IData)(top__DOT__idu_step__DOT___inst_type_T_140))))))))))))))));
    top__DOT__idu_step__DOT___inst_now_T_174 = ((0x6033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__idu_step_io_inst))
                                                 ? 0xbU
                                                 : 
                                                ((0x4013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__idu_step_io_inst))
                                                  ? 0xaU
                                                  : 
                                                 ((0x7033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__idu_step_io_inst))
                                                   ? 8U
                                                   : 
                                                  ((0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__idu_step_io_inst))
                                                    ? 9U
                                                    : 
                                                   ((0x4000003bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__idu_step_io_inst))
                                                     ? 0xdU
                                                     : 
                                                    ((0x103bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__idu_step_io_inst))
                                                      ? 0x16U
                                                      : 
                                                     ((0x1013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->top__DOT__idu_step_io_inst))
                                                       ? 0x17U
                                                       : 
                                                      ((0x5013U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->top__DOT__idu_step_io_inst))
                                                        ? 0x18U
                                                        : 
                                                       ((0x101bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__idu_step_io_inst))
                                                         ? 0x19U
                                                         : 
                                                        ((0x4000501bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__idu_step_io_inst))
                                                          ? 0x1aU
                                                          : 
                                                         ((0x501bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__idu_step_io_inst))
                                                           ? 0x1bU
                                                           : 
                                                          ((0x4000503bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->top__DOT__idu_step_io_inst))
                                                            ? 0x1cU
                                                            : 
                                                           ((0x503bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->top__DOT__idu_step_io_inst))
                                                             ? 0x1dU
                                                             : 
                                                            ((0x3033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->top__DOT__idu_step_io_inst))
                                                              ? 0x1eU
                                                              : 
                                                             ((0x2033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->top__DOT__idu_step_io_inst))
                                                               ? 0x1fU
                                                               : (IData)(top__DOT__idu_step__DOT___inst_now_T_159))))))))))))))));
    top__DOT__idu_step__DOT___inst_type_T_170 = ((0x23U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__idu_step_io_inst))
                                                  ? 0x44U
                                                  : 
                                                 ((0x6033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__idu_step_io_inst))
                                                   ? 0x41U
                                                   : 
                                                  ((0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__idu_step_io_inst))
                                                    ? 0x40U
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__idu_step_io_inst))
                                                     ? 0x41U
                                                     : 
                                                    ((0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__idu_step_io_inst))
                                                      ? 0x40U
                                                      : 
                                                     ((0x4000003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__idu_step_io_inst))
                                                       ? 0x41U
                                                       : 
                                                      ((0x103bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__idu_step_io_inst))
                                                        ? 0x41U
                                                        : 
                                                       ((0x1013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->top__DOT__idu_step_io_inst))
                                                         ? 0x40U
                                                         : 
                                                        ((0x5013U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->top__DOT__idu_step_io_inst))
                                                          ? 0x40U
                                                          : 
                                                         ((0x101bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__idu_step_io_inst))
                                                           ? 0x40U
                                                           : 
                                                          ((0x4000501bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->top__DOT__idu_step_io_inst))
                                                            ? 0x40U
                                                            : 
                                                           ((0x501bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->top__DOT__idu_step_io_inst))
                                                             ? 0x40U
                                                             : 
                                                            ((0x4000503bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->top__DOT__idu_step_io_inst))
                                                              ? 0x41U
                                                              : 
                                                             ((0x503bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->top__DOT__idu_step_io_inst))
                                                               ? 0x41U
                                                               : 
                                                              ((0x3033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->top__DOT__idu_step_io_inst))
                                                                ? 0x41U
                                                                : (IData)(top__DOT__idu_step__DOT___inst_type_T_155))))))))))))))));
    top__DOT__idu_step__DOT___inst_now_T_189 = ((0x67U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__idu_step_io_inst))
                                                 ? 6U
                                                 : 
                                                ((0x3023U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__idu_step_io_inst))
                                                  ? 7U
                                                  : 
                                                 ((0x3013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__idu_step_io_inst))
                                                   ? 0x20U
                                                   : 
                                                  ((0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__idu_step_io_inst))
                                                    ? 0x21U
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__idu_step_io_inst))
                                                     ? 0xcU
                                                     : 
                                                    ((0x40000033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__idu_step_io_inst))
                                                      ? 0xeU
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__idu_step_io_inst))
                                                       ? 0x2aU
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__idu_step_io_inst))
                                                        ? 0x29U
                                                        : 
                                                       ((0x3003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__idu_step_io_inst))
                                                         ? 0x22U
                                                         : 
                                                        ((0x1bU 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__idu_step_io_inst))
                                                          ? 0x10U
                                                          : 
                                                         ((0x33U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__idu_step_io_inst))
                                                           ? 0xfU
                                                           : 
                                                          ((0x40005013U 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->top__DOT__idu_step_io_inst))
                                                            ? 0x15U
                                                            : 
                                                           ((0x4003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__idu_step_io_inst))
                                                             ? 0x23U
                                                             : 
                                                            ((0x1023U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__idu_step_io_inst))
                                                              ? 0x26U
                                                              : 
                                                             ((0x23U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__idu_step_io_inst))
                                                               ? 0x28U
                                                               : (IData)(top__DOT__idu_step__DOT___inst_now_T_174))))))))))))))));
    top__DOT__idu_step__DOT___inst_type_T_185 = ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__idu_step_io_inst))
                                                  ? 0x43U
                                                  : 
                                                 ((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__idu_step_io_inst))
                                                   ? 0x40U
                                                   : 
                                                  ((0x3023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__idu_step_io_inst))
                                                    ? 0x44U
                                                    : 
                                                   ((0x3013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__idu_step_io_inst))
                                                     ? 0x40U
                                                     : 
                                                    ((0x2003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__idu_step_io_inst))
                                                      ? 0x40U
                                                      : 
                                                     ((0x3bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__idu_step_io_inst))
                                                       ? 0x41U
                                                       : 
                                                      ((0x40000033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__idu_step_io_inst))
                                                        ? 0x41U
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__idu_step_io_inst))
                                                         ? 0x45U
                                                         : 
                                                        ((0x63U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__idu_step_io_inst))
                                                          ? 0x45U
                                                          : 
                                                         ((0x3003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__idu_step_io_inst))
                                                           ? 0x40U
                                                           : 
                                                          ((0x1bU 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__idu_step_io_inst))
                                                            ? 0x40U
                                                            : 
                                                           ((0x33U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->top__DOT__idu_step_io_inst))
                                                             ? 0x41U
                                                             : 
                                                            ((0x40005013U 
                                                              == 
                                                              (0xfc00707fU 
                                                               & vlSelf->top__DOT__idu_step_io_inst))
                                                              ? 0x40U
                                                              : 
                                                             ((0x4003U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__idu_step_io_inst))
                                                               ? 0x40U
                                                               : 
                                                              ((0x1023U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__idu_step_io_inst))
                                                                ? 0x44U
                                                                : (IData)(top__DOT__idu_step__DOT___inst_type_T_170))))))))))))))));
    if ((0x13U == (0x707fU & vlSelf->top__DOT__idu_step_io_inst))) {
        vlSelf->top__DOT__idu_step__DOT___inst_now_T_194 = 1U;
        vlSelf->top__DOT__idu_step__DOT___inst_type_T_188 = 0x40U;
    } else {
        vlSelf->top__DOT__idu_step__DOT___inst_now_T_194 
            = ((0x100073U == vlSelf->top__DOT__idu_step_io_inst)
                ? 2U : ((0x17U == (0x7fU & vlSelf->top__DOT__idu_step_io_inst))
                         ? 3U : ((0x37U == (0x7fU & vlSelf->top__DOT__idu_step_io_inst))
                                  ? 4U : ((0x6fU == 
                                           (0x7fU & vlSelf->top__DOT__idu_step_io_inst))
                                           ? 5U : (IData)(top__DOT__idu_step__DOT___inst_now_T_189)))));
        vlSelf->top__DOT__idu_step__DOT___inst_type_T_188 
            = ((0x17U == (0x7fU & vlSelf->top__DOT__idu_step_io_inst))
                ? 0x42U : ((0x37U == (0x7fU & vlSelf->top__DOT__idu_step_io_inst))
                            ? 0x42U : (IData)(top__DOT__idu_step__DOT___inst_type_T_185)));
    }
    Vtop___024unit____Vdpiimwrap_ebreak_handle_TOP____024unit(
                                                              (2U 
                                                               == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194)));
    Vtop___024unit____Vdpiimwrap_ecall_handle_TOP____024unit(
                                                             (0x3dU 
                                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194)));
    vlSelf->top__DOT__exu_step__DOT___T_9 = ((0x3dU 
                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194)) 
                                             & (IData)(vlSelf->top__DOT__i_cache_io_to_ifu_rvalid));
    vlSelf->top__DOT__exu_step_io_Mem_wdata = ((0x27U 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                ? (QData)((IData)(
                                                                  ((0U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->top__DOT__idu_step_io_inst 
                                                                        >> 0x14U)))
                                                                    ? 0ULL
                                                                    : 
                                                                   vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                   [
                                                                   (0x1fU 
                                                                    & (vlSelf->top__DOT__idu_step_io_inst 
                                                                       >> 0x14U))])))
                                                : (
                                                   (0x28U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->top__DOT__idu_step_io_inst 
                                                                                >> 0x14U)))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelf->top__DOT__idu_step_io_inst 
                                                                                >> 0x14U))])))))
                                                    : 
                                                   ((0x26U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->top__DOT__idu_step_io_inst 
                                                                                >> 0x14U)))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelf->top__DOT__idu_step_io_inst 
                                                                                >> 0x14U))])))))
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__idu_step_io_inst 
                                                           >> 0x14U)))
                                                       ? 0ULL
                                                       : 
                                                      vlSelf->top__DOT__exu_step__DOT__Regfile
                                                      [
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__idu_step_io_inst 
                                                          >> 0x14U))])
                                                      : 0ULL))));
    vlSelf->top__DOT__lsu_step__DOT___GEN_1 = ((0x44U 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188)) 
                                               | (IData)(vlSelf->top__DOT__lsu_step__DOT__axi_awvalid));
    vlSelf->top__DOT__lsu_step__DOT___GEN_2 = ((0x44U 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188)) 
                                               | (IData)(vlSelf->top__DOT__lsu_step__DOT__axi_wvalid));
    vlSelf->top__DOT__lsu_step__DOT___GEN_31 = ((0U 
                                                 == (IData)(vlSelf->top__DOT__lsu_step__DOT__state))
                                                 ? 
                                                ((IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_Readmem_en)
                                                  ? (IData)(vlSelf->top__DOT__lsu_step__DOT__axi_bready)
                                                  : 
                                                 ((0x44U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188)) 
                                                  | (IData)(vlSelf->top__DOT__lsu_step__DOT__axi_bready)))
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->top__DOT__lsu_step__DOT__state))
                                                  ? 
                                                 ((~ (IData)(vlSelf->top__DOT__d_cache_io_to_lsu_bvalid)) 
                                                  & (IData)(vlSelf->top__DOT__lsu_step__DOT__axi_bready))
                                                  : (IData)(vlSelf->top__DOT__lsu_step__DOT__axi_bready)));
    vlSelf->top__DOT__idu_step_io_ctrl_sign_src2_is_imm 
        = ((0x45U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188)) 
           | ((0x43U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188)) 
              | ((0x44U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188)) 
                 | ((0x42U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188)) 
                    | (0x40U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188))))));
    vlSelf->top__DOT__idu_step_io_imm = ((0x45U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188))
                                          ? ((((vlSelf->top__DOT__idu_step_io_inst 
                                                >> 0x1fU)
                                                ? 0x7ffffffffffffULL
                                                : 0ULL) 
                                              << 0xdU) 
                                             | (QData)((IData)(
                                                               ((0x1000U 
                                                                 & (vlSelf->top__DOT__idu_step_io_inst 
                                                                    >> 0x13U)) 
                                                                | ((0x800U 
                                                                    & (vlSelf->top__DOT__idu_step_io_inst 
                                                                       << 4U)) 
                                                                   | ((0x7e0U 
                                                                       & (vlSelf->top__DOT__idu_step_io_inst 
                                                                          >> 0x14U)) 
                                                                      | (0x1eU 
                                                                         & (vlSelf->top__DOT__idu_step_io_inst 
                                                                            >> 7U))))))))
                                          : ((0x44U 
                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188))
                                              ? (((
                                                   (vlSelf->top__DOT__idu_step_io_inst 
                                                    >> 0x1fU)
                                                    ? 0xfffffffffffffULL
                                                    : 0ULL) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   ((0xfe0U 
                                                                     & (vlSelf->top__DOT__idu_step_io_inst 
                                                                        >> 0x14U)) 
                                                                    | (0x1fU 
                                                                       & (vlSelf->top__DOT__idu_step_io_inst 
                                                                          >> 7U))))))
                                              : ((0x42U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   ((vlSelf->top__DOT__idu_step_io_inst 
                                                                     >> 0x1fU)
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (0xfffff000U 
                                                                     & vlSelf->top__DOT__idu_step_io_inst))))
                                                  : 
                                                 ((0x43U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188))
                                                   ? 
                                                  ((((vlSelf->top__DOT__idu_step_io_inst 
                                                      >> 0x1fU)
                                                      ? 0x7ffffffffffULL
                                                      : 0ULL) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(
                                                                     ((0x100000U 
                                                                       & (vlSelf->top__DOT__idu_step_io_inst 
                                                                          >> 0xbU)) 
                                                                      | ((0xff000U 
                                                                          & vlSelf->top__DOT__idu_step_io_inst) 
                                                                         | ((0x800U 
                                                                             & (vlSelf->top__DOT__idu_step_io_inst 
                                                                                >> 9U)) 
                                                                            | (0x7feU 
                                                                               & (vlSelf->top__DOT__idu_step_io_inst 
                                                                                >> 0x14U))))))))
                                                   : 
                                                  ((0x40U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188))
                                                    ? 
                                                   ((((vlSelf->top__DOT__idu_step_io_inst 
                                                       >> 0x1fU)
                                                       ? 0xfffffffffffffULL
                                                       : 0ULL) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (vlSelf->top__DOT__idu_step_io_inst 
                                                                       >> 0x14U))))
                                                    : 0ULL)))));
    if (vlSelf->top__DOT__exu_step__DOT___T_9) {
        vlSelf->top__DOT__exu_step__DOT__CSR_Reg_MPORT_1_data 
            = vlSelf->top__DOT__pc_now;
        vlSelf->top__DOT__exu_step__DOT__CSR_Reg_MPORT_3_data 
            = vlSelf->top__DOT__exu_step__DOT__Regfile
            [0x11U];
    } else {
        vlSelf->top__DOT__exu_step__DOT__CSR_Reg_MPORT_1_data 
            = vlSelf->top__DOT__exu_step__DOT__CSR_Reg
            [1U];
        vlSelf->top__DOT__exu_step__DOT__CSR_Reg_MPORT_3_data 
            = vlSelf->top__DOT__exu_step__DOT__CSR_Reg
            [3U];
    }
    vlSelf->top__DOT__d_cache__DOT___GEN_3456 = ((0U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? 0ULL
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? 0ULL
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 0ULL
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                      ? (QData)((IData)(vlSelf->top__DOT__exu_step_io_Mem_wdata))
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                       ? 0ULL
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                        ? vlSelf->top__DOT__d_cache__DOT__write_back_data
                                                        : 0ULL)))))));
    vlSelf->top__DOT__exu_step__DOT___csr_index_T_5 
        = ((0x300U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
            ? 2U : (0x341U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm))));
    vlSelf->top__DOT__exu_step__DOT__src2_value = ((IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_src2_is_imm)
                                                    ? vlSelf->top__DOT__idu_step_io_imm
                                                    : top__DOT__exu_step__DOT___src2_value_T_1);
    vlSelf->top__DOT__exu_step__DOT__CSR_Reg_MPORT_6_data 
        = ((((0x1073U == (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
             | ((0x2073U == (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                | (0x3073U == (0x707fU & vlSelf->top__DOT__idu_step_io_inst)))) 
            & (IData)(vlSelf->top__DOT__i_cache_io_to_ifu_rvalid))
            ? ((0x47U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? (vlSelf->top__DOT__exu_step__DOT__src1_value 
                   & (~ vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                      [((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                         ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]))
                : ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                    ? (vlSelf->top__DOT__exu_step__DOT__src1_value 
                       | vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                       [((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                          ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))])
                    : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                        ? vlSelf->top__DOT__exu_step__DOT__src1_value
                        : 0ULL))) : vlSelf->top__DOT__exu_step__DOT__CSR_Reg
           [((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
              ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]);
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
    vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_69 
        = (((QData)((IData)(((VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__exu_step__DOT__src1_value), 
                                             (0x1fU 
                                              & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value))) 
                              >> 0x1fU) ? 0xffffffffU
                              : 0U))) << 0x20U) | (QData)((IData)(
                                                                  VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__exu_step__DOT__src1_value), 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value))))));
    vlSelf->top__DOT__exu_step__DOT__srl_res = (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)));
    VL_EXTEND_WQ(127,64, __Vtemp96, vlSelf->top__DOT__exu_step__DOT__src1_value);
    VL_SHIFTL_WWI(127,127,6, __Vtemp97, __Vtemp96, 
                  (0x3fU & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)));
    vlSelf->top__DOT__exu_step__DOT__sll_res[0U] = 
        __Vtemp97[0U];
    vlSelf->top__DOT__exu_step__DOT__sll_res[1U] = 
        __Vtemp97[1U];
    vlSelf->top__DOT__exu_step__DOT__sll_res[2U] = 
        __Vtemp97[2U];
    vlSelf->top__DOT__exu_step__DOT__sll_res[3U] = 
        (0x7fffffffU & __Vtemp97[3U]);
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
    vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_4 
        = (vlSelf->top__DOT__exu_step__DOT__src1_value 
           < vlSelf->top__DOT__exu_step__DOT__src2_value);
    vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_10 
        = VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value);
    vlSelf->top__DOT__exu_step__DOT__sllw_res = (0x7fffffffffffffffULL 
                                                 & ((QData)((IData)(vlSelf->top__DOT__exu_step__DOT__src1_value)) 
                                                    << 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value))));
    vlSelf->top__DOT__exu_step__DOT__add_res = (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                + vlSelf->top__DOT__exu_step__DOT__src2_value);
    vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_74 
        = (((QData)((IData)(((vlSelf->top__DOT__exu_step__DOT__srlw_res 
                              >> 0x1fU) ? 0xffffffffU
                              : 0U))) << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__srlw_res)));
    vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_59 
        = (((QData)((IData)(((1U & (IData)((vlSelf->top__DOT__exu_step__DOT__sllw_res 
                                            >> 0x1fU)))
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__sllw_res)));
    if (vlSelf->top__DOT__d_cache__DOT__way0_hit) {
        vlSelf->top__DOT__d_cache__DOT___GEN_583 = 
            ((0U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0));
        vlSelf->top__DOT__d_cache__DOT___GEN_584 = 
            ((1U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1));
        vlSelf->top__DOT__d_cache__DOT___GEN_585 = 
            ((2U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2));
        vlSelf->top__DOT__d_cache__DOT___GEN_586 = 
            ((3U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3));
        vlSelf->top__DOT__d_cache__DOT___GEN_587 = 
            ((4U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4));
        vlSelf->top__DOT__d_cache__DOT___GEN_588 = 
            ((5U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5));
        vlSelf->top__DOT__d_cache__DOT___GEN_589 = 
            ((6U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6));
        vlSelf->top__DOT__d_cache__DOT___GEN_590 = 
            ((7U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7));
        vlSelf->top__DOT__d_cache__DOT___GEN_591 = 
            ((8U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8));
        vlSelf->top__DOT__d_cache__DOT___GEN_592 = 
            ((9U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9));
        vlSelf->top__DOT__d_cache__DOT___GEN_593 = 
            ((0xaU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                        >> 3U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10));
        vlSelf->top__DOT__d_cache__DOT___GEN_594 = 
            ((0xbU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                        >> 3U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11));
        vlSelf->top__DOT__d_cache__DOT___GEN_595 = 
            ((0xcU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                        >> 3U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12));
        vlSelf->top__DOT__d_cache__DOT___GEN_596 = 
            ((0xdU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                        >> 3U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13));
        vlSelf->top__DOT__d_cache__DOT___GEN_597 = 
            ((0xeU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                        >> 3U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14));
        vlSelf->top__DOT__d_cache__DOT___GEN_598 = 
            ((0xfU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                        >> 3U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15));
        vlSelf->top__DOT__d_cache__DOT___GEN_599 = 
            ((0x10U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_16));
        vlSelf->top__DOT__d_cache__DOT___GEN_600 = 
            ((0x11U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_17));
        vlSelf->top__DOT__d_cache__DOT___GEN_601 = 
            ((0x12U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_18));
        vlSelf->top__DOT__d_cache__DOT___GEN_602 = 
            ((0x13U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_19));
        vlSelf->top__DOT__d_cache__DOT___GEN_603 = 
            ((0x14U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_20));
        vlSelf->top__DOT__d_cache__DOT___GEN_604 = 
            ((0x15U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_21));
        vlSelf->top__DOT__d_cache__DOT___GEN_605 = 
            ((0x16U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_22));
        vlSelf->top__DOT__d_cache__DOT___GEN_606 = 
            ((0x17U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_23));
        vlSelf->top__DOT__d_cache__DOT___GEN_607 = 
            ((0x18U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_24));
        vlSelf->top__DOT__d_cache__DOT___GEN_608 = 
            ((0x19U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_25));
        vlSelf->top__DOT__d_cache__DOT___GEN_609 = 
            ((0x1aU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_26));
        vlSelf->top__DOT__d_cache__DOT___GEN_610 = 
            ((0x1bU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_27));
        vlSelf->top__DOT__d_cache__DOT___GEN_611 = 
            ((0x1cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_28));
        vlSelf->top__DOT__d_cache__DOT___GEN_612 = 
            ((0x1dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_29));
        vlSelf->top__DOT__d_cache__DOT___GEN_613 = 
            ((0x1eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_30));
        vlSelf->top__DOT__d_cache__DOT___GEN_614 = 
            ((0x1fU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_31));
        vlSelf->top__DOT__d_cache__DOT___GEN_615 = 
            ((0x20U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_32));
        vlSelf->top__DOT__d_cache__DOT___GEN_616 = 
            ((0x21U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_33));
        vlSelf->top__DOT__d_cache__DOT___GEN_617 = 
            ((0x22U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_34));
        vlSelf->top__DOT__d_cache__DOT___GEN_618 = 
            ((0x23U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_35));
        vlSelf->top__DOT__d_cache__DOT___GEN_619 = 
            ((0x24U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_36));
        vlSelf->top__DOT__d_cache__DOT___GEN_620 = 
            ((0x25U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_37));
        vlSelf->top__DOT__d_cache__DOT___GEN_621 = 
            ((0x26U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_38));
        vlSelf->top__DOT__d_cache__DOT___GEN_622 = 
            ((0x27U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_39));
        vlSelf->top__DOT__d_cache__DOT___GEN_623 = 
            ((0x28U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_40));
        vlSelf->top__DOT__d_cache__DOT___GEN_624 = 
            ((0x29U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_41));
        vlSelf->top__DOT__d_cache__DOT___GEN_625 = 
            ((0x2aU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_42));
        vlSelf->top__DOT__d_cache__DOT___GEN_626 = 
            ((0x2bU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_43));
        vlSelf->top__DOT__d_cache__DOT___GEN_627 = 
            ((0x2cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_44));
        vlSelf->top__DOT__d_cache__DOT___GEN_628 = 
            ((0x2dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_45));
        vlSelf->top__DOT__d_cache__DOT___GEN_629 = 
            ((0x2eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_46));
        vlSelf->top__DOT__d_cache__DOT___GEN_630 = 
            ((0x2fU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_47));
        vlSelf->top__DOT__d_cache__DOT___GEN_631 = 
            ((0x30U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_48));
        vlSelf->top__DOT__d_cache__DOT___GEN_632 = 
            ((0x31U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_49));
        vlSelf->top__DOT__d_cache__DOT___GEN_633 = 
            ((0x32U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_50));
        vlSelf->top__DOT__d_cache__DOT___GEN_634 = 
            ((0x33U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_51));
        vlSelf->top__DOT__d_cache__DOT___GEN_635 = 
            ((0x34U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_52));
        vlSelf->top__DOT__d_cache__DOT___GEN_636 = 
            ((0x35U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_53));
        vlSelf->top__DOT__d_cache__DOT___GEN_637 = 
            ((0x36U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_54));
        vlSelf->top__DOT__d_cache__DOT___GEN_638 = 
            ((0x37U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_55));
        vlSelf->top__DOT__d_cache__DOT___GEN_639 = 
            ((0x38U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_56));
        vlSelf->top__DOT__d_cache__DOT___GEN_640 = 
            ((0x39U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_57));
        vlSelf->top__DOT__d_cache__DOT___GEN_641 = 
            ((0x3aU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_58));
        vlSelf->top__DOT__d_cache__DOT___GEN_642 = 
            ((0x3bU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_59));
        vlSelf->top__DOT__d_cache__DOT___GEN_643 = 
            ((0x3cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_60));
        vlSelf->top__DOT__d_cache__DOT___GEN_644 = 
            ((0x3dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_61));
        vlSelf->top__DOT__d_cache__DOT___GEN_645 = 
            ((0x3eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_62));
        vlSelf->top__DOT__d_cache__DOT___GEN_646 = 
            ((0x3fU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) 
             | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_63));
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_583 = vlSelf->top__DOT__d_cache__DOT__dirty_0_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_584 = vlSelf->top__DOT__d_cache__DOT__dirty_0_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_585 = vlSelf->top__DOT__d_cache__DOT__dirty_0_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_586 = vlSelf->top__DOT__d_cache__DOT__dirty_0_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_587 = vlSelf->top__DOT__d_cache__DOT__dirty_0_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_588 = vlSelf->top__DOT__d_cache__DOT__dirty_0_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_589 = vlSelf->top__DOT__d_cache__DOT__dirty_0_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_590 = vlSelf->top__DOT__d_cache__DOT__dirty_0_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_591 = vlSelf->top__DOT__d_cache__DOT__dirty_0_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_592 = vlSelf->top__DOT__d_cache__DOT__dirty_0_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_593 = vlSelf->top__DOT__d_cache__DOT__dirty_0_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_594 = vlSelf->top__DOT__d_cache__DOT__dirty_0_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_595 = vlSelf->top__DOT__d_cache__DOT__dirty_0_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_596 = vlSelf->top__DOT__d_cache__DOT__dirty_0_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_597 = vlSelf->top__DOT__d_cache__DOT__dirty_0_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_598 = vlSelf->top__DOT__d_cache__DOT__dirty_0_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_599 = vlSelf->top__DOT__d_cache__DOT__dirty_0_16;
        vlSelf->top__DOT__d_cache__DOT___GEN_600 = vlSelf->top__DOT__d_cache__DOT__dirty_0_17;
        vlSelf->top__DOT__d_cache__DOT___GEN_601 = vlSelf->top__DOT__d_cache__DOT__dirty_0_18;
        vlSelf->top__DOT__d_cache__DOT___GEN_602 = vlSelf->top__DOT__d_cache__DOT__dirty_0_19;
        vlSelf->top__DOT__d_cache__DOT___GEN_603 = vlSelf->top__DOT__d_cache__DOT__dirty_0_20;
        vlSelf->top__DOT__d_cache__DOT___GEN_604 = vlSelf->top__DOT__d_cache__DOT__dirty_0_21;
        vlSelf->top__DOT__d_cache__DOT___GEN_605 = vlSelf->top__DOT__d_cache__DOT__dirty_0_22;
        vlSelf->top__DOT__d_cache__DOT___GEN_606 = vlSelf->top__DOT__d_cache__DOT__dirty_0_23;
        vlSelf->top__DOT__d_cache__DOT___GEN_607 = vlSelf->top__DOT__d_cache__DOT__dirty_0_24;
        vlSelf->top__DOT__d_cache__DOT___GEN_608 = vlSelf->top__DOT__d_cache__DOT__dirty_0_25;
        vlSelf->top__DOT__d_cache__DOT___GEN_609 = vlSelf->top__DOT__d_cache__DOT__dirty_0_26;
        vlSelf->top__DOT__d_cache__DOT___GEN_610 = vlSelf->top__DOT__d_cache__DOT__dirty_0_27;
        vlSelf->top__DOT__d_cache__DOT___GEN_611 = vlSelf->top__DOT__d_cache__DOT__dirty_0_28;
        vlSelf->top__DOT__d_cache__DOT___GEN_612 = vlSelf->top__DOT__d_cache__DOT__dirty_0_29;
        vlSelf->top__DOT__d_cache__DOT___GEN_613 = vlSelf->top__DOT__d_cache__DOT__dirty_0_30;
        vlSelf->top__DOT__d_cache__DOT___GEN_614 = vlSelf->top__DOT__d_cache__DOT__dirty_0_31;
        vlSelf->top__DOT__d_cache__DOT___GEN_615 = vlSelf->top__DOT__d_cache__DOT__dirty_0_32;
        vlSelf->top__DOT__d_cache__DOT___GEN_616 = vlSelf->top__DOT__d_cache__DOT__dirty_0_33;
        vlSelf->top__DOT__d_cache__DOT___GEN_617 = vlSelf->top__DOT__d_cache__DOT__dirty_0_34;
        vlSelf->top__DOT__d_cache__DOT___GEN_618 = vlSelf->top__DOT__d_cache__DOT__dirty_0_35;
        vlSelf->top__DOT__d_cache__DOT___GEN_619 = vlSelf->top__DOT__d_cache__DOT__dirty_0_36;
        vlSelf->top__DOT__d_cache__DOT___GEN_620 = vlSelf->top__DOT__d_cache__DOT__dirty_0_37;
        vlSelf->top__DOT__d_cache__DOT___GEN_621 = vlSelf->top__DOT__d_cache__DOT__dirty_0_38;
        vlSelf->top__DOT__d_cache__DOT___GEN_622 = vlSelf->top__DOT__d_cache__DOT__dirty_0_39;
        vlSelf->top__DOT__d_cache__DOT___GEN_623 = vlSelf->top__DOT__d_cache__DOT__dirty_0_40;
        vlSelf->top__DOT__d_cache__DOT___GEN_624 = vlSelf->top__DOT__d_cache__DOT__dirty_0_41;
        vlSelf->top__DOT__d_cache__DOT___GEN_625 = vlSelf->top__DOT__d_cache__DOT__dirty_0_42;
        vlSelf->top__DOT__d_cache__DOT___GEN_626 = vlSelf->top__DOT__d_cache__DOT__dirty_0_43;
        vlSelf->top__DOT__d_cache__DOT___GEN_627 = vlSelf->top__DOT__d_cache__DOT__dirty_0_44;
        vlSelf->top__DOT__d_cache__DOT___GEN_628 = vlSelf->top__DOT__d_cache__DOT__dirty_0_45;
        vlSelf->top__DOT__d_cache__DOT___GEN_629 = vlSelf->top__DOT__d_cache__DOT__dirty_0_46;
        vlSelf->top__DOT__d_cache__DOT___GEN_630 = vlSelf->top__DOT__d_cache__DOT__dirty_0_47;
        vlSelf->top__DOT__d_cache__DOT___GEN_631 = vlSelf->top__DOT__d_cache__DOT__dirty_0_48;
        vlSelf->top__DOT__d_cache__DOT___GEN_632 = vlSelf->top__DOT__d_cache__DOT__dirty_0_49;
        vlSelf->top__DOT__d_cache__DOT___GEN_633 = vlSelf->top__DOT__d_cache__DOT__dirty_0_50;
        vlSelf->top__DOT__d_cache__DOT___GEN_634 = vlSelf->top__DOT__d_cache__DOT__dirty_0_51;
        vlSelf->top__DOT__d_cache__DOT___GEN_635 = vlSelf->top__DOT__d_cache__DOT__dirty_0_52;
        vlSelf->top__DOT__d_cache__DOT___GEN_636 = vlSelf->top__DOT__d_cache__DOT__dirty_0_53;
        vlSelf->top__DOT__d_cache__DOT___GEN_637 = vlSelf->top__DOT__d_cache__DOT__dirty_0_54;
        vlSelf->top__DOT__d_cache__DOT___GEN_638 = vlSelf->top__DOT__d_cache__DOT__dirty_0_55;
        vlSelf->top__DOT__d_cache__DOT___GEN_639 = vlSelf->top__DOT__d_cache__DOT__dirty_0_56;
        vlSelf->top__DOT__d_cache__DOT___GEN_640 = vlSelf->top__DOT__d_cache__DOT__dirty_0_57;
        vlSelf->top__DOT__d_cache__DOT___GEN_641 = vlSelf->top__DOT__d_cache__DOT__dirty_0_58;
        vlSelf->top__DOT__d_cache__DOT___GEN_642 = vlSelf->top__DOT__d_cache__DOT__dirty_0_59;
        vlSelf->top__DOT__d_cache__DOT___GEN_643 = vlSelf->top__DOT__d_cache__DOT__dirty_0_60;
        vlSelf->top__DOT__d_cache__DOT___GEN_644 = vlSelf->top__DOT__d_cache__DOT__dirty_0_61;
        vlSelf->top__DOT__d_cache__DOT___GEN_645 = vlSelf->top__DOT__d_cache__DOT__dirty_0_62;
        vlSelf->top__DOT__d_cache__DOT___GEN_646 = vlSelf->top__DOT__d_cache__DOT__dirty_0_63;
    }
    if ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_2395 = vlSelf->top__DOT__d_cache__DOT__tag_0_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_2396 = vlSelf->top__DOT__d_cache__DOT__tag_0_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_2397 = vlSelf->top__DOT__d_cache__DOT__tag_0_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_2398 = vlSelf->top__DOT__d_cache__DOT__tag_0_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_2399 = vlSelf->top__DOT__d_cache__DOT__tag_0_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_2400 = vlSelf->top__DOT__d_cache__DOT__tag_0_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_2401 = vlSelf->top__DOT__d_cache__DOT__tag_0_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_2402 = vlSelf->top__DOT__d_cache__DOT__tag_0_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_2403 = vlSelf->top__DOT__d_cache__DOT__tag_0_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_2404 = vlSelf->top__DOT__d_cache__DOT__tag_0_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_2405 = vlSelf->top__DOT__d_cache__DOT__tag_0_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_2406 = vlSelf->top__DOT__d_cache__DOT__tag_0_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_2407 = vlSelf->top__DOT__d_cache__DOT__tag_0_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_2408 = vlSelf->top__DOT__d_cache__DOT__tag_0_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_2409 = vlSelf->top__DOT__d_cache__DOT__tag_0_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_2410 = vlSelf->top__DOT__d_cache__DOT__tag_0_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_2411 = vlSelf->top__DOT__d_cache__DOT__tag_0_16;
        vlSelf->top__DOT__d_cache__DOT___GEN_2412 = vlSelf->top__DOT__d_cache__DOT__tag_0_17;
        vlSelf->top__DOT__d_cache__DOT___GEN_2413 = vlSelf->top__DOT__d_cache__DOT__tag_0_18;
        vlSelf->top__DOT__d_cache__DOT___GEN_2414 = vlSelf->top__DOT__d_cache__DOT__tag_0_19;
        vlSelf->top__DOT__d_cache__DOT___GEN_2415 = vlSelf->top__DOT__d_cache__DOT__tag_0_20;
        vlSelf->top__DOT__d_cache__DOT___GEN_2416 = vlSelf->top__DOT__d_cache__DOT__tag_0_21;
        vlSelf->top__DOT__d_cache__DOT___GEN_2417 = vlSelf->top__DOT__d_cache__DOT__tag_0_22;
        vlSelf->top__DOT__d_cache__DOT___GEN_2418 = vlSelf->top__DOT__d_cache__DOT__tag_0_23;
        vlSelf->top__DOT__d_cache__DOT___GEN_2419 = vlSelf->top__DOT__d_cache__DOT__tag_0_24;
        vlSelf->top__DOT__d_cache__DOT___GEN_2420 = vlSelf->top__DOT__d_cache__DOT__tag_0_25;
        vlSelf->top__DOT__d_cache__DOT___GEN_2421 = vlSelf->top__DOT__d_cache__DOT__tag_0_26;
        vlSelf->top__DOT__d_cache__DOT___GEN_2422 = vlSelf->top__DOT__d_cache__DOT__tag_0_27;
        vlSelf->top__DOT__d_cache__DOT___GEN_2423 = vlSelf->top__DOT__d_cache__DOT__tag_0_28;
        vlSelf->top__DOT__d_cache__DOT___GEN_2424 = vlSelf->top__DOT__d_cache__DOT__tag_0_29;
        vlSelf->top__DOT__d_cache__DOT___GEN_2425 = vlSelf->top__DOT__d_cache__DOT__tag_0_30;
        vlSelf->top__DOT__d_cache__DOT___GEN_2426 = vlSelf->top__DOT__d_cache__DOT__tag_0_31;
        vlSelf->top__DOT__d_cache__DOT___GEN_2427 = vlSelf->top__DOT__d_cache__DOT__tag_0_32;
        vlSelf->top__DOT__d_cache__DOT___GEN_2428 = vlSelf->top__DOT__d_cache__DOT__tag_0_33;
        vlSelf->top__DOT__d_cache__DOT___GEN_2429 = vlSelf->top__DOT__d_cache__DOT__tag_0_34;
        vlSelf->top__DOT__d_cache__DOT___GEN_2430 = vlSelf->top__DOT__d_cache__DOT__tag_0_35;
        vlSelf->top__DOT__d_cache__DOT___GEN_2431 = vlSelf->top__DOT__d_cache__DOT__tag_0_36;
        vlSelf->top__DOT__d_cache__DOT___GEN_2432 = vlSelf->top__DOT__d_cache__DOT__tag_0_37;
        vlSelf->top__DOT__d_cache__DOT___GEN_2433 = vlSelf->top__DOT__d_cache__DOT__tag_0_38;
        vlSelf->top__DOT__d_cache__DOT___GEN_2434 = vlSelf->top__DOT__d_cache__DOT__tag_0_39;
        vlSelf->top__DOT__d_cache__DOT___GEN_2435 = vlSelf->top__DOT__d_cache__DOT__tag_0_40;
        vlSelf->top__DOT__d_cache__DOT___GEN_2436 = vlSelf->top__DOT__d_cache__DOT__tag_0_41;
        vlSelf->top__DOT__d_cache__DOT___GEN_2437 = vlSelf->top__DOT__d_cache__DOT__tag_0_42;
        vlSelf->top__DOT__d_cache__DOT___GEN_2438 = vlSelf->top__DOT__d_cache__DOT__tag_0_43;
        vlSelf->top__DOT__d_cache__DOT___GEN_2439 = vlSelf->top__DOT__d_cache__DOT__tag_0_44;
        vlSelf->top__DOT__d_cache__DOT___GEN_2440 = vlSelf->top__DOT__d_cache__DOT__tag_0_45;
        vlSelf->top__DOT__d_cache__DOT___GEN_2441 = vlSelf->top__DOT__d_cache__DOT__tag_0_46;
        vlSelf->top__DOT__d_cache__DOT___GEN_2442 = vlSelf->top__DOT__d_cache__DOT__tag_0_47;
        vlSelf->top__DOT__d_cache__DOT___GEN_2443 = vlSelf->top__DOT__d_cache__DOT__tag_0_48;
        vlSelf->top__DOT__d_cache__DOT___GEN_2444 = vlSelf->top__DOT__d_cache__DOT__tag_0_49;
        vlSelf->top__DOT__d_cache__DOT___GEN_2445 = vlSelf->top__DOT__d_cache__DOT__tag_0_50;
        vlSelf->top__DOT__d_cache__DOT___GEN_2446 = vlSelf->top__DOT__d_cache__DOT__tag_0_51;
        vlSelf->top__DOT__d_cache__DOT___GEN_2447 = vlSelf->top__DOT__d_cache__DOT__tag_0_52;
        vlSelf->top__DOT__d_cache__DOT___GEN_2448 = vlSelf->top__DOT__d_cache__DOT__tag_0_53;
        vlSelf->top__DOT__d_cache__DOT___GEN_2449 = vlSelf->top__DOT__d_cache__DOT__tag_0_54;
        vlSelf->top__DOT__d_cache__DOT___GEN_2450 = vlSelf->top__DOT__d_cache__DOT__tag_0_55;
        vlSelf->top__DOT__d_cache__DOT___GEN_2451 = vlSelf->top__DOT__d_cache__DOT__tag_0_56;
        vlSelf->top__DOT__d_cache__DOT___GEN_2452 = vlSelf->top__DOT__d_cache__DOT__tag_0_57;
        vlSelf->top__DOT__d_cache__DOT___GEN_2453 = vlSelf->top__DOT__d_cache__DOT__tag_0_58;
        vlSelf->top__DOT__d_cache__DOT___GEN_2454 = vlSelf->top__DOT__d_cache__DOT__tag_0_59;
        vlSelf->top__DOT__d_cache__DOT___GEN_2455 = vlSelf->top__DOT__d_cache__DOT__tag_0_60;
        vlSelf->top__DOT__d_cache__DOT___GEN_2456 = vlSelf->top__DOT__d_cache__DOT__tag_0_61;
        vlSelf->top__DOT__d_cache__DOT___GEN_2457 = vlSelf->top__DOT__d_cache__DOT__tag_0_62;
        vlSelf->top__DOT__d_cache__DOT___GEN_2458 = vlSelf->top__DOT__d_cache__DOT__tag_0_63;
        vlSelf->top__DOT__d_cache__DOT___GEN_2331 = vlSelf->top__DOT__d_cache__DOT__ram_0_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_2332 = vlSelf->top__DOT__d_cache__DOT__ram_0_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_2333 = vlSelf->top__DOT__d_cache__DOT__ram_0_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_2334 = vlSelf->top__DOT__d_cache__DOT__ram_0_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_2335 = vlSelf->top__DOT__d_cache__DOT__ram_0_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_2336 = vlSelf->top__DOT__d_cache__DOT__ram_0_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_2337 = vlSelf->top__DOT__d_cache__DOT__ram_0_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_2338 = vlSelf->top__DOT__d_cache__DOT__ram_0_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_2339 = vlSelf->top__DOT__d_cache__DOT__ram_0_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_2340 = vlSelf->top__DOT__d_cache__DOT__ram_0_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_2341 = vlSelf->top__DOT__d_cache__DOT__ram_0_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_2342 = vlSelf->top__DOT__d_cache__DOT__ram_0_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_2343 = vlSelf->top__DOT__d_cache__DOT__ram_0_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_2344 = vlSelf->top__DOT__d_cache__DOT__ram_0_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_2345 = vlSelf->top__DOT__d_cache__DOT__ram_0_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_2346 = vlSelf->top__DOT__d_cache__DOT__ram_0_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_2347 = vlSelf->top__DOT__d_cache__DOT__ram_0_16;
        vlSelf->top__DOT__d_cache__DOT___GEN_2348 = vlSelf->top__DOT__d_cache__DOT__ram_0_17;
        vlSelf->top__DOT__d_cache__DOT___GEN_2349 = vlSelf->top__DOT__d_cache__DOT__ram_0_18;
        vlSelf->top__DOT__d_cache__DOT___GEN_2350 = vlSelf->top__DOT__d_cache__DOT__ram_0_19;
        vlSelf->top__DOT__d_cache__DOT___GEN_2351 = vlSelf->top__DOT__d_cache__DOT__ram_0_20;
        vlSelf->top__DOT__d_cache__DOT___GEN_2352 = vlSelf->top__DOT__d_cache__DOT__ram_0_21;
        vlSelf->top__DOT__d_cache__DOT___GEN_2353 = vlSelf->top__DOT__d_cache__DOT__ram_0_22;
        vlSelf->top__DOT__d_cache__DOT___GEN_2354 = vlSelf->top__DOT__d_cache__DOT__ram_0_23;
        vlSelf->top__DOT__d_cache__DOT___GEN_2355 = vlSelf->top__DOT__d_cache__DOT__ram_0_24;
        vlSelf->top__DOT__d_cache__DOT___GEN_2356 = vlSelf->top__DOT__d_cache__DOT__ram_0_25;
        vlSelf->top__DOT__d_cache__DOT___GEN_2357 = vlSelf->top__DOT__d_cache__DOT__ram_0_26;
        vlSelf->top__DOT__d_cache__DOT___GEN_2358 = vlSelf->top__DOT__d_cache__DOT__ram_0_27;
        vlSelf->top__DOT__d_cache__DOT___GEN_2359 = vlSelf->top__DOT__d_cache__DOT__ram_0_28;
        vlSelf->top__DOT__d_cache__DOT___GEN_2360 = vlSelf->top__DOT__d_cache__DOT__ram_0_29;
        vlSelf->top__DOT__d_cache__DOT___GEN_2361 = vlSelf->top__DOT__d_cache__DOT__ram_0_30;
        vlSelf->top__DOT__d_cache__DOT___GEN_2362 = vlSelf->top__DOT__d_cache__DOT__ram_0_31;
        vlSelf->top__DOT__d_cache__DOT___GEN_2363 = vlSelf->top__DOT__d_cache__DOT__ram_0_32;
        vlSelf->top__DOT__d_cache__DOT___GEN_2364 = vlSelf->top__DOT__d_cache__DOT__ram_0_33;
        vlSelf->top__DOT__d_cache__DOT___GEN_2365 = vlSelf->top__DOT__d_cache__DOT__ram_0_34;
        vlSelf->top__DOT__d_cache__DOT___GEN_2366 = vlSelf->top__DOT__d_cache__DOT__ram_0_35;
        vlSelf->top__DOT__d_cache__DOT___GEN_2367 = vlSelf->top__DOT__d_cache__DOT__ram_0_36;
        vlSelf->top__DOT__d_cache__DOT___GEN_2368 = vlSelf->top__DOT__d_cache__DOT__ram_0_37;
        vlSelf->top__DOT__d_cache__DOT___GEN_2369 = vlSelf->top__DOT__d_cache__DOT__ram_0_38;
        vlSelf->top__DOT__d_cache__DOT___GEN_2370 = vlSelf->top__DOT__d_cache__DOT__ram_0_39;
        vlSelf->top__DOT__d_cache__DOT___GEN_2371 = vlSelf->top__DOT__d_cache__DOT__ram_0_40;
        vlSelf->top__DOT__d_cache__DOT___GEN_2372 = vlSelf->top__DOT__d_cache__DOT__ram_0_41;
        vlSelf->top__DOT__d_cache__DOT___GEN_2373 = vlSelf->top__DOT__d_cache__DOT__ram_0_42;
        vlSelf->top__DOT__d_cache__DOT___GEN_2374 = vlSelf->top__DOT__d_cache__DOT__ram_0_43;
        vlSelf->top__DOT__d_cache__DOT___GEN_2375 = vlSelf->top__DOT__d_cache__DOT__ram_0_44;
        vlSelf->top__DOT__d_cache__DOT___GEN_2376 = vlSelf->top__DOT__d_cache__DOT__ram_0_45;
        vlSelf->top__DOT__d_cache__DOT___GEN_2377 = vlSelf->top__DOT__d_cache__DOT__ram_0_46;
        vlSelf->top__DOT__d_cache__DOT___GEN_2378 = vlSelf->top__DOT__d_cache__DOT__ram_0_47;
        vlSelf->top__DOT__d_cache__DOT___GEN_2379 = vlSelf->top__DOT__d_cache__DOT__ram_0_48;
        vlSelf->top__DOT__d_cache__DOT___GEN_2380 = vlSelf->top__DOT__d_cache__DOT__ram_0_49;
        vlSelf->top__DOT__d_cache__DOT___GEN_2381 = vlSelf->top__DOT__d_cache__DOT__ram_0_50;
        vlSelf->top__DOT__d_cache__DOT___GEN_2382 = vlSelf->top__DOT__d_cache__DOT__ram_0_51;
        vlSelf->top__DOT__d_cache__DOT___GEN_2383 = vlSelf->top__DOT__d_cache__DOT__ram_0_52;
        vlSelf->top__DOT__d_cache__DOT___GEN_2384 = vlSelf->top__DOT__d_cache__DOT__ram_0_53;
        vlSelf->top__DOT__d_cache__DOT___GEN_2385 = vlSelf->top__DOT__d_cache__DOT__ram_0_54;
        vlSelf->top__DOT__d_cache__DOT___GEN_2386 = vlSelf->top__DOT__d_cache__DOT__ram_0_55;
        vlSelf->top__DOT__d_cache__DOT___GEN_2387 = vlSelf->top__DOT__d_cache__DOT__ram_0_56;
        vlSelf->top__DOT__d_cache__DOT___GEN_2388 = vlSelf->top__DOT__d_cache__DOT__ram_0_57;
        vlSelf->top__DOT__d_cache__DOT___GEN_2389 = vlSelf->top__DOT__d_cache__DOT__ram_0_58;
        vlSelf->top__DOT__d_cache__DOT___GEN_2390 = vlSelf->top__DOT__d_cache__DOT__ram_0_59;
        vlSelf->top__DOT__d_cache__DOT___GEN_2391 = vlSelf->top__DOT__d_cache__DOT__ram_0_60;
        vlSelf->top__DOT__d_cache__DOT___GEN_2392 = vlSelf->top__DOT__d_cache__DOT__ram_0_61;
        vlSelf->top__DOT__d_cache__DOT___GEN_2393 = vlSelf->top__DOT__d_cache__DOT__ram_0_62;
        vlSelf->top__DOT__d_cache__DOT___GEN_2394 = vlSelf->top__DOT__d_cache__DOT__ram_0_63;
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_2395 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_0
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_0)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_0));
        vlSelf->top__DOT__d_cache__DOT___GEN_2396 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_1
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_1)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_1));
        vlSelf->top__DOT__d_cache__DOT___GEN_2397 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_2
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((2U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_2)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_2));
        vlSelf->top__DOT__d_cache__DOT___GEN_2398 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_3
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((3U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_3)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_3));
        vlSelf->top__DOT__d_cache__DOT___GEN_2399 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_4
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((4U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_4)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_4));
        vlSelf->top__DOT__d_cache__DOT___GEN_2400 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_5
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((5U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_5)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_5));
        vlSelf->top__DOT__d_cache__DOT___GEN_2401 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_6
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((6U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_6)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_6));
        vlSelf->top__DOT__d_cache__DOT___GEN_2402 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_7
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((7U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_7)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_7));
        vlSelf->top__DOT__d_cache__DOT___GEN_2403 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_8
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((8U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_8)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_8));
        vlSelf->top__DOT__d_cache__DOT___GEN_2404 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_9
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((9U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_9)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_9));
        vlSelf->top__DOT__d_cache__DOT___GEN_2405 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_10
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0xaU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_10)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_10));
        vlSelf->top__DOT__d_cache__DOT___GEN_2406 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_11
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0xbU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_11)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_11));
        vlSelf->top__DOT__d_cache__DOT___GEN_2407 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_12
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0xcU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_12)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_12));
        vlSelf->top__DOT__d_cache__DOT___GEN_2408 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_13
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0xdU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_13)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_13));
        vlSelf->top__DOT__d_cache__DOT___GEN_2409 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_14
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0xeU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_14)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_14));
        vlSelf->top__DOT__d_cache__DOT___GEN_2410 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_15
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0xfU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_15)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_15));
        vlSelf->top__DOT__d_cache__DOT___GEN_2411 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_16
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x10U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_16)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_16));
        vlSelf->top__DOT__d_cache__DOT___GEN_2412 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_17
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x11U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_17)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_17));
        vlSelf->top__DOT__d_cache__DOT___GEN_2413 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_18
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x12U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_18)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_18));
        vlSelf->top__DOT__d_cache__DOT___GEN_2414 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_19
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x13U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_19)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_19));
        vlSelf->top__DOT__d_cache__DOT___GEN_2415 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_20
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x14U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_20)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_20));
        vlSelf->top__DOT__d_cache__DOT___GEN_2416 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_21
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x15U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_21)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_21));
        vlSelf->top__DOT__d_cache__DOT___GEN_2417 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_22
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x16U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_22)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_22));
        vlSelf->top__DOT__d_cache__DOT___GEN_2418 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_23
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x17U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_23)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_23));
        vlSelf->top__DOT__d_cache__DOT___GEN_2419 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_24
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x18U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_24)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_24));
        vlSelf->top__DOT__d_cache__DOT___GEN_2420 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_25
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x19U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_25)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_25));
        vlSelf->top__DOT__d_cache__DOT___GEN_2421 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_26
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x1aU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_26)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_26));
        vlSelf->top__DOT__d_cache__DOT___GEN_2422 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_27
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x1bU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_27)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_27));
        vlSelf->top__DOT__d_cache__DOT___GEN_2423 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_28
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x1cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_28)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_28));
        vlSelf->top__DOT__d_cache__DOT___GEN_2424 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_29
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x1dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_29)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_29));
        vlSelf->top__DOT__d_cache__DOT___GEN_2425 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_30
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x1eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_30)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_30));
        vlSelf->top__DOT__d_cache__DOT___GEN_2426 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_31
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x1fU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_31)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_31));
        vlSelf->top__DOT__d_cache__DOT___GEN_2427 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_32
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x20U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_32)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_32));
        vlSelf->top__DOT__d_cache__DOT___GEN_2428 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_33
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x21U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_33)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_33));
        vlSelf->top__DOT__d_cache__DOT___GEN_2429 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_34
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x22U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_34)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_34));
        vlSelf->top__DOT__d_cache__DOT___GEN_2430 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_35
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x23U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_35)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_35));
        vlSelf->top__DOT__d_cache__DOT___GEN_2431 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_36
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x24U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_36)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_36));
        vlSelf->top__DOT__d_cache__DOT___GEN_2432 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_37
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x25U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_37)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_37));
        vlSelf->top__DOT__d_cache__DOT___GEN_2433 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_38
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x26U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_38)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_38));
        vlSelf->top__DOT__d_cache__DOT___GEN_2434 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_39
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x27U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_39)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_39));
        vlSelf->top__DOT__d_cache__DOT___GEN_2435 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_40
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x28U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_40)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_40));
        vlSelf->top__DOT__d_cache__DOT___GEN_2436 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_41
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x29U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_41)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_41));
        vlSelf->top__DOT__d_cache__DOT___GEN_2437 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_42
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x2aU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_42)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_42));
        vlSelf->top__DOT__d_cache__DOT___GEN_2438 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_43
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x2bU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_43)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_43));
        vlSelf->top__DOT__d_cache__DOT___GEN_2439 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_44
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x2cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_44)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_44));
        vlSelf->top__DOT__d_cache__DOT___GEN_2440 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_45
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x2dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_45)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_45));
        vlSelf->top__DOT__d_cache__DOT___GEN_2441 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_46
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x2eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_46)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_46));
        vlSelf->top__DOT__d_cache__DOT___GEN_2442 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_47
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x2fU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_47)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_47));
        vlSelf->top__DOT__d_cache__DOT___GEN_2443 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_48
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x30U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_48)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_48));
        vlSelf->top__DOT__d_cache__DOT___GEN_2444 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_49
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x31U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_49)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_49));
        vlSelf->top__DOT__d_cache__DOT___GEN_2445 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_50
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x32U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_50)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_50));
        vlSelf->top__DOT__d_cache__DOT___GEN_2446 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_51
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x33U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_51)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_51));
        vlSelf->top__DOT__d_cache__DOT___GEN_2447 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_52
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x34U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_52)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_52));
        vlSelf->top__DOT__d_cache__DOT___GEN_2448 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_53
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x35U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_53)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_53));
        vlSelf->top__DOT__d_cache__DOT___GEN_2449 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_54
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x36U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_54)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_54));
        vlSelf->top__DOT__d_cache__DOT___GEN_2450 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_55
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x37U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_55)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_55));
        vlSelf->top__DOT__d_cache__DOT___GEN_2451 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_56
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x38U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_56)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_56));
        vlSelf->top__DOT__d_cache__DOT___GEN_2452 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_57
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x39U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_57)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_57));
        vlSelf->top__DOT__d_cache__DOT___GEN_2453 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_58
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x3aU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_58)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_58));
        vlSelf->top__DOT__d_cache__DOT___GEN_2454 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_59
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x3bU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_59)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_59));
        vlSelf->top__DOT__d_cache__DOT___GEN_2455 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_60
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x3cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_60)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_60));
        vlSelf->top__DOT__d_cache__DOT___GEN_2456 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_61
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x3dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_61)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_61));
        vlSelf->top__DOT__d_cache__DOT___GEN_2457 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_62
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x3eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_62)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_62));
        vlSelf->top__DOT__d_cache__DOT___GEN_2458 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_63
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x3fU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (0x7fffffU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 9U)))
                      : vlSelf->top__DOT__d_cache__DOT__tag_0_63)
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_63));
        vlSelf->top__DOT__d_cache__DOT___GEN_2331 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_0
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_0)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_0));
        vlSelf->top__DOT__d_cache__DOT___GEN_2332 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_1
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_1)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_1));
        vlSelf->top__DOT__d_cache__DOT___GEN_2333 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_2
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((2U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_2)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_2));
        vlSelf->top__DOT__d_cache__DOT___GEN_2334 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_3
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((3U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_3)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_3));
        vlSelf->top__DOT__d_cache__DOT___GEN_2335 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_4
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((4U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_4)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_4));
        vlSelf->top__DOT__d_cache__DOT___GEN_2336 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_5
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((5U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_5)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_5));
        vlSelf->top__DOT__d_cache__DOT___GEN_2337 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_6
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((6U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_6)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_6));
        vlSelf->top__DOT__d_cache__DOT___GEN_2338 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_7
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((7U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_7)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_7));
        vlSelf->top__DOT__d_cache__DOT___GEN_2339 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_8
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((8U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_8)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_8));
        vlSelf->top__DOT__d_cache__DOT___GEN_2340 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_9
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((9U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                              >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_9)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_9));
        vlSelf->top__DOT__d_cache__DOT___GEN_2341 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_10
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0xaU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_10)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_10));
        vlSelf->top__DOT__d_cache__DOT___GEN_2342 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_11
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0xbU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_11)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_11));
        vlSelf->top__DOT__d_cache__DOT___GEN_2343 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_12
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0xcU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_12)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_12));
        vlSelf->top__DOT__d_cache__DOT___GEN_2344 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_13
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0xdU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_13)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_13));
        vlSelf->top__DOT__d_cache__DOT___GEN_2345 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_14
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0xeU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_14)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_14));
        vlSelf->top__DOT__d_cache__DOT___GEN_2346 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_15
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0xfU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_15)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_15));
        vlSelf->top__DOT__d_cache__DOT___GEN_2347 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_16
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x10U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_16)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_16));
        vlSelf->top__DOT__d_cache__DOT___GEN_2348 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_17
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x11U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_17)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_17));
        vlSelf->top__DOT__d_cache__DOT___GEN_2349 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_18
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x12U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_18)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_18));
        vlSelf->top__DOT__d_cache__DOT___GEN_2350 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_19
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x13U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_19)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_19));
        vlSelf->top__DOT__d_cache__DOT___GEN_2351 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_20
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x14U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_20)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_20));
        vlSelf->top__DOT__d_cache__DOT___GEN_2352 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_21
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x15U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_21)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_21));
        vlSelf->top__DOT__d_cache__DOT___GEN_2353 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_22
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x16U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_22)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_22));
        vlSelf->top__DOT__d_cache__DOT___GEN_2354 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_23
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x17U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_23)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_23));
        vlSelf->top__DOT__d_cache__DOT___GEN_2355 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_24
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x18U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_24)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_24));
        vlSelf->top__DOT__d_cache__DOT___GEN_2356 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_25
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x19U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_25)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_25));
        vlSelf->top__DOT__d_cache__DOT___GEN_2357 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_26
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x1aU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_26)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_26));
        vlSelf->top__DOT__d_cache__DOT___GEN_2358 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_27
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x1bU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_27)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_27));
        vlSelf->top__DOT__d_cache__DOT___GEN_2359 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_28
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x1cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_28)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_28));
        vlSelf->top__DOT__d_cache__DOT___GEN_2360 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_29
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x1dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_29)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_29));
        vlSelf->top__DOT__d_cache__DOT___GEN_2361 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_30
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x1eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_30)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_30));
        vlSelf->top__DOT__d_cache__DOT___GEN_2362 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_31
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x1fU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_31)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_31));
        vlSelf->top__DOT__d_cache__DOT___GEN_2363 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_32
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x20U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_32)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_32));
        vlSelf->top__DOT__d_cache__DOT___GEN_2364 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_33
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x21U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_33)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_33));
        vlSelf->top__DOT__d_cache__DOT___GEN_2365 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_34
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x22U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_34)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_34));
        vlSelf->top__DOT__d_cache__DOT___GEN_2366 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_35
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x23U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_35)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_35));
        vlSelf->top__DOT__d_cache__DOT___GEN_2367 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_36
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x24U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_36)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_36));
        vlSelf->top__DOT__d_cache__DOT___GEN_2368 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_37
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x25U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_37)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_37));
        vlSelf->top__DOT__d_cache__DOT___GEN_2369 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_38
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x26U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_38)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_38));
        vlSelf->top__DOT__d_cache__DOT___GEN_2370 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_39
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x27U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_39)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_39));
        vlSelf->top__DOT__d_cache__DOT___GEN_2371 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_40
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x28U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_40)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_40));
        vlSelf->top__DOT__d_cache__DOT___GEN_2372 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_41
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x29U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_41)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_41));
        vlSelf->top__DOT__d_cache__DOT___GEN_2373 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_42
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x2aU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_42)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_42));
        vlSelf->top__DOT__d_cache__DOT___GEN_2374 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_43
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x2bU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_43)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_43));
        vlSelf->top__DOT__d_cache__DOT___GEN_2375 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_44
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x2cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_44)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_44));
        vlSelf->top__DOT__d_cache__DOT___GEN_2376 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_45
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x2dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_45)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_45));
        vlSelf->top__DOT__d_cache__DOT___GEN_2377 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_46
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x2eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_46)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_46));
        vlSelf->top__DOT__d_cache__DOT___GEN_2378 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_47
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x2fU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_47)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_47));
        vlSelf->top__DOT__d_cache__DOT___GEN_2379 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_48
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x30U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_48)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_48));
        vlSelf->top__DOT__d_cache__DOT___GEN_2380 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_49
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x31U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_49)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_49));
        vlSelf->top__DOT__d_cache__DOT___GEN_2381 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_50
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x32U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_50)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_50));
        vlSelf->top__DOT__d_cache__DOT___GEN_2382 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_51
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x33U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_51)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_51));
        vlSelf->top__DOT__d_cache__DOT___GEN_2383 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_52
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x34U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_52)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_52));
        vlSelf->top__DOT__d_cache__DOT___GEN_2384 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_53
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x35U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_53)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_53));
        vlSelf->top__DOT__d_cache__DOT___GEN_2385 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_54
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x36U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_54)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_54));
        vlSelf->top__DOT__d_cache__DOT___GEN_2386 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_55
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x37U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_55)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_55));
        vlSelf->top__DOT__d_cache__DOT___GEN_2387 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_56
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x38U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_56)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_56));
        vlSelf->top__DOT__d_cache__DOT___GEN_2388 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_57
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x39U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_57)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_57));
        vlSelf->top__DOT__d_cache__DOT___GEN_2389 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_58
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x3aU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_58)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_58));
        vlSelf->top__DOT__d_cache__DOT___GEN_2390 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_59
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x3bU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_59)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_59));
        vlSelf->top__DOT__d_cache__DOT___GEN_2391 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_60
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x3cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_60)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_60));
        vlSelf->top__DOT__d_cache__DOT___GEN_2392 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_61
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x3dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_61)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_61));
        vlSelf->top__DOT__d_cache__DOT___GEN_2393 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_62
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x3eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_62)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_62));
        vlSelf->top__DOT__d_cache__DOT___GEN_2394 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__ram_0_63
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((0x3fU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__receive_data
                      : vlSelf->top__DOT__d_cache__DOT__ram_0_63)
                  : vlSelf->top__DOT__d_cache__DOT__ram_0_63));
    }
    vlSelf->top__DOT__exu_step__DOT___j_pc_T_56 = (
                                                   (0x2bU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   (VL_GTES_IQQ(1,64,64, 
                                                                ((0U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->top__DOT__idu_step_io_inst 
                                                                      >> 0xfU)))
                                                                  ? 0ULL
                                                                  : 
                                                                 vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                 [
                                                                 (0x1fU 
                                                                  & (vlSelf->top__DOT__idu_step_io_inst 
                                                                     >> 0xfU))]), 
                                                                ((0U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->top__DOT__idu_step_io_inst 
                                                                      >> 0x14U)))
                                                                  ? 0ULL
                                                                  : 
                                                                 vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                 [
                                                                 (0x1fU 
                                                                  & (vlSelf->top__DOT__idu_step_io_inst 
                                                                     >> 0x14U))]))
                                                     ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                     : 
                                                    (4ULL 
                                                     + vlSelf->top__DOT__pc_now))
                                                    : 
                                                   ((0x29U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    ((((0U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__idu_step_io_inst 
                                                            >> 0xfU)))
                                                        ? 0ULL
                                                        : 
                                                       vlSelf->top__DOT__exu_step__DOT__Regfile
                                                       [
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__idu_step_io_inst 
                                                           >> 0xfU))]) 
                                                      == 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__idu_step_io_inst 
                                                            >> 0x14U)))
                                                        ? 0ULL
                                                        : 
                                                       vlSelf->top__DOT__exu_step__DOT__Regfile
                                                       [
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__idu_step_io_inst 
                                                           >> 0x14U))]))
                                                      ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                      : 
                                                     (4ULL 
                                                      + vlSelf->top__DOT__pc_now))
                                                     : 
                                                    ((0x2aU 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     ((((0U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->top__DOT__idu_step_io_inst 
                                                             >> 0xfU)))
                                                         ? 0ULL
                                                         : 
                                                        vlSelf->top__DOT__exu_step__DOT__Regfile
                                                        [
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__idu_step_io_inst 
                                                            >> 0xfU))]) 
                                                       != 
                                                       ((0U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->top__DOT__idu_step_io_inst 
                                                             >> 0x14U)))
                                                         ? 0ULL
                                                         : 
                                                        vlSelf->top__DOT__exu_step__DOT__Regfile
                                                        [
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__idu_step_io_inst 
                                                            >> 0x14U))]))
                                                       ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                       : 
                                                      (4ULL 
                                                       + vlSelf->top__DOT__pc_now))
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      (0xfffffffffffffffeULL 
                                                       & vlSelf->top__DOT__exu_step__DOT__add_res)
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                        ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                        : 
                                                       (4ULL 
                                                        + vlSelf->top__DOT__pc_now))))));
    vlSelf->top__DOT__d_cache__DOT___GEN_326 = ((0U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_0));
    vlSelf->top__DOT__d_cache__DOT___GEN_327 = ((1U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_1));
    vlSelf->top__DOT__d_cache__DOT___GEN_328 = ((2U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_2));
    vlSelf->top__DOT__d_cache__DOT___GEN_329 = ((3U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_3));
    vlSelf->top__DOT__d_cache__DOT___GEN_330 = ((4U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_4));
    vlSelf->top__DOT__d_cache__DOT___GEN_331 = ((5U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_5));
    vlSelf->top__DOT__d_cache__DOT___GEN_332 = ((6U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_6));
    vlSelf->top__DOT__d_cache__DOT___GEN_333 = ((7U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_7));
    vlSelf->top__DOT__d_cache__DOT___GEN_334 = ((8U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_8));
    vlSelf->top__DOT__d_cache__DOT___GEN_335 = ((9U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_9));
    vlSelf->top__DOT__d_cache__DOT___GEN_336 = ((0xaU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_10));
    vlSelf->top__DOT__d_cache__DOT___GEN_337 = ((0xbU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_11));
    vlSelf->top__DOT__d_cache__DOT___GEN_338 = ((0xcU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_12));
    vlSelf->top__DOT__d_cache__DOT___GEN_339 = ((0xdU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_13));
    vlSelf->top__DOT__d_cache__DOT___GEN_340 = ((0xeU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_14));
    vlSelf->top__DOT__d_cache__DOT___GEN_341 = ((0xfU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_15));
    vlSelf->top__DOT__d_cache__DOT___GEN_342 = ((0x10U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_16));
    vlSelf->top__DOT__d_cache__DOT___GEN_343 = ((0x11U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_17));
    vlSelf->top__DOT__d_cache__DOT___GEN_344 = ((0x12U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_18));
    vlSelf->top__DOT__d_cache__DOT___GEN_345 = ((0x13U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_19));
    vlSelf->top__DOT__d_cache__DOT___GEN_346 = ((0x14U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_20));
    vlSelf->top__DOT__d_cache__DOT___GEN_347 = ((0x15U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_21));
    vlSelf->top__DOT__d_cache__DOT___GEN_348 = ((0x16U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_22));
    vlSelf->top__DOT__d_cache__DOT___GEN_349 = ((0x17U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_23));
    vlSelf->top__DOT__d_cache__DOT___GEN_350 = ((0x18U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_24));
    vlSelf->top__DOT__d_cache__DOT___GEN_351 = ((0x19U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_25));
    vlSelf->top__DOT__d_cache__DOT___GEN_352 = ((0x1aU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_26));
    vlSelf->top__DOT__d_cache__DOT___GEN_353 = ((0x1bU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_27));
    vlSelf->top__DOT__d_cache__DOT___GEN_354 = ((0x1cU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_28));
    vlSelf->top__DOT__d_cache__DOT___GEN_355 = ((0x1dU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_29));
    vlSelf->top__DOT__d_cache__DOT___GEN_356 = ((0x1eU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_30));
    vlSelf->top__DOT__d_cache__DOT___GEN_357 = ((0x1fU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_31));
    vlSelf->top__DOT__d_cache__DOT___GEN_358 = ((0x20U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_32));
    vlSelf->top__DOT__d_cache__DOT___GEN_359 = ((0x21U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_33));
    vlSelf->top__DOT__d_cache__DOT___GEN_360 = ((0x22U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_34));
    vlSelf->top__DOT__d_cache__DOT___GEN_361 = ((0x23U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_35));
    vlSelf->top__DOT__d_cache__DOT___GEN_362 = ((0x24U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_36));
    vlSelf->top__DOT__d_cache__DOT___GEN_363 = ((0x25U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_37));
    vlSelf->top__DOT__d_cache__DOT___GEN_364 = ((0x26U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_38));
    vlSelf->top__DOT__d_cache__DOT___GEN_365 = ((0x27U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_39));
    vlSelf->top__DOT__d_cache__DOT___GEN_366 = ((0x28U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_40));
    vlSelf->top__DOT__d_cache__DOT___GEN_367 = ((0x29U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_41));
    vlSelf->top__DOT__d_cache__DOT___GEN_368 = ((0x2aU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_42));
    vlSelf->top__DOT__d_cache__DOT___GEN_369 = ((0x2bU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_43));
    vlSelf->top__DOT__d_cache__DOT___GEN_370 = ((0x2cU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_44));
    vlSelf->top__DOT__d_cache__DOT___GEN_371 = ((0x2dU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_45));
    vlSelf->top__DOT__d_cache__DOT___GEN_372 = ((0x2eU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_46));
    vlSelf->top__DOT__d_cache__DOT___GEN_373 = ((0x2fU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_47));
    vlSelf->top__DOT__d_cache__DOT___GEN_374 = ((0x30U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_48));
    vlSelf->top__DOT__d_cache__DOT___GEN_375 = ((0x31U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_49));
    vlSelf->top__DOT__d_cache__DOT___GEN_376 = ((0x32U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_50));
    vlSelf->top__DOT__d_cache__DOT___GEN_377 = ((0x33U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_51));
    vlSelf->top__DOT__d_cache__DOT___GEN_378 = ((0x34U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_52));
    vlSelf->top__DOT__d_cache__DOT___GEN_379 = ((0x35U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_53));
    vlSelf->top__DOT__d_cache__DOT___GEN_380 = ((0x36U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_54));
    vlSelf->top__DOT__d_cache__DOT___GEN_381 = ((0x37U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_55));
    vlSelf->top__DOT__d_cache__DOT___GEN_382 = ((0x38U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_56));
    vlSelf->top__DOT__d_cache__DOT___GEN_383 = ((0x39U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_57));
    vlSelf->top__DOT__d_cache__DOT___GEN_384 = ((0x3aU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_58));
    vlSelf->top__DOT__d_cache__DOT___GEN_385 = ((0x3bU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_59));
    vlSelf->top__DOT__d_cache__DOT___GEN_386 = ((0x3cU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_60));
    vlSelf->top__DOT__d_cache__DOT___GEN_387 = ((0x3dU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_61));
    vlSelf->top__DOT__d_cache__DOT___GEN_388 = ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_62));
    vlSelf->top__DOT__d_cache__DOT___GEN_389 = ((0x3fU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_63));
    if ((0U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_3452 = (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__add_res));
        vlSelf->top__DOT__d_cache_io_to_axi_awaddr = 0U;
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_3452 = 
            ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__add_res))
              : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__add_res))
                  : ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                      ? (0xfffffffffffffff8ULL & (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                      : (QData)((IData)(((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                          ? 0U : ((5U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 0U
                                                    : (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))))))));
        vlSelf->top__DOT__d_cache_io_to_axi_awaddr 
            = ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? 0U : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                         ? 0U : ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                  ? 0U : ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                           ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                           : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                               ? 0U
                                               : ((6U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? vlSelf->top__DOT__d_cache__DOT__write_back_addr
                                                   : 0U))))));
    }
    vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_44 
        = (((QData)((IData)(((1U & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                            >> 0x1fU)))
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__add_res)));
    if ((0xdU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                   >> 3U))))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_77 = vlSelf->top__DOT__d_cache__DOT__valid_0_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_13 = vlSelf->top__DOT__d_cache__DOT__tag_0_13;
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_77 = (
                                                   (0xcU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_12)
                                                    : 
                                                   ((0xbU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_11)
                                                     : 
                                                    ((0xaU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_10)
                                                      : 
                                                     ((9U 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_9)
                                                       : 
                                                      ((8U 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_8)
                                                        : 
                                                       ((7U 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_7)
                                                         : 
                                                        ((6U 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_6)
                                                          : 
                                                         ((5U 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_5)
                                                           : 
                                                          ((4U 
                                                            == 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                        >> 3U))))
                                                            ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_4)
                                                            : 
                                                           ((3U 
                                                             == 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                         >> 3U))))
                                                             ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_3)
                                                             : 
                                                            ((2U 
                                                              == 
                                                              (0x3fU 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                          >> 3U))))
                                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_2)
                                                              : 
                                                             ((1U 
                                                               == 
                                                               (0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                           >> 3U))))
                                                               ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_1)
                                                               : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_0)))))))))))));
        vlSelf->top__DOT__d_cache__DOT___GEN_13 = (
                                                   (0xcU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? vlSelf->top__DOT__d_cache__DOT__tag_0_12
                                                    : 
                                                   ((0xbU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? vlSelf->top__DOT__d_cache__DOT__tag_0_11
                                                     : 
                                                    ((0xaU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? vlSelf->top__DOT__d_cache__DOT__tag_0_10
                                                      : 
                                                     ((9U 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? vlSelf->top__DOT__d_cache__DOT__tag_0_9
                                                       : 
                                                      ((8U 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? vlSelf->top__DOT__d_cache__DOT__tag_0_8
                                                        : 
                                                       ((7U 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? vlSelf->top__DOT__d_cache__DOT__tag_0_7
                                                         : 
                                                        ((6U 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_6
                                                          : 
                                                         ((5U 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? vlSelf->top__DOT__d_cache__DOT__tag_0_5
                                                           : 
                                                          ((4U 
                                                            == 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                        >> 3U))))
                                                            ? vlSelf->top__DOT__d_cache__DOT__tag_0_4
                                                            : 
                                                           ((3U 
                                                             == 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                         >> 3U))))
                                                             ? vlSelf->top__DOT__d_cache__DOT__tag_0_3
                                                             : 
                                                            ((2U 
                                                              == 
                                                              (0x3fU 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                          >> 3U))))
                                                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_2
                                                              : 
                                                             ((1U 
                                                               == 
                                                               (0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                           >> 3U))))
                                                               ? vlSelf->top__DOT__d_cache__DOT__tag_0_1
                                                               : vlSelf->top__DOT__d_cache__DOT__tag_0_0))))))))))));
    }
    vlSelf->top__DOT__d_cache__DOT__shift_bit = ((0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                                                    ? 0x10U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                                                     ? 0x18U
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                                                      ? 0x20U
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                                                       ? 0x28U
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                                                        ? 0x30U
                                                        : 
                                                       ((7U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)))
                                                         ? 0x38U
                                                         : 0U))))))));
    if ((0xdU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                   >> 3U))))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_145 = vlSelf->top__DOT__d_cache__DOT__dirty_0_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_211 = vlSelf->top__DOT__d_cache__DOT__ram_0_13;
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_145 = 
            ((0xcU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                        >> 3U)))) ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12)
              : ((0xbU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                            >> 3U))))
                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11)
                  : ((0xaU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                >> 3U))))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10)
                      : ((9U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                  >> 3U))))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9)
                          : ((8U == (0x3fU & (IData)(
                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                      >> 3U))))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8)
                              : ((7U == (0x3fU & (IData)(
                                                         (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                          >> 3U))))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7)
                                  : ((6U == (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U))))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6)
                                      : ((5U == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5)
                                          : ((4U == 
                                              (0x3fU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                          >> 3U))))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4)
                                              : ((3U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2)
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0)))))))))))));
        vlSelf->top__DOT__d_cache__DOT___GEN_211 = 
            ((0xcU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                        >> 3U)))) ? vlSelf->top__DOT__d_cache__DOT__ram_0_12
              : ((0xbU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                            >> 3U))))
                  ? vlSelf->top__DOT__d_cache__DOT__ram_0_11
                  : ((0xaU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_0_10
                      : ((9U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                  >> 3U))))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_9
                          : ((8U == (0x3fU & (IData)(
                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                      >> 3U))))
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_8
                              : ((7U == (0x3fU & (IData)(
                                                         (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                          >> 3U))))
                                  ? vlSelf->top__DOT__d_cache__DOT__ram_0_7
                                  : ((6U == (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U))))
                                      ? vlSelf->top__DOT__d_cache__DOT__ram_0_6
                                      : ((5U == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_5
                                          : ((4U == 
                                              (0x3fU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                          >> 3U))))
                                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_4
                                              : ((3U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? vlSelf->top__DOT__d_cache__DOT__ram_0_3
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? vlSelf->top__DOT__d_cache__DOT__ram_0_2
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_1
                                                    : vlSelf->top__DOT__d_cache__DOT__ram_0_0))))))))))));
    }
    vlSelf->top__DOT__exu_step__DOT___j_pc_T_62 = (
                                                   (0x3cU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   ((((0U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__idu_step_io_inst 
                                                           >> 0xfU)))
                                                       ? 0ULL
                                                       : 
                                                      vlSelf->top__DOT__exu_step__DOT__Regfile
                                                      [
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__idu_step_io_inst 
                                                          >> 0xfU))]) 
                                                     >= 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__idu_step_io_inst 
                                                           >> 0x14U)))
                                                       ? 0ULL
                                                       : 
                                                      vlSelf->top__DOT__exu_step__DOT__Regfile
                                                      [
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__idu_step_io_inst 
                                                          >> 0x14U))]))
                                                     ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                     : 
                                                    (4ULL 
                                                     + vlSelf->top__DOT__pc_now))
                                                    : 
                                                   ((0x2dU 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    ((((0U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__idu_step_io_inst 
                                                            >> 0xfU)))
                                                        ? 0ULL
                                                        : 
                                                       vlSelf->top__DOT__exu_step__DOT__Regfile
                                                       [
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__idu_step_io_inst 
                                                           >> 0xfU))]) 
                                                      < 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__idu_step_io_inst 
                                                            >> 0x14U)))
                                                        ? 0ULL
                                                        : 
                                                       vlSelf->top__DOT__exu_step__DOT__Regfile
                                                       [
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__idu_step_io_inst 
                                                           >> 0x14U))]))
                                                      ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                      : 
                                                     (4ULL 
                                                      + vlSelf->top__DOT__pc_now))
                                                     : 
                                                    ((0x2cU 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     (VL_LTS_IQQ(1,64,64, 
                                                                 ((0U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelf->top__DOT__idu_step_io_inst 
                                                                       >> 0xfU)))
                                                                   ? 0ULL
                                                                   : 
                                                                  vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                  [
                                                                  (0x1fU 
                                                                   & (vlSelf->top__DOT__idu_step_io_inst 
                                                                      >> 0xfU))]), 
                                                                 ((0U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelf->top__DOT__idu_step_io_inst 
                                                                       >> 0x14U)))
                                                                   ? 0ULL
                                                                   : 
                                                                  vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                  [
                                                                  (0x1fU 
                                                                   & (vlSelf->top__DOT__idu_step_io_inst 
                                                                      >> 0x14U))]))
                                                       ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                       : 
                                                      (4ULL 
                                                       + vlSelf->top__DOT__pc_now))
                                                      : vlSelf->top__DOT__exu_step__DOT___j_pc_T_56)));
    vlSelf->top__DOT__d_cache__DOT___GEN_519 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_326)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_0));
    vlSelf->top__DOT__d_cache__DOT___GEN_2459 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_0)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_0)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_326)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_0))));
    vlSelf->top__DOT__d_cache__DOT___GEN_520 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_327)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_1));
    vlSelf->top__DOT__d_cache__DOT___GEN_2460 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_1)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_1)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_327)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_1))));
    vlSelf->top__DOT__d_cache__DOT___GEN_521 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_328)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_2));
    vlSelf->top__DOT__d_cache__DOT___GEN_2461 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_2)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_2)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_328)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_2))));
    vlSelf->top__DOT__d_cache__DOT___GEN_522 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_329)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_3));
    vlSelf->top__DOT__d_cache__DOT___GEN_2462 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_3)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_3)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_329)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_3))));
    vlSelf->top__DOT__d_cache__DOT___GEN_523 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_330)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_4));
    vlSelf->top__DOT__d_cache__DOT___GEN_2463 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_4)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_4)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_330)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_4))));
    vlSelf->top__DOT__d_cache__DOT___GEN_524 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_331)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_5));
    vlSelf->top__DOT__d_cache__DOT___GEN_2464 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_5)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_5)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_331)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_5))));
    vlSelf->top__DOT__d_cache__DOT___GEN_525 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_332)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_6));
    vlSelf->top__DOT__d_cache__DOT___GEN_2465 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_6)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_6)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_332)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_6))));
    vlSelf->top__DOT__d_cache__DOT___GEN_526 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_333)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_7));
    vlSelf->top__DOT__d_cache__DOT___GEN_2466 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_7)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_7)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_333)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_7))));
    vlSelf->top__DOT__d_cache__DOT___GEN_527 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_334)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_8));
    vlSelf->top__DOT__d_cache__DOT___GEN_2467 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_8)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_8)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_334)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_8))));
    vlSelf->top__DOT__d_cache__DOT___GEN_528 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_335)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_9));
    vlSelf->top__DOT__d_cache__DOT___GEN_2468 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_9)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_9)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_335)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_9))));
    vlSelf->top__DOT__d_cache__DOT___GEN_529 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_336)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_10));
    vlSelf->top__DOT__d_cache__DOT___GEN_2469 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_10)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_10)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_336)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_10))));
    vlSelf->top__DOT__d_cache__DOT___GEN_530 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_337)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_11));
    vlSelf->top__DOT__d_cache__DOT___GEN_2470 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_11)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_11)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_337)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_11))));
    vlSelf->top__DOT__d_cache__DOT___GEN_531 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_12));
    vlSelf->top__DOT__d_cache__DOT___GEN_2471 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_12)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_12)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_12))));
    vlSelf->top__DOT__d_cache__DOT___GEN_532 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_339)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_13));
    vlSelf->top__DOT__d_cache__DOT___GEN_2472 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_13)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_13)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_339)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_13))));
    vlSelf->top__DOT__d_cache__DOT___GEN_533 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_340)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_14));
    vlSelf->top__DOT__d_cache__DOT___GEN_2473 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_14)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_14)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_340)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_14))));
    vlSelf->top__DOT__d_cache__DOT___GEN_534 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_341)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_15));
    vlSelf->top__DOT__d_cache__DOT___GEN_2474 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_15)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_15)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_341)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_15))));
    vlSelf->top__DOT__d_cache__DOT___GEN_535 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_342)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_16));
    vlSelf->top__DOT__d_cache__DOT___GEN_2475 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_16)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_16)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_342)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_16))));
    vlSelf->top__DOT__d_cache__DOT___GEN_536 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_343)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_17));
    vlSelf->top__DOT__d_cache__DOT___GEN_2476 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_17)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_17)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_343)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_17))));
    vlSelf->top__DOT__d_cache__DOT___GEN_537 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_344)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_18));
    vlSelf->top__DOT__d_cache__DOT___GEN_2477 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_18)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_18)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_344)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_18))));
    vlSelf->top__DOT__d_cache__DOT___GEN_538 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_345)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_19));
    vlSelf->top__DOT__d_cache__DOT___GEN_2478 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_19)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_19)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_345)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_19))));
    vlSelf->top__DOT__d_cache__DOT___GEN_539 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_346)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_20));
    vlSelf->top__DOT__d_cache__DOT___GEN_2479 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_20)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_20)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_346)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_20))));
    vlSelf->top__DOT__d_cache__DOT___GEN_540 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_347)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_21));
    vlSelf->top__DOT__d_cache__DOT___GEN_2480 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_21)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_21)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_347)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_21))));
    vlSelf->top__DOT__d_cache__DOT___GEN_541 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_348)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_22));
    vlSelf->top__DOT__d_cache__DOT___GEN_2481 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_22)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_22)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_348)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_22))));
    vlSelf->top__DOT__d_cache__DOT___GEN_542 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_349)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_23));
    vlSelf->top__DOT__d_cache__DOT___GEN_2482 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_23)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_23)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_349)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_23))));
    vlSelf->top__DOT__d_cache__DOT___GEN_543 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_350)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_24));
    vlSelf->top__DOT__d_cache__DOT___GEN_2483 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_24)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_24)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_350)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_24))));
    vlSelf->top__DOT__d_cache__DOT___GEN_544 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_351)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_25));
    vlSelf->top__DOT__d_cache__DOT___GEN_2484 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_25)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_25)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_351)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_25))));
    vlSelf->top__DOT__d_cache__DOT___GEN_545 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_352)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_26));
    vlSelf->top__DOT__d_cache__DOT___GEN_2485 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_26)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_26)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_352)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_26))));
    vlSelf->top__DOT__d_cache__DOT___GEN_546 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_353)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_27));
    vlSelf->top__DOT__d_cache__DOT___GEN_2486 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_27)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_27)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_353)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_27))));
    vlSelf->top__DOT__d_cache__DOT___GEN_547 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_354)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_28));
    vlSelf->top__DOT__d_cache__DOT___GEN_2487 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_28)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_28)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_354)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_28))));
    vlSelf->top__DOT__d_cache__DOT___GEN_548 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_355)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_29));
    vlSelf->top__DOT__d_cache__DOT___GEN_2488 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_29)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_29)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_355)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_29))));
    vlSelf->top__DOT__d_cache__DOT___GEN_549 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_356)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_30));
    vlSelf->top__DOT__d_cache__DOT___GEN_2489 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_30)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_30)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_356)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_30))));
    vlSelf->top__DOT__d_cache__DOT___GEN_550 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_357)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_31));
    vlSelf->top__DOT__d_cache__DOT___GEN_2490 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_31)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_31)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_357)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_31))));
    vlSelf->top__DOT__d_cache__DOT___GEN_551 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_358)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_32));
    vlSelf->top__DOT__d_cache__DOT___GEN_2491 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_32)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_32)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_358)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_32))));
    vlSelf->top__DOT__d_cache__DOT___GEN_552 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_359)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_33));
    vlSelf->top__DOT__d_cache__DOT___GEN_2492 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_33)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_33)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_359)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_33))));
    vlSelf->top__DOT__d_cache__DOT___GEN_553 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_360)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_34));
    vlSelf->top__DOT__d_cache__DOT___GEN_2493 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_34)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_34)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_360)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_34))));
    vlSelf->top__DOT__d_cache__DOT___GEN_554 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_361)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_35));
    vlSelf->top__DOT__d_cache__DOT___GEN_2494 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_35)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_35)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_361)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_35))));
    vlSelf->top__DOT__d_cache__DOT___GEN_555 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_362)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_36));
    vlSelf->top__DOT__d_cache__DOT___GEN_2495 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_36)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_36)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_362)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_36))));
    vlSelf->top__DOT__d_cache__DOT___GEN_556 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_363)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_37));
    vlSelf->top__DOT__d_cache__DOT___GEN_2496 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_37)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_37)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_363)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_37))));
    vlSelf->top__DOT__d_cache__DOT___GEN_557 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_364)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_38));
    vlSelf->top__DOT__d_cache__DOT___GEN_2497 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_38)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_38)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_364)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_38))));
    vlSelf->top__DOT__d_cache__DOT___GEN_558 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_365)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_39));
    vlSelf->top__DOT__d_cache__DOT___GEN_2498 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_39)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_39)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_365)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_39))));
    vlSelf->top__DOT__d_cache__DOT___GEN_559 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_366)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_40));
    vlSelf->top__DOT__d_cache__DOT___GEN_2499 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_40)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_40)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_366)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_40))));
    vlSelf->top__DOT__d_cache__DOT___GEN_560 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_367)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_41));
    vlSelf->top__DOT__d_cache__DOT___GEN_2500 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_41)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_41)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_367)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_41))));
    vlSelf->top__DOT__d_cache__DOT___GEN_561 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_368)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_42));
    vlSelf->top__DOT__d_cache__DOT___GEN_2501 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_42)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_42)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_368)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_42))));
    vlSelf->top__DOT__d_cache__DOT___GEN_562 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_369)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_43));
    vlSelf->top__DOT__d_cache__DOT___GEN_2502 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_43)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_43)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_369)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_43))));
    vlSelf->top__DOT__d_cache__DOT___GEN_563 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_370)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_44));
    vlSelf->top__DOT__d_cache__DOT___GEN_2503 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_44)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_44)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_370)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_44))));
    vlSelf->top__DOT__d_cache__DOT___GEN_564 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_371)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_45));
    vlSelf->top__DOT__d_cache__DOT___GEN_2504 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_45)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_45)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_371)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_45))));
    vlSelf->top__DOT__d_cache__DOT___GEN_565 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_372)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_46));
    vlSelf->top__DOT__d_cache__DOT___GEN_2505 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_46)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_46)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_372)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_46))));
    vlSelf->top__DOT__d_cache__DOT___GEN_566 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_373)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_47));
    vlSelf->top__DOT__d_cache__DOT___GEN_2506 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_47)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_47)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_373)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_47))));
    vlSelf->top__DOT__d_cache__DOT___GEN_567 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_374)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_48));
    vlSelf->top__DOT__d_cache__DOT___GEN_2507 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_48)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_48)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_374)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_48))));
    vlSelf->top__DOT__d_cache__DOT___GEN_568 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_375)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_49));
    vlSelf->top__DOT__d_cache__DOT___GEN_2508 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_49)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_49)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_375)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_49))));
    vlSelf->top__DOT__d_cache__DOT___GEN_569 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_376)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_50));
    vlSelf->top__DOT__d_cache__DOT___GEN_2509 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_50)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_50)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_376)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_50))));
    vlSelf->top__DOT__d_cache__DOT___GEN_570 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_377)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_51));
    vlSelf->top__DOT__d_cache__DOT___GEN_2510 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_51)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_51)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_377)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_51))));
    vlSelf->top__DOT__d_cache__DOT___GEN_571 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_378)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_52));
    vlSelf->top__DOT__d_cache__DOT___GEN_2511 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_52)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_52)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_378)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_52))));
    vlSelf->top__DOT__d_cache__DOT___GEN_572 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_379)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_53));
    vlSelf->top__DOT__d_cache__DOT___GEN_2512 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_53)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_53)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_379)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_53))));
    vlSelf->top__DOT__d_cache__DOT___GEN_573 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_380)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_54));
    vlSelf->top__DOT__d_cache__DOT___GEN_2513 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_54)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_54)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_380)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_54))));
    vlSelf->top__DOT__d_cache__DOT___GEN_574 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_381)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_55));
    vlSelf->top__DOT__d_cache__DOT___GEN_2514 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_55)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_55)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_381)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_55))));
    vlSelf->top__DOT__d_cache__DOT___GEN_575 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_382)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_56));
    vlSelf->top__DOT__d_cache__DOT___GEN_2515 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_56)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_56)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_382)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_56))));
    vlSelf->top__DOT__d_cache__DOT___GEN_576 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_383)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_57));
    vlSelf->top__DOT__d_cache__DOT___GEN_2516 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_57)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_57)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_383)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_57))));
    vlSelf->top__DOT__d_cache__DOT___GEN_577 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_384)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_58));
    vlSelf->top__DOT__d_cache__DOT___GEN_2517 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_58)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_58)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_384)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_58))));
    vlSelf->top__DOT__d_cache__DOT___GEN_578 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_385)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_59));
    vlSelf->top__DOT__d_cache__DOT___GEN_2518 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_59)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_59)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_385)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_59))));
    vlSelf->top__DOT__d_cache__DOT___GEN_579 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_386)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_60));
    vlSelf->top__DOT__d_cache__DOT___GEN_2519 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_60)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_60)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_386)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_60))));
    vlSelf->top__DOT__d_cache__DOT___GEN_580 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_387)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_61));
    vlSelf->top__DOT__d_cache__DOT___GEN_2520 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_61)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_61)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_387)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_61))));
    vlSelf->top__DOT__d_cache__DOT___GEN_581 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_388)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_62));
    vlSelf->top__DOT__d_cache__DOT___GEN_2521 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_62)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_62)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_388)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_62))));
    vlSelf->top__DOT__d_cache__DOT___GEN_582 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_389)
                                                 : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_63));
    vlSelf->top__DOT__d_cache__DOT___GEN_2522 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_63)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_63)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_389)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_63))));
    if (((IData)(vlSelf->top__DOT__axi__DOT__axi_arready) 
         & (IData)(vlSelf->top__DOT__arbiter_io_axi_out_arvalid))) {
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit((QData)((IData)(
                                                                              ((0U 
                                                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                                ? 
                                                                               ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_3452)
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_3452)
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                                                 ? (IData)(vlSelf->top__DOT__pc_now)
                                                                                 : 0U)))
                                                                                : 
                                                                               ((1U 
                                                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                                 ? (IData)(vlSelf->top__DOT__pc_now)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_3452)
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_3452)
                                                                                 : 0U)))))), vlSelf->__Vtask_pmem_read__0__Rdata);
        vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata 
            = vlSelf->__Vtask_pmem_read__0__Rdata;
    }
    if (((IData)(vlSelf->top__DOT__axi__DOT__axi_wready) 
         & (IData)(vlSelf->top__DOT__arbiter_io_axi_out_wvalid))) {
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit((QData)((IData)(
                                                                               ((0U 
                                                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                                                                 ? vlSelf->top__DOT__d_cache_io_to_axi_awaddr
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                                                 ? vlSelf->top__DOT__d_cache_io_to_axi_awaddr
                                                                                 : 0U))
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                                 ? vlSelf->top__DOT__d_cache_io_to_axi_awaddr
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                                 ? vlSelf->top__DOT__d_cache_io_to_axi_awaddr
                                                                                 : 0U)))))), (QData)((IData)(
                                                                                ((0U 
                                                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_3456)
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_3456)
                                                                                 : 0U))
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_3456)
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_3456)
                                                                                 : 0U)))))), 
                                                               ((0U 
                                                                 == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                 ? 
                                                                ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                                                  ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wstrb)
                                                                  : 
                                                                 ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                                   ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wstrb)
                                                                   : 0U))
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                  ? 0U
                                                                  : 
                                                                 ((2U 
                                                                   == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                   ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wstrb)
                                                                   : 
                                                                  ((3U 
                                                                    == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                    ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wstrb)
                                                                    : 0U)))));
    }
    if ((0x1aU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                    >> 3U))))) {
        top__DOT__d_cache__DOT___GEN_90 = vlSelf->top__DOT__d_cache__DOT__valid_0_26;
        top__DOT__d_cache__DOT___GEN_26 = vlSelf->top__DOT__d_cache__DOT__tag_0_26;
        top__DOT__d_cache__DOT___GEN_158 = vlSelf->top__DOT__d_cache__DOT__dirty_0_26;
        top__DOT__d_cache__DOT___GEN_224 = vlSelf->top__DOT__d_cache__DOT__ram_0_26;
    } else {
        top__DOT__d_cache__DOT___GEN_90 = ((0x19U == 
                                            (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U))))
                                            ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_25)
                                            : ((0x18U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                                ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_24)
                                                : (
                                                   (0x17U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_23)
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_22)
                                                     : 
                                                    ((0x15U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_21)
                                                      : 
                                                     ((0x14U 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_20)
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_19)
                                                        : 
                                                       ((0x12U 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_18)
                                                         : 
                                                        ((0x11U 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_17)
                                                          : 
                                                         ((0x10U 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_16)
                                                           : 
                                                          ((0xfU 
                                                            == 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                        >> 3U))))
                                                            ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_15)
                                                            : 
                                                           ((0xeU 
                                                             == 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                         >> 3U))))
                                                             ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_14)
                                                             : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_77)))))))))))));
        top__DOT__d_cache__DOT___GEN_26 = ((0x19U == 
                                            (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U))))
                                            ? vlSelf->top__DOT__d_cache__DOT__tag_0_25
                                            : ((0x18U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                                ? vlSelf->top__DOT__d_cache__DOT__tag_0_24
                                                : (
                                                   (0x17U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? vlSelf->top__DOT__d_cache__DOT__tag_0_23
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? vlSelf->top__DOT__d_cache__DOT__tag_0_22
                                                     : 
                                                    ((0x15U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? vlSelf->top__DOT__d_cache__DOT__tag_0_21
                                                      : 
                                                     ((0x14U 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? vlSelf->top__DOT__d_cache__DOT__tag_0_20
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? vlSelf->top__DOT__d_cache__DOT__tag_0_19
                                                        : 
                                                       ((0x12U 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? vlSelf->top__DOT__d_cache__DOT__tag_0_18
                                                         : 
                                                        ((0x11U 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_17
                                                          : 
                                                         ((0x10U 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? vlSelf->top__DOT__d_cache__DOT__tag_0_16
                                                           : 
                                                          ((0xfU 
                                                            == 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                        >> 3U))))
                                                            ? vlSelf->top__DOT__d_cache__DOT__tag_0_15
                                                            : 
                                                           ((0xeU 
                                                             == 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                         >> 3U))))
                                                             ? vlSelf->top__DOT__d_cache__DOT__tag_0_14
                                                             : vlSelf->top__DOT__d_cache__DOT___GEN_13))))))))))));
        top__DOT__d_cache__DOT___GEN_158 = ((0x19U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                             ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_25)
                                             : ((0x18U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_24)
                                                 : 
                                                ((0x17U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_23)
                                                  : 
                                                 ((0x16U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_22)
                                                   : 
                                                  ((0x15U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_21)
                                                    : 
                                                   ((0x14U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_20)
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_19)
                                                      : 
                                                     ((0x12U 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_18)
                                                       : 
                                                      ((0x11U 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_17)
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_16)
                                                         : 
                                                        ((0xfU 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)
                                                          : 
                                                         ((0xeU 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)
                                                           : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_145)))))))))))));
        top__DOT__d_cache__DOT___GEN_224 = ((0x19U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                             ? vlSelf->top__DOT__d_cache__DOT__ram_0_25
                                             : ((0x18U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                                 ? vlSelf->top__DOT__d_cache__DOT__ram_0_24
                                                 : 
                                                ((0x17U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? vlSelf->top__DOT__d_cache__DOT__ram_0_23
                                                  : 
                                                 ((0x16U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? vlSelf->top__DOT__d_cache__DOT__ram_0_22
                                                   : 
                                                  ((0x15U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_21
                                                    : 
                                                   ((0x14U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? vlSelf->top__DOT__d_cache__DOT__ram_0_20
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? vlSelf->top__DOT__d_cache__DOT__ram_0_19
                                                      : 
                                                     ((0x12U 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? vlSelf->top__DOT__d_cache__DOT__ram_0_18
                                                       : 
                                                      ((0x11U 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? vlSelf->top__DOT__d_cache__DOT__ram_0_17
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? vlSelf->top__DOT__d_cache__DOT__ram_0_16
                                                         : 
                                                        ((0xfU 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_15
                                                          : 
                                                         ((0xeU 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? vlSelf->top__DOT__d_cache__DOT__ram_0_14
                                                           : vlSelf->top__DOT__d_cache__DOT___GEN_211))))))))))));
    }
    vlSelf->top__DOT__i_cache__DOT___GEN_521 = ((IData)(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid)
                                                 ? 
                                                ((0U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                                   ? 0ULL
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                    ? 0ULL
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                     ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                                                     : 0ULL)))
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                   ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                                                   : 0ULL))
                                                 : vlSelf->top__DOT__i_cache__DOT__receive_data);
    vlSelf->top__DOT__d_cache__DOT___GEN_2330 = ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                                     ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                      ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                                                      : 0ULL))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                     ? 0ULL
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                      ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                       ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                                                       : 0ULL))))
                                                   : vlSelf->top__DOT__d_cache__DOT__receive_data)
                                                  : vlSelf->top__DOT__d_cache__DOT__receive_data);
    if ((0x27U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                    >> 3U))))) {
        top__DOT__d_cache__DOT___GEN_103 = vlSelf->top__DOT__d_cache__DOT__valid_0_39;
        top__DOT__d_cache__DOT___GEN_39 = vlSelf->top__DOT__d_cache__DOT__tag_0_39;
        top__DOT__d_cache__DOT___GEN_171 = vlSelf->top__DOT__d_cache__DOT__dirty_0_39;
        top__DOT__d_cache__DOT___GEN_237 = vlSelf->top__DOT__d_cache__DOT__ram_0_39;
    } else {
        top__DOT__d_cache__DOT___GEN_103 = ((0x26U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                             ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_38)
                                             : ((0x25U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_37)
                                                 : 
                                                ((0x24U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_36)
                                                  : 
                                                 ((0x23U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_35)
                                                   : 
                                                  ((0x22U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_34)
                                                    : 
                                                   ((0x21U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_33)
                                                     : 
                                                    ((0x20U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_32)
                                                      : 
                                                     ((0x1fU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_31)
                                                       : 
                                                      ((0x1eU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_30)
                                                        : 
                                                       ((0x1dU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_29)
                                                         : 
                                                        ((0x1cU 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_28)
                                                          : 
                                                         ((0x1bU 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_27)
                                                           : (IData)(top__DOT__d_cache__DOT___GEN_90)))))))))))));
        top__DOT__d_cache__DOT___GEN_39 = ((0x26U == 
                                            (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U))))
                                            ? vlSelf->top__DOT__d_cache__DOT__tag_0_38
                                            : ((0x25U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                                ? vlSelf->top__DOT__d_cache__DOT__tag_0_37
                                                : (
                                                   (0x24U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? vlSelf->top__DOT__d_cache__DOT__tag_0_36
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? vlSelf->top__DOT__d_cache__DOT__tag_0_35
                                                     : 
                                                    ((0x22U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? vlSelf->top__DOT__d_cache__DOT__tag_0_34
                                                      : 
                                                     ((0x21U 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? vlSelf->top__DOT__d_cache__DOT__tag_0_33
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? vlSelf->top__DOT__d_cache__DOT__tag_0_32
                                                        : 
                                                       ((0x1fU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? vlSelf->top__DOT__d_cache__DOT__tag_0_31
                                                         : 
                                                        ((0x1eU 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_30
                                                          : 
                                                         ((0x1dU 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? vlSelf->top__DOT__d_cache__DOT__tag_0_29
                                                           : 
                                                          ((0x1cU 
                                                            == 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                        >> 3U))))
                                                            ? vlSelf->top__DOT__d_cache__DOT__tag_0_28
                                                            : 
                                                           ((0x1bU 
                                                             == 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                         >> 3U))))
                                                             ? vlSelf->top__DOT__d_cache__DOT__tag_0_27
                                                             : top__DOT__d_cache__DOT___GEN_26))))))))))));
        top__DOT__d_cache__DOT___GEN_171 = ((0x26U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                             ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_38)
                                             : ((0x25U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_37)
                                                 : 
                                                ((0x24U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_36)
                                                  : 
                                                 ((0x23U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_35)
                                                   : 
                                                  ((0x22U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_34)
                                                    : 
                                                   ((0x21U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_33)
                                                     : 
                                                    ((0x20U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_32)
                                                      : 
                                                     ((0x1fU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_31)
                                                       : 
                                                      ((0x1eU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_30)
                                                        : 
                                                       ((0x1dU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_29)
                                                         : 
                                                        ((0x1cU 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_28)
                                                          : 
                                                         ((0x1bU 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_27)
                                                           : (IData)(top__DOT__d_cache__DOT___GEN_158)))))))))))));
        top__DOT__d_cache__DOT___GEN_237 = ((0x26U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                             ? vlSelf->top__DOT__d_cache__DOT__ram_0_38
                                             : ((0x25U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                                 ? vlSelf->top__DOT__d_cache__DOT__ram_0_37
                                                 : 
                                                ((0x24U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? vlSelf->top__DOT__d_cache__DOT__ram_0_36
                                                  : 
                                                 ((0x23U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? vlSelf->top__DOT__d_cache__DOT__ram_0_35
                                                   : 
                                                  ((0x22U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_34
                                                    : 
                                                   ((0x21U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? vlSelf->top__DOT__d_cache__DOT__ram_0_33
                                                     : 
                                                    ((0x20U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? vlSelf->top__DOT__d_cache__DOT__ram_0_32
                                                      : 
                                                     ((0x1fU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? vlSelf->top__DOT__d_cache__DOT__ram_0_31
                                                       : 
                                                      ((0x1eU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? vlSelf->top__DOT__d_cache__DOT__ram_0_30
                                                        : 
                                                       ((0x1dU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? vlSelf->top__DOT__d_cache__DOT__ram_0_29
                                                         : 
                                                        ((0x1cU 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_28
                                                          : 
                                                         ((0x1bU 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? vlSelf->top__DOT__d_cache__DOT__ram_0_27
                                                           : top__DOT__d_cache__DOT___GEN_224))))))))))));
    }
    if ((0x34U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                    >> 3U))))) {
        top__DOT__d_cache__DOT___GEN_116 = vlSelf->top__DOT__d_cache__DOT__valid_0_52;
        top__DOT__d_cache__DOT___GEN_52 = vlSelf->top__DOT__d_cache__DOT__tag_0_52;
        top__DOT__d_cache__DOT___GEN_184 = vlSelf->top__DOT__d_cache__DOT__dirty_0_52;
        top__DOT__d_cache__DOT___GEN_250 = vlSelf->top__DOT__d_cache__DOT__ram_0_52;
    } else {
        top__DOT__d_cache__DOT___GEN_116 = ((0x33U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                             ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_51)
                                             : ((0x32U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_50)
                                                 : 
                                                ((0x31U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_49)
                                                  : 
                                                 ((0x30U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_48)
                                                   : 
                                                  ((0x2fU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_47)
                                                    : 
                                                   ((0x2eU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_46)
                                                     : 
                                                    ((0x2dU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_45)
                                                      : 
                                                     ((0x2cU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_44)
                                                       : 
                                                      ((0x2bU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_43)
                                                        : 
                                                       ((0x2aU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_42)
                                                         : 
                                                        ((0x29U 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_41)
                                                          : 
                                                         ((0x28U 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_40)
                                                           : (IData)(top__DOT__d_cache__DOT___GEN_103)))))))))))));
        top__DOT__d_cache__DOT___GEN_52 = ((0x33U == 
                                            (0x3fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U))))
                                            ? vlSelf->top__DOT__d_cache__DOT__tag_0_51
                                            : ((0x32U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                                ? vlSelf->top__DOT__d_cache__DOT__tag_0_50
                                                : (
                                                   (0x31U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? vlSelf->top__DOT__d_cache__DOT__tag_0_49
                                                    : 
                                                   ((0x30U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? vlSelf->top__DOT__d_cache__DOT__tag_0_48
                                                     : 
                                                    ((0x2fU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? vlSelf->top__DOT__d_cache__DOT__tag_0_47
                                                      : 
                                                     ((0x2eU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? vlSelf->top__DOT__d_cache__DOT__tag_0_46
                                                       : 
                                                      ((0x2dU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? vlSelf->top__DOT__d_cache__DOT__tag_0_45
                                                        : 
                                                       ((0x2cU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? vlSelf->top__DOT__d_cache__DOT__tag_0_44
                                                         : 
                                                        ((0x2bU 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_43
                                                          : 
                                                         ((0x2aU 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? vlSelf->top__DOT__d_cache__DOT__tag_0_42
                                                           : 
                                                          ((0x29U 
                                                            == 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                        >> 3U))))
                                                            ? vlSelf->top__DOT__d_cache__DOT__tag_0_41
                                                            : 
                                                           ((0x28U 
                                                             == 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                         >> 3U))))
                                                             ? vlSelf->top__DOT__d_cache__DOT__tag_0_40
                                                             : top__DOT__d_cache__DOT___GEN_39))))))))))));
        top__DOT__d_cache__DOT___GEN_184 = ((0x33U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                             ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_51)
                                             : ((0x32U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_50)
                                                 : 
                                                ((0x31U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_49)
                                                  : 
                                                 ((0x30U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_48)
                                                   : 
                                                  ((0x2fU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_47)
                                                    : 
                                                   ((0x2eU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_46)
                                                     : 
                                                    ((0x2dU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_45)
                                                      : 
                                                     ((0x2cU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_44)
                                                       : 
                                                      ((0x2bU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_43)
                                                        : 
                                                       ((0x2aU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_42)
                                                         : 
                                                        ((0x29U 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_41)
                                                          : 
                                                         ((0x28U 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_40)
                                                           : (IData)(top__DOT__d_cache__DOT___GEN_171)))))))))))));
        top__DOT__d_cache__DOT___GEN_250 = ((0x33U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                             ? vlSelf->top__DOT__d_cache__DOT__ram_0_51
                                             : ((0x32U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                                 ? vlSelf->top__DOT__d_cache__DOT__ram_0_50
                                                 : 
                                                ((0x31U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? vlSelf->top__DOT__d_cache__DOT__ram_0_49
                                                  : 
                                                 ((0x30U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? vlSelf->top__DOT__d_cache__DOT__ram_0_48
                                                   : 
                                                  ((0x2fU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_47
                                                    : 
                                                   ((0x2eU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? vlSelf->top__DOT__d_cache__DOT__ram_0_46
                                                     : 
                                                    ((0x2dU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? vlSelf->top__DOT__d_cache__DOT__ram_0_45
                                                      : 
                                                     ((0x2cU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? vlSelf->top__DOT__d_cache__DOT__ram_0_44
                                                       : 
                                                      ((0x2bU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? vlSelf->top__DOT__d_cache__DOT__ram_0_43
                                                        : 
                                                       ((0x2aU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? vlSelf->top__DOT__d_cache__DOT__ram_0_42
                                                         : 
                                                        ((0x29U 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_41
                                                          : 
                                                         ((0x28U 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? vlSelf->top__DOT__d_cache__DOT__ram_0_40
                                                           : top__DOT__d_cache__DOT___GEN_237))))))))))));
    }
    if ((0x3fU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                    >> 3U))))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_127 = vlSelf->top__DOT__d_cache__DOT__valid_0_63;
        vlSelf->top__DOT__d_cache__DOT___GEN_63 = vlSelf->top__DOT__d_cache__DOT__tag_0_63;
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_127 = 
            ((0x3eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_62)
              : ((0x3dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_61)
                  : ((0x3cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_60)
                      : ((0x3bU == (0x3fU & (IData)(
                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                     >> 3U))))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_59)
                          : ((0x3aU == (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U))))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_58)
                              : ((0x39U == (0x3fU & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_57)
                                  : ((0x38U == (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U))))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_56)
                                      : ((0x37U == 
                                          (0x3fU & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_55)
                                          : ((0x36U 
                                              == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_54)
                                              : ((0x35U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_53)
                                                  : (IData)(top__DOT__d_cache__DOT___GEN_116)))))))))));
        vlSelf->top__DOT__d_cache__DOT___GEN_63 = (
                                                   (0x3eU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? vlSelf->top__DOT__d_cache__DOT__tag_0_62
                                                    : 
                                                   ((0x3dU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? vlSelf->top__DOT__d_cache__DOT__tag_0_61
                                                     : 
                                                    ((0x3cU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? vlSelf->top__DOT__d_cache__DOT__tag_0_60
                                                      : 
                                                     ((0x3bU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? vlSelf->top__DOT__d_cache__DOT__tag_0_59
                                                       : 
                                                      ((0x3aU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? vlSelf->top__DOT__d_cache__DOT__tag_0_58
                                                        : 
                                                       ((0x39U 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? vlSelf->top__DOT__d_cache__DOT__tag_0_57
                                                         : 
                                                        ((0x38U 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_56
                                                          : 
                                                         ((0x37U 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                       >> 3U))))
                                                           ? vlSelf->top__DOT__d_cache__DOT__tag_0_55
                                                           : 
                                                          ((0x36U 
                                                            == 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                        >> 3U))))
                                                            ? vlSelf->top__DOT__d_cache__DOT__tag_0_54
                                                            : 
                                                           ((0x35U 
                                                             == 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                         >> 3U))))
                                                             ? vlSelf->top__DOT__d_cache__DOT__tag_0_53
                                                             : top__DOT__d_cache__DOT___GEN_52))))))))));
    }
    vlSelf->top__DOT__d_cache__DOT___GEN_194 = ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_62)
                                                 : 
                                                ((0x3dU 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_61)
                                                  : 
                                                 ((0x3cU 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                               >> 3U))))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_60)
                                                   : 
                                                  ((0x3bU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_59)
                                                    : 
                                                   ((0x3aU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_58)
                                                     : 
                                                    ((0x39U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_57)
                                                      : 
                                                     ((0x38U 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                   >> 3U))))
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_56)
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                    >> 3U))))
                                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_55)
                                                        : 
                                                       ((0x36U 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                     >> 3U))))
                                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_54)
                                                         : 
                                                        ((0x35U 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                      >> 3U))))
                                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_53)
                                                          : (IData)(top__DOT__d_cache__DOT___GEN_184)))))))))));
    if ((0x3fU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                    >> 3U))))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_261 = vlSelf->top__DOT__d_cache__DOT__ram_0_63;
        vlSelf->top__DOT__d_cache__DOT___GEN_195 = vlSelf->top__DOT__d_cache__DOT__dirty_0_63;
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_261 = 
            ((0x3eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? vlSelf->top__DOT__d_cache__DOT__ram_0_62
              : ((0x3dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? vlSelf->top__DOT__d_cache__DOT__ram_0_61
                  : ((0x3cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                                 >> 3U))))
                      ? vlSelf->top__DOT__d_cache__DOT__ram_0_60
                      : ((0x3bU == (0x3fU & (IData)(
                                                    (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                     >> 3U))))
                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_59
                          : ((0x3aU == (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U))))
                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_58
                              : ((0x39U == (0x3fU & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                  ? vlSelf->top__DOT__d_cache__DOT__ram_0_57
                                  : ((0x38U == (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 3U))))
                                      ? vlSelf->top__DOT__d_cache__DOT__ram_0_56
                                      : ((0x37U == 
                                          (0x3fU & (IData)(
                                                           (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                            >> 3U))))
                                          ? vlSelf->top__DOT__d_cache__DOT__ram_0_55
                                          : ((0x36U 
                                              == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                             >> 3U))))
                                              ? vlSelf->top__DOT__d_cache__DOT__ram_0_54
                                              : ((0x35U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                              >> 3U))))
                                                  ? vlSelf->top__DOT__d_cache__DOT__ram_0_53
                                                  : top__DOT__d_cache__DOT___GEN_250))))))))));
        vlSelf->top__DOT__d_cache__DOT___GEN_195 = vlSelf->top__DOT__d_cache__DOT___GEN_194;
    }
    VL_EXTEND_WQ(127,64, __Vtemp100, ((QData)((IData)(vlSelf->top__DOT__exu_step_io_Mem_wdata)) 
                                      & vlSelf->top__DOT__d_cache__DOT__wmask));
    VL_SHIFTL_WWI(127,127,6, __Vtemp101, __Vtemp100, (IData)(vlSelf->top__DOT__d_cache__DOT__shift_bit));
    VL_EXTEND_WQ(127,64, __Vtemp102, vlSelf->top__DOT__d_cache__DOT___GEN_261);
    VL_EXTEND_WQ(127,64, __Vtemp103, vlSelf->top__DOT__d_cache__DOT__wmask);
    VL_SHIFTL_WWI(127,127,6, __Vtemp104, __Vtemp103, (IData)(vlSelf->top__DOT__d_cache__DOT__shift_bit));
    top__DOT__d_cache__DOT___ram_0_T_5[0U] = (__Vtemp101[0U] 
                                              | (__Vtemp102[0U] 
                                                 & (~ 
                                                    __Vtemp104[0U])));
    top__DOT__d_cache__DOT___ram_0_T_5[1U] = (__Vtemp101[1U] 
                                              | (__Vtemp102[1U] 
                                                 & (~ 
                                                    __Vtemp104[1U])));
    top__DOT__d_cache__DOT___ram_0_T_5[2U] = (__Vtemp101[2U] 
                                              | (__Vtemp102[2U] 
                                                 & (~ 
                                                    __Vtemp104[2U])));
    top__DOT__d_cache__DOT___ram_0_T_5[3U] = (0x7fffffffU 
                                              & (__Vtemp101[3U] 
                                                 | (__Vtemp102[3U] 
                                                    & (~ 
                                                       __Vtemp104[3U]))));
    vlSelf->top__DOT__d_cache_io_to_lsu_rdata = ((0U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? 0ULL
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                    ? 
                                                   (vlSelf->top__DOT__d_cache__DOT___GEN_261 
                                                    >> (IData)(vlSelf->top__DOT__d_cache__DOT__shift_bit))
                                                    : 0ULL)
                                                   : 0ULL));
    if ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_2329 = 
            ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
              ? 5U : (IData)(vlSelf->top__DOT__d_cache__DOT__state));
        vlSelf->top__DOT__d_cache__DOT___GEN_2523 = vlSelf->top__DOT__d_cache__DOT__write_back_data;
        vlSelf->top__DOT__d_cache__DOT___GEN_2525 = vlSelf->top__DOT__d_cache__DOT__dirty_0_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_2526 = vlSelf->top__DOT__d_cache__DOT__dirty_0_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_2527 = vlSelf->top__DOT__d_cache__DOT__dirty_0_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_2528 = vlSelf->top__DOT__d_cache__DOT__dirty_0_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_2529 = vlSelf->top__DOT__d_cache__DOT__dirty_0_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_2530 = vlSelf->top__DOT__d_cache__DOT__dirty_0_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_2531 = vlSelf->top__DOT__d_cache__DOT__dirty_0_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_2532 = vlSelf->top__DOT__d_cache__DOT__dirty_0_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_2533 = vlSelf->top__DOT__d_cache__DOT__dirty_0_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_2534 = vlSelf->top__DOT__d_cache__DOT__dirty_0_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_2535 = vlSelf->top__DOT__d_cache__DOT__dirty_0_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_2536 = vlSelf->top__DOT__d_cache__DOT__dirty_0_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_2537 = vlSelf->top__DOT__d_cache__DOT__dirty_0_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_2538 = vlSelf->top__DOT__d_cache__DOT__dirty_0_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_2539 = vlSelf->top__DOT__d_cache__DOT__dirty_0_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_2540 = vlSelf->top__DOT__d_cache__DOT__dirty_0_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_2541 = vlSelf->top__DOT__d_cache__DOT__dirty_0_16;
        vlSelf->top__DOT__d_cache__DOT___GEN_2542 = vlSelf->top__DOT__d_cache__DOT__dirty_0_17;
        vlSelf->top__DOT__d_cache__DOT___GEN_2543 = vlSelf->top__DOT__d_cache__DOT__dirty_0_18;
        vlSelf->top__DOT__d_cache__DOT___GEN_2544 = vlSelf->top__DOT__d_cache__DOT__dirty_0_19;
        vlSelf->top__DOT__d_cache__DOT___GEN_2545 = vlSelf->top__DOT__d_cache__DOT__dirty_0_20;
        vlSelf->top__DOT__d_cache__DOT___GEN_2546 = vlSelf->top__DOT__d_cache__DOT__dirty_0_21;
        vlSelf->top__DOT__d_cache__DOT___GEN_2547 = vlSelf->top__DOT__d_cache__DOT__dirty_0_22;
        vlSelf->top__DOT__d_cache__DOT___GEN_2548 = vlSelf->top__DOT__d_cache__DOT__dirty_0_23;
        vlSelf->top__DOT__d_cache__DOT___GEN_2549 = vlSelf->top__DOT__d_cache__DOT__dirty_0_24;
        vlSelf->top__DOT__d_cache__DOT___GEN_2550 = vlSelf->top__DOT__d_cache__DOT__dirty_0_25;
        vlSelf->top__DOT__d_cache__DOT___GEN_2551 = vlSelf->top__DOT__d_cache__DOT__dirty_0_26;
        vlSelf->top__DOT__d_cache__DOT___GEN_2552 = vlSelf->top__DOT__d_cache__DOT__dirty_0_27;
        vlSelf->top__DOT__d_cache__DOT___GEN_2553 = vlSelf->top__DOT__d_cache__DOT__dirty_0_28;
        vlSelf->top__DOT__d_cache__DOT___GEN_2554 = vlSelf->top__DOT__d_cache__DOT__dirty_0_29;
        vlSelf->top__DOT__d_cache__DOT___GEN_2555 = vlSelf->top__DOT__d_cache__DOT__dirty_0_30;
        vlSelf->top__DOT__d_cache__DOT___GEN_2556 = vlSelf->top__DOT__d_cache__DOT__dirty_0_31;
        vlSelf->top__DOT__d_cache__DOT___GEN_2557 = vlSelf->top__DOT__d_cache__DOT__dirty_0_32;
        vlSelf->top__DOT__d_cache__DOT___GEN_2558 = vlSelf->top__DOT__d_cache__DOT__dirty_0_33;
        vlSelf->top__DOT__d_cache__DOT___GEN_2559 = vlSelf->top__DOT__d_cache__DOT__dirty_0_34;
        vlSelf->top__DOT__d_cache__DOT___GEN_2560 = vlSelf->top__DOT__d_cache__DOT__dirty_0_35;
        vlSelf->top__DOT__d_cache__DOT___GEN_2561 = vlSelf->top__DOT__d_cache__DOT__dirty_0_36;
        vlSelf->top__DOT__d_cache__DOT___GEN_2562 = vlSelf->top__DOT__d_cache__DOT__dirty_0_37;
        vlSelf->top__DOT__d_cache__DOT___GEN_2563 = vlSelf->top__DOT__d_cache__DOT__dirty_0_38;
        vlSelf->top__DOT__d_cache__DOT___GEN_2564 = vlSelf->top__DOT__d_cache__DOT__dirty_0_39;
        vlSelf->top__DOT__d_cache__DOT___GEN_2565 = vlSelf->top__DOT__d_cache__DOT__dirty_0_40;
        vlSelf->top__DOT__d_cache__DOT___GEN_2566 = vlSelf->top__DOT__d_cache__DOT__dirty_0_41;
        vlSelf->top__DOT__d_cache__DOT___GEN_2567 = vlSelf->top__DOT__d_cache__DOT__dirty_0_42;
        vlSelf->top__DOT__d_cache__DOT___GEN_2568 = vlSelf->top__DOT__d_cache__DOT__dirty_0_43;
        vlSelf->top__DOT__d_cache__DOT___GEN_2569 = vlSelf->top__DOT__d_cache__DOT__dirty_0_44;
        vlSelf->top__DOT__d_cache__DOT___GEN_2570 = vlSelf->top__DOT__d_cache__DOT__dirty_0_45;
        vlSelf->top__DOT__d_cache__DOT___GEN_2571 = vlSelf->top__DOT__d_cache__DOT__dirty_0_46;
        vlSelf->top__DOT__d_cache__DOT___GEN_2572 = vlSelf->top__DOT__d_cache__DOT__dirty_0_47;
        vlSelf->top__DOT__d_cache__DOT___GEN_2573 = vlSelf->top__DOT__d_cache__DOT__dirty_0_48;
        vlSelf->top__DOT__d_cache__DOT___GEN_2574 = vlSelf->top__DOT__d_cache__DOT__dirty_0_49;
        vlSelf->top__DOT__d_cache__DOT___GEN_2575 = vlSelf->top__DOT__d_cache__DOT__dirty_0_50;
        vlSelf->top__DOT__d_cache__DOT___GEN_2576 = vlSelf->top__DOT__d_cache__DOT__dirty_0_51;
        vlSelf->top__DOT__d_cache__DOT___GEN_2577 = vlSelf->top__DOT__d_cache__DOT__dirty_0_52;
        vlSelf->top__DOT__d_cache__DOT___GEN_2578 = vlSelf->top__DOT__d_cache__DOT__dirty_0_53;
        vlSelf->top__DOT__d_cache__DOT___GEN_2579 = vlSelf->top__DOT__d_cache__DOT__dirty_0_54;
        vlSelf->top__DOT__d_cache__DOT___GEN_2580 = vlSelf->top__DOT__d_cache__DOT__dirty_0_55;
        vlSelf->top__DOT__d_cache__DOT___GEN_2581 = vlSelf->top__DOT__d_cache__DOT__dirty_0_56;
        vlSelf->top__DOT__d_cache__DOT___GEN_2582 = vlSelf->top__DOT__d_cache__DOT__dirty_0_57;
        vlSelf->top__DOT__d_cache__DOT___GEN_2583 = vlSelf->top__DOT__d_cache__DOT__dirty_0_58;
        vlSelf->top__DOT__d_cache__DOT___GEN_2584 = vlSelf->top__DOT__d_cache__DOT__dirty_0_59;
        vlSelf->top__DOT__d_cache__DOT___GEN_2585 = vlSelf->top__DOT__d_cache__DOT__dirty_0_60;
        vlSelf->top__DOT__d_cache__DOT___GEN_2586 = vlSelf->top__DOT__d_cache__DOT__dirty_0_61;
        vlSelf->top__DOT__d_cache__DOT___GEN_2587 = vlSelf->top__DOT__d_cache__DOT__dirty_0_62;
        vlSelf->top__DOT__d_cache__DOT___GEN_2588 = vlSelf->top__DOT__d_cache__DOT__dirty_0_63;
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_2329 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid)
                  ? 0U : (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? 7U : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                               ? 6U : 7U)) : ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                               ? ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid)
                                                   ? 7U
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                               : ((7U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? 1U
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__state)))));
        vlSelf->top__DOT__d_cache__DOT___GEN_2523 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__write_back_data
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__write_back_data
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_261
                          : vlSelf->top__DOT__d_cache__DOT__write_back_data))
                  : vlSelf->top__DOT__d_cache__DOT__write_back_data));
        vlSelf->top__DOT__d_cache__DOT___GEN_2525 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0U != (0x3fU & (IData)(
                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                      >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2526 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((1U != (0x3fU & (IData)(
                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                      >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2527 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((2U != (0x3fU & (IData)(
                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                      >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2528 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((3U != (0x3fU & (IData)(
                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                      >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2529 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((4U != (0x3fU & (IData)(
                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                      >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2530 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((5U != (0x3fU & (IData)(
                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                      >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2531 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((6U != (0x3fU & (IData)(
                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                      >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2532 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((7U != (0x3fU & (IData)(
                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                      >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2533 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((8U != (0x3fU & (IData)(
                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                      >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2534 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((9U != (0x3fU & (IData)(
                                                     (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                      >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2535 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0xaU != (0x3fU & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2536 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0xbU != (0x3fU & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2537 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0xcU != (0x3fU & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2538 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0xdU != (0x3fU & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2539 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0xeU != (0x3fU & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2540 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0xfU != (0x3fU & (IData)(
                                                       (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                        >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2541 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_16)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_16)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x10U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_16))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_16)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_16)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2542 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_17)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_17)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x11U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_17))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_17)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_17)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2543 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_18)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_18)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x12U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_18))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_18)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_18)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2544 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_19)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_19)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x13U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_19))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_19)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_19)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2545 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_20)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_20)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x14U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_20))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_20)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_20)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2546 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_21)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_21)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x15U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_21))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_21)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_21)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2547 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_22)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_22)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x16U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_22))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_22)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_22)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2548 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_23)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_23)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x17U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_23))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_23)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_23)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2549 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_24)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_24)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x18U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_24))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_24)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_24)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2550 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_25)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_25)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x19U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_25))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_25)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_25)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2551 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_26)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_26)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x1aU != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_26))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_26)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_26)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2552 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_27)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_27)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x1bU != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_27))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_27)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_27)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2553 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_28)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_28)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x1cU != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_28))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_28)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_28)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2554 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_29)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_29)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x1dU != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_29))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_29)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_29)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2555 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_30)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_30)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x1eU != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_30))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_30)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_30)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2556 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_31)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_31)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x1fU != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_31))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_31)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_31)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2557 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_32)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_32)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x20U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_32))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_32)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_32)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2558 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_33)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_33)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x21U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_33))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_33)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_33)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2559 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_34)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_34)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x22U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_34))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_34)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_34)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2560 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_35)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_35)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x23U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_35))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_35)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_35)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2561 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_36)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_36)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x24U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_36))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_36)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_36)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2562 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_37)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_37)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x25U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_37))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_37)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_37)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2563 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_38)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_38)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x26U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_38))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_38)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_38)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2564 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_39)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_39)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x27U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_39))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_39)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_39)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2565 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_40)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_40)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x28U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_40))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_40)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_40)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2566 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_41)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_41)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x29U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_41))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_41)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_41)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2567 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_42)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_42)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x2aU != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_42))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_42)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_42)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2568 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_43)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_43)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x2bU != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_43))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_43)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_43)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2569 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_44)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_44)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x2cU != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_44))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_44)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_44)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2570 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_45)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_45)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x2dU != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_45))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_45)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_45)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2571 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_46)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_46)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x2eU != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_46))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_46)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_46)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2572 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_47)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_47)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x2fU != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_47))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_47)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_47)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2573 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_48)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_48)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x30U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_48))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_48)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_48)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2574 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_49)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_49)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x31U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_49))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_49)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_49)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2575 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_50)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_50)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x32U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_50))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_50)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_50)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2576 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_51)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_51)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x33U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_51))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_51)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_51)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2577 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_52)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_52)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x34U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_52))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_52)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_52)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2578 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_53)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_53)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x35U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_53))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_53)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_53)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2579 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_54)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_54)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x36U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_54))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_54)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_54)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2580 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_55)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_55)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x37U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_55))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_55)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_55)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2581 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_56)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_56)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x38U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_56))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_56)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_56)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2582 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_57)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_57)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x39U != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_57))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_57)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_57)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2583 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_58)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_58)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x3aU != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_58))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_58)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_58)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2584 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_59)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_59)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x3bU != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_59))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_59)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_59)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2585 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_60)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_60)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x3cU != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_60))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_60)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_60)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2586 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_61)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_61)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x3dU != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_61))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_61)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_61)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2587 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_62)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_62)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x3eU != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_62))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_62)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_62)));
        vlSelf->top__DOT__d_cache__DOT___GEN_2588 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_63)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_63)
                      : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                          ? ((0x3fU != (0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                         >> 3U)))) 
                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_63))
                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_63)))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_63)));
    }
    if (vlSelf->top__DOT__d_cache__DOT__way0_hit) {
        vlSelf->top__DOT__d_cache__DOT___GEN_455 = 
            ((0U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_0);
        vlSelf->top__DOT__d_cache__DOT___GEN_456 = 
            ((1U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_1);
        vlSelf->top__DOT__d_cache__DOT___GEN_457 = 
            ((2U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_2);
        vlSelf->top__DOT__d_cache__DOT___GEN_458 = 
            ((3U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_3);
        vlSelf->top__DOT__d_cache__DOT___GEN_459 = 
            ((4U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_4);
        vlSelf->top__DOT__d_cache__DOT___GEN_460 = 
            ((5U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_5);
        vlSelf->top__DOT__d_cache__DOT___GEN_461 = 
            ((6U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_6);
        vlSelf->top__DOT__d_cache__DOT___GEN_462 = 
            ((7U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_7);
        vlSelf->top__DOT__d_cache__DOT___GEN_463 = 
            ((8U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_8);
        vlSelf->top__DOT__d_cache__DOT___GEN_464 = 
            ((9U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                      >> 3U)))) ? (
                                                   ((QData)((IData)(
                                                                    top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_9);
        vlSelf->top__DOT__d_cache__DOT___GEN_465 = 
            ((0xaU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                        >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_10);
        vlSelf->top__DOT__d_cache__DOT___GEN_466 = 
            ((0xbU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                        >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_11);
        vlSelf->top__DOT__d_cache__DOT___GEN_467 = 
            ((0xcU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                        >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_12);
        vlSelf->top__DOT__d_cache__DOT___GEN_468 = 
            ((0xdU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                        >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_13);
        vlSelf->top__DOT__d_cache__DOT___GEN_469 = 
            ((0xeU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                        >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_14);
        vlSelf->top__DOT__d_cache__DOT___GEN_470 = 
            ((0xfU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                        >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_15);
        vlSelf->top__DOT__d_cache__DOT___GEN_471 = 
            ((0x10U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_16);
        vlSelf->top__DOT__d_cache__DOT___GEN_472 = 
            ((0x11U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_17);
        vlSelf->top__DOT__d_cache__DOT___GEN_473 = 
            ((0x12U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_18);
        vlSelf->top__DOT__d_cache__DOT___GEN_474 = 
            ((0x13U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_19);
        vlSelf->top__DOT__d_cache__DOT___GEN_475 = 
            ((0x14U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_20);
        vlSelf->top__DOT__d_cache__DOT___GEN_476 = 
            ((0x15U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_21);
        vlSelf->top__DOT__d_cache__DOT___GEN_477 = 
            ((0x16U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_22);
        vlSelf->top__DOT__d_cache__DOT___GEN_478 = 
            ((0x17U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_23);
        vlSelf->top__DOT__d_cache__DOT___GEN_479 = 
            ((0x18U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_24);
        vlSelf->top__DOT__d_cache__DOT___GEN_480 = 
            ((0x19U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_25);
        vlSelf->top__DOT__d_cache__DOT___GEN_481 = 
            ((0x1aU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_26);
        vlSelf->top__DOT__d_cache__DOT___GEN_482 = 
            ((0x1bU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_27);
        vlSelf->top__DOT__d_cache__DOT___GEN_483 = 
            ((0x1cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_28);
        vlSelf->top__DOT__d_cache__DOT___GEN_484 = 
            ((0x1dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_29);
        vlSelf->top__DOT__d_cache__DOT___GEN_485 = 
            ((0x1eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_30);
        vlSelf->top__DOT__d_cache__DOT___GEN_486 = 
            ((0x1fU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_31);
        vlSelf->top__DOT__d_cache__DOT___GEN_487 = 
            ((0x20U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_32);
        vlSelf->top__DOT__d_cache__DOT___GEN_488 = 
            ((0x21U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_33);
        vlSelf->top__DOT__d_cache__DOT___GEN_489 = 
            ((0x22U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_34);
        vlSelf->top__DOT__d_cache__DOT___GEN_490 = 
            ((0x23U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_35);
        vlSelf->top__DOT__d_cache__DOT___GEN_491 = 
            ((0x24U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_36);
        vlSelf->top__DOT__d_cache__DOT___GEN_492 = 
            ((0x25U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_37);
        vlSelf->top__DOT__d_cache__DOT___GEN_493 = 
            ((0x26U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_38);
        vlSelf->top__DOT__d_cache__DOT___GEN_494 = 
            ((0x27U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_39);
        vlSelf->top__DOT__d_cache__DOT___GEN_495 = 
            ((0x28U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_40);
        vlSelf->top__DOT__d_cache__DOT___GEN_496 = 
            ((0x29U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_41);
        vlSelf->top__DOT__d_cache__DOT___GEN_497 = 
            ((0x2aU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_42);
        vlSelf->top__DOT__d_cache__DOT___GEN_498 = 
            ((0x2bU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_43);
        vlSelf->top__DOT__d_cache__DOT___GEN_499 = 
            ((0x2cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_44);
        vlSelf->top__DOT__d_cache__DOT___GEN_500 = 
            ((0x2dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_45);
        vlSelf->top__DOT__d_cache__DOT___GEN_501 = 
            ((0x2eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_46);
        vlSelf->top__DOT__d_cache__DOT___GEN_502 = 
            ((0x2fU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_47);
        vlSelf->top__DOT__d_cache__DOT___GEN_503 = 
            ((0x30U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_48);
        vlSelf->top__DOT__d_cache__DOT___GEN_504 = 
            ((0x31U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_49);
        vlSelf->top__DOT__d_cache__DOT___GEN_505 = 
            ((0x32U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_50);
        vlSelf->top__DOT__d_cache__DOT___GEN_506 = 
            ((0x33U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_51);
        vlSelf->top__DOT__d_cache__DOT___GEN_507 = 
            ((0x34U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_52);
        vlSelf->top__DOT__d_cache__DOT___GEN_508 = 
            ((0x35U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_53);
        vlSelf->top__DOT__d_cache__DOT___GEN_509 = 
            ((0x36U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_54);
        vlSelf->top__DOT__d_cache__DOT___GEN_510 = 
            ((0x37U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_55);
        vlSelf->top__DOT__d_cache__DOT___GEN_511 = 
            ((0x38U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_56);
        vlSelf->top__DOT__d_cache__DOT___GEN_512 = 
            ((0x39U == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_57);
        vlSelf->top__DOT__d_cache__DOT___GEN_513 = 
            ((0x3aU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_58);
        vlSelf->top__DOT__d_cache__DOT___GEN_514 = 
            ((0x3bU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_59);
        vlSelf->top__DOT__d_cache__DOT___GEN_515 = 
            ((0x3cU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_60);
        vlSelf->top__DOT__d_cache__DOT___GEN_516 = 
            ((0x3dU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_61);
        vlSelf->top__DOT__d_cache__DOT___GEN_517 = 
            ((0x3eU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_62);
        vlSelf->top__DOT__d_cache__DOT___GEN_518 = 
            ((0x3fU == (0x3fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                         >> 3U)))) ? 
             (((QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[1U])) 
               << 0x20U) | (QData)((IData)(top__DOT__d_cache__DOT___ram_0_T_5[0U])))
              : vlSelf->top__DOT__d_cache__DOT__ram_0_63);
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_455 = vlSelf->top__DOT__d_cache__DOT__ram_0_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_456 = vlSelf->top__DOT__d_cache__DOT__ram_0_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_457 = vlSelf->top__DOT__d_cache__DOT__ram_0_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_458 = vlSelf->top__DOT__d_cache__DOT__ram_0_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_459 = vlSelf->top__DOT__d_cache__DOT__ram_0_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_460 = vlSelf->top__DOT__d_cache__DOT__ram_0_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_461 = vlSelf->top__DOT__d_cache__DOT__ram_0_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_462 = vlSelf->top__DOT__d_cache__DOT__ram_0_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_463 = vlSelf->top__DOT__d_cache__DOT__ram_0_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_464 = vlSelf->top__DOT__d_cache__DOT__ram_0_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_465 = vlSelf->top__DOT__d_cache__DOT__ram_0_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_466 = vlSelf->top__DOT__d_cache__DOT__ram_0_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_467 = vlSelf->top__DOT__d_cache__DOT__ram_0_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_468 = vlSelf->top__DOT__d_cache__DOT__ram_0_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_469 = vlSelf->top__DOT__d_cache__DOT__ram_0_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_470 = vlSelf->top__DOT__d_cache__DOT__ram_0_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_471 = vlSelf->top__DOT__d_cache__DOT__ram_0_16;
        vlSelf->top__DOT__d_cache__DOT___GEN_472 = vlSelf->top__DOT__d_cache__DOT__ram_0_17;
        vlSelf->top__DOT__d_cache__DOT___GEN_473 = vlSelf->top__DOT__d_cache__DOT__ram_0_18;
        vlSelf->top__DOT__d_cache__DOT___GEN_474 = vlSelf->top__DOT__d_cache__DOT__ram_0_19;
        vlSelf->top__DOT__d_cache__DOT___GEN_475 = vlSelf->top__DOT__d_cache__DOT__ram_0_20;
        vlSelf->top__DOT__d_cache__DOT___GEN_476 = vlSelf->top__DOT__d_cache__DOT__ram_0_21;
        vlSelf->top__DOT__d_cache__DOT___GEN_477 = vlSelf->top__DOT__d_cache__DOT__ram_0_22;
        vlSelf->top__DOT__d_cache__DOT___GEN_478 = vlSelf->top__DOT__d_cache__DOT__ram_0_23;
        vlSelf->top__DOT__d_cache__DOT___GEN_479 = vlSelf->top__DOT__d_cache__DOT__ram_0_24;
        vlSelf->top__DOT__d_cache__DOT___GEN_480 = vlSelf->top__DOT__d_cache__DOT__ram_0_25;
        vlSelf->top__DOT__d_cache__DOT___GEN_481 = vlSelf->top__DOT__d_cache__DOT__ram_0_26;
        vlSelf->top__DOT__d_cache__DOT___GEN_482 = vlSelf->top__DOT__d_cache__DOT__ram_0_27;
        vlSelf->top__DOT__d_cache__DOT___GEN_483 = vlSelf->top__DOT__d_cache__DOT__ram_0_28;
        vlSelf->top__DOT__d_cache__DOT___GEN_484 = vlSelf->top__DOT__d_cache__DOT__ram_0_29;
        vlSelf->top__DOT__d_cache__DOT___GEN_485 = vlSelf->top__DOT__d_cache__DOT__ram_0_30;
        vlSelf->top__DOT__d_cache__DOT___GEN_486 = vlSelf->top__DOT__d_cache__DOT__ram_0_31;
        vlSelf->top__DOT__d_cache__DOT___GEN_487 = vlSelf->top__DOT__d_cache__DOT__ram_0_32;
        vlSelf->top__DOT__d_cache__DOT___GEN_488 = vlSelf->top__DOT__d_cache__DOT__ram_0_33;
        vlSelf->top__DOT__d_cache__DOT___GEN_489 = vlSelf->top__DOT__d_cache__DOT__ram_0_34;
        vlSelf->top__DOT__d_cache__DOT___GEN_490 = vlSelf->top__DOT__d_cache__DOT__ram_0_35;
        vlSelf->top__DOT__d_cache__DOT___GEN_491 = vlSelf->top__DOT__d_cache__DOT__ram_0_36;
        vlSelf->top__DOT__d_cache__DOT___GEN_492 = vlSelf->top__DOT__d_cache__DOT__ram_0_37;
        vlSelf->top__DOT__d_cache__DOT___GEN_493 = vlSelf->top__DOT__d_cache__DOT__ram_0_38;
        vlSelf->top__DOT__d_cache__DOT___GEN_494 = vlSelf->top__DOT__d_cache__DOT__ram_0_39;
        vlSelf->top__DOT__d_cache__DOT___GEN_495 = vlSelf->top__DOT__d_cache__DOT__ram_0_40;
        vlSelf->top__DOT__d_cache__DOT___GEN_496 = vlSelf->top__DOT__d_cache__DOT__ram_0_41;
        vlSelf->top__DOT__d_cache__DOT___GEN_497 = vlSelf->top__DOT__d_cache__DOT__ram_0_42;
        vlSelf->top__DOT__d_cache__DOT___GEN_498 = vlSelf->top__DOT__d_cache__DOT__ram_0_43;
        vlSelf->top__DOT__d_cache__DOT___GEN_499 = vlSelf->top__DOT__d_cache__DOT__ram_0_44;
        vlSelf->top__DOT__d_cache__DOT___GEN_500 = vlSelf->top__DOT__d_cache__DOT__ram_0_45;
        vlSelf->top__DOT__d_cache__DOT___GEN_501 = vlSelf->top__DOT__d_cache__DOT__ram_0_46;
        vlSelf->top__DOT__d_cache__DOT___GEN_502 = vlSelf->top__DOT__d_cache__DOT__ram_0_47;
        vlSelf->top__DOT__d_cache__DOT___GEN_503 = vlSelf->top__DOT__d_cache__DOT__ram_0_48;
        vlSelf->top__DOT__d_cache__DOT___GEN_504 = vlSelf->top__DOT__d_cache__DOT__ram_0_49;
        vlSelf->top__DOT__d_cache__DOT___GEN_505 = vlSelf->top__DOT__d_cache__DOT__ram_0_50;
        vlSelf->top__DOT__d_cache__DOT___GEN_506 = vlSelf->top__DOT__d_cache__DOT__ram_0_51;
        vlSelf->top__DOT__d_cache__DOT___GEN_507 = vlSelf->top__DOT__d_cache__DOT__ram_0_52;
        vlSelf->top__DOT__d_cache__DOT___GEN_508 = vlSelf->top__DOT__d_cache__DOT__ram_0_53;
        vlSelf->top__DOT__d_cache__DOT___GEN_509 = vlSelf->top__DOT__d_cache__DOT__ram_0_54;
        vlSelf->top__DOT__d_cache__DOT___GEN_510 = vlSelf->top__DOT__d_cache__DOT__ram_0_55;
        vlSelf->top__DOT__d_cache__DOT___GEN_511 = vlSelf->top__DOT__d_cache__DOT__ram_0_56;
        vlSelf->top__DOT__d_cache__DOT___GEN_512 = vlSelf->top__DOT__d_cache__DOT__ram_0_57;
        vlSelf->top__DOT__d_cache__DOT___GEN_513 = vlSelf->top__DOT__d_cache__DOT__ram_0_58;
        vlSelf->top__DOT__d_cache__DOT___GEN_514 = vlSelf->top__DOT__d_cache__DOT__ram_0_59;
        vlSelf->top__DOT__d_cache__DOT___GEN_515 = vlSelf->top__DOT__d_cache__DOT__ram_0_60;
        vlSelf->top__DOT__d_cache__DOT___GEN_516 = vlSelf->top__DOT__d_cache__DOT__ram_0_61;
        vlSelf->top__DOT__d_cache__DOT___GEN_517 = vlSelf->top__DOT__d_cache__DOT__ram_0_62;
        vlSelf->top__DOT__d_cache__DOT___GEN_518 = vlSelf->top__DOT__d_cache__DOT__ram_0_63;
    }
    top__DOT__exu_step__DOT___io_res2rd_T_132 = ((0x24U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 ((((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__d_cache_io_to_lsu_rdata 
                                                                >> 0xfU)))
                                                     ? 0xffffffffffffULL
                                                     : 0ULL) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->top__DOT__d_cache_io_to_lsu_rdata)))))
                                                  : 
                                                 ((0x3aU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? (QData)((IData)(vlSelf->top__DOT__d_cache_io_to_lsu_rdata))
                                                   : 
                                                  ((0x23U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->top__DOT__d_cache_io_to_lsu_rdata))))
                                                    : 
                                                   ((0x22U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? vlSelf->top__DOT__d_cache_io_to_lsu_rdata
                                                     : 
                                                    ((0x21U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__d_cache_io_to_lsu_rdata 
                                                                                >> 0x1fU)))
                                                                         ? 0xffffffffU
                                                                         : 0U))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->top__DOT__d_cache_io_to_lsu_rdata)))
                                                      : 
                                                     ((0x1fU 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_10))
                                                       : 
                                                      ((0x36U 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                        ? (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_10))
                                                        : 
                                                       ((0x1eU 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                         ? (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_4))
                                                         : 
                                                        ((0x20U 
                                                          == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                          ? (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_4))
                                                          : 
                                                         ((6U 
                                                           == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                           ? 
                                                          (4ULL 
                                                           + vlSelf->top__DOT__pc_now)
                                                           : 
                                                          ((5U 
                                                            == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                            ? 
                                                           (4ULL 
                                                            + vlSelf->top__DOT__pc_now)
                                                            : 
                                                           ((4U 
                                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                             ? vlSelf->top__DOT__idu_step_io_imm
                                                             : 
                                                            ((3U 
                                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                              ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                              : 
                                                             ((1U 
                                                               == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                               ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                               : 0ULL))))))))))))));
    top__DOT__exu_step__DOT___io_res2rd_T_162 = ((0x16U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_59
                                                  : 
                                                 ((0xdU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
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
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? vlSelf->top__DOT__exu_step__DOT__and_res
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? vlSelf->top__DOT__exu_step__DOT__and_res
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? vlSelf->top__DOT__exu_step__DOT__xor_res
                                                      : 
                                                     ((0x2eU 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? vlSelf->top__DOT__exu_step__DOT__xor_res
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                        ? vlSelf->top__DOT__exu_step__DOT__or_res
                                                        : 
                                                       ((0xbU 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                         ? vlSelf->top__DOT__exu_step__DOT__or_res
                                                         : 
                                                        ((0x15U 
                                                          == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                          ? vlSelf->top__DOT__exu_step__DOT__sra_res
                                                          : 
                                                         ((0xfU 
                                                           == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                           ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                           : 
                                                          ((0x10U 
                                                            == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                            ? vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_44
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                             ? vlSelf->top__DOT__exu_step__DOT__sub_res
                                                             : 
                                                            ((0xcU 
                                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                              ? vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_44
                                                              : 
                                                             ((0x25U 
                                                               == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                               ? (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->top__DOT__d_cache_io_to_lsu_rdata))))
                                                               : 
                                                              ((0x3bU 
                                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                                ? 
                                                               ((((1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__d_cache_io_to_lsu_rdata 
                                                                              >> 7U)))
                                                                   ? 0xffffffffffffffULL
                                                                   : 0ULL) 
                                                                 << 8U) 
                                                                | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->top__DOT__d_cache_io_to_lsu_rdata)))))
                                                                : top__DOT__exu_step__DOT___io_res2rd_T_132)))))))))))))));
    VL_EXTENDS_WQ(65,64, __Vtemp111, vlSelf->top__DOT__exu_step__DOT__src1_value);
    __Vtemp112[0U] = __Vtemp111[0U];
    __Vtemp112[1U] = __Vtemp111[1U];
    __Vtemp112[2U] = (1U & __Vtemp111[2U]);
    VL_EXTENDS_WQ(65,64, __Vtemp114, vlSelf->top__DOT__exu_step__DOT__src2_value);
    __Vtemp115[0U] = __Vtemp114[0U];
    __Vtemp115[1U] = __Vtemp114[1U];
    __Vtemp115[2U] = (1U & __Vtemp114[2U]);
    VL_DIVS_WWW(65, __Vtemp116, __Vtemp112, __Vtemp115);
    __Vtemp117[0U] = __Vtemp116[0U];
    __Vtemp117[1U] = __Vtemp116[1U];
    __Vtemp117[2U] = (1U & __Vtemp116[2U]);
    VL_EXTEND_WW(127,65, __Vtemp118, __Vtemp117);
    VL_EXTEND_WQ(127,64, __Vtemp119, VL_DIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value));
    VL_EXTEND_WQ(127,64, __Vtemp120, (((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT___divw_res_T_4 
                                                                    >> 0x1fU)))
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___divw_res_T_4))));
    VL_EXTEND_WQ(127,64, __Vtemp121, (((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2 
                                                                    >> 0x1fU)))
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2))));
    VL_EXTEND_WQ(128,64, __Vtemp122, vlSelf->top__DOT__exu_step__DOT__src1_value);
    VL_EXTEND_WQ(128,64, __Vtemp123, vlSelf->top__DOT__exu_step__DOT__src2_value);
    VL_MUL_W(4, __Vtemp124, __Vtemp122, __Vtemp123);
    VL_EXTEND_WQ(127,64, __Vtemp125, (((QData)((IData)(
                                                       __Vtemp124[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vtemp124[0U]))));
    VL_EXTEND_WQ(127,64, __Vtemp126, vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_74);
    VL_EXTEND_WQ(127,64, __Vtemp127, vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_69);
    VL_EXTEND_WQ(127,64, __Vtemp128, vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_74);
    VL_EXTEND_WQ(127,64, __Vtemp129, vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_69);
    VL_EXTEND_WQ(127,64, __Vtemp130, vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_59);
    VL_EXTEND_WQ(127,64, __Vtemp131, vlSelf->top__DOT__exu_step__DOT__srl_res);
    VL_EXTEND_WQ(127,64, __Vtemp132, top__DOT__exu_step__DOT___io_res2rd_T_162);
    if ((0x31U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))) {
        top__DOT__exu_step__DOT___io_res2rd_T_186[0U] 
            = __Vtemp118[0U];
        top__DOT__exu_step__DOT___io_res2rd_T_186[1U] 
            = __Vtemp118[1U];
        top__DOT__exu_step__DOT___io_res2rd_T_186[2U] 
            = __Vtemp118[2U];
        top__DOT__exu_step__DOT___io_res2rd_T_186[3U] 
            = __Vtemp118[3U];
    } else {
        top__DOT__exu_step__DOT___io_res2rd_T_186[0U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp119[0U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp120[0U]
                                     : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp121[0U]
                                         : ((0x11U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp125[0U]
                                             : ((0x1dU 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                __Vtemp126[0U]
                                                 : 
                                                ((0x1cU 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp127[0U]
                                                  : 
                                                 ((0x1bU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp128[0U]
                                                   : 
                                                  ((0x1aU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp129[0U]
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp130[0U]
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp131[0U]
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      vlSelf->top__DOT__exu_step__DOT__sll_res[0U]
                                                       : 
                                                      __Vtemp132[0U])))))))))));
        top__DOT__exu_step__DOT___io_res2rd_T_186[1U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp119[1U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp120[1U]
                                     : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp121[1U]
                                         : ((0x11U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp125[1U]
                                             : ((0x1dU 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                __Vtemp126[1U]
                                                 : 
                                                ((0x1cU 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp127[1U]
                                                  : 
                                                 ((0x1bU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp128[1U]
                                                   : 
                                                  ((0x1aU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp129[1U]
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp130[1U]
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp131[1U]
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      vlSelf->top__DOT__exu_step__DOT__sll_res[1U]
                                                       : 
                                                      __Vtemp132[1U])))))))))));
        top__DOT__exu_step__DOT___io_res2rd_T_186[2U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp119[2U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp120[2U]
                                     : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp121[2U]
                                         : ((0x11U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp125[2U]
                                             : ((0x1dU 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                __Vtemp126[2U]
                                                 : 
                                                ((0x1cU 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp127[2U]
                                                  : 
                                                 ((0x1bU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp128[2U]
                                                   : 
                                                  ((0x1aU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp129[2U]
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp130[2U]
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp131[2U]
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      vlSelf->top__DOT__exu_step__DOT__sll_res[2U]
                                                       : 
                                                      __Vtemp132[2U])))))))))));
        top__DOT__exu_step__DOT___io_res2rd_T_186[3U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp119[3U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp120[3U]
                                     : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp121[3U]
                                         : ((0x11U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp125[3U]
                                             : ((0x1dU 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                __Vtemp126[3U]
                                                 : 
                                                ((0x1cU 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp127[3U]
                                                  : 
                                                 ((0x1bU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp128[3U]
                                                   : 
                                                  ((0x1aU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp129[3U]
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp130[3U]
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp131[3U]
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      vlSelf->top__DOT__exu_step__DOT__sll_res[3U]
                                                       : 
                                                      __Vtemp132[3U])))))))))));
    }
    VL_EXTEND_WQ(127,64, __Vtemp157, vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                 [((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                    ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]);
    VL_EXTEND_WQ(127,64, __Vtemp158, vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                 [((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                    ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]);
    VL_EXTEND_WQ(127,64, __Vtemp159, vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                 [((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                    ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]);
    VL_EXTEND_WQ(127,64, __Vtemp160, vlSelf->top__DOT__exu_step__DOT__srl_res);
    VL_EXTEND_WQ(127,64, __Vtemp161, vlSelf->top__DOT__exu_step__DOT__sra_res);
    VL_EXTEND_WQ(127,64, __Vtemp162, VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value));
    VL_EXTEND_WQ(127,64, __Vtemp163, VL_MODDIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value));
    VL_EXTEND_WQ(127,64, __Vtemp164, (((QData)((IData)(
                                                       ((vlSelf->top__DOT__exu_step__DOT__remuw_res 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__remuw_res))));
    VL_EXTEND_WQ(127,64, __Vtemp165, (((QData)((IData)(
                                                       ((vlSelf->top__DOT__exu_step__DOT__remw_res 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__remw_res))));
    VL_EXTEND_WQ(127,64, __Vtemp166, (((QData)((IData)(
                                                       ((vlSelf->top__DOT__exu_step__DOT__divuw_res 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__divuw_res))));
    if ((0x47U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))) {
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U] 
            = __Vtemp157[0U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U] 
            = __Vtemp157[1U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[2U] 
            = __Vtemp157[2U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[3U] 
            = __Vtemp157[3U];
    } else {
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U] 
            = ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp158[0U] : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp159[0U]
                                     : ((0x38U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp160[0U]
                                         : ((0x39U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp161[0U]
                                             : ((0x37U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                vlSelf->top__DOT__exu_step__DOT__sll_res[0U]
                                                 : 
                                                ((0x34U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp162[0U]
                                                  : 
                                                 ((0x33U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp163[0U]
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp164[0U]
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp165[0U]
                                                     : 
                                                    ((0x35U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp166[0U]
                                                      : 
                                                     top__DOT__exu_step__DOT___io_res2rd_T_186[0U]))))))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U] 
            = ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp158[1U] : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp159[1U]
                                     : ((0x38U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp160[1U]
                                         : ((0x39U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp161[1U]
                                             : ((0x37U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                vlSelf->top__DOT__exu_step__DOT__sll_res[1U]
                                                 : 
                                                ((0x34U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp162[1U]
                                                  : 
                                                 ((0x33U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp163[1U]
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp164[1U]
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp165[1U]
                                                     : 
                                                    ((0x35U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp166[1U]
                                                      : 
                                                     top__DOT__exu_step__DOT___io_res2rd_T_186[1U]))))))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[2U] 
            = ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp158[2U] : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp159[2U]
                                     : ((0x38U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp160[2U]
                                         : ((0x39U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp161[2U]
                                             : ((0x37U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                vlSelf->top__DOT__exu_step__DOT__sll_res[2U]
                                                 : 
                                                ((0x34U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp162[2U]
                                                  : 
                                                 ((0x33U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp163[2U]
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp164[2U]
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp165[2U]
                                                     : 
                                                    ((0x35U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp166[2U]
                                                      : 
                                                     top__DOT__exu_step__DOT___io_res2rd_T_186[2U]))))))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[3U] 
            = ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp158[3U] : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp159[3U]
                                     : ((0x38U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp160[3U]
                                         : ((0x39U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp161[3U]
                                             : ((0x37U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                vlSelf->top__DOT__exu_step__DOT__sll_res[3U]
                                                 : 
                                                ((0x34U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp162[3U]
                                                  : 
                                                 ((0x33U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp163[3U]
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp164[3U]
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp165[3U]
                                                     : 
                                                    ((0x35U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp166[3U]
                                                      : 
                                                     top__DOT__exu_step__DOT___io_res2rd_T_186[3U]))))))))));
    }
    vlSelf->io_outval = (((QData)((IData)(vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U])));
    vlSelf->top__DOT__exu_step__DOT__Regfile_MPORT_data 
        = (((((0x100073U != vlSelf->top__DOT__idu_step_io_inst) 
              & ((0x3023U != (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                 & ((0x1023U != (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                    & ((0x23U != (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                       & ((0x2023U != (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                          & ((0x1063U != (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                             & ((0x63U != (0x707fU 
                                           & vlSelf->top__DOT__idu_step_io_inst)) 
                                & ((0x5063U != (0x707fU 
                                                & vlSelf->top__DOT__idu_step_io_inst)) 
                                   & ((0x4063U != (0x707fU 
                                                   & vlSelf->top__DOT__idu_step_io_inst)) 
                                      & ((0x6063U != 
                                          (0x707fU 
                                           & vlSelf->top__DOT__idu_step_io_inst)) 
                                         & ((0x7063U 
                                             != (0x707fU 
                                                 & vlSelf->top__DOT__idu_step_io_inst)) 
                                            & ((0x73U 
                                                != vlSelf->top__DOT__idu_step_io_inst) 
                                               & (0x30200073U 
                                                  != vlSelf->top__DOT__idu_step_io_inst))))))))))))) 
             & (0U != (0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                >> 7U)))) & (((IData)(vlSelf->top__DOT__i_cache_io_to_ifu_rvalid) 
                                              & (~ (IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_Readmem_en))) 
                                             | ((IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_Readmem_en) 
                                                & (IData)(vlSelf->top__DOT__d_cache_io_to_lsu_rvalid))))
            ? (((QData)((IData)(vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U])))
            : ((0U == (0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                >> 7U))) ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
               [(0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                          >> 7U))]));
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__9(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__9\n"); );
    // Body
    vlSelf->top__DOT__d_cache__DOT___GEN_3784 = ((IData)(vlSelf->reset)
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
                                                        ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_195)
                                                          ? 
                                                         (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_63)) 
                                                           << 9U) 
                                                          | (QData)((IData)(
                                                                            (0x1f8U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                                >> 3U)) 
                                                                                << 3U)))))
                                                          : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))))
                                                        : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr)))))))));
}

void Vtop___024root___sequent__TOP__5(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__6(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__7(Vtop___024root* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vtop___024root___sequent__TOP__5(vlSelf);
        Vtop___024root___sequent__TOP__6(vlSelf);
        Vtop___024root___sequent__TOP__7(vlSelf);
        Vtop___024root___sequent__TOP__8(vlSelf);
    }
    Vtop___024root___combo__TOP__9(vlSelf);
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
