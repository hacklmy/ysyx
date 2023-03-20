// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop2__Syms.h"


void Vtop2___024root__traceChgSub0(Vtop2___024root* vlSelf, VerilatedVcd* tracep);

void Vtop2___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop2___024root* const __restrict vlSelf = static_cast<Vtop2___024root*>(voidSelf);
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop2___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop2___024root__traceChgSub0(Vtop2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top2__DOT__pc_now),64);
            tracep->chgQData(oldp+2,(vlSelf->top2__DOT__exu_step__DOT__Regfile[0]),64);
            tracep->chgQData(oldp+4,(vlSelf->top2__DOT__exu_step__DOT__Regfile[1]),64);
            tracep->chgQData(oldp+6,(vlSelf->top2__DOT__exu_step__DOT__Regfile[2]),64);
            tracep->chgQData(oldp+8,(vlSelf->top2__DOT__exu_step__DOT__Regfile[3]),64);
            tracep->chgQData(oldp+10,(vlSelf->top2__DOT__exu_step__DOT__Regfile[4]),64);
            tracep->chgQData(oldp+12,(vlSelf->top2__DOT__exu_step__DOT__Regfile[5]),64);
            tracep->chgQData(oldp+14,(vlSelf->top2__DOT__exu_step__DOT__Regfile[6]),64);
            tracep->chgQData(oldp+16,(vlSelf->top2__DOT__exu_step__DOT__Regfile[7]),64);
            tracep->chgQData(oldp+18,(vlSelf->top2__DOT__exu_step__DOT__Regfile[8]),64);
            tracep->chgQData(oldp+20,(vlSelf->top2__DOT__exu_step__DOT__Regfile[9]),64);
            tracep->chgQData(oldp+22,(vlSelf->top2__DOT__exu_step__DOT__Regfile[10]),64);
            tracep->chgQData(oldp+24,(vlSelf->top2__DOT__exu_step__DOT__Regfile[11]),64);
            tracep->chgQData(oldp+26,(vlSelf->top2__DOT__exu_step__DOT__Regfile[12]),64);
            tracep->chgQData(oldp+28,(vlSelf->top2__DOT__exu_step__DOT__Regfile[13]),64);
            tracep->chgQData(oldp+30,(vlSelf->top2__DOT__exu_step__DOT__Regfile[14]),64);
            tracep->chgQData(oldp+32,(vlSelf->top2__DOT__exu_step__DOT__Regfile[15]),64);
            tracep->chgQData(oldp+34,(vlSelf->top2__DOT__exu_step__DOT__Regfile[16]),64);
            tracep->chgQData(oldp+36,(vlSelf->top2__DOT__exu_step__DOT__Regfile[17]),64);
            tracep->chgQData(oldp+38,(vlSelf->top2__DOT__exu_step__DOT__Regfile[18]),64);
            tracep->chgQData(oldp+40,(vlSelf->top2__DOT__exu_step__DOT__Regfile[19]),64);
            tracep->chgQData(oldp+42,(vlSelf->top2__DOT__exu_step__DOT__Regfile[20]),64);
            tracep->chgQData(oldp+44,(vlSelf->top2__DOT__exu_step__DOT__Regfile[21]),64);
            tracep->chgQData(oldp+46,(vlSelf->top2__DOT__exu_step__DOT__Regfile[22]),64);
            tracep->chgQData(oldp+48,(vlSelf->top2__DOT__exu_step__DOT__Regfile[23]),64);
            tracep->chgQData(oldp+50,(vlSelf->top2__DOT__exu_step__DOT__Regfile[24]),64);
            tracep->chgQData(oldp+52,(vlSelf->top2__DOT__exu_step__DOT__Regfile[25]),64);
            tracep->chgQData(oldp+54,(vlSelf->top2__DOT__exu_step__DOT__Regfile[26]),64);
            tracep->chgQData(oldp+56,(vlSelf->top2__DOT__exu_step__DOT__Regfile[27]),64);
            tracep->chgQData(oldp+58,(vlSelf->top2__DOT__exu_step__DOT__Regfile[28]),64);
            tracep->chgQData(oldp+60,(vlSelf->top2__DOT__exu_step__DOT__Regfile[29]),64);
            tracep->chgQData(oldp+62,(vlSelf->top2__DOT__exu_step__DOT__Regfile[30]),64);
            tracep->chgQData(oldp+64,(vlSelf->top2__DOT__exu_step__DOT__Regfile[31]),64);
            tracep->chgQData(oldp+66,(vlSelf->top2__DOT__exu_step__DOT__Regfile
                                      [0U]),64);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgQData(oldp+68,(vlSelf->top2__DOT__exu_step__DOT__Regfile
                                      [vlSelf->top2__DOT__idu_step_io_src1]),64);
            tracep->chgQData(oldp+70,(vlSelf->top2__DOT__exu_step__DOT__Regfile
                                      [vlSelf->top2__DOT__idu_step_io_rd]),64);
            tracep->chgQData(oldp+72,(((0U == (IData)(vlSelf->top2__DOT__idu_step_io_src1))
                                        ? 0ULL : vlSelf->top2__DOT__exu_step__DOT__Regfile
                                       [vlSelf->top2__DOT__idu_step_io_src1])),64);
            tracep->chgQData(oldp+74,((((0U == (IData)(vlSelf->top2__DOT__idu_step_io_src1))
                                         ? 0ULL : vlSelf->top2__DOT__exu_step__DOT__Regfile
                                        [vlSelf->top2__DOT__idu_step_io_src1]) 
                                       + ((((0x800U 
                                             & (IData)(vlSelf->top2__DOT__idu_step__DOT__imm_I))
                                             ? 0xfffffffffffffULL
                                             : 0ULL) 
                                           << 0xcU) 
                                          | (QData)((IData)(vlSelf->top2__DOT__idu_step__DOT__imm_I))))),64);
            tracep->chgQData(oldp+76,(((0U == (IData)(vlSelf->top2__DOT__idu_step_io_rd))
                                        ? 0ULL : vlSelf->top2__DOT__exu_step__DOT__Regfile
                                       [vlSelf->top2__DOT__idu_step_io_rd])),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+78,(vlSelf->top2__DOT__idu_step_io_src1),5);
            tracep->chgCData(oldp+79,(vlSelf->top2__DOT__idu_step_io_rd),5);
            tracep->chgQData(oldp+80,(((((0x800U & (IData)(vlSelf->top2__DOT__idu_step__DOT__imm_I))
                                          ? 0xfffffffffffffULL
                                          : 0ULL) << 0xcU) 
                                       | (QData)((IData)(vlSelf->top2__DOT__idu_step__DOT__imm_I)))),64);
            tracep->chgQData(oldp+82,(vlSelf->top2__DOT__exu_step_io_res2rd),64);
            tracep->chgSData(oldp+84,(vlSelf->top2__DOT__idu_step__DOT__imm_I),12);
        }
        tracep->chgBit(oldp+85,(vlSelf->clock));
        tracep->chgBit(oldp+86,(vlSelf->reset));
        tracep->chgIData(oldp+87,(vlSelf->io_inst),32);
        tracep->chgQData(oldp+88,(vlSelf->io_pc),64);
        tracep->chgQData(oldp+90,(vlSelf->io_outval),64);
        tracep->chgIData(oldp+92,((0x13U == (0x707fU 
                                             & vlSelf->io_inst))),32);
        tracep->chgBit(oldp+93,((0x13U == (0x707fU 
                                           & vlSelf->io_inst))));
        tracep->chgQData(oldp+94,(((0x13U == (0x707fU 
                                              & vlSelf->io_inst))
                                    ? vlSelf->top2__DOT__exu_step_io_res2rd
                                    : ((0U == (IData)(vlSelf->top2__DOT__idu_step_io_rd))
                                        ? 0ULL : vlSelf->top2__DOT__exu_step__DOT__Regfile
                                       [vlSelf->top2__DOT__idu_step_io_rd]))),64);
    }
}

void Vtop2___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop2___024root* const __restrict vlSelf = static_cast<Vtop2___024root*>(voidSelf);
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
