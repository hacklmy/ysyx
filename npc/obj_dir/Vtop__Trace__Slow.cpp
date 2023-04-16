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
        tracep->declBit(c+315,"clock", false,-1);
        tracep->declBit(c+316,"reset", false,-1);
        tracep->declBus(c+317,"io_inst", false,-1, 31,0);
        tracep->declQuad(c+318,"io_pc", false,-1, 63,0);
        tracep->declQuad(c+320,"io_pc_next", false,-1, 63,0);
        tracep->declQuad(c+322,"io_outval", false,-1, 63,0);
        tracep->declBit(c+315,"top clock", false,-1);
        tracep->declBit(c+316,"top reset", false,-1);
        tracep->declBus(c+317,"top io_inst", false,-1, 31,0);
        tracep->declQuad(c+318,"top io_pc", false,-1, 63,0);
        tracep->declQuad(c+320,"top io_pc_next", false,-1, 63,0);
        tracep->declQuad(c+322,"top io_outval", false,-1, 63,0);
        tracep->declQuad(c+1,"top ifu_step_io_pc", false,-1, 63,0);
        tracep->declBus(c+3,"top ifu_step_io_inst", false,-1, 31,0);
        tracep->declBus(c+3,"top idu_step_io_inst", false,-1, 31,0);
        tracep->declBus(c+4,"top idu_step_io_inst_now", false,-1, 31,0);
        tracep->declBus(c+5,"top idu_step_io_rs1", false,-1, 4,0);
        tracep->declBus(c+6,"top idu_step_io_rs2", false,-1, 4,0);
        tracep->declBus(c+7,"top idu_step_io_rd", false,-1, 4,0);
        tracep->declQuad(c+8,"top idu_step_io_imm", false,-1, 63,0);
        tracep->declBit(c+10,"top idu_step_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+11,"top idu_step_io_ctrl_sign_csr_write", false,-1);
        tracep->declBit(c+12,"top idu_step_io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+13,"top idu_step_io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declBit(c+14,"top idu_step_io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBus(c+15,"top idu_step_io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBit(c+315,"top exu_step_clock", false,-1);
        tracep->declQuad(c+1,"top exu_step_io_pc", false,-1, 63,0);
        tracep->declQuad(c+16,"top exu_step_io_pc_next", false,-1, 63,0);
        tracep->declBus(c+4,"top exu_step_io_inst_now", false,-1, 31,0);
        tracep->declBus(c+5,"top exu_step_io_rs1", false,-1, 4,0);
        tracep->declBus(c+6,"top exu_step_io_rs2", false,-1, 4,0);
        tracep->declBus(c+7,"top exu_step_io_rd", false,-1, 4,0);
        tracep->declQuad(c+8,"top exu_step_io_imm", false,-1, 63,0);
        tracep->declBit(c+10,"top exu_step_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+11,"top exu_step_io_ctrl_sign_csr_write", false,-1);
        tracep->declBit(c+12,"top exu_step_io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+13,"top exu_step_io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declBit(c+14,"top exu_step_io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBus(c+15,"top exu_step_io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declQuad(c+18,"top exu_step_io_res2rd", false,-1, 63,0);
        tracep->declBus(c+20,"top dpi_flag", false,-1, 31,0);
        tracep->declQuad(c+1,"top pc_now", false,-1, 63,0);
        tracep->declQuad(c+1,"top ifu_step io_pc", false,-1, 63,0);
        tracep->declBus(c+3,"top ifu_step io_inst", false,-1, 31,0);
        tracep->declQuad(c+1,"top ifu_step inst_read_Raddr", false,-1, 63,0);
        tracep->declQuad(c+21,"top ifu_step inst_read_Rdata", false,-1, 63,0);
        tracep->declQuad(c+324,"top ifu_step inst_read_Waddr", false,-1, 63,0);
        tracep->declQuad(c+324,"top ifu_step inst_read_Wdata", false,-1, 63,0);
        tracep->declBus(c+326,"top ifu_step inst_read_Wmask", false,-1, 7,0);
        tracep->declBit(c+327,"top ifu_step inst_read_Write_en", false,-1);
        tracep->declQuad(c+1,"top ifu_step inst_read Raddr", false,-1, 63,0);
        tracep->declQuad(c+324,"top ifu_step inst_read Waddr", false,-1, 63,0);
        tracep->declQuad(c+324,"top ifu_step inst_read Wdata", false,-1, 63,0);
        tracep->declBus(c+326,"top ifu_step inst_read Wmask", false,-1, 7,0);
        tracep->declBit(c+327,"top ifu_step inst_read Write_en", false,-1);
        tracep->declQuad(c+21,"top ifu_step inst_read Rdata", false,-1, 63,0);
        tracep->declBus(c+3,"top idu_step io_inst", false,-1, 31,0);
        tracep->declBus(c+4,"top idu_step io_inst_now", false,-1, 31,0);
        tracep->declBus(c+5,"top idu_step io_rs1", false,-1, 4,0);
        tracep->declBus(c+6,"top idu_step io_rs2", false,-1, 4,0);
        tracep->declBus(c+7,"top idu_step io_rd", false,-1, 4,0);
        tracep->declQuad(c+8,"top idu_step io_imm", false,-1, 63,0);
        tracep->declBit(c+10,"top idu_step io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+11,"top idu_step io_ctrl_sign_csr_write", false,-1);
        tracep->declBit(c+12,"top idu_step io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+13,"top idu_step io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declBit(c+14,"top idu_step io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBus(c+15,"top idu_step io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBus(c+7,"top idu_step rd", false,-1, 4,0);
        tracep->declBus(c+23,"top idu_step imm_imm", false,-1, 11,0);
        tracep->declBus(c+24,"top idu_step imm_imm_1", false,-1, 19,0);
        tracep->declBus(c+25,"top idu_step imm_imm_2", false,-1, 19,0);
        tracep->declBus(c+26,"top idu_step imm_imm_3", false,-1, 11,0);
        tracep->declBus(c+27,"top idu_step imm_imm_4", false,-1, 11,0);
        tracep->declBus(c+28,"top idu_step inst_type", false,-1, 31,0);
        tracep->declBit(c+315,"top exu_step clock", false,-1);
        tracep->declQuad(c+1,"top exu_step io_pc", false,-1, 63,0);
        tracep->declQuad(c+16,"top exu_step io_pc_next", false,-1, 63,0);
        tracep->declBus(c+4,"top exu_step io_inst_now", false,-1, 31,0);
        tracep->declBus(c+5,"top exu_step io_rs1", false,-1, 4,0);
        tracep->declBus(c+6,"top exu_step io_rs2", false,-1, 4,0);
        tracep->declBus(c+7,"top exu_step io_rd", false,-1, 4,0);
        tracep->declQuad(c+8,"top exu_step io_imm", false,-1, 63,0);
        tracep->declBit(c+10,"top exu_step io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+11,"top exu_step io_ctrl_sign_csr_write", false,-1);
        tracep->declBit(c+12,"top exu_step io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+13,"top exu_step io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declBit(c+14,"top exu_step io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBus(c+15,"top exu_step io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declQuad(c+18,"top exu_step io_res2rd", false,-1, 63,0);
        tracep->declQuad(c+29,"top exu_step Mem_modle_Raddr", false,-1, 63,0);
        tracep->declQuad(c+31,"top exu_step Mem_modle_Rdata", false,-1, 63,0);
        tracep->declQuad(c+29,"top exu_step Mem_modle_Waddr", false,-1, 63,0);
        tracep->declQuad(c+33,"top exu_step Mem_modle_Wdata", false,-1, 63,0);
        tracep->declBus(c+15,"top exu_step Mem_modle_Wmask", false,-1, 7,0);
        tracep->declBit(c+14,"top exu_step Mem_modle_Write_en", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+35+i*2,"top exu_step Regfile", true,(i+0), 63,0);}}
        tracep->declBit(c+328,"top exu_step Regfile_src1_value_MPORT_en", false,-1);
        tracep->declBus(c+5,"top exu_step Regfile_src1_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+99,"top exu_step Regfile_src1_value_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_src2_value_MPORT_en", false,-1);
        tracep->declBus(c+6,"top exu_step Regfile_src2_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+101,"top exu_step Regfile_src2_value_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_value_MPORT_en", false,-1);
        tracep->declBus(c+7,"top exu_step Regfile_reg_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+103,"top exu_step Regfile_reg_value_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_MPORT_4_en", false,-1);
        tracep->declBus(c+329,"top exu_step Regfile_MPORT_4_addr", false,-1, 4,0);
        tracep->declQuad(c+105,"top exu_step Regfile_MPORT_4_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_io_pc_next_MPORT_en", false,-1);
        tracep->declBus(c+5,"top exu_step Regfile_io_pc_next_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+99,"top exu_step Regfile_io_pc_next_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_io_pc_next_MPORT_1_en", false,-1);
        tracep->declBus(c+6,"top exu_step Regfile_io_pc_next_MPORT_1_addr", false,-1, 4,0);
        tracep->declQuad(c+101,"top exu_step Regfile_io_pc_next_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_io_pc_next_MPORT_2_en", false,-1);
        tracep->declBus(c+5,"top exu_step Regfile_io_pc_next_MPORT_2_addr", false,-1, 4,0);
        tracep->declQuad(c+99,"top exu_step Regfile_io_pc_next_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_io_pc_next_MPORT_3_en", false,-1);
        tracep->declBus(c+6,"top exu_step Regfile_io_pc_next_MPORT_3_addr", false,-1, 4,0);
        tracep->declQuad(c+101,"top exu_step Regfile_io_pc_next_MPORT_3_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_io_pc_next_MPORT_4_en", false,-1);
        tracep->declBus(c+5,"top exu_step Regfile_io_pc_next_MPORT_4_addr", false,-1, 4,0);
        tracep->declQuad(c+99,"top exu_step Regfile_io_pc_next_MPORT_4_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_io_pc_next_MPORT_5_en", false,-1);
        tracep->declBus(c+6,"top exu_step Regfile_io_pc_next_MPORT_5_addr", false,-1, 4,0);
        tracep->declQuad(c+101,"top exu_step Regfile_io_pc_next_MPORT_5_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_io_pc_next_MPORT_6_en", false,-1);
        tracep->declBus(c+5,"top exu_step Regfile_io_pc_next_MPORT_6_addr", false,-1, 4,0);
        tracep->declQuad(c+99,"top exu_step Regfile_io_pc_next_MPORT_6_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_io_pc_next_MPORT_7_en", false,-1);
        tracep->declBus(c+6,"top exu_step Regfile_io_pc_next_MPORT_7_addr", false,-1, 4,0);
        tracep->declQuad(c+101,"top exu_step Regfile_io_pc_next_MPORT_7_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_io_pc_next_MPORT_8_en", false,-1);
        tracep->declBus(c+5,"top exu_step Regfile_io_pc_next_MPORT_8_addr", false,-1, 4,0);
        tracep->declQuad(c+99,"top exu_step Regfile_io_pc_next_MPORT_8_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_io_pc_next_MPORT_9_en", false,-1);
        tracep->declBus(c+6,"top exu_step Regfile_io_pc_next_MPORT_9_addr", false,-1, 4,0);
        tracep->declQuad(c+101,"top exu_step Regfile_io_pc_next_MPORT_9_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_io_pc_next_MPORT_10_en", false,-1);
        tracep->declBus(c+5,"top exu_step Regfile_io_pc_next_MPORT_10_addr", false,-1, 4,0);
        tracep->declQuad(c+99,"top exu_step Regfile_io_pc_next_MPORT_10_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_io_pc_next_MPORT_11_en", false,-1);
        tracep->declBus(c+6,"top exu_step Regfile_io_pc_next_MPORT_11_addr", false,-1, 4,0);
        tracep->declQuad(c+101,"top exu_step Regfile_io_pc_next_MPORT_11_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_0_MPORT_en", false,-1);
        tracep->declBus(c+330,"top exu_step Regfile_reg_trace_io_input_reg_0_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+107,"top exu_step Regfile_reg_trace_io_input_reg_0_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_1_MPORT_en", false,-1);
        tracep->declBus(c+331,"top exu_step Regfile_reg_trace_io_input_reg_1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+109,"top exu_step Regfile_reg_trace_io_input_reg_1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_2_MPORT_en", false,-1);
        tracep->declBus(c+332,"top exu_step Regfile_reg_trace_io_input_reg_2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+111,"top exu_step Regfile_reg_trace_io_input_reg_2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_3_MPORT_en", false,-1);
        tracep->declBus(c+333,"top exu_step Regfile_reg_trace_io_input_reg_3_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+113,"top exu_step Regfile_reg_trace_io_input_reg_3_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_4_MPORT_en", false,-1);
        tracep->declBus(c+334,"top exu_step Regfile_reg_trace_io_input_reg_4_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+115,"top exu_step Regfile_reg_trace_io_input_reg_4_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_5_MPORT_en", false,-1);
        tracep->declBus(c+335,"top exu_step Regfile_reg_trace_io_input_reg_5_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+117,"top exu_step Regfile_reg_trace_io_input_reg_5_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_6_MPORT_en", false,-1);
        tracep->declBus(c+336,"top exu_step Regfile_reg_trace_io_input_reg_6_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+119,"top exu_step Regfile_reg_trace_io_input_reg_6_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_7_MPORT_en", false,-1);
        tracep->declBus(c+337,"top exu_step Regfile_reg_trace_io_input_reg_7_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+121,"top exu_step Regfile_reg_trace_io_input_reg_7_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_8_MPORT_en", false,-1);
        tracep->declBus(c+338,"top exu_step Regfile_reg_trace_io_input_reg_8_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+123,"top exu_step Regfile_reg_trace_io_input_reg_8_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_9_MPORT_en", false,-1);
        tracep->declBus(c+339,"top exu_step Regfile_reg_trace_io_input_reg_9_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+125,"top exu_step Regfile_reg_trace_io_input_reg_9_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_10_MPORT_en", false,-1);
        tracep->declBus(c+340,"top exu_step Regfile_reg_trace_io_input_reg_10_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+127,"top exu_step Regfile_reg_trace_io_input_reg_10_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_11_MPORT_en", false,-1);
        tracep->declBus(c+341,"top exu_step Regfile_reg_trace_io_input_reg_11_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+129,"top exu_step Regfile_reg_trace_io_input_reg_11_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_12_MPORT_en", false,-1);
        tracep->declBus(c+342,"top exu_step Regfile_reg_trace_io_input_reg_12_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+131,"top exu_step Regfile_reg_trace_io_input_reg_12_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_13_MPORT_en", false,-1);
        tracep->declBus(c+343,"top exu_step Regfile_reg_trace_io_input_reg_13_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+133,"top exu_step Regfile_reg_trace_io_input_reg_13_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_14_MPORT_en", false,-1);
        tracep->declBus(c+344,"top exu_step Regfile_reg_trace_io_input_reg_14_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+135,"top exu_step Regfile_reg_trace_io_input_reg_14_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_15_MPORT_en", false,-1);
        tracep->declBus(c+345,"top exu_step Regfile_reg_trace_io_input_reg_15_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+137,"top exu_step Regfile_reg_trace_io_input_reg_15_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_16_MPORT_en", false,-1);
        tracep->declBus(c+346,"top exu_step Regfile_reg_trace_io_input_reg_16_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+139,"top exu_step Regfile_reg_trace_io_input_reg_16_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_17_MPORT_en", false,-1);
        tracep->declBus(c+329,"top exu_step Regfile_reg_trace_io_input_reg_17_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+105,"top exu_step Regfile_reg_trace_io_input_reg_17_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_18_MPORT_en", false,-1);
        tracep->declBus(c+347,"top exu_step Regfile_reg_trace_io_input_reg_18_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+141,"top exu_step Regfile_reg_trace_io_input_reg_18_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_19_MPORT_en", false,-1);
        tracep->declBus(c+348,"top exu_step Regfile_reg_trace_io_input_reg_19_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+143,"top exu_step Regfile_reg_trace_io_input_reg_19_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_20_MPORT_en", false,-1);
        tracep->declBus(c+349,"top exu_step Regfile_reg_trace_io_input_reg_20_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+145,"top exu_step Regfile_reg_trace_io_input_reg_20_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_21_MPORT_en", false,-1);
        tracep->declBus(c+350,"top exu_step Regfile_reg_trace_io_input_reg_21_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+147,"top exu_step Regfile_reg_trace_io_input_reg_21_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_22_MPORT_en", false,-1);
        tracep->declBus(c+351,"top exu_step Regfile_reg_trace_io_input_reg_22_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+149,"top exu_step Regfile_reg_trace_io_input_reg_22_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_23_MPORT_en", false,-1);
        tracep->declBus(c+352,"top exu_step Regfile_reg_trace_io_input_reg_23_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+151,"top exu_step Regfile_reg_trace_io_input_reg_23_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_24_MPORT_en", false,-1);
        tracep->declBus(c+353,"top exu_step Regfile_reg_trace_io_input_reg_24_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+153,"top exu_step Regfile_reg_trace_io_input_reg_24_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_25_MPORT_en", false,-1);
        tracep->declBus(c+354,"top exu_step Regfile_reg_trace_io_input_reg_25_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+155,"top exu_step Regfile_reg_trace_io_input_reg_25_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_26_MPORT_en", false,-1);
        tracep->declBus(c+355,"top exu_step Regfile_reg_trace_io_input_reg_26_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+157,"top exu_step Regfile_reg_trace_io_input_reg_26_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_27_MPORT_en", false,-1);
        tracep->declBus(c+356,"top exu_step Regfile_reg_trace_io_input_reg_27_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+159,"top exu_step Regfile_reg_trace_io_input_reg_27_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_28_MPORT_en", false,-1);
        tracep->declBus(c+357,"top exu_step Regfile_reg_trace_io_input_reg_28_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+161,"top exu_step Regfile_reg_trace_io_input_reg_28_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_29_MPORT_en", false,-1);
        tracep->declBus(c+358,"top exu_step Regfile_reg_trace_io_input_reg_29_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+163,"top exu_step Regfile_reg_trace_io_input_reg_29_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_30_MPORT_en", false,-1);
        tracep->declBus(c+359,"top exu_step Regfile_reg_trace_io_input_reg_30_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+165,"top exu_step Regfile_reg_trace_io_input_reg_30_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_reg_trace_io_input_reg_31_MPORT_en", false,-1);
        tracep->declBus(c+360,"top exu_step Regfile_reg_trace_io_input_reg_31_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+167,"top exu_step Regfile_reg_trace_io_input_reg_31_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_Mem_modle_io_Wdata_MPORT_en", false,-1);
        tracep->declBus(c+6,"top exu_step Regfile_Mem_modle_io_Wdata_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+101,"top exu_step Regfile_Mem_modle_io_Wdata_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_Mem_modle_io_Wdata_MPORT_1_en", false,-1);
        tracep->declBus(c+6,"top exu_step Regfile_Mem_modle_io_Wdata_MPORT_1_addr", false,-1, 4,0);
        tracep->declQuad(c+101,"top exu_step Regfile_Mem_modle_io_Wdata_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_Mem_modle_io_Wdata_MPORT_2_en", false,-1);
        tracep->declBus(c+6,"top exu_step Regfile_Mem_modle_io_Wdata_MPORT_2_addr", false,-1, 4,0);
        tracep->declQuad(c+101,"top exu_step Regfile_Mem_modle_io_Wdata_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step Regfile_Mem_modle_io_Wdata_MPORT_3_en", false,-1);
        tracep->declBus(c+6,"top exu_step Regfile_Mem_modle_io_Wdata_MPORT_3_addr", false,-1, 4,0);
        tracep->declQuad(c+101,"top exu_step Regfile_Mem_modle_io_Wdata_MPORT_3_data", false,-1, 63,0);
        tracep->declQuad(c+169,"top exu_step Regfile_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+7,"top exu_step Regfile_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+328,"top exu_step Regfile_MPORT_mask", false,-1);
        tracep->declBit(c+328,"top exu_step Regfile_MPORT_en", false,-1);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+171+i*2,"top exu_step CSR_Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+328,"top exu_step CSR_Reg_io_res2rd_MPORT_en", false,-1);
        tracep->declBus(c+179,"top exu_step CSR_Reg_io_res2rd_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+180,"top exu_step CSR_Reg_io_res2rd_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step CSR_Reg_io_res2rd_MPORT_1_en", false,-1);
        tracep->declBus(c+179,"top exu_step CSR_Reg_io_res2rd_MPORT_1_addr", false,-1, 1,0);
        tracep->declQuad(c+180,"top exu_step CSR_Reg_io_res2rd_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step CSR_Reg_io_res2rd_MPORT_2_en", false,-1);
        tracep->declBus(c+179,"top exu_step CSR_Reg_io_res2rd_MPORT_2_addr", false,-1, 1,0);
        tracep->declQuad(c+180,"top exu_step CSR_Reg_io_res2rd_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step CSR_Reg_csr_wdata_MPORT_en", false,-1);
        tracep->declBus(c+179,"top exu_step CSR_Reg_csr_wdata_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+180,"top exu_step CSR_Reg_csr_wdata_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step CSR_Reg_csr_wdata_MPORT_1_en", false,-1);
        tracep->declBus(c+179,"top exu_step CSR_Reg_csr_wdata_MPORT_1_addr", false,-1, 1,0);
        tracep->declQuad(c+180,"top exu_step CSR_Reg_csr_wdata_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step CSR_Reg_MPORT_2_en", false,-1);
        tracep->declBus(c+361,"top exu_step CSR_Reg_MPORT_2_addr", false,-1, 1,0);
        tracep->declQuad(c+182,"top exu_step CSR_Reg_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step CSR_Reg_MPORT_5_en", false,-1);
        tracep->declBus(c+362,"top exu_step CSR_Reg_MPORT_5_addr", false,-1, 1,0);
        tracep->declQuad(c+184,"top exu_step CSR_Reg_MPORT_5_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step CSR_Reg_MPORT_7_en", false,-1);
        tracep->declBus(c+179,"top exu_step CSR_Reg_MPORT_7_addr", false,-1, 1,0);
        tracep->declQuad(c+180,"top exu_step CSR_Reg_MPORT_7_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step CSR_Reg_io_pc_next_MPORT_12_en", false,-1);
        tracep->declBus(c+363,"top exu_step CSR_Reg_io_pc_next_MPORT_12_addr", false,-1, 1,0);
        tracep->declQuad(c+186,"top exu_step CSR_Reg_io_pc_next_MPORT_12_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step CSR_Reg_io_pc_next_MPORT_13_en", false,-1);
        tracep->declBus(c+361,"top exu_step CSR_Reg_io_pc_next_MPORT_13_addr", false,-1, 1,0);
        tracep->declQuad(c+182,"top exu_step CSR_Reg_io_pc_next_MPORT_13_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step CSR_Reg_reg_trace_io_csr_reg_0_MPORT_en", false,-1);
        tracep->declBus(c+363,"top exu_step CSR_Reg_reg_trace_io_csr_reg_0_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+186,"top exu_step CSR_Reg_reg_trace_io_csr_reg_0_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step CSR_Reg_reg_trace_io_csr_reg_1_MPORT_en", false,-1);
        tracep->declBus(c+361,"top exu_step CSR_Reg_reg_trace_io_csr_reg_1_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+182,"top exu_step CSR_Reg_reg_trace_io_csr_reg_1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+328,"top exu_step CSR_Reg_reg_trace_io_csr_reg_2_MPORT_en", false,-1);
        tracep->declBus(c+364,"top exu_step CSR_Reg_reg_trace_io_csr_reg_2_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+188,"top exu_step CSR_Reg_reg_trace_io_csr_reg_2_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+190,"top exu_step CSR_Reg_MPORT_1_data", false,-1, 63,0);
        tracep->declBus(c+361,"top exu_step CSR_Reg_MPORT_1_addr", false,-1, 1,0);
        tracep->declBit(c+328,"top exu_step CSR_Reg_MPORT_1_mask", false,-1);
        tracep->declBit(c+328,"top exu_step CSR_Reg_MPORT_1_en", false,-1);
        tracep->declQuad(c+192,"top exu_step CSR_Reg_MPORT_3_data", false,-1, 63,0);
        tracep->declBus(c+362,"top exu_step CSR_Reg_MPORT_3_addr", false,-1, 1,0);
        tracep->declBit(c+328,"top exu_step CSR_Reg_MPORT_3_mask", false,-1);
        tracep->declBit(c+328,"top exu_step CSR_Reg_MPORT_3_en", false,-1);
        tracep->declQuad(c+194,"top exu_step CSR_Reg_MPORT_6_data", false,-1, 63,0);
        tracep->declBus(c+179,"top exu_step CSR_Reg_MPORT_6_addr", false,-1, 1,0);
        tracep->declBit(c+328,"top exu_step CSR_Reg_MPORT_6_mask", false,-1);
        tracep->declBit(c+328,"top exu_step CSR_Reg_MPORT_6_en", false,-1);
        tracep->declQuad(c+107,"top exu_step reg_trace_input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+109,"top exu_step reg_trace_input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+111,"top exu_step reg_trace_input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+113,"top exu_step reg_trace_input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+115,"top exu_step reg_trace_input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+117,"top exu_step reg_trace_input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+119,"top exu_step reg_trace_input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+121,"top exu_step reg_trace_input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+123,"top exu_step reg_trace_input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+125,"top exu_step reg_trace_input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+127,"top exu_step reg_trace_input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+129,"top exu_step reg_trace_input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+131,"top exu_step reg_trace_input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+133,"top exu_step reg_trace_input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+135,"top exu_step reg_trace_input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+137,"top exu_step reg_trace_input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+139,"top exu_step reg_trace_input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+105,"top exu_step reg_trace_input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+141,"top exu_step reg_trace_input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+143,"top exu_step reg_trace_input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+145,"top exu_step reg_trace_input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+147,"top exu_step reg_trace_input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+149,"top exu_step reg_trace_input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+151,"top exu_step reg_trace_input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+153,"top exu_step reg_trace_input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+155,"top exu_step reg_trace_input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+157,"top exu_step reg_trace_input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+159,"top exu_step reg_trace_input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+161,"top exu_step reg_trace_input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+163,"top exu_step reg_trace_input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+165,"top exu_step reg_trace_input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+167,"top exu_step reg_trace_input_reg_31", false,-1, 63,0);
        tracep->declQuad(c+186,"top exu_step reg_trace_csr_reg_0", false,-1, 63,0);
        tracep->declQuad(c+182,"top exu_step reg_trace_csr_reg_1", false,-1, 63,0);
        tracep->declQuad(c+188,"top exu_step reg_trace_csr_reg_2", false,-1, 63,0);
        tracep->declQuad(c+324,"top exu_step reg_trace_csr_reg_3", false,-1, 63,0);
        tracep->declQuad(c+1,"top exu_step reg_trace_pc", false,-1, 63,0);
        tracep->declBus(c+196,"top exu_step csr_addr", false,-1, 11,0);
        tracep->declQuad(c+197,"top exu_step src1_value", false,-1, 63,0);
        tracep->declQuad(c+199,"top exu_step src2_value", false,-1, 63,0);
        tracep->declQuad(c+201,"top exu_step add_res", false,-1, 63,0);
        tracep->declQuad(c+203,"top exu_step sub_res", false,-1, 63,0);
        tracep->declQuad(c+205,"top exu_step sra_res", false,-1, 63,0);
        tracep->declQuad(c+207,"top exu_step srl_res", false,-1, 63,0);
        tracep->declArray(c+209,"top exu_step sll_res", false,-1, 126,0);
        tracep->declBus(c+213,"top exu_step sraw_res", false,-1, 31,0);
        tracep->declBus(c+214,"top exu_step srlw_res", false,-1, 31,0);
        tracep->declQuad(c+215,"top exu_step sllw_res", false,-1, 62,0);
        tracep->declQuad(c+217,"top exu_step or_res", false,-1, 63,0);
        tracep->declQuad(c+219,"top exu_step xor_res", false,-1, 63,0);
        tracep->declQuad(c+221,"top exu_step and_res", false,-1, 63,0);
        tracep->declQuad(c+223,"top exu_step mlu_res", false,-1, 63,0);
        tracep->declBus(c+225,"top exu_step mluw_res", false,-1, 31,0);
        tracep->declBus(c+226,"top exu_step divw_res", false,-1, 31,0);
        tracep->declBus(c+227,"top exu_step divuw_res", false,-1, 31,0);
        tracep->declBus(c+228,"top exu_step remw_res", false,-1, 31,0);
        tracep->declBus(c+229,"top exu_step remuw_res", false,-1, 31,0);
        tracep->declArray(c+230,"top exu_step div_res", false,-1, 64,0);
        tracep->declQuad(c+233,"top exu_step divu_res", false,-1, 63,0);
        tracep->declQuad(c+235,"top exu_step rem_res", false,-1, 63,0);
        tracep->declQuad(c+237,"top exu_step remu_res", false,-1, 63,0);
        tracep->declQuad(c+31,"top exu_step mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+239,"top exu_step reg_value", false,-1, 63,0);
        tracep->declQuad(c+241,"top exu_step csr_wdata", false,-1, 63,0);
        tracep->declQuad(c+29,"top exu_step Mem_modle Raddr", false,-1, 63,0);
        tracep->declQuad(c+29,"top exu_step Mem_modle Waddr", false,-1, 63,0);
        tracep->declQuad(c+33,"top exu_step Mem_modle Wdata", false,-1, 63,0);
        tracep->declBus(c+15,"top exu_step Mem_modle Wmask", false,-1, 7,0);
        tracep->declBit(c+14,"top exu_step Mem_modle Write_en", false,-1);
        tracep->declQuad(c+31,"top exu_step Mem_modle Rdata", false,-1, 63,0);
        tracep->declQuad(c+107,"top exu_step reg_trace input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+109,"top exu_step reg_trace input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+111,"top exu_step reg_trace input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+113,"top exu_step reg_trace input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+115,"top exu_step reg_trace input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+117,"top exu_step reg_trace input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+119,"top exu_step reg_trace input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+121,"top exu_step reg_trace input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+123,"top exu_step reg_trace input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+125,"top exu_step reg_trace input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+127,"top exu_step reg_trace input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+129,"top exu_step reg_trace input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+131,"top exu_step reg_trace input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+133,"top exu_step reg_trace input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+135,"top exu_step reg_trace input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+137,"top exu_step reg_trace input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+139,"top exu_step reg_trace input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+105,"top exu_step reg_trace input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+141,"top exu_step reg_trace input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+143,"top exu_step reg_trace input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+145,"top exu_step reg_trace input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+147,"top exu_step reg_trace input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+149,"top exu_step reg_trace input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+151,"top exu_step reg_trace input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+153,"top exu_step reg_trace input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+155,"top exu_step reg_trace input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+157,"top exu_step reg_trace input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+159,"top exu_step reg_trace input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+161,"top exu_step reg_trace input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+163,"top exu_step reg_trace input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+165,"top exu_step reg_trace input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+167,"top exu_step reg_trace input_reg_31", false,-1, 63,0);
        tracep->declQuad(c+186,"top exu_step reg_trace csr_reg_0", false,-1, 63,0);
        tracep->declQuad(c+182,"top exu_step reg_trace csr_reg_1", false,-1, 63,0);
        tracep->declQuad(c+188,"top exu_step reg_trace csr_reg_2", false,-1, 63,0);
        tracep->declQuad(c+324,"top exu_step reg_trace csr_reg_3", false,-1, 63,0);
        tracep->declQuad(c+1,"top exu_step reg_trace pc", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+243+i*2,"top exu_step reg_trace traceregs", true,(i+0), 63,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+307+i*2,"top exu_step reg_trace csr_regs", true,(i+0), 63,0);}}
        tracep->declBus(c+20,"top dpi flag", false,-1, 31,0);
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
    VlWide<4>/*127:0*/ __Vtemp169;
    VlWide<4>/*127:0*/ __Vtemp170;
    VlWide<4>/*127:0*/ __Vtemp171;
    VlWide<3>/*95:0*/ __Vtemp174;
    VlWide<3>/*95:0*/ __Vtemp175;
    VlWide<3>/*95:0*/ __Vtemp177;
    VlWide<3>/*95:0*/ __Vtemp178;
    VlWide<3>/*95:0*/ __Vtemp179;
    VlWide<3>/*95:0*/ __Vtemp180;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__pc_now),64);
        tracep->fullIData(oldp+3,((IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)),32);
        tracep->fullIData(oldp+4,(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194),32);
        tracep->fullCData(oldp+5,((0x1fU & (IData)(
                                                   (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                    >> 0xfU)))),5);
        tracep->fullCData(oldp+6,((0x1fU & (IData)(
                                                   (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                    >> 0x14U)))),5);
        tracep->fullCData(oldp+7,((0x1fU & (IData)(
                                                   (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                    >> 7U)))),5);
        tracep->fullQData(oldp+8,(vlSelf->top__DOT__idu_step_io_imm),64);
        tracep->fullBit(oldp+10,(((0x100073U != (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)) 
                                  & (IData)(vlSelf->top__DOT__idu_step__DOT___reg_write_T_37))));
        tracep->fullBit(oldp+11,(((0x1073U == (0x707fU 
                                               & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                                  | ((0x2073U == (0x707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                                     | (0x3073U == 
                                        (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))))));
        tracep->fullBit(oldp+12,(vlSelf->top__DOT__idu_step_io_ctrl_sign_src2_is_imm));
        tracep->fullBit(oldp+13,(vlSelf->top__DOT__idu_step_io_ctrl_sign_src1_is_pc));
        tracep->fullBit(oldp+14,((0x44U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188))));
        tracep->fullCData(oldp+15,(((0x3023U == (0x707fU 
                                                 & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                     ? 0xffU : ((0x1023U 
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
        tracep->fullQData(oldp+16,(vlSelf->top__DOT__exu_step_io_pc_next),64);
        tracep->fullQData(oldp+18,((((QData)((IData)(
                                                     vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U])))),64);
        tracep->fullIData(oldp+20,((2U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))),32);
        tracep->fullQData(oldp+21,(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata),64);
        tracep->fullSData(oldp+23,((0xfffU & (IData)(
                                                     (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                      >> 0x14U)))),12);
        tracep->fullIData(oldp+24,(((0x80000U & ((IData)(
                                                         (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                          >> 0x1fU)) 
                                                 << 0x13U)) 
                                    | ((0x7f800U & 
                                        ((IData)((vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                  >> 0xcU)) 
                                         << 0xbU)) 
                                       | ((0x400U & 
                                           ((IData)(
                                                    (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                     >> 0x14U)) 
                                            << 0xaU)) 
                                          | (0x3ffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                        >> 0x15U))))))),20);
        tracep->fullIData(oldp+25,((0xfffffU & (IData)(
                                                       (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                        >> 0xcU)))),20);
        tracep->fullSData(oldp+26,(((0xfe0U & ((IData)(
                                                       (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                        >> 0x19U)) 
                                               << 5U)) 
                                    | (0x1fU & (IData)(
                                                       (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                        >> 7U))))),12);
        tracep->fullSData(oldp+27,(((0x800U & ((IData)(
                                                       (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                        >> 0x1fU)) 
                                               << 0xbU)) 
                                    | ((0x400U & ((IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                           >> 7U)) 
                                                  << 0xaU)) 
                                       | ((0x3f0U & 
                                           ((IData)(
                                                    (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                     >> 0x19U)) 
                                            << 4U)) 
                                          | (0xfU & (IData)(
                                                            (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                             >> 8U))))))),12);
        tracep->fullIData(oldp+28,(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188),32);
        tracep->fullQData(oldp+29,((vlSelf->top__DOT__exu_step__DOT__src1_value 
                                    + vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata),64);
        tracep->fullQData(oldp+33,(((0x27U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
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
                                     : ((0x28U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
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
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
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
                                             : ((7U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
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
                                                 [(0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                              >> 0x14U)))])
                                                 : 0ULL))))),64);
        tracep->fullQData(oldp+35,(vlSelf->top__DOT__exu_step__DOT__Regfile[0]),64);
        tracep->fullQData(oldp+37,(vlSelf->top__DOT__exu_step__DOT__Regfile[1]),64);
        tracep->fullQData(oldp+39,(vlSelf->top__DOT__exu_step__DOT__Regfile[2]),64);
        tracep->fullQData(oldp+41,(vlSelf->top__DOT__exu_step__DOT__Regfile[3]),64);
        tracep->fullQData(oldp+43,(vlSelf->top__DOT__exu_step__DOT__Regfile[4]),64);
        tracep->fullQData(oldp+45,(vlSelf->top__DOT__exu_step__DOT__Regfile[5]),64);
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__exu_step__DOT__Regfile[6]),64);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__exu_step__DOT__Regfile[7]),64);
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__exu_step__DOT__Regfile[8]),64);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__exu_step__DOT__Regfile[9]),64);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__exu_step__DOT__Regfile[10]),64);
        tracep->fullQData(oldp+57,(vlSelf->top__DOT__exu_step__DOT__Regfile[11]),64);
        tracep->fullQData(oldp+59,(vlSelf->top__DOT__exu_step__DOT__Regfile[12]),64);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__exu_step__DOT__Regfile[13]),64);
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__exu_step__DOT__Regfile[14]),64);
        tracep->fullQData(oldp+65,(vlSelf->top__DOT__exu_step__DOT__Regfile[15]),64);
        tracep->fullQData(oldp+67,(vlSelf->top__DOT__exu_step__DOT__Regfile[16]),64);
        tracep->fullQData(oldp+69,(vlSelf->top__DOT__exu_step__DOT__Regfile[17]),64);
        tracep->fullQData(oldp+71,(vlSelf->top__DOT__exu_step__DOT__Regfile[18]),64);
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__exu_step__DOT__Regfile[19]),64);
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__exu_step__DOT__Regfile[20]),64);
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__exu_step__DOT__Regfile[21]),64);
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__exu_step__DOT__Regfile[22]),64);
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__exu_step__DOT__Regfile[23]),64);
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__exu_step__DOT__Regfile[24]),64);
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__exu_step__DOT__Regfile[25]),64);
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__exu_step__DOT__Regfile[26]),64);
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__exu_step__DOT__Regfile[27]),64);
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__exu_step__DOT__Regfile[28]),64);
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__exu_step__DOT__Regfile[29]),64);
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__exu_step__DOT__Regfile[30]),64);
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__exu_step__DOT__Regfile[31]),64);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [(0x1fU & (IData)(
                                                     (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                      >> 0xfU)))]),64);
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [(0x1fU & (IData)(
                                                      (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                       >> 0x14U)))]),64);
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [(0x1fU & (IData)(
                                                      (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                       >> 7U)))]),64);
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x11U]),64);
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0U]),64);
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [1U]),64);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [2U]),64);
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [3U]),64);
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [4U]),64);
        tracep->fullQData(oldp+117,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [5U]),64);
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [6U]),64);
        tracep->fullQData(oldp+121,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [7U]),64);
        tracep->fullQData(oldp+123,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [8U]),64);
        tracep->fullQData(oldp+125,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [9U]),64);
        tracep->fullQData(oldp+127,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xaU]),64);
        tracep->fullQData(oldp+129,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xbU]),64);
        tracep->fullQData(oldp+131,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xcU]),64);
        tracep->fullQData(oldp+133,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xdU]),64);
        tracep->fullQData(oldp+135,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xeU]),64);
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xfU]),64);
        tracep->fullQData(oldp+139,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x10U]),64);
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x12U]),64);
        tracep->fullQData(oldp+143,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x13U]),64);
        tracep->fullQData(oldp+145,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x14U]),64);
        tracep->fullQData(oldp+147,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x15U]),64);
        tracep->fullQData(oldp+149,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x16U]),64);
        tracep->fullQData(oldp+151,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x17U]),64);
        tracep->fullQData(oldp+153,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x18U]),64);
        tracep->fullQData(oldp+155,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x19U]),64);
        tracep->fullQData(oldp+157,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1aU]),64);
        tracep->fullQData(oldp+159,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1bU]),64);
        tracep->fullQData(oldp+161,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1cU]),64);
        tracep->fullQData(oldp+163,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1dU]),64);
        tracep->fullQData(oldp+165,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1eU]),64);
        tracep->fullQData(oldp+167,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1fU]),64);
        tracep->fullQData(oldp+169,(((((0x100073U != (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)) 
                                       & (IData)(vlSelf->top__DOT__idu_step__DOT___reg_write_T_37)) 
                                      & (0U != (0x1fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                           >> 7U)))))
                                      ? (((QData)((IData)(
                                                          vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U])))
                                      : ((0U == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                            >> 7U))))
                                          ? 0ULL : 
                                         vlSelf->top__DOT__exu_step__DOT__Regfile
                                         [(0x1fU & (IData)(
                                                           (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                            >> 7U)))]))),64);
        tracep->fullQData(oldp+171,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[0]),64);
        tracep->fullQData(oldp+173,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[1]),64);
        tracep->fullQData(oldp+175,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[2]),64);
        tracep->fullQData(oldp+177,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[3]),64);
        tracep->fullCData(oldp+179,(((0x342U == (0xfffU 
                                                 & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                      ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))),2);
        tracep->fullQData(oldp+180,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                    [((0x342U == (0xfffU 
                                                  & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                       ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]),64);
        tracep->fullQData(oldp+182,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                    [1U]),64);
        tracep->fullQData(oldp+184,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                    [3U]),64);
        tracep->fullQData(oldp+186,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                    [0U]),64);
        tracep->fullQData(oldp+188,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                    [2U]),64);
        tracep->fullQData(oldp+190,(((0x3dU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                      ? vlSelf->top__DOT__pc_now
                                      : vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                     [1U])),64);
        tracep->fullQData(oldp+192,(((0x3dU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                      ? vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [0x11U] : vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                     [3U])),64);
        tracep->fullQData(oldp+194,((((0x1073U == (0x707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                                      | ((0x2073U == 
                                          (0x707fU 
                                           & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                                         | (0x3073U 
                                            == (0x707fU 
                                                & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))))
                                      ? ((0x47U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
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
                                                 [(
                                                   (0x342U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                                    ? 3U
                                                    : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))])
                                              : ((0x3fU 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? vlSelf->top__DOT__exu_step__DOT__src1_value
                                                  : 0ULL)))
                                      : vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                     [((0x342U == (0xfffU 
                                                   & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                        ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))])),64);
        tracep->fullSData(oldp+196,((0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm))),12);
        tracep->fullQData(oldp+197,(vlSelf->top__DOT__exu_step__DOT__src1_value),64);
        tracep->fullQData(oldp+199,(vlSelf->top__DOT__exu_step__DOT__src2_value),64);
        tracep->fullQData(oldp+201,(vlSelf->top__DOT__exu_step__DOT__add_res),64);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__exu_step__DOT__sub_res),64);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__exu_step__DOT__sra_res),64);
        tracep->fullQData(oldp+207,(vlSelf->top__DOT__exu_step__DOT__srl_res),64);
        tracep->fullWData(oldp+209,(vlSelf->top__DOT__exu_step__DOT__sll_res),127);
        tracep->fullIData(oldp+213,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__exu_step__DOT__src1_value), 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)))),32);
        tracep->fullIData(oldp+214,(vlSelf->top__DOT__exu_step__DOT__srlw_res),32);
        tracep->fullQData(oldp+215,(vlSelf->top__DOT__exu_step__DOT__sllw_res),63);
        tracep->fullQData(oldp+217,(vlSelf->top__DOT__exu_step__DOT__or_res),64);
        tracep->fullQData(oldp+219,(vlSelf->top__DOT__exu_step__DOT__xor_res),64);
        tracep->fullQData(oldp+221,(vlSelf->top__DOT__exu_step__DOT__and_res),64);
        VL_EXTEND_WQ(128,64, __Vtemp169, vlSelf->top__DOT__exu_step__DOT__src1_value);
        VL_EXTEND_WQ(128,64, __Vtemp170, vlSelf->top__DOT__exu_step__DOT__src2_value);
        VL_MUL_W(4, __Vtemp171, __Vtemp169, __Vtemp170);
        tracep->fullQData(oldp+223,((((QData)((IData)(
                                                      __Vtemp171[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp171[0U])))),64);
        tracep->fullIData(oldp+225,((IData)(vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2)),32);
        tracep->fullIData(oldp+226,((IData)(vlSelf->top__DOT__exu_step__DOT___divw_res_T_4)),32);
        tracep->fullIData(oldp+227,(vlSelf->top__DOT__exu_step__DOT__divuw_res),32);
        tracep->fullIData(oldp+228,(vlSelf->top__DOT__exu_step__DOT__remw_res),32);
        tracep->fullIData(oldp+229,(vlSelf->top__DOT__exu_step__DOT__remuw_res),32);
        VL_EXTENDS_WQ(65,64, __Vtemp174, vlSelf->top__DOT__exu_step__DOT__src1_value);
        __Vtemp175[0U] = __Vtemp174[0U];
        __Vtemp175[1U] = __Vtemp174[1U];
        __Vtemp175[2U] = (1U & __Vtemp174[2U]);
        VL_EXTENDS_WQ(65,64, __Vtemp177, vlSelf->top__DOT__exu_step__DOT__src2_value);
        __Vtemp178[0U] = __Vtemp177[0U];
        __Vtemp178[1U] = __Vtemp177[1U];
        __Vtemp178[2U] = (1U & __Vtemp177[2U]);
        VL_DIVS_WWW(65, __Vtemp179, __Vtemp175, __Vtemp178);
        __Vtemp180[0U] = __Vtemp179[0U];
        __Vtemp180[1U] = __Vtemp179[1U];
        __Vtemp180[2U] = (1U & __Vtemp179[2U]);
        tracep->fullWData(oldp+230,(__Vtemp180),65);
        tracep->fullQData(oldp+233,(VL_DIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
        tracep->fullQData(oldp+235,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
        tracep->fullQData(oldp+237,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
        tracep->fullQData(oldp+239,(((0U == (0x1fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                        >> 7U))))
                                      ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [(0x1fU & (IData)(
                                                       (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                        >> 7U)))])),64);
        tracep->fullQData(oldp+241,(((0x47U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                      ? (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                         & (~ vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                            [((0x342U 
                                               == (0xfffU 
                                                   & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                               ? 3U
                                               : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]))
                                      : ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
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
        tracep->fullQData(oldp+243,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0]),64);
        tracep->fullQData(oldp+245,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[1]),64);
        tracep->fullQData(oldp+247,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[2]),64);
        tracep->fullQData(oldp+249,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[3]),64);
        tracep->fullQData(oldp+251,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[4]),64);
        tracep->fullQData(oldp+253,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[5]),64);
        tracep->fullQData(oldp+255,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[6]),64);
        tracep->fullQData(oldp+257,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[7]),64);
        tracep->fullQData(oldp+259,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[8]),64);
        tracep->fullQData(oldp+261,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[9]),64);
        tracep->fullQData(oldp+263,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[10]),64);
        tracep->fullQData(oldp+265,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[11]),64);
        tracep->fullQData(oldp+267,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[12]),64);
        tracep->fullQData(oldp+269,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[13]),64);
        tracep->fullQData(oldp+271,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[14]),64);
        tracep->fullQData(oldp+273,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[15]),64);
        tracep->fullQData(oldp+275,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[16]),64);
        tracep->fullQData(oldp+277,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[17]),64);
        tracep->fullQData(oldp+279,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[18]),64);
        tracep->fullQData(oldp+281,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[19]),64);
        tracep->fullQData(oldp+283,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[20]),64);
        tracep->fullQData(oldp+285,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[21]),64);
        tracep->fullQData(oldp+287,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[22]),64);
        tracep->fullQData(oldp+289,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[23]),64);
        tracep->fullQData(oldp+291,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[24]),64);
        tracep->fullQData(oldp+293,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[25]),64);
        tracep->fullQData(oldp+295,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[26]),64);
        tracep->fullQData(oldp+297,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[27]),64);
        tracep->fullQData(oldp+299,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[28]),64);
        tracep->fullQData(oldp+301,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[29]),64);
        tracep->fullQData(oldp+303,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[30]),64);
        tracep->fullQData(oldp+305,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[31]),64);
        tracep->fullQData(oldp+307,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[0]),64);
        tracep->fullQData(oldp+309,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[1]),64);
        tracep->fullQData(oldp+311,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[2]),64);
        tracep->fullQData(oldp+313,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[3]),64);
        tracep->fullBit(oldp+315,(vlSelf->clock));
        tracep->fullBit(oldp+316,(vlSelf->reset));
        tracep->fullIData(oldp+317,(vlSelf->io_inst),32);
        tracep->fullQData(oldp+318,(vlSelf->io_pc),64);
        tracep->fullQData(oldp+320,(vlSelf->io_pc_next),64);
        tracep->fullQData(oldp+322,(vlSelf->io_outval),64);
        tracep->fullQData(oldp+324,(0ULL),64);
        tracep->fullCData(oldp+326,(0U),8);
        tracep->fullBit(oldp+327,(0U));
        tracep->fullBit(oldp+328,(1U));
        tracep->fullCData(oldp+329,(0x11U),5);
        tracep->fullCData(oldp+330,(0U),5);
        tracep->fullCData(oldp+331,(1U),5);
        tracep->fullCData(oldp+332,(2U),5);
        tracep->fullCData(oldp+333,(3U),5);
        tracep->fullCData(oldp+334,(4U),5);
        tracep->fullCData(oldp+335,(5U),5);
        tracep->fullCData(oldp+336,(6U),5);
        tracep->fullCData(oldp+337,(7U),5);
        tracep->fullCData(oldp+338,(8U),5);
        tracep->fullCData(oldp+339,(9U),5);
        tracep->fullCData(oldp+340,(0xaU),5);
        tracep->fullCData(oldp+341,(0xbU),5);
        tracep->fullCData(oldp+342,(0xcU),5);
        tracep->fullCData(oldp+343,(0xdU),5);
        tracep->fullCData(oldp+344,(0xeU),5);
        tracep->fullCData(oldp+345,(0xfU),5);
        tracep->fullCData(oldp+346,(0x10U),5);
        tracep->fullCData(oldp+347,(0x12U),5);
        tracep->fullCData(oldp+348,(0x13U),5);
        tracep->fullCData(oldp+349,(0x14U),5);
        tracep->fullCData(oldp+350,(0x15U),5);
        tracep->fullCData(oldp+351,(0x16U),5);
        tracep->fullCData(oldp+352,(0x17U),5);
        tracep->fullCData(oldp+353,(0x18U),5);
        tracep->fullCData(oldp+354,(0x19U),5);
        tracep->fullCData(oldp+355,(0x1aU),5);
        tracep->fullCData(oldp+356,(0x1bU),5);
        tracep->fullCData(oldp+357,(0x1cU),5);
        tracep->fullCData(oldp+358,(0x1dU),5);
        tracep->fullCData(oldp+359,(0x1eU),5);
        tracep->fullCData(oldp+360,(0x1fU),5);
        tracep->fullCData(oldp+361,(1U),2);
        tracep->fullCData(oldp+362,(3U),2);
        tracep->fullCData(oldp+363,(0U),2);
        tracep->fullCData(oldp+364,(2U),2);
    }
}
