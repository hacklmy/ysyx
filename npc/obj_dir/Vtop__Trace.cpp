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
    VlWide<4>/*127:0*/ __Vtemp201;
    VlWide<4>/*127:0*/ __Vtemp202;
    VlWide<4>/*127:0*/ __Vtemp203;
    VlWide<4>/*127:0*/ __Vtemp204;
    VlWide<4>/*127:0*/ __Vtemp205;
    VlWide<4>/*127:0*/ __Vtemp206;
    VlWide<4>/*127:0*/ __Vtemp207;
    VlWide<3>/*95:0*/ __Vtemp210;
    VlWide<3>/*95:0*/ __Vtemp211;
    VlWide<3>/*95:0*/ __Vtemp213;
    VlWide<3>/*95:0*/ __Vtemp214;
    VlWide<3>/*95:0*/ __Vtemp215;
    VlWide<3>/*95:0*/ __Vtemp216;
    VlWide<4>/*127:0*/ __Vtemp217;
    VlWide<4>/*127:0*/ __Vtemp218;
    VlWide<4>/*127:0*/ __Vtemp239;
    VlWide<4>/*127:0*/ __Vtemp240;
    VlWide<4>/*127:0*/ __Vtemp241;
    VlWide<3>/*95:0*/ __Vtemp244;
    VlWide<3>/*95:0*/ __Vtemp245;
    VlWide<3>/*95:0*/ __Vtemp247;
    VlWide<3>/*95:0*/ __Vtemp248;
    VlWide<3>/*95:0*/ __Vtemp249;
    VlWide<3>/*95:0*/ __Vtemp250;
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
            tracep->chgBit(oldp+6,(((IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we) 
                                    & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid))));
            tracep->chgCData(oldp+7,(vlSelf->top__DOT__WBU__DOT__ws_rf_dst),5);
            tracep->chgQData(oldp+8,(vlSelf->top__DOT__WBU__DOT__ws_res),64);
            tracep->chgBit(oldp+10,((1U & ((~ (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)) 
                                           | (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict))))));
            tracep->chgBit(oldp+11,(((IData)(vlSelf->top__DOT__IDU__DOT__br_taken) 
                                     & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
            tracep->chgQData(oldp+12,(((6U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                        ? (0xfffffffffffffffeULL 
                                           & vlSelf->top__DOT__IDU__DOT___br_target_T_1)
                                        : vlSelf->top__DOT__IDU__DOT___br_target_T_1)),64);
            tracep->chgBit(oldp+14,(((IData)(vlSelf->top__DOT__IDU__DOT__br_taken) 
                                     & (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict)))));
            tracep->chgQData(oldp+15,(vlSelf->top__DOT__IFU__DOT__fs_pc),64);
            tracep->chgBit(oldp+17,(vlSelf->top__DOT__IFU__DOT__fs_valid));
            tracep->chgIData(oldp+18,((IData)(vlSelf->top__DOT__IFU__DOT__inst_read_Rdata)),32);
            tracep->chgBit(oldp+19,(vlSelf->top__DOT__IDU_io_ds_to_es_valid));
            tracep->chgQData(oldp+20,(vlSelf->top__DOT__IDU__DOT__ds_pc),64);
            tracep->chgIData(oldp+22,(vlSelf->top__DOT__IDU__DOT___inst_now_T_194),32);
            tracep->chgQData(oldp+23,(((IData)(vlSelf->top__DOT__IDU__DOT__src1_is_pc)
                                        ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                        : vlSelf->top__DOT__Register_io_rdata1)),64);
            tracep->chgQData(oldp+25,(((IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)
                                        ? vlSelf->top__DOT__IDU__DOT__imm
                                        : vlSelf->top__DOT__Register_io_rdata2)),64);
            tracep->chgCData(oldp+27,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 7U))),5);
            tracep->chgQData(oldp+28,(((0x27U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
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
            tracep->chgBit(oldp+30,(((0x100073U != vlSelf->top__DOT__IDU__DOT__inst) 
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
            tracep->chgBit(oldp+31,((0x44U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))));
            tracep->chgBit(oldp+32,(((0x3003U == (0x707fU 
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
            tracep->chgCData(oldp+33,(((0x3023U == 
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
            tracep->chgBit(oldp+34,(vlSelf->top__DOT__EXU__DOT__es_rf_we));
            tracep->chgBit(oldp+35,(vlSelf->top__DOT__LSU_io_ms_rf_we));
            tracep->chgBit(oldp+36,(vlSelf->top__DOT__WBU__DOT__ws_rf_we));
            tracep->chgBit(oldp+37,(vlSelf->top__DOT__EXU__DOT__es_valid));
            tracep->chgBit(oldp+38,(vlSelf->top__DOT__LSU__DOT__ms_valid));
            tracep->chgBit(oldp+39,(vlSelf->top__DOT__WBU__DOT__ws_valid));
            tracep->chgCData(oldp+40,(vlSelf->top__DOT__EXU__DOT__es_rd),5);
            tracep->chgCData(oldp+41,(vlSelf->top__DOT__LSU__DOT__ms_rf_dst),5);
            tracep->chgQData(oldp+42,(vlSelf->top__DOT__EXU__DOT__es_pc),64);
            VL_EXTEND_WQ(127,64, __Vtemp201, vlSelf->top__DOT__EXU__DOT__srl_res);
            VL_EXTEND_WQ(127,64, __Vtemp202, vlSelf->top__DOT__EXU__DOT__sra_res);
            VL_EXTEND_WQ(127,64, __Vtemp203, VL_MODDIVS_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value));
            VL_EXTEND_WQ(127,64, __Vtemp204, VL_MODDIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value));
            VL_EXTEND_WQ(127,64, __Vtemp205, (((QData)((IData)(
                                                               ((vlSelf->top__DOT__EXU__DOT__remuw_res 
                                                                 >> 0x1fU)
                                                                 ? 0xffffffffU
                                                                 : 0U))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__remuw_res))));
            VL_EXTEND_WQ(127,64, __Vtemp206, (((QData)((IData)(
                                                               ((vlSelf->top__DOT__EXU__DOT__remw_res 
                                                                 >> 0x1fU)
                                                                 ? 0xffffffffU
                                                                 : 0U))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__remw_res))));
            VL_EXTEND_WQ(127,64, __Vtemp207, (((QData)((IData)(
                                                               ((vlSelf->top__DOT__EXU__DOT__divuw_res 
                                                                 >> 0x1fU)
                                                                 ? 0xffffffffU
                                                                 : 0U))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__divuw_res))));
            VL_EXTENDS_WQ(65,64, __Vtemp210, vlSelf->top__DOT__EXU__DOT__src1_value);
            __Vtemp211[0U] = __Vtemp210[0U];
            __Vtemp211[1U] = __Vtemp210[1U];
            __Vtemp211[2U] = (1U & __Vtemp210[2U]);
            VL_EXTENDS_WQ(65,64, __Vtemp213, vlSelf->top__DOT__EXU__DOT__src2_value);
            __Vtemp214[0U] = __Vtemp213[0U];
            __Vtemp214[1U] = __Vtemp213[1U];
            __Vtemp214[2U] = (1U & __Vtemp213[2U]);
            VL_DIVS_WWW(65, __Vtemp215, __Vtemp211, __Vtemp214);
            __Vtemp216[0U] = __Vtemp215[0U];
            __Vtemp216[1U] = __Vtemp215[1U];
            __Vtemp216[2U] = (1U & __Vtemp215[2U]);
            VL_EXTEND_WW(127,65, __Vtemp217, __Vtemp216);
            VL_EXTEND_WQ(127,64, __Vtemp218, VL_DIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value));
            tracep->chgQData(oldp+44,((((QData)((IData)(
                                                        ((0x38U 
                                                          == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                          ? 
                                                         __Vtemp201[1U]
                                                          : 
                                                         ((0x39U 
                                                           == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                           ? 
                                                          __Vtemp202[1U]
                                                           : 
                                                          ((0x37U 
                                                            == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                            ? 
                                                           vlSelf->top__DOT__EXU__DOT__sll_res[1U]
                                                            : 
                                                           ((0x34U 
                                                             == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                             ? 
                                                            __Vtemp203[1U]
                                                             : 
                                                            ((0x33U 
                                                              == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                              ? 
                                                             __Vtemp204[1U]
                                                              : 
                                                             ((0x32U 
                                                               == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                               ? 
                                                              __Vtemp205[1U]
                                                               : 
                                                              ((0x14U 
                                                                == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                                ? 
                                                               __Vtemp206[1U]
                                                                : 
                                                               ((0x35U 
                                                                 == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                                 ? 
                                                                __Vtemp207[1U]
                                                                 : 
                                                                ((0x31U 
                                                                  == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                                  ? 
                                                                 __Vtemp217[1U]
                                                                  : 
                                                                 ((0x30U 
                                                                   == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                                   ? 
                                                                  __Vtemp218[1U]
                                                                   : 
                                                                  vlSelf->top__DOT__EXU__DOT___alu_res_T_144[1U])))))))))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0x38U 
                                                                      == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                                      ? 
                                                                     __Vtemp201[0U]
                                                                      : 
                                                                     ((0x39U 
                                                                       == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                                       ? 
                                                                      __Vtemp202[0U]
                                                                       : 
                                                                      ((0x37U 
                                                                        == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                                        ? 
                                                                       vlSelf->top__DOT__EXU__DOT__sll_res[0U]
                                                                        : 
                                                                       ((0x34U 
                                                                         == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                                         ? 
                                                                        __Vtemp203[0U]
                                                                         : 
                                                                        ((0x33U 
                                                                          == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                                          ? 
                                                                         __Vtemp204[0U]
                                                                          : 
                                                                         ((0x32U 
                                                                           == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                                           ? 
                                                                          __Vtemp205[0U]
                                                                           : 
                                                                          ((0x14U 
                                                                            == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                                            ? 
                                                                           __Vtemp206[0U]
                                                                            : 
                                                                           ((0x35U 
                                                                             == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                                             ? 
                                                                            __Vtemp207[0U]
                                                                             : 
                                                                            ((0x31U 
                                                                              == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                                              ? 
                                                                             __Vtemp217[0U]
                                                                              : 
                                                                             ((0x30U 
                                                                               == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                                               ? 
                                                                              __Vtemp218[0U]
                                                                               : 
                                                                              vlSelf->top__DOT__EXU__DOT___alu_res_T_144[0U])))))))))))))),64);
            tracep->chgQData(oldp+46,(vlSelf->top__DOT__EXU__DOT__store_data),64);
            tracep->chgBit(oldp+48,(vlSelf->top__DOT__EXU__DOT__st_we));
            tracep->chgCData(oldp+49,(vlSelf->top__DOT__EXU__DOT__st_wstrb),8);
            tracep->chgBit(oldp+50,(vlSelf->top__DOT__EXU__DOT__ld_we));
            tracep->chgQData(oldp+51,((vlSelf->top__DOT__EXU__DOT__src1_value 
                                       + vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            tracep->chgQData(oldp+53,(vlSelf->top__DOT__LSU__DOT__ms_pc),64);
            tracep->chgQData(oldp+55,(((IData)(vlSelf->top__DOT__LSU__DOT__ren)
                                        ? vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata
                                        : vlSelf->top__DOT__LSU__DOT__ms_res)),64);
            tracep->chgBit(oldp+57,(vlSelf->top__DOT__LSU__DOT__ms_rf_we));
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__WBU__DOT__ws_pc),64);
            tracep->chgIData(oldp+60,((2U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))),32);
            tracep->chgIData(oldp+61,((0x3dU == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))),32);
            tracep->chgBit(oldp+62,(vlSelf->top__DOT__diff_step));
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__Register__DOT__Reg[0]),64);
            tracep->chgQData(oldp+65,(vlSelf->top__DOT__Register__DOT__Reg[1]),64);
            tracep->chgQData(oldp+67,(vlSelf->top__DOT__Register__DOT__Reg[2]),64);
            tracep->chgQData(oldp+69,(vlSelf->top__DOT__Register__DOT__Reg[3]),64);
            tracep->chgQData(oldp+71,(vlSelf->top__DOT__Register__DOT__Reg[4]),64);
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__Register__DOT__Reg[5]),64);
            tracep->chgQData(oldp+75,(vlSelf->top__DOT__Register__DOT__Reg[6]),64);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__Register__DOT__Reg[7]),64);
            tracep->chgQData(oldp+79,(vlSelf->top__DOT__Register__DOT__Reg[8]),64);
            tracep->chgQData(oldp+81,(vlSelf->top__DOT__Register__DOT__Reg[9]),64);
            tracep->chgQData(oldp+83,(vlSelf->top__DOT__Register__DOT__Reg[10]),64);
            tracep->chgQData(oldp+85,(vlSelf->top__DOT__Register__DOT__Reg[11]),64);
            tracep->chgQData(oldp+87,(vlSelf->top__DOT__Register__DOT__Reg[12]),64);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__Register__DOT__Reg[13]),64);
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__Register__DOT__Reg[14]),64);
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__Register__DOT__Reg[15]),64);
            tracep->chgQData(oldp+95,(vlSelf->top__DOT__Register__DOT__Reg[16]),64);
            tracep->chgQData(oldp+97,(vlSelf->top__DOT__Register__DOT__Reg[17]),64);
            tracep->chgQData(oldp+99,(vlSelf->top__DOT__Register__DOT__Reg[18]),64);
            tracep->chgQData(oldp+101,(vlSelf->top__DOT__Register__DOT__Reg[19]),64);
            tracep->chgQData(oldp+103,(vlSelf->top__DOT__Register__DOT__Reg[20]),64);
            tracep->chgQData(oldp+105,(vlSelf->top__DOT__Register__DOT__Reg[21]),64);
            tracep->chgQData(oldp+107,(vlSelf->top__DOT__Register__DOT__Reg[22]),64);
            tracep->chgQData(oldp+109,(vlSelf->top__DOT__Register__DOT__Reg[23]),64);
            tracep->chgQData(oldp+111,(vlSelf->top__DOT__Register__DOT__Reg[24]),64);
            tracep->chgQData(oldp+113,(vlSelf->top__DOT__Register__DOT__Reg[25]),64);
            tracep->chgQData(oldp+115,(vlSelf->top__DOT__Register__DOT__Reg[26]),64);
            tracep->chgQData(oldp+117,(vlSelf->top__DOT__Register__DOT__Reg[27]),64);
            tracep->chgQData(oldp+119,(vlSelf->top__DOT__Register__DOT__Reg[28]),64);
            tracep->chgQData(oldp+121,(vlSelf->top__DOT__Register__DOT__Reg[29]),64);
            tracep->chgQData(oldp+123,(vlSelf->top__DOT__Register__DOT__Reg[30]),64);
            tracep->chgQData(oldp+125,(vlSelf->top__DOT__Register__DOT__Reg[31]),64);
            tracep->chgQData(oldp+127,(vlSelf->top__DOT__Register__DOT__Reg
                                       [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                                  >> 0xfU))]),64);
            tracep->chgQData(oldp+129,(vlSelf->top__DOT__Register__DOT__Reg
                                       [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                                  >> 0x14U))]),64);
            tracep->chgQData(oldp+131,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0U]),64);
            tracep->chgQData(oldp+133,(vlSelf->top__DOT__Register__DOT__Reg
                                       [1U]),64);
            tracep->chgQData(oldp+135,(vlSelf->top__DOT__Register__DOT__Reg
                                       [2U]),64);
            tracep->chgQData(oldp+137,(vlSelf->top__DOT__Register__DOT__Reg
                                       [3U]),64);
            tracep->chgQData(oldp+139,(vlSelf->top__DOT__Register__DOT__Reg
                                       [4U]),64);
            tracep->chgQData(oldp+141,(vlSelf->top__DOT__Register__DOT__Reg
                                       [5U]),64);
            tracep->chgQData(oldp+143,(vlSelf->top__DOT__Register__DOT__Reg
                                       [6U]),64);
            tracep->chgQData(oldp+145,(vlSelf->top__DOT__Register__DOT__Reg
                                       [7U]),64);
            tracep->chgQData(oldp+147,(vlSelf->top__DOT__Register__DOT__Reg
                                       [8U]),64);
            tracep->chgQData(oldp+149,(vlSelf->top__DOT__Register__DOT__Reg
                                       [9U]),64);
            tracep->chgQData(oldp+151,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xaU]),64);
            tracep->chgQData(oldp+153,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xbU]),64);
            tracep->chgQData(oldp+155,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xcU]),64);
            tracep->chgQData(oldp+157,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xdU]),64);
            tracep->chgQData(oldp+159,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xeU]),64);
            tracep->chgQData(oldp+161,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xfU]),64);
            tracep->chgQData(oldp+163,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x10U]),64);
            tracep->chgQData(oldp+165,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x11U]),64);
            tracep->chgQData(oldp+167,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x12U]),64);
            tracep->chgQData(oldp+169,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x13U]),64);
            tracep->chgQData(oldp+171,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x14U]),64);
            tracep->chgQData(oldp+173,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x15U]),64);
            tracep->chgQData(oldp+175,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x16U]),64);
            tracep->chgQData(oldp+177,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x17U]),64);
            tracep->chgQData(oldp+179,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x18U]),64);
            tracep->chgQData(oldp+181,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x19U]),64);
            tracep->chgQData(oldp+183,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1aU]),64);
            tracep->chgQData(oldp+185,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1bU]),64);
            tracep->chgQData(oldp+187,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1cU]),64);
            tracep->chgQData(oldp+189,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1dU]),64);
            tracep->chgQData(oldp+191,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1eU]),64);
            tracep->chgQData(oldp+193,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1fU]),64);
            tracep->chgQData(oldp+195,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0]),64);
            tracep->chgQData(oldp+197,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[1]),64);
            tracep->chgQData(oldp+199,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[2]),64);
            tracep->chgQData(oldp+201,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[3]),64);
            tracep->chgQData(oldp+203,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[4]),64);
            tracep->chgQData(oldp+205,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[5]),64);
            tracep->chgQData(oldp+207,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[6]),64);
            tracep->chgQData(oldp+209,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[7]),64);
            tracep->chgQData(oldp+211,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[8]),64);
            tracep->chgQData(oldp+213,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[9]),64);
            tracep->chgQData(oldp+215,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[10]),64);
            tracep->chgQData(oldp+217,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[11]),64);
            tracep->chgQData(oldp+219,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[12]),64);
            tracep->chgQData(oldp+221,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[13]),64);
            tracep->chgQData(oldp+223,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[14]),64);
            tracep->chgQData(oldp+225,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[15]),64);
            tracep->chgQData(oldp+227,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[16]),64);
            tracep->chgQData(oldp+229,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[17]),64);
            tracep->chgQData(oldp+231,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[18]),64);
            tracep->chgQData(oldp+233,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[19]),64);
            tracep->chgQData(oldp+235,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[20]),64);
            tracep->chgQData(oldp+237,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[21]),64);
            tracep->chgQData(oldp+239,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[22]),64);
            tracep->chgQData(oldp+241,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[23]),64);
            tracep->chgQData(oldp+243,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[24]),64);
            tracep->chgQData(oldp+245,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[25]),64);
            tracep->chgQData(oldp+247,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[26]),64);
            tracep->chgQData(oldp+249,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[27]),64);
            tracep->chgQData(oldp+251,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[28]),64);
            tracep->chgQData(oldp+253,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[29]),64);
            tracep->chgQData(oldp+255,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[30]),64);
            tracep->chgQData(oldp+257,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[31]),64);
            tracep->chgQData(oldp+259,(vlSelf->top__DOT__IFU__DOT__inst_read_Rdata),64);
            tracep->chgQData(oldp+261,((4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc)),64);
            tracep->chgBit(oldp+263,(vlSelf->top__DOT__IFU__DOT__fs_allowin));
            tracep->chgBit(oldp+264,(vlSelf->top__DOT__IDU__DOT__ds_valid));
            tracep->chgIData(oldp+265,(vlSelf->top__DOT__IDU__DOT__inst),32);
            tracep->chgBit(oldp+266,(vlSelf->top__DOT__IDU__DOT__br_taken));
            tracep->chgBit(oldp+267,(vlSelf->top__DOT__IDU__DOT__src1_is_pc));
            tracep->chgIData(oldp+268,(vlSelf->top__DOT__IDU__DOT___inst_type_T_188),32);
            tracep->chgBit(oldp+269,(vlSelf->top__DOT__IDU__DOT__src2_is_imm));
            tracep->chgBit(oldp+270,(vlSelf->top__DOT__IDU__DOT__conflict));
            tracep->chgBit(oldp+271,((1U & (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict)))));
            tracep->chgBit(oldp+272,(vlSelf->top__DOT__IDU__DOT__ds_allowin));
            tracep->chgSData(oldp+273,((vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0x14U)),12);
            tracep->chgIData(oldp+274,(((0x80000U & 
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
            tracep->chgIData(oldp+275,((vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0xcU)),20);
            tracep->chgSData(oldp+276,(((0xfe0U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->top__DOT__IDU__DOT__inst 
                                            >> 7U)))),12);
            tracep->chgSData(oldp+277,(((0x800U & (vlSelf->top__DOT__IDU__DOT__inst 
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
            tracep->chgQData(oldp+278,(vlSelf->top__DOT__IDU__DOT__imm),64);
            tracep->chgQData(oldp+280,(vlSelf->top__DOT__EXU__DOT__src1_value),64);
            tracep->chgQData(oldp+282,(vlSelf->top__DOT__EXU__DOT__src2_value),64);
            tracep->chgIData(oldp+284,(vlSelf->top__DOT__EXU__DOT__inst_now),32);
            tracep->chgQData(oldp+285,(vlSelf->top__DOT__EXU__DOT__add_res),64);
            tracep->chgQData(oldp+287,(vlSelf->top__DOT__EXU__DOT__sub_res),64);
            tracep->chgQData(oldp+289,(vlSelf->top__DOT__EXU__DOT__sra_res),64);
            tracep->chgQData(oldp+291,(vlSelf->top__DOT__EXU__DOT__srl_res),64);
            tracep->chgWData(oldp+293,(vlSelf->top__DOT__EXU__DOT__sll_res),127);
            tracep->chgIData(oldp+297,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__EXU__DOT__src1_value), 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),32);
            tracep->chgIData(oldp+298,(vlSelf->top__DOT__EXU__DOT__srlw_res),32);
            tracep->chgQData(oldp+299,(vlSelf->top__DOT__EXU__DOT__sllw_res),63);
            tracep->chgQData(oldp+301,(vlSelf->top__DOT__EXU__DOT__or_res),64);
            tracep->chgQData(oldp+303,(vlSelf->top__DOT__EXU__DOT__xor_res),64);
            tracep->chgQData(oldp+305,(vlSelf->top__DOT__EXU__DOT__and_res),64);
            VL_EXTEND_WQ(128,64, __Vtemp239, vlSelf->top__DOT__EXU__DOT__src1_value);
            VL_EXTEND_WQ(128,64, __Vtemp240, vlSelf->top__DOT__EXU__DOT__src2_value);
            VL_MUL_W(4, __Vtemp241, __Vtemp239, __Vtemp240);
            tracep->chgQData(oldp+307,((((QData)((IData)(
                                                         __Vtemp241[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp241[0U])))),64);
            tracep->chgIData(oldp+309,((IData)(vlSelf->top__DOT__EXU__DOT___mluw_res_T_2)),32);
            tracep->chgIData(oldp+310,((IData)(vlSelf->top__DOT__EXU__DOT___divw_res_T_4)),32);
            tracep->chgIData(oldp+311,(vlSelf->top__DOT__EXU__DOT__divuw_res),32);
            tracep->chgIData(oldp+312,(vlSelf->top__DOT__EXU__DOT__remw_res),32);
            tracep->chgIData(oldp+313,(vlSelf->top__DOT__EXU__DOT__remuw_res),32);
            VL_EXTENDS_WQ(65,64, __Vtemp244, vlSelf->top__DOT__EXU__DOT__src1_value);
            __Vtemp245[0U] = __Vtemp244[0U];
            __Vtemp245[1U] = __Vtemp244[1U];
            __Vtemp245[2U] = (1U & __Vtemp244[2U]);
            VL_EXTENDS_WQ(65,64, __Vtemp247, vlSelf->top__DOT__EXU__DOT__src2_value);
            __Vtemp248[0U] = __Vtemp247[0U];
            __Vtemp248[1U] = __Vtemp247[1U];
            __Vtemp248[2U] = (1U & __Vtemp247[2U]);
            VL_DIVS_WWW(65, __Vtemp249, __Vtemp245, __Vtemp248);
            __Vtemp250[0U] = __Vtemp249[0U];
            __Vtemp250[1U] = __Vtemp249[1U];
            __Vtemp250[2U] = (1U & __Vtemp249[2U]);
            tracep->chgWData(oldp+314,(__Vtemp250),65);
            tracep->chgQData(oldp+317,(VL_DIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            tracep->chgQData(oldp+319,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            tracep->chgQData(oldp+321,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            tracep->chgQData(oldp+323,(vlSelf->top__DOT__LSU__DOT__maddr),64);
            tracep->chgQData(oldp+325,(vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata),64);
            tracep->chgQData(oldp+327,(vlSelf->top__DOT__LSU__DOT__store_data),64);
            tracep->chgCData(oldp+329,(vlSelf->top__DOT__LSU__DOT__wstrb),8);
            tracep->chgBit(oldp+330,(((IData)(vlSelf->top__DOT__LSU__DOT__wen) 
                                      & (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid))));
            tracep->chgBit(oldp+331,(vlSelf->top__DOT__LSU__DOT__ren));
            tracep->chgQData(oldp+332,(vlSelf->top__DOT__LSU__DOT__ms_res),64);
            tracep->chgBit(oldp+334,(vlSelf->top__DOT__LSU__DOT__wen));
        }
        tracep->chgBit(oldp+335,(vlSelf->clock));
        tracep->chgBit(oldp+336,(vlSelf->reset));
        tracep->chgIData(oldp+337,(vlSelf->io_inst),32);
        tracep->chgQData(oldp+338,(vlSelf->io_pc),64);
        tracep->chgBit(oldp+340,(vlSelf->io_step));
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
