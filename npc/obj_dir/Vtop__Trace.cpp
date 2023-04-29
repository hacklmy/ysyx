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
    VlWide<4>/*127:0*/ __Vtemp181;
    VlWide<4>/*127:0*/ __Vtemp182;
    VlWide<4>/*127:0*/ __Vtemp183;
    VlWide<3>/*95:0*/ __Vtemp186;
    VlWide<3>/*95:0*/ __Vtemp187;
    VlWide<3>/*95:0*/ __Vtemp189;
    VlWide<3>/*95:0*/ __Vtemp190;
    VlWide<3>/*95:0*/ __Vtemp191;
    VlWide<3>/*95:0*/ __Vtemp192;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__pc_now),64);
            tracep->chgBit(oldp+2,(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_arready));
            tracep->chgBit(oldp+3,(vlSelf->top__DOT__axi_pc_valid));
            tracep->chgBit(oldp+4,(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rvalid));
            tracep->chgBit(oldp+5,(vlSelf->top__DOT__idu_step__DOT__axi_inst_ready));
            tracep->chgIData(oldp+6,((IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata)),32);
            tracep->chgIData(oldp+7,(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194),32);
            tracep->chgCData(oldp+8,((0x1fU & (IData)(
                                                      (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                       >> 0xfU)))),5);
            tracep->chgCData(oldp+9,((0x1fU & (IData)(
                                                      (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                       >> 0x14U)))),5);
            tracep->chgCData(oldp+10,((0x1fU & (IData)(
                                                       (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                        >> 7U)))),5);
            tracep->chgQData(oldp+11,(vlSelf->top__DOT__idu_step_io_imm),64);
            tracep->chgBit(oldp+13,(((0x100073U != (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata)) 
                                     & (IData)(vlSelf->top__DOT__idu_step__DOT___reg_write_T_37))));
            tracep->chgBit(oldp+14,(((0x1073U == (0x707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata))) 
                                     | ((0x2073U == 
                                         (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata))) 
                                        | (0x3073U 
                                           == (0x707fU 
                                               & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata)))))));
            tracep->chgBit(oldp+15,(vlSelf->top__DOT__idu_step_io_ctrl_sign_src2_is_imm));
            tracep->chgBit(oldp+16,(vlSelf->top__DOT__idu_step_io_ctrl_sign_src1_is_pc));
            tracep->chgBit(oldp+17,((0x44U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188))));
            tracep->chgCData(oldp+18,(((0x3023U == 
                                        (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata)))
                                        ? 0xffU : (
                                                   (0x1023U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata)))
                                                    ? 3U
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata)))
                                                     ? 1U
                                                     : 
                                                    ((0x2023U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata)))
                                                      ? 0xfU
                                                      : 0U))))),8);
            tracep->chgQData(oldp+19,(vlSelf->top__DOT__exu_step_io_pc_next),64);
            tracep->chgQData(oldp+21,((((QData)((IData)(
                                                        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U])))),64);
            tracep->chgIData(oldp+23,((2U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))),32);
            tracep->chgIData(oldp+24,((0x3dU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))),32);
            tracep->chgIData(oldp+25,((IData)(vlSelf->top__DOT__pc_now)),32);
            tracep->chgQData(oldp+26,(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata),64);
            tracep->chgQData(oldp+28,((QData)((IData)(vlSelf->top__DOT__pc_now))),64);
            tracep->chgQData(oldp+30,(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata),64);
            tracep->chgBit(oldp+32,(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__state));
            tracep->chgSData(oldp+33,((0xfffU & (IData)(
                                                        (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                         >> 0x14U)))),12);
            tracep->chgIData(oldp+34,(((0x80000U & 
                                        ((IData)((vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                  >> 0x1fU)) 
                                         << 0x13U)) 
                                       | ((0x7f800U 
                                           & ((IData)(
                                                      (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                       >> 0xcU)) 
                                              << 0xbU)) 
                                          | ((0x400U 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                          >> 0x14U)) 
                                                 << 0xaU)) 
                                             | (0x3ffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                           >> 0x15U))))))),20);
            tracep->chgIData(oldp+35,((0xfffffU & (IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                           >> 0xcU)))),20);
            tracep->chgSData(oldp+36,(((0xfe0U & ((IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                           >> 0x19U)) 
                                                  << 5U)) 
                                       | (0x1fU & (IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                           >> 7U))))),12);
            tracep->chgSData(oldp+37,(((0x800U & ((IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                           >> 0x1fU)) 
                                                  << 0xbU)) 
                                       | ((0x400U & 
                                           ((IData)(
                                                    (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                     >> 7U)) 
                                            << 0xaU)) 
                                          | ((0x3f0U 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                          >> 0x19U)) 
                                                 << 4U)) 
                                             | (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                           >> 8U))))))),12);
            tracep->chgIData(oldp+38,(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188),32);
            tracep->chgQData(oldp+39,((vlSelf->top__DOT__exu_step__DOT__src1_value 
                                       + vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
            tracep->chgQData(oldp+41,(vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata),64);
            tracep->chgQData(oldp+43,(((0x27U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                        ? (QData)((IData)(
                                                          ((0U 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                                        >> 0x14U))))
                                                            ? 0ULL
                                                            : 
                                                           vlSelf->top__DOT__exu_step__DOT__Regfile
                                                           [
                                                           (0x1fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                                       >> 0x14U)))])))
                                        : ((0x28U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                            ? (QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(
                                                                         ((0U 
                                                                           == 
                                                                           (0x1fU 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                                                >> 0x14U))))
                                                                           ? 0ULL
                                                                           : 
                                                                          vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                          [
                                                                          (0x1fU 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                                                >> 0x14U)))])))))
                                            : ((0x26U 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                ? (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(
                                                                             ((0U 
                                                                               == 
                                                                               (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                                                >> 0x14U))))
                                                                               ? 0ULL
                                                                               : 
                                                                              vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                              [
                                                                              (0x1fU 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                                                >> 0x14U)))])))))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                                 >> 0x14U))))
                                                     ? 0ULL
                                                     : 
                                                    vlSelf->top__DOT__exu_step__DOT__Regfile
                                                    [
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                                >> 0x14U)))])
                                                    : 0ULL))))),64);
            tracep->chgQData(oldp+45,(vlSelf->top__DOT__exu_step__DOT__Regfile[0]),64);
            tracep->chgQData(oldp+47,(vlSelf->top__DOT__exu_step__DOT__Regfile[1]),64);
            tracep->chgQData(oldp+49,(vlSelf->top__DOT__exu_step__DOT__Regfile[2]),64);
            tracep->chgQData(oldp+51,(vlSelf->top__DOT__exu_step__DOT__Regfile[3]),64);
            tracep->chgQData(oldp+53,(vlSelf->top__DOT__exu_step__DOT__Regfile[4]),64);
            tracep->chgQData(oldp+55,(vlSelf->top__DOT__exu_step__DOT__Regfile[5]),64);
            tracep->chgQData(oldp+57,(vlSelf->top__DOT__exu_step__DOT__Regfile[6]),64);
            tracep->chgQData(oldp+59,(vlSelf->top__DOT__exu_step__DOT__Regfile[7]),64);
            tracep->chgQData(oldp+61,(vlSelf->top__DOT__exu_step__DOT__Regfile[8]),64);
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__exu_step__DOT__Regfile[9]),64);
            tracep->chgQData(oldp+65,(vlSelf->top__DOT__exu_step__DOT__Regfile[10]),64);
            tracep->chgQData(oldp+67,(vlSelf->top__DOT__exu_step__DOT__Regfile[11]),64);
            tracep->chgQData(oldp+69,(vlSelf->top__DOT__exu_step__DOT__Regfile[12]),64);
            tracep->chgQData(oldp+71,(vlSelf->top__DOT__exu_step__DOT__Regfile[13]),64);
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__exu_step__DOT__Regfile[14]),64);
            tracep->chgQData(oldp+75,(vlSelf->top__DOT__exu_step__DOT__Regfile[15]),64);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__exu_step__DOT__Regfile[16]),64);
            tracep->chgQData(oldp+79,(vlSelf->top__DOT__exu_step__DOT__Regfile[17]),64);
            tracep->chgQData(oldp+81,(vlSelf->top__DOT__exu_step__DOT__Regfile[18]),64);
            tracep->chgQData(oldp+83,(vlSelf->top__DOT__exu_step__DOT__Regfile[19]),64);
            tracep->chgQData(oldp+85,(vlSelf->top__DOT__exu_step__DOT__Regfile[20]),64);
            tracep->chgQData(oldp+87,(vlSelf->top__DOT__exu_step__DOT__Regfile[21]),64);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__exu_step__DOT__Regfile[22]),64);
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__exu_step__DOT__Regfile[23]),64);
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__exu_step__DOT__Regfile[24]),64);
            tracep->chgQData(oldp+95,(vlSelf->top__DOT__exu_step__DOT__Regfile[25]),64);
            tracep->chgQData(oldp+97,(vlSelf->top__DOT__exu_step__DOT__Regfile[26]),64);
            tracep->chgQData(oldp+99,(vlSelf->top__DOT__exu_step__DOT__Regfile[27]),64);
            tracep->chgQData(oldp+101,(vlSelf->top__DOT__exu_step__DOT__Regfile[28]),64);
            tracep->chgQData(oldp+103,(vlSelf->top__DOT__exu_step__DOT__Regfile[29]),64);
            tracep->chgQData(oldp+105,(vlSelf->top__DOT__exu_step__DOT__Regfile[30]),64);
            tracep->chgQData(oldp+107,(vlSelf->top__DOT__exu_step__DOT__Regfile[31]),64);
            tracep->chgQData(oldp+109,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [(0x1fU & (IData)(
                                                         (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                          >> 0xfU)))]),64);
            tracep->chgQData(oldp+111,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [(0x1fU & (IData)(
                                                         (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                          >> 0x14U)))]),64);
            tracep->chgQData(oldp+113,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [(0x1fU & (IData)(
                                                         (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                          >> 7U)))]),64);
            tracep->chgQData(oldp+115,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x11U]),64);
            tracep->chgQData(oldp+117,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0U]),64);
            tracep->chgQData(oldp+119,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [1U]),64);
            tracep->chgQData(oldp+121,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [2U]),64);
            tracep->chgQData(oldp+123,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [3U]),64);
            tracep->chgQData(oldp+125,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [4U]),64);
            tracep->chgQData(oldp+127,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [5U]),64);
            tracep->chgQData(oldp+129,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [6U]),64);
            tracep->chgQData(oldp+131,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [7U]),64);
            tracep->chgQData(oldp+133,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [8U]),64);
            tracep->chgQData(oldp+135,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [9U]),64);
            tracep->chgQData(oldp+137,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xaU]),64);
            tracep->chgQData(oldp+139,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xbU]),64);
            tracep->chgQData(oldp+141,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xcU]),64);
            tracep->chgQData(oldp+143,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xdU]),64);
            tracep->chgQData(oldp+145,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xeU]),64);
            tracep->chgQData(oldp+147,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xfU]),64);
            tracep->chgQData(oldp+149,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x10U]),64);
            tracep->chgQData(oldp+151,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x12U]),64);
            tracep->chgQData(oldp+153,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x13U]),64);
            tracep->chgQData(oldp+155,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x14U]),64);
            tracep->chgQData(oldp+157,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x15U]),64);
            tracep->chgQData(oldp+159,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x16U]),64);
            tracep->chgQData(oldp+161,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x17U]),64);
            tracep->chgQData(oldp+163,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x18U]),64);
            tracep->chgQData(oldp+165,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x19U]),64);
            tracep->chgQData(oldp+167,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1aU]),64);
            tracep->chgQData(oldp+169,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1bU]),64);
            tracep->chgQData(oldp+171,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1cU]),64);
            tracep->chgQData(oldp+173,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1dU]),64);
            tracep->chgQData(oldp+175,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1eU]),64);
            tracep->chgQData(oldp+177,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1fU]),64);
            tracep->chgQData(oldp+179,(((((0x100073U 
                                           != (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata)) 
                                          & (IData)(vlSelf->top__DOT__idu_step__DOT___reg_write_T_37)) 
                                         & (0U != (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                              >> 7U)))))
                                         ? (((QData)((IData)(
                                                             vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U])))
                                         : ((0U == 
                                             (0x1fU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                         >> 7U))))
                                             ? 0ULL
                                             : vlSelf->top__DOT__exu_step__DOT__Regfile
                                            [(0x1fU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                         >> 7U)))]))),64);
            tracep->chgQData(oldp+181,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[0]),64);
            tracep->chgQData(oldp+183,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[1]),64);
            tracep->chgQData(oldp+185,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[2]),64);
            tracep->chgQData(oldp+187,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[3]),64);
            tracep->chgCData(oldp+189,(((0x342U == 
                                         (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                         ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))),2);
            tracep->chgQData(oldp+190,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                       [((0x342U == 
                                          (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                          ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]),64);
            tracep->chgQData(oldp+192,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                       [1U]),64);
            tracep->chgQData(oldp+194,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                       [3U]),64);
            tracep->chgQData(oldp+196,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                       [0U]),64);
            tracep->chgQData(oldp+198,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                       [2U]),64);
            tracep->chgQData(oldp+200,(((0x3dU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? vlSelf->top__DOT__pc_now
                                         : vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                        [1U])),64);
            tracep->chgQData(oldp+202,(((0x3dU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [0x11U] : vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                        [3U])),64);
            tracep->chgQData(oldp+204,((((0x1073U == 
                                          (0x707fU 
                                           & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata))) 
                                         | ((0x2073U 
                                             == (0x707fU 
                                                 & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata))) 
                                            | (0x3073U 
                                               == (0x707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata)))))
                                         ? ((0x47U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                & (~ 
                                                   vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                                   [
                                                   ((0x342U 
                                                     == 
                                                     (0xfffU 
                                                      & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                                     ? 3U
                                                     : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]))
                                             : ((0x46U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                 | vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                                 [(
                                                   (0x342U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                                    ? 3U
                                                    : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))])
                                                 : 
                                                ((0x3fU 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? vlSelf->top__DOT__exu_step__DOT__src1_value
                                                  : 0ULL)))
                                         : vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                        [((0x342U == 
                                           (0xfffU 
                                            & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                           ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))])),64);
            tracep->chgSData(oldp+206,((0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm))),12);
            tracep->chgQData(oldp+207,(vlSelf->top__DOT__exu_step__DOT__src1_value),64);
            tracep->chgQData(oldp+209,(vlSelf->top__DOT__exu_step__DOT__src2_value),64);
            tracep->chgQData(oldp+211,(vlSelf->top__DOT__exu_step__DOT__add_res),64);
            tracep->chgQData(oldp+213,(vlSelf->top__DOT__exu_step__DOT__sub_res),64);
            tracep->chgQData(oldp+215,(vlSelf->top__DOT__exu_step__DOT__sra_res),64);
            tracep->chgQData(oldp+217,(vlSelf->top__DOT__exu_step__DOT__srl_res),64);
            tracep->chgWData(oldp+219,(vlSelf->top__DOT__exu_step__DOT__sll_res),127);
            tracep->chgIData(oldp+223,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__exu_step__DOT__src1_value), 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)))),32);
            tracep->chgIData(oldp+224,(vlSelf->top__DOT__exu_step__DOT__srlw_res),32);
            tracep->chgQData(oldp+225,(vlSelf->top__DOT__exu_step__DOT__sllw_res),63);
            tracep->chgQData(oldp+227,(vlSelf->top__DOT__exu_step__DOT__or_res),64);
            tracep->chgQData(oldp+229,(vlSelf->top__DOT__exu_step__DOT__xor_res),64);
            tracep->chgQData(oldp+231,(vlSelf->top__DOT__exu_step__DOT__and_res),64);
            VL_EXTEND_WQ(128,64, __Vtemp181, vlSelf->top__DOT__exu_step__DOT__src1_value);
            VL_EXTEND_WQ(128,64, __Vtemp182, vlSelf->top__DOT__exu_step__DOT__src2_value);
            VL_MUL_W(4, __Vtemp183, __Vtemp181, __Vtemp182);
            tracep->chgQData(oldp+233,((((QData)((IData)(
                                                         __Vtemp183[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp183[0U])))),64);
            tracep->chgIData(oldp+235,((IData)(vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2)),32);
            tracep->chgIData(oldp+236,((IData)(vlSelf->top__DOT__exu_step__DOT___divw_res_T_4)),32);
            tracep->chgIData(oldp+237,(vlSelf->top__DOT__exu_step__DOT__divuw_res),32);
            tracep->chgIData(oldp+238,(vlSelf->top__DOT__exu_step__DOT__remw_res),32);
            tracep->chgIData(oldp+239,(vlSelf->top__DOT__exu_step__DOT__remuw_res),32);
            VL_EXTENDS_WQ(65,64, __Vtemp186, vlSelf->top__DOT__exu_step__DOT__src1_value);
            __Vtemp187[0U] = __Vtemp186[0U];
            __Vtemp187[1U] = __Vtemp186[1U];
            __Vtemp187[2U] = (1U & __Vtemp186[2U]);
            VL_EXTENDS_WQ(65,64, __Vtemp189, vlSelf->top__DOT__exu_step__DOT__src2_value);
            __Vtemp190[0U] = __Vtemp189[0U];
            __Vtemp190[1U] = __Vtemp189[1U];
            __Vtemp190[2U] = (1U & __Vtemp189[2U]);
            VL_DIVS_WWW(65, __Vtemp191, __Vtemp187, __Vtemp190);
            __Vtemp192[0U] = __Vtemp191[0U];
            __Vtemp192[1U] = __Vtemp191[1U];
            __Vtemp192[2U] = (1U & __Vtemp191[2U]);
            tracep->chgWData(oldp+240,(__Vtemp192),65);
            tracep->chgQData(oldp+243,(VL_DIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
            tracep->chgQData(oldp+245,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
            tracep->chgQData(oldp+247,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
            tracep->chgQData(oldp+249,(((0U == (0x1fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                           >> 7U))))
                                         ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [(0x1fU & (IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rdata 
                                                           >> 7U)))])),64);
            tracep->chgQData(oldp+251,(((0x47U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                            & (~ vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                               [((0x342U 
                                                  == 
                                                  (0xfffU 
                                                   & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                                  ? 3U
                                                  : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]))
                                         : ((0x46U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                | vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                                [((0x342U 
                                                   == 
                                                   (0xfffU 
                                                    & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                                   ? 3U
                                                   : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))])
                                             : ((0x3fU 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? vlSelf->top__DOT__exu_step__DOT__src1_value
                                                 : 0ULL)))),64);
            tracep->chgQData(oldp+253,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0]),64);
            tracep->chgQData(oldp+255,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[1]),64);
            tracep->chgQData(oldp+257,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[2]),64);
            tracep->chgQData(oldp+259,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[3]),64);
            tracep->chgQData(oldp+261,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[4]),64);
            tracep->chgQData(oldp+263,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[5]),64);
            tracep->chgQData(oldp+265,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[6]),64);
            tracep->chgQData(oldp+267,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[7]),64);
            tracep->chgQData(oldp+269,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[8]),64);
            tracep->chgQData(oldp+271,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[9]),64);
            tracep->chgQData(oldp+273,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[10]),64);
            tracep->chgQData(oldp+275,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[11]),64);
            tracep->chgQData(oldp+277,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[12]),64);
            tracep->chgQData(oldp+279,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[13]),64);
            tracep->chgQData(oldp+281,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[14]),64);
            tracep->chgQData(oldp+283,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[15]),64);
            tracep->chgQData(oldp+285,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[16]),64);
            tracep->chgQData(oldp+287,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[17]),64);
            tracep->chgQData(oldp+289,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[18]),64);
            tracep->chgQData(oldp+291,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[19]),64);
            tracep->chgQData(oldp+293,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[20]),64);
            tracep->chgQData(oldp+295,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[21]),64);
            tracep->chgQData(oldp+297,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[22]),64);
            tracep->chgQData(oldp+299,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[23]),64);
            tracep->chgQData(oldp+301,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[24]),64);
            tracep->chgQData(oldp+303,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[25]),64);
            tracep->chgQData(oldp+305,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[26]),64);
            tracep->chgQData(oldp+307,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[27]),64);
            tracep->chgQData(oldp+309,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[28]),64);
            tracep->chgQData(oldp+311,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[29]),64);
            tracep->chgQData(oldp+313,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[30]),64);
            tracep->chgQData(oldp+315,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[31]),64);
            tracep->chgQData(oldp+317,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[0]),64);
            tracep->chgQData(oldp+319,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[1]),64);
            tracep->chgQData(oldp+321,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[2]),64);
            tracep->chgQData(oldp+323,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[3]),64);
        }
        tracep->chgBit(oldp+325,(vlSelf->clock));
        tracep->chgBit(oldp+326,(vlSelf->reset));
        tracep->chgIData(oldp+327,(vlSelf->io_inst),32);
        tracep->chgQData(oldp+328,(vlSelf->io_pc),64);
        tracep->chgQData(oldp+330,(vlSelf->io_pc_next),64);
        tracep->chgQData(oldp+332,(vlSelf->io_outval),64);
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
