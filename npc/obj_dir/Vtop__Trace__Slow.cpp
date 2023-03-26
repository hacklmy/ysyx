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
        tracep->declBit(c+205,"clock", false,-1);
        tracep->declBit(c+206,"reset", false,-1);
        tracep->declBus(c+207,"io_inst", false,-1, 31,0);
        tracep->declQuad(c+208,"io_pc", false,-1, 63,0);
        tracep->declQuad(c+210,"io_outval", false,-1, 63,0);
        tracep->declBit(c+205,"top clock", false,-1);
        tracep->declBit(c+206,"top reset", false,-1);
        tracep->declBus(c+207,"top io_inst", false,-1, 31,0);
        tracep->declQuad(c+208,"top io_pc", false,-1, 63,0);
        tracep->declQuad(c+210,"top io_outval", false,-1, 63,0);
        tracep->declQuad(c+1,"top ifu_step_io_ipc", false,-1, 63,0);
        tracep->declQuad(c+1,"top ifu_step_io_opc", false,-1, 63,0);
        tracep->declBus(c+207,"top idu_step_io_inst", false,-1, 31,0);
        tracep->declBus(c+195,"top idu_step_io_inst_now", false,-1, 31,0);
        tracep->declBus(c+212,"top idu_step_io_rs1", false,-1, 4,0);
        tracep->declBus(c+213,"top idu_step_io_rs2", false,-1, 4,0);
        tracep->declBus(c+214,"top idu_step_io_rd", false,-1, 4,0);
        tracep->declQuad(c+196,"top idu_step_io_imm", false,-1, 63,0);
        tracep->declBit(c+215,"top idu_step_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+198,"top idu_step_io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+216,"top idu_step_io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declBit(c+205,"top exu_step_clock", false,-1);
        tracep->declBit(c+206,"top exu_step_reset", false,-1);
        tracep->declQuad(c+1,"top exu_step_io_pc", false,-1, 63,0);
        tracep->declQuad(c+217,"top exu_step_io_pc_next", false,-1, 63,0);
        tracep->declBus(c+195,"top exu_step_io_inst_now", false,-1, 31,0);
        tracep->declBus(c+212,"top exu_step_io_rs1", false,-1, 4,0);
        tracep->declBus(c+213,"top exu_step_io_rs2", false,-1, 4,0);
        tracep->declBus(c+214,"top exu_step_io_rd", false,-1, 4,0);
        tracep->declQuad(c+196,"top exu_step_io_imm", false,-1, 63,0);
        tracep->declBit(c+215,"top exu_step_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+198,"top exu_step_io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+216,"top exu_step_io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declQuad(c+199,"top exu_step_io_res2rd", false,-1, 63,0);
        tracep->declBus(c+201,"top dpi_flag", false,-1, 31,0);
        tracep->declQuad(c+1,"top pc_now", false,-1, 63,0);
        tracep->declQuad(c+1,"top ifu_step io_ipc", false,-1, 63,0);
        tracep->declQuad(c+1,"top ifu_step io_opc", false,-1, 63,0);
        tracep->declBus(c+207,"top idu_step io_inst", false,-1, 31,0);
        tracep->declBus(c+195,"top idu_step io_inst_now", false,-1, 31,0);
        tracep->declBus(c+212,"top idu_step io_rs1", false,-1, 4,0);
        tracep->declBus(c+213,"top idu_step io_rs2", false,-1, 4,0);
        tracep->declBus(c+214,"top idu_step io_rd", false,-1, 4,0);
        tracep->declQuad(c+196,"top idu_step io_imm", false,-1, 63,0);
        tracep->declBit(c+215,"top idu_step io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+198,"top idu_step io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+216,"top idu_step io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declBus(c+214,"top idu_step rd", false,-1, 4,0);
        tracep->declBus(c+219,"top idu_step imm_imm", false,-1, 11,0);
        tracep->declBus(c+220,"top idu_step imm_imm_1", false,-1, 19,0);
        tracep->declBus(c+221,"top idu_step imm_imm_2", false,-1, 19,0);
        tracep->declBus(c+222,"top idu_step imm_imm_3", false,-1, 11,0);
        tracep->declBus(c+202,"top idu_step inst_type", false,-1, 31,0);
        tracep->declBit(c+205,"top exu_step clock", false,-1);
        tracep->declBit(c+206,"top exu_step reset", false,-1);
        tracep->declQuad(c+1,"top exu_step io_pc", false,-1, 63,0);
        tracep->declQuad(c+217,"top exu_step io_pc_next", false,-1, 63,0);
        tracep->declBus(c+195,"top exu_step io_inst_now", false,-1, 31,0);
        tracep->declBus(c+212,"top exu_step io_rs1", false,-1, 4,0);
        tracep->declBus(c+213,"top exu_step io_rs2", false,-1, 4,0);
        tracep->declBus(c+214,"top exu_step io_rd", false,-1, 4,0);
        tracep->declQuad(c+196,"top exu_step io_imm", false,-1, 63,0);
        tracep->declBit(c+215,"top exu_step io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+198,"top exu_step io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+216,"top exu_step io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declQuad(c+199,"top exu_step io_res2rd", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+3+i*2,"top exu_step Regfile", true,(i+0), 63,0);}}
        tracep->declBit(c+237,"top exu_step Regfile_src1_value_MPORT_en", false,-1);
        tracep->declBus(c+212,"top exu_step Regfile_src1_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+223,"top exu_step Regfile_src1_value_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_src2_value_MPORT_en", false,-1);
        tracep->declBus(c+213,"top exu_step Regfile_src2_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+225,"top exu_step Regfile_src2_value_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_value_MPORT_en", false,-1);
        tracep->declBus(c+214,"top exu_step Regfile_reg_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+227,"top exu_step Regfile_reg_value_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_MPORT_1_en", false,-1);
        tracep->declBus(c+214,"top exu_step Regfile_MPORT_1_addr", false,-1, 4,0);
        tracep->declQuad(c+227,"top exu_step Regfile_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_0_MPORT_en", false,-1);
        tracep->declBus(c+238,"top exu_step Regfile_reg_trace_io_input_reg_0_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+67,"top exu_step Regfile_reg_trace_io_input_reg_0_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_1_MPORT_en", false,-1);
        tracep->declBus(c+239,"top exu_step Regfile_reg_trace_io_input_reg_1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+69,"top exu_step Regfile_reg_trace_io_input_reg_1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_2_MPORT_en", false,-1);
        tracep->declBus(c+240,"top exu_step Regfile_reg_trace_io_input_reg_2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+71,"top exu_step Regfile_reg_trace_io_input_reg_2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_3_MPORT_en", false,-1);
        tracep->declBus(c+241,"top exu_step Regfile_reg_trace_io_input_reg_3_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+73,"top exu_step Regfile_reg_trace_io_input_reg_3_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_4_MPORT_en", false,-1);
        tracep->declBus(c+242,"top exu_step Regfile_reg_trace_io_input_reg_4_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+75,"top exu_step Regfile_reg_trace_io_input_reg_4_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_5_MPORT_en", false,-1);
        tracep->declBus(c+243,"top exu_step Regfile_reg_trace_io_input_reg_5_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+77,"top exu_step Regfile_reg_trace_io_input_reg_5_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_6_MPORT_en", false,-1);
        tracep->declBus(c+244,"top exu_step Regfile_reg_trace_io_input_reg_6_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+79,"top exu_step Regfile_reg_trace_io_input_reg_6_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_7_MPORT_en", false,-1);
        tracep->declBus(c+245,"top exu_step Regfile_reg_trace_io_input_reg_7_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+81,"top exu_step Regfile_reg_trace_io_input_reg_7_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_8_MPORT_en", false,-1);
        tracep->declBus(c+246,"top exu_step Regfile_reg_trace_io_input_reg_8_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+83,"top exu_step Regfile_reg_trace_io_input_reg_8_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_9_MPORT_en", false,-1);
        tracep->declBus(c+247,"top exu_step Regfile_reg_trace_io_input_reg_9_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+85,"top exu_step Regfile_reg_trace_io_input_reg_9_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_10_MPORT_en", false,-1);
        tracep->declBus(c+248,"top exu_step Regfile_reg_trace_io_input_reg_10_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+87,"top exu_step Regfile_reg_trace_io_input_reg_10_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_11_MPORT_en", false,-1);
        tracep->declBus(c+249,"top exu_step Regfile_reg_trace_io_input_reg_11_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+89,"top exu_step Regfile_reg_trace_io_input_reg_11_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_12_MPORT_en", false,-1);
        tracep->declBus(c+250,"top exu_step Regfile_reg_trace_io_input_reg_12_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+91,"top exu_step Regfile_reg_trace_io_input_reg_12_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_13_MPORT_en", false,-1);
        tracep->declBus(c+251,"top exu_step Regfile_reg_trace_io_input_reg_13_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+93,"top exu_step Regfile_reg_trace_io_input_reg_13_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_14_MPORT_en", false,-1);
        tracep->declBus(c+252,"top exu_step Regfile_reg_trace_io_input_reg_14_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+95,"top exu_step Regfile_reg_trace_io_input_reg_14_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_15_MPORT_en", false,-1);
        tracep->declBus(c+253,"top exu_step Regfile_reg_trace_io_input_reg_15_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+97,"top exu_step Regfile_reg_trace_io_input_reg_15_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_16_MPORT_en", false,-1);
        tracep->declBus(c+254,"top exu_step Regfile_reg_trace_io_input_reg_16_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+99,"top exu_step Regfile_reg_trace_io_input_reg_16_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_17_MPORT_en", false,-1);
        tracep->declBus(c+255,"top exu_step Regfile_reg_trace_io_input_reg_17_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+101,"top exu_step Regfile_reg_trace_io_input_reg_17_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_18_MPORT_en", false,-1);
        tracep->declBus(c+256,"top exu_step Regfile_reg_trace_io_input_reg_18_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+103,"top exu_step Regfile_reg_trace_io_input_reg_18_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_19_MPORT_en", false,-1);
        tracep->declBus(c+257,"top exu_step Regfile_reg_trace_io_input_reg_19_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+105,"top exu_step Regfile_reg_trace_io_input_reg_19_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_20_MPORT_en", false,-1);
        tracep->declBus(c+258,"top exu_step Regfile_reg_trace_io_input_reg_20_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+107,"top exu_step Regfile_reg_trace_io_input_reg_20_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_21_MPORT_en", false,-1);
        tracep->declBus(c+259,"top exu_step Regfile_reg_trace_io_input_reg_21_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+109,"top exu_step Regfile_reg_trace_io_input_reg_21_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_22_MPORT_en", false,-1);
        tracep->declBus(c+260,"top exu_step Regfile_reg_trace_io_input_reg_22_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+111,"top exu_step Regfile_reg_trace_io_input_reg_22_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_23_MPORT_en", false,-1);
        tracep->declBus(c+261,"top exu_step Regfile_reg_trace_io_input_reg_23_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+113,"top exu_step Regfile_reg_trace_io_input_reg_23_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_24_MPORT_en", false,-1);
        tracep->declBus(c+262,"top exu_step Regfile_reg_trace_io_input_reg_24_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+115,"top exu_step Regfile_reg_trace_io_input_reg_24_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_25_MPORT_en", false,-1);
        tracep->declBus(c+263,"top exu_step Regfile_reg_trace_io_input_reg_25_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+117,"top exu_step Regfile_reg_trace_io_input_reg_25_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_26_MPORT_en", false,-1);
        tracep->declBus(c+264,"top exu_step Regfile_reg_trace_io_input_reg_26_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+119,"top exu_step Regfile_reg_trace_io_input_reg_26_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_27_MPORT_en", false,-1);
        tracep->declBus(c+265,"top exu_step Regfile_reg_trace_io_input_reg_27_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+121,"top exu_step Regfile_reg_trace_io_input_reg_27_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_28_MPORT_en", false,-1);
        tracep->declBus(c+266,"top exu_step Regfile_reg_trace_io_input_reg_28_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+123,"top exu_step Regfile_reg_trace_io_input_reg_28_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_29_MPORT_en", false,-1);
        tracep->declBus(c+267,"top exu_step Regfile_reg_trace_io_input_reg_29_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+125,"top exu_step Regfile_reg_trace_io_input_reg_29_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_30_MPORT_en", false,-1);
        tracep->declBus(c+268,"top exu_step Regfile_reg_trace_io_input_reg_30_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+127,"top exu_step Regfile_reg_trace_io_input_reg_30_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+237,"top exu_step Regfile_reg_trace_io_input_reg_31_MPORT_en", false,-1);
        tracep->declBus(c+269,"top exu_step Regfile_reg_trace_io_input_reg_31_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+129,"top exu_step Regfile_reg_trace_io_input_reg_31_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+229,"top exu_step Regfile_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+214,"top exu_step Regfile_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+237,"top exu_step Regfile_MPORT_mask", false,-1);
        tracep->declBit(c+237,"top exu_step Regfile_MPORT_en", false,-1);
        tracep->declQuad(c+67,"top exu_step reg_trace_input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+69,"top exu_step reg_trace_input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+71,"top exu_step reg_trace_input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+73,"top exu_step reg_trace_input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+75,"top exu_step reg_trace_input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+77,"top exu_step reg_trace_input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+79,"top exu_step reg_trace_input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+81,"top exu_step reg_trace_input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+83,"top exu_step reg_trace_input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+85,"top exu_step reg_trace_input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+87,"top exu_step reg_trace_input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+89,"top exu_step reg_trace_input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+91,"top exu_step reg_trace_input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+93,"top exu_step reg_trace_input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+95,"top exu_step reg_trace_input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+97,"top exu_step reg_trace_input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+99,"top exu_step reg_trace_input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+101,"top exu_step reg_trace_input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+103,"top exu_step reg_trace_input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+105,"top exu_step reg_trace_input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+107,"top exu_step reg_trace_input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+109,"top exu_step reg_trace_input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+111,"top exu_step reg_trace_input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+113,"top exu_step reg_trace_input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+115,"top exu_step reg_trace_input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+117,"top exu_step reg_trace_input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+119,"top exu_step reg_trace_input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+121,"top exu_step reg_trace_input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+123,"top exu_step reg_trace_input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+125,"top exu_step reg_trace_input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+127,"top exu_step reg_trace_input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+129,"top exu_step reg_trace_input_reg_31", false,-1, 63,0);
        tracep->declQuad(c+231,"top exu_step src1_value", false,-1, 63,0);
        tracep->declQuad(c+233,"top exu_step src2_value", false,-1, 63,0);
        tracep->declQuad(c+203,"top exu_step add_res", false,-1, 63,0);
        tracep->declQuad(c+235,"top exu_step reg_value", false,-1, 63,0);
        tracep->declQuad(c+67,"top exu_step reg_trace input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+69,"top exu_step reg_trace input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+71,"top exu_step reg_trace input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+73,"top exu_step reg_trace input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+75,"top exu_step reg_trace input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+77,"top exu_step reg_trace input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+79,"top exu_step reg_trace input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+81,"top exu_step reg_trace input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+83,"top exu_step reg_trace input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+85,"top exu_step reg_trace input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+87,"top exu_step reg_trace input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+89,"top exu_step reg_trace input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+91,"top exu_step reg_trace input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+93,"top exu_step reg_trace input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+95,"top exu_step reg_trace input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+97,"top exu_step reg_trace input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+99,"top exu_step reg_trace input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+101,"top exu_step reg_trace input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+103,"top exu_step reg_trace input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+105,"top exu_step reg_trace input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+107,"top exu_step reg_trace input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+109,"top exu_step reg_trace input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+111,"top exu_step reg_trace input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+113,"top exu_step reg_trace input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+115,"top exu_step reg_trace input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+117,"top exu_step reg_trace input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+119,"top exu_step reg_trace input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+121,"top exu_step reg_trace input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+123,"top exu_step reg_trace input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+125,"top exu_step reg_trace input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+127,"top exu_step reg_trace input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+129,"top exu_step reg_trace input_reg_31", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+131+i*2,"top exu_step reg_trace traceregs", true,(i+0), 63,0);}}
        tracep->declBus(c+201,"top dpi flag", false,-1, 31,0);
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
        tracep->fullQData(oldp+67,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [0U]),64);
        tracep->fullQData(oldp+69,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [1U]),64);
        tracep->fullQData(oldp+71,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [2U]),64);
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [3U]),64);
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [4U]),64);
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [5U]),64);
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [6U]),64);
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [7U]),64);
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [8U]),64);
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [9U]),64);
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [0xaU]),64);
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [0xbU]),64);
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [0xcU]),64);
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [0xdU]),64);
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [0xeU]),64);
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [0xfU]),64);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [0x10U]),64);
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x11U]),64);
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x12U]),64);
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x13U]),64);
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x14U]),64);
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x15U]),64);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x16U]),64);
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x17U]),64);
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x18U]),64);
        tracep->fullQData(oldp+117,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x19U]),64);
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1aU]),64);
        tracep->fullQData(oldp+121,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1bU]),64);
        tracep->fullQData(oldp+123,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1cU]),64);
        tracep->fullQData(oldp+125,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1dU]),64);
        tracep->fullQData(oldp+127,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1eU]),64);
        tracep->fullQData(oldp+129,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1fU]),64);
        tracep->fullQData(oldp+131,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0]),64);
        tracep->fullQData(oldp+133,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[1]),64);
        tracep->fullQData(oldp+135,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[2]),64);
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[3]),64);
        tracep->fullQData(oldp+139,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[4]),64);
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[5]),64);
        tracep->fullQData(oldp+143,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[6]),64);
        tracep->fullQData(oldp+145,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[7]),64);
        tracep->fullQData(oldp+147,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[8]),64);
        tracep->fullQData(oldp+149,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[9]),64);
        tracep->fullQData(oldp+151,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[10]),64);
        tracep->fullQData(oldp+153,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[11]),64);
        tracep->fullQData(oldp+155,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[12]),64);
        tracep->fullQData(oldp+157,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[13]),64);
        tracep->fullQData(oldp+159,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[14]),64);
        tracep->fullQData(oldp+161,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[15]),64);
        tracep->fullQData(oldp+163,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[16]),64);
        tracep->fullQData(oldp+165,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[17]),64);
        tracep->fullQData(oldp+167,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[18]),64);
        tracep->fullQData(oldp+169,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[19]),64);
        tracep->fullQData(oldp+171,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[20]),64);
        tracep->fullQData(oldp+173,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[21]),64);
        tracep->fullQData(oldp+175,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[22]),64);
        tracep->fullQData(oldp+177,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[23]),64);
        tracep->fullQData(oldp+179,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[24]),64);
        tracep->fullQData(oldp+181,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[25]),64);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[26]),64);
        tracep->fullQData(oldp+185,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[27]),64);
        tracep->fullQData(oldp+187,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[28]),64);
        tracep->fullQData(oldp+189,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[29]),64);
        tracep->fullQData(oldp+191,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[30]),64);
        tracep->fullQData(oldp+193,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[31]),64);
        tracep->fullIData(oldp+195,(vlSelf->top__DOT__idu_step__DOT___inst_now_T_20),32);
        tracep->fullQData(oldp+196,(vlSelf->top__DOT__idu_step_io_imm),64);
        tracep->fullBit(oldp+198,(((0x43U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17)) 
                                   | ((0x44U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17)) 
                                      | ((0x42U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17)) 
                                         | (0x40U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17)))))));
        tracep->fullQData(oldp+199,(vlSelf->top__DOT__exu_step_io_res2rd),64);
        tracep->fullIData(oldp+201,((2U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_20))),32);
        tracep->fullIData(oldp+202,(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17),32);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__exu_step__DOT__add_res),64);
        tracep->fullBit(oldp+205,(vlSelf->clock));
        tracep->fullBit(oldp+206,(vlSelf->reset));
        tracep->fullIData(oldp+207,(vlSelf->io_inst),32);
        tracep->fullQData(oldp+208,(vlSelf->io_pc),64);
        tracep->fullQData(oldp+210,(vlSelf->io_outval),64);
        tracep->fullCData(oldp+212,((0x1fU & (vlSelf->io_inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+213,((0x1fU & (vlSelf->io_inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+214,((0x1fU & (vlSelf->io_inst 
                                              >> 7U))),5);
        tracep->fullBit(oldp+215,(((0x100073U != vlSelf->io_inst) 
                                   & (0x3023U != (0x707fU 
                                                  & vlSelf->io_inst)))));
        tracep->fullBit(oldp+216,((0x6fU == (0x7fU 
                                             & vlSelf->io_inst))));
        tracep->fullQData(oldp+217,(((6U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_20))
                                      ? (0xfffffffffffffffeULL 
                                         & vlSelf->top__DOT__exu_step__DOT__add_res)
                                      : ((5U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_20))
                                          ? vlSelf->top__DOT__exu_step__DOT__add_res
                                          : (4ULL + vlSelf->top__DOT__pc_now)))),64);
        tracep->fullSData(oldp+219,((vlSelf->io_inst 
                                     >> 0x14U)),12);
        tracep->fullIData(oldp+220,(((0x80000U & (vlSelf->io_inst 
                                                  >> 0xcU)) 
                                     | ((0x7f800U & 
                                         (vlSelf->io_inst 
                                          >> 1U)) | 
                                        ((0x400U & 
                                          (vlSelf->io_inst 
                                           >> 0xaU)) 
                                         | (0x3ffU 
                                            & (vlSelf->io_inst 
                                               >> 0x15U)))))),20);
        tracep->fullIData(oldp+221,((vlSelf->io_inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+222,(((0xfe0U & (vlSelf->io_inst 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->io_inst 
                                                 >> 7U)))),12);
        tracep->fullQData(oldp+223,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [(0x1fU & (vlSelf->io_inst 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+225,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [(0x1fU & (vlSelf->io_inst 
                                               >> 0x14U))]),64);
        tracep->fullQData(oldp+227,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [(0x1fU & (vlSelf->io_inst 
                                               >> 7U))]),64);
        tracep->fullQData(oldp+229,((((0x100073U != vlSelf->io_inst) 
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
        tracep->fullQData(oldp+231,(((0x6fU == (0x7fU 
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
        tracep->fullQData(oldp+233,((((0x43U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_17)) 
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
        tracep->fullQData(oldp+235,(((0U == (0x1fU 
                                             & (vlSelf->io_inst 
                                                >> 7U)))
                                      ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [(0x1fU & (vlSelf->io_inst 
                                                >> 7U))])),64);
        tracep->fullBit(oldp+237,(1U));
        tracep->fullCData(oldp+238,(0U),5);
        tracep->fullCData(oldp+239,(1U),5);
        tracep->fullCData(oldp+240,(2U),5);
        tracep->fullCData(oldp+241,(3U),5);
        tracep->fullCData(oldp+242,(4U),5);
        tracep->fullCData(oldp+243,(5U),5);
        tracep->fullCData(oldp+244,(6U),5);
        tracep->fullCData(oldp+245,(7U),5);
        tracep->fullCData(oldp+246,(8U),5);
        tracep->fullCData(oldp+247,(9U),5);
        tracep->fullCData(oldp+248,(0xaU),5);
        tracep->fullCData(oldp+249,(0xbU),5);
        tracep->fullCData(oldp+250,(0xcU),5);
        tracep->fullCData(oldp+251,(0xdU),5);
        tracep->fullCData(oldp+252,(0xeU),5);
        tracep->fullCData(oldp+253,(0xfU),5);
        tracep->fullCData(oldp+254,(0x10U),5);
        tracep->fullCData(oldp+255,(0x11U),5);
        tracep->fullCData(oldp+256,(0x12U),5);
        tracep->fullCData(oldp+257,(0x13U),5);
        tracep->fullCData(oldp+258,(0x14U),5);
        tracep->fullCData(oldp+259,(0x15U),5);
        tracep->fullCData(oldp+260,(0x16U),5);
        tracep->fullCData(oldp+261,(0x17U),5);
        tracep->fullCData(oldp+262,(0x18U),5);
        tracep->fullCData(oldp+263,(0x19U),5);
        tracep->fullCData(oldp+264,(0x1aU),5);
        tracep->fullCData(oldp+265,(0x1bU),5);
        tracep->fullCData(oldp+266,(0x1cU),5);
        tracep->fullCData(oldp+267,(0x1dU),5);
        tracep->fullCData(oldp+268,(0x1eU),5);
        tracep->fullCData(oldp+269,(0x1fU),5);
    }
}
