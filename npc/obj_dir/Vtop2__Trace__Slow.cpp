// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop2__Syms.h"


void Vtop2___024root__traceInitSub0(Vtop2___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop2___024root__traceInitTop(Vtop2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop2___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop2___024root__traceInitSub0(Vtop2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+86,"clock", false,-1);
        tracep->declBit(c+87,"reset", false,-1);
        tracep->declBus(c+88,"io_inst", false,-1, 31,0);
        tracep->declQuad(c+89,"io_pc", false,-1, 63,0);
        tracep->declQuad(c+91,"io_outval", false,-1, 63,0);
        tracep->declBit(c+86,"top2 clock", false,-1);
        tracep->declBit(c+87,"top2 reset", false,-1);
        tracep->declBus(c+88,"top2 io_inst", false,-1, 31,0);
        tracep->declQuad(c+89,"top2 io_pc", false,-1, 63,0);
        tracep->declQuad(c+91,"top2 io_outval", false,-1, 63,0);
        tracep->declQuad(c+1,"top2 ifu_step_io_ipc", false,-1, 63,0);
        tracep->declQuad(c+1,"top2 ifu_step_io_opc", false,-1, 63,0);
        tracep->declBus(c+88,"top2 idu_step_io_inst", false,-1, 31,0);
        tracep->declBus(c+93,"top2 idu_step_io_insttype", false,-1, 31,0);
        tracep->declBus(c+79,"top2 idu_step_io_src1", false,-1, 4,0);
        tracep->declBus(c+80,"top2 idu_step_io_rd", false,-1, 4,0);
        tracep->declQuad(c+81,"top2 idu_step_io_imm", false,-1, 63,0);
        tracep->declBit(c+94,"top2 idu_step_io_reg_write", false,-1);
        tracep->declBit(c+86,"top2 exu_step_clock", false,-1);
        tracep->declBus(c+93,"top2 exu_step_io_insttype", false,-1, 31,0);
        tracep->declBus(c+79,"top2 exu_step_io_src1", false,-1, 4,0);
        tracep->declBus(c+80,"top2 exu_step_io_rd", false,-1, 4,0);
        tracep->declQuad(c+81,"top2 exu_step_io_imm", false,-1, 63,0);
        tracep->declBit(c+94,"top2 exu_step_io_reg_write", false,-1);
        tracep->declQuad(c+83,"top2 exu_step_io_res2rd", false,-1, 63,0);
        tracep->declQuad(c+1,"top2 pc_now", false,-1, 63,0);
        tracep->declQuad(c+1,"top2 ifu_step io_ipc", false,-1, 63,0);
        tracep->declQuad(c+1,"top2 ifu_step io_opc", false,-1, 63,0);
        tracep->declBus(c+88,"top2 idu_step io_inst", false,-1, 31,0);
        tracep->declBus(c+93,"top2 idu_step io_insttype", false,-1, 31,0);
        tracep->declBus(c+79,"top2 idu_step io_src1", false,-1, 4,0);
        tracep->declBus(c+80,"top2 idu_step io_rd", false,-1, 4,0);
        tracep->declQuad(c+81,"top2 idu_step io_imm", false,-1, 63,0);
        tracep->declBit(c+94,"top2 idu_step io_reg_write", false,-1);
        tracep->declBus(c+85,"top2 idu_step imm_I", false,-1, 11,0);
        tracep->declBit(c+86,"top2 exu_step clock", false,-1);
        tracep->declBus(c+93,"top2 exu_step io_insttype", false,-1, 31,0);
        tracep->declBus(c+79,"top2 exu_step io_src1", false,-1, 4,0);
        tracep->declBus(c+80,"top2 exu_step io_rd", false,-1, 4,0);
        tracep->declQuad(c+81,"top2 exu_step io_imm", false,-1, 63,0);
        tracep->declBit(c+94,"top2 exu_step io_reg_write", false,-1);
        tracep->declQuad(c+83,"top2 exu_step io_res2rd", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+3+i*2,"top2 exu_step Regfile", true,(i+0), 63,0);}}
        tracep->declBit(c+97,"top2 exu_step Regfile_src1_value_MPORT_en", false,-1);
        tracep->declBus(c+79,"top2 exu_step Regfile_src1_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+69,"top2 exu_step Regfile_src1_value_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+97,"top2 exu_step Regfile_src2_value_MPORT_en", false,-1);
        tracep->declBus(c+98,"top2 exu_step Regfile_src2_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+67,"top2 exu_step Regfile_src2_value_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+97,"top2 exu_step Regfile_reg_value_MPORT_en", false,-1);
        tracep->declBus(c+80,"top2 exu_step Regfile_reg_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+71,"top2 exu_step Regfile_reg_value_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+95,"top2 exu_step Regfile_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+80,"top2 exu_step Regfile_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+97,"top2 exu_step Regfile_MPORT_mask", false,-1);
        tracep->declBit(c+97,"top2 exu_step Regfile_MPORT_en", false,-1);
        tracep->declQuad(c+73,"top2 exu_step src1_value", false,-1, 63,0);
        tracep->declQuad(c+75,"top2 exu_step I_res", false,-1, 63,0);
        tracep->declQuad(c+77,"top2 exu_step reg_value", false,-1, 63,0);
    }
}

void Vtop2___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop2___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop2___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop2___024root__traceRegister(Vtop2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop2___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop2___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop2___024root__traceCleanup, vlSelf);
    }
}

void Vtop2___024root__traceFullSub0(Vtop2___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop2___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop2___024root* const __restrict vlSelf = static_cast<Vtop2___024root*>(voidSelf);
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop2___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop2___024root__traceFullSub0(Vtop2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->top2__DOT__pc_now),64);
        tracep->fullQData(oldp+3,(vlSelf->top2__DOT__exu_step__DOT__Regfile[0]),64);
        tracep->fullQData(oldp+5,(vlSelf->top2__DOT__exu_step__DOT__Regfile[1]),64);
        tracep->fullQData(oldp+7,(vlSelf->top2__DOT__exu_step__DOT__Regfile[2]),64);
        tracep->fullQData(oldp+9,(vlSelf->top2__DOT__exu_step__DOT__Regfile[3]),64);
        tracep->fullQData(oldp+11,(vlSelf->top2__DOT__exu_step__DOT__Regfile[4]),64);
        tracep->fullQData(oldp+13,(vlSelf->top2__DOT__exu_step__DOT__Regfile[5]),64);
        tracep->fullQData(oldp+15,(vlSelf->top2__DOT__exu_step__DOT__Regfile[6]),64);
        tracep->fullQData(oldp+17,(vlSelf->top2__DOT__exu_step__DOT__Regfile[7]),64);
        tracep->fullQData(oldp+19,(vlSelf->top2__DOT__exu_step__DOT__Regfile[8]),64);
        tracep->fullQData(oldp+21,(vlSelf->top2__DOT__exu_step__DOT__Regfile[9]),64);
        tracep->fullQData(oldp+23,(vlSelf->top2__DOT__exu_step__DOT__Regfile[10]),64);
        tracep->fullQData(oldp+25,(vlSelf->top2__DOT__exu_step__DOT__Regfile[11]),64);
        tracep->fullQData(oldp+27,(vlSelf->top2__DOT__exu_step__DOT__Regfile[12]),64);
        tracep->fullQData(oldp+29,(vlSelf->top2__DOT__exu_step__DOT__Regfile[13]),64);
        tracep->fullQData(oldp+31,(vlSelf->top2__DOT__exu_step__DOT__Regfile[14]),64);
        tracep->fullQData(oldp+33,(vlSelf->top2__DOT__exu_step__DOT__Regfile[15]),64);
        tracep->fullQData(oldp+35,(vlSelf->top2__DOT__exu_step__DOT__Regfile[16]),64);
        tracep->fullQData(oldp+37,(vlSelf->top2__DOT__exu_step__DOT__Regfile[17]),64);
        tracep->fullQData(oldp+39,(vlSelf->top2__DOT__exu_step__DOT__Regfile[18]),64);
        tracep->fullQData(oldp+41,(vlSelf->top2__DOT__exu_step__DOT__Regfile[19]),64);
        tracep->fullQData(oldp+43,(vlSelf->top2__DOT__exu_step__DOT__Regfile[20]),64);
        tracep->fullQData(oldp+45,(vlSelf->top2__DOT__exu_step__DOT__Regfile[21]),64);
        tracep->fullQData(oldp+47,(vlSelf->top2__DOT__exu_step__DOT__Regfile[22]),64);
        tracep->fullQData(oldp+49,(vlSelf->top2__DOT__exu_step__DOT__Regfile[23]),64);
        tracep->fullQData(oldp+51,(vlSelf->top2__DOT__exu_step__DOT__Regfile[24]),64);
        tracep->fullQData(oldp+53,(vlSelf->top2__DOT__exu_step__DOT__Regfile[25]),64);
        tracep->fullQData(oldp+55,(vlSelf->top2__DOT__exu_step__DOT__Regfile[26]),64);
        tracep->fullQData(oldp+57,(vlSelf->top2__DOT__exu_step__DOT__Regfile[27]),64);
        tracep->fullQData(oldp+59,(vlSelf->top2__DOT__exu_step__DOT__Regfile[28]),64);
        tracep->fullQData(oldp+61,(vlSelf->top2__DOT__exu_step__DOT__Regfile[29]),64);
        tracep->fullQData(oldp+63,(vlSelf->top2__DOT__exu_step__DOT__Regfile[30]),64);
        tracep->fullQData(oldp+65,(vlSelf->top2__DOT__exu_step__DOT__Regfile[31]),64);
        tracep->fullQData(oldp+67,(vlSelf->top2__DOT__exu_step__DOT__Regfile
                                   [0U]),64);
        tracep->fullQData(oldp+69,(vlSelf->top2__DOT__exu_step__DOT__Regfile
                                   [vlSelf->top2__DOT__idu_step_io_src1]),64);
        tracep->fullQData(oldp+71,(vlSelf->top2__DOT__exu_step__DOT__Regfile
                                   [vlSelf->top2__DOT__idu_step_io_rd]),64);
        tracep->fullQData(oldp+73,(((0U == (IData)(vlSelf->top2__DOT__idu_step_io_src1))
                                     ? 0ULL : vlSelf->top2__DOT__exu_step__DOT__Regfile
                                    [vlSelf->top2__DOT__idu_step_io_src1])),64);
        tracep->fullQData(oldp+75,((((0U == (IData)(vlSelf->top2__DOT__idu_step_io_src1))
                                      ? 0ULL : vlSelf->top2__DOT__exu_step__DOT__Regfile
                                     [vlSelf->top2__DOT__idu_step_io_src1]) 
                                    + ((((0x800U & (IData)(vlSelf->top2__DOT__idu_step__DOT__imm_I))
                                          ? 0xfffffffffffffULL
                                          : 0ULL) << 0xcU) 
                                       | (QData)((IData)(vlSelf->top2__DOT__idu_step__DOT__imm_I))))),64);
        tracep->fullQData(oldp+77,(((0U == (IData)(vlSelf->top2__DOT__idu_step_io_rd))
                                     ? 0ULL : vlSelf->top2__DOT__exu_step__DOT__Regfile
                                    [vlSelf->top2__DOT__idu_step_io_rd])),64);
        tracep->fullCData(oldp+79,(vlSelf->top2__DOT__idu_step_io_src1),5);
        tracep->fullCData(oldp+80,(vlSelf->top2__DOT__idu_step_io_rd),5);
        tracep->fullQData(oldp+81,(((((0x800U & (IData)(vlSelf->top2__DOT__idu_step__DOT__imm_I))
                                       ? 0xfffffffffffffULL
                                       : 0ULL) << 0xcU) 
                                    | (QData)((IData)(vlSelf->top2__DOT__idu_step__DOT__imm_I)))),64);
        tracep->fullQData(oldp+83,(vlSelf->top2__DOT__exu_step_io_res2rd),64);
        tracep->fullSData(oldp+85,(vlSelf->top2__DOT__idu_step__DOT__imm_I),12);
        tracep->fullBit(oldp+86,(vlSelf->clock));
        tracep->fullBit(oldp+87,(vlSelf->reset));
        tracep->fullIData(oldp+88,(vlSelf->io_inst),32);
        tracep->fullQData(oldp+89,(vlSelf->io_pc),64);
        tracep->fullQData(oldp+91,(vlSelf->io_outval),64);
        tracep->fullIData(oldp+93,((0x13U == (0x707fU 
                                              & vlSelf->io_inst))),32);
        tracep->fullBit(oldp+94,((0x13U == (0x707fU 
                                            & vlSelf->io_inst))));
        tracep->fullQData(oldp+95,(((0x13U == (0x707fU 
                                               & vlSelf->io_inst))
                                     ? vlSelf->top2__DOT__exu_step_io_res2rd
                                     : ((0U == (IData)(vlSelf->top2__DOT__idu_step_io_rd))
                                         ? 0ULL : vlSelf->top2__DOT__exu_step__DOT__Regfile
                                        [vlSelf->top2__DOT__idu_step_io_rd]))),64);
        tracep->fullBit(oldp+97,(1U));
        tracep->fullCData(oldp+98,(0U),5);
    }
}
