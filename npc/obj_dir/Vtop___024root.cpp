// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ Raddr, QData/*63:0*/ &Rdata);
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ Waddr, QData/*63:0*/ Wdata, CData/*7:0*/ Wmask);

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*6:0*/ top__DOT__IDU__DOT___inst_now_T_144;
    CData/*6:0*/ top__DOT__IDU__DOT___inst_now_T_159;
    CData/*6:0*/ top__DOT__IDU__DOT___inst_now_T_174;
    CData/*6:0*/ top__DOT__IDU__DOT___inst_now_T_189;
    CData/*6:0*/ top__DOT__IDU__DOT___inst_type_T_140;
    CData/*6:0*/ top__DOT__IDU__DOT___inst_type_T_155;
    CData/*6:0*/ top__DOT__IDU__DOT___inst_type_T_170;
    CData/*6:0*/ top__DOT__IDU__DOT___inst_type_T_185;
    CData/*0:0*/ top__DOT__EXU__DOT___alu_res_T_4;
    CData/*0:0*/ top__DOT__EXU__DOT___alu_res_T_10;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__Register__DOT__Reg__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__Register__DOT__Reg__v0;
    VlWide<4>/*127:0*/ __Vtemp1;
    VlWide<4>/*127:0*/ __Vtemp2;
    VlWide<4>/*127:0*/ __Vtemp3;
    VlWide<4>/*127:0*/ __Vtemp4;
    VlWide<4>/*127:0*/ __Vtemp5;
    VlWide<4>/*127:0*/ __Vtemp6;
    VlWide<4>/*127:0*/ __Vtemp7;
    VlWide<3>/*95:0*/ __Vtemp10;
    VlWide<3>/*95:0*/ __Vtemp11;
    VlWide<3>/*95:0*/ __Vtemp13;
    VlWide<3>/*95:0*/ __Vtemp14;
    VlWide<3>/*95:0*/ __Vtemp15;
    VlWide<3>/*95:0*/ __Vtemp16;
    VlWide<4>/*127:0*/ __Vtemp17;
    VlWide<4>/*127:0*/ __Vtemp18;
    VlWide<4>/*127:0*/ __Vtemp40;
    VlWide<4>/*127:0*/ __Vtemp41;
    VlWide<4>/*127:0*/ __Vtemp43;
    VlWide<4>/*127:0*/ __Vtemp44;
    VlWide<4>/*127:0*/ __Vtemp45;
    VlWide<4>/*127:0*/ __Vtemp46;
    VlWide<4>/*127:0*/ __Vtemp47;
    VlWide<4>/*127:0*/ __Vtemp48;
    VlWide<4>/*127:0*/ __Vtemp49;
    VlWide<4>/*127:0*/ __Vtemp50;
    VlWide<4>/*127:0*/ __Vtemp51;
    VlWide<4>/*127:0*/ __Vtemp52;
    VlWide<4>/*127:0*/ __Vtemp53;
    VlWide<4>/*127:0*/ __Vtemp54;
    VlWide<4>/*127:0*/ __Vtemp55;
    QData/*63:0*/ top__DOT__EXU__DOT___alu_res_T_20;
    QData/*63:0*/ top__DOT__EXU__DOT___alu_res_T_35;
    QData/*63:0*/ top__DOT__EXU__DOT___alu_res_T_45;
    QData/*63:0*/ top__DOT__EXU__DOT___alu_res_T_50;
    QData/*63:0*/ top__DOT__EXU__DOT___alu_res_T_118;
    QData/*63:0*/ __Vdlyvval__top__DOT__Register__DOT__Reg__v0;
    // Body
    __Vdlyvset__top__DOT__Register__DOT__Reg__v0 = 0U;
    if (vlSelf->reset) {
        vlSelf->top__DOT__IDU__DOT__ds_valid = 0U;
    } else if (((IData)(vlSelf->top__DOT__IDU__DOT__br_taken) 
                & (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict)))) {
        vlSelf->top__DOT__IDU__DOT__ds_valid = 0U;
    } else if (vlSelf->top__DOT__IDU__DOT__ds_allowin) {
        vlSelf->top__DOT__IDU__DOT__ds_valid = vlSelf->top__DOT__IFU__DOT__fs_valid;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__store_data = 0ULL;
    } else if (vlSelf->top__DOT__EXU__DOT__es_valid) {
        vlSelf->top__DOT__LSU__DOT__store_data = vlSelf->top__DOT__EXU__DOT__store_data;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__es_pc = 0ULL;
    } else if (vlSelf->top__DOT__IDU_io_ds_to_es_valid) {
        vlSelf->top__DOT__EXU__DOT__es_pc = vlSelf->top__DOT__IDU__DOT__ds_pc;
    }
    vlSelf->top__DOT__WBU__DOT__ws_valid = ((~ (IData)(vlSelf->reset)) 
                                            & (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid));
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__wen = 0U;
    } else if (vlSelf->top__DOT__EXU__DOT__es_valid) {
        vlSelf->top__DOT__LSU__DOT__wen = vlSelf->top__DOT__EXU__DOT__st_we;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__wstrb = 0U;
    } else if (vlSelf->top__DOT__EXU__DOT__es_valid) {
        vlSelf->top__DOT__LSU__DOT__wstrb = vlSelf->top__DOT__EXU__DOT__st_wstrb;
    }
    if (vlSelf->top__DOT__WBU__DOT__ws_rf_we) {
        __Vdlyvval__top__DOT__Register__DOT__Reg__v0 
            = vlSelf->top__DOT__WBU__DOT__ws_res;
        __Vdlyvset__top__DOT__Register__DOT__Reg__v0 = 1U;
        __Vdlyvdim0__top__DOT__Register__DOT__Reg__v0 
            = vlSelf->top__DOT__WBU__DOT__ws_rf_dst;
    }
    if (__Vdlyvset__top__DOT__Register__DOT__Reg__v0) {
        vlSelf->top__DOT__Register__DOT__Reg[__Vdlyvdim0__top__DOT__Register__DOT__Reg__v0] 
            = __Vdlyvval__top__DOT__Register__DOT__Reg__v0;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__store_data = 0ULL;
    } else if (vlSelf->top__DOT__IDU_io_ds_to_es_valid) {
        vlSelf->top__DOT__EXU__DOT__store_data = ((0x27U 
                                                   == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                   ? (QData)((IData)(vlSelf->top__DOT__Register_io_rdata2))
                                                   : 
                                                  ((0x28U 
                                                    == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->top__DOT__Register_io_rdata2))))
                                                    : 
                                                   ((0x26U 
                                                     == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                     ? (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->top__DOT__Register_io_rdata2))))
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                      ? vlSelf->top__DOT__Register_io_rdata2
                                                      : 0ULL))));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__IDU__DOT__ds_pc = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__IFU__DOT__fs_valid) 
                & (IData)(vlSelf->top__DOT__IDU__DOT__ds_allowin))) {
        vlSelf->top__DOT__IDU__DOT__ds_pc = vlSelf->top__DOT__IFU__DOT__fs_pc;
    }
    vlSelf->io_step = vlSelf->top__DOT__WBU__DOT__ws_valid;
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__st_we = 0U;
    } else if (vlSelf->top__DOT__IDU_io_ds_to_es_valid) {
        vlSelf->top__DOT__EXU__DOT__st_we = (0x44U 
                                             == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__st_wstrb = 0U;
    } else if (vlSelf->top__DOT__IDU_io_ds_to_es_valid) {
        vlSelf->top__DOT__EXU__DOT__st_wstrb = ((0x3023U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                                 ? 0xffU
                                                 : 
                                                ((0x1023U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                                  ? 3U
                                                  : 
                                                 ((0x23U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 1U
                                                   : 
                                                  ((0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 0xfU
                                                    : 0U))));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__WBU__DOT__ws_rf_we = 0U;
    } else if (vlSelf->top__DOT__LSU__DOT__ms_valid) {
        vlSelf->top__DOT__WBU__DOT__ws_rf_we = vlSelf->top__DOT__LSU__DOT__ms_rf_we;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__WBU__DOT__ws_rf_dst = 0U;
    } else if (vlSelf->top__DOT__LSU__DOT__ms_valid) {
        vlSelf->top__DOT__WBU__DOT__ws_rf_dst = vlSelf->top__DOT__LSU__DOT__ms_rf_dst;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__WBU__DOT__ws_res = 0ULL;
    } else if (vlSelf->top__DOT__LSU__DOT__ms_valid) {
        vlSelf->top__DOT__WBU__DOT__ws_res = ((IData)(vlSelf->top__DOT__LSU__DOT__ren)
                                               ? vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata
                                               : vlSelf->top__DOT__LSU__DOT__ms_res);
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__ms_rf_we = 0U;
    } else if (vlSelf->top__DOT__EXU__DOT__es_valid) {
        vlSelf->top__DOT__LSU__DOT__ms_rf_we = vlSelf->top__DOT__EXU__DOT__es_rf_we;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__ms_rf_dst = 0U;
    } else if (vlSelf->top__DOT__EXU__DOT__es_valid) {
        vlSelf->top__DOT__LSU__DOT__ms_rf_dst = vlSelf->top__DOT__EXU__DOT__es_rd;
    }
    vlSelf->top__DOT__LSU__DOT__ms_valid = ((~ (IData)(vlSelf->reset)) 
                                            & (IData)(vlSelf->top__DOT__EXU__DOT__es_valid));
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__ms_res = 0ULL;
    } else if (vlSelf->top__DOT__EXU__DOT__es_valid) {
        VL_EXTEND_WQ(127,64, __Vtemp1, vlSelf->top__DOT__EXU__DOT__srl_res);
        VL_EXTEND_WQ(127,64, __Vtemp2, vlSelf->top__DOT__EXU__DOT__sra_res);
        VL_EXTEND_WQ(127,64, __Vtemp3, VL_MODDIVS_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value));
        VL_EXTEND_WQ(127,64, __Vtemp4, VL_MODDIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value));
        VL_EXTEND_WQ(127,64, __Vtemp5, (((QData)((IData)(
                                                         ((vlSelf->top__DOT__EXU__DOT__remuw_res 
                                                           >> 0x1fU)
                                                           ? 0xffffffffU
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__remuw_res))));
        VL_EXTEND_WQ(127,64, __Vtemp6, (((QData)((IData)(
                                                         ((vlSelf->top__DOT__EXU__DOT__remw_res 
                                                           >> 0x1fU)
                                                           ? 0xffffffffU
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__remw_res))));
        VL_EXTEND_WQ(127,64, __Vtemp7, (((QData)((IData)(
                                                         ((vlSelf->top__DOT__EXU__DOT__divuw_res 
                                                           >> 0x1fU)
                                                           ? 0xffffffffU
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__divuw_res))));
        VL_EXTENDS_WQ(65,64, __Vtemp10, vlSelf->top__DOT__EXU__DOT__src1_value);
        __Vtemp11[0U] = __Vtemp10[0U];
        __Vtemp11[1U] = __Vtemp10[1U];
        __Vtemp11[2U] = (1U & __Vtemp10[2U]);
        VL_EXTENDS_WQ(65,64, __Vtemp13, vlSelf->top__DOT__EXU__DOT__src2_value);
        __Vtemp14[0U] = __Vtemp13[0U];
        __Vtemp14[1U] = __Vtemp13[1U];
        __Vtemp14[2U] = (1U & __Vtemp13[2U]);
        VL_DIVS_WWW(65, __Vtemp15, __Vtemp11, __Vtemp14);
        __Vtemp16[0U] = __Vtemp15[0U];
        __Vtemp16[1U] = __Vtemp15[1U];
        __Vtemp16[2U] = (1U & __Vtemp15[2U]);
        VL_EXTEND_WW(127,65, __Vtemp17, __Vtemp16);
        VL_EXTEND_WQ(127,64, __Vtemp18, VL_DIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value));
        vlSelf->top__DOT__LSU__DOT__ms_res = (((QData)((IData)(
                                                               ((0x38U 
                                                                 == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                 ? 
                                                                __Vtemp1[1U]
                                                                 : 
                                                                ((0x39U 
                                                                  == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                  ? 
                                                                 __Vtemp2[1U]
                                                                  : 
                                                                 ((0x37U 
                                                                   == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                   ? 
                                                                  vlSelf->top__DOT__EXU__DOT__sll_res[1U]
                                                                   : 
                                                                  ((0x34U 
                                                                    == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                    ? 
                                                                   __Vtemp3[1U]
                                                                    : 
                                                                   ((0x33U 
                                                                     == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                     ? 
                                                                    __Vtemp4[1U]
                                                                     : 
                                                                    ((0x32U 
                                                                      == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                      ? 
                                                                     __Vtemp5[1U]
                                                                      : 
                                                                     ((0x14U 
                                                                       == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                       ? 
                                                                      __Vtemp6[1U]
                                                                       : 
                                                                      ((0x35U 
                                                                        == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                        ? 
                                                                       __Vtemp7[1U]
                                                                        : 
                                                                       ((0x31U 
                                                                         == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                         ? 
                                                                        __Vtemp17[1U]
                                                                         : 
                                                                        ((0x30U 
                                                                          == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                          ? 
                                                                         __Vtemp18[1U]
                                                                          : 
                                                                         vlSelf->top__DOT__EXU__DOT___alu_res_T_144[1U])))))))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((0x38U 
                                                                  == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                  ? 
                                                                 __Vtemp1[0U]
                                                                  : 
                                                                 ((0x39U 
                                                                   == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                   ? 
                                                                  __Vtemp2[0U]
                                                                   : 
                                                                  ((0x37U 
                                                                    == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                    ? 
                                                                   vlSelf->top__DOT__EXU__DOT__sll_res[0U]
                                                                    : 
                                                                   ((0x34U 
                                                                     == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                     ? 
                                                                    __Vtemp3[0U]
                                                                     : 
                                                                    ((0x33U 
                                                                      == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                      ? 
                                                                     __Vtemp4[0U]
                                                                      : 
                                                                     ((0x32U 
                                                                       == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                       ? 
                                                                      __Vtemp5[0U]
                                                                       : 
                                                                      ((0x14U 
                                                                        == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                        ? 
                                                                       __Vtemp6[0U]
                                                                        : 
                                                                       ((0x35U 
                                                                         == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                         ? 
                                                                        __Vtemp7[0U]
                                                                         : 
                                                                        ((0x31U 
                                                                          == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                          ? 
                                                                         __Vtemp17[0U]
                                                                          : 
                                                                         ((0x30U 
                                                                           == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                           ? 
                                                                          __Vtemp18[0U]
                                                                           : 
                                                                          vlSelf->top__DOT__EXU__DOT___alu_res_T_144[0U])))))))))))));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__ren = 0U;
    } else if (vlSelf->top__DOT__EXU__DOT__es_valid) {
        vlSelf->top__DOT__LSU__DOT__ren = vlSelf->top__DOT__EXU__DOT__ld_we;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__es_rf_we = 0U;
    } else if (vlSelf->top__DOT__IDU_io_ds_to_es_valid) {
        vlSelf->top__DOT__EXU__DOT__es_rf_we = ((0x100073U 
                                                 != vlSelf->top__DOT__IDU__DOT__inst) 
                                                & ((0x3023U 
                                                    != 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                   & ((0x1023U 
                                                       != 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                      & ((0x23U 
                                                          != 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                         & ((0x2023U 
                                                             != 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                            & ((0x1063U 
                                                                != 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                               & ((0x63U 
                                                                   != 
                                                                   (0x707fU 
                                                                    & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                                  & ((0x5063U 
                                                                      != 
                                                                      (0x707fU 
                                                                       & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                                     & ((0x4063U 
                                                                         != 
                                                                         (0x707fU 
                                                                          & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                                        & ((0x6063U 
                                                                            != 
                                                                            (0x707fU 
                                                                             & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                                           & ((0x7063U 
                                                                               != 
                                                                               (0x707fU 
                                                                                & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                                              & ((0x73U 
                                                                                != vlSelf->top__DOT__IDU__DOT__inst) 
                                                                                & (0x30200073U 
                                                                                != vlSelf->top__DOT__IDU__DOT__inst)))))))))))));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__es_rd = 0U;
    } else if (vlSelf->top__DOT__IDU_io_ds_to_es_valid) {
        vlSelf->top__DOT__EXU__DOT__es_rd = (0x1fU 
                                             & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 7U));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__src2_value = 0ULL;
    } else if (vlSelf->top__DOT__IDU_io_ds_to_es_valid) {
        vlSelf->top__DOT__EXU__DOT__src2_value = (QData)((IData)(
                                                                 (0x1fU 
                                                                  & (IData)(
                                                                            ((IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)
                                                                              ? vlSelf->top__DOT__IDU__DOT__imm
                                                                              : vlSelf->top__DOT__Register_io_rdata2)))));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__src1_value = 0ULL;
    } else if (vlSelf->top__DOT__IDU_io_ds_to_es_valid) {
        vlSelf->top__DOT__EXU__DOT__src1_value = (QData)((IData)(
                                                                 (0x1fU 
                                                                  & (IData)(
                                                                            ((IData)(vlSelf->top__DOT__IDU__DOT__src1_is_pc)
                                                                              ? vlSelf->top__DOT__IFU__DOT__fs_pc
                                                                              : vlSelf->top__DOT__Register_io_rdata1)))));
    }
    vlSelf->top__DOT__EXU__DOT__es_valid = ((~ (IData)(vlSelf->reset)) 
                                            & (IData)(vlSelf->top__DOT__IDU_io_ds_to_es_valid));
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__ld_we = 0U;
    } else if (vlSelf->top__DOT__IDU_io_ds_to_es_valid) {
        vlSelf->top__DOT__EXU__DOT__ld_we = ((0x3003U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst)) 
                                             | ((0x2003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                | ((0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                   | ((0x1003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                      | ((0x5003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                         | ((3U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                            | (0x4003U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__IDU__DOT__inst))))))));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__IFU__DOT__fs_pc = 0x7ffffffcULL;
    } else if (vlSelf->top__DOT__IFU__DOT__fs_allowin) {
        vlSelf->top__DOT__IFU__DOT__fs_pc = (((0x3eU 
                                               == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194)) 
                                              | ((0x3dU 
                                                  == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194)) 
                                                 | (IData)(vlSelf->top__DOT__IDU__DOT___br_taken_T_35)))
                                              ? ((6U 
                                                  == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                  ? 
                                                 (0xfffffffffffffffeULL 
                                                  & vlSelf->top__DOT__IDU__DOT___br_target_T_1)
                                                  : vlSelf->top__DOT__IDU__DOT___br_target_T_1)
                                              : vlSelf->top__DOT__IFU__DOT__seq_pc);
    }
    vlSelf->top__DOT__EXU__DOT__divuw_res = VL_DIV_III(32, (IData)(vlSelf->top__DOT__EXU__DOT__src1_value), (IData)(vlSelf->top__DOT__EXU__DOT__src2_value));
    vlSelf->top__DOT__EXU__DOT__remw_res = VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__EXU__DOT__src1_value), (IData)(vlSelf->top__DOT__EXU__DOT__src2_value));
    vlSelf->top__DOT__EXU__DOT__remuw_res = VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__EXU__DOT__src1_value), (IData)(vlSelf->top__DOT__EXU__DOT__src2_value));
    vlSelf->top__DOT__EXU__DOT__srl_res = (vlSelf->top__DOT__EXU__DOT__src1_value 
                                           >> (0x3fU 
                                               & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
    VL_EXTEND_WQ(127,64, __Vtemp40, vlSelf->top__DOT__EXU__DOT__src1_value);
    VL_SHIFTL_WWI(127,127,6, __Vtemp41, __Vtemp40, 
                  (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
    vlSelf->top__DOT__EXU__DOT__sll_res[0U] = __Vtemp41[0U];
    vlSelf->top__DOT__EXU__DOT__sll_res[1U] = __Vtemp41[1U];
    vlSelf->top__DOT__EXU__DOT__sll_res[2U] = __Vtemp41[2U];
    vlSelf->top__DOT__EXU__DOT__sll_res[3U] = (0x7fffffffU 
                                               & __Vtemp41[3U]);
    vlSelf->top__DOT__EXU__DOT___mluw_res_T_2 = ((QData)((IData)(vlSelf->top__DOT__EXU__DOT__src1_value)) 
                                                 * (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
    vlSelf->top__DOT__EXU__DOT___divw_res_T_4 = (0x1ffffffffULL 
                                                 & VL_DIVS_QQQ(33, 
                                                               (0x1ffffffffULL 
                                                                & VL_EXTENDS_QI(33,32, (IData)(vlSelf->top__DOT__EXU__DOT__src1_value))), 
                                                               (0x1ffffffffULL 
                                                                & VL_EXTENDS_QI(33,32, (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))));
    top__DOT__EXU__DOT___alu_res_T_45 = (((QData)((IData)(
                                                          ((VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__EXU__DOT__src1_value), 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value))) 
                                                            >> 0x1fU)
                                                            ? 0xffffffffU
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__EXU__DOT__src1_value), 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value))))));
    vlSelf->top__DOT__EXU__DOT__srlw_res = ((IData)(vlSelf->top__DOT__EXU__DOT__src1_value) 
                                            >> (0x1fU 
                                                & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
    vlSelf->top__DOT__EXU__DOT__sllw_res = (0x7fffffffffffffffULL 
                                            & ((QData)((IData)(vlSelf->top__DOT__EXU__DOT__src1_value)) 
                                               << (0x1fU 
                                                   & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value))));
    vlSelf->top__DOT__EXU__DOT__sra_res = VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__EXU__DOT__src1_value, 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
    vlSelf->top__DOT__EXU__DOT__or_res = (vlSelf->top__DOT__EXU__DOT__src1_value 
                                          | vlSelf->top__DOT__EXU__DOT__src2_value);
    vlSelf->top__DOT__EXU__DOT__xor_res = (vlSelf->top__DOT__EXU__DOT__src1_value 
                                           ^ vlSelf->top__DOT__EXU__DOT__src2_value);
    top__DOT__EXU__DOT___alu_res_T_4 = (vlSelf->top__DOT__EXU__DOT__src1_value 
                                        < vlSelf->top__DOT__EXU__DOT__src2_value);
    top__DOT__EXU__DOT___alu_res_T_10 = VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value);
    vlSelf->top__DOT__EXU__DOT__sub_res = (vlSelf->top__DOT__EXU__DOT__src1_value 
                                           - vlSelf->top__DOT__EXU__DOT__src2_value);
    vlSelf->top__DOT__EXU__DOT__and_res = (vlSelf->top__DOT__EXU__DOT__src1_value 
                                           & vlSelf->top__DOT__EXU__DOT__src2_value);
    vlSelf->top__DOT__EXU_io_to_ms_maddr = (vlSelf->top__DOT__EXU__DOT__src1_value 
                                            + vlSelf->top__DOT__EXU__DOT__src2_value);
    if (vlSelf->reset) {
        vlSelf->top__DOT__IDU__DOT__inst = 0U;
    } else if (((IData)(vlSelf->top__DOT__IFU__DOT__fs_valid) 
                & (IData)(vlSelf->top__DOT__IDU__DOT__ds_allowin))) {
        vlSelf->top__DOT__IDU__DOT__inst = vlSelf->top__DOT__IDU__DOT___inst_now_T_194;
    }
    top__DOT__EXU__DOT___alu_res_T_50 = (((QData)((IData)(
                                                          ((vlSelf->top__DOT__EXU__DOT__srlw_res 
                                                            >> 0x1fU)
                                                            ? 0xffffffffU
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__srlw_res)));
    top__DOT__EXU__DOT___alu_res_T_35 = (((QData)((IData)(
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__EXU__DOT__sllw_res 
                                                                       >> 0x1fU)))
                                                            ? 0xffffffffU
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__sllw_res)));
    if (vlSelf->top__DOT__LSU__DOT__ren) {
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__EXU_io_to_ms_maddr, vlSelf->__Vtask_pmem_read__1__Rdata);
        vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata 
            = vlSelf->__Vtask_pmem_read__1__Rdata;
    }
    if (vlSelf->top__DOT__LSU__DOT__wen) {
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->top__DOT__EXU_io_to_ms_maddr, vlSelf->top__DOT__LSU__DOT__store_data, (IData)(vlSelf->top__DOT__LSU__DOT__wstrb));
    }
    top__DOT__EXU__DOT___alu_res_T_20 = (((QData)((IData)(
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__EXU_io_to_ms_maddr 
                                                                       >> 0x1fU)))
                                                            ? 0xffffffffU
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__EXU_io_to_ms_maddr)));
    vlSelf->io_pc = vlSelf->top__DOT__IFU__DOT__fs_pc;
    vlSelf->top__DOT__IFU__DOT__seq_pc = (4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc);
    vlSelf->top__DOT__IFU__DOT__fs_valid = ((~ (IData)(vlSelf->reset)) 
                                            & (IData)(vlSelf->top__DOT__IFU__DOT___GEN_1));
    vlSelf->top__DOT__Register_io_rdata1 = ((0U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 0xfU)))
                                             ? 0ULL
                                             : vlSelf->top__DOT__Register__DOT__Reg
                                            [(0x1fU 
                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 0xfU))]);
    vlSelf->top__DOT__Register_io_rdata2 = ((0U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 0x14U)))
                                             ? 0ULL
                                             : vlSelf->top__DOT__Register__DOT__Reg
                                            [(0x1fU 
                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 0x14U))]);
    vlSelf->top__DOT__IDU__DOT__src1_is_pc = ((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst)) 
                                              | ((0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                 | ((0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                    | ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                       | ((0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                          | ((0x4063U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                             | ((0x6063U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                                | (0x7063U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->top__DOT__IDU__DOT__inst)))))))));
    top__DOT__IDU__DOT___inst_now_T_144 = ((0x200703bU 
                                            == (0xfe00707fU 
                                                & vlSelf->top__DOT__IDU__DOT__inst))
                                            ? 0x32U
                                            : ((0x2007033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                                ? 0x33U
                                                : (
                                                   (0x2006033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 0x34U
                                                    : 
                                                   ((0x1033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst))
                                                     ? 0x37U
                                                     : 
                                                    ((0x5033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__IDU__DOT__inst))
                                                      ? 0x38U
                                                      : 
                                                     ((0x40005033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst))
                                                       ? 0x39U
                                                       : 
                                                      ((0x2013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst))
                                                        ? 0x36U
                                                        : 
                                                       ((0x6003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__IDU__DOT__inst))
                                                         ? 0x3aU
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__IDU__DOT__inst))
                                                          ? 0x3bU
                                                          : 
                                                         ((0x7063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__IDU__DOT__inst))
                                                           ? 0x3cU
                                                           : 
                                                          ((0x73U 
                                                            == vlSelf->top__DOT__IDU__DOT__inst)
                                                            ? 0x3dU
                                                            : 
                                                           ((0x30200073U 
                                                             == vlSelf->top__DOT__IDU__DOT__inst)
                                                             ? 0x3eU
                                                             : 
                                                            ((0x1073U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__IDU__DOT__inst))
                                                              ? 0x3fU
                                                              : 
                                                             ((0x2073U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__IDU__DOT__inst))
                                                               ? 0x46U
                                                               : 
                                                              ((0x3073U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                                                ? 0x47U
                                                                : 0U)))))))))))))));
    top__DOT__IDU__DOT___inst_type_T_140 = ((0x200503bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                             ? 0x41U
                                             : ((0x200703bU 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                                 ? 0x41U
                                                 : 
                                                ((0x2007033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                                  ? 0x41U
                                                  : 
                                                 ((0x2006033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 0x41U
                                                   : 
                                                  ((0x1033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 0x41U
                                                    : 
                                                   ((0x5033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst))
                                                     ? 0x41U
                                                     : 
                                                    ((0x40005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__IDU__DOT__inst))
                                                      ? 0x41U
                                                      : 
                                                     ((0x2013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst))
                                                       ? 0x40U
                                                       : 
                                                      ((0x6003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst))
                                                        ? 0x40U
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__IDU__DOT__inst))
                                                         ? 0x40U
                                                         : 
                                                        ((0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__IDU__DOT__inst))
                                                          ? 0x45U
                                                          : 
                                                         ((0x73U 
                                                           == vlSelf->top__DOT__IDU__DOT__inst)
                                                           ? 0x40U
                                                           : 
                                                          ((0x1073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__IDU__DOT__inst))
                                                            ? 0x40U
                                                            : 
                                                           ((0x2073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__IDU__DOT__inst))
                                                             ? 0x40U
                                                             : 
                                                            ((0x3073U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__IDU__DOT__inst))
                                                              ? 0x40U
                                                              : 0U)))))))))))))));
    top__DOT__IDU__DOT___inst_now_T_159 = ((0x5063U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__IDU__DOT__inst))
                                            ? 0x2bU
                                            : ((0x4063U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                                ? 0x2cU
                                                : (
                                                   (0x6063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 0x2dU
                                                    : 
                                                   ((0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst))
                                                     ? 0x27U
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__IDU__DOT__inst))
                                                      ? 0x24U
                                                      : 
                                                     ((0x5003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst))
                                                       ? 0x25U
                                                       : 
                                                      ((0x2000033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst))
                                                        ? 0x11U
                                                        : 
                                                       ((0x200003bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__IDU__DOT__inst))
                                                         ? 0x12U
                                                         : 
                                                        ((0x200403bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__IDU__DOT__inst))
                                                          ? 0x13U
                                                          : 
                                                         ((0x200603bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__IDU__DOT__inst))
                                                           ? 0x14U
                                                           : 
                                                          ((0x4033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->top__DOT__IDU__DOT__inst))
                                                            ? 0x2eU
                                                            : 
                                                           ((0x6013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__IDU__DOT__inst))
                                                             ? 0x2fU
                                                             : 
                                                            ((0x2005033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->top__DOT__IDU__DOT__inst))
                                                              ? 0x30U
                                                              : 
                                                             ((0x2004033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->top__DOT__IDU__DOT__inst))
                                                               ? 0x31U
                                                               : 
                                                              ((0x200503bU 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                                                ? 0x35U
                                                                : (IData)(top__DOT__IDU__DOT___inst_now_T_144))))))))))))))));
    top__DOT__IDU__DOT___inst_type_T_155 = ((0x2033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                             ? 0x41U
                                             : ((0x5063U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                                 ? 0x45U
                                                 : 
                                                ((0x4063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                                  ? 0x45U
                                                  : 
                                                 ((0x6063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 0x45U
                                                   : 
                                                  ((0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 0x44U
                                                    : 
                                                   ((0x1003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst))
                                                     ? 0x40U
                                                     : 
                                                    ((0x5003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__IDU__DOT__inst))
                                                      ? 0x40U
                                                      : 
                                                     ((0x2000033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst))
                                                       ? 0x41U
                                                       : 
                                                      ((0x200003bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst))
                                                        ? 0x41U
                                                        : 
                                                       ((0x200403bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__IDU__DOT__inst))
                                                         ? 0x41U
                                                         : 
                                                        ((0x200603bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__IDU__DOT__inst))
                                                          ? 0x41U
                                                          : 
                                                         ((0x4033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__IDU__DOT__inst))
                                                           ? 0x41U
                                                           : 
                                                          ((0x6013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__IDU__DOT__inst))
                                                            ? 0x40U
                                                            : 
                                                           ((0x2005033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->top__DOT__IDU__DOT__inst))
                                                             ? 0x41U
                                                             : 
                                                            ((0x2004033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->top__DOT__IDU__DOT__inst))
                                                              ? 0x41U
                                                              : (IData)(top__DOT__IDU__DOT___inst_type_T_140))))))))))))))));
    if (vlSelf->top__DOT__IFU__DOT__fs_valid) {
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__IFU__DOT__fs_pc, vlSelf->__Vtask_pmem_read__0__Rdata);
        vlSelf->top__DOT__IFU__DOT__inst_read_Rdata 
            = vlSelf->__Vtask_pmem_read__0__Rdata;
    }
    top__DOT__IDU__DOT___inst_now_T_174 = ((0x6033U 
                                            == (0xfe00707fU 
                                                & vlSelf->top__DOT__IDU__DOT__inst))
                                            ? 0xbU : 
                                           ((0x4013U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                             ? 0xaU
                                             : ((0x7033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                                 ? 8U
                                                 : 
                                                ((0x7013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                                  ? 9U
                                                  : 
                                                 ((0x4000003bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 0xdU
                                                   : 
                                                  ((0x103bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 0x16U
                                                    : 
                                                   ((0x1013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst))
                                                     ? 0x17U
                                                     : 
                                                    ((0x5013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlSelf->top__DOT__IDU__DOT__inst))
                                                      ? 0x18U
                                                      : 
                                                     ((0x101bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst))
                                                       ? 0x19U
                                                       : 
                                                      ((0x4000501bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst))
                                                        ? 0x1aU
                                                        : 
                                                       ((0x501bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__IDU__DOT__inst))
                                                         ? 0x1bU
                                                         : 
                                                        ((0x4000503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__IDU__DOT__inst))
                                                          ? 0x1cU
                                                          : 
                                                         ((0x503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__IDU__DOT__inst))
                                                           ? 0x1dU
                                                           : 
                                                          ((0x3033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->top__DOT__IDU__DOT__inst))
                                                            ? 0x1eU
                                                            : 
                                                           ((0x2033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->top__DOT__IDU__DOT__inst))
                                                             ? 0x1fU
                                                             : (IData)(top__DOT__IDU__DOT___inst_now_T_159))))))))))))))));
    top__DOT__IDU__DOT___inst_type_T_170 = ((0x23U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                             ? 0x44U
                                             : ((0x6033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                                 ? 0x41U
                                                 : 
                                                ((0x4013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                                  ? 0x40U
                                                  : 
                                                 ((0x7033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 0x41U
                                                   : 
                                                  ((0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 0x40U
                                                    : 
                                                   ((0x4000003bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst))
                                                     ? 0x41U
                                                     : 
                                                    ((0x103bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__IDU__DOT__inst))
                                                      ? 0x41U
                                                      : 
                                                     ((0x1013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst))
                                                       ? 0x40U
                                                       : 
                                                      ((0x5013U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst))
                                                        ? 0x40U
                                                        : 
                                                       ((0x101bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__IDU__DOT__inst))
                                                         ? 0x40U
                                                         : 
                                                        ((0x4000501bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__IDU__DOT__inst))
                                                          ? 0x40U
                                                          : 
                                                         ((0x501bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__IDU__DOT__inst))
                                                           ? 0x40U
                                                           : 
                                                          ((0x4000503bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->top__DOT__IDU__DOT__inst))
                                                            ? 0x41U
                                                            : 
                                                           ((0x503bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->top__DOT__IDU__DOT__inst))
                                                             ? 0x41U
                                                             : 
                                                            ((0x3033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->top__DOT__IDU__DOT__inst))
                                                              ? 0x41U
                                                              : (IData)(top__DOT__IDU__DOT___inst_type_T_155))))))))))))))));
    vlSelf->io_inst = (IData)(vlSelf->top__DOT__IFU__DOT__inst_read_Rdata);
    top__DOT__IDU__DOT___inst_now_T_189 = ((0x67U == 
                                            (0x707fU 
                                             & vlSelf->top__DOT__IDU__DOT__inst))
                                            ? 6U : 
                                           ((0x3023U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                             ? 7U : 
                                            ((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                              ? 0x20U
                                              : ((0x2003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                                  ? 0x21U
                                                  : 
                                                 ((0x3bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 0xcU
                                                   : 
                                                  ((0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 0xeU
                                                    : 
                                                   ((0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst))
                                                     ? 0x2aU
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__IDU__DOT__inst))
                                                      ? 0x29U
                                                      : 
                                                     ((0x3003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst))
                                                       ? 0x22U
                                                       : 
                                                      ((0x1bU 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst))
                                                        ? 0x10U
                                                        : 
                                                       ((0x33U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__IDU__DOT__inst))
                                                         ? 0xfU
                                                         : 
                                                        ((0x40005013U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->top__DOT__IDU__DOT__inst))
                                                          ? 0x15U
                                                          : 
                                                         ((0x4003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__IDU__DOT__inst))
                                                           ? 0x23U
                                                           : 
                                                          ((0x1023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__IDU__DOT__inst))
                                                            ? 0x26U
                                                            : 
                                                           ((0x23U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__IDU__DOT__inst))
                                                             ? 0x28U
                                                             : (IData)(top__DOT__IDU__DOT___inst_now_T_174))))))))))))))));
    top__DOT__IDU__DOT___inst_type_T_185 = ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                             ? 0x43U
                                             : ((0x67U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                                 ? 0x40U
                                                 : 
                                                ((0x3023U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                                  ? 0x44U
                                                  : 
                                                 ((0x3013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 0x40U
                                                   : 
                                                  ((0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 0x40U
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst))
                                                     ? 0x41U
                                                     : 
                                                    ((0x40000033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__IDU__DOT__inst))
                                                      ? 0x41U
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst))
                                                       ? 0x45U
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst))
                                                        ? 0x45U
                                                        : 
                                                       ((0x3003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__IDU__DOT__inst))
                                                         ? 0x40U
                                                         : 
                                                        ((0x1bU 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__IDU__DOT__inst))
                                                          ? 0x40U
                                                          : 
                                                         ((0x33U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__IDU__DOT__inst))
                                                           ? 0x41U
                                                           : 
                                                          ((0x40005013U 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->top__DOT__IDU__DOT__inst))
                                                            ? 0x40U
                                                            : 
                                                           ((0x4003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__IDU__DOT__inst))
                                                             ? 0x40U
                                                             : 
                                                            ((0x1023U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__IDU__DOT__inst))
                                                              ? 0x44U
                                                              : (IData)(top__DOT__IDU__DOT___inst_type_T_170))))))))))))))));
    if ((0x13U == (0x707fU & vlSelf->top__DOT__IDU__DOT__inst))) {
        vlSelf->top__DOT__IDU__DOT___inst_now_T_194 = 1U;
        vlSelf->top__DOT__IDU__DOT___inst_type_T_188 = 0x40U;
    } else {
        vlSelf->top__DOT__IDU__DOT___inst_now_T_194 
            = ((0x100073U == vlSelf->top__DOT__IDU__DOT__inst)
                ? 2U : ((0x17U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))
                         ? 3U : ((0x37U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))
                                  ? 4U : ((0x6fU == 
                                           (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))
                                           ? 5U : (IData)(top__DOT__IDU__DOT___inst_now_T_189)))));
        vlSelf->top__DOT__IDU__DOT___inst_type_T_188 
            = ((0x17U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))
                ? 0x42U : ((0x37U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))
                            ? 0x42U : (IData)(top__DOT__IDU__DOT___inst_type_T_185)));
    }
    vlSelf->top__DOT__IDU__DOT___br_taken_T_35 = ((0x3cU 
                                                   == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                   ? 
                                                  (vlSelf->top__DOT__Register_io_rdata1 
                                                   >= vlSelf->top__DOT__Register_io_rdata2)
                                                   : 
                                                  ((0x2dU 
                                                    == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                    ? 
                                                   (vlSelf->top__DOT__Register_io_rdata1 
                                                    < vlSelf->top__DOT__Register_io_rdata2)
                                                    : 
                                                   ((0x2cU 
                                                     == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                     ? 
                                                    VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__Register_io_rdata1, vlSelf->top__DOT__Register_io_rdata2)
                                                     : 
                                                    ((0x2bU 
                                                      == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                      ? 
                                                     VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__Register_io_rdata1, vlSelf->top__DOT__Register_io_rdata2)
                                                      : 
                                                     ((0x29U 
                                                       == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                       ? 
                                                      (vlSelf->top__DOT__Register_io_rdata1 
                                                       == vlSelf->top__DOT__Register_io_rdata2)
                                                       : 
                                                      ((0x2aU 
                                                        == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                        ? 
                                                       (vlSelf->top__DOT__Register_io_rdata1 
                                                        != vlSelf->top__DOT__Register_io_rdata2)
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194)) 
                                                        | (5U 
                                                           == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194)))))))));
    top__DOT__EXU__DOT___alu_res_T_118 = ((8U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                           ? vlSelf->top__DOT__EXU__DOT__and_res
                                           : ((0xaU 
                                               == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                               ? vlSelf->top__DOT__EXU__DOT__xor_res
                                               : ((0x2eU 
                                                   == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                   ? vlSelf->top__DOT__EXU__DOT__xor_res
                                                   : 
                                                  ((0x2fU 
                                                    == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                    ? vlSelf->top__DOT__EXU__DOT__or_res
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                     ? vlSelf->top__DOT__EXU__DOT__or_res
                                                     : 
                                                    ((0x15U 
                                                      == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                      ? vlSelf->top__DOT__EXU__DOT__sra_res
                                                      : 
                                                     ((0xfU 
                                                       == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                       ? vlSelf->top__DOT__EXU_io_to_ms_maddr
                                                       : 
                                                      ((0x10U 
                                                        == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                        ? top__DOT__EXU__DOT___alu_res_T_20
                                                        : 
                                                       ((0xeU 
                                                         == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                         ? vlSelf->top__DOT__EXU__DOT__sub_res
                                                         : 
                                                        ((0xcU 
                                                          == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                          ? top__DOT__EXU__DOT___alu_res_T_20
                                                          : 
                                                         ((0x1fU 
                                                           == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                           ? (QData)((IData)(top__DOT__EXU__DOT___alu_res_T_10))
                                                           : 
                                                          ((0x36U 
                                                            == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                            ? (QData)((IData)(top__DOT__EXU__DOT___alu_res_T_10))
                                                            : 
                                                           ((0x1eU 
                                                             == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                             ? (QData)((IData)(top__DOT__EXU__DOT___alu_res_T_4))
                                                             : 
                                                            ((0x20U 
                                                              == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                              ? (QData)((IData)(top__DOT__EXU__DOT___alu_res_T_4))
                                                              : 
                                                             ((6U 
                                                               == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                               ? 
                                                              (4ULL 
                                                               + vlSelf->top__DOT__EXU__DOT__es_pc)
                                                               : 
                                                              ((5U 
                                                                == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                ? 
                                                               (4ULL 
                                                                + vlSelf->top__DOT__EXU__DOT__es_pc)
                                                                : 
                                                               ((4U 
                                                                 == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                 ? vlSelf->top__DOT__EXU__DOT__src2_value
                                                                 : 
                                                                ((3U 
                                                                  == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                  ? vlSelf->top__DOT__EXU_io_to_ms_maddr
                                                                  : 
                                                                 ((1U 
                                                                   == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                   ? vlSelf->top__DOT__EXU_io_to_ms_maddr
                                                                   : 0ULL)))))))))))))))))));
    vlSelf->top__DOT__IDU__DOT__imm = ((0x45U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))
                                        ? ((((vlSelf->top__DOT__IDU__DOT__inst 
                                              >> 0x1fU)
                                              ? 0x7ffffffffffffULL
                                              : 0ULL) 
                                            << 0xdU) 
                                           | (QData)((IData)(
                                                             ((0x1000U 
                                                               & (vlSelf->top__DOT__IDU__DOT__inst 
                                                                  >> 0x13U)) 
                                                              | ((0x800U 
                                                                  & (vlSelf->top__DOT__IDU__DOT__inst 
                                                                     << 4U)) 
                                                                 | ((0x7e0U 
                                                                     & (vlSelf->top__DOT__IDU__DOT__inst 
                                                                        >> 0x14U)) 
                                                                    | (0x1eU 
                                                                       & (vlSelf->top__DOT__IDU__DOT__inst 
                                                                          >> 7U))))))))
                                        : ((0x44U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))
                                            ? ((((vlSelf->top__DOT__IDU__DOT__inst 
                                                  >> 0x1fU)
                                                  ? 0xfffffffffffffULL
                                                  : 0ULL) 
                                                << 0xcU) 
                                               | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->top__DOT__IDU__DOT__inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->top__DOT__IDU__DOT__inst 
                                                                        >> 7U))))))
                                            : ((0x42U 
                                                == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))
                                                ? (
                                                   ((QData)((IData)(
                                                                    ((vlSelf->top__DOT__IDU__DOT__inst 
                                                                      >> 0x1fU)
                                                                      ? 0xffffffffU
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (0xfffff000U 
                                                                      & vlSelf->top__DOT__IDU__DOT__inst))))
                                                : (
                                                   (0x43U 
                                                    == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))
                                                    ? 
                                                   ((((vlSelf->top__DOT__IDU__DOT__inst 
                                                       >> 0x1fU)
                                                       ? 0x7ffffffffffULL
                                                       : 0ULL) 
                                                     << 0x15U) 
                                                    | (QData)((IData)(
                                                                      ((0x100000U 
                                                                        & (vlSelf->top__DOT__IDU__DOT__inst 
                                                                           >> 0xbU)) 
                                                                       | ((0xff000U 
                                                                           & vlSelf->top__DOT__IDU__DOT__inst) 
                                                                          | ((0x800U 
                                                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                                                >> 9U)) 
                                                                             | (0x7feU 
                                                                                & (vlSelf->top__DOT__IDU__DOT__inst 
                                                                                >> 0x14U))))))))
                                                    : 
                                                   ((0x40U 
                                                     == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))
                                                     ? 
                                                    ((((vlSelf->top__DOT__IDU__DOT__inst 
                                                        >> 0x1fU)
                                                        ? 0xfffffffffffffULL
                                                        : 0ULL) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       (vlSelf->top__DOT__IDU__DOT__inst 
                                                                        >> 0x14U))))
                                                     : 0ULL)))));
    vlSelf->top__DOT__IDU__DOT__src2_is_imm = ((0x45U 
                                                == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188)) 
                                               | ((0x43U 
                                                   == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188)) 
                                                  | ((0x44U 
                                                      == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188)) 
                                                     | ((0x42U 
                                                         == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188)) 
                                                        | (0x40U 
                                                           == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))))));
    vlSelf->top__DOT__IDU__DOT__br_taken = ((0x3eU 
                                             == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194)) 
                                            | ((0x3dU 
                                                == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194)) 
                                               | (IData)(vlSelf->top__DOT__IDU__DOT___br_taken_T_35)));
    VL_EXTEND_WQ(127,64, __Vtemp43, (((QData)((IData)(
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__EXU__DOT___divw_res_T_4 
                                                                   >> 0x1fU)))
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__EXU__DOT___divw_res_T_4))));
    VL_EXTEND_WQ(127,64, __Vtemp44, (((QData)((IData)(
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__EXU__DOT___mluw_res_T_2 
                                                                   >> 0x1fU)))
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__EXU__DOT___mluw_res_T_2))));
    VL_EXTEND_WQ(128,64, __Vtemp45, vlSelf->top__DOT__EXU__DOT__src1_value);
    VL_EXTEND_WQ(128,64, __Vtemp46, vlSelf->top__DOT__EXU__DOT__src2_value);
    VL_MUL_W(4, __Vtemp47, __Vtemp45, __Vtemp46);
    VL_EXTEND_WQ(127,64, __Vtemp48, (((QData)((IData)(
                                                      __Vtemp47[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp47[0U]))));
    VL_EXTEND_WQ(127,64, __Vtemp49, top__DOT__EXU__DOT___alu_res_T_50);
    VL_EXTEND_WQ(127,64, __Vtemp50, top__DOT__EXU__DOT___alu_res_T_45);
    VL_EXTEND_WQ(127,64, __Vtemp51, top__DOT__EXU__DOT___alu_res_T_50);
    VL_EXTEND_WQ(127,64, __Vtemp52, top__DOT__EXU__DOT___alu_res_T_45);
    VL_EXTEND_WQ(127,64, __Vtemp53, top__DOT__EXU__DOT___alu_res_T_35);
    VL_EXTEND_WQ(127,64, __Vtemp54, vlSelf->top__DOT__EXU__DOT__srl_res);
    VL_EXTEND_WQ(127,64, __Vtemp55, ((0x16U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                      ? top__DOT__EXU__DOT___alu_res_T_35
                                      : ((0xdU == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                          ? (((QData)((IData)(
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__EXU__DOT__sub_res 
                                                                           >> 0x1fU)))
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__sub_res)))
                                          : ((9U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                              ? vlSelf->top__DOT__EXU__DOT__and_res
                                              : top__DOT__EXU__DOT___alu_res_T_118))));
    if ((0x13U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))) {
        vlSelf->top__DOT__EXU__DOT___alu_res_T_144[0U] 
            = __Vtemp43[0U];
        vlSelf->top__DOT__EXU__DOT___alu_res_T_144[1U] 
            = __Vtemp43[1U];
        vlSelf->top__DOT__EXU__DOT___alu_res_T_144[2U] 
            = __Vtemp43[2U];
        vlSelf->top__DOT__EXU__DOT___alu_res_T_144[3U] 
            = __Vtemp43[3U];
    } else {
        vlSelf->top__DOT__EXU__DOT___alu_res_T_144[0U] 
            = ((0x12U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                ? __Vtemp44[0U] : ((0x11U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                    ? __Vtemp48[0U]
                                    : ((0x1dU == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                        ? __Vtemp49[0U]
                                        : ((0x1cU == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                            ? __Vtemp50[0U]
                                            : ((0x1bU 
                                                == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                ? __Vtemp51[0U]
                                                : (
                                                   (0x1aU 
                                                    == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp52[0U]
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp53[0U]
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp54[0U]
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                       ? 
                                                      vlSelf->top__DOT__EXU__DOT__sll_res[0U]
                                                       : 
                                                      __Vtemp55[0U])))))))));
        vlSelf->top__DOT__EXU__DOT___alu_res_T_144[1U] 
            = ((0x12U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                ? __Vtemp44[1U] : ((0x11U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                    ? __Vtemp48[1U]
                                    : ((0x1dU == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                        ? __Vtemp49[1U]
                                        : ((0x1cU == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                            ? __Vtemp50[1U]
                                            : ((0x1bU 
                                                == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                ? __Vtemp51[1U]
                                                : (
                                                   (0x1aU 
                                                    == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp52[1U]
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp53[1U]
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp54[1U]
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                       ? 
                                                      vlSelf->top__DOT__EXU__DOT__sll_res[1U]
                                                       : 
                                                      __Vtemp55[1U])))))))));
        vlSelf->top__DOT__EXU__DOT___alu_res_T_144[2U] 
            = ((0x12U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                ? __Vtemp44[2U] : ((0x11U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                    ? __Vtemp48[2U]
                                    : ((0x1dU == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                        ? __Vtemp49[2U]
                                        : ((0x1cU == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                            ? __Vtemp50[2U]
                                            : ((0x1bU 
                                                == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                ? __Vtemp51[2U]
                                                : (
                                                   (0x1aU 
                                                    == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp52[2U]
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp53[2U]
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp54[2U]
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                       ? 
                                                      vlSelf->top__DOT__EXU__DOT__sll_res[2U]
                                                       : 
                                                      __Vtemp55[2U])))))))));
        vlSelf->top__DOT__EXU__DOT___alu_res_T_144[3U] 
            = ((0x12U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                ? __Vtemp44[3U] : ((0x11U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                    ? __Vtemp48[3U]
                                    : ((0x1dU == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                        ? __Vtemp49[3U]
                                        : ((0x1cU == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                            ? __Vtemp50[3U]
                                            : ((0x1bU 
                                                == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                ? __Vtemp51[3U]
                                                : (
                                                   (0x1aU 
                                                    == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp52[3U]
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp53[3U]
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp54[3U]
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                       ? 
                                                      vlSelf->top__DOT__EXU__DOT__sll_res[3U]
                                                       : 
                                                      __Vtemp55[3U])))))))));
    }
    vlSelf->top__DOT__IDU__DOT___br_target_T_1 = (((IData)(vlSelf->top__DOT__IDU__DOT__src1_is_pc)
                                                    ? vlSelf->top__DOT__IFU__DOT__fs_pc
                                                    : vlSelf->top__DOT__Register_io_rdata1) 
                                                  + 
                                                  ((IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)
                                                    ? vlSelf->top__DOT__IDU__DOT__imm
                                                    : vlSelf->top__DOT__Register_io_rdata2));
    vlSelf->top__DOT__IDU__DOT__conflict = (((~ (IData)(vlSelf->top__DOT__IDU__DOT__src1_is_pc)) 
                                             & (((((((0x1fU 
                                                      & (vlSelf->top__DOT__IDU__DOT__inst 
                                                         >> 0xfU)) 
                                                     == (IData)(vlSelf->top__DOT__EXU__DOT__es_rd)) 
                                                    & (0U 
                                                       != 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__IDU__DOT__inst 
                                                           >> 0xfU)))) 
                                                   & (IData)(vlSelf->top__DOT__EXU__DOT__es_rf_we)) 
                                                  & (IData)(vlSelf->top__DOT__EXU__DOT__es_valid)) 
                                                 | (((((0x1fU 
                                                        & (vlSelf->top__DOT__IDU__DOT__inst 
                                                           >> 0xfU)) 
                                                       == (IData)(vlSelf->top__DOT__LSU__DOT__ms_rf_dst)) 
                                                      & (0U 
                                                         != 
                                                         (0x1fU 
                                                          & (vlSelf->top__DOT__IDU__DOT__inst 
                                                             >> 0xfU)))) 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__ms_rf_we)) 
                                                    & (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid))) 
                                                | (((((0x1fU 
                                                       & (vlSelf->top__DOT__IDU__DOT__inst 
                                                          >> 0xfU)) 
                                                      == (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_dst)) 
                                                     & (0U 
                                                        != 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__IDU__DOT__inst 
                                                            >> 0xfU)))) 
                                                    & (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we)) 
                                                   & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)))) 
                                            | (((~ (IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)) 
                                                | (0x45U 
                                                   != (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))) 
                                               & (((((((0x1fU 
                                                        & (vlSelf->top__DOT__IDU__DOT__inst 
                                                           >> 0x14U)) 
                                                       == (IData)(vlSelf->top__DOT__EXU__DOT__es_rd)) 
                                                      & (0U 
                                                         != 
                                                         (0x1fU 
                                                          & (vlSelf->top__DOT__IDU__DOT__inst 
                                                             >> 0x14U)))) 
                                                     & (IData)(vlSelf->top__DOT__EXU__DOT__es_rf_we)) 
                                                    & (IData)(vlSelf->top__DOT__EXU__DOT__es_valid)) 
                                                   | (((((0x1fU 
                                                          & (vlSelf->top__DOT__IDU__DOT__inst 
                                                             >> 0x14U)) 
                                                         == (IData)(vlSelf->top__DOT__LSU__DOT__ms_rf_dst)) 
                                                        & (0U 
                                                           != 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                                               >> 0x14U)))) 
                                                       & (IData)(vlSelf->top__DOT__LSU__DOT__ms_rf_we)) 
                                                      & (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid))) 
                                                  | (((((0x1fU 
                                                         & (vlSelf->top__DOT__IDU__DOT__inst 
                                                            >> 0x14U)) 
                                                        == (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_dst)) 
                                                       & (0U 
                                                          != 
                                                          (0x1fU 
                                                           & (vlSelf->top__DOT__IDU__DOT__inst 
                                                              >> 0x14U)))) 
                                                      & (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we)) 
                                                     & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)))));
    vlSelf->top__DOT__IDU__DOT__ds_allowin = (1U & 
                                              ((~ (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)) 
                                               | (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict))));
    vlSelf->top__DOT__IDU_io_ds_to_es_valid = ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid) 
                                               & (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict)));
    vlSelf->top__DOT__IFU__DOT__fs_allowin = (1U & 
                                              ((~ (IData)(vlSelf->top__DOT__IFU__DOT__fs_valid)) 
                                               | ((~ (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)) 
                                                  | (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict)))));
    vlSelf->top__DOT__IFU__DOT___GEN_1 = ((IData)(vlSelf->top__DOT__IFU__DOT__fs_allowin) 
                                          | ((~ ((IData)(vlSelf->top__DOT__IDU__DOT__br_taken) 
                                                 & (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict)))) 
                                             & (IData)(vlSelf->top__DOT__IFU__DOT__fs_valid)));
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
