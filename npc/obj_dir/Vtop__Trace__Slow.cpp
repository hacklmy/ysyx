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
        tracep->declBit(c+267,"clock", false,-1);
        tracep->declBit(c+268,"reset", false,-1);
        tracep->declBus(c+269,"io_inst", false,-1, 31,0);
        tracep->declQuad(c+270,"io_pc", false,-1, 63,0);
        tracep->declQuad(c+272,"io_pc_next", false,-1, 63,0);
        tracep->declQuad(c+274,"io_outval", false,-1, 63,0);
        tracep->declBit(c+267,"top clock", false,-1);
        tracep->declBit(c+268,"top reset", false,-1);
        tracep->declBus(c+269,"top io_inst", false,-1, 31,0);
        tracep->declQuad(c+270,"top io_pc", false,-1, 63,0);
        tracep->declQuad(c+272,"top io_pc_next", false,-1, 63,0);
        tracep->declQuad(c+274,"top io_outval", false,-1, 63,0);
        tracep->declQuad(c+1,"top ifu_step_io_pc", false,-1, 63,0);
        tracep->declBus(c+3,"top ifu_step_io_inst", false,-1, 31,0);
        tracep->declBus(c+3,"top idu_step_io_inst", false,-1, 31,0);
        tracep->declBus(c+4,"top idu_step_io_inst_now", false,-1, 31,0);
        tracep->declBus(c+5,"top idu_step_io_rs1", false,-1, 4,0);
        tracep->declBus(c+6,"top idu_step_io_rs2", false,-1, 4,0);
        tracep->declBus(c+7,"top idu_step_io_rd", false,-1, 4,0);
        tracep->declQuad(c+8,"top idu_step_io_imm", false,-1, 63,0);
        tracep->declBit(c+10,"top idu_step_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+11,"top idu_step_io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+12,"top idu_step_io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declBit(c+13,"top idu_step_io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBus(c+14,"top idu_step_io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBit(c+267,"top exu_step_clock", false,-1);
        tracep->declQuad(c+1,"top exu_step_io_pc", false,-1, 63,0);
        tracep->declQuad(c+15,"top exu_step_io_pc_next", false,-1, 63,0);
        tracep->declBus(c+4,"top exu_step_io_inst_now", false,-1, 31,0);
        tracep->declBus(c+5,"top exu_step_io_rs1", false,-1, 4,0);
        tracep->declBus(c+6,"top exu_step_io_rs2", false,-1, 4,0);
        tracep->declBus(c+7,"top exu_step_io_rd", false,-1, 4,0);
        tracep->declQuad(c+8,"top exu_step_io_imm", false,-1, 63,0);
        tracep->declBit(c+10,"top exu_step_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+11,"top exu_step_io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+12,"top exu_step_io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declBit(c+13,"top exu_step_io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBus(c+14,"top exu_step_io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declQuad(c+17,"top exu_step_io_res2rd", false,-1, 63,0);
        tracep->declBus(c+19,"top dpi_flag", false,-1, 31,0);
        tracep->declQuad(c+1,"top pc_now", false,-1, 63,0);
        tracep->declQuad(c+1,"top ifu_step io_pc", false,-1, 63,0);
        tracep->declBus(c+3,"top ifu_step io_inst", false,-1, 31,0);
        tracep->declQuad(c+1,"top ifu_step inst_read_Raddr", false,-1, 63,0);
        tracep->declQuad(c+20,"top ifu_step inst_read_Rdata", false,-1, 63,0);
        tracep->declQuad(c+276,"top ifu_step inst_read_Waddr", false,-1, 63,0);
        tracep->declQuad(c+276,"top ifu_step inst_read_Wdata", false,-1, 63,0);
        tracep->declBus(c+278,"top ifu_step inst_read_Wmask", false,-1, 7,0);
        tracep->declBit(c+279,"top ifu_step inst_read_Write_en", false,-1);
        tracep->declQuad(c+1,"top ifu_step inst_read Raddr", false,-1, 63,0);
        tracep->declQuad(c+276,"top ifu_step inst_read Waddr", false,-1, 63,0);
        tracep->declQuad(c+276,"top ifu_step inst_read Wdata", false,-1, 63,0);
        tracep->declBus(c+278,"top ifu_step inst_read Wmask", false,-1, 7,0);
        tracep->declBit(c+279,"top ifu_step inst_read Write_en", false,-1);
        tracep->declQuad(c+20,"top ifu_step inst_read Rdata", false,-1, 63,0);
        tracep->declBus(c+3,"top idu_step io_inst", false,-1, 31,0);
        tracep->declBus(c+4,"top idu_step io_inst_now", false,-1, 31,0);
        tracep->declBus(c+5,"top idu_step io_rs1", false,-1, 4,0);
        tracep->declBus(c+6,"top idu_step io_rs2", false,-1, 4,0);
        tracep->declBus(c+7,"top idu_step io_rd", false,-1, 4,0);
        tracep->declQuad(c+8,"top idu_step io_imm", false,-1, 63,0);
        tracep->declBit(c+10,"top idu_step io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+11,"top idu_step io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+12,"top idu_step io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declBit(c+13,"top idu_step io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBus(c+14,"top idu_step io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBus(c+7,"top idu_step rd", false,-1, 4,0);
        tracep->declBus(c+22,"top idu_step imm_imm", false,-1, 11,0);
        tracep->declBus(c+23,"top idu_step imm_imm_1", false,-1, 19,0);
        tracep->declBus(c+24,"top idu_step imm_imm_2", false,-1, 19,0);
        tracep->declBus(c+25,"top idu_step imm_imm_3", false,-1, 11,0);
        tracep->declBus(c+26,"top idu_step imm_imm_4", false,-1, 11,0);
        tracep->declBus(c+27,"top idu_step inst_type", false,-1, 31,0);
        tracep->declBit(c+267,"top exu_step clock", false,-1);
        tracep->declQuad(c+1,"top exu_step io_pc", false,-1, 63,0);
        tracep->declQuad(c+15,"top exu_step io_pc_next", false,-1, 63,0);
        tracep->declBus(c+4,"top exu_step io_inst_now", false,-1, 31,0);
        tracep->declBus(c+5,"top exu_step io_rs1", false,-1, 4,0);
        tracep->declBus(c+6,"top exu_step io_rs2", false,-1, 4,0);
        tracep->declBus(c+7,"top exu_step io_rd", false,-1, 4,0);
        tracep->declQuad(c+8,"top exu_step io_imm", false,-1, 63,0);
        tracep->declBit(c+10,"top exu_step io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+11,"top exu_step io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+12,"top exu_step io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declBit(c+13,"top exu_step io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBus(c+14,"top exu_step io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declQuad(c+17,"top exu_step io_res2rd", false,-1, 63,0);
        tracep->declQuad(c+28,"top exu_step Mem_modle_Raddr", false,-1, 63,0);
        tracep->declQuad(c+30,"top exu_step Mem_modle_Rdata", false,-1, 63,0);
        tracep->declQuad(c+28,"top exu_step Mem_modle_Waddr", false,-1, 63,0);
        tracep->declQuad(c+32,"top exu_step Mem_modle_Wdata", false,-1, 63,0);
        tracep->declBus(c+14,"top exu_step Mem_modle_Wmask", false,-1, 7,0);
        tracep->declBit(c+13,"top exu_step Mem_modle_Write_en", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+34+i*2,"top exu_step Regfile", true,(i+0), 63,0);}}
        tracep->declBit(c+280,"top exu_step Regfile_cmp_MPORT_en", false,-1);
        tracep->declBus(c+5,"top exu_step Regfile_cmp_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+98,"top exu_step Regfile_cmp_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_cmp_MPORT_1_en", false,-1);
        tracep->declBus(c+6,"top exu_step Regfile_cmp_MPORT_1_addr", false,-1, 4,0);
        tracep->declQuad(c+100,"top exu_step Regfile_cmp_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_src1_value_MPORT_en", false,-1);
        tracep->declBus(c+5,"top exu_step Regfile_src1_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+98,"top exu_step Regfile_src1_value_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_src2_value_MPORT_en", false,-1);
        tracep->declBus(c+6,"top exu_step Regfile_src2_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+100,"top exu_step Regfile_src2_value_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_value_MPORT_en", false,-1);
        tracep->declBus(c+7,"top exu_step Regfile_reg_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+102,"top exu_step Regfile_reg_value_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_io_pc_next_MPORT_en", false,-1);
        tracep->declBus(c+5,"top exu_step Regfile_io_pc_next_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+98,"top exu_step Regfile_io_pc_next_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_io_pc_next_MPORT_1_en", false,-1);
        tracep->declBus(c+6,"top exu_step Regfile_io_pc_next_MPORT_1_addr", false,-1, 4,0);
        tracep->declQuad(c+100,"top exu_step Regfile_io_pc_next_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_io_pc_next_MPORT_2_en", false,-1);
        tracep->declBus(c+5,"top exu_step Regfile_io_pc_next_MPORT_2_addr", false,-1, 4,0);
        tracep->declQuad(c+98,"top exu_step Regfile_io_pc_next_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_io_pc_next_MPORT_3_en", false,-1);
        tracep->declBus(c+6,"top exu_step Regfile_io_pc_next_MPORT_3_addr", false,-1, 4,0);
        tracep->declQuad(c+100,"top exu_step Regfile_io_pc_next_MPORT_3_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_io_pc_next_MPORT_4_en", false,-1);
        tracep->declBus(c+5,"top exu_step Regfile_io_pc_next_MPORT_4_addr", false,-1, 4,0);
        tracep->declQuad(c+98,"top exu_step Regfile_io_pc_next_MPORT_4_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_io_pc_next_MPORT_5_en", false,-1);
        tracep->declBus(c+6,"top exu_step Regfile_io_pc_next_MPORT_5_addr", false,-1, 4,0);
        tracep->declQuad(c+100,"top exu_step Regfile_io_pc_next_MPORT_5_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_0_MPORT_en", false,-1);
        tracep->declBus(c+281,"top exu_step Regfile_reg_trace_io_input_reg_0_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+104,"top exu_step Regfile_reg_trace_io_input_reg_0_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_1_MPORT_en", false,-1);
        tracep->declBus(c+282,"top exu_step Regfile_reg_trace_io_input_reg_1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+106,"top exu_step Regfile_reg_trace_io_input_reg_1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_2_MPORT_en", false,-1);
        tracep->declBus(c+283,"top exu_step Regfile_reg_trace_io_input_reg_2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+108,"top exu_step Regfile_reg_trace_io_input_reg_2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_3_MPORT_en", false,-1);
        tracep->declBus(c+284,"top exu_step Regfile_reg_trace_io_input_reg_3_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+110,"top exu_step Regfile_reg_trace_io_input_reg_3_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_4_MPORT_en", false,-1);
        tracep->declBus(c+285,"top exu_step Regfile_reg_trace_io_input_reg_4_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+112,"top exu_step Regfile_reg_trace_io_input_reg_4_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_5_MPORT_en", false,-1);
        tracep->declBus(c+286,"top exu_step Regfile_reg_trace_io_input_reg_5_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+114,"top exu_step Regfile_reg_trace_io_input_reg_5_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_6_MPORT_en", false,-1);
        tracep->declBus(c+287,"top exu_step Regfile_reg_trace_io_input_reg_6_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+116,"top exu_step Regfile_reg_trace_io_input_reg_6_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_7_MPORT_en", false,-1);
        tracep->declBus(c+288,"top exu_step Regfile_reg_trace_io_input_reg_7_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+118,"top exu_step Regfile_reg_trace_io_input_reg_7_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_8_MPORT_en", false,-1);
        tracep->declBus(c+289,"top exu_step Regfile_reg_trace_io_input_reg_8_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+120,"top exu_step Regfile_reg_trace_io_input_reg_8_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_9_MPORT_en", false,-1);
        tracep->declBus(c+290,"top exu_step Regfile_reg_trace_io_input_reg_9_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+122,"top exu_step Regfile_reg_trace_io_input_reg_9_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_10_MPORT_en", false,-1);
        tracep->declBus(c+291,"top exu_step Regfile_reg_trace_io_input_reg_10_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+124,"top exu_step Regfile_reg_trace_io_input_reg_10_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_11_MPORT_en", false,-1);
        tracep->declBus(c+292,"top exu_step Regfile_reg_trace_io_input_reg_11_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+126,"top exu_step Regfile_reg_trace_io_input_reg_11_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_12_MPORT_en", false,-1);
        tracep->declBus(c+293,"top exu_step Regfile_reg_trace_io_input_reg_12_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+128,"top exu_step Regfile_reg_trace_io_input_reg_12_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_13_MPORT_en", false,-1);
        tracep->declBus(c+294,"top exu_step Regfile_reg_trace_io_input_reg_13_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+130,"top exu_step Regfile_reg_trace_io_input_reg_13_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_14_MPORT_en", false,-1);
        tracep->declBus(c+295,"top exu_step Regfile_reg_trace_io_input_reg_14_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+132,"top exu_step Regfile_reg_trace_io_input_reg_14_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_15_MPORT_en", false,-1);
        tracep->declBus(c+296,"top exu_step Regfile_reg_trace_io_input_reg_15_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+134,"top exu_step Regfile_reg_trace_io_input_reg_15_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_16_MPORT_en", false,-1);
        tracep->declBus(c+297,"top exu_step Regfile_reg_trace_io_input_reg_16_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+136,"top exu_step Regfile_reg_trace_io_input_reg_16_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_17_MPORT_en", false,-1);
        tracep->declBus(c+298,"top exu_step Regfile_reg_trace_io_input_reg_17_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+138,"top exu_step Regfile_reg_trace_io_input_reg_17_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_18_MPORT_en", false,-1);
        tracep->declBus(c+299,"top exu_step Regfile_reg_trace_io_input_reg_18_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+140,"top exu_step Regfile_reg_trace_io_input_reg_18_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_19_MPORT_en", false,-1);
        tracep->declBus(c+300,"top exu_step Regfile_reg_trace_io_input_reg_19_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+142,"top exu_step Regfile_reg_trace_io_input_reg_19_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_20_MPORT_en", false,-1);
        tracep->declBus(c+301,"top exu_step Regfile_reg_trace_io_input_reg_20_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+144,"top exu_step Regfile_reg_trace_io_input_reg_20_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_21_MPORT_en", false,-1);
        tracep->declBus(c+302,"top exu_step Regfile_reg_trace_io_input_reg_21_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+146,"top exu_step Regfile_reg_trace_io_input_reg_21_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_22_MPORT_en", false,-1);
        tracep->declBus(c+303,"top exu_step Regfile_reg_trace_io_input_reg_22_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+148,"top exu_step Regfile_reg_trace_io_input_reg_22_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_23_MPORT_en", false,-1);
        tracep->declBus(c+304,"top exu_step Regfile_reg_trace_io_input_reg_23_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+150,"top exu_step Regfile_reg_trace_io_input_reg_23_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_24_MPORT_en", false,-1);
        tracep->declBus(c+305,"top exu_step Regfile_reg_trace_io_input_reg_24_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+152,"top exu_step Regfile_reg_trace_io_input_reg_24_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_25_MPORT_en", false,-1);
        tracep->declBus(c+306,"top exu_step Regfile_reg_trace_io_input_reg_25_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+154,"top exu_step Regfile_reg_trace_io_input_reg_25_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_26_MPORT_en", false,-1);
        tracep->declBus(c+307,"top exu_step Regfile_reg_trace_io_input_reg_26_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+156,"top exu_step Regfile_reg_trace_io_input_reg_26_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_27_MPORT_en", false,-1);
        tracep->declBus(c+308,"top exu_step Regfile_reg_trace_io_input_reg_27_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+158,"top exu_step Regfile_reg_trace_io_input_reg_27_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_28_MPORT_en", false,-1);
        tracep->declBus(c+309,"top exu_step Regfile_reg_trace_io_input_reg_28_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+160,"top exu_step Regfile_reg_trace_io_input_reg_28_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_29_MPORT_en", false,-1);
        tracep->declBus(c+310,"top exu_step Regfile_reg_trace_io_input_reg_29_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+162,"top exu_step Regfile_reg_trace_io_input_reg_29_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_30_MPORT_en", false,-1);
        tracep->declBus(c+311,"top exu_step Regfile_reg_trace_io_input_reg_30_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+164,"top exu_step Regfile_reg_trace_io_input_reg_30_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_reg_trace_io_input_reg_31_MPORT_en", false,-1);
        tracep->declBus(c+312,"top exu_step Regfile_reg_trace_io_input_reg_31_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+166,"top exu_step Regfile_reg_trace_io_input_reg_31_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_Mem_modle_io_Wdata_MPORT_en", false,-1);
        tracep->declBus(c+6,"top exu_step Regfile_Mem_modle_io_Wdata_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+100,"top exu_step Regfile_Mem_modle_io_Wdata_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_Mem_modle_io_Wdata_MPORT_1_en", false,-1);
        tracep->declBus(c+6,"top exu_step Regfile_Mem_modle_io_Wdata_MPORT_1_addr", false,-1, 4,0);
        tracep->declQuad(c+100,"top exu_step Regfile_Mem_modle_io_Wdata_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_Mem_modle_io_Wdata_MPORT_2_en", false,-1);
        tracep->declBus(c+6,"top exu_step Regfile_Mem_modle_io_Wdata_MPORT_2_addr", false,-1, 4,0);
        tracep->declQuad(c+100,"top exu_step Regfile_Mem_modle_io_Wdata_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+280,"top exu_step Regfile_Mem_modle_io_Wdata_MPORT_3_en", false,-1);
        tracep->declBus(c+6,"top exu_step Regfile_Mem_modle_io_Wdata_MPORT_3_addr", false,-1, 4,0);
        tracep->declQuad(c+100,"top exu_step Regfile_Mem_modle_io_Wdata_MPORT_3_data", false,-1, 63,0);
        tracep->declQuad(c+168,"top exu_step Regfile_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+7,"top exu_step Regfile_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+280,"top exu_step Regfile_MPORT_mask", false,-1);
        tracep->declBit(c+280,"top exu_step Regfile_MPORT_en", false,-1);
        tracep->declQuad(c+104,"top exu_step reg_trace_input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+106,"top exu_step reg_trace_input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+108,"top exu_step reg_trace_input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+110,"top exu_step reg_trace_input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+112,"top exu_step reg_trace_input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+114,"top exu_step reg_trace_input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+116,"top exu_step reg_trace_input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+118,"top exu_step reg_trace_input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+120,"top exu_step reg_trace_input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+122,"top exu_step reg_trace_input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+124,"top exu_step reg_trace_input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+126,"top exu_step reg_trace_input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+128,"top exu_step reg_trace_input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+130,"top exu_step reg_trace_input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+132,"top exu_step reg_trace_input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+134,"top exu_step reg_trace_input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+136,"top exu_step reg_trace_input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+138,"top exu_step reg_trace_input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+140,"top exu_step reg_trace_input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+142,"top exu_step reg_trace_input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+144,"top exu_step reg_trace_input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+146,"top exu_step reg_trace_input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+148,"top exu_step reg_trace_input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+150,"top exu_step reg_trace_input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+152,"top exu_step reg_trace_input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+154,"top exu_step reg_trace_input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+156,"top exu_step reg_trace_input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+158,"top exu_step reg_trace_input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+160,"top exu_step reg_trace_input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+162,"top exu_step reg_trace_input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+164,"top exu_step reg_trace_input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+166,"top exu_step reg_trace_input_reg_31", false,-1, 63,0);
        tracep->declQuad(c+1,"top exu_step reg_trace_pc", false,-1, 63,0);
        tracep->declQuad(c+170,"top exu_step cmp", false,-1, 63,0);
        tracep->declQuad(c+172,"top exu_step src1_value", false,-1, 63,0);
        tracep->declQuad(c+174,"top exu_step src2_value", false,-1, 63,0);
        tracep->declQuad(c+176,"top exu_step add_res", false,-1, 63,0);
        tracep->declQuad(c+178,"top exu_step sub_res", false,-1, 63,0);
        tracep->declQuad(c+180,"top exu_step srl_res", false,-1, 63,0);
        tracep->declArray(c+182,"top exu_step sll_res", false,-1, 126,0);
        tracep->declBus(c+186,"top exu_step sraw_res", false,-1, 31,0);
        tracep->declBus(c+187,"top exu_step srlw_res", false,-1, 31,0);
        tracep->declQuad(c+188,"top exu_step sllw_res", false,-1, 62,0);
        tracep->declQuad(c+190,"top exu_step or_res", false,-1, 63,0);
        tracep->declQuad(c+192,"top exu_step xor_res", false,-1, 63,0);
        tracep->declQuad(c+194,"top exu_step and_res", false,-1, 63,0);
        tracep->declQuad(c+196,"top exu_step mlu_res", false,-1, 63,0);
        tracep->declBus(c+198,"top exu_step mluw_res", false,-1, 31,0);
        tracep->declBus(c+199,"top exu_step divw_res", false,-1, 31,0);
        tracep->declBus(c+200,"top exu_step remw_res", false,-1, 31,0);
        tracep->declQuad(c+30,"top exu_step mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+201,"top exu_step reg_value", false,-1, 63,0);
        tracep->declQuad(c+28,"top exu_step Mem_modle Raddr", false,-1, 63,0);
        tracep->declQuad(c+28,"top exu_step Mem_modle Waddr", false,-1, 63,0);
        tracep->declQuad(c+32,"top exu_step Mem_modle Wdata", false,-1, 63,0);
        tracep->declBus(c+14,"top exu_step Mem_modle Wmask", false,-1, 7,0);
        tracep->declBit(c+13,"top exu_step Mem_modle Write_en", false,-1);
        tracep->declQuad(c+30,"top exu_step Mem_modle Rdata", false,-1, 63,0);
        tracep->declQuad(c+104,"top exu_step reg_trace input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+106,"top exu_step reg_trace input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+108,"top exu_step reg_trace input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+110,"top exu_step reg_trace input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+112,"top exu_step reg_trace input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+114,"top exu_step reg_trace input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+116,"top exu_step reg_trace input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+118,"top exu_step reg_trace input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+120,"top exu_step reg_trace input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+122,"top exu_step reg_trace input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+124,"top exu_step reg_trace input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+126,"top exu_step reg_trace input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+128,"top exu_step reg_trace input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+130,"top exu_step reg_trace input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+132,"top exu_step reg_trace input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+134,"top exu_step reg_trace input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+136,"top exu_step reg_trace input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+138,"top exu_step reg_trace input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+140,"top exu_step reg_trace input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+142,"top exu_step reg_trace input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+144,"top exu_step reg_trace input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+146,"top exu_step reg_trace input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+148,"top exu_step reg_trace input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+150,"top exu_step reg_trace input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+152,"top exu_step reg_trace input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+154,"top exu_step reg_trace input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+156,"top exu_step reg_trace input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+158,"top exu_step reg_trace input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+160,"top exu_step reg_trace input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+162,"top exu_step reg_trace input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+164,"top exu_step reg_trace input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+166,"top exu_step reg_trace input_reg_31", false,-1, 63,0);
        tracep->declQuad(c+1,"top exu_step reg_trace pc", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+203+i*2,"top exu_step reg_trace traceregs", true,(i+0), 63,0);}}
        tracep->declBus(c+19,"top dpi flag", false,-1, 31,0);
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
    VlWide<4>/*127:0*/ __Vtemp82;
    VlWide<4>/*127:0*/ __Vtemp83;
    VlWide<4>/*127:0*/ __Vtemp84;
    VlWide<4>/*127:0*/ __Vtemp85;
    VlWide<4>/*127:0*/ __Vtemp86;
    VlWide<4>/*127:0*/ __Vtemp87;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__pc_now),64);
        tracep->fullIData(oldp+3,((IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)),32);
        tracep->fullIData(oldp+4,(vlSelf->top__DOT__idu_step__DOT___inst_now_T_131),32);
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
                                  & ((0x3023U != (0x707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                                     & ((0x1023U != 
                                         (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                                        & ((0x23U != 
                                            (0x707fU 
                                             & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                                           & ((0x1063U 
                                               != (0x707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                                              & ((0x63U 
                                                  != 
                                                  (0x707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                                                 & ((0x5063U 
                                                     != 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                                                    & ((0x4063U 
                                                        != 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata))) 
                                                       & (0x6063U 
                                                          != 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))))))))))));
        tracep->fullBit(oldp+11,(vlSelf->top__DOT__idu_step_io_ctrl_sign_src2_is_imm));
        tracep->fullBit(oldp+12,(vlSelf->top__DOT__idu_step_io_ctrl_sign_src1_is_pc));
        tracep->fullBit(oldp+13,((0x44U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_131))));
        tracep->fullCData(oldp+14,(((0x3023U == (0x707fU 
                                                 & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                     ? 0xffU : ((0x1023U 
                                                 == 
                                                 (0x707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata)))
                                                 ? 0xfU
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
                                                   ? 3U
                                                   : 0U))))),8);
        tracep->fullQData(oldp+15,(vlSelf->top__DOT__exu_step_io_pc_next),64);
        tracep->fullQData(oldp+17,((((QData)((IData)(
                                                     vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_155[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_155[0U])))),64);
        tracep->fullIData(oldp+19,((2U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_131))),32);
        tracep->fullQData(oldp+20,(vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata),64);
        tracep->fullSData(oldp+22,((0xfffU & (IData)(
                                                     (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                      >> 0x14U)))),12);
        tracep->fullIData(oldp+23,(((0x80000U & ((IData)(
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
        tracep->fullIData(oldp+24,((0xfffffU & (IData)(
                                                       (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                        >> 0xcU)))),20);
        tracep->fullSData(oldp+25,(((0xfe0U & ((IData)(
                                                       (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                        >> 0x19U)) 
                                               << 5U)) 
                                    | (0x1fU & (IData)(
                                                       (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                        >> 7U))))),12);
        tracep->fullSData(oldp+26,(((0x800U & ((IData)(
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
        tracep->fullIData(oldp+27,(vlSelf->top__DOT__idu_step__DOT___inst_type_T_131),32);
        tracep->fullQData(oldp+28,((vlSelf->top__DOT__exu_step__DOT__src1_value 
                                    + vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
        tracep->fullQData(oldp+30,(vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata),64);
        tracep->fullQData(oldp+32,(((0x27U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_131))
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
                                     : ((0x28U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_131))
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
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_131))
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
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_131))
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
        tracep->fullQData(oldp+34,(vlSelf->top__DOT__exu_step__DOT__Regfile[0]),64);
        tracep->fullQData(oldp+36,(vlSelf->top__DOT__exu_step__DOT__Regfile[1]),64);
        tracep->fullQData(oldp+38,(vlSelf->top__DOT__exu_step__DOT__Regfile[2]),64);
        tracep->fullQData(oldp+40,(vlSelf->top__DOT__exu_step__DOT__Regfile[3]),64);
        tracep->fullQData(oldp+42,(vlSelf->top__DOT__exu_step__DOT__Regfile[4]),64);
        tracep->fullQData(oldp+44,(vlSelf->top__DOT__exu_step__DOT__Regfile[5]),64);
        tracep->fullQData(oldp+46,(vlSelf->top__DOT__exu_step__DOT__Regfile[6]),64);
        tracep->fullQData(oldp+48,(vlSelf->top__DOT__exu_step__DOT__Regfile[7]),64);
        tracep->fullQData(oldp+50,(vlSelf->top__DOT__exu_step__DOT__Regfile[8]),64);
        tracep->fullQData(oldp+52,(vlSelf->top__DOT__exu_step__DOT__Regfile[9]),64);
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__exu_step__DOT__Regfile[10]),64);
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__exu_step__DOT__Regfile[11]),64);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__exu_step__DOT__Regfile[12]),64);
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__exu_step__DOT__Regfile[13]),64);
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__exu_step__DOT__Regfile[14]),64);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__exu_step__DOT__Regfile[15]),64);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__exu_step__DOT__Regfile[16]),64);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__exu_step__DOT__Regfile[17]),64);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__exu_step__DOT__Regfile[18]),64);
        tracep->fullQData(oldp+72,(vlSelf->top__DOT__exu_step__DOT__Regfile[19]),64);
        tracep->fullQData(oldp+74,(vlSelf->top__DOT__exu_step__DOT__Regfile[20]),64);
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__exu_step__DOT__Regfile[21]),64);
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__exu_step__DOT__Regfile[22]),64);
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__exu_step__DOT__Regfile[23]),64);
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__exu_step__DOT__Regfile[24]),64);
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__exu_step__DOT__Regfile[25]),64);
        tracep->fullQData(oldp+86,(vlSelf->top__DOT__exu_step__DOT__Regfile[26]),64);
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__exu_step__DOT__Regfile[27]),64);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__exu_step__DOT__Regfile[28]),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__exu_step__DOT__Regfile[29]),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__exu_step__DOT__Regfile[30]),64);
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__exu_step__DOT__Regfile[31]),64);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [(0x1fU & (IData)(
                                                     (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                      >> 0xfU)))]),64);
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [(0x1fU & (IData)(
                                                      (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                       >> 0x14U)))]),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [(0x1fU & (IData)(
                                                      (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                       >> 7U)))]),64);
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0U]),64);
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [1U]),64);
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [2U]),64);
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [3U]),64);
        tracep->fullQData(oldp+112,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [4U]),64);
        tracep->fullQData(oldp+114,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [5U]),64);
        tracep->fullQData(oldp+116,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [6U]),64);
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [7U]),64);
        tracep->fullQData(oldp+120,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [8U]),64);
        tracep->fullQData(oldp+122,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [9U]),64);
        tracep->fullQData(oldp+124,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xaU]),64);
        tracep->fullQData(oldp+126,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xbU]),64);
        tracep->fullQData(oldp+128,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xcU]),64);
        tracep->fullQData(oldp+130,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xdU]),64);
        tracep->fullQData(oldp+132,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xeU]),64);
        tracep->fullQData(oldp+134,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xfU]),64);
        tracep->fullQData(oldp+136,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x10U]),64);
        tracep->fullQData(oldp+138,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x11U]),64);
        tracep->fullQData(oldp+140,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x12U]),64);
        tracep->fullQData(oldp+142,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x13U]),64);
        tracep->fullQData(oldp+144,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x14U]),64);
        tracep->fullQData(oldp+146,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x15U]),64);
        tracep->fullQData(oldp+148,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x16U]),64);
        tracep->fullQData(oldp+150,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x17U]),64);
        tracep->fullQData(oldp+152,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x18U]),64);
        tracep->fullQData(oldp+154,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x19U]),64);
        tracep->fullQData(oldp+156,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1aU]),64);
        tracep->fullQData(oldp+158,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1bU]),64);
        tracep->fullQData(oldp+160,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1cU]),64);
        tracep->fullQData(oldp+162,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1dU]),64);
        tracep->fullQData(oldp+164,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1eU]),64);
        tracep->fullQData(oldp+166,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1fU]),64);
        tracep->fullQData(oldp+168,(vlSelf->top__DOT__exu_step__DOT__Regfile_MPORT_data),64);
        tracep->fullQData(oldp+170,(vlSelf->top__DOT__exu_step__DOT__cmp),64);
        tracep->fullQData(oldp+172,(vlSelf->top__DOT__exu_step__DOT__src1_value),64);
        tracep->fullQData(oldp+174,(vlSelf->top__DOT__exu_step__DOT__src2_value),64);
        tracep->fullQData(oldp+176,(vlSelf->top__DOT__exu_step__DOT__add_res),64);
        tracep->fullQData(oldp+178,(vlSelf->top__DOT__exu_step__DOT__sub_res),64);
        tracep->fullQData(oldp+180,((vlSelf->top__DOT__exu_step__DOT__src1_value 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)))),64);
        VL_EXTEND_WQ(127,64, __Vtemp82, vlSelf->top__DOT__exu_step__DOT__src1_value);
        VL_SHIFTL_WWI(127,127,6, __Vtemp83, __Vtemp82, 
                      (0x3fU & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)));
        __Vtemp84[0U] = __Vtemp83[0U];
        __Vtemp84[1U] = __Vtemp83[1U];
        __Vtemp84[2U] = __Vtemp83[2U];
        __Vtemp84[3U] = (0x7fffffffU & __Vtemp83[3U]);
        tracep->fullWData(oldp+182,(__Vtemp84),127);
        tracep->fullIData(oldp+186,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__exu_step__DOT__src1_value), 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)))),32);
        tracep->fullIData(oldp+187,(((IData)(vlSelf->top__DOT__exu_step__DOT__src1_value) 
                                     >> (0x1fU & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)))),32);
        tracep->fullQData(oldp+188,(vlSelf->top__DOT__exu_step__DOT__sllw_res),63);
        tracep->fullQData(oldp+190,((vlSelf->top__DOT__exu_step__DOT__src1_value 
                                     | vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
        tracep->fullQData(oldp+192,((vlSelf->top__DOT__exu_step__DOT__src1_value 
                                     ^ vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
        tracep->fullQData(oldp+194,(vlSelf->top__DOT__exu_step__DOT__and_res),64);
        VL_EXTEND_WQ(128,64, __Vtemp85, vlSelf->top__DOT__exu_step__DOT__src1_value);
        VL_EXTEND_WQ(128,64, __Vtemp86, vlSelf->top__DOT__exu_step__DOT__src2_value);
        VL_MUL_W(4, __Vtemp87, __Vtemp85, __Vtemp86);
        tracep->fullQData(oldp+196,((((QData)((IData)(
                                                      __Vtemp87[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp87[0U])))),64);
        tracep->fullIData(oldp+198,((IData)(vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2)),32);
        tracep->fullIData(oldp+199,((IData)(vlSelf->top__DOT__exu_step__DOT___divw_res_T_4)),32);
        tracep->fullIData(oldp+200,(vlSelf->top__DOT__exu_step__DOT__remw_res),32);
        tracep->fullQData(oldp+201,(((0U == (0x1fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                        >> 7U))))
                                      ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [(0x1fU & (IData)(
                                                       (vlSelf->top__DOT__ifu_step__DOT__inst_read_Rdata 
                                                        >> 7U)))])),64);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0]),64);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[1]),64);
        tracep->fullQData(oldp+207,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[2]),64);
        tracep->fullQData(oldp+209,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[3]),64);
        tracep->fullQData(oldp+211,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[4]),64);
        tracep->fullQData(oldp+213,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[5]),64);
        tracep->fullQData(oldp+215,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[6]),64);
        tracep->fullQData(oldp+217,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[7]),64);
        tracep->fullQData(oldp+219,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[8]),64);
        tracep->fullQData(oldp+221,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[9]),64);
        tracep->fullQData(oldp+223,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[10]),64);
        tracep->fullQData(oldp+225,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[11]),64);
        tracep->fullQData(oldp+227,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[12]),64);
        tracep->fullQData(oldp+229,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[13]),64);
        tracep->fullQData(oldp+231,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[14]),64);
        tracep->fullQData(oldp+233,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[15]),64);
        tracep->fullQData(oldp+235,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[16]),64);
        tracep->fullQData(oldp+237,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[17]),64);
        tracep->fullQData(oldp+239,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[18]),64);
        tracep->fullQData(oldp+241,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[19]),64);
        tracep->fullQData(oldp+243,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[20]),64);
        tracep->fullQData(oldp+245,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[21]),64);
        tracep->fullQData(oldp+247,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[22]),64);
        tracep->fullQData(oldp+249,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[23]),64);
        tracep->fullQData(oldp+251,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[24]),64);
        tracep->fullQData(oldp+253,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[25]),64);
        tracep->fullQData(oldp+255,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[26]),64);
        tracep->fullQData(oldp+257,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[27]),64);
        tracep->fullQData(oldp+259,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[28]),64);
        tracep->fullQData(oldp+261,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[29]),64);
        tracep->fullQData(oldp+263,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[30]),64);
        tracep->fullQData(oldp+265,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[31]),64);
        tracep->fullBit(oldp+267,(vlSelf->clock));
        tracep->fullBit(oldp+268,(vlSelf->reset));
        tracep->fullIData(oldp+269,(vlSelf->io_inst),32);
        tracep->fullQData(oldp+270,(vlSelf->io_pc),64);
        tracep->fullQData(oldp+272,(vlSelf->io_pc_next),64);
        tracep->fullQData(oldp+274,(vlSelf->io_outval),64);
        tracep->fullQData(oldp+276,(0ULL),64);
        tracep->fullCData(oldp+278,(0U),8);
        tracep->fullBit(oldp+279,(0U));
        tracep->fullBit(oldp+280,(1U));
        tracep->fullCData(oldp+281,(0U),5);
        tracep->fullCData(oldp+282,(1U),5);
        tracep->fullCData(oldp+283,(2U),5);
        tracep->fullCData(oldp+284,(3U),5);
        tracep->fullCData(oldp+285,(4U),5);
        tracep->fullCData(oldp+286,(5U),5);
        tracep->fullCData(oldp+287,(6U),5);
        tracep->fullCData(oldp+288,(7U),5);
        tracep->fullCData(oldp+289,(8U),5);
        tracep->fullCData(oldp+290,(9U),5);
        tracep->fullCData(oldp+291,(0xaU),5);
        tracep->fullCData(oldp+292,(0xbU),5);
        tracep->fullCData(oldp+293,(0xcU),5);
        tracep->fullCData(oldp+294,(0xdU),5);
        tracep->fullCData(oldp+295,(0xeU),5);
        tracep->fullCData(oldp+296,(0xfU),5);
        tracep->fullCData(oldp+297,(0x10U),5);
        tracep->fullCData(oldp+298,(0x11U),5);
        tracep->fullCData(oldp+299,(0x12U),5);
        tracep->fullCData(oldp+300,(0x13U),5);
        tracep->fullCData(oldp+301,(0x14U),5);
        tracep->fullCData(oldp+302,(0x15U),5);
        tracep->fullCData(oldp+303,(0x16U),5);
        tracep->fullCData(oldp+304,(0x17U),5);
        tracep->fullCData(oldp+305,(0x18U),5);
        tracep->fullCData(oldp+306,(0x19U),5);
        tracep->fullCData(oldp+307,(0x1aU),5);
        tracep->fullCData(oldp+308,(0x1bU),5);
        tracep->fullCData(oldp+309,(0x1cU),5);
        tracep->fullCData(oldp+310,(0x1dU),5);
        tracep->fullCData(oldp+311,(0x1eU),5);
        tracep->fullCData(oldp+312,(0x1fU),5);
    }
}
