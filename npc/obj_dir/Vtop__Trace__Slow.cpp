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
        tracep->declBit(c+348,"clock", false,-1);
        tracep->declBit(c+349,"reset", false,-1);
        tracep->declBus(c+350,"io_inst", false,-1, 31,0);
        tracep->declQuad(c+351,"io_pc", false,-1, 63,0);
        tracep->declQuad(c+353,"io_pc_next", false,-1, 63,0);
        tracep->declQuad(c+355,"io_outval", false,-1, 63,0);
        tracep->declBit(c+357,"io_step", false,-1);
        tracep->declBit(c+348,"top clock", false,-1);
        tracep->declBit(c+349,"top reset", false,-1);
        tracep->declBus(c+350,"top io_inst", false,-1, 31,0);
        tracep->declQuad(c+351,"top io_pc", false,-1, 63,0);
        tracep->declQuad(c+353,"top io_pc_next", false,-1, 63,0);
        tracep->declQuad(c+355,"top io_outval", false,-1, 63,0);
        tracep->declBit(c+357,"top io_step", false,-1);
        tracep->declBit(c+348,"top ifu_step_clock", false,-1);
        tracep->declBit(c+349,"top ifu_step_reset", false,-1);
        tracep->declQuad(c+1,"top ifu_step_io_pc", false,-1, 63,0);
        tracep->declBit(c+267,"top ifu_step_io_pc_valid", false,-1);
        tracep->declBit(c+3,"top ifu_step_io_inst_valid", false,-1);
        tracep->declBit(c+4,"top ifu_step_io_inst_ready", false,-1);
        tracep->declBus(c+268,"top ifu_step_io_inst", false,-1, 31,0);
        tracep->declBit(c+348,"top idu_step_clock", false,-1);
        tracep->declBit(c+349,"top idu_step_reset", false,-1);
        tracep->declBus(c+268,"top idu_step_io_inst", false,-1, 31,0);
        tracep->declBit(c+3,"top idu_step_io_inst_valid", false,-1);
        tracep->declBit(c+4,"top idu_step_io_inst_ready", false,-1);
        tracep->declBus(c+269,"top idu_step_io_inst_now", false,-1, 31,0);
        tracep->declBus(c+270,"top idu_step_io_rs1", false,-1, 4,0);
        tracep->declBus(c+271,"top idu_step_io_rs2", false,-1, 4,0);
        tracep->declBus(c+272,"top idu_step_io_rd", false,-1, 4,0);
        tracep->declQuad(c+273,"top idu_step_io_imm", false,-1, 63,0);
        tracep->declBit(c+275,"top idu_step_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+276,"top idu_step_io_ctrl_sign_csr_write", false,-1);
        tracep->declBit(c+277,"top idu_step_io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+278,"top idu_step_io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declBit(c+279,"top idu_step_io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+280,"top idu_step_io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+281,"top idu_step_io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBit(c+348,"top exu_step_clock", false,-1);
        tracep->declBit(c+349,"top exu_step_reset", false,-1);
        tracep->declQuad(c+1,"top exu_step_io_pc", false,-1, 63,0);
        tracep->declQuad(c+282,"top exu_step_io_pc_next", false,-1, 63,0);
        tracep->declBus(c+269,"top exu_step_io_inst_now", false,-1, 31,0);
        tracep->declBus(c+270,"top exu_step_io_rs1", false,-1, 4,0);
        tracep->declBus(c+271,"top exu_step_io_rs2", false,-1, 4,0);
        tracep->declBus(c+272,"top exu_step_io_rd", false,-1, 4,0);
        tracep->declQuad(c+273,"top exu_step_io_imm", false,-1, 63,0);
        tracep->declBit(c+275,"top exu_step_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+276,"top exu_step_io_ctrl_sign_csr_write", false,-1);
        tracep->declBit(c+277,"top exu_step_io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+278,"top exu_step_io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declBit(c+279,"top exu_step_io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+280,"top exu_step_io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+281,"top exu_step_io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declQuad(c+284,"top exu_step_io_res2rd", false,-1, 63,0);
        tracep->declBit(c+5,"top exu_step_io_inst_valid", false,-1);
        tracep->declBit(c+286,"top exu_step_io_mem_end", false,-1);
        tracep->declBit(c+287,"top exu_step_io_mem_flag", false,-1);
        tracep->declBus(c+288,"top dpi_flag", false,-1, 31,0);
        tracep->declBus(c+289,"top dpi_ecall_flag", false,-1, 31,0);
        tracep->declQuad(c+1,"top pc_now", false,-1, 63,0);
        tracep->declBit(c+6,"top npc_step", false,-1);
        tracep->declBit(c+348,"top ifu_step clock", false,-1);
        tracep->declBit(c+349,"top ifu_step reset", false,-1);
        tracep->declQuad(c+1,"top ifu_step io_pc", false,-1, 63,0);
        tracep->declBit(c+267,"top ifu_step io_pc_valid", false,-1);
        tracep->declBit(c+3,"top ifu_step io_inst_valid", false,-1);
        tracep->declBit(c+4,"top ifu_step io_inst_ready", false,-1);
        tracep->declBus(c+268,"top ifu_step io_inst", false,-1, 31,0);
        tracep->declBit(c+348,"top ifu_step axi_clock", false,-1);
        tracep->declBit(c+349,"top ifu_step axi_reset", false,-1);
        tracep->declBus(c+7,"top ifu_step axi_io_axi_in_araddr", false,-1, 31,0);
        tracep->declBit(c+267,"top ifu_step axi_io_axi_in_arvalid", false,-1);
        tracep->declBit(c+4,"top ifu_step axi_io_axi_in_rready", false,-1);
        tracep->declBus(c+358,"top ifu_step axi_io_axi_in_awaddr", false,-1, 31,0);
        tracep->declBit(c+359,"top ifu_step axi_io_axi_in_awvalid", false,-1);
        tracep->declBus(c+358,"top ifu_step axi_io_axi_in_wdata", false,-1, 31,0);
        tracep->declBus(c+360,"top ifu_step axi_io_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+359,"top ifu_step axi_io_axi_in_wvalid", false,-1);
        tracep->declBit(c+359,"top ifu_step axi_io_axi_in_bready", false,-1);
        tracep->declQuad(c+290,"top ifu_step axi_io_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+3,"top ifu_step axi_io_axi_out_rvalid", false,-1);
        tracep->declBit(c+8,"top ifu_step axi_io_axi_out_bvalid", false,-1);
        tracep->declBit(c+348,"top ifu_step axi clock", false,-1);
        tracep->declBit(c+349,"top ifu_step axi reset", false,-1);
        tracep->declBus(c+7,"top ifu_step axi io_axi_in_araddr", false,-1, 31,0);
        tracep->declBit(c+267,"top ifu_step axi io_axi_in_arvalid", false,-1);
        tracep->declBit(c+4,"top ifu_step axi io_axi_in_rready", false,-1);
        tracep->declBus(c+358,"top ifu_step axi io_axi_in_awaddr", false,-1, 31,0);
        tracep->declBit(c+359,"top ifu_step axi io_axi_in_awvalid", false,-1);
        tracep->declBus(c+358,"top ifu_step axi io_axi_in_wdata", false,-1, 31,0);
        tracep->declBus(c+360,"top ifu_step axi io_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+359,"top ifu_step axi io_axi_in_wvalid", false,-1);
        tracep->declBit(c+359,"top ifu_step axi io_axi_in_bready", false,-1);
        tracep->declQuad(c+290,"top ifu_step axi io_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+3,"top ifu_step axi io_axi_out_rvalid", false,-1);
        tracep->declBit(c+8,"top ifu_step axi io_axi_out_bvalid", false,-1);
        tracep->declQuad(c+9,"top ifu_step axi Mem_modle_Raddr", false,-1, 63,0);
        tracep->declQuad(c+290,"top ifu_step axi Mem_modle_Rdata", false,-1, 63,0);
        tracep->declQuad(c+361,"top ifu_step axi Mem_modle_Waddr", false,-1, 63,0);
        tracep->declQuad(c+361,"top ifu_step axi Mem_modle_Wdata", false,-1, 63,0);
        tracep->declBus(c+360,"top ifu_step axi Mem_modle_Wmask", false,-1, 7,0);
        tracep->declBit(c+359,"top ifu_step axi Mem_modle_Write_en", false,-1);
        tracep->declBit(c+241,"top ifu_step axi Mem_modle_Read_en", false,-1);
        tracep->declBit(c+11,"top ifu_step axi axi_wready", false,-1);
        tracep->declBit(c+8,"top ifu_step axi axi_bvalid", false,-1);
        tracep->declBit(c+12,"top ifu_step axi axi_arready", false,-1);
        tracep->declBit(c+3,"top ifu_step axi axi_rvalid", false,-1);
        tracep->declBus(c+13,"top ifu_step axi state", false,-1, 2,0);
        tracep->declQuad(c+9,"top ifu_step axi Mem_modle Raddr", false,-1, 63,0);
        tracep->declQuad(c+361,"top ifu_step axi Mem_modle Waddr", false,-1, 63,0);
        tracep->declQuad(c+361,"top ifu_step axi Mem_modle Wdata", false,-1, 63,0);
        tracep->declBus(c+360,"top ifu_step axi Mem_modle Wmask", false,-1, 7,0);
        tracep->declBit(c+359,"top ifu_step axi Mem_modle Write_en", false,-1);
        tracep->declBit(c+241,"top ifu_step axi Mem_modle Read_en", false,-1);
        tracep->declQuad(c+290,"top ifu_step axi Mem_modle Rdata", false,-1, 63,0);
        tracep->declBit(c+348,"top idu_step clock", false,-1);
        tracep->declBit(c+349,"top idu_step reset", false,-1);
        tracep->declBus(c+268,"top idu_step io_inst", false,-1, 31,0);
        tracep->declBit(c+3,"top idu_step io_inst_valid", false,-1);
        tracep->declBit(c+4,"top idu_step io_inst_ready", false,-1);
        tracep->declBus(c+269,"top idu_step io_inst_now", false,-1, 31,0);
        tracep->declBus(c+270,"top idu_step io_rs1", false,-1, 4,0);
        tracep->declBus(c+271,"top idu_step io_rs2", false,-1, 4,0);
        tracep->declBus(c+272,"top idu_step io_rd", false,-1, 4,0);
        tracep->declQuad(c+273,"top idu_step io_imm", false,-1, 63,0);
        tracep->declBit(c+275,"top idu_step io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+276,"top idu_step io_ctrl_sign_csr_write", false,-1);
        tracep->declBit(c+277,"top idu_step io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+278,"top idu_step io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declBit(c+279,"top idu_step io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+280,"top idu_step io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+281,"top idu_step io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBit(c+4,"top idu_step axi_inst_ready", false,-1);
        tracep->declBus(c+272,"top idu_step rd", false,-1, 4,0);
        tracep->declBus(c+292,"top idu_step imm_imm", false,-1, 11,0);
        tracep->declBus(c+293,"top idu_step imm_imm_1", false,-1, 19,0);
        tracep->declBus(c+294,"top idu_step imm_imm_2", false,-1, 19,0);
        tracep->declBus(c+295,"top idu_step imm_imm_3", false,-1, 11,0);
        tracep->declBus(c+296,"top idu_step imm_imm_4", false,-1, 11,0);
        tracep->declBus(c+297,"top idu_step inst_type", false,-1, 31,0);
        tracep->declBit(c+298,"top idu_step Readmem_en", false,-1);
        tracep->declBit(c+348,"top exu_step clock", false,-1);
        tracep->declBit(c+349,"top exu_step reset", false,-1);
        tracep->declQuad(c+1,"top exu_step io_pc", false,-1, 63,0);
        tracep->declQuad(c+282,"top exu_step io_pc_next", false,-1, 63,0);
        tracep->declBus(c+269,"top exu_step io_inst_now", false,-1, 31,0);
        tracep->declBus(c+270,"top exu_step io_rs1", false,-1, 4,0);
        tracep->declBus(c+271,"top exu_step io_rs2", false,-1, 4,0);
        tracep->declBus(c+272,"top exu_step io_rd", false,-1, 4,0);
        tracep->declQuad(c+273,"top exu_step io_imm", false,-1, 63,0);
        tracep->declBit(c+275,"top exu_step io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+276,"top exu_step io_ctrl_sign_csr_write", false,-1);
        tracep->declBit(c+277,"top exu_step io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+278,"top exu_step io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declBit(c+279,"top exu_step io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+280,"top exu_step io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+281,"top exu_step io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declQuad(c+284,"top exu_step io_res2rd", false,-1, 63,0);
        tracep->declBit(c+5,"top exu_step io_inst_valid", false,-1);
        tracep->declBit(c+286,"top exu_step io_mem_end", false,-1);
        tracep->declBit(c+287,"top exu_step io_mem_flag", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+14+i*2,"top exu_step Regfile", true,(i+0), 63,0);}}
        tracep->declBit(c+363,"top exu_step Regfile_src1_value_MPORT_en", false,-1);
        tracep->declBus(c+270,"top exu_step Regfile_src1_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+242,"top exu_step Regfile_src1_value_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_src2_value_MPORT_en", false,-1);
        tracep->declBus(c+271,"top exu_step Regfile_src2_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+244,"top exu_step Regfile_src2_value_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_value_MPORT_en", false,-1);
        tracep->declBus(c+272,"top exu_step Regfile_reg_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+246,"top exu_step Regfile_reg_value_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_MPORT_4_en", false,-1);
        tracep->declBus(c+364,"top exu_step Regfile_MPORT_4_addr", false,-1, 4,0);
        tracep->declQuad(c+78,"top exu_step Regfile_MPORT_4_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_io_pc_next_MPORT_en", false,-1);
        tracep->declBus(c+270,"top exu_step Regfile_io_pc_next_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+242,"top exu_step Regfile_io_pc_next_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_io_pc_next_MPORT_1_en", false,-1);
        tracep->declBus(c+271,"top exu_step Regfile_io_pc_next_MPORT_1_addr", false,-1, 4,0);
        tracep->declQuad(c+244,"top exu_step Regfile_io_pc_next_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_io_pc_next_MPORT_2_en", false,-1);
        tracep->declBus(c+270,"top exu_step Regfile_io_pc_next_MPORT_2_addr", false,-1, 4,0);
        tracep->declQuad(c+242,"top exu_step Regfile_io_pc_next_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_io_pc_next_MPORT_3_en", false,-1);
        tracep->declBus(c+271,"top exu_step Regfile_io_pc_next_MPORT_3_addr", false,-1, 4,0);
        tracep->declQuad(c+244,"top exu_step Regfile_io_pc_next_MPORT_3_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_io_pc_next_MPORT_4_en", false,-1);
        tracep->declBus(c+270,"top exu_step Regfile_io_pc_next_MPORT_4_addr", false,-1, 4,0);
        tracep->declQuad(c+242,"top exu_step Regfile_io_pc_next_MPORT_4_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_io_pc_next_MPORT_5_en", false,-1);
        tracep->declBus(c+271,"top exu_step Regfile_io_pc_next_MPORT_5_addr", false,-1, 4,0);
        tracep->declQuad(c+244,"top exu_step Regfile_io_pc_next_MPORT_5_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_io_pc_next_MPORT_6_en", false,-1);
        tracep->declBus(c+270,"top exu_step Regfile_io_pc_next_MPORT_6_addr", false,-1, 4,0);
        tracep->declQuad(c+242,"top exu_step Regfile_io_pc_next_MPORT_6_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_io_pc_next_MPORT_7_en", false,-1);
        tracep->declBus(c+271,"top exu_step Regfile_io_pc_next_MPORT_7_addr", false,-1, 4,0);
        tracep->declQuad(c+244,"top exu_step Regfile_io_pc_next_MPORT_7_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_io_pc_next_MPORT_8_en", false,-1);
        tracep->declBus(c+270,"top exu_step Regfile_io_pc_next_MPORT_8_addr", false,-1, 4,0);
        tracep->declQuad(c+242,"top exu_step Regfile_io_pc_next_MPORT_8_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_io_pc_next_MPORT_9_en", false,-1);
        tracep->declBus(c+271,"top exu_step Regfile_io_pc_next_MPORT_9_addr", false,-1, 4,0);
        tracep->declQuad(c+244,"top exu_step Regfile_io_pc_next_MPORT_9_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_io_pc_next_MPORT_10_en", false,-1);
        tracep->declBus(c+270,"top exu_step Regfile_io_pc_next_MPORT_10_addr", false,-1, 4,0);
        tracep->declQuad(c+242,"top exu_step Regfile_io_pc_next_MPORT_10_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_io_pc_next_MPORT_11_en", false,-1);
        tracep->declBus(c+271,"top exu_step Regfile_io_pc_next_MPORT_11_addr", false,-1, 4,0);
        tracep->declQuad(c+244,"top exu_step Regfile_io_pc_next_MPORT_11_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_0_MPORT_en", false,-1);
        tracep->declBus(c+365,"top exu_step Regfile_reg_trace_io_input_reg_0_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+80,"top exu_step Regfile_reg_trace_io_input_reg_0_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_1_MPORT_en", false,-1);
        tracep->declBus(c+366,"top exu_step Regfile_reg_trace_io_input_reg_1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+82,"top exu_step Regfile_reg_trace_io_input_reg_1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_2_MPORT_en", false,-1);
        tracep->declBus(c+367,"top exu_step Regfile_reg_trace_io_input_reg_2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+84,"top exu_step Regfile_reg_trace_io_input_reg_2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_3_MPORT_en", false,-1);
        tracep->declBus(c+368,"top exu_step Regfile_reg_trace_io_input_reg_3_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+86,"top exu_step Regfile_reg_trace_io_input_reg_3_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_4_MPORT_en", false,-1);
        tracep->declBus(c+369,"top exu_step Regfile_reg_trace_io_input_reg_4_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+88,"top exu_step Regfile_reg_trace_io_input_reg_4_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_5_MPORT_en", false,-1);
        tracep->declBus(c+370,"top exu_step Regfile_reg_trace_io_input_reg_5_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+90,"top exu_step Regfile_reg_trace_io_input_reg_5_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_6_MPORT_en", false,-1);
        tracep->declBus(c+371,"top exu_step Regfile_reg_trace_io_input_reg_6_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+92,"top exu_step Regfile_reg_trace_io_input_reg_6_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_7_MPORT_en", false,-1);
        tracep->declBus(c+372,"top exu_step Regfile_reg_trace_io_input_reg_7_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+94,"top exu_step Regfile_reg_trace_io_input_reg_7_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_8_MPORT_en", false,-1);
        tracep->declBus(c+373,"top exu_step Regfile_reg_trace_io_input_reg_8_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+96,"top exu_step Regfile_reg_trace_io_input_reg_8_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_9_MPORT_en", false,-1);
        tracep->declBus(c+374,"top exu_step Regfile_reg_trace_io_input_reg_9_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+98,"top exu_step Regfile_reg_trace_io_input_reg_9_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_10_MPORT_en", false,-1);
        tracep->declBus(c+375,"top exu_step Regfile_reg_trace_io_input_reg_10_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+100,"top exu_step Regfile_reg_trace_io_input_reg_10_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_11_MPORT_en", false,-1);
        tracep->declBus(c+376,"top exu_step Regfile_reg_trace_io_input_reg_11_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+102,"top exu_step Regfile_reg_trace_io_input_reg_11_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_12_MPORT_en", false,-1);
        tracep->declBus(c+377,"top exu_step Regfile_reg_trace_io_input_reg_12_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+104,"top exu_step Regfile_reg_trace_io_input_reg_12_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_13_MPORT_en", false,-1);
        tracep->declBus(c+378,"top exu_step Regfile_reg_trace_io_input_reg_13_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+106,"top exu_step Regfile_reg_trace_io_input_reg_13_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_14_MPORT_en", false,-1);
        tracep->declBus(c+379,"top exu_step Regfile_reg_trace_io_input_reg_14_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+108,"top exu_step Regfile_reg_trace_io_input_reg_14_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_15_MPORT_en", false,-1);
        tracep->declBus(c+380,"top exu_step Regfile_reg_trace_io_input_reg_15_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+110,"top exu_step Regfile_reg_trace_io_input_reg_15_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_16_MPORT_en", false,-1);
        tracep->declBus(c+381,"top exu_step Regfile_reg_trace_io_input_reg_16_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+112,"top exu_step Regfile_reg_trace_io_input_reg_16_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_17_MPORT_en", false,-1);
        tracep->declBus(c+364,"top exu_step Regfile_reg_trace_io_input_reg_17_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+78,"top exu_step Regfile_reg_trace_io_input_reg_17_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_18_MPORT_en", false,-1);
        tracep->declBus(c+382,"top exu_step Regfile_reg_trace_io_input_reg_18_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+114,"top exu_step Regfile_reg_trace_io_input_reg_18_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_19_MPORT_en", false,-1);
        tracep->declBus(c+383,"top exu_step Regfile_reg_trace_io_input_reg_19_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+116,"top exu_step Regfile_reg_trace_io_input_reg_19_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_20_MPORT_en", false,-1);
        tracep->declBus(c+384,"top exu_step Regfile_reg_trace_io_input_reg_20_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+118,"top exu_step Regfile_reg_trace_io_input_reg_20_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_21_MPORT_en", false,-1);
        tracep->declBus(c+385,"top exu_step Regfile_reg_trace_io_input_reg_21_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+120,"top exu_step Regfile_reg_trace_io_input_reg_21_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_22_MPORT_en", false,-1);
        tracep->declBus(c+386,"top exu_step Regfile_reg_trace_io_input_reg_22_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+122,"top exu_step Regfile_reg_trace_io_input_reg_22_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_23_MPORT_en", false,-1);
        tracep->declBus(c+387,"top exu_step Regfile_reg_trace_io_input_reg_23_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+124,"top exu_step Regfile_reg_trace_io_input_reg_23_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_24_MPORT_en", false,-1);
        tracep->declBus(c+388,"top exu_step Regfile_reg_trace_io_input_reg_24_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+126,"top exu_step Regfile_reg_trace_io_input_reg_24_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_25_MPORT_en", false,-1);
        tracep->declBus(c+389,"top exu_step Regfile_reg_trace_io_input_reg_25_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+128,"top exu_step Regfile_reg_trace_io_input_reg_25_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_26_MPORT_en", false,-1);
        tracep->declBus(c+390,"top exu_step Regfile_reg_trace_io_input_reg_26_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+130,"top exu_step Regfile_reg_trace_io_input_reg_26_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_27_MPORT_en", false,-1);
        tracep->declBus(c+391,"top exu_step Regfile_reg_trace_io_input_reg_27_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+132,"top exu_step Regfile_reg_trace_io_input_reg_27_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_28_MPORT_en", false,-1);
        tracep->declBus(c+392,"top exu_step Regfile_reg_trace_io_input_reg_28_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+134,"top exu_step Regfile_reg_trace_io_input_reg_28_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_29_MPORT_en", false,-1);
        tracep->declBus(c+393,"top exu_step Regfile_reg_trace_io_input_reg_29_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+136,"top exu_step Regfile_reg_trace_io_input_reg_29_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_30_MPORT_en", false,-1);
        tracep->declBus(c+394,"top exu_step Regfile_reg_trace_io_input_reg_30_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+138,"top exu_step Regfile_reg_trace_io_input_reg_30_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_reg_trace_io_input_reg_31_MPORT_en", false,-1);
        tracep->declBus(c+395,"top exu_step Regfile_reg_trace_io_input_reg_31_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+140,"top exu_step Regfile_reg_trace_io_input_reg_31_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_mem_wdate_MPORT_en", false,-1);
        tracep->declBus(c+271,"top exu_step Regfile_mem_wdate_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+244,"top exu_step Regfile_mem_wdate_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_mem_wdate_MPORT_1_en", false,-1);
        tracep->declBus(c+271,"top exu_step Regfile_mem_wdate_MPORT_1_addr", false,-1, 4,0);
        tracep->declQuad(c+244,"top exu_step Regfile_mem_wdate_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_mem_wdate_MPORT_2_en", false,-1);
        tracep->declBus(c+271,"top exu_step Regfile_mem_wdate_MPORT_2_addr", false,-1, 4,0);
        tracep->declQuad(c+244,"top exu_step Regfile_mem_wdate_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step Regfile_mem_wdate_MPORT_3_en", false,-1);
        tracep->declBus(c+271,"top exu_step Regfile_mem_wdate_MPORT_3_addr", false,-1, 4,0);
        tracep->declQuad(c+244,"top exu_step Regfile_mem_wdate_MPORT_3_data", false,-1, 63,0);
        tracep->declQuad(c+248,"top exu_step Regfile_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+272,"top exu_step Regfile_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+363,"top exu_step Regfile_MPORT_mask", false,-1);
        tracep->declBit(c+363,"top exu_step Regfile_MPORT_en", false,-1);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+142+i*2,"top exu_step CSR_Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+363,"top exu_step CSR_Reg_io_res2rd_MPORT_en", false,-1);
        tracep->declBus(c+299,"top exu_step CSR_Reg_io_res2rd_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+250,"top exu_step CSR_Reg_io_res2rd_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step CSR_Reg_io_res2rd_MPORT_1_en", false,-1);
        tracep->declBus(c+299,"top exu_step CSR_Reg_io_res2rd_MPORT_1_addr", false,-1, 1,0);
        tracep->declQuad(c+250,"top exu_step CSR_Reg_io_res2rd_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step CSR_Reg_io_res2rd_MPORT_2_en", false,-1);
        tracep->declBus(c+299,"top exu_step CSR_Reg_io_res2rd_MPORT_2_addr", false,-1, 1,0);
        tracep->declQuad(c+250,"top exu_step CSR_Reg_io_res2rd_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step CSR_Reg_csr_wdata_MPORT_en", false,-1);
        tracep->declBus(c+299,"top exu_step CSR_Reg_csr_wdata_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+250,"top exu_step CSR_Reg_csr_wdata_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step CSR_Reg_csr_wdata_MPORT_1_en", false,-1);
        tracep->declBus(c+299,"top exu_step CSR_Reg_csr_wdata_MPORT_1_addr", false,-1, 1,0);
        tracep->declQuad(c+250,"top exu_step CSR_Reg_csr_wdata_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step CSR_Reg_MPORT_2_en", false,-1);
        tracep->declBus(c+396,"top exu_step CSR_Reg_MPORT_2_addr", false,-1, 1,0);
        tracep->declQuad(c+150,"top exu_step CSR_Reg_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step CSR_Reg_MPORT_5_en", false,-1);
        tracep->declBus(c+397,"top exu_step CSR_Reg_MPORT_5_addr", false,-1, 1,0);
        tracep->declQuad(c+152,"top exu_step CSR_Reg_MPORT_5_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step CSR_Reg_MPORT_7_en", false,-1);
        tracep->declBus(c+299,"top exu_step CSR_Reg_MPORT_7_addr", false,-1, 1,0);
        tracep->declQuad(c+250,"top exu_step CSR_Reg_MPORT_7_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step CSR_Reg_io_pc_next_MPORT_12_en", false,-1);
        tracep->declBus(c+398,"top exu_step CSR_Reg_io_pc_next_MPORT_12_addr", false,-1, 1,0);
        tracep->declQuad(c+154,"top exu_step CSR_Reg_io_pc_next_MPORT_12_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step CSR_Reg_io_pc_next_MPORT_13_en", false,-1);
        tracep->declBus(c+396,"top exu_step CSR_Reg_io_pc_next_MPORT_13_addr", false,-1, 1,0);
        tracep->declQuad(c+150,"top exu_step CSR_Reg_io_pc_next_MPORT_13_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step CSR_Reg_reg_trace_io_csr_reg_0_MPORT_en", false,-1);
        tracep->declBus(c+398,"top exu_step CSR_Reg_reg_trace_io_csr_reg_0_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+154,"top exu_step CSR_Reg_reg_trace_io_csr_reg_0_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step CSR_Reg_reg_trace_io_csr_reg_1_MPORT_en", false,-1);
        tracep->declBus(c+396,"top exu_step CSR_Reg_reg_trace_io_csr_reg_1_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+150,"top exu_step CSR_Reg_reg_trace_io_csr_reg_1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+363,"top exu_step CSR_Reg_reg_trace_io_csr_reg_2_MPORT_en", false,-1);
        tracep->declBus(c+399,"top exu_step CSR_Reg_reg_trace_io_csr_reg_2_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+156,"top exu_step CSR_Reg_reg_trace_io_csr_reg_2_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+252,"top exu_step CSR_Reg_MPORT_1_data", false,-1, 63,0);
        tracep->declBus(c+396,"top exu_step CSR_Reg_MPORT_1_addr", false,-1, 1,0);
        tracep->declBit(c+363,"top exu_step CSR_Reg_MPORT_1_mask", false,-1);
        tracep->declBit(c+363,"top exu_step CSR_Reg_MPORT_1_en", false,-1);
        tracep->declQuad(c+254,"top exu_step CSR_Reg_MPORT_3_data", false,-1, 63,0);
        tracep->declBus(c+397,"top exu_step CSR_Reg_MPORT_3_addr", false,-1, 1,0);
        tracep->declBit(c+363,"top exu_step CSR_Reg_MPORT_3_mask", false,-1);
        tracep->declBit(c+363,"top exu_step CSR_Reg_MPORT_3_en", false,-1);
        tracep->declQuad(c+256,"top exu_step CSR_Reg_MPORT_6_data", false,-1, 63,0);
        tracep->declBus(c+299,"top exu_step CSR_Reg_MPORT_6_addr", false,-1, 1,0);
        tracep->declBit(c+363,"top exu_step CSR_Reg_MPORT_6_mask", false,-1);
        tracep->declBit(c+363,"top exu_step CSR_Reg_MPORT_6_en", false,-1);
        tracep->declQuad(c+80,"top exu_step reg_trace_input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+82,"top exu_step reg_trace_input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+84,"top exu_step reg_trace_input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+86,"top exu_step reg_trace_input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+88,"top exu_step reg_trace_input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+90,"top exu_step reg_trace_input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+92,"top exu_step reg_trace_input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+94,"top exu_step reg_trace_input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+96,"top exu_step reg_trace_input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+98,"top exu_step reg_trace_input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+100,"top exu_step reg_trace_input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+102,"top exu_step reg_trace_input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+104,"top exu_step reg_trace_input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+106,"top exu_step reg_trace_input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+108,"top exu_step reg_trace_input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+110,"top exu_step reg_trace_input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+112,"top exu_step reg_trace_input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+78,"top exu_step reg_trace_input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+114,"top exu_step reg_trace_input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+116,"top exu_step reg_trace_input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+118,"top exu_step reg_trace_input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+120,"top exu_step reg_trace_input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+122,"top exu_step reg_trace_input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+124,"top exu_step reg_trace_input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+126,"top exu_step reg_trace_input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+128,"top exu_step reg_trace_input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+130,"top exu_step reg_trace_input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+132,"top exu_step reg_trace_input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+134,"top exu_step reg_trace_input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+136,"top exu_step reg_trace_input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+138,"top exu_step reg_trace_input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+140,"top exu_step reg_trace_input_reg_31", false,-1, 63,0);
        tracep->declQuad(c+154,"top exu_step reg_trace_csr_reg_0", false,-1, 63,0);
        tracep->declQuad(c+150,"top exu_step reg_trace_csr_reg_1", false,-1, 63,0);
        tracep->declQuad(c+156,"top exu_step reg_trace_csr_reg_2", false,-1, 63,0);
        tracep->declQuad(c+361,"top exu_step reg_trace_csr_reg_3", false,-1, 63,0);
        tracep->declQuad(c+1,"top exu_step reg_trace_pc", false,-1, 63,0);
        tracep->declBit(c+348,"top exu_step axi_clock", false,-1);
        tracep->declBit(c+349,"top exu_step axi_reset", false,-1);
        tracep->declBus(c+300,"top exu_step axi_io_axi_in_araddr", false,-1, 31,0);
        tracep->declBit(c+158,"top exu_step axi_io_axi_in_arvalid", false,-1);
        tracep->declBit(c+159,"top exu_step axi_io_axi_in_rready", false,-1);
        tracep->declBus(c+300,"top exu_step axi_io_axi_in_awaddr", false,-1, 31,0);
        tracep->declBit(c+160,"top exu_step axi_io_axi_in_awvalid", false,-1);
        tracep->declBus(c+258,"top exu_step axi_io_axi_in_wdata", false,-1, 31,0);
        tracep->declBus(c+281,"top exu_step axi_io_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+160,"top exu_step axi_io_axi_in_wvalid", false,-1);
        tracep->declBit(c+161,"top exu_step axi_io_axi_in_bready", false,-1);
        tracep->declQuad(c+301,"top exu_step axi_io_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+162,"top exu_step axi_io_axi_out_rvalid", false,-1);
        tracep->declBit(c+163,"top exu_step axi_io_axi_out_bvalid", false,-1);
        tracep->declBus(c+303,"top exu_step csr_addr", false,-1, 11,0);
        tracep->declQuad(c+304,"top exu_step src1_value", false,-1, 63,0);
        tracep->declQuad(c+306,"top exu_step src2_value", false,-1, 63,0);
        tracep->declQuad(c+308,"top exu_step add_res", false,-1, 63,0);
        tracep->declQuad(c+310,"top exu_step sub_res", false,-1, 63,0);
        tracep->declQuad(c+312,"top exu_step sra_res", false,-1, 63,0);
        tracep->declQuad(c+314,"top exu_step srl_res", false,-1, 63,0);
        tracep->declArray(c+316,"top exu_step sll_res", false,-1, 126,0);
        tracep->declBus(c+320,"top exu_step sraw_res", false,-1, 31,0);
        tracep->declBus(c+321,"top exu_step srlw_res", false,-1, 31,0);
        tracep->declQuad(c+322,"top exu_step sllw_res", false,-1, 62,0);
        tracep->declQuad(c+324,"top exu_step or_res", false,-1, 63,0);
        tracep->declQuad(c+326,"top exu_step xor_res", false,-1, 63,0);
        tracep->declQuad(c+328,"top exu_step and_res", false,-1, 63,0);
        tracep->declQuad(c+330,"top exu_step mlu_res", false,-1, 63,0);
        tracep->declBus(c+332,"top exu_step mluw_res", false,-1, 31,0);
        tracep->declBus(c+333,"top exu_step divw_res", false,-1, 31,0);
        tracep->declBus(c+334,"top exu_step divuw_res", false,-1, 31,0);
        tracep->declBus(c+335,"top exu_step remw_res", false,-1, 31,0);
        tracep->declBus(c+336,"top exu_step remuw_res", false,-1, 31,0);
        tracep->declArray(c+337,"top exu_step div_res", false,-1, 64,0);
        tracep->declQuad(c+340,"top exu_step divu_res", false,-1, 63,0);
        tracep->declQuad(c+342,"top exu_step rem_res", false,-1, 63,0);
        tracep->declQuad(c+344,"top exu_step remu_res", false,-1, 63,0);
        tracep->declQuad(c+301,"top exu_step mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+259,"top exu_step reg_value", false,-1, 63,0);
        tracep->declQuad(c+261,"top exu_step csr_wdata", false,-1, 63,0);
        tracep->declQuad(c+263,"top exu_step mem_wdate", false,-1, 63,0);
        tracep->declBit(c+158,"top exu_step axi_arvalid", false,-1);
        tracep->declBit(c+159,"top exu_step axi_rready", false,-1);
        tracep->declBit(c+160,"top exu_step axi_awvalid", false,-1);
        tracep->declBit(c+160,"top exu_step axi_wvalid", false,-1);
        tracep->declBit(c+161,"top exu_step axi_bready", false,-1);
        tracep->declQuad(c+80,"top exu_step reg_trace input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+82,"top exu_step reg_trace input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+84,"top exu_step reg_trace input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+86,"top exu_step reg_trace input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+88,"top exu_step reg_trace input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+90,"top exu_step reg_trace input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+92,"top exu_step reg_trace input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+94,"top exu_step reg_trace input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+96,"top exu_step reg_trace input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+98,"top exu_step reg_trace input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+100,"top exu_step reg_trace input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+102,"top exu_step reg_trace input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+104,"top exu_step reg_trace input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+106,"top exu_step reg_trace input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+108,"top exu_step reg_trace input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+110,"top exu_step reg_trace input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+112,"top exu_step reg_trace input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+78,"top exu_step reg_trace input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+114,"top exu_step reg_trace input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+116,"top exu_step reg_trace input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+118,"top exu_step reg_trace input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+120,"top exu_step reg_trace input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+122,"top exu_step reg_trace input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+124,"top exu_step reg_trace input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+126,"top exu_step reg_trace input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+128,"top exu_step reg_trace input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+130,"top exu_step reg_trace input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+132,"top exu_step reg_trace input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+134,"top exu_step reg_trace input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+136,"top exu_step reg_trace input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+138,"top exu_step reg_trace input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+140,"top exu_step reg_trace input_reg_31", false,-1, 63,0);
        tracep->declQuad(c+154,"top exu_step reg_trace csr_reg_0", false,-1, 63,0);
        tracep->declQuad(c+150,"top exu_step reg_trace csr_reg_1", false,-1, 63,0);
        tracep->declQuad(c+156,"top exu_step reg_trace csr_reg_2", false,-1, 63,0);
        tracep->declQuad(c+361,"top exu_step reg_trace csr_reg_3", false,-1, 63,0);
        tracep->declQuad(c+1,"top exu_step reg_trace pc", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+164+i*2,"top exu_step reg_trace traceregs", true,(i+0), 63,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+228+i*2,"top exu_step reg_trace csr_regs", true,(i+0), 63,0);}}
        tracep->declBit(c+348,"top exu_step axi clock", false,-1);
        tracep->declBit(c+349,"top exu_step axi reset", false,-1);
        tracep->declBus(c+300,"top exu_step axi io_axi_in_araddr", false,-1, 31,0);
        tracep->declBit(c+158,"top exu_step axi io_axi_in_arvalid", false,-1);
        tracep->declBit(c+159,"top exu_step axi io_axi_in_rready", false,-1);
        tracep->declBus(c+300,"top exu_step axi io_axi_in_awaddr", false,-1, 31,0);
        tracep->declBit(c+160,"top exu_step axi io_axi_in_awvalid", false,-1);
        tracep->declBus(c+258,"top exu_step axi io_axi_in_wdata", false,-1, 31,0);
        tracep->declBus(c+281,"top exu_step axi io_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+160,"top exu_step axi io_axi_in_wvalid", false,-1);
        tracep->declBit(c+161,"top exu_step axi io_axi_in_bready", false,-1);
        tracep->declQuad(c+301,"top exu_step axi io_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+162,"top exu_step axi io_axi_out_rvalid", false,-1);
        tracep->declBit(c+163,"top exu_step axi io_axi_out_bvalid", false,-1);
        tracep->declQuad(c+346,"top exu_step axi Mem_modle_Raddr", false,-1, 63,0);
        tracep->declQuad(c+301,"top exu_step axi Mem_modle_Rdata", false,-1, 63,0);
        tracep->declQuad(c+346,"top exu_step axi Mem_modle_Waddr", false,-1, 63,0);
        tracep->declQuad(c+265,"top exu_step axi Mem_modle_Wdata", false,-1, 63,0);
        tracep->declBus(c+281,"top exu_step axi Mem_modle_Wmask", false,-1, 7,0);
        tracep->declBit(c+236,"top exu_step axi Mem_modle_Write_en", false,-1);
        tracep->declBit(c+237,"top exu_step axi Mem_modle_Read_en", false,-1);
        tracep->declBit(c+238,"top exu_step axi axi_wready", false,-1);
        tracep->declBit(c+163,"top exu_step axi axi_bvalid", false,-1);
        tracep->declBit(c+239,"top exu_step axi axi_arready", false,-1);
        tracep->declBit(c+162,"top exu_step axi axi_rvalid", false,-1);
        tracep->declBus(c+240,"top exu_step axi state", false,-1, 2,0);
        tracep->declQuad(c+346,"top exu_step axi Mem_modle Raddr", false,-1, 63,0);
        tracep->declQuad(c+346,"top exu_step axi Mem_modle Waddr", false,-1, 63,0);
        tracep->declQuad(c+265,"top exu_step axi Mem_modle Wdata", false,-1, 63,0);
        tracep->declBus(c+281,"top exu_step axi Mem_modle Wmask", false,-1, 7,0);
        tracep->declBit(c+236,"top exu_step axi Mem_modle Write_en", false,-1);
        tracep->declBit(c+237,"top exu_step axi Mem_modle Read_en", false,-1);
        tracep->declQuad(c+301,"top exu_step axi Mem_modle Rdata", false,-1, 63,0);
        tracep->declBus(c+288,"top dpi flag", false,-1, 31,0);
        tracep->declBus(c+289,"top dpi ecall_flag", false,-1, 31,0);
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
    VlWide<4>/*127:0*/ __Vtemp171;
    VlWide<4>/*127:0*/ __Vtemp172;
    VlWide<4>/*127:0*/ __Vtemp173;
    VlWide<3>/*95:0*/ __Vtemp176;
    VlWide<3>/*95:0*/ __Vtemp177;
    VlWide<3>/*95:0*/ __Vtemp179;
    VlWide<3>/*95:0*/ __Vtemp180;
    VlWide<3>/*95:0*/ __Vtemp181;
    VlWide<3>/*95:0*/ __Vtemp182;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__pc_now),64);
        tracep->fullBit(oldp+3,(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rvalid));
        tracep->fullBit(oldp+4,(vlSelf->top__DOT__idu_step__DOT__axi_inst_ready));
        tracep->fullBit(oldp+5,(vlSelf->top__DOT__exu_step_io_inst_valid));
        tracep->fullBit(oldp+6,(vlSelf->top__DOT__npc_step));
        tracep->fullIData(oldp+7,((IData)(vlSelf->top__DOT__pc_now)),32);
        tracep->fullBit(oldp+8,(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_bvalid));
        tracep->fullQData(oldp+9,((QData)((IData)(vlSelf->top__DOT__pc_now))),64);
        tracep->fullBit(oldp+11,(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_wready));
        tracep->fullBit(oldp+12,(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_arready));
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__state),3);
        tracep->fullQData(oldp+14,(vlSelf->top__DOT__exu_step__DOT__Regfile[0]),64);
        tracep->fullQData(oldp+16,(vlSelf->top__DOT__exu_step__DOT__Regfile[1]),64);
        tracep->fullQData(oldp+18,(vlSelf->top__DOT__exu_step__DOT__Regfile[2]),64);
        tracep->fullQData(oldp+20,(vlSelf->top__DOT__exu_step__DOT__Regfile[3]),64);
        tracep->fullQData(oldp+22,(vlSelf->top__DOT__exu_step__DOT__Regfile[4]),64);
        tracep->fullQData(oldp+24,(vlSelf->top__DOT__exu_step__DOT__Regfile[5]),64);
        tracep->fullQData(oldp+26,(vlSelf->top__DOT__exu_step__DOT__Regfile[6]),64);
        tracep->fullQData(oldp+28,(vlSelf->top__DOT__exu_step__DOT__Regfile[7]),64);
        tracep->fullQData(oldp+30,(vlSelf->top__DOT__exu_step__DOT__Regfile[8]),64);
        tracep->fullQData(oldp+32,(vlSelf->top__DOT__exu_step__DOT__Regfile[9]),64);
        tracep->fullQData(oldp+34,(vlSelf->top__DOT__exu_step__DOT__Regfile[10]),64);
        tracep->fullQData(oldp+36,(vlSelf->top__DOT__exu_step__DOT__Regfile[11]),64);
        tracep->fullQData(oldp+38,(vlSelf->top__DOT__exu_step__DOT__Regfile[12]),64);
        tracep->fullQData(oldp+40,(vlSelf->top__DOT__exu_step__DOT__Regfile[13]),64);
        tracep->fullQData(oldp+42,(vlSelf->top__DOT__exu_step__DOT__Regfile[14]),64);
        tracep->fullQData(oldp+44,(vlSelf->top__DOT__exu_step__DOT__Regfile[15]),64);
        tracep->fullQData(oldp+46,(vlSelf->top__DOT__exu_step__DOT__Regfile[16]),64);
        tracep->fullQData(oldp+48,(vlSelf->top__DOT__exu_step__DOT__Regfile[17]),64);
        tracep->fullQData(oldp+50,(vlSelf->top__DOT__exu_step__DOT__Regfile[18]),64);
        tracep->fullQData(oldp+52,(vlSelf->top__DOT__exu_step__DOT__Regfile[19]),64);
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__exu_step__DOT__Regfile[20]),64);
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__exu_step__DOT__Regfile[21]),64);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__exu_step__DOT__Regfile[22]),64);
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__exu_step__DOT__Regfile[23]),64);
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__exu_step__DOT__Regfile[24]),64);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__exu_step__DOT__Regfile[25]),64);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__exu_step__DOT__Regfile[26]),64);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__exu_step__DOT__Regfile[27]),64);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__exu_step__DOT__Regfile[28]),64);
        tracep->fullQData(oldp+72,(vlSelf->top__DOT__exu_step__DOT__Regfile[29]),64);
        tracep->fullQData(oldp+74,(vlSelf->top__DOT__exu_step__DOT__Regfile[30]),64);
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__exu_step__DOT__Regfile[31]),64);
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [0x11U]),64);
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [0U]),64);
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [1U]),64);
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [2U]),64);
        tracep->fullQData(oldp+86,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [3U]),64);
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [4U]),64);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [5U]),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [6U]),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [7U]),64);
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [8U]),64);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                   [9U]),64);
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xaU]),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xbU]),64);
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xcU]),64);
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xdU]),64);
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xeU]),64);
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xfU]),64);
        tracep->fullQData(oldp+112,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x10U]),64);
        tracep->fullQData(oldp+114,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x12U]),64);
        tracep->fullQData(oldp+116,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x13U]),64);
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x14U]),64);
        tracep->fullQData(oldp+120,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x15U]),64);
        tracep->fullQData(oldp+122,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x16U]),64);
        tracep->fullQData(oldp+124,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x17U]),64);
        tracep->fullQData(oldp+126,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x18U]),64);
        tracep->fullQData(oldp+128,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x19U]),64);
        tracep->fullQData(oldp+130,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1aU]),64);
        tracep->fullQData(oldp+132,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1bU]),64);
        tracep->fullQData(oldp+134,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1cU]),64);
        tracep->fullQData(oldp+136,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1dU]),64);
        tracep->fullQData(oldp+138,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1eU]),64);
        tracep->fullQData(oldp+140,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1fU]),64);
        tracep->fullQData(oldp+142,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[0]),64);
        tracep->fullQData(oldp+144,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[1]),64);
        tracep->fullQData(oldp+146,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[2]),64);
        tracep->fullQData(oldp+148,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[3]),64);
        tracep->fullQData(oldp+150,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                    [1U]),64);
        tracep->fullQData(oldp+152,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                    [3U]),64);
        tracep->fullQData(oldp+154,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                    [0U]),64);
        tracep->fullQData(oldp+156,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                    [2U]),64);
        tracep->fullBit(oldp+158,(vlSelf->top__DOT__exu_step__DOT__axi_arvalid));
        tracep->fullBit(oldp+159,(vlSelf->top__DOT__exu_step__DOT__axi_rready));
        tracep->fullBit(oldp+160,(vlSelf->top__DOT__exu_step__DOT__axi_awvalid));
        tracep->fullBit(oldp+161,(vlSelf->top__DOT__exu_step__DOT__axi_bready));
        tracep->fullBit(oldp+162,(vlSelf->top__DOT__exu_step__DOT__axi__DOT__axi_rvalid));
        tracep->fullBit(oldp+163,(vlSelf->top__DOT__exu_step__DOT__axi__DOT__axi_bvalid));
        tracep->fullQData(oldp+164,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0]),64);
        tracep->fullQData(oldp+166,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[1]),64);
        tracep->fullQData(oldp+168,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[2]),64);
        tracep->fullQData(oldp+170,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[3]),64);
        tracep->fullQData(oldp+172,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[4]),64);
        tracep->fullQData(oldp+174,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[5]),64);
        tracep->fullQData(oldp+176,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[6]),64);
        tracep->fullQData(oldp+178,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[7]),64);
        tracep->fullQData(oldp+180,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[8]),64);
        tracep->fullQData(oldp+182,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[9]),64);
        tracep->fullQData(oldp+184,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[10]),64);
        tracep->fullQData(oldp+186,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[11]),64);
        tracep->fullQData(oldp+188,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[12]),64);
        tracep->fullQData(oldp+190,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[13]),64);
        tracep->fullQData(oldp+192,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[14]),64);
        tracep->fullQData(oldp+194,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[15]),64);
        tracep->fullQData(oldp+196,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[16]),64);
        tracep->fullQData(oldp+198,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[17]),64);
        tracep->fullQData(oldp+200,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[18]),64);
        tracep->fullQData(oldp+202,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[19]),64);
        tracep->fullQData(oldp+204,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[20]),64);
        tracep->fullQData(oldp+206,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[21]),64);
        tracep->fullQData(oldp+208,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[22]),64);
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[23]),64);
        tracep->fullQData(oldp+212,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[24]),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[25]),64);
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[26]),64);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[27]),64);
        tracep->fullQData(oldp+220,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[28]),64);
        tracep->fullQData(oldp+222,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[29]),64);
        tracep->fullQData(oldp+224,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[30]),64);
        tracep->fullQData(oldp+226,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[31]),64);
        tracep->fullQData(oldp+228,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[0]),64);
        tracep->fullQData(oldp+230,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[1]),64);
        tracep->fullQData(oldp+232,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[2]),64);
        tracep->fullQData(oldp+234,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[3]),64);
        tracep->fullBit(oldp+236,(((IData)(vlSelf->top__DOT__exu_step__DOT__axi__DOT__axi_wready) 
                                   & (IData)(vlSelf->top__DOT__exu_step__DOT__axi_awvalid))));
        tracep->fullBit(oldp+237,(((IData)(vlSelf->top__DOT__exu_step__DOT__axi__DOT__axi_arready) 
                                   & (IData)(vlSelf->top__DOT__exu_step__DOT__axi_arvalid))));
        tracep->fullBit(oldp+238,(vlSelf->top__DOT__exu_step__DOT__axi__DOT__axi_wready));
        tracep->fullBit(oldp+239,(vlSelf->top__DOT__exu_step__DOT__axi__DOT__axi_arready));
        tracep->fullCData(oldp+240,(vlSelf->top__DOT__exu_step__DOT__axi__DOT__state),3);
        tracep->fullBit(oldp+241,(((IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_arready) 
                                   & (IData)(vlSelf->top__DOT__ifu_step_io_pc_valid))));
        tracep->fullQData(oldp+242,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [(0x1fU & (IData)(
                                                      (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                       >> 0xfU)))]),64);
        tracep->fullQData(oldp+244,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [(0x1fU & (IData)(
                                                      (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                       >> 0x14U)))]),64);
        tracep->fullQData(oldp+246,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [(0x1fU & (IData)(
                                                      (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                       >> 7U)))]),64);
        tracep->fullQData(oldp+248,((((((0x100073U 
                                         != (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata)) 
                                        & (IData)(vlSelf->top__DOT__idu_step__DOT___reg_write_T_37)) 
                                       & (0U != (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                            >> 7U))))) 
                                      & (IData)(vlSelf->top__DOT__exu_step_io_inst_valid))
                                      ? (((QData)((IData)(
                                                          vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U])))
                                      : ((0U == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                            >> 7U))))
                                          ? 0ULL : 
                                         vlSelf->top__DOT__exu_step__DOT__Regfile
                                         [(0x1fU & (IData)(
                                                           (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                            >> 7U)))]))),64);
        tracep->fullQData(oldp+250,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                    [((0x342U == (0xfffU 
                                                  & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                       ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]),64);
        tracep->fullQData(oldp+252,(((IData)(vlSelf->top__DOT__exu_step__DOT___T_7)
                                      ? vlSelf->top__DOT__pc_now
                                      : vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                     [1U])),64);
        tracep->fullQData(oldp+254,(((IData)(vlSelf->top__DOT__exu_step__DOT___T_7)
                                      ? vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [0x11U] : vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                     [3U])),64);
        tracep->fullQData(oldp+256,(((((0x1073U == 
                                        (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata))) 
                                       | ((0x2073U 
                                           == (0x707fU 
                                               & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata))) 
                                          | (0x3073U 
                                             == (0x707fU 
                                                 & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata))))) 
                                      & (IData)(vlSelf->top__DOT__exu_step_io_inst_valid))
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
        tracep->fullIData(oldp+258,((IData)(((0x27U 
                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                              ? (QData)((IData)(
                                                                ((0U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                              >> 0x14U))))
                                                                  ? 0ULL
                                                                  : 
                                                                 vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                 [
                                                                 (0x1fU 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
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
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U))))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                                [
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
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
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U))))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                                [
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U)))])))))
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                 >> 0x14U))))
                                                     ? 0ULL
                                                     : 
                                                    vlSelf->top__DOT__exu_step__DOT__Regfile
                                                    [
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                >> 0x14U)))])
                                                    : 0ULL)))))),32);
        tracep->fullQData(oldp+259,(((0U == (0x1fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                        >> 7U))))
                                      ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [(0x1fU & (IData)(
                                                       (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                        >> 7U)))])),64);
        tracep->fullQData(oldp+261,(((0x47U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
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
        tracep->fullQData(oldp+263,(((0x27U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                      ? (QData)((IData)(
                                                        ((0U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                      >> 0x14U))))
                                                          ? 0ULL
                                                          : 
                                                         vlSelf->top__DOT__exu_step__DOT__Regfile
                                                         [
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                     >> 0x14U)))])))
                                      : ((0x28U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                          ? (QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       ((0U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U))))
                                                                         ? 0ULL
                                                                         : 
                                                                        vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                        [
                                                                        (0x1fU 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
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
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U))))
                                                                             ? 0ULL
                                                                             : 
                                                                            vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                            [
                                                                            (0x1fU 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U)))])))))
                                              : ((7U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                               >> 0x14U))))
                                                   ? 0ULL
                                                   : 
                                                  vlSelf->top__DOT__exu_step__DOT__Regfile
                                                  [
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                              >> 0x14U)))])
                                                  : 0ULL))))),64);
        tracep->fullQData(oldp+265,((QData)((IData)(
                                                    ((0x27U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? (QData)((IData)(
                                                                        ((0U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U))))
                                                                          ? 0ULL
                                                                          : 
                                                                         vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                         [
                                                                         (0x1fU 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
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
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U))))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                                [
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
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
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U))))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                                [
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U)))])))))
                                                        : 
                                                       ((7U 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                         ? 
                                                        ((0U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                      >> 0x14U))))
                                                          ? 0ULL
                                                          : 
                                                         vlSelf->top__DOT__exu_step__DOT__Regfile
                                                         [
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                     >> 0x14U)))])
                                                         : 0ULL))))))),64);
        tracep->fullBit(oldp+267,(vlSelf->top__DOT__ifu_step_io_pc_valid));
        tracep->fullIData(oldp+268,((IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata)),32);
        tracep->fullIData(oldp+269,(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194),32);
        tracep->fullCData(oldp+270,((0x1fU & (IData)(
                                                     (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                      >> 0xfU)))),5);
        tracep->fullCData(oldp+271,((0x1fU & (IData)(
                                                     (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                      >> 0x14U)))),5);
        tracep->fullCData(oldp+272,((0x1fU & (IData)(
                                                     (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                      >> 7U)))),5);
        tracep->fullQData(oldp+273,(vlSelf->top__DOT__idu_step_io_imm),64);
        tracep->fullBit(oldp+275,(((0x100073U != (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata)) 
                                   & (IData)(vlSelf->top__DOT__idu_step__DOT___reg_write_T_37))));
        tracep->fullBit(oldp+276,(((0x1073U == (0x707fU 
                                                & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata))) 
                                   | ((0x2073U == (0x707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata))) 
                                      | (0x3073U == 
                                         (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata)))))));
        tracep->fullBit(oldp+277,(vlSelf->top__DOT__idu_step_io_ctrl_sign_src2_is_imm));
        tracep->fullBit(oldp+278,(vlSelf->top__DOT__idu_step_io_ctrl_sign_src1_is_pc));
        tracep->fullBit(oldp+279,((0x44U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188))));
        tracep->fullBit(oldp+280,(vlSelf->top__DOT__idu_step_io_ctrl_sign_Readmem_en));
        tracep->fullCData(oldp+281,(((0x3023U == (0x707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata)))
                                      ? 0xffU : ((0x1023U 
                                                  == 
                                                  (0x707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata)))
                                                  ? 3U
                                                  : 
                                                 ((0x23U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata)))
                                                   ? 1U
                                                   : 
                                                  ((0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata)))
                                                    ? 0xfU
                                                    : 0U))))),8);
        tracep->fullQData(oldp+282,(vlSelf->top__DOT__exu_step_io_pc_next),64);
        tracep->fullQData(oldp+284,((((QData)((IData)(
                                                      vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U])))),64);
        tracep->fullBit(oldp+286,(vlSelf->top__DOT__exu_step_io_mem_end));
        tracep->fullBit(oldp+287,(vlSelf->top__DOT__exu_step_io_mem_flag));
        tracep->fullIData(oldp+288,((2U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))),32);
        tracep->fullIData(oldp+289,((0x3dU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))),32);
        tracep->fullQData(oldp+290,(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata),64);
        tracep->fullSData(oldp+292,((0xfffU & (IData)(
                                                      (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                       >> 0x14U)))),12);
        tracep->fullIData(oldp+293,(((0x80000U & ((IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                           >> 0x1fU)) 
                                                  << 0x13U)) 
                                     | ((0x7f800U & 
                                         ((IData)((vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                   >> 0xcU)) 
                                          << 0xbU)) 
                                        | ((0x400U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                        >> 0x14U)) 
                                               << 0xaU)) 
                                           | (0x3ffU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                         >> 0x15U))))))),20);
        tracep->fullIData(oldp+294,((0xfffffU & (IData)(
                                                        (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                         >> 0xcU)))),20);
        tracep->fullSData(oldp+295,(((0xfe0U & ((IData)(
                                                        (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                         >> 0x19U)) 
                                                << 5U)) 
                                     | (0x1fU & (IData)(
                                                        (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                         >> 7U))))),12);
        tracep->fullSData(oldp+296,(((0x800U & ((IData)(
                                                        (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                         >> 0x1fU)) 
                                                << 0xbU)) 
                                     | ((0x400U & ((IData)(
                                                           (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                            >> 7U)) 
                                                   << 0xaU)) 
                                        | ((0x3f0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                        >> 0x19U)) 
                                               << 4U)) 
                                           | (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                         >> 8U))))))),12);
        tracep->fullIData(oldp+297,(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188),32);
        tracep->fullBit(oldp+298,(((0x3003U == (0x707fU 
                                                & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata))) 
                                   | ((0x2003U == (0x707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata))) 
                                      | ((0x6003U == 
                                          (0x707fU 
                                           & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata))) 
                                         | ((0x1003U 
                                             == (0x707fU 
                                                 & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata))) 
                                            | ((0x5003U 
                                                == 
                                                (0x707fU 
                                                 & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata))) 
                                               | ((3U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata))) 
                                                  | (0x4003U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata)))))))))));
        tracep->fullCData(oldp+299,(((0x342U == (0xfffU 
                                                 & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                      ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))),2);
        tracep->fullIData(oldp+300,((IData)(vlSelf->top__DOT__exu_step__DOT__add_res)),32);
        tracep->fullQData(oldp+301,(vlSelf->top__DOT__exu_step__DOT__axi__DOT__Mem_modle_Rdata),64);
        tracep->fullSData(oldp+303,((0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm))),12);
        tracep->fullQData(oldp+304,(vlSelf->top__DOT__exu_step__DOT__src1_value),64);
        tracep->fullQData(oldp+306,(vlSelf->top__DOT__exu_step__DOT__src2_value),64);
        tracep->fullQData(oldp+308,(vlSelf->top__DOT__exu_step__DOT__add_res),64);
        tracep->fullQData(oldp+310,(vlSelf->top__DOT__exu_step__DOT__sub_res),64);
        tracep->fullQData(oldp+312,(vlSelf->top__DOT__exu_step__DOT__sra_res),64);
        tracep->fullQData(oldp+314,(vlSelf->top__DOT__exu_step__DOT__srl_res),64);
        tracep->fullWData(oldp+316,(vlSelf->top__DOT__exu_step__DOT__sll_res),127);
        tracep->fullIData(oldp+320,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__exu_step__DOT__src1_value), 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)))),32);
        tracep->fullIData(oldp+321,(vlSelf->top__DOT__exu_step__DOT__srlw_res),32);
        tracep->fullQData(oldp+322,(vlSelf->top__DOT__exu_step__DOT__sllw_res),63);
        tracep->fullQData(oldp+324,(vlSelf->top__DOT__exu_step__DOT__or_res),64);
        tracep->fullQData(oldp+326,(vlSelf->top__DOT__exu_step__DOT__xor_res),64);
        tracep->fullQData(oldp+328,(vlSelf->top__DOT__exu_step__DOT__and_res),64);
        VL_EXTEND_WQ(128,64, __Vtemp171, vlSelf->top__DOT__exu_step__DOT__src1_value);
        VL_EXTEND_WQ(128,64, __Vtemp172, vlSelf->top__DOT__exu_step__DOT__src2_value);
        VL_MUL_W(4, __Vtemp173, __Vtemp171, __Vtemp172);
        tracep->fullQData(oldp+330,((((QData)((IData)(
                                                      __Vtemp173[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp173[0U])))),64);
        tracep->fullIData(oldp+332,((IData)(vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2)),32);
        tracep->fullIData(oldp+333,((IData)(vlSelf->top__DOT__exu_step__DOT___divw_res_T_4)),32);
        tracep->fullIData(oldp+334,(vlSelf->top__DOT__exu_step__DOT__divuw_res),32);
        tracep->fullIData(oldp+335,(vlSelf->top__DOT__exu_step__DOT__remw_res),32);
        tracep->fullIData(oldp+336,(vlSelf->top__DOT__exu_step__DOT__remuw_res),32);
        VL_EXTENDS_WQ(65,64, __Vtemp176, vlSelf->top__DOT__exu_step__DOT__src1_value);
        __Vtemp177[0U] = __Vtemp176[0U];
        __Vtemp177[1U] = __Vtemp176[1U];
        __Vtemp177[2U] = (1U & __Vtemp176[2U]);
        VL_EXTENDS_WQ(65,64, __Vtemp179, vlSelf->top__DOT__exu_step__DOT__src2_value);
        __Vtemp180[0U] = __Vtemp179[0U];
        __Vtemp180[1U] = __Vtemp179[1U];
        __Vtemp180[2U] = (1U & __Vtemp179[2U]);
        VL_DIVS_WWW(65, __Vtemp181, __Vtemp177, __Vtemp180);
        __Vtemp182[0U] = __Vtemp181[0U];
        __Vtemp182[1U] = __Vtemp181[1U];
        __Vtemp182[2U] = (1U & __Vtemp181[2U]);
        tracep->fullWData(oldp+337,(__Vtemp182),65);
        tracep->fullQData(oldp+340,(VL_DIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
        tracep->fullQData(oldp+342,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
        tracep->fullQData(oldp+344,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
        tracep->fullQData(oldp+346,((QData)((IData)(vlSelf->top__DOT__exu_step__DOT__add_res))),64);
        tracep->fullBit(oldp+348,(vlSelf->clock));
        tracep->fullBit(oldp+349,(vlSelf->reset));
        tracep->fullIData(oldp+350,(vlSelf->io_inst),32);
        tracep->fullQData(oldp+351,(vlSelf->io_pc),64);
        tracep->fullQData(oldp+353,(vlSelf->io_pc_next),64);
        tracep->fullQData(oldp+355,(vlSelf->io_outval),64);
        tracep->fullBit(oldp+357,(vlSelf->io_step));
        tracep->fullIData(oldp+358,(0U),32);
        tracep->fullBit(oldp+359,(0U));
        tracep->fullCData(oldp+360,(0U),8);
        tracep->fullQData(oldp+361,(0ULL),64);
        tracep->fullBit(oldp+363,(1U));
        tracep->fullCData(oldp+364,(0x11U),5);
        tracep->fullCData(oldp+365,(0U),5);
        tracep->fullCData(oldp+366,(1U),5);
        tracep->fullCData(oldp+367,(2U),5);
        tracep->fullCData(oldp+368,(3U),5);
        tracep->fullCData(oldp+369,(4U),5);
        tracep->fullCData(oldp+370,(5U),5);
        tracep->fullCData(oldp+371,(6U),5);
        tracep->fullCData(oldp+372,(7U),5);
        tracep->fullCData(oldp+373,(8U),5);
        tracep->fullCData(oldp+374,(9U),5);
        tracep->fullCData(oldp+375,(0xaU),5);
        tracep->fullCData(oldp+376,(0xbU),5);
        tracep->fullCData(oldp+377,(0xcU),5);
        tracep->fullCData(oldp+378,(0xdU),5);
        tracep->fullCData(oldp+379,(0xeU),5);
        tracep->fullCData(oldp+380,(0xfU),5);
        tracep->fullCData(oldp+381,(0x10U),5);
        tracep->fullCData(oldp+382,(0x12U),5);
        tracep->fullCData(oldp+383,(0x13U),5);
        tracep->fullCData(oldp+384,(0x14U),5);
        tracep->fullCData(oldp+385,(0x15U),5);
        tracep->fullCData(oldp+386,(0x16U),5);
        tracep->fullCData(oldp+387,(0x17U),5);
        tracep->fullCData(oldp+388,(0x18U),5);
        tracep->fullCData(oldp+389,(0x19U),5);
        tracep->fullCData(oldp+390,(0x1aU),5);
        tracep->fullCData(oldp+391,(0x1bU),5);
        tracep->fullCData(oldp+392,(0x1cU),5);
        tracep->fullCData(oldp+393,(0x1dU),5);
        tracep->fullCData(oldp+394,(0x1eU),5);
        tracep->fullCData(oldp+395,(0x1fU),5);
        tracep->fullCData(oldp+396,(1U),2);
        tracep->fullCData(oldp+397,(3U),2);
        tracep->fullCData(oldp+398,(0U),2);
        tracep->fullCData(oldp+399,(2U),2);
    }
}
