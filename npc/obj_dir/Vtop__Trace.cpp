// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp163;
    VlWide<4>/*127:0*/ __Vtemp164;
    VlWide<4>/*127:0*/ __Vtemp165;
    VlWide<4>/*127:0*/ __Vtemp166;
    VlWide<4>/*127:0*/ __Vtemp167;
    VlWide<4>/*127:0*/ __Vtemp168;
    VlWide<4>/*127:0*/ __Vtemp169;
    VlWide<3>/*95:0*/ __Vtemp172;
    VlWide<3>/*95:0*/ __Vtemp173;
    VlWide<3>/*95:0*/ __Vtemp175;
    VlWide<3>/*95:0*/ __Vtemp176;
    VlWide<3>/*95:0*/ __Vtemp177;
    VlWide<3>/*95:0*/ __Vtemp178;
    VlWide<4>/*127:0*/ __Vtemp179;
    VlWide<4>/*127:0*/ __Vtemp180;
    VlWide<4>/*127:0*/ __Vtemp201;
    VlWide<4>/*127:0*/ __Vtemp202;
    VlWide<4>/*127:0*/ __Vtemp203;
    VlWide<3>/*95:0*/ __Vtemp206;
    VlWide<3>/*95:0*/ __Vtemp207;
    VlWide<3>/*95:0*/ __Vtemp209;
    VlWide<3>/*95:0*/ __Vtemp210;
    VlWide<3>/*95:0*/ __Vtemp211;
    VlWide<3>/*95:0*/ __Vtemp212;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0xfU))),5);
            tracep->chgCData(oldp+1,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0x14U))),5);
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__Register_io_rdata1),64);
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__Register_io_rdata2),64);
            tracep->chgBit(oldp+6,(vlSelf->top__DOT__WBU__DOT__ws_rf_we));
            tracep->chgCData(oldp+7,(vlSelf->top__DOT__WBU__DOT__ws_rf_dst),5);
            tracep->chgQData(oldp+8,(vlSelf->top__DOT__WBU__DOT__ws_res),64);
            tracep->chgBit(oldp+10,((1U & ((~ (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)) 
                                           | (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict))))));
            tracep->chgBit(oldp+11,(((0x3eU == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194)) 
                                     | ((0x3dU == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194)) 
                                        | (IData)(vlSelf->top__DOT__IDU__DOT___br_taken_T_35)))));
            tracep->chgQData(oldp+12,(((6U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                        ? (0xfffffffffffffffeULL 
                                           & vlSelf->top__DOT__IDU__DOT___br_target_T_1)
                                        : vlSelf->top__DOT__IDU__DOT___br_target_T_1)),64);
            tracep->chgBit(oldp+14,(((IData)(vlSelf->top__DOT__IDU__DOT__br_taken) 
                                     & (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict)))));
            tracep->chgQData(oldp+15,(vlSelf->top__DOT__IFU__DOT__fs_pc),64);
            tracep->chgBit(oldp+17,(vlSelf->top__DOT__IFU__DOT__fs_valid));
            tracep->chgBit(oldp+18,(vlSelf->top__DOT__IDU_io_ds_to_es_valid));
            tracep->chgQData(oldp+19,(vlSelf->top__DOT__IDU__DOT__ds_pc),64);
            tracep->chgIData(oldp+21,(vlSelf->top__DOT__IDU__DOT___inst_now_T_194),32);
            tracep->chgQData(oldp+22,(((IData)(vlSelf->top__DOT__IDU__DOT__src1_is_pc)
                                        ? vlSelf->top__DOT__IFU__DOT__fs_pc
                                        : vlSelf->top__DOT__Register_io_rdata1)),64);
            tracep->chgQData(oldp+24,(((IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)
                                        ? vlSelf->top__DOT__IDU__DOT__imm
                                        : vlSelf->top__DOT__Register_io_rdata2)),64);
            tracep->chgCData(oldp+26,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 7U))),5);
            tracep->chgQData(oldp+27,(((0x27U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                        ? (QData)((IData)(vlSelf->top__DOT__Register_io_rdata2))
                                        : ((0x28U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                            ? (QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelf->top__DOT__Register_io_rdata2))))
                                            : ((0x26U 
                                                == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                ? (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->top__DOT__Register_io_rdata2))))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                    ? vlSelf->top__DOT__Register_io_rdata2
                                                    : 0ULL))))),64);
            tracep->chgBit(oldp+29,(((0x100073U != vlSelf->top__DOT__IDU__DOT__inst) 
                                     & ((0x3023U != 
                                         (0x707fU & vlSelf->top__DOT__IDU__DOT__inst)) 
                                        & ((0x1023U 
                                            != (0x707fU 
                                                & vlSelf->top__DOT__IDU__DOT__inst)) 
                                           & ((0x23U 
                                               != (0x707fU 
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
                                                                         != vlSelf->top__DOT__IDU__DOT__inst)))))))))))))));
            tracep->chgBit(oldp+30,((0x44U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))));
            tracep->chgBit(oldp+31,(((0x3003U == (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst)) 
                                     | ((0x2003U == 
                                         (0x707fU & vlSelf->top__DOT__IDU__DOT__inst)) 
                                        | ((0x6003U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__IDU__DOT__inst)) 
                                           | ((0x1003U 
                                               == (0x707fU 
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
                                                        & vlSelf->top__DOT__IDU__DOT__inst))))))))));
            tracep->chgCData(oldp+32,(((0x3023U == 
                                        (0x707fU & vlSelf->top__DOT__IDU__DOT__inst))
                                        ? 0xffU : (
                                                   (0x1023U 
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
                                                      : 0U))))),8);
            tracep->chgBit(oldp+33,(vlSelf->top__DOT__EXU__DOT__es_rf_we));
            tracep->chgBit(oldp+34,(vlSelf->top__DOT__LSU__DOT__ms_rf_we));
            tracep->chgBit(oldp+35,(vlSelf->top__DOT__EXU__DOT__es_valid));
            tracep->chgBit(oldp+36,(vlSelf->top__DOT__LSU__DOT__ms_valid));
            tracep->chgBit(oldp+37,(vlSelf->top__DOT__WBU__DOT__ws_valid));
            tracep->chgCData(oldp+38,(vlSelf->top__DOT__EXU__DOT__es_rd),5);
            tracep->chgCData(oldp+39,(vlSelf->top__DOT__LSU__DOT__ms_rf_dst),5);
            tracep->chgCData(oldp+40,((0x1fU & (IData)(
                                                       ((IData)(vlSelf->top__DOT__IDU__DOT__src1_is_pc)
                                                         ? vlSelf->top__DOT__IFU__DOT__fs_pc
                                                         : vlSelf->top__DOT__Register_io_rdata1)))),5);
            tracep->chgCData(oldp+41,((0x1fU & (IData)(
                                                       ((IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)
                                                         ? vlSelf->top__DOT__IDU__DOT__imm
                                                         : vlSelf->top__DOT__Register_io_rdata2)))),5);
            VL_EXTEND_WQ(127,64, __Vtemp163, vlSelf->top__DOT__EXU__DOT__srl_res);
            VL_EXTEND_WQ(127,64, __Vtemp164, vlSelf->top__DOT__EXU__DOT__sra_res);
            VL_EXTEND_WQ(127,64, __Vtemp165, VL_MODDIVS_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value));
            VL_EXTEND_WQ(127,64, __Vtemp166, VL_MODDIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value));
            VL_EXTEND_WQ(127,64, __Vtemp167, (((QData)((IData)(
                                                               ((vlSelf->top__DOT__EXU__DOT__remuw_res 
                                                                 >> 0x1fU)
                                                                 ? 0xffffffffU
                                                                 : 0U))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__remuw_res))));
            VL_EXTEND_WQ(127,64, __Vtemp168, (((QData)((IData)(
                                                               ((vlSelf->top__DOT__EXU__DOT__remw_res 
                                                                 >> 0x1fU)
                                                                 ? 0xffffffffU
                                                                 : 0U))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__remw_res))));
            VL_EXTEND_WQ(127,64, __Vtemp169, (((QData)((IData)(
                                                               ((vlSelf->top__DOT__EXU__DOT__divuw_res 
                                                                 >> 0x1fU)
                                                                 ? 0xffffffffU
                                                                 : 0U))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__divuw_res))));
            VL_EXTENDS_WQ(65,64, __Vtemp172, vlSelf->top__DOT__EXU__DOT__src1_value);
            __Vtemp173[0U] = __Vtemp172[0U];
            __Vtemp173[1U] = __Vtemp172[1U];
            __Vtemp173[2U] = (1U & __Vtemp172[2U]);
            VL_EXTENDS_WQ(65,64, __Vtemp175, vlSelf->top__DOT__EXU__DOT__src2_value);
            __Vtemp176[0U] = __Vtemp175[0U];
            __Vtemp176[1U] = __Vtemp175[1U];
            __Vtemp176[2U] = (1U & __Vtemp175[2U]);
            VL_DIVS_WWW(65, __Vtemp177, __Vtemp173, __Vtemp176);
            __Vtemp178[0U] = __Vtemp177[0U];
            __Vtemp178[1U] = __Vtemp177[1U];
            __Vtemp178[2U] = (1U & __Vtemp177[2U]);
            VL_EXTEND_WW(127,65, __Vtemp179, __Vtemp178);
            VL_EXTEND_WQ(127,64, __Vtemp180, VL_DIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value));
            tracep->chgQData(oldp+42,((((QData)((IData)(
                                                        ((0x38U 
                                                          == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                          ? 
                                                         __Vtemp163[1U]
                                                          : 
                                                         ((0x39U 
                                                           == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                           ? 
                                                          __Vtemp164[1U]
                                                           : 
                                                          ((0x37U 
                                                            == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                            ? 
                                                           vlSelf->top__DOT__EXU__DOT__sll_res[1U]
                                                            : 
                                                           ((0x34U 
                                                             == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                             ? 
                                                            __Vtemp165[1U]
                                                             : 
                                                            ((0x33U 
                                                              == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                              ? 
                                                             __Vtemp166[1U]
                                                              : 
                                                             ((0x32U 
                                                               == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                               ? 
                                                              __Vtemp167[1U]
                                                               : 
                                                              ((0x14U 
                                                                == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                ? 
                                                               __Vtemp168[1U]
                                                                : 
                                                               ((0x35U 
                                                                 == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                 ? 
                                                                __Vtemp169[1U]
                                                                 : 
                                                                ((0x31U 
                                                                  == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                  ? 
                                                                 __Vtemp179[1U]
                                                                  : 
                                                                 ((0x30U 
                                                                   == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                   ? 
                                                                  __Vtemp180[1U]
                                                                   : 
                                                                  vlSelf->top__DOT__EXU__DOT___alu_res_T_144[1U])))))))))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0x38U 
                                                                      == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                      ? 
                                                                     __Vtemp163[0U]
                                                                      : 
                                                                     ((0x39U 
                                                                       == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                       ? 
                                                                      __Vtemp164[0U]
                                                                       : 
                                                                      ((0x37U 
                                                                        == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                        ? 
                                                                       vlSelf->top__DOT__EXU__DOT__sll_res[0U]
                                                                        : 
                                                                       ((0x34U 
                                                                         == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                         ? 
                                                                        __Vtemp165[0U]
                                                                         : 
                                                                        ((0x33U 
                                                                          == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                          ? 
                                                                         __Vtemp166[0U]
                                                                          : 
                                                                         ((0x32U 
                                                                           == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                           ? 
                                                                          __Vtemp167[0U]
                                                                           : 
                                                                          ((0x14U 
                                                                            == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                            ? 
                                                                           __Vtemp168[0U]
                                                                            : 
                                                                           ((0x35U 
                                                                             == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                             ? 
                                                                            __Vtemp169[0U]
                                                                             : 
                                                                            ((0x31U 
                                                                              == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                              ? 
                                                                             __Vtemp179[0U]
                                                                              : 
                                                                             ((0x30U 
                                                                               == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                               ? 
                                                                              __Vtemp180[0U]
                                                                               : 
                                                                              vlSelf->top__DOT__EXU__DOT___alu_res_T_144[0U])))))))))))))),64);
            tracep->chgQData(oldp+44,(vlSelf->top__DOT__EXU__DOT__store_data),64);
            tracep->chgBit(oldp+46,(vlSelf->top__DOT__EXU__DOT__st_we));
            tracep->chgCData(oldp+47,(vlSelf->top__DOT__EXU__DOT__st_wstrb),8);
            tracep->chgBit(oldp+48,(vlSelf->top__DOT__EXU__DOT__ld_we));
            tracep->chgQData(oldp+49,(vlSelf->top__DOT__EXU_io_to_ms_maddr),64);
            tracep->chgQData(oldp+51,(((IData)(vlSelf->top__DOT__LSU__DOT__ren)
                                        ? vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata
                                        : vlSelf->top__DOT__LSU__DOT__ms_res)),64);
            tracep->chgQData(oldp+53,(vlSelf->top__DOT__Register__DOT__Reg[0]),64);
            tracep->chgQData(oldp+55,(vlSelf->top__DOT__Register__DOT__Reg[1]),64);
            tracep->chgQData(oldp+57,(vlSelf->top__DOT__Register__DOT__Reg[2]),64);
            tracep->chgQData(oldp+59,(vlSelf->top__DOT__Register__DOT__Reg[3]),64);
            tracep->chgQData(oldp+61,(vlSelf->top__DOT__Register__DOT__Reg[4]),64);
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__Register__DOT__Reg[5]),64);
            tracep->chgQData(oldp+65,(vlSelf->top__DOT__Register__DOT__Reg[6]),64);
            tracep->chgQData(oldp+67,(vlSelf->top__DOT__Register__DOT__Reg[7]),64);
            tracep->chgQData(oldp+69,(vlSelf->top__DOT__Register__DOT__Reg[8]),64);
            tracep->chgQData(oldp+71,(vlSelf->top__DOT__Register__DOT__Reg[9]),64);
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__Register__DOT__Reg[10]),64);
            tracep->chgQData(oldp+75,(vlSelf->top__DOT__Register__DOT__Reg[11]),64);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__Register__DOT__Reg[12]),64);
            tracep->chgQData(oldp+79,(vlSelf->top__DOT__Register__DOT__Reg[13]),64);
            tracep->chgQData(oldp+81,(vlSelf->top__DOT__Register__DOT__Reg[14]),64);
            tracep->chgQData(oldp+83,(vlSelf->top__DOT__Register__DOT__Reg[15]),64);
            tracep->chgQData(oldp+85,(vlSelf->top__DOT__Register__DOT__Reg[16]),64);
            tracep->chgQData(oldp+87,(vlSelf->top__DOT__Register__DOT__Reg[17]),64);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__Register__DOT__Reg[18]),64);
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__Register__DOT__Reg[19]),64);
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__Register__DOT__Reg[20]),64);
            tracep->chgQData(oldp+95,(vlSelf->top__DOT__Register__DOT__Reg[21]),64);
            tracep->chgQData(oldp+97,(vlSelf->top__DOT__Register__DOT__Reg[22]),64);
            tracep->chgQData(oldp+99,(vlSelf->top__DOT__Register__DOT__Reg[23]),64);
            tracep->chgQData(oldp+101,(vlSelf->top__DOT__Register__DOT__Reg[24]),64);
            tracep->chgQData(oldp+103,(vlSelf->top__DOT__Register__DOT__Reg[25]),64);
            tracep->chgQData(oldp+105,(vlSelf->top__DOT__Register__DOT__Reg[26]),64);
            tracep->chgQData(oldp+107,(vlSelf->top__DOT__Register__DOT__Reg[27]),64);
            tracep->chgQData(oldp+109,(vlSelf->top__DOT__Register__DOT__Reg[28]),64);
            tracep->chgQData(oldp+111,(vlSelf->top__DOT__Register__DOT__Reg[29]),64);
            tracep->chgQData(oldp+113,(vlSelf->top__DOT__Register__DOT__Reg[30]),64);
            tracep->chgQData(oldp+115,(vlSelf->top__DOT__Register__DOT__Reg[31]),64);
            tracep->chgQData(oldp+117,(vlSelf->top__DOT__Register__DOT__Reg
                                       [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                                  >> 0xfU))]),64);
            tracep->chgQData(oldp+119,(vlSelf->top__DOT__Register__DOT__Reg
                                       [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                                  >> 0x14U))]),64);
            tracep->chgQData(oldp+121,((4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc)),64);
            tracep->chgBit(oldp+123,(vlSelf->top__DOT__IFU__DOT__fs_allowin));
            tracep->chgBit(oldp+124,(vlSelf->top__DOT__IDU__DOT__ds_valid));
            tracep->chgIData(oldp+125,(vlSelf->top__DOT__IDU__DOT__inst),32);
            tracep->chgBit(oldp+126,(vlSelf->top__DOT__IDU__DOT__br_taken));
            tracep->chgBit(oldp+127,(vlSelf->top__DOT__IDU__DOT__src1_is_pc));
            tracep->chgIData(oldp+128,(vlSelf->top__DOT__IDU__DOT___inst_type_T_188),32);
            tracep->chgBit(oldp+129,(vlSelf->top__DOT__IDU__DOT__src2_is_imm));
            tracep->chgBit(oldp+130,(vlSelf->top__DOT__IDU__DOT__conflict));
            tracep->chgBit(oldp+131,((1U & (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict)))));
            tracep->chgBit(oldp+132,(vlSelf->top__DOT__IDU__DOT__ds_allowin));
            tracep->chgSData(oldp+133,((vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0x14U)),12);
            tracep->chgIData(oldp+134,(((0x80000U & 
                                         (vlSelf->top__DOT__IDU__DOT__inst 
                                          >> 0xcU)) 
                                        | ((0x7f800U 
                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 1U)) 
                                           | ((0x400U 
                                               & (vlSelf->top__DOT__IDU__DOT__inst 
                                                  >> 0xaU)) 
                                              | (0x3ffU 
                                                 & (vlSelf->top__DOT__IDU__DOT__inst 
                                                    >> 0x15U)))))),20);
            tracep->chgIData(oldp+135,((vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0xcU)),20);
            tracep->chgSData(oldp+136,(((0xfe0U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->top__DOT__IDU__DOT__inst 
                                            >> 7U)))),12);
            tracep->chgSData(oldp+137,(((0x800U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                   >> 0x14U)) 
                                        | ((0x400U 
                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                               << 3U)) 
                                           | ((0x3f0U 
                                               & (vlSelf->top__DOT__IDU__DOT__inst 
                                                  >> 0x15U)) 
                                              | (0xfU 
                                                 & (vlSelf->top__DOT__IDU__DOT__inst 
                                                    >> 8U)))))),12);
            tracep->chgQData(oldp+138,(vlSelf->top__DOT__IDU__DOT__imm),64);
            tracep->chgQData(oldp+140,(vlSelf->top__DOT__EXU__DOT__es_pc),64);
            tracep->chgQData(oldp+142,(vlSelf->top__DOT__EXU__DOT__src1_value),64);
            tracep->chgQData(oldp+144,(vlSelf->top__DOT__EXU__DOT__src2_value),64);
            tracep->chgQData(oldp+146,(vlSelf->top__DOT__EXU__DOT__sub_res),64);
            tracep->chgQData(oldp+148,(vlSelf->top__DOT__EXU__DOT__sra_res),64);
            tracep->chgQData(oldp+150,(vlSelf->top__DOT__EXU__DOT__srl_res),64);
            tracep->chgWData(oldp+152,(vlSelf->top__DOT__EXU__DOT__sll_res),127);
            tracep->chgIData(oldp+156,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__EXU__DOT__src1_value), 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),32);
            tracep->chgIData(oldp+157,(vlSelf->top__DOT__EXU__DOT__srlw_res),32);
            tracep->chgQData(oldp+158,(vlSelf->top__DOT__EXU__DOT__sllw_res),63);
            tracep->chgQData(oldp+160,(vlSelf->top__DOT__EXU__DOT__or_res),64);
            tracep->chgQData(oldp+162,(vlSelf->top__DOT__EXU__DOT__xor_res),64);
            tracep->chgQData(oldp+164,(vlSelf->top__DOT__EXU__DOT__and_res),64);
            VL_EXTEND_WQ(128,64, __Vtemp201, vlSelf->top__DOT__EXU__DOT__src1_value);
            VL_EXTEND_WQ(128,64, __Vtemp202, vlSelf->top__DOT__EXU__DOT__src2_value);
            VL_MUL_W(4, __Vtemp203, __Vtemp201, __Vtemp202);
            tracep->chgQData(oldp+166,((((QData)((IData)(
                                                         __Vtemp203[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp203[0U])))),64);
            tracep->chgIData(oldp+168,((IData)(vlSelf->top__DOT__EXU__DOT___mluw_res_T_2)),32);
            tracep->chgIData(oldp+169,((IData)(vlSelf->top__DOT__EXU__DOT___divw_res_T_4)),32);
            tracep->chgIData(oldp+170,(vlSelf->top__DOT__EXU__DOT__divuw_res),32);
            tracep->chgIData(oldp+171,(vlSelf->top__DOT__EXU__DOT__remw_res),32);
            tracep->chgIData(oldp+172,(vlSelf->top__DOT__EXU__DOT__remuw_res),32);
            VL_EXTENDS_WQ(65,64, __Vtemp206, vlSelf->top__DOT__EXU__DOT__src1_value);
            __Vtemp207[0U] = __Vtemp206[0U];
            __Vtemp207[1U] = __Vtemp206[1U];
            __Vtemp207[2U] = (1U & __Vtemp206[2U]);
            VL_EXTENDS_WQ(65,64, __Vtemp209, vlSelf->top__DOT__EXU__DOT__src2_value);
            __Vtemp210[0U] = __Vtemp209[0U];
            __Vtemp210[1U] = __Vtemp209[1U];
            __Vtemp210[2U] = (1U & __Vtemp209[2U]);
            VL_DIVS_WWW(65, __Vtemp211, __Vtemp207, __Vtemp210);
            __Vtemp212[0U] = __Vtemp211[0U];
            __Vtemp212[1U] = __Vtemp211[1U];
            __Vtemp212[2U] = (1U & __Vtemp211[2U]);
            tracep->chgWData(oldp+173,(__Vtemp212),65);
            tracep->chgQData(oldp+176,(VL_DIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            tracep->chgQData(oldp+178,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            tracep->chgQData(oldp+180,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            tracep->chgQData(oldp+182,(vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata),64);
            tracep->chgQData(oldp+184,(vlSelf->top__DOT__LSU__DOT__store_data),64);
            tracep->chgCData(oldp+186,(vlSelf->top__DOT__LSU__DOT__wstrb),8);
            tracep->chgBit(oldp+187,(vlSelf->top__DOT__LSU__DOT__wen));
            tracep->chgBit(oldp+188,(vlSelf->top__DOT__LSU__DOT__ren));
            tracep->chgQData(oldp+189,(vlSelf->top__DOT__LSU__DOT__ms_res),64);
        }
        tracep->chgBit(oldp+191,(vlSelf->clock));
        tracep->chgBit(oldp+192,(vlSelf->reset));
        tracep->chgQData(oldp+193,(vlSelf->io_pc),64);
        tracep->chgBit(oldp+195,(vlSelf->io_step));
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
