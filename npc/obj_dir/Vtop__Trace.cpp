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
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__pc_now),64);
            tracep->chgIData(oldp+2,((IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)),32);
            tracep->chgIData(oldp+3,(vlSelf->top__DOT__idu_step__DOT___inst_now_T_20),32);
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
                                    & (0x3023U != (0x707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))))));
            tracep->chgBit(oldp+10,(((0x43U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17)) 
                                     | ((0x44U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17)) 
                                        | ((0x42U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17)) 
                                           | (0x40U 
                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17)))))));
            tracep->chgBit(oldp+11,(((0x6fU == (0x7fU 
                                                & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                                     | (0x17U == (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))))));
            tracep->chgBit(oldp+12,((0x3023U == (0x707fU 
                                                 & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))));
            tracep->chgCData(oldp+13,(((0x3023U == 
                                        (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                        ? 0xffU : 0U)),8);
            tracep->chgQData(oldp+14,(vlSelf->top__DOT__exu_step_io_pc_next),64);
            tracep->chgQData(oldp+16,(vlSelf->top__DOT__exu_step_io_res2rd),64);
            tracep->chgIData(oldp+18,((2U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_20))),32);
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
            tracep->chgIData(oldp+25,(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17),32);
            tracep->chgQData(oldp+26,((vlSelf->top__DOT__exu_step__DOT__src1_value 
                                       + vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
            tracep->chgQData(oldp+28,(vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata),64);
            tracep->chgQData(oldp+30,(((0U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                          >> 0x14U))))
                                        ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [(0x1fU & (IData)(
                                                         (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                          >> 0x14U)))])),64);
            tracep->chgQData(oldp+32,(vlSelf->top__DOT__exu_step__DOT__Regfile[0]),64);
            tracep->chgQData(oldp+34,(vlSelf->top__DOT__exu_step__DOT__Regfile[1]),64);
            tracep->chgQData(oldp+36,(vlSelf->top__DOT__exu_step__DOT__Regfile[2]),64);
            tracep->chgQData(oldp+38,(vlSelf->top__DOT__exu_step__DOT__Regfile[3]),64);
            tracep->chgQData(oldp+40,(vlSelf->top__DOT__exu_step__DOT__Regfile[4]),64);
            tracep->chgQData(oldp+42,(vlSelf->top__DOT__exu_step__DOT__Regfile[5]),64);
            tracep->chgQData(oldp+44,(vlSelf->top__DOT__exu_step__DOT__Regfile[6]),64);
            tracep->chgQData(oldp+46,(vlSelf->top__DOT__exu_step__DOT__Regfile[7]),64);
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__exu_step__DOT__Regfile[8]),64);
            tracep->chgQData(oldp+50,(vlSelf->top__DOT__exu_step__DOT__Regfile[9]),64);
            tracep->chgQData(oldp+52,(vlSelf->top__DOT__exu_step__DOT__Regfile[10]),64);
            tracep->chgQData(oldp+54,(vlSelf->top__DOT__exu_step__DOT__Regfile[11]),64);
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__exu_step__DOT__Regfile[12]),64);
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__exu_step__DOT__Regfile[13]),64);
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__exu_step__DOT__Regfile[14]),64);
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__exu_step__DOT__Regfile[15]),64);
            tracep->chgQData(oldp+64,(vlSelf->top__DOT__exu_step__DOT__Regfile[16]),64);
            tracep->chgQData(oldp+66,(vlSelf->top__DOT__exu_step__DOT__Regfile[17]),64);
            tracep->chgQData(oldp+68,(vlSelf->top__DOT__exu_step__DOT__Regfile[18]),64);
            tracep->chgQData(oldp+70,(vlSelf->top__DOT__exu_step__DOT__Regfile[19]),64);
            tracep->chgQData(oldp+72,(vlSelf->top__DOT__exu_step__DOT__Regfile[20]),64);
            tracep->chgQData(oldp+74,(vlSelf->top__DOT__exu_step__DOT__Regfile[21]),64);
            tracep->chgQData(oldp+76,(vlSelf->top__DOT__exu_step__DOT__Regfile[22]),64);
            tracep->chgQData(oldp+78,(vlSelf->top__DOT__exu_step__DOT__Regfile[23]),64);
            tracep->chgQData(oldp+80,(vlSelf->top__DOT__exu_step__DOT__Regfile[24]),64);
            tracep->chgQData(oldp+82,(vlSelf->top__DOT__exu_step__DOT__Regfile[25]),64);
            tracep->chgQData(oldp+84,(vlSelf->top__DOT__exu_step__DOT__Regfile[26]),64);
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__exu_step__DOT__Regfile[27]),64);
            tracep->chgQData(oldp+88,(vlSelf->top__DOT__exu_step__DOT__Regfile[28]),64);
            tracep->chgQData(oldp+90,(vlSelf->top__DOT__exu_step__DOT__Regfile[29]),64);
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__exu_step__DOT__Regfile[30]),64);
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__exu_step__DOT__Regfile[31]),64);
            tracep->chgQData(oldp+96,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                      [(0x1fU & (IData)(
                                                        (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                         >> 0xfU)))]),64);
            tracep->chgQData(oldp+98,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                      [(0x1fU & (IData)(
                                                        (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                         >> 0x14U)))]),64);
            tracep->chgQData(oldp+100,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [(0x1fU & (IData)(
                                                         (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                          >> 7U)))]),64);
            tracep->chgQData(oldp+102,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0U]),64);
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [1U]),64);
            tracep->chgQData(oldp+106,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [2U]),64);
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [3U]),64);
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [4U]),64);
            tracep->chgQData(oldp+112,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [5U]),64);
            tracep->chgQData(oldp+114,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [6U]),64);
            tracep->chgQData(oldp+116,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [7U]),64);
            tracep->chgQData(oldp+118,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [8U]),64);
            tracep->chgQData(oldp+120,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [9U]),64);
            tracep->chgQData(oldp+122,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xaU]),64);
            tracep->chgQData(oldp+124,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xbU]),64);
            tracep->chgQData(oldp+126,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xcU]),64);
            tracep->chgQData(oldp+128,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xdU]),64);
            tracep->chgQData(oldp+130,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xeU]),64);
            tracep->chgQData(oldp+132,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xfU]),64);
            tracep->chgQData(oldp+134,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x10U]),64);
            tracep->chgQData(oldp+136,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x11U]),64);
            tracep->chgQData(oldp+138,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x12U]),64);
            tracep->chgQData(oldp+140,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x13U]),64);
            tracep->chgQData(oldp+142,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x14U]),64);
            tracep->chgQData(oldp+144,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x15U]),64);
            tracep->chgQData(oldp+146,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x16U]),64);
            tracep->chgQData(oldp+148,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x17U]),64);
            tracep->chgQData(oldp+150,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x18U]),64);
            tracep->chgQData(oldp+152,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x19U]),64);
            tracep->chgQData(oldp+154,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1aU]),64);
            tracep->chgQData(oldp+156,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1bU]),64);
            tracep->chgQData(oldp+158,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1cU]),64);
            tracep->chgQData(oldp+160,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1dU]),64);
            tracep->chgQData(oldp+162,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1eU]),64);
            tracep->chgQData(oldp+164,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1fU]),64);
            tracep->chgQData(oldp+166,((((0x100073U 
                                          != (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)) 
                                         & (0x3023U 
                                            != (0x707fU 
                                                & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))))
                                         ? vlSelf->top__DOT__exu_step_io_res2rd
                                         : ((0U == 
                                             (0x1fU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                         >> 7U))))
                                             ? 0ULL
                                             : vlSelf->top__DOT__exu_step__DOT__Regfile
                                            [(0x1fU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                         >> 7U)))]))),64);
            tracep->chgQData(oldp+168,(vlSelf->top__DOT__exu_step__DOT__src1_value),64);
            tracep->chgQData(oldp+170,(vlSelf->top__DOT__exu_step__DOT__src2_value),64);
            tracep->chgQData(oldp+172,(vlSelf->top__DOT__exu_step__DOT__add_res),64);
            tracep->chgQData(oldp+174,(((0U == (0x1fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                           >> 7U))))
                                         ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [(0x1fU & (IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                           >> 7U)))])),64);
            tracep->chgQData(oldp+176,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0]),64);
            tracep->chgQData(oldp+178,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[1]),64);
            tracep->chgQData(oldp+180,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[2]),64);
            tracep->chgQData(oldp+182,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[3]),64);
            tracep->chgQData(oldp+184,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[4]),64);
            tracep->chgQData(oldp+186,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[5]),64);
            tracep->chgQData(oldp+188,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[6]),64);
            tracep->chgQData(oldp+190,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[7]),64);
            tracep->chgQData(oldp+192,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[8]),64);
            tracep->chgQData(oldp+194,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[9]),64);
            tracep->chgQData(oldp+196,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[10]),64);
            tracep->chgQData(oldp+198,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[11]),64);
            tracep->chgQData(oldp+200,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[12]),64);
            tracep->chgQData(oldp+202,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[13]),64);
            tracep->chgQData(oldp+204,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[14]),64);
            tracep->chgQData(oldp+206,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[15]),64);
            tracep->chgQData(oldp+208,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[16]),64);
            tracep->chgQData(oldp+210,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[17]),64);
            tracep->chgQData(oldp+212,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[18]),64);
            tracep->chgQData(oldp+214,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[19]),64);
            tracep->chgQData(oldp+216,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[20]),64);
            tracep->chgQData(oldp+218,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[21]),64);
            tracep->chgQData(oldp+220,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[22]),64);
            tracep->chgQData(oldp+222,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[23]),64);
            tracep->chgQData(oldp+224,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[24]),64);
            tracep->chgQData(oldp+226,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[25]),64);
            tracep->chgQData(oldp+228,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[26]),64);
            tracep->chgQData(oldp+230,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[27]),64);
            tracep->chgQData(oldp+232,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[28]),64);
            tracep->chgQData(oldp+234,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[29]),64);
            tracep->chgQData(oldp+236,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[30]),64);
            tracep->chgQData(oldp+238,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[31]),64);
        }
        tracep->chgBit(oldp+240,(vlSelf->clock));
        tracep->chgBit(oldp+241,(vlSelf->reset));
        tracep->chgIData(oldp+242,(vlSelf->io_inst),32);
        tracep->chgQData(oldp+243,(vlSelf->io_pc),64);
        tracep->chgQData(oldp+245,(vlSelf->io_pc_next),64);
        tracep->chgQData(oldp+247,(vlSelf->io_outval),64);
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
