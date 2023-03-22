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
            tracep->chgCData(oldp+0,(vlSelf->top__DOT__idu_step_io_src1),5);
            tracep->chgCData(oldp+1,(vlSelf->top__DOT__idu_step_io_rd),5);
            tracep->chgQData(oldp+2,(((((0x800U & (IData)(vlSelf->top__DOT__idu_step__DOT__imm_I))
                                         ? 0xfffffffffffffULL
                                         : 0ULL) << 0xcU) 
                                      | (QData)((IData)(vlSelf->top__DOT__idu_step__DOT__imm_I)))),64);
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__exu_step_io_res2rd),64);
            tracep->chgSData(oldp+6,(vlSelf->top__DOT__idu_step__DOT__imm_I),12);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgQData(oldp+7,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [vlSelf->top__DOT__idu_step_io_src1]),64);
            tracep->chgQData(oldp+9,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [vlSelf->top__DOT__idu_step_io_rd]),64);
            tracep->chgQData(oldp+11,(((0U == (IData)(vlSelf->top__DOT__idu_step_io_src1))
                                        ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [vlSelf->top__DOT__idu_step_io_src1])),64);
            tracep->chgQData(oldp+13,((((0U == (IData)(vlSelf->top__DOT__idu_step_io_src1))
                                         ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [vlSelf->top__DOT__idu_step_io_src1]) 
                                       + ((((0x800U 
                                             & (IData)(vlSelf->top__DOT__idu_step__DOT__imm_I))
                                             ? 0xfffffffffffffULL
                                             : 0ULL) 
                                           << 0xcU) 
                                          | (QData)((IData)(vlSelf->top__DOT__idu_step__DOT__imm_I))))),64);
            tracep->chgQData(oldp+15,(((0U == (IData)(vlSelf->top__DOT__idu_step_io_rd))
                                        ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [vlSelf->top__DOT__idu_step_io_rd])),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+17,(vlSelf->top__DOT__pc_now),64);
            tracep->chgQData(oldp+19,(vlSelf->top__DOT__exu_step__DOT__Regfile[0]),64);
            tracep->chgQData(oldp+21,(vlSelf->top__DOT__exu_step__DOT__Regfile[1]),64);
            tracep->chgQData(oldp+23,(vlSelf->top__DOT__exu_step__DOT__Regfile[2]),64);
            tracep->chgQData(oldp+25,(vlSelf->top__DOT__exu_step__DOT__Regfile[3]),64);
            tracep->chgQData(oldp+27,(vlSelf->top__DOT__exu_step__DOT__Regfile[4]),64);
            tracep->chgQData(oldp+29,(vlSelf->top__DOT__exu_step__DOT__Regfile[5]),64);
            tracep->chgQData(oldp+31,(vlSelf->top__DOT__exu_step__DOT__Regfile[6]),64);
            tracep->chgQData(oldp+33,(vlSelf->top__DOT__exu_step__DOT__Regfile[7]),64);
            tracep->chgQData(oldp+35,(vlSelf->top__DOT__exu_step__DOT__Regfile[8]),64);
            tracep->chgQData(oldp+37,(vlSelf->top__DOT__exu_step__DOT__Regfile[9]),64);
            tracep->chgQData(oldp+39,(vlSelf->top__DOT__exu_step__DOT__Regfile[10]),64);
            tracep->chgQData(oldp+41,(vlSelf->top__DOT__exu_step__DOT__Regfile[11]),64);
            tracep->chgQData(oldp+43,(vlSelf->top__DOT__exu_step__DOT__Regfile[12]),64);
            tracep->chgQData(oldp+45,(vlSelf->top__DOT__exu_step__DOT__Regfile[13]),64);
            tracep->chgQData(oldp+47,(vlSelf->top__DOT__exu_step__DOT__Regfile[14]),64);
            tracep->chgQData(oldp+49,(vlSelf->top__DOT__exu_step__DOT__Regfile[15]),64);
            tracep->chgQData(oldp+51,(vlSelf->top__DOT__exu_step__DOT__Regfile[16]),64);
            tracep->chgQData(oldp+53,(vlSelf->top__DOT__exu_step__DOT__Regfile[17]),64);
            tracep->chgQData(oldp+55,(vlSelf->top__DOT__exu_step__DOT__Regfile[18]),64);
            tracep->chgQData(oldp+57,(vlSelf->top__DOT__exu_step__DOT__Regfile[19]),64);
            tracep->chgQData(oldp+59,(vlSelf->top__DOT__exu_step__DOT__Regfile[20]),64);
            tracep->chgQData(oldp+61,(vlSelf->top__DOT__exu_step__DOT__Regfile[21]),64);
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__exu_step__DOT__Regfile[22]),64);
            tracep->chgQData(oldp+65,(vlSelf->top__DOT__exu_step__DOT__Regfile[23]),64);
            tracep->chgQData(oldp+67,(vlSelf->top__DOT__exu_step__DOT__Regfile[24]),64);
            tracep->chgQData(oldp+69,(vlSelf->top__DOT__exu_step__DOT__Regfile[25]),64);
            tracep->chgQData(oldp+71,(vlSelf->top__DOT__exu_step__DOT__Regfile[26]),64);
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__exu_step__DOT__Regfile[27]),64);
            tracep->chgQData(oldp+75,(vlSelf->top__DOT__exu_step__DOT__Regfile[28]),64);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__exu_step__DOT__Regfile[29]),64);
            tracep->chgQData(oldp+79,(vlSelf->top__DOT__exu_step__DOT__Regfile[30]),64);
            tracep->chgQData(oldp+81,(vlSelf->top__DOT__exu_step__DOT__Regfile[31]),64);
            tracep->chgQData(oldp+83,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                      [0U]),64);
        }
        tracep->chgBit(oldp+85,(vlSelf->clock));
        tracep->chgBit(oldp+86,(vlSelf->reset));
        tracep->chgIData(oldp+87,(vlSelf->io_inst),32);
        tracep->chgQData(oldp+88,(vlSelf->io_pc),64);
        tracep->chgQData(oldp+90,(vlSelf->io_outval),64);
        tracep->chgIData(oldp+92,(((0x13U == (0x707fU 
                                              & vlSelf->io_inst))
                                    ? 1U : ((0x100073U 
                                             == vlSelf->io_inst)
                                             ? 2U : 0U))),32);
        tracep->chgBit(oldp+93,((0x13U == (0x707fU 
                                           & vlSelf->io_inst))));
        tracep->chgIData(oldp+94,((2U == ((0x13U == 
                                           (0x707fU 
                                            & vlSelf->io_inst))
                                           ? 1U : (
                                                   (0x100073U 
                                                    == vlSelf->io_inst)
                                                    ? 2U
                                                    : 0U)))),32);
        tracep->chgQData(oldp+95,(((0x13U == (0x707fU 
                                              & vlSelf->io_inst))
                                    ? vlSelf->top__DOT__exu_step_io_res2rd
                                    : ((0U == (IData)(vlSelf->top__DOT__idu_step_io_rd))
                                        ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [vlSelf->top__DOT__idu_step_io_rd]))),64);
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
