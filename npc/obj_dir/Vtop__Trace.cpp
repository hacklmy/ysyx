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
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__exu_step__DOT__Regfile[0]),64);
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__exu_step__DOT__Regfile[1]),64);
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__exu_step__DOT__Regfile[2]),64);
            tracep->chgQData(oldp+8,(vlSelf->top__DOT__exu_step__DOT__Regfile[3]),64);
            tracep->chgQData(oldp+10,(vlSelf->top__DOT__exu_step__DOT__Regfile[4]),64);
            tracep->chgQData(oldp+12,(vlSelf->top__DOT__exu_step__DOT__Regfile[5]),64);
            tracep->chgQData(oldp+14,(vlSelf->top__DOT__exu_step__DOT__Regfile[6]),64);
            tracep->chgQData(oldp+16,(vlSelf->top__DOT__exu_step__DOT__Regfile[7]),64);
            tracep->chgQData(oldp+18,(vlSelf->top__DOT__exu_step__DOT__Regfile[8]),64);
            tracep->chgQData(oldp+20,(vlSelf->top__DOT__exu_step__DOT__Regfile[9]),64);
            tracep->chgQData(oldp+22,(vlSelf->top__DOT__exu_step__DOT__Regfile[10]),64);
            tracep->chgQData(oldp+24,(vlSelf->top__DOT__exu_step__DOT__Regfile[11]),64);
            tracep->chgQData(oldp+26,(vlSelf->top__DOT__exu_step__DOT__Regfile[12]),64);
            tracep->chgQData(oldp+28,(vlSelf->top__DOT__exu_step__DOT__Regfile[13]),64);
            tracep->chgQData(oldp+30,(vlSelf->top__DOT__exu_step__DOT__Regfile[14]),64);
            tracep->chgQData(oldp+32,(vlSelf->top__DOT__exu_step__DOT__Regfile[15]),64);
            tracep->chgQData(oldp+34,(vlSelf->top__DOT__exu_step__DOT__Regfile[16]),64);
            tracep->chgQData(oldp+36,(vlSelf->top__DOT__exu_step__DOT__Regfile[17]),64);
            tracep->chgQData(oldp+38,(vlSelf->top__DOT__exu_step__DOT__Regfile[18]),64);
            tracep->chgQData(oldp+40,(vlSelf->top__DOT__exu_step__DOT__Regfile[19]),64);
            tracep->chgQData(oldp+42,(vlSelf->top__DOT__exu_step__DOT__Regfile[20]),64);
            tracep->chgQData(oldp+44,(vlSelf->top__DOT__exu_step__DOT__Regfile[21]),64);
            tracep->chgQData(oldp+46,(vlSelf->top__DOT__exu_step__DOT__Regfile[22]),64);
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__exu_step__DOT__Regfile[23]),64);
            tracep->chgQData(oldp+50,(vlSelf->top__DOT__exu_step__DOT__Regfile[24]),64);
            tracep->chgQData(oldp+52,(vlSelf->top__DOT__exu_step__DOT__Regfile[25]),64);
            tracep->chgQData(oldp+54,(vlSelf->top__DOT__exu_step__DOT__Regfile[26]),64);
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__exu_step__DOT__Regfile[27]),64);
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__exu_step__DOT__Regfile[28]),64);
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__exu_step__DOT__Regfile[29]),64);
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__exu_step__DOT__Regfile[30]),64);
            tracep->chgQData(oldp+64,(vlSelf->top__DOT__exu_step__DOT__Regfile[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+66,(vlSelf->top__DOT__idu_step__DOT___inst_now_T_20),32);
            tracep->chgQData(oldp+67,(vlSelf->top__DOT__idu_step_io_imm),64);
            tracep->chgBit(oldp+69,(((0x43U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17)) 
                                     | ((0x44U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17)) 
                                        | ((0x42U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17)) 
                                           | (0x40U 
                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17)))))));
            tracep->chgQData(oldp+70,(vlSelf->top__DOT__exu_step_io_res2rd),64);
            tracep->chgIData(oldp+72,((2U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_20))),32);
            tracep->chgIData(oldp+73,(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17),32);
            tracep->chgQData(oldp+74,(vlSelf->top__DOT__exu_step__DOT__add_res),64);
        }
        tracep->chgBit(oldp+76,(vlSelf->clock));
        tracep->chgBit(oldp+77,(vlSelf->reset));
        tracep->chgIData(oldp+78,(vlSelf->io_inst),32);
        tracep->chgQData(oldp+79,(vlSelf->io_pc),64);
        tracep->chgQData(oldp+81,(vlSelf->io_outval),64);
        tracep->chgCData(oldp+83,((0x1fU & (vlSelf->io_inst 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+84,((0x1fU & (vlSelf->io_inst 
                                            >> 0x14U))),5);
        tracep->chgCData(oldp+85,((0x1fU & (vlSelf->io_inst 
                                            >> 7U))),5);
        tracep->chgBit(oldp+86,(((0x100073U != vlSelf->io_inst) 
                                 & (0x3023U != (0x707fU 
                                                & vlSelf->io_inst)))));
        tracep->chgBit(oldp+87,((0x6fU == (0x7fU & vlSelf->io_inst))));
        tracep->chgQData(oldp+88,(((6U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_20))
                                    ? vlSelf->top__DOT__exu_step__DOT__add_res
                                    : ((5U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_20))
                                        ? vlSelf->top__DOT__exu_step__DOT__add_res
                                        : (4ULL + vlSelf->top__DOT__pc_now)))),64);
        tracep->chgSData(oldp+90,((vlSelf->io_inst 
                                   >> 0x14U)),12);
        tracep->chgIData(oldp+91,(((0x80000U & (vlSelf->io_inst 
                                                >> 0xcU)) 
                                   | ((0x7f800U & (vlSelf->io_inst 
                                                   >> 1U)) 
                                      | ((0x400U & 
                                          (vlSelf->io_inst 
                                           >> 0xaU)) 
                                         | (0x3ffU 
                                            & (vlSelf->io_inst 
                                               >> 0x15U)))))),20);
        tracep->chgIData(oldp+92,((vlSelf->io_inst 
                                   >> 0xcU)),20);
        tracep->chgSData(oldp+93,(((0xfe0U & (vlSelf->io_inst 
                                              >> 0x14U)) 
                                   | (0x1fU & (vlSelf->io_inst 
                                               >> 7U)))),12);
        tracep->chgQData(oldp+94,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                  [(0x1fU & (vlSelf->io_inst 
                                             >> 0xfU))]),64);
        tracep->chgQData(oldp+96,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                  [(0x1fU & (vlSelf->io_inst 
                                             >> 0x14U))]),64);
        tracep->chgQData(oldp+98,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                  [(0x1fU & (vlSelf->io_inst 
                                             >> 7U))]),64);
        tracep->chgQData(oldp+100,((((0x100073U != vlSelf->io_inst) 
                                     & (0x3023U != 
                                        (0x707fU & vlSelf->io_inst)))
                                     ? vlSelf->top__DOT__exu_step_io_res2rd
                                     : ((0U == (0x1fU 
                                                & (vlSelf->io_inst 
                                                   >> 7U)))
                                         ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [(0x1fU & (vlSelf->io_inst 
                                                   >> 7U))]))),64);
        tracep->chgQData(oldp+102,(((0x6fU == (0x7fU 
                                               & vlSelf->io_inst))
                                     ? vlSelf->top__DOT__pc_now
                                     : ((0U == (0x1fU 
                                                & (vlSelf->io_inst 
                                                   >> 0xfU)))
                                         ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [(0x1fU & (vlSelf->io_inst 
                                                   >> 0xfU))]))),64);
        tracep->chgQData(oldp+104,((((0x43U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17)) 
                                     | ((0x44U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17)) 
                                        | ((0x42U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17)) 
                                           | (0x40U 
                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17)))))
                                     ? vlSelf->top__DOT__idu_step_io_imm
                                     : ((0U == (0x1fU 
                                                & (vlSelf->io_inst 
                                                   >> 0x14U)))
                                         ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [(0x1fU & (vlSelf->io_inst 
                                                   >> 0x14U))]))),64);
        tracep->chgQData(oldp+106,(((0U == (0x1fU & 
                                            (vlSelf->io_inst 
                                             >> 7U)))
                                     ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [(0x1fU & (vlSelf->io_inst 
                                               >> 7U))])),64);
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
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
