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
    VlWide<4>/*127:0*/ __Vtemp89;
    VlWide<4>/*127:0*/ __Vtemp90;
    VlWide<4>/*127:0*/ __Vtemp91;
    VlWide<4>/*127:0*/ __Vtemp92;
    VlWide<4>/*127:0*/ __Vtemp93;
    VlWide<4>/*127:0*/ __Vtemp94;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__pc_now),64);
            tracep->chgIData(oldp+2,((IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)),32);
            tracep->chgIData(oldp+3,(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134),32);
            tracep->chgCData(oldp+4,((0x1fU & (IData)(
                                                      (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                       >> 0xfU)))),5);
            tracep->chgCData(oldp+5,((0x1fU & (IData)(
                                                      (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                       >> 0x14U)))),5);
            tracep->chgCData(oldp+6,((0x1fU & (IData)(
                                                      (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                       >> 7U)))),5);
            tracep->chgQData(oldp+7,(vlSelf->top__DOT__idu_step_io_imm),64);
            tracep->chgBit(oldp+9,(((0x100073U != (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)) 
                                    & ((0x3023U != 
                                        (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                                       & ((0x1023U 
                                           != (0x707fU 
                                               & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                                          & ((0x23U 
                                              != (0x707fU 
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
                                                         & (0x6063U 
                                                            != 
                                                            (0x707fU 
                                                             & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))))))))))));
            tracep->chgBit(oldp+10,(vlSelf->top__DOT__idu_step_io_ctrl_sign_src2_is_imm));
            tracep->chgBit(oldp+11,(vlSelf->top__DOT__idu_step_io_ctrl_sign_src1_is_pc));
            tracep->chgBit(oldp+12,((0x44U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_131))));
            tracep->chgCData(oldp+13,(((0x3023U == 
                                        (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                        ? 0xffU : (
                                                   (0x1023U 
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
                                                      : 0U))))),8);
            tracep->chgQData(oldp+14,(vlSelf->top__DOT__exu_step_io_pc_next),64);
            tracep->chgQData(oldp+16,((((QData)((IData)(
                                                        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_155[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_155[0U])))),64);
            tracep->chgIData(oldp+18,((2U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))),32);
            tracep->chgQData(oldp+19,(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata),64);
            tracep->chgSData(oldp+21,((0xfffU & (IData)(
                                                        (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                         >> 0x14U)))),12);
            tracep->chgIData(oldp+22,(((0x80000U & 
                                        ((IData)((vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                  >> 0x1fU)) 
                                         << 0x13U)) 
                                       | ((0x7f800U 
                                           & ((IData)(
                                                      (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                       >> 0xcU)) 
                                              << 0xbU)) 
                                          | ((0x400U 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                          >> 0x14U)) 
                                                 << 0xaU)) 
                                             | (0x3ffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                           >> 0x15U))))))),20);
            tracep->chgIData(oldp+23,((0xfffffU & (IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                           >> 0xcU)))),20);
            tracep->chgSData(oldp+24,(((0xfe0U & ((IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                           >> 0x19U)) 
                                                  << 5U)) 
                                       | (0x1fU & (IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                           >> 7U))))),12);
            tracep->chgSData(oldp+25,(((0x800U & ((IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                           >> 0x1fU)) 
                                                  << 0xbU)) 
                                       | ((0x400U & 
                                           ((IData)(
                                                    (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                     >> 7U)) 
                                            << 0xaU)) 
                                          | ((0x3f0U 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                          >> 0x19U)) 
                                                 << 4U)) 
                                             | (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                           >> 8U))))))),12);
            tracep->chgIData(oldp+26,(vlSelf->top__DOT__idu_step__DOT___inst_type_T_131),32);
            tracep->chgQData(oldp+27,((vlSelf->top__DOT__exu_step__DOT__src1_value 
                                       + vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
            tracep->chgQData(oldp+29,(vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata),64);
            tracep->chgQData(oldp+31,(((0x27U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
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
                                        : ((0x28U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_134))
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
                                            : ((0x26U 
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
                                                : (
                                                   (7U 
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
                                                    : 0ULL))))),64);
            tracep->chgQData(oldp+33,(vlSelf->top__DOT__exu_step__DOT__Regfile[0]),64);
            tracep->chgQData(oldp+35,(vlSelf->top__DOT__exu_step__DOT__Regfile[1]),64);
            tracep->chgQData(oldp+37,(vlSelf->top__DOT__exu_step__DOT__Regfile[2]),64);
            tracep->chgQData(oldp+39,(vlSelf->top__DOT__exu_step__DOT__Regfile[3]),64);
            tracep->chgQData(oldp+41,(vlSelf->top__DOT__exu_step__DOT__Regfile[4]),64);
            tracep->chgQData(oldp+43,(vlSelf->top__DOT__exu_step__DOT__Regfile[5]),64);
            tracep->chgQData(oldp+45,(vlSelf->top__DOT__exu_step__DOT__Regfile[6]),64);
            tracep->chgQData(oldp+47,(vlSelf->top__DOT__exu_step__DOT__Regfile[7]),64);
            tracep->chgQData(oldp+49,(vlSelf->top__DOT__exu_step__DOT__Regfile[8]),64);
            tracep->chgQData(oldp+51,(vlSelf->top__DOT__exu_step__DOT__Regfile[9]),64);
            tracep->chgQData(oldp+53,(vlSelf->top__DOT__exu_step__DOT__Regfile[10]),64);
            tracep->chgQData(oldp+55,(vlSelf->top__DOT__exu_step__DOT__Regfile[11]),64);
            tracep->chgQData(oldp+57,(vlSelf->top__DOT__exu_step__DOT__Regfile[12]),64);
            tracep->chgQData(oldp+59,(vlSelf->top__DOT__exu_step__DOT__Regfile[13]),64);
            tracep->chgQData(oldp+61,(vlSelf->top__DOT__exu_step__DOT__Regfile[14]),64);
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__exu_step__DOT__Regfile[15]),64);
            tracep->chgQData(oldp+65,(vlSelf->top__DOT__exu_step__DOT__Regfile[16]),64);
            tracep->chgQData(oldp+67,(vlSelf->top__DOT__exu_step__DOT__Regfile[17]),64);
            tracep->chgQData(oldp+69,(vlSelf->top__DOT__exu_step__DOT__Regfile[18]),64);
            tracep->chgQData(oldp+71,(vlSelf->top__DOT__exu_step__DOT__Regfile[19]),64);
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__exu_step__DOT__Regfile[20]),64);
            tracep->chgQData(oldp+75,(vlSelf->top__DOT__exu_step__DOT__Regfile[21]),64);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__exu_step__DOT__Regfile[22]),64);
            tracep->chgQData(oldp+79,(vlSelf->top__DOT__exu_step__DOT__Regfile[23]),64);
            tracep->chgQData(oldp+81,(vlSelf->top__DOT__exu_step__DOT__Regfile[24]),64);
            tracep->chgQData(oldp+83,(vlSelf->top__DOT__exu_step__DOT__Regfile[25]),64);
            tracep->chgQData(oldp+85,(vlSelf->top__DOT__exu_step__DOT__Regfile[26]),64);
            tracep->chgQData(oldp+87,(vlSelf->top__DOT__exu_step__DOT__Regfile[27]),64);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__exu_step__DOT__Regfile[28]),64);
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__exu_step__DOT__Regfile[29]),64);
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__exu_step__DOT__Regfile[30]),64);
            tracep->chgQData(oldp+95,(vlSelf->top__DOT__exu_step__DOT__Regfile[31]),64);
            tracep->chgQData(oldp+97,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                      [(0x1fU & (IData)(
                                                        (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                         >> 0xfU)))]),64);
            tracep->chgQData(oldp+99,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                      [(0x1fU & (IData)(
                                                        (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                         >> 0x14U)))]),64);
            tracep->chgQData(oldp+101,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [(0x1fU & (IData)(
                                                         (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                          >> 7U)))]),64);
            tracep->chgQData(oldp+103,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0U]),64);
            tracep->chgQData(oldp+105,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [1U]),64);
            tracep->chgQData(oldp+107,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [2U]),64);
            tracep->chgQData(oldp+109,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [3U]),64);
            tracep->chgQData(oldp+111,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [4U]),64);
            tracep->chgQData(oldp+113,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [5U]),64);
            tracep->chgQData(oldp+115,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [6U]),64);
            tracep->chgQData(oldp+117,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [7U]),64);
            tracep->chgQData(oldp+119,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [8U]),64);
            tracep->chgQData(oldp+121,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [9U]),64);
            tracep->chgQData(oldp+123,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xaU]),64);
            tracep->chgQData(oldp+125,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xbU]),64);
            tracep->chgQData(oldp+127,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xcU]),64);
            tracep->chgQData(oldp+129,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xdU]),64);
            tracep->chgQData(oldp+131,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xeU]),64);
            tracep->chgQData(oldp+133,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xfU]),64);
            tracep->chgQData(oldp+135,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x10U]),64);
            tracep->chgQData(oldp+137,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x11U]),64);
            tracep->chgQData(oldp+139,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x12U]),64);
            tracep->chgQData(oldp+141,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x13U]),64);
            tracep->chgQData(oldp+143,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x14U]),64);
            tracep->chgQData(oldp+145,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x15U]),64);
            tracep->chgQData(oldp+147,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x16U]),64);
            tracep->chgQData(oldp+149,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x17U]),64);
            tracep->chgQData(oldp+151,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x18U]),64);
            tracep->chgQData(oldp+153,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x19U]),64);
            tracep->chgQData(oldp+155,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1aU]),64);
            tracep->chgQData(oldp+157,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1bU]),64);
            tracep->chgQData(oldp+159,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1cU]),64);
            tracep->chgQData(oldp+161,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1dU]),64);
            tracep->chgQData(oldp+163,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1eU]),64);
            tracep->chgQData(oldp+165,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1fU]),64);
            tracep->chgQData(oldp+167,(vlSelf->top__DOT__exu_step__DOT__Regfile_MPORT_data),64);
            tracep->chgQData(oldp+169,(vlSelf->top__DOT__exu_step__DOT__cmp),64);
            tracep->chgQData(oldp+171,(vlSelf->top__DOT__exu_step__DOT__src1_value),64);
            tracep->chgQData(oldp+173,(vlSelf->top__DOT__exu_step__DOT__src2_value),64);
            tracep->chgQData(oldp+175,(vlSelf->top__DOT__exu_step__DOT__add_res),64);
            tracep->chgQData(oldp+177,(vlSelf->top__DOT__exu_step__DOT__sub_res),64);
            tracep->chgQData(oldp+179,((vlSelf->top__DOT__exu_step__DOT__src1_value 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)))),64);
            VL_EXTEND_WQ(127,64, __Vtemp89, vlSelf->top__DOT__exu_step__DOT__src1_value);
            VL_SHIFTL_WWI(127,127,6, __Vtemp90, __Vtemp89, 
                          (0x3fU & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)));
            __Vtemp91[0U] = __Vtemp90[0U];
            __Vtemp91[1U] = __Vtemp90[1U];
            __Vtemp91[2U] = __Vtemp90[2U];
            __Vtemp91[3U] = (0x7fffffffU & __Vtemp90[3U]);
            tracep->chgWData(oldp+181,(__Vtemp91),127);
            tracep->chgIData(oldp+185,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__exu_step__DOT__src1_value), 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)))),32);
            tracep->chgIData(oldp+186,(((IData)(vlSelf->top__DOT__exu_step__DOT__src1_value) 
                                        >> (0x1fU & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)))),32);
            tracep->chgQData(oldp+187,(vlSelf->top__DOT__exu_step__DOT__sllw_res),63);
            tracep->chgQData(oldp+189,((vlSelf->top__DOT__exu_step__DOT__src1_value 
                                        | vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
            tracep->chgQData(oldp+191,((vlSelf->top__DOT__exu_step__DOT__src1_value 
                                        ^ vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
            tracep->chgQData(oldp+193,(vlSelf->top__DOT__exu_step__DOT__and_res),64);
            VL_EXTEND_WQ(128,64, __Vtemp92, vlSelf->top__DOT__exu_step__DOT__src1_value);
            VL_EXTEND_WQ(128,64, __Vtemp93, vlSelf->top__DOT__exu_step__DOT__src2_value);
            VL_MUL_W(4, __Vtemp94, __Vtemp92, __Vtemp93);
            tracep->chgQData(oldp+195,((((QData)((IData)(
                                                         __Vtemp94[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp94[0U])))),64);
            tracep->chgIData(oldp+197,((IData)(vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2)),32);
            tracep->chgIData(oldp+198,(vlSelf->top__DOT__exu_step__DOT__divw_res),32);
            tracep->chgIData(oldp+199,(vlSelf->top__DOT__exu_step__DOT__remw_res),32);
            tracep->chgQData(oldp+200,(((0U == (0x1fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                           >> 7U))))
                                         ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [(0x1fU & (IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                           >> 7U)))])),64);
            tracep->chgQData(oldp+202,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0]),64);
            tracep->chgQData(oldp+204,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[1]),64);
            tracep->chgQData(oldp+206,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[2]),64);
            tracep->chgQData(oldp+208,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[3]),64);
            tracep->chgQData(oldp+210,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[4]),64);
            tracep->chgQData(oldp+212,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[5]),64);
            tracep->chgQData(oldp+214,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[6]),64);
            tracep->chgQData(oldp+216,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[7]),64);
            tracep->chgQData(oldp+218,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[8]),64);
            tracep->chgQData(oldp+220,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[9]),64);
            tracep->chgQData(oldp+222,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[10]),64);
            tracep->chgQData(oldp+224,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[11]),64);
            tracep->chgQData(oldp+226,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[12]),64);
            tracep->chgQData(oldp+228,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[13]),64);
            tracep->chgQData(oldp+230,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[14]),64);
            tracep->chgQData(oldp+232,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[15]),64);
            tracep->chgQData(oldp+234,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[16]),64);
            tracep->chgQData(oldp+236,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[17]),64);
            tracep->chgQData(oldp+238,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[18]),64);
            tracep->chgQData(oldp+240,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[19]),64);
            tracep->chgQData(oldp+242,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[20]),64);
            tracep->chgQData(oldp+244,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[21]),64);
            tracep->chgQData(oldp+246,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[22]),64);
            tracep->chgQData(oldp+248,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[23]),64);
            tracep->chgQData(oldp+250,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[24]),64);
            tracep->chgQData(oldp+252,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[25]),64);
            tracep->chgQData(oldp+254,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[26]),64);
            tracep->chgQData(oldp+256,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[27]),64);
            tracep->chgQData(oldp+258,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[28]),64);
            tracep->chgQData(oldp+260,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[29]),64);
            tracep->chgQData(oldp+262,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[30]),64);
            tracep->chgQData(oldp+264,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[31]),64);
        }
        tracep->chgBit(oldp+266,(vlSelf->clock));
        tracep->chgBit(oldp+267,(vlSelf->reset));
        tracep->chgIData(oldp+268,(vlSelf->io_inst),32);
        tracep->chgQData(oldp+269,(vlSelf->io_pc),64);
        tracep->chgQData(oldp+271,(vlSelf->io_pc_next),64);
        tracep->chgQData(oldp+273,(vlSelf->io_outval),64);
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
