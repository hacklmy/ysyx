// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+86,"clock", false,-1);
        tracep->declBit(c+87,"reset", false,-1);
        tracep->declBus(c+88,"io_inst", false,-1, 31,0);
        tracep->declQuad(c+89,"io_pc", false,-1, 63,0);
        tracep->declQuad(c+91,"io_outval", false,-1, 63,0);
        tracep->declBit(c+86,"top clock", false,-1);
        tracep->declBit(c+87,"top reset", false,-1);
        tracep->declBus(c+88,"top io_inst", false,-1, 31,0);
        tracep->declQuad(c+89,"top io_pc", false,-1, 63,0);
        tracep->declQuad(c+91,"top io_outval", false,-1, 63,0);
        tracep->declQuad(c+18,"top ifu_step_io_ipc", false,-1, 63,0);
        tracep->declQuad(c+18,"top ifu_step_io_opc", false,-1, 63,0);
        tracep->declBus(c+88,"top idu_step_io_inst", false,-1, 31,0);
        tracep->declBus(c+93,"top idu_step_io_insttype", false,-1, 31,0);
        tracep->declBus(c+1,"top idu_step_io_src1", false,-1, 4,0);
        tracep->declBus(c+2,"top idu_step_io_rd", false,-1, 4,0);
        tracep->declQuad(c+3,"top idu_step_io_imm", false,-1, 63,0);
        tracep->declBit(c+94,"top idu_step_io_reg_write", false,-1);
        tracep->declBit(c+86,"top exu_step_clock", false,-1);
        tracep->declBus(c+93,"top exu_step_io_insttype", false,-1, 31,0);
        tracep->declBus(c+1,"top exu_step_io_src1", false,-1, 4,0);
        tracep->declBus(c+2,"top exu_step_io_rd", false,-1, 4,0);
        tracep->declQuad(c+3,"top exu_step_io_imm", false,-1, 63,0);
        tracep->declBit(c+94,"top exu_step_io_reg_write", false,-1);
        tracep->declQuad(c+5,"top exu_step_io_res2rd", false,-1, 63,0);
        tracep->declBus(c+95,"top dpi_flag", false,-1, 31,0);
        tracep->declQuad(c+18,"top pc_now", false,-1, 63,0);
        tracep->declQuad(c+18,"top ifu_step io_ipc", false,-1, 63,0);
        tracep->declQuad(c+18,"top ifu_step io_opc", false,-1, 63,0);
        tracep->declBus(c+88,"top idu_step io_inst", false,-1, 31,0);
        tracep->declBus(c+93,"top idu_step io_insttype", false,-1, 31,0);
        tracep->declBus(c+1,"top idu_step io_src1", false,-1, 4,0);
        tracep->declBus(c+2,"top idu_step io_rd", false,-1, 4,0);
        tracep->declQuad(c+3,"top idu_step io_imm", false,-1, 63,0);
        tracep->declBit(c+94,"top idu_step io_reg_write", false,-1);
        tracep->declBus(c+7,"top idu_step imm_I", false,-1, 11,0);
        tracep->declBit(c+86,"top exu_step clock", false,-1);
        tracep->declBus(c+93,"top exu_step io_insttype", false,-1, 31,0);
        tracep->declBus(c+1,"top exu_step io_src1", false,-1, 4,0);
        tracep->declBus(c+2,"top exu_step io_rd", false,-1, 4,0);
        tracep->declQuad(c+3,"top exu_step io_imm", false,-1, 63,0);
        tracep->declBit(c+94,"top exu_step io_reg_write", false,-1);
        tracep->declQuad(c+5,"top exu_step io_res2rd", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+20+i*2,"top exu_step Regfile", true,(i+0), 63,0);}}
        tracep->declBit(c+98,"top exu_step Regfile_src1_value_MPORT_en", false,-1);
        tracep->declBus(c+1,"top exu_step Regfile_src1_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+8,"top exu_step Regfile_src1_value_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+98,"top exu_step Regfile_src2_value_MPORT_en", false,-1);
        tracep->declBus(c+99,"top exu_step Regfile_src2_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+84,"top exu_step Regfile_src2_value_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+98,"top exu_step Regfile_reg_value_MPORT_en", false,-1);
        tracep->declBus(c+2,"top exu_step Regfile_reg_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+10,"top exu_step Regfile_reg_value_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+96,"top exu_step Regfile_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+2,"top exu_step Regfile_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+98,"top exu_step Regfile_MPORT_mask", false,-1);
        tracep->declBit(c+98,"top exu_step Regfile_MPORT_en", false,-1);
        tracep->declQuad(c+12,"top exu_step src1_value", false,-1, 63,0);
        tracep->declQuad(c+14,"top exu_step I_res", false,-1, 63,0);
        tracep->declQuad(c+16,"top exu_step reg_value", false,-1, 63,0);
        tracep->declBus(c+95,"top dpi flag", false,-1, 31,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->top__DOT__idu_step_io_src1),5);
        tracep->fullCData(oldp+2,(vlSelf->top__DOT__idu_step_io_rd),5);
        tracep->fullQData(oldp+3,(((((0x800U & (IData)(vlSelf->top__DOT__idu_step__DOT__imm_I))
                                      ? 0xfffffffffffffULL
                                      : 0ULL) << 0xcU) 
                                   | (QData)((IData)(vlSelf->top__DOT__idu_step__DOT__imm_I)))),64);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__exu_step_io_res2rd),64);
        tracep->fullSData(oldp+7,(vlSelf->top__DOT__idu_step__DOT__imm_I),12);
        tracep->fullQData(oldp+8,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                  [vlSelf->top__DOT__idu_step_io_src1]),64);
        tracep->fullQData(oldp+10,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [vlSelf->top__DOT__idu_step_io_rd]),64);
        tracep->fullQData(oldp+12,(((0U == (IData)(vlSelf->top__DOT__idu_step_io_src1))
                                     ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [vlSelf->top__DOT__idu_step_io_src1])),64);
        tracep->fullQData(oldp+14,((((0U == (IData)(vlSelf->top__DOT__idu_step_io_src1))
                                      ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [vlSelf->top__DOT__idu_step_io_src1]) 
                                    + ((((0x800U & (IData)(vlSelf->top__DOT__idu_step__DOT__imm_I))
                                          ? 0xfffffffffffffULL
                                          : 0ULL) << 0xcU) 
                                       | (QData)((IData)(vlSelf->top__DOT__idu_step__DOT__imm_I))))),64);
        tracep->fullQData(oldp+16,(((0U == (IData)(vlSelf->top__DOT__idu_step_io_rd))
                                     ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [vlSelf->top__DOT__idu_step_io_rd])),64);
        tracep->fullQData(oldp+18,(vlSelf->top__DOT__pc_now),64);
        tracep->fullQData(oldp+20,(vlSelf->top__DOT__exu_step__DOT__Regfile[0]),64);
        tracep->fullQData(oldp+22,(vlSelf->top__DOT__exu_step__DOT__Regfile[1]),64);
        tracep->fullQData(oldp+24,(vlSelf->top__DOT__exu_step__DOT__Regfile[2]),64);
        tracep->fullQData(oldp+26,(vlSelf->top__DOT__exu_step__DOT__Regfile[3]),64);
        tracep->fullQData(oldp+28,(vlSelf->top__DOT__exu_step__DOT__Regfile[4]),64);
        tracep->fullQData(oldp+30,(vlSelf->top__DOT__exu_step__DOT__Regfile[5]),64);
        tracep->fullQData(oldp+32,(vlSelf->top__DOT__exu_step__DOT__Regfile[6]),64);
        tracep->fullQData(oldp+34,(vlSelf->top__DOT__exu_step__DOT__Regfile[7]),64);
        tracep->fullQData(oldp+36,(vlSelf->top__DOT__exu_step__DOT__Regfile[8]),64);
        tracep->fullQData(oldp+38,(vlSelf->top__DOT__exu_step__DOT__Regfile[9]),64);
        tracep->fullQData(oldp+40,(vlSelf->top__DOT__exu_step__DOT__Regfile[10]),64);
        tracep->fullQData(oldp+42,(vlSelf->top__DOT__exu_step__DOT__Regfile[11]),64);
        tracep->fullQData(oldp+44,(vlSelf->top__DOT__exu_step__DOT__Regfile[12]),64);
        tracep->fullQData(oldp+46,(vlSelf->top__DOT__exu_step__DOT__Regfile[13]),64);
        tracep->fullQData(oldp+48,(vlSelf->top__DOT__exu_step__DOT__Regfile[14]),64);
        tracep->fullQData(oldp+50,(vlSelf->top__DOT__exu_step__DOT__Regfile[15]),64);
        tracep->fullQData(oldp+52,(vlSelf->top__DOT__exu_step__DOT__Regfile[16]),64);
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__exu_step__DOT__Regfile[17]),64);
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__exu_step__DOT__Regfile[18]),64);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__exu_step__DOT__Regfile[19]),64);
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__exu_step__DOT__Regfile[20]),64);
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__exu_step__DOT__Regfile[21]),64);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__exu_step__DOT__Regfile[22]),64);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__exu_step__DOT__Regfile[23]),64);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__exu_step__DOT__Regfile[24]),64);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__exu_step__DOT__Regfile[25]),64);
        tracep->fullQData(oldp+72,(vlSelf->top__DOT__exu_step__DOT__Regfile[26]),64);
        tracep->fullQData(oldp+74,(vlSelf->top__DOT__exu_step__DOT__Regfile[27]),64);
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__exu_step__DOT__Regfile[28]),64);
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__exu_step__DOT__Regfile[29]),64);
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__exu_step__DOT__Regfile[30]),64);
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__exu_step__DOT__Regfile[31]),64);
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [0U]),64);
        tracep->fullBit(oldp+86,(vlSelf->clock));
        tracep->fullBit(oldp+87,(vlSelf->reset));
        tracep->fullIData(oldp+88,(vlSelf->io_inst),32);
        tracep->fullQData(oldp+89,(vlSelf->io_pc),64);
        tracep->fullQData(oldp+91,(vlSelf->io_outval),64);
        tracep->fullIData(oldp+93,(((0x13U == (0x707fU 
                                               & vlSelf->io_inst))
                                     ? 1U : ((0x100073U 
                                              == vlSelf->io_inst)
                                              ? 2U : 0U))),32);
        tracep->fullBit(oldp+94,((0x13U == (0x707fU 
                                            & vlSelf->io_inst))));
        tracep->fullIData(oldp+95,((2U == ((0x13U == 
                                            (0x707fU 
                                             & vlSelf->io_inst))
                                            ? 1U : 
                                           ((0x100073U 
                                             == vlSelf->io_inst)
                                             ? 2U : 0U)))),32);
        tracep->fullQData(oldp+96,(((0x13U == (0x707fU 
                                               & vlSelf->io_inst))
                                     ? vlSelf->top__DOT__exu_step_io_res2rd
                                     : ((0U == (IData)(vlSelf->top__DOT__idu_step_io_rd))
                                         ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [vlSelf->top__DOT__idu_step_io_rd]))),64);
        tracep->fullBit(oldp+98,(1U));
        tracep->fullCData(oldp+99,(0U),5);
    }
}
