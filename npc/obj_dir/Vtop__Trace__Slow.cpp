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
        tracep->declBit(c+343,"clock", false,-1);
        tracep->declBit(c+344,"reset", false,-1);
        tracep->declBus(c+345,"io_inst", false,-1, 31,0);
        tracep->declQuad(c+346,"io_pc", false,-1, 63,0);
        tracep->declQuad(c+348,"io_pc_next", false,-1, 63,0);
        tracep->declQuad(c+350,"io_outval", false,-1, 63,0);
        tracep->declBit(c+343,"top clock", false,-1);
        tracep->declBit(c+344,"top reset", false,-1);
        tracep->declBus(c+345,"top io_inst", false,-1, 31,0);
        tracep->declQuad(c+346,"top io_pc", false,-1, 63,0);
        tracep->declQuad(c+348,"top io_pc_next", false,-1, 63,0);
        tracep->declQuad(c+350,"top io_outval", false,-1, 63,0);
        tracep->declBit(c+343,"top ifu_step_clock", false,-1);
        tracep->declBit(c+344,"top ifu_step_reset", false,-1);
        tracep->declQuad(c+1,"top ifu_step_io_pc", false,-1, 63,0);
        tracep->declBit(c+3,"top ifu_step_io_pc_ready", false,-1);
        tracep->declBit(c+4,"top ifu_step_io_pc_valid", false,-1);
        tracep->declBit(c+5,"top ifu_step_io_inst_valid", false,-1);
        tracep->declBit(c+6,"top ifu_step_io_inst_ready", false,-1);
        tracep->declBus(c+7,"top ifu_step_io_inst", false,-1, 31,0);
        tracep->declBit(c+343,"top idu_step_clock", false,-1);
        tracep->declBit(c+344,"top idu_step_reset", false,-1);
        tracep->declBus(c+7,"top idu_step_io_inst", false,-1, 31,0);
        tracep->declBit(c+5,"top idu_step_io_inst_valid", false,-1);
        tracep->declBit(c+6,"top idu_step_io_inst_ready", false,-1);
        tracep->declBus(c+8,"top idu_step_io_inst_now", false,-1, 31,0);
        tracep->declBus(c+9,"top idu_step_io_rs1", false,-1, 4,0);
        tracep->declBus(c+10,"top idu_step_io_rs2", false,-1, 4,0);
        tracep->declBus(c+11,"top idu_step_io_rd", false,-1, 4,0);
        tracep->declQuad(c+12,"top idu_step_io_imm", false,-1, 63,0);
        tracep->declBit(c+14,"top idu_step_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+15,"top idu_step_io_ctrl_sign_csr_write", false,-1);
        tracep->declBit(c+16,"top idu_step_io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+17,"top idu_step_io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declBit(c+18,"top idu_step_io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+19,"top idu_step_io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+20,"top idu_step_io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBit(c+343,"top exu_step_clock", false,-1);
        tracep->declBit(c+344,"top exu_step_reset", false,-1);
        tracep->declQuad(c+1,"top exu_step_io_pc", false,-1, 63,0);
        tracep->declQuad(c+21,"top exu_step_io_pc_next", false,-1, 63,0);
        tracep->declBus(c+8,"top exu_step_io_inst_now", false,-1, 31,0);
        tracep->declBus(c+9,"top exu_step_io_rs1", false,-1, 4,0);
        tracep->declBus(c+10,"top exu_step_io_rs2", false,-1, 4,0);
        tracep->declBus(c+11,"top exu_step_io_rd", false,-1, 4,0);
        tracep->declQuad(c+12,"top exu_step_io_imm", false,-1, 63,0);
        tracep->declBit(c+14,"top exu_step_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+15,"top exu_step_io_ctrl_sign_csr_write", false,-1);
        tracep->declBit(c+16,"top exu_step_io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+17,"top exu_step_io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declBit(c+18,"top exu_step_io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+19,"top exu_step_io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+20,"top exu_step_io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declQuad(c+23,"top exu_step_io_res2rd", false,-1, 63,0);
        tracep->declBit(c+3,"top exu_step_io_pc_ready", false,-1);
        tracep->declBus(c+25,"top dpi_flag", false,-1, 31,0);
        tracep->declBus(c+26,"top dpi_ecall_flag", false,-1, 31,0);
        tracep->declQuad(c+1,"top pc_now", false,-1, 63,0);
        tracep->declBit(c+4,"top axi_pc_valid", false,-1);
        tracep->declBit(c+343,"top ifu_step clock", false,-1);
        tracep->declBit(c+344,"top ifu_step reset", false,-1);
        tracep->declQuad(c+1,"top ifu_step io_pc", false,-1, 63,0);
        tracep->declBit(c+3,"top ifu_step io_pc_ready", false,-1);
        tracep->declBit(c+4,"top ifu_step io_pc_valid", false,-1);
        tracep->declBit(c+5,"top ifu_step io_inst_valid", false,-1);
        tracep->declBit(c+6,"top ifu_step io_inst_ready", false,-1);
        tracep->declBus(c+7,"top ifu_step io_inst", false,-1, 31,0);
        tracep->declBit(c+343,"top ifu_step axi_clock", false,-1);
        tracep->declBit(c+344,"top ifu_step axi_reset", false,-1);
        tracep->declBus(c+27,"top ifu_step axi_io_araddr", false,-1, 31,0);
        tracep->declBit(c+4,"top ifu_step axi_io_arvalid", false,-1);
        tracep->declBit(c+6,"top ifu_step axi_io_rready", false,-1);
        tracep->declBit(c+3,"top ifu_step axi_io_arready", false,-1);
        tracep->declBit(c+5,"top ifu_step axi_io_rvalid", false,-1);
        tracep->declQuad(c+28,"top ifu_step axi_io_rdata", false,-1, 63,0);
        tracep->declBit(c+343,"top ifu_step axi clock", false,-1);
        tracep->declBit(c+344,"top ifu_step axi reset", false,-1);
        tracep->declBus(c+27,"top ifu_step axi io_araddr", false,-1, 31,0);
        tracep->declBit(c+4,"top ifu_step axi io_arvalid", false,-1);
        tracep->declBit(c+6,"top ifu_step axi io_rready", false,-1);
        tracep->declBit(c+3,"top ifu_step axi io_arready", false,-1);
        tracep->declBit(c+5,"top ifu_step axi io_rvalid", false,-1);
        tracep->declQuad(c+28,"top ifu_step axi io_rdata", false,-1, 63,0);
        tracep->declQuad(c+30,"top ifu_step axi inst_read_Raddr", false,-1, 63,0);
        tracep->declQuad(c+28,"top ifu_step axi inst_read_Rdata", false,-1, 63,0);
        tracep->declQuad(c+352,"top ifu_step axi inst_read_Waddr", false,-1, 63,0);
        tracep->declQuad(c+352,"top ifu_step axi inst_read_Wdata", false,-1, 63,0);
        tracep->declBus(c+354,"top ifu_step axi inst_read_Wmask", false,-1, 7,0);
        tracep->declBit(c+355,"top ifu_step axi inst_read_Write_en", false,-1);
        tracep->declBit(c+32,"top ifu_step axi inst_read_Read_en", false,-1);
        tracep->declBit(c+3,"top ifu_step axi axi_arready", false,-1);
        tracep->declBit(c+5,"top ifu_step axi axi_rvalid", false,-1);
        tracep->declBit(c+33,"top ifu_step axi state", false,-1);
        tracep->declQuad(c+30,"top ifu_step axi inst_read Raddr", false,-1, 63,0);
        tracep->declQuad(c+352,"top ifu_step axi inst_read Waddr", false,-1, 63,0);
        tracep->declQuad(c+352,"top ifu_step axi inst_read Wdata", false,-1, 63,0);
        tracep->declBus(c+354,"top ifu_step axi inst_read Wmask", false,-1, 7,0);
        tracep->declBit(c+355,"top ifu_step axi inst_read Write_en", false,-1);
        tracep->declBit(c+32,"top ifu_step axi inst_read Read_en", false,-1);
        tracep->declQuad(c+28,"top ifu_step axi inst_read Rdata", false,-1, 63,0);
        tracep->declBit(c+343,"top idu_step clock", false,-1);
        tracep->declBit(c+344,"top idu_step reset", false,-1);
        tracep->declBus(c+7,"top idu_step io_inst", false,-1, 31,0);
        tracep->declBit(c+5,"top idu_step io_inst_valid", false,-1);
        tracep->declBit(c+6,"top idu_step io_inst_ready", false,-1);
        tracep->declBus(c+8,"top idu_step io_inst_now", false,-1, 31,0);
        tracep->declBus(c+9,"top idu_step io_rs1", false,-1, 4,0);
        tracep->declBus(c+10,"top idu_step io_rs2", false,-1, 4,0);
        tracep->declBus(c+11,"top idu_step io_rd", false,-1, 4,0);
        tracep->declQuad(c+12,"top idu_step io_imm", false,-1, 63,0);
        tracep->declBit(c+14,"top idu_step io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+15,"top idu_step io_ctrl_sign_csr_write", false,-1);
        tracep->declBit(c+16,"top idu_step io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+17,"top idu_step io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declBit(c+18,"top idu_step io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+19,"top idu_step io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+20,"top idu_step io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBit(c+6,"top idu_step axi_inst_ready", false,-1);
        tracep->declBus(c+11,"top idu_step rd", false,-1, 4,0);
        tracep->declBus(c+34,"top idu_step imm_imm", false,-1, 11,0);
        tracep->declBus(c+35,"top idu_step imm_imm_1", false,-1, 19,0);
        tracep->declBus(c+36,"top idu_step imm_imm_2", false,-1, 19,0);
        tracep->declBus(c+37,"top idu_step imm_imm_3", false,-1, 11,0);
        tracep->declBus(c+38,"top idu_step imm_imm_4", false,-1, 11,0);
        tracep->declBus(c+39,"top idu_step inst_type", false,-1, 31,0);
        tracep->declBit(c+343,"top exu_step clock", false,-1);
        tracep->declBit(c+344,"top exu_step reset", false,-1);
        tracep->declQuad(c+1,"top exu_step io_pc", false,-1, 63,0);
        tracep->declQuad(c+21,"top exu_step io_pc_next", false,-1, 63,0);
        tracep->declBus(c+8,"top exu_step io_inst_now", false,-1, 31,0);
        tracep->declBus(c+9,"top exu_step io_rs1", false,-1, 4,0);
        tracep->declBus(c+10,"top exu_step io_rs2", false,-1, 4,0);
        tracep->declBus(c+11,"top exu_step io_rd", false,-1, 4,0);
        tracep->declQuad(c+12,"top exu_step io_imm", false,-1, 63,0);
        tracep->declBit(c+14,"top exu_step io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+15,"top exu_step io_ctrl_sign_csr_write", false,-1);
        tracep->declBit(c+16,"top exu_step io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+17,"top exu_step io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declBit(c+18,"top exu_step io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+19,"top exu_step io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+20,"top exu_step io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declQuad(c+23,"top exu_step io_res2rd", false,-1, 63,0);
        tracep->declBit(c+3,"top exu_step io_pc_ready", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+40+i*2,"top exu_step Regfile", true,(i+0), 63,0);}}
        tracep->declBit(c+356,"top exu_step Regfile_src1_value_MPORT_en", false,-1);
        tracep->declBus(c+9,"top exu_step Regfile_src1_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+104,"top exu_step Regfile_src1_value_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_src2_value_MPORT_en", false,-1);
        tracep->declBus(c+10,"top exu_step Regfile_src2_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+106,"top exu_step Regfile_src2_value_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_value_MPORT_en", false,-1);
        tracep->declBus(c+11,"top exu_step Regfile_reg_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+108,"top exu_step Regfile_reg_value_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_MPORT_4_en", false,-1);
        tracep->declBus(c+357,"top exu_step Regfile_MPORT_4_addr", false,-1, 4,0);
        tracep->declQuad(c+110,"top exu_step Regfile_MPORT_4_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_io_pc_next_MPORT_en", false,-1);
        tracep->declBus(c+9,"top exu_step Regfile_io_pc_next_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+104,"top exu_step Regfile_io_pc_next_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_io_pc_next_MPORT_1_en", false,-1);
        tracep->declBus(c+10,"top exu_step Regfile_io_pc_next_MPORT_1_addr", false,-1, 4,0);
        tracep->declQuad(c+106,"top exu_step Regfile_io_pc_next_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_io_pc_next_MPORT_2_en", false,-1);
        tracep->declBus(c+9,"top exu_step Regfile_io_pc_next_MPORT_2_addr", false,-1, 4,0);
        tracep->declQuad(c+104,"top exu_step Regfile_io_pc_next_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_io_pc_next_MPORT_3_en", false,-1);
        tracep->declBus(c+10,"top exu_step Regfile_io_pc_next_MPORT_3_addr", false,-1, 4,0);
        tracep->declQuad(c+106,"top exu_step Regfile_io_pc_next_MPORT_3_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_io_pc_next_MPORT_4_en", false,-1);
        tracep->declBus(c+9,"top exu_step Regfile_io_pc_next_MPORT_4_addr", false,-1, 4,0);
        tracep->declQuad(c+104,"top exu_step Regfile_io_pc_next_MPORT_4_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_io_pc_next_MPORT_5_en", false,-1);
        tracep->declBus(c+10,"top exu_step Regfile_io_pc_next_MPORT_5_addr", false,-1, 4,0);
        tracep->declQuad(c+106,"top exu_step Regfile_io_pc_next_MPORT_5_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_io_pc_next_MPORT_6_en", false,-1);
        tracep->declBus(c+9,"top exu_step Regfile_io_pc_next_MPORT_6_addr", false,-1, 4,0);
        tracep->declQuad(c+104,"top exu_step Regfile_io_pc_next_MPORT_6_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_io_pc_next_MPORT_7_en", false,-1);
        tracep->declBus(c+10,"top exu_step Regfile_io_pc_next_MPORT_7_addr", false,-1, 4,0);
        tracep->declQuad(c+106,"top exu_step Regfile_io_pc_next_MPORT_7_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_io_pc_next_MPORT_8_en", false,-1);
        tracep->declBus(c+9,"top exu_step Regfile_io_pc_next_MPORT_8_addr", false,-1, 4,0);
        tracep->declQuad(c+104,"top exu_step Regfile_io_pc_next_MPORT_8_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_io_pc_next_MPORT_9_en", false,-1);
        tracep->declBus(c+10,"top exu_step Regfile_io_pc_next_MPORT_9_addr", false,-1, 4,0);
        tracep->declQuad(c+106,"top exu_step Regfile_io_pc_next_MPORT_9_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_io_pc_next_MPORT_10_en", false,-1);
        tracep->declBus(c+9,"top exu_step Regfile_io_pc_next_MPORT_10_addr", false,-1, 4,0);
        tracep->declQuad(c+104,"top exu_step Regfile_io_pc_next_MPORT_10_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_io_pc_next_MPORT_11_en", false,-1);
        tracep->declBus(c+10,"top exu_step Regfile_io_pc_next_MPORT_11_addr", false,-1, 4,0);
        tracep->declQuad(c+106,"top exu_step Regfile_io_pc_next_MPORT_11_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_0_MPORT_en", false,-1);
        tracep->declBus(c+358,"top exu_step Regfile_reg_trace_io_input_reg_0_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+112,"top exu_step Regfile_reg_trace_io_input_reg_0_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_1_MPORT_en", false,-1);
        tracep->declBus(c+359,"top exu_step Regfile_reg_trace_io_input_reg_1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+114,"top exu_step Regfile_reg_trace_io_input_reg_1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_2_MPORT_en", false,-1);
        tracep->declBus(c+360,"top exu_step Regfile_reg_trace_io_input_reg_2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+116,"top exu_step Regfile_reg_trace_io_input_reg_2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_3_MPORT_en", false,-1);
        tracep->declBus(c+361,"top exu_step Regfile_reg_trace_io_input_reg_3_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+118,"top exu_step Regfile_reg_trace_io_input_reg_3_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_4_MPORT_en", false,-1);
        tracep->declBus(c+362,"top exu_step Regfile_reg_trace_io_input_reg_4_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+120,"top exu_step Regfile_reg_trace_io_input_reg_4_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_5_MPORT_en", false,-1);
        tracep->declBus(c+363,"top exu_step Regfile_reg_trace_io_input_reg_5_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+122,"top exu_step Regfile_reg_trace_io_input_reg_5_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_6_MPORT_en", false,-1);
        tracep->declBus(c+364,"top exu_step Regfile_reg_trace_io_input_reg_6_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+124,"top exu_step Regfile_reg_trace_io_input_reg_6_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_7_MPORT_en", false,-1);
        tracep->declBus(c+365,"top exu_step Regfile_reg_trace_io_input_reg_7_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+126,"top exu_step Regfile_reg_trace_io_input_reg_7_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_8_MPORT_en", false,-1);
        tracep->declBus(c+366,"top exu_step Regfile_reg_trace_io_input_reg_8_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+128,"top exu_step Regfile_reg_trace_io_input_reg_8_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_9_MPORT_en", false,-1);
        tracep->declBus(c+367,"top exu_step Regfile_reg_trace_io_input_reg_9_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+130,"top exu_step Regfile_reg_trace_io_input_reg_9_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_10_MPORT_en", false,-1);
        tracep->declBus(c+368,"top exu_step Regfile_reg_trace_io_input_reg_10_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+132,"top exu_step Regfile_reg_trace_io_input_reg_10_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_11_MPORT_en", false,-1);
        tracep->declBus(c+369,"top exu_step Regfile_reg_trace_io_input_reg_11_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+134,"top exu_step Regfile_reg_trace_io_input_reg_11_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_12_MPORT_en", false,-1);
        tracep->declBus(c+370,"top exu_step Regfile_reg_trace_io_input_reg_12_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+136,"top exu_step Regfile_reg_trace_io_input_reg_12_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_13_MPORT_en", false,-1);
        tracep->declBus(c+371,"top exu_step Regfile_reg_trace_io_input_reg_13_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+138,"top exu_step Regfile_reg_trace_io_input_reg_13_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_14_MPORT_en", false,-1);
        tracep->declBus(c+372,"top exu_step Regfile_reg_trace_io_input_reg_14_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+140,"top exu_step Regfile_reg_trace_io_input_reg_14_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_15_MPORT_en", false,-1);
        tracep->declBus(c+373,"top exu_step Regfile_reg_trace_io_input_reg_15_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+142,"top exu_step Regfile_reg_trace_io_input_reg_15_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_16_MPORT_en", false,-1);
        tracep->declBus(c+374,"top exu_step Regfile_reg_trace_io_input_reg_16_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+144,"top exu_step Regfile_reg_trace_io_input_reg_16_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_17_MPORT_en", false,-1);
        tracep->declBus(c+357,"top exu_step Regfile_reg_trace_io_input_reg_17_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+110,"top exu_step Regfile_reg_trace_io_input_reg_17_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_18_MPORT_en", false,-1);
        tracep->declBus(c+375,"top exu_step Regfile_reg_trace_io_input_reg_18_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+146,"top exu_step Regfile_reg_trace_io_input_reg_18_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_19_MPORT_en", false,-1);
        tracep->declBus(c+376,"top exu_step Regfile_reg_trace_io_input_reg_19_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+148,"top exu_step Regfile_reg_trace_io_input_reg_19_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_20_MPORT_en", false,-1);
        tracep->declBus(c+377,"top exu_step Regfile_reg_trace_io_input_reg_20_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+150,"top exu_step Regfile_reg_trace_io_input_reg_20_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_21_MPORT_en", false,-1);
        tracep->declBus(c+378,"top exu_step Regfile_reg_trace_io_input_reg_21_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+152,"top exu_step Regfile_reg_trace_io_input_reg_21_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_22_MPORT_en", false,-1);
        tracep->declBus(c+379,"top exu_step Regfile_reg_trace_io_input_reg_22_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+154,"top exu_step Regfile_reg_trace_io_input_reg_22_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_23_MPORT_en", false,-1);
        tracep->declBus(c+380,"top exu_step Regfile_reg_trace_io_input_reg_23_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+156,"top exu_step Regfile_reg_trace_io_input_reg_23_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_24_MPORT_en", false,-1);
        tracep->declBus(c+381,"top exu_step Regfile_reg_trace_io_input_reg_24_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+158,"top exu_step Regfile_reg_trace_io_input_reg_24_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_25_MPORT_en", false,-1);
        tracep->declBus(c+382,"top exu_step Regfile_reg_trace_io_input_reg_25_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+160,"top exu_step Regfile_reg_trace_io_input_reg_25_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_26_MPORT_en", false,-1);
        tracep->declBus(c+383,"top exu_step Regfile_reg_trace_io_input_reg_26_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+162,"top exu_step Regfile_reg_trace_io_input_reg_26_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_27_MPORT_en", false,-1);
        tracep->declBus(c+384,"top exu_step Regfile_reg_trace_io_input_reg_27_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+164,"top exu_step Regfile_reg_trace_io_input_reg_27_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_28_MPORT_en", false,-1);
        tracep->declBus(c+385,"top exu_step Regfile_reg_trace_io_input_reg_28_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+166,"top exu_step Regfile_reg_trace_io_input_reg_28_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_29_MPORT_en", false,-1);
        tracep->declBus(c+386,"top exu_step Regfile_reg_trace_io_input_reg_29_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+168,"top exu_step Regfile_reg_trace_io_input_reg_29_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_30_MPORT_en", false,-1);
        tracep->declBus(c+387,"top exu_step Regfile_reg_trace_io_input_reg_30_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+170,"top exu_step Regfile_reg_trace_io_input_reg_30_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_reg_trace_io_input_reg_31_MPORT_en", false,-1);
        tracep->declBus(c+388,"top exu_step Regfile_reg_trace_io_input_reg_31_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+172,"top exu_step Regfile_reg_trace_io_input_reg_31_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_mem_wdate_MPORT_en", false,-1);
        tracep->declBus(c+10,"top exu_step Regfile_mem_wdate_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+106,"top exu_step Regfile_mem_wdate_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_mem_wdate_MPORT_1_en", false,-1);
        tracep->declBus(c+10,"top exu_step Regfile_mem_wdate_MPORT_1_addr", false,-1, 4,0);
        tracep->declQuad(c+106,"top exu_step Regfile_mem_wdate_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_mem_wdate_MPORT_2_en", false,-1);
        tracep->declBus(c+10,"top exu_step Regfile_mem_wdate_MPORT_2_addr", false,-1, 4,0);
        tracep->declQuad(c+106,"top exu_step Regfile_mem_wdate_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step Regfile_mem_wdate_MPORT_3_en", false,-1);
        tracep->declBus(c+10,"top exu_step Regfile_mem_wdate_MPORT_3_addr", false,-1, 4,0);
        tracep->declQuad(c+106,"top exu_step Regfile_mem_wdate_MPORT_3_data", false,-1, 63,0);
        tracep->declQuad(c+174,"top exu_step Regfile_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+11,"top exu_step Regfile_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+356,"top exu_step Regfile_MPORT_mask", false,-1);
        tracep->declBit(c+356,"top exu_step Regfile_MPORT_en", false,-1);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+176+i*2,"top exu_step CSR_Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+356,"top exu_step CSR_Reg_io_res2rd_MPORT_en", false,-1);
        tracep->declBus(c+184,"top exu_step CSR_Reg_io_res2rd_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+185,"top exu_step CSR_Reg_io_res2rd_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step CSR_Reg_io_res2rd_MPORT_1_en", false,-1);
        tracep->declBus(c+184,"top exu_step CSR_Reg_io_res2rd_MPORT_1_addr", false,-1, 1,0);
        tracep->declQuad(c+185,"top exu_step CSR_Reg_io_res2rd_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step CSR_Reg_io_res2rd_MPORT_2_en", false,-1);
        tracep->declBus(c+184,"top exu_step CSR_Reg_io_res2rd_MPORT_2_addr", false,-1, 1,0);
        tracep->declQuad(c+185,"top exu_step CSR_Reg_io_res2rd_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step CSR_Reg_csr_wdata_MPORT_en", false,-1);
        tracep->declBus(c+184,"top exu_step CSR_Reg_csr_wdata_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+185,"top exu_step CSR_Reg_csr_wdata_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step CSR_Reg_csr_wdata_MPORT_1_en", false,-1);
        tracep->declBus(c+184,"top exu_step CSR_Reg_csr_wdata_MPORT_1_addr", false,-1, 1,0);
        tracep->declQuad(c+185,"top exu_step CSR_Reg_csr_wdata_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step CSR_Reg_MPORT_2_en", false,-1);
        tracep->declBus(c+389,"top exu_step CSR_Reg_MPORT_2_addr", false,-1, 1,0);
        tracep->declQuad(c+187,"top exu_step CSR_Reg_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step CSR_Reg_MPORT_5_en", false,-1);
        tracep->declBus(c+390,"top exu_step CSR_Reg_MPORT_5_addr", false,-1, 1,0);
        tracep->declQuad(c+189,"top exu_step CSR_Reg_MPORT_5_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step CSR_Reg_MPORT_7_en", false,-1);
        tracep->declBus(c+184,"top exu_step CSR_Reg_MPORT_7_addr", false,-1, 1,0);
        tracep->declQuad(c+185,"top exu_step CSR_Reg_MPORT_7_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step CSR_Reg_io_pc_next_MPORT_12_en", false,-1);
        tracep->declBus(c+391,"top exu_step CSR_Reg_io_pc_next_MPORT_12_addr", false,-1, 1,0);
        tracep->declQuad(c+191,"top exu_step CSR_Reg_io_pc_next_MPORT_12_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step CSR_Reg_io_pc_next_MPORT_13_en", false,-1);
        tracep->declBus(c+389,"top exu_step CSR_Reg_io_pc_next_MPORT_13_addr", false,-1, 1,0);
        tracep->declQuad(c+187,"top exu_step CSR_Reg_io_pc_next_MPORT_13_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step CSR_Reg_reg_trace_io_csr_reg_0_MPORT_en", false,-1);
        tracep->declBus(c+391,"top exu_step CSR_Reg_reg_trace_io_csr_reg_0_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+191,"top exu_step CSR_Reg_reg_trace_io_csr_reg_0_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step CSR_Reg_reg_trace_io_csr_reg_1_MPORT_en", false,-1);
        tracep->declBus(c+389,"top exu_step CSR_Reg_reg_trace_io_csr_reg_1_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+187,"top exu_step CSR_Reg_reg_trace_io_csr_reg_1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+356,"top exu_step CSR_Reg_reg_trace_io_csr_reg_2_MPORT_en", false,-1);
        tracep->declBus(c+392,"top exu_step CSR_Reg_reg_trace_io_csr_reg_2_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+193,"top exu_step CSR_Reg_reg_trace_io_csr_reg_2_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+195,"top exu_step CSR_Reg_MPORT_1_data", false,-1, 63,0);
        tracep->declBus(c+389,"top exu_step CSR_Reg_MPORT_1_addr", false,-1, 1,0);
        tracep->declBit(c+356,"top exu_step CSR_Reg_MPORT_1_mask", false,-1);
        tracep->declBit(c+356,"top exu_step CSR_Reg_MPORT_1_en", false,-1);
        tracep->declQuad(c+197,"top exu_step CSR_Reg_MPORT_3_data", false,-1, 63,0);
        tracep->declBus(c+390,"top exu_step CSR_Reg_MPORT_3_addr", false,-1, 1,0);
        tracep->declBit(c+356,"top exu_step CSR_Reg_MPORT_3_mask", false,-1);
        tracep->declBit(c+356,"top exu_step CSR_Reg_MPORT_3_en", false,-1);
        tracep->declQuad(c+199,"top exu_step CSR_Reg_MPORT_6_data", false,-1, 63,0);
        tracep->declBus(c+184,"top exu_step CSR_Reg_MPORT_6_addr", false,-1, 1,0);
        tracep->declBit(c+356,"top exu_step CSR_Reg_MPORT_6_mask", false,-1);
        tracep->declBit(c+356,"top exu_step CSR_Reg_MPORT_6_en", false,-1);
        tracep->declQuad(c+112,"top exu_step reg_trace_input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+114,"top exu_step reg_trace_input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+116,"top exu_step reg_trace_input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+118,"top exu_step reg_trace_input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+120,"top exu_step reg_trace_input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+122,"top exu_step reg_trace_input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+124,"top exu_step reg_trace_input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+126,"top exu_step reg_trace_input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+128,"top exu_step reg_trace_input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+130,"top exu_step reg_trace_input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+132,"top exu_step reg_trace_input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+134,"top exu_step reg_trace_input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+136,"top exu_step reg_trace_input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+138,"top exu_step reg_trace_input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+140,"top exu_step reg_trace_input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+142,"top exu_step reg_trace_input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+144,"top exu_step reg_trace_input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+110,"top exu_step reg_trace_input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+146,"top exu_step reg_trace_input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+148,"top exu_step reg_trace_input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+150,"top exu_step reg_trace_input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+152,"top exu_step reg_trace_input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+154,"top exu_step reg_trace_input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+156,"top exu_step reg_trace_input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+158,"top exu_step reg_trace_input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+160,"top exu_step reg_trace_input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+162,"top exu_step reg_trace_input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+164,"top exu_step reg_trace_input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+166,"top exu_step reg_trace_input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+168,"top exu_step reg_trace_input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+170,"top exu_step reg_trace_input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+172,"top exu_step reg_trace_input_reg_31", false,-1, 63,0);
        tracep->declQuad(c+191,"top exu_step reg_trace_csr_reg_0", false,-1, 63,0);
        tracep->declQuad(c+187,"top exu_step reg_trace_csr_reg_1", false,-1, 63,0);
        tracep->declQuad(c+193,"top exu_step reg_trace_csr_reg_2", false,-1, 63,0);
        tracep->declQuad(c+352,"top exu_step reg_trace_csr_reg_3", false,-1, 63,0);
        tracep->declQuad(c+1,"top exu_step reg_trace_pc", false,-1, 63,0);
        tracep->declBit(c+343,"top exu_step axi_clock", false,-1);
        tracep->declBit(c+344,"top exu_step axi_reset", false,-1);
        tracep->declBus(c+201,"top exu_step axi_io_axi_in_araddr", false,-1, 31,0);
        tracep->declBit(c+202,"top exu_step axi_io_axi_in_arvalid", false,-1);
        tracep->declBit(c+203,"top exu_step axi_io_axi_in_rready", false,-1);
        tracep->declBus(c+201,"top exu_step axi_io_axi_in_awaddr", false,-1, 31,0);
        tracep->declBit(c+204,"top exu_step axi_io_axi_in_awvalid", false,-1);
        tracep->declBus(c+205,"top exu_step axi_io_axi_in_wdata", false,-1, 31,0);
        tracep->declBus(c+206,"top exu_step axi_io_axi_in_wstrb", false,-1, 3,0);
        tracep->declBit(c+204,"top exu_step axi_io_axi_in_wvalid", false,-1);
        tracep->declBit(c+207,"top exu_step axi_io_axi_in_bready", false,-1);
        tracep->declQuad(c+208,"top exu_step axi_io_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+210,"top exu_step axi_io_axi_out_rvalid", false,-1);
        tracep->declBit(c+211,"top exu_step axi_io_axi_out_bvalid", false,-1);
        tracep->declBus(c+212,"top exu_step csr_addr", false,-1, 11,0);
        tracep->declQuad(c+213,"top exu_step src1_value", false,-1, 63,0);
        tracep->declQuad(c+215,"top exu_step src2_value", false,-1, 63,0);
        tracep->declQuad(c+217,"top exu_step add_res", false,-1, 63,0);
        tracep->declQuad(c+219,"top exu_step sub_res", false,-1, 63,0);
        tracep->declQuad(c+221,"top exu_step sra_res", false,-1, 63,0);
        tracep->declQuad(c+223,"top exu_step srl_res", false,-1, 63,0);
        tracep->declArray(c+225,"top exu_step sll_res", false,-1, 126,0);
        tracep->declBus(c+229,"top exu_step sraw_res", false,-1, 31,0);
        tracep->declBus(c+230,"top exu_step srlw_res", false,-1, 31,0);
        tracep->declQuad(c+231,"top exu_step sllw_res", false,-1, 62,0);
        tracep->declQuad(c+233,"top exu_step or_res", false,-1, 63,0);
        tracep->declQuad(c+235,"top exu_step xor_res", false,-1, 63,0);
        tracep->declQuad(c+237,"top exu_step and_res", false,-1, 63,0);
        tracep->declQuad(c+239,"top exu_step mlu_res", false,-1, 63,0);
        tracep->declBus(c+241,"top exu_step mluw_res", false,-1, 31,0);
        tracep->declBus(c+242,"top exu_step divw_res", false,-1, 31,0);
        tracep->declBus(c+243,"top exu_step divuw_res", false,-1, 31,0);
        tracep->declBus(c+244,"top exu_step remw_res", false,-1, 31,0);
        tracep->declBus(c+245,"top exu_step remuw_res", false,-1, 31,0);
        tracep->declArray(c+246,"top exu_step div_res", false,-1, 64,0);
        tracep->declQuad(c+249,"top exu_step divu_res", false,-1, 63,0);
        tracep->declQuad(c+251,"top exu_step rem_res", false,-1, 63,0);
        tracep->declQuad(c+253,"top exu_step remu_res", false,-1, 63,0);
        tracep->declQuad(c+208,"top exu_step mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+255,"top exu_step reg_value", false,-1, 63,0);
        tracep->declQuad(c+257,"top exu_step csr_wdata", false,-1, 63,0);
        tracep->declQuad(c+259,"top exu_step mem_wdate", false,-1, 63,0);
        tracep->declBit(c+202,"top exu_step axi_arvalid", false,-1);
        tracep->declBit(c+203,"top exu_step axi_rready", false,-1);
        tracep->declBit(c+204,"top exu_step axi_awvalid", false,-1);
        tracep->declBit(c+204,"top exu_step axi_wvalid", false,-1);
        tracep->declBit(c+207,"top exu_step axi_bready", false,-1);
        tracep->declQuad(c+112,"top exu_step reg_trace input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+114,"top exu_step reg_trace input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+116,"top exu_step reg_trace input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+118,"top exu_step reg_trace input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+120,"top exu_step reg_trace input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+122,"top exu_step reg_trace input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+124,"top exu_step reg_trace input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+126,"top exu_step reg_trace input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+128,"top exu_step reg_trace input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+130,"top exu_step reg_trace input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+132,"top exu_step reg_trace input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+134,"top exu_step reg_trace input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+136,"top exu_step reg_trace input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+138,"top exu_step reg_trace input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+140,"top exu_step reg_trace input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+142,"top exu_step reg_trace input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+144,"top exu_step reg_trace input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+110,"top exu_step reg_trace input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+146,"top exu_step reg_trace input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+148,"top exu_step reg_trace input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+150,"top exu_step reg_trace input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+152,"top exu_step reg_trace input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+154,"top exu_step reg_trace input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+156,"top exu_step reg_trace input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+158,"top exu_step reg_trace input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+160,"top exu_step reg_trace input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+162,"top exu_step reg_trace input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+164,"top exu_step reg_trace input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+166,"top exu_step reg_trace input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+168,"top exu_step reg_trace input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+170,"top exu_step reg_trace input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+172,"top exu_step reg_trace input_reg_31", false,-1, 63,0);
        tracep->declQuad(c+191,"top exu_step reg_trace csr_reg_0", false,-1, 63,0);
        tracep->declQuad(c+187,"top exu_step reg_trace csr_reg_1", false,-1, 63,0);
        tracep->declQuad(c+193,"top exu_step reg_trace csr_reg_2", false,-1, 63,0);
        tracep->declQuad(c+352,"top exu_step reg_trace csr_reg_3", false,-1, 63,0);
        tracep->declQuad(c+1,"top exu_step reg_trace pc", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+261+i*2,"top exu_step reg_trace traceregs", true,(i+0), 63,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+325+i*2,"top exu_step reg_trace csr_regs", true,(i+0), 63,0);}}
        tracep->declBit(c+343,"top exu_step axi clock", false,-1);
        tracep->declBit(c+344,"top exu_step axi reset", false,-1);
        tracep->declBus(c+201,"top exu_step axi io_axi_in_araddr", false,-1, 31,0);
        tracep->declBit(c+202,"top exu_step axi io_axi_in_arvalid", false,-1);
        tracep->declBit(c+203,"top exu_step axi io_axi_in_rready", false,-1);
        tracep->declBus(c+201,"top exu_step axi io_axi_in_awaddr", false,-1, 31,0);
        tracep->declBit(c+204,"top exu_step axi io_axi_in_awvalid", false,-1);
        tracep->declBus(c+205,"top exu_step axi io_axi_in_wdata", false,-1, 31,0);
        tracep->declBus(c+206,"top exu_step axi io_axi_in_wstrb", false,-1, 3,0);
        tracep->declBit(c+204,"top exu_step axi io_axi_in_wvalid", false,-1);
        tracep->declBit(c+207,"top exu_step axi io_axi_in_bready", false,-1);
        tracep->declQuad(c+208,"top exu_step axi io_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+210,"top exu_step axi io_axi_out_rvalid", false,-1);
        tracep->declBit(c+211,"top exu_step axi io_axi_out_bvalid", false,-1);
        tracep->declQuad(c+333,"top exu_step axi Mem_modle_Raddr", false,-1, 63,0);
        tracep->declQuad(c+208,"top exu_step axi Mem_modle_Rdata", false,-1, 63,0);
        tracep->declQuad(c+333,"top exu_step axi Mem_modle_Waddr", false,-1, 63,0);
        tracep->declQuad(c+335,"top exu_step axi Mem_modle_Wdata", false,-1, 63,0);
        tracep->declBus(c+337,"top exu_step axi Mem_modle_Wmask", false,-1, 7,0);
        tracep->declBit(c+338,"top exu_step axi Mem_modle_Write_en", false,-1);
        tracep->declBit(c+339,"top exu_step axi Mem_modle_Read_en", false,-1);
        tracep->declBit(c+340,"top exu_step axi axi_wready", false,-1);
        tracep->declBit(c+211,"top exu_step axi axi_bvalid", false,-1);
        tracep->declBit(c+341,"top exu_step axi axi_arready", false,-1);
        tracep->declBit(c+210,"top exu_step axi axi_rvalid", false,-1);
        tracep->declBus(c+342,"top exu_step axi state", false,-1, 2,0);
        tracep->declQuad(c+333,"top exu_step axi Mem_modle Raddr", false,-1, 63,0);
        tracep->declQuad(c+333,"top exu_step axi Mem_modle Waddr", false,-1, 63,0);
        tracep->declQuad(c+335,"top exu_step axi Mem_modle Wdata", false,-1, 63,0);
        tracep->declBus(c+337,"top exu_step axi Mem_modle Wmask", false,-1, 7,0);
        tracep->declBit(c+338,"top exu_step axi Mem_modle Write_en", false,-1);
        tracep->declBit(c+339,"top exu_step axi Mem_modle Read_en", false,-1);
        tracep->declQuad(c+208,"top exu_step axi Mem_modle Rdata", false,-1, 63,0);
        tracep->declBus(c+25,"top dpi flag", false,-1, 31,0);
        tracep->declBus(c+26,"top dpi ecall_flag", false,-1, 31,0);
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
    VlWide<4>/*127:0*/ __Vtemp170;
    VlWide<4>/*127:0*/ __Vtemp171;
    VlWide<4>/*127:0*/ __Vtemp172;
    VlWide<3>/*95:0*/ __Vtemp175;
    VlWide<3>/*95:0*/ __Vtemp176;
    VlWide<3>/*95:0*/ __Vtemp178;
    VlWide<3>/*95:0*/ __Vtemp179;
    VlWide<3>/*95:0*/ __Vtemp180;
    VlWide<3>/*95:0*/ __Vtemp181;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__pc_now),64);
        tracep->fullBit(oldp+3,(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_arready));
        tracep->fullBit(oldp+4,(vlSelf->top__DOT__axi_pc_valid));
        tracep->fullBit(oldp+5,(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rvalid));
        tracep->fullBit(oldp+6,(vlSelf->top__DOT__idu_step__DOT__axi_inst_ready));
        tracep->fullIData(oldp+7,((IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)),32);
        tracep->fullIData(oldp+8,(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194),32);
        tracep->fullCData(oldp+9,((0x1fU & (IData)(
                                                   (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                    >> 0xfU)))),5);
        tracep->fullCData(oldp+10,((0x1fU & (IData)(
                                                    (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                     >> 0x14U)))),5);
        tracep->fullCData(oldp+11,((0x1fU & (IData)(
                                                    (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                     >> 7U)))),5);
        tracep->fullQData(oldp+12,(vlSelf->top__DOT__idu_step_io_imm),64);
        tracep->fullBit(oldp+14,(((0x100073U != (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)) 
                                  & (IData)(vlSelf->top__DOT__idu_step__DOT___reg_write_T_37))));
        tracep->fullBit(oldp+15,(((0x1073U == (0x707fU 
                                               & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
                                  | ((0x2073U == (0x707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
                                     | (0x3073U == 
                                        (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))))));
        tracep->fullBit(oldp+16,(vlSelf->top__DOT__idu_step_io_ctrl_sign_src2_is_imm));
        tracep->fullBit(oldp+17,(vlSelf->top__DOT__idu_step_io_ctrl_sign_src1_is_pc));
        tracep->fullBit(oldp+18,((0x44U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188))));
        tracep->fullBit(oldp+19,(((0x3003U == (0x707fU 
                                               & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
                                  | ((0x2003U == (0x707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
                                     | ((0x6003U == 
                                         (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
                                        | ((0x1003U 
                                            == (0x707fU 
                                                & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
                                           | ((0x5003U 
                                               == (0x707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
                                              | ((3U 
                                                  == 
                                                  (0x707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
                                                 | (0x4003U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))))))))));
        tracep->fullCData(oldp+20,(((0x3023U == (0x707fU 
                                                 & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                     ? 0xffU : ((0x1023U 
                                                 == 
                                                 (0x707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                 ? 3U
                                                 : 
                                                ((0x23U 
                                                  == 
                                                  (0x707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                  ? 1U
                                                  : 
                                                 ((0x2023U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                   ? 0xfU
                                                   : 0U))))),8);
        tracep->fullQData(oldp+21,(vlSelf->top__DOT__exu_step_io_pc_next),64);
        tracep->fullQData(oldp+23,((((QData)((IData)(
                                                     vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U])))),64);
        tracep->fullIData(oldp+25,((2U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))),32);
        tracep->fullIData(oldp+26,((0x3dU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))),32);
        tracep->fullIData(oldp+27,((IData)(vlSelf->top__DOT__pc_now)),32);
        tracep->fullQData(oldp+28,(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata),64);
        tracep->fullQData(oldp+30,((QData)((IData)(vlSelf->top__DOT__pc_now))),64);
        tracep->fullBit(oldp+32,(((IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_arready) 
                                  & (IData)(vlSelf->top__DOT__axi_pc_valid))));
        tracep->fullBit(oldp+33,(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__state));
        tracep->fullSData(oldp+34,((0xfffU & (IData)(
                                                     (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                      >> 0x14U)))),12);
        tracep->fullIData(oldp+35,(((0x80000U & ((IData)(
                                                         (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                          >> 0x1fU)) 
                                                 << 0x13U)) 
                                    | ((0x7f800U & 
                                        ((IData)((vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                  >> 0xcU)) 
                                         << 0xbU)) 
                                       | ((0x400U & 
                                           ((IData)(
                                                    (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                     >> 0x14U)) 
                                            << 0xaU)) 
                                          | (0x3ffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                        >> 0x15U))))))),20);
        tracep->fullIData(oldp+36,((0xfffffU & (IData)(
                                                       (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                        >> 0xcU)))),20);
        tracep->fullSData(oldp+37,(((0xfe0U & ((IData)(
                                                       (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                        >> 0x19U)) 
                                               << 5U)) 
                                    | (0x1fU & (IData)(
                                                       (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                        >> 7U))))),12);
        tracep->fullSData(oldp+38,(((0x800U & ((IData)(
                                                       (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                        >> 0x1fU)) 
                                               << 0xbU)) 
                                    | ((0x400U & ((IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                           >> 7U)) 
                                                  << 0xaU)) 
                                       | ((0x3f0U & 
                                           ((IData)(
                                                    (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                     >> 0x19U)) 
                                            << 4U)) 
                                          | (0xfU & (IData)(
                                                            (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                             >> 8U))))))),12);
        tracep->fullIData(oldp+39,(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188),32);
        tracep->fullQData(oldp+40,(vlSelf->top__DOT__exu_step__DOT__Regfile[0]),64);
        tracep->fullQData(oldp+42,(vlSelf->top__DOT__exu_step__DOT__Regfile[1]),64);
        tracep->fullQData(oldp+44,(vlSelf->top__DOT__exu_step__DOT__Regfile[2]),64);
        tracep->fullQData(oldp+46,(vlSelf->top__DOT__exu_step__DOT__Regfile[3]),64);
        tracep->fullQData(oldp+48,(vlSelf->top__DOT__exu_step__DOT__Regfile[4]),64);
        tracep->fullQData(oldp+50,(vlSelf->top__DOT__exu_step__DOT__Regfile[5]),64);
        tracep->fullQData(oldp+52,(vlSelf->top__DOT__exu_step__DOT__Regfile[6]),64);
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__exu_step__DOT__Regfile[7]),64);
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__exu_step__DOT__Regfile[8]),64);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__exu_step__DOT__Regfile[9]),64);
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__exu_step__DOT__Regfile[10]),64);
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__exu_step__DOT__Regfile[11]),64);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__exu_step__DOT__Regfile[12]),64);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__exu_step__DOT__Regfile[13]),64);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__exu_step__DOT__Regfile[14]),64);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__exu_step__DOT__Regfile[15]),64);
        tracep->fullQData(oldp+72,(vlSelf->top__DOT__exu_step__DOT__Regfile[16]),64);
        tracep->fullQData(oldp+74,(vlSelf->top__DOT__exu_step__DOT__Regfile[17]),64);
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__exu_step__DOT__Regfile[18]),64);
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__exu_step__DOT__Regfile[19]),64);
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__exu_step__DOT__Regfile[20]),64);
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__exu_step__DOT__Regfile[21]),64);
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__exu_step__DOT__Regfile[22]),64);
        tracep->fullQData(oldp+86,(vlSelf->top__DOT__exu_step__DOT__Regfile[23]),64);
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__exu_step__DOT__Regfile[24]),64);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__exu_step__DOT__Regfile[25]),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__exu_step__DOT__Regfile[26]),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__exu_step__DOT__Regfile[27]),64);
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__exu_step__DOT__Regfile[28]),64);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__exu_step__DOT__Regfile[29]),64);
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__exu_step__DOT__Regfile[30]),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__exu_step__DOT__Regfile[31]),64);
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [(0x1fU & (IData)(
                                                      (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                       >> 0xfU)))]),64);
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [(0x1fU & (IData)(
                                                      (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                       >> 0x14U)))]),64);
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [(0x1fU & (IData)(
                                                      (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                       >> 7U)))]),64);
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x11U]),64);
        tracep->fullQData(oldp+112,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0U]),64);
        tracep->fullQData(oldp+114,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [1U]),64);
        tracep->fullQData(oldp+116,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [2U]),64);
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [3U]),64);
        tracep->fullQData(oldp+120,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [4U]),64);
        tracep->fullQData(oldp+122,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [5U]),64);
        tracep->fullQData(oldp+124,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [6U]),64);
        tracep->fullQData(oldp+126,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [7U]),64);
        tracep->fullQData(oldp+128,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [8U]),64);
        tracep->fullQData(oldp+130,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [9U]),64);
        tracep->fullQData(oldp+132,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xaU]),64);
        tracep->fullQData(oldp+134,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xbU]),64);
        tracep->fullQData(oldp+136,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xcU]),64);
        tracep->fullQData(oldp+138,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xdU]),64);
        tracep->fullQData(oldp+140,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xeU]),64);
        tracep->fullQData(oldp+142,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xfU]),64);
        tracep->fullQData(oldp+144,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x10U]),64);
        tracep->fullQData(oldp+146,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x12U]),64);
        tracep->fullQData(oldp+148,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x13U]),64);
        tracep->fullQData(oldp+150,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x14U]),64);
        tracep->fullQData(oldp+152,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x15U]),64);
        tracep->fullQData(oldp+154,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x16U]),64);
        tracep->fullQData(oldp+156,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x17U]),64);
        tracep->fullQData(oldp+158,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x18U]),64);
        tracep->fullQData(oldp+160,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x19U]),64);
        tracep->fullQData(oldp+162,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1aU]),64);
        tracep->fullQData(oldp+164,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1bU]),64);
        tracep->fullQData(oldp+166,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1cU]),64);
        tracep->fullQData(oldp+168,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1dU]),64);
        tracep->fullQData(oldp+170,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1eU]),64);
        tracep->fullQData(oldp+172,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1fU]),64);
        tracep->fullQData(oldp+174,(((((0x100073U != (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)) 
                                       & (IData)(vlSelf->top__DOT__idu_step__DOT___reg_write_T_37)) 
                                      & (0U != (0x1fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                           >> 7U)))))
                                      ? (((QData)((IData)(
                                                          vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U])))
                                      : ((0U == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                            >> 7U))))
                                          ? 0ULL : 
                                         vlSelf->top__DOT__exu_step__DOT__Regfile
                                         [(0x1fU & (IData)(
                                                           (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                            >> 7U)))]))),64);
        tracep->fullQData(oldp+176,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[0]),64);
        tracep->fullQData(oldp+178,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[1]),64);
        tracep->fullQData(oldp+180,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[2]),64);
        tracep->fullQData(oldp+182,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[3]),64);
        tracep->fullCData(oldp+184,(((0x342U == (0xfffU 
                                                 & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                      ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))),2);
        tracep->fullQData(oldp+185,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                    [((0x342U == (0xfffU 
                                                  & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                       ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]),64);
        tracep->fullQData(oldp+187,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                    [1U]),64);
        tracep->fullQData(oldp+189,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                    [3U]),64);
        tracep->fullQData(oldp+191,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                    [0U]),64);
        tracep->fullQData(oldp+193,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                    [2U]),64);
        tracep->fullQData(oldp+195,(((0x3dU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                      ? vlSelf->top__DOT__pc_now
                                      : vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                     [1U])),64);
        tracep->fullQData(oldp+197,(((0x3dU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                      ? vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [0x11U] : vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                     [3U])),64);
        tracep->fullQData(oldp+199,((((0x1073U == (0x707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
                                      | ((0x2073U == 
                                          (0x707fU 
                                           & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
                                         | (0x3073U 
                                            == (0x707fU 
                                                & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))))
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
        tracep->fullIData(oldp+201,((IData)(vlSelf->top__DOT__exu_step__DOT__add_res)),32);
        tracep->fullBit(oldp+202,(vlSelf->top__DOT__exu_step__DOT__axi_arvalid));
        tracep->fullBit(oldp+203,(vlSelf->top__DOT__exu_step__DOT__axi_rready));
        tracep->fullBit(oldp+204,(vlSelf->top__DOT__exu_step__DOT__axi_awvalid));
        tracep->fullIData(oldp+205,((IData)(((0x27U 
                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                              ? (QData)((IData)(
                                                                ((0U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                              >> 0x14U))))
                                                                  ? 0ULL
                                                                  : 
                                                                 vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                 [
                                                                 (0x1fU 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                             >> 0x14U)))])))
                                              : ((0x28U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 0x14U))))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                                [
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 0x14U)))])))))
                                                  : 
                                                 ((0x26U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 0x14U))))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                                [
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 0x14U)))])))))
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                 >> 0x14U))))
                                                     ? 0ULL
                                                     : 
                                                    vlSelf->top__DOT__exu_step__DOT__Regfile
                                                    [
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                >> 0x14U)))])
                                                    : 0ULL)))))),32);
        tracep->fullCData(oldp+206,(((0x3023U == (0x707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                      ? 0xfU : ((0x1023U 
                                                 == 
                                                 (0x707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                 ? 3U
                                                 : 
                                                ((0x23U 
                                                  == 
                                                  (0x707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                  ? 1U
                                                  : 
                                                 ((0x2023U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                   ? 0xfU
                                                   : 0U))))),4);
        tracep->fullBit(oldp+207,(vlSelf->top__DOT__exu_step__DOT__axi_bready));
        tracep->fullQData(oldp+208,(vlSelf->top__DOT__exu_step__DOT__axi__DOT__Mem_modle_Rdata),64);
        tracep->fullBit(oldp+210,(vlSelf->top__DOT__exu_step__DOT__axi__DOT__axi_rvalid));
        tracep->fullBit(oldp+211,(vlSelf->top__DOT__exu_step__DOT__axi__DOT__axi_bvalid));
        tracep->fullSData(oldp+212,((0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm))),12);
        tracep->fullQData(oldp+213,(vlSelf->top__DOT__exu_step__DOT__src1_value),64);
        tracep->fullQData(oldp+215,(vlSelf->top__DOT__exu_step__DOT__src2_value),64);
        tracep->fullQData(oldp+217,(vlSelf->top__DOT__exu_step__DOT__add_res),64);
        tracep->fullQData(oldp+219,(vlSelf->top__DOT__exu_step__DOT__sub_res),64);
        tracep->fullQData(oldp+221,(vlSelf->top__DOT__exu_step__DOT__sra_res),64);
        tracep->fullQData(oldp+223,(vlSelf->top__DOT__exu_step__DOT__srl_res),64);
        tracep->fullWData(oldp+225,(vlSelf->top__DOT__exu_step__DOT__sll_res),127);
        tracep->fullIData(oldp+229,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__exu_step__DOT__src1_value), 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)))),32);
        tracep->fullIData(oldp+230,(vlSelf->top__DOT__exu_step__DOT__srlw_res),32);
        tracep->fullQData(oldp+231,(vlSelf->top__DOT__exu_step__DOT__sllw_res),63);
        tracep->fullQData(oldp+233,(vlSelf->top__DOT__exu_step__DOT__or_res),64);
        tracep->fullQData(oldp+235,(vlSelf->top__DOT__exu_step__DOT__xor_res),64);
        tracep->fullQData(oldp+237,(vlSelf->top__DOT__exu_step__DOT__and_res),64);
        VL_EXTEND_WQ(128,64, __Vtemp170, vlSelf->top__DOT__exu_step__DOT__src1_value);
        VL_EXTEND_WQ(128,64, __Vtemp171, vlSelf->top__DOT__exu_step__DOT__src2_value);
        VL_MUL_W(4, __Vtemp172, __Vtemp170, __Vtemp171);
        tracep->fullQData(oldp+239,((((QData)((IData)(
                                                      __Vtemp172[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp172[0U])))),64);
        tracep->fullIData(oldp+241,((IData)(vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2)),32);
        tracep->fullIData(oldp+242,((IData)(vlSelf->top__DOT__exu_step__DOT___divw_res_T_4)),32);
        tracep->fullIData(oldp+243,(vlSelf->top__DOT__exu_step__DOT__divuw_res),32);
        tracep->fullIData(oldp+244,(vlSelf->top__DOT__exu_step__DOT__remw_res),32);
        tracep->fullIData(oldp+245,(vlSelf->top__DOT__exu_step__DOT__remuw_res),32);
        VL_EXTENDS_WQ(65,64, __Vtemp175, vlSelf->top__DOT__exu_step__DOT__src1_value);
        __Vtemp176[0U] = __Vtemp175[0U];
        __Vtemp176[1U] = __Vtemp175[1U];
        __Vtemp176[2U] = (1U & __Vtemp175[2U]);
        VL_EXTENDS_WQ(65,64, __Vtemp178, vlSelf->top__DOT__exu_step__DOT__src2_value);
        __Vtemp179[0U] = __Vtemp178[0U];
        __Vtemp179[1U] = __Vtemp178[1U];
        __Vtemp179[2U] = (1U & __Vtemp178[2U]);
        VL_DIVS_WWW(65, __Vtemp180, __Vtemp176, __Vtemp179);
        __Vtemp181[0U] = __Vtemp180[0U];
        __Vtemp181[1U] = __Vtemp180[1U];
        __Vtemp181[2U] = (1U & __Vtemp180[2U]);
        tracep->fullWData(oldp+246,(__Vtemp181),65);
        tracep->fullQData(oldp+249,(VL_DIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
        tracep->fullQData(oldp+251,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
        tracep->fullQData(oldp+253,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
        tracep->fullQData(oldp+255,(((0U == (0x1fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                        >> 7U))))
                                      ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [(0x1fU & (IData)(
                                                       (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                        >> 7U)))])),64);
        tracep->fullQData(oldp+257,(((0x47U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
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
        tracep->fullQData(oldp+259,(((0x27U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                      ? (QData)((IData)(
                                                        ((0U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                      >> 0x14U))))
                                                          ? 0ULL
                                                          : 
                                                         vlSelf->top__DOT__exu_step__DOT__Regfile
                                                         [
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                     >> 0x14U)))])))
                                      : ((0x28U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                          ? (QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       ((0U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 0x14U))))
                                                                         ? 0ULL
                                                                         : 
                                                                        vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                        [
                                                                        (0x1fU 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
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
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 0x14U))))
                                                                             ? 0ULL
                                                                             : 
                                                                            vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                            [
                                                                            (0x1fU 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 0x14U)))])))))
                                              : ((7U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                               >> 0x14U))))
                                                   ? 0ULL
                                                   : 
                                                  vlSelf->top__DOT__exu_step__DOT__Regfile
                                                  [
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                              >> 0x14U)))])
                                                  : 0ULL))))),64);
        tracep->fullQData(oldp+261,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0]),64);
        tracep->fullQData(oldp+263,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[1]),64);
        tracep->fullQData(oldp+265,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[2]),64);
        tracep->fullQData(oldp+267,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[3]),64);
        tracep->fullQData(oldp+269,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[4]),64);
        tracep->fullQData(oldp+271,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[5]),64);
        tracep->fullQData(oldp+273,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[6]),64);
        tracep->fullQData(oldp+275,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[7]),64);
        tracep->fullQData(oldp+277,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[8]),64);
        tracep->fullQData(oldp+279,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[9]),64);
        tracep->fullQData(oldp+281,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[10]),64);
        tracep->fullQData(oldp+283,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[11]),64);
        tracep->fullQData(oldp+285,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[12]),64);
        tracep->fullQData(oldp+287,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[13]),64);
        tracep->fullQData(oldp+289,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[14]),64);
        tracep->fullQData(oldp+291,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[15]),64);
        tracep->fullQData(oldp+293,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[16]),64);
        tracep->fullQData(oldp+295,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[17]),64);
        tracep->fullQData(oldp+297,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[18]),64);
        tracep->fullQData(oldp+299,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[19]),64);
        tracep->fullQData(oldp+301,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[20]),64);
        tracep->fullQData(oldp+303,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[21]),64);
        tracep->fullQData(oldp+305,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[22]),64);
        tracep->fullQData(oldp+307,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[23]),64);
        tracep->fullQData(oldp+309,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[24]),64);
        tracep->fullQData(oldp+311,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[25]),64);
        tracep->fullQData(oldp+313,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[26]),64);
        tracep->fullQData(oldp+315,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[27]),64);
        tracep->fullQData(oldp+317,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[28]),64);
        tracep->fullQData(oldp+319,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[29]),64);
        tracep->fullQData(oldp+321,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[30]),64);
        tracep->fullQData(oldp+323,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[31]),64);
        tracep->fullQData(oldp+325,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[0]),64);
        tracep->fullQData(oldp+327,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[1]),64);
        tracep->fullQData(oldp+329,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[2]),64);
        tracep->fullQData(oldp+331,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[3]),64);
        tracep->fullQData(oldp+333,((QData)((IData)(vlSelf->top__DOT__exu_step__DOT__add_res))),64);
        tracep->fullQData(oldp+335,((QData)((IData)(
                                                    ((0x27U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? (QData)((IData)(
                                                                        ((0U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 0x14U))))
                                                                          ? 0ULL
                                                                          : 
                                                                         vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                         [
                                                                         (0x1fU 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 0x14U)))])))
                                                      : 
                                                     ((0x28U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 0x14U))))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                                [
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 0x14U)))])))))
                                                       : 
                                                      ((0x26U 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                        ? (QData)((IData)(
                                                                          (0xffffU 
                                                                           & (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 0x14U))))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                                [
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 0x14U)))])))))
                                                        : 
                                                       ((7U 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                         ? 
                                                        ((0U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                      >> 0x14U))))
                                                          ? 0ULL
                                                          : 
                                                         vlSelf->top__DOT__exu_step__DOT__Regfile
                                                         [
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                     >> 0x14U)))])
                                                         : 0ULL))))))),64);
        tracep->fullCData(oldp+337,(((0x3023U == (0x707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                      ? 0xfU : ((0x1023U 
                                                 == 
                                                 (0x707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                 ? 3U
                                                 : 
                                                ((0x23U 
                                                  == 
                                                  (0x707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                  ? 1U
                                                  : 
                                                 ((0x2023U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                   ? 0xfU
                                                   : 0U))))),8);
        tracep->fullBit(oldp+338,(((IData)(vlSelf->top__DOT__exu_step__DOT__axi__DOT__axi_wready) 
                                   & (IData)(vlSelf->top__DOT__exu_step__DOT__axi_awvalid))));
        tracep->fullBit(oldp+339,(((IData)(vlSelf->top__DOT__exu_step__DOT__axi__DOT__axi_arready) 
                                   & (IData)(vlSelf->top__DOT__exu_step__DOT__axi_arvalid))));
        tracep->fullBit(oldp+340,(vlSelf->top__DOT__exu_step__DOT__axi__DOT__axi_wready));
        tracep->fullBit(oldp+341,(vlSelf->top__DOT__exu_step__DOT__axi__DOT__axi_arready));
        tracep->fullCData(oldp+342,(vlSelf->top__DOT__exu_step__DOT__axi__DOT__state),3);
        tracep->fullBit(oldp+343,(vlSelf->clock));
        tracep->fullBit(oldp+344,(vlSelf->reset));
        tracep->fullIData(oldp+345,(vlSelf->io_inst),32);
        tracep->fullQData(oldp+346,(vlSelf->io_pc),64);
        tracep->fullQData(oldp+348,(vlSelf->io_pc_next),64);
        tracep->fullQData(oldp+350,(vlSelf->io_outval),64);
        tracep->fullQData(oldp+352,(0ULL),64);
        tracep->fullCData(oldp+354,(0U),8);
        tracep->fullBit(oldp+355,(0U));
        tracep->fullBit(oldp+356,(1U));
        tracep->fullCData(oldp+357,(0x11U),5);
        tracep->fullCData(oldp+358,(0U),5);
        tracep->fullCData(oldp+359,(1U),5);
        tracep->fullCData(oldp+360,(2U),5);
        tracep->fullCData(oldp+361,(3U),5);
        tracep->fullCData(oldp+362,(4U),5);
        tracep->fullCData(oldp+363,(5U),5);
        tracep->fullCData(oldp+364,(6U),5);
        tracep->fullCData(oldp+365,(7U),5);
        tracep->fullCData(oldp+366,(8U),5);
        tracep->fullCData(oldp+367,(9U),5);
        tracep->fullCData(oldp+368,(0xaU),5);
        tracep->fullCData(oldp+369,(0xbU),5);
        tracep->fullCData(oldp+370,(0xcU),5);
        tracep->fullCData(oldp+371,(0xdU),5);
        tracep->fullCData(oldp+372,(0xeU),5);
        tracep->fullCData(oldp+373,(0xfU),5);
        tracep->fullCData(oldp+374,(0x10U),5);
        tracep->fullCData(oldp+375,(0x12U),5);
        tracep->fullCData(oldp+376,(0x13U),5);
        tracep->fullCData(oldp+377,(0x14U),5);
        tracep->fullCData(oldp+378,(0x15U),5);
        tracep->fullCData(oldp+379,(0x16U),5);
        tracep->fullCData(oldp+380,(0x17U),5);
        tracep->fullCData(oldp+381,(0x18U),5);
        tracep->fullCData(oldp+382,(0x19U),5);
        tracep->fullCData(oldp+383,(0x1aU),5);
        tracep->fullCData(oldp+384,(0x1bU),5);
        tracep->fullCData(oldp+385,(0x1cU),5);
        tracep->fullCData(oldp+386,(0x1dU),5);
        tracep->fullCData(oldp+387,(0x1eU),5);
        tracep->fullCData(oldp+388,(0x1fU),5);
        tracep->fullCData(oldp+389,(1U),2);
        tracep->fullCData(oldp+390,(3U),2);
        tracep->fullCData(oldp+391,(0U),2);
        tracep->fullCData(oldp+392,(2U),2);
    }
}
