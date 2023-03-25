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
        tracep->declBit(c+77,"clock", false,-1);
        tracep->declBit(c+78,"reset", false,-1);
        tracep->declBus(c+79,"io_inst", false,-1, 31,0);
        tracep->declQuad(c+80,"io_pc", false,-1, 63,0);
        tracep->declQuad(c+82,"io_outval", false,-1, 63,0);
        tracep->declBit(c+77,"top clock", false,-1);
        tracep->declBit(c+78,"top reset", false,-1);
        tracep->declBus(c+79,"top io_inst", false,-1, 31,0);
        tracep->declQuad(c+80,"top io_pc", false,-1, 63,0);
        tracep->declQuad(c+82,"top io_outval", false,-1, 63,0);
        tracep->declQuad(c+1,"top ifu_step_io_ipc", false,-1, 63,0);
        tracep->declQuad(c+1,"top ifu_step_io_opc", false,-1, 63,0);
        tracep->declBus(c+79,"top idu_step_io_inst", false,-1, 31,0);
        tracep->declBus(c+67,"top idu_step_io_inst_now", false,-1, 31,0);
        tracep->declBus(c+84,"top idu_step_io_rs1", false,-1, 4,0);
        tracep->declBus(c+85,"top idu_step_io_rs2", false,-1, 4,0);
        tracep->declBus(c+86,"top idu_step_io_rd", false,-1, 4,0);
        tracep->declQuad(c+68,"top idu_step_io_imm", false,-1, 63,0);
        tracep->declBit(c+87,"top idu_step_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+70,"top idu_step_io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+88,"top idu_step_io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declBit(c+77,"top exu_step_clock", false,-1);
        tracep->declBit(c+78,"top exu_step_reset", false,-1);
        tracep->declQuad(c+1,"top exu_step_io_pc", false,-1, 63,0);
        tracep->declQuad(c+89,"top exu_step_io_pc_next", false,-1, 63,0);
        tracep->declBus(c+67,"top exu_step_io_inst_now", false,-1, 31,0);
        tracep->declBus(c+84,"top exu_step_io_rs1", false,-1, 4,0);
        tracep->declBus(c+85,"top exu_step_io_rs2", false,-1, 4,0);
        tracep->declBus(c+86,"top exu_step_io_rd", false,-1, 4,0);
        tracep->declQuad(c+68,"top exu_step_io_imm", false,-1, 63,0);
        tracep->declBit(c+87,"top exu_step_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+70,"top exu_step_io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+88,"top exu_step_io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declQuad(c+71,"top exu_step_io_res2rd", false,-1, 63,0);
        tracep->declBus(c+73,"top dpi_flag", false,-1, 31,0);
        tracep->declQuad(c+1,"top pc_now", false,-1, 63,0);
        tracep->declQuad(c+1,"top ifu_step io_ipc", false,-1, 63,0);
        tracep->declQuad(c+1,"top ifu_step io_opc", false,-1, 63,0);
        tracep->declBus(c+79,"top idu_step io_inst", false,-1, 31,0);
        tracep->declBus(c+67,"top idu_step io_inst_now", false,-1, 31,0);
        tracep->declBus(c+84,"top idu_step io_rs1", false,-1, 4,0);
        tracep->declBus(c+85,"top idu_step io_rs2", false,-1, 4,0);
        tracep->declBus(c+86,"top idu_step io_rd", false,-1, 4,0);
        tracep->declQuad(c+68,"top idu_step io_imm", false,-1, 63,0);
        tracep->declBit(c+87,"top idu_step io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+70,"top idu_step io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+88,"top idu_step io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declBus(c+86,"top idu_step rd", false,-1, 4,0);
        tracep->declBus(c+91,"top idu_step imm_imm", false,-1, 11,0);
        tracep->declBus(c+92,"top idu_step imm_imm_1", false,-1, 19,0);
        tracep->declBus(c+93,"top idu_step imm_imm_2", false,-1, 19,0);
        tracep->declBus(c+94,"top idu_step imm_imm_3", false,-1, 11,0);
        tracep->declBus(c+74,"top idu_step inst_type", false,-1, 31,0);
        tracep->declBit(c+77,"top exu_step clock", false,-1);
        tracep->declBit(c+78,"top exu_step reset", false,-1);
        tracep->declQuad(c+1,"top exu_step io_pc", false,-1, 63,0);
        tracep->declQuad(c+89,"top exu_step io_pc_next", false,-1, 63,0);
        tracep->declBus(c+67,"top exu_step io_inst_now", false,-1, 31,0);
        tracep->declBus(c+84,"top exu_step io_rs1", false,-1, 4,0);
        tracep->declBus(c+85,"top exu_step io_rs2", false,-1, 4,0);
        tracep->declBus(c+86,"top exu_step io_rd", false,-1, 4,0);
        tracep->declQuad(c+68,"top exu_step io_imm", false,-1, 63,0);
        tracep->declBit(c+87,"top exu_step io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+70,"top exu_step io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+88,"top exu_step io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declQuad(c+71,"top exu_step io_res2rd", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+3+i*2,"top exu_step Regfile", true,(i+0), 63,0);}}
        tracep->declBit(c+109,"top exu_step Regfile_src1_value_MPORT_en", false,-1);
        tracep->declBus(c+84,"top exu_step Regfile_src1_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+95,"top exu_step Regfile_src1_value_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+109,"top exu_step Regfile_src2_value_MPORT_en", false,-1);
        tracep->declBus(c+85,"top exu_step Regfile_src2_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+97,"top exu_step Regfile_src2_value_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+109,"top exu_step Regfile_reg_value_MPORT_en", false,-1);
        tracep->declBus(c+86,"top exu_step Regfile_reg_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+99,"top exu_step Regfile_reg_value_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+101,"top exu_step Regfile_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+86,"top exu_step Regfile_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+109,"top exu_step Regfile_MPORT_mask", false,-1);
        tracep->declBit(c+109,"top exu_step Regfile_MPORT_en", false,-1);
        tracep->declQuad(c+103,"top exu_step src1_value", false,-1, 63,0);
        tracep->declQuad(c+105,"top exu_step src2_value", false,-1, 63,0);
        tracep->declQuad(c+75,"top exu_step add_res", false,-1, 63,0);
        tracep->declQuad(c+107,"top exu_step reg_value", false,-1, 63,0);
        tracep->declBus(c+73,"top dpi flag", false,-1, 31,0);
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
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__pc_now),64);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__exu_step__DOT__Regfile[0]),64);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__exu_step__DOT__Regfile[1]),64);
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__exu_step__DOT__Regfile[2]),64);
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__exu_step__DOT__Regfile[3]),64);
        tracep->fullQData(oldp+11,(vlSelf->top__DOT__exu_step__DOT__Regfile[4]),64);
        tracep->fullQData(oldp+13,(vlSelf->top__DOT__exu_step__DOT__Regfile[5]),64);
        tracep->fullQData(oldp+15,(vlSelf->top__DOT__exu_step__DOT__Regfile[6]),64);
        tracep->fullQData(oldp+17,(vlSelf->top__DOT__exu_step__DOT__Regfile[7]),64);
        tracep->fullQData(oldp+19,(vlSelf->top__DOT__exu_step__DOT__Regfile[8]),64);
        tracep->fullQData(oldp+21,(vlSelf->top__DOT__exu_step__DOT__Regfile[9]),64);
        tracep->fullQData(oldp+23,(vlSelf->top__DOT__exu_step__DOT__Regfile[10]),64);
        tracep->fullQData(oldp+25,(vlSelf->top__DOT__exu_step__DOT__Regfile[11]),64);
        tracep->fullQData(oldp+27,(vlSelf->top__DOT__exu_step__DOT__Regfile[12]),64);
        tracep->fullQData(oldp+29,(vlSelf->top__DOT__exu_step__DOT__Regfile[13]),64);
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__exu_step__DOT__Regfile[14]),64);
        tracep->fullQData(oldp+33,(vlSelf->top__DOT__exu_step__DOT__Regfile[15]),64);
        tracep->fullQData(oldp+35,(vlSelf->top__DOT__exu_step__DOT__Regfile[16]),64);
        tracep->fullQData(oldp+37,(vlSelf->top__DOT__exu_step__DOT__Regfile[17]),64);
        tracep->fullQData(oldp+39,(vlSelf->top__DOT__exu_step__DOT__Regfile[18]),64);
        tracep->fullQData(oldp+41,(vlSelf->top__DOT__exu_step__DOT__Regfile[19]),64);
        tracep->fullQData(oldp+43,(vlSelf->top__DOT__exu_step__DOT__Regfile[20]),64);
        tracep->fullQData(oldp+45,(vlSelf->top__DOT__exu_step__DOT__Regfile[21]),64);
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__exu_step__DOT__Regfile[22]),64);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__exu_step__DOT__Regfile[23]),64);
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__exu_step__DOT__Regfile[24]),64);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__exu_step__DOT__Regfile[25]),64);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__exu_step__DOT__Regfile[26]),64);
        tracep->fullQData(oldp+57,(vlSelf->top__DOT__exu_step__DOT__Regfile[27]),64);
        tracep->fullQData(oldp+59,(vlSelf->top__DOT__exu_step__DOT__Regfile[28]),64);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__exu_step__DOT__Regfile[29]),64);
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__exu_step__DOT__Regfile[30]),64);
        tracep->fullQData(oldp+65,(vlSelf->top__DOT__exu_step__DOT__Regfile[31]),64);
        tracep->fullIData(oldp+67,(vlSelf->top__DOT__idu_step__DOT___inst_now_T_20),32);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__idu_step_io_imm),64);
        tracep->fullBit(oldp+70,(((0x43U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17)) 
                                  | ((0x44U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17)) 
                                     | ((0x42U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17)) 
                                        | (0x40U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17)))))));
        tracep->fullQData(oldp+71,(vlSelf->top__DOT__exu_step_io_res2rd),64);
        tracep->fullIData(oldp+73,((2U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_20))),32);
        tracep->fullIData(oldp+74,(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17),32);
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__exu_step__DOT__add_res),64);
        tracep->fullBit(oldp+77,(vlSelf->clock));
        tracep->fullBit(oldp+78,(vlSelf->reset));
        tracep->fullIData(oldp+79,(vlSelf->io_inst),32);
        tracep->fullQData(oldp+80,(vlSelf->io_pc),64);
        tracep->fullQData(oldp+82,(vlSelf->io_outval),64);
        tracep->fullCData(oldp+84,((0x1fU & (vlSelf->io_inst 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+85,((0x1fU & (vlSelf->io_inst 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+86,((0x1fU & (vlSelf->io_inst 
                                             >> 7U))),5);
        tracep->fullBit(oldp+87,(((0x100073U != vlSelf->io_inst) 
                                  & (0x3023U != (0x707fU 
                                                 & vlSelf->io_inst)))));
        tracep->fullBit(oldp+88,((0x6fU == (0x7fU & vlSelf->io_inst))));
        tracep->fullQData(oldp+89,(((6U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_20))
                                     ? vlSelf->top__DOT__exu_step__DOT__add_res
                                     : ((5U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_20))
                                         ? vlSelf->top__DOT__exu_step__DOT__add_res
                                         : (4ULL + vlSelf->top__DOT__pc_now)))),64);
        tracep->fullSData(oldp+91,((vlSelf->io_inst 
                                    >> 0x14U)),12);
        tracep->fullIData(oldp+92,(((0x80000U & (vlSelf->io_inst 
                                                 >> 0xcU)) 
                                    | ((0x7f800U & 
                                        (vlSelf->io_inst 
                                         >> 1U)) | 
                                       ((0x400U & (vlSelf->io_inst 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->io_inst 
                                            >> 0x15U)))))),20);
        tracep->fullIData(oldp+93,((vlSelf->io_inst 
                                    >> 0xcU)),20);
        tracep->fullSData(oldp+94,(((0xfe0U & (vlSelf->io_inst 
                                               >> 0x14U)) 
                                    | (0x1fU & (vlSelf->io_inst 
                                                >> 7U)))),12);
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [(0x1fU & (vlSelf->io_inst 
                                              >> 0xfU))]),64);
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [(0x1fU & (vlSelf->io_inst 
                                              >> 0x14U))]),64);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [(0x1fU & (vlSelf->io_inst 
                                              >> 7U))]),64);
        tracep->fullQData(oldp+101,((((0x100073U != vlSelf->io_inst) 
                                      & (0x3023U != 
                                         (0x707fU & vlSelf->io_inst)))
                                      ? vlSelf->top__DOT__exu_step_io_res2rd
                                      : ((0U == (0x1fU 
                                                 & (vlSelf->io_inst 
                                                    >> 7U)))
                                          ? 0ULL : 
                                         vlSelf->top__DOT__exu_step__DOT__Regfile
                                         [(0x1fU & 
                                           (vlSelf->io_inst 
                                            >> 7U))]))),64);
        tracep->fullQData(oldp+103,(((0x6fU == (0x7fU 
                                                & vlSelf->io_inst))
                                      ? vlSelf->top__DOT__pc_now
                                      : ((0U == (0x1fU 
                                                 & (vlSelf->io_inst 
                                                    >> 0xfU)))
                                          ? 0ULL : 
                                         vlSelf->top__DOT__exu_step__DOT__Regfile
                                         [(0x1fU & 
                                           (vlSelf->io_inst 
                                            >> 0xfU))]))),64);
        tracep->fullQData(oldp+105,((((0x43U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17)) 
                                      | ((0x44U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17)) 
                                         | ((0x42U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17)) 
                                            | (0x40U 
                                               == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17)))))
                                      ? vlSelf->top__DOT__idu_step_io_imm
                                      : ((0U == (0x1fU 
                                                 & (vlSelf->io_inst 
                                                    >> 0x14U)))
                                          ? 0ULL : 
                                         vlSelf->top__DOT__exu_step__DOT__Regfile
                                         [(0x1fU & 
                                           (vlSelf->io_inst 
                                            >> 0x14U))]))),64);
        tracep->fullQData(oldp+107,(((0U == (0x1fU 
                                             & (vlSelf->io_inst 
                                                >> 7U)))
                                      ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [(0x1fU & (vlSelf->io_inst 
                                                >> 7U))])),64);
        tracep->fullBit(oldp+109,(1U));
    }
}
