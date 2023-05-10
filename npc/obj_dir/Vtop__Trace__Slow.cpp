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
        tracep->declBit(c+362,"clock", false,-1);
        tracep->declBit(c+363,"reset", false,-1);
        tracep->declBus(c+364,"io_inst", false,-1, 31,0);
        tracep->declQuad(c+365,"io_pc", false,-1, 63,0);
        tracep->declQuad(c+367,"io_pc_next", false,-1, 63,0);
        tracep->declQuad(c+369,"io_outval", false,-1, 63,0);
        tracep->declBit(c+371,"io_step", false,-1);
        tracep->declBit(c+362,"top clock", false,-1);
        tracep->declBit(c+363,"top reset", false,-1);
        tracep->declBus(c+364,"top io_inst", false,-1, 31,0);
        tracep->declQuad(c+365,"top io_pc", false,-1, 63,0);
        tracep->declQuad(c+367,"top io_pc_next", false,-1, 63,0);
        tracep->declQuad(c+369,"top io_outval", false,-1, 63,0);
        tracep->declBit(c+371,"top io_step", false,-1);
        tracep->declBit(c+362,"top axi_clock", false,-1);
        tracep->declBit(c+363,"top axi_reset", false,-1);
        tracep->declBus(c+253,"top axi_io_axi_in_araddr", false,-1, 31,0);
        tracep->declBit(c+1,"top axi_io_axi_in_arvalid", false,-1);
        tracep->declBit(c+2,"top axi_io_axi_in_rready", false,-1);
        tracep->declBus(c+254,"top axi_io_axi_in_awaddr", false,-1, 31,0);
        tracep->declBit(c+3,"top axi_io_axi_in_awvalid", false,-1);
        tracep->declBus(c+255,"top axi_io_axi_in_wdata", false,-1, 31,0);
        tracep->declBus(c+256,"top axi_io_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+4,"top axi_io_axi_in_wvalid", false,-1);
        tracep->declBit(c+5,"top axi_io_axi_in_bready", false,-1);
        tracep->declBit(c+6,"top axi_io_axi_out_arready", false,-1);
        tracep->declQuad(c+283,"top axi_io_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+7,"top axi_io_axi_out_rvalid", false,-1);
        tracep->declBit(c+8,"top axi_io_axi_out_awready", false,-1);
        tracep->declBit(c+9,"top axi_io_axi_out_wready", false,-1);
        tracep->declBit(c+10,"top axi_io_axi_out_bvalid", false,-1);
        tracep->declBit(c+362,"top lsu_step_clock", false,-1);
        tracep->declBit(c+363,"top lsu_step_reset", false,-1);
        tracep->declBit(c+285,"top lsu_step_io_inst_store", false,-1);
        tracep->declBit(c+286,"top lsu_step_io_inst_load", false,-1);
        tracep->declBus(c+287,"top lsu_step_io_mem_addr", false,-1, 31,0);
        tracep->declQuad(c+288,"top lsu_step_io_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+290,"top lsu_step_io_mem_wstrb", false,-1, 7,0);
        tracep->declQuad(c+291,"top lsu_step_io_mem_rdata", false,-1, 63,0);
        tracep->declBit(c+11,"top lsu_step_io_axi_in_arready", false,-1);
        tracep->declQuad(c+291,"top lsu_step_io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+12,"top lsu_step_io_axi_in_rvalid", false,-1);
        tracep->declBit(c+13,"top lsu_step_io_axi_in_awready", false,-1);
        tracep->declBit(c+14,"top lsu_step_io_axi_in_wready", false,-1);
        tracep->declBit(c+15,"top lsu_step_io_axi_in_bvalid", false,-1);
        tracep->declBus(c+287,"top lsu_step_io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+16,"top lsu_step_io_axi_out_arvalid", false,-1);
        tracep->declBit(c+17,"top lsu_step_io_axi_out_rready", false,-1);
        tracep->declBus(c+287,"top lsu_step_io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBit(c+18,"top lsu_step_io_axi_out_awvalid", false,-1);
        tracep->declBus(c+293,"top lsu_step_io_axi_out_wdata", false,-1, 31,0);
        tracep->declBus(c+290,"top lsu_step_io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+19,"top lsu_step_io_axi_out_wvalid", false,-1);
        tracep->declBit(c+20,"top lsu_step_io_axi_out_bready", false,-1);
        tracep->declBit(c+362,"top arbiter_clock", false,-1);
        tracep->declBit(c+363,"top arbiter_reset", false,-1);
        tracep->declBus(c+21,"top arbiter_io_ifu_axi_in_araddr", false,-1, 31,0);
        tracep->declBit(c+22,"top arbiter_io_ifu_axi_in_arvalid", false,-1);
        tracep->declBit(c+23,"top arbiter_io_ifu_axi_in_rready", false,-1);
        tracep->declQuad(c+294,"top arbiter_io_ifu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+24,"top arbiter_io_ifu_axi_out_rvalid", false,-1);
        tracep->declBus(c+287,"top arbiter_io_lsu_axi_in_araddr", false,-1, 31,0);
        tracep->declBit(c+16,"top arbiter_io_lsu_axi_in_arvalid", false,-1);
        tracep->declBit(c+17,"top arbiter_io_lsu_axi_in_rready", false,-1);
        tracep->declBus(c+287,"top arbiter_io_lsu_axi_in_awaddr", false,-1, 31,0);
        tracep->declBit(c+18,"top arbiter_io_lsu_axi_in_awvalid", false,-1);
        tracep->declBus(c+293,"top arbiter_io_lsu_axi_in_wdata", false,-1, 31,0);
        tracep->declBus(c+290,"top arbiter_io_lsu_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+19,"top arbiter_io_lsu_axi_in_wvalid", false,-1);
        tracep->declBit(c+20,"top arbiter_io_lsu_axi_in_bready", false,-1);
        tracep->declBit(c+11,"top arbiter_io_lsu_axi_out_arready", false,-1);
        tracep->declQuad(c+291,"top arbiter_io_lsu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+12,"top arbiter_io_lsu_axi_out_rvalid", false,-1);
        tracep->declBit(c+13,"top arbiter_io_lsu_axi_out_awready", false,-1);
        tracep->declBit(c+14,"top arbiter_io_lsu_axi_out_wready", false,-1);
        tracep->declBit(c+15,"top arbiter_io_lsu_axi_out_bvalid", false,-1);
        tracep->declBit(c+6,"top arbiter_io_axi_in_arready", false,-1);
        tracep->declQuad(c+283,"top arbiter_io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+7,"top arbiter_io_axi_in_rvalid", false,-1);
        tracep->declBit(c+8,"top arbiter_io_axi_in_awready", false,-1);
        tracep->declBit(c+9,"top arbiter_io_axi_in_wready", false,-1);
        tracep->declBit(c+10,"top arbiter_io_axi_in_bvalid", false,-1);
        tracep->declBus(c+253,"top arbiter_io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+1,"top arbiter_io_axi_out_arvalid", false,-1);
        tracep->declBit(c+2,"top arbiter_io_axi_out_rready", false,-1);
        tracep->declBus(c+254,"top arbiter_io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBit(c+3,"top arbiter_io_axi_out_awvalid", false,-1);
        tracep->declBus(c+255,"top arbiter_io_axi_out_wdata", false,-1, 31,0);
        tracep->declBus(c+256,"top arbiter_io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+4,"top arbiter_io_axi_out_wvalid", false,-1);
        tracep->declBit(c+5,"top arbiter_io_axi_out_bready", false,-1);
        tracep->declBit(c+362,"top ifu_step_clock", false,-1);
        tracep->declBit(c+363,"top ifu_step_reset", false,-1);
        tracep->declQuad(c+25,"top ifu_step_io_pc", false,-1, 63,0);
        tracep->declBit(c+22,"top ifu_step_io_pc_valid", false,-1);
        tracep->declBit(c+24,"top ifu_step_io_inst_valid", false,-1);
        tracep->declBus(c+296,"top ifu_step_io_inst", false,-1, 31,0);
        tracep->declBus(c+27,"top ifu_step_io_inst_reg", false,-1, 31,0);
        tracep->declQuad(c+294,"top ifu_step_io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+24,"top ifu_step_io_axi_in_rvalid", false,-1);
        tracep->declBus(c+21,"top ifu_step_io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+22,"top ifu_step_io_axi_out_arvalid", false,-1);
        tracep->declBit(c+23,"top ifu_step_io_axi_out_rready", false,-1);
        tracep->declBus(c+297,"top idu_step_io_inst", false,-1, 31,0);
        tracep->declBus(c+298,"top idu_step_io_inst_now", false,-1, 31,0);
        tracep->declBus(c+299,"top idu_step_io_rs1", false,-1, 4,0);
        tracep->declBus(c+300,"top idu_step_io_rs2", false,-1, 4,0);
        tracep->declBus(c+301,"top idu_step_io_rd", false,-1, 4,0);
        tracep->declQuad(c+302,"top idu_step_io_imm", false,-1, 63,0);
        tracep->declBit(c+304,"top idu_step_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+305,"top idu_step_io_ctrl_sign_csr_write", false,-1);
        tracep->declBit(c+306,"top idu_step_io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+307,"top idu_step_io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declBit(c+285,"top idu_step_io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+286,"top idu_step_io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+290,"top idu_step_io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBit(c+362,"top exu_step_clock", false,-1);
        tracep->declBit(c+363,"top exu_step_reset", false,-1);
        tracep->declQuad(c+25,"top exu_step_io_pc", false,-1, 63,0);
        tracep->declQuad(c+28,"top exu_step_io_pc_next", false,-1, 63,0);
        tracep->declBus(c+298,"top exu_step_io_inst_now", false,-1, 31,0);
        tracep->declBus(c+299,"top exu_step_io_rs1", false,-1, 4,0);
        tracep->declBus(c+300,"top exu_step_io_rs2", false,-1, 4,0);
        tracep->declBus(c+301,"top exu_step_io_rd", false,-1, 4,0);
        tracep->declQuad(c+302,"top exu_step_io_imm", false,-1, 63,0);
        tracep->declBit(c+304,"top exu_step_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+305,"top exu_step_io_ctrl_sign_csr_write", false,-1);
        tracep->declBit(c+306,"top exu_step_io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+307,"top exu_step_io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declBit(c+285,"top exu_step_io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+286,"top exu_step_io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+290,"top exu_step_io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declQuad(c+308,"top exu_step_io_res2rd", false,-1, 63,0);
        tracep->declBit(c+24,"top exu_step_io_inst_valid", false,-1);
        tracep->declBit(c+285,"top exu_step_io_inst_store", false,-1);
        tracep->declBit(c+286,"top exu_step_io_inst_load", false,-1);
        tracep->declBus(c+287,"top exu_step_io_Mem_addr", false,-1, 31,0);
        tracep->declQuad(c+291,"top exu_step_io_Mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+288,"top exu_step_io_Mem_wdata", false,-1, 63,0);
        tracep->declBus(c+290,"top exu_step_io_Mem_wstrb", false,-1, 7,0);
        tracep->declBus(c+310,"top dpi_flag", false,-1, 31,0);
        tracep->declBus(c+311,"top dpi_ecall_flag", false,-1, 31,0);
        tracep->declQuad(c+25,"top pc_now", false,-1, 63,0);
        tracep->declBit(c+30,"top execute_end", false,-1);
        tracep->declBit(c+22,"top pc_valid", false,-1);
        tracep->declBit(c+31,"top diff_step", false,-1);
        tracep->declBit(c+362,"top axi clock", false,-1);
        tracep->declBit(c+363,"top axi reset", false,-1);
        tracep->declBus(c+253,"top axi io_axi_in_araddr", false,-1, 31,0);
        tracep->declBit(c+1,"top axi io_axi_in_arvalid", false,-1);
        tracep->declBit(c+2,"top axi io_axi_in_rready", false,-1);
        tracep->declBus(c+254,"top axi io_axi_in_awaddr", false,-1, 31,0);
        tracep->declBit(c+3,"top axi io_axi_in_awvalid", false,-1);
        tracep->declBus(c+255,"top axi io_axi_in_wdata", false,-1, 31,0);
        tracep->declBus(c+256,"top axi io_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+4,"top axi io_axi_in_wvalid", false,-1);
        tracep->declBit(c+5,"top axi io_axi_in_bready", false,-1);
        tracep->declBit(c+6,"top axi io_axi_out_arready", false,-1);
        tracep->declQuad(c+283,"top axi io_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+7,"top axi io_axi_out_rvalid", false,-1);
        tracep->declBit(c+8,"top axi io_axi_out_awready", false,-1);
        tracep->declBit(c+9,"top axi io_axi_out_wready", false,-1);
        tracep->declBit(c+10,"top axi io_axi_out_bvalid", false,-1);
        tracep->declQuad(c+257,"top axi Mem_modle_Raddr", false,-1, 63,0);
        tracep->declQuad(c+283,"top axi Mem_modle_Rdata", false,-1, 63,0);
        tracep->declQuad(c+259,"top axi Mem_modle_Waddr", false,-1, 63,0);
        tracep->declQuad(c+261,"top axi Mem_modle_Wdata", false,-1, 63,0);
        tracep->declBus(c+256,"top axi Mem_modle_Wmask", false,-1, 7,0);
        tracep->declBit(c+32,"top axi Mem_modle_Write_en", false,-1);
        tracep->declBit(c+33,"top axi Mem_modle_Read_en", false,-1);
        tracep->declBit(c+8,"top axi axi_awready", false,-1);
        tracep->declBit(c+9,"top axi axi_wready", false,-1);
        tracep->declBit(c+10,"top axi axi_bvalid", false,-1);
        tracep->declBit(c+6,"top axi axi_arready", false,-1);
        tracep->declBit(c+7,"top axi axi_rvalid", false,-1);
        tracep->declBus(c+34,"top axi state", false,-1, 2,0);
        tracep->declQuad(c+257,"top axi Mem_modle Raddr", false,-1, 63,0);
        tracep->declQuad(c+259,"top axi Mem_modle Waddr", false,-1, 63,0);
        tracep->declQuad(c+261,"top axi Mem_modle Wdata", false,-1, 63,0);
        tracep->declBus(c+256,"top axi Mem_modle Wmask", false,-1, 7,0);
        tracep->declBit(c+32,"top axi Mem_modle Write_en", false,-1);
        tracep->declBit(c+33,"top axi Mem_modle Read_en", false,-1);
        tracep->declQuad(c+283,"top axi Mem_modle Rdata", false,-1, 63,0);
        tracep->declBit(c+362,"top lsu_step clock", false,-1);
        tracep->declBit(c+363,"top lsu_step reset", false,-1);
        tracep->declBit(c+285,"top lsu_step io_inst_store", false,-1);
        tracep->declBit(c+286,"top lsu_step io_inst_load", false,-1);
        tracep->declBus(c+287,"top lsu_step io_mem_addr", false,-1, 31,0);
        tracep->declQuad(c+288,"top lsu_step io_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+290,"top lsu_step io_mem_wstrb", false,-1, 7,0);
        tracep->declQuad(c+291,"top lsu_step io_mem_rdata", false,-1, 63,0);
        tracep->declBit(c+11,"top lsu_step io_axi_in_arready", false,-1);
        tracep->declQuad(c+291,"top lsu_step io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+12,"top lsu_step io_axi_in_rvalid", false,-1);
        tracep->declBit(c+13,"top lsu_step io_axi_in_awready", false,-1);
        tracep->declBit(c+14,"top lsu_step io_axi_in_wready", false,-1);
        tracep->declBit(c+15,"top lsu_step io_axi_in_bvalid", false,-1);
        tracep->declBus(c+287,"top lsu_step io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+16,"top lsu_step io_axi_out_arvalid", false,-1);
        tracep->declBit(c+17,"top lsu_step io_axi_out_rready", false,-1);
        tracep->declBus(c+287,"top lsu_step io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBit(c+18,"top lsu_step io_axi_out_awvalid", false,-1);
        tracep->declBus(c+293,"top lsu_step io_axi_out_wdata", false,-1, 31,0);
        tracep->declBus(c+290,"top lsu_step io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+19,"top lsu_step io_axi_out_wvalid", false,-1);
        tracep->declBit(c+20,"top lsu_step io_axi_out_bready", false,-1);
        tracep->declBit(c+16,"top lsu_step axi_arvalid", false,-1);
        tracep->declBit(c+17,"top lsu_step axi_rready", false,-1);
        tracep->declBit(c+18,"top lsu_step axi_awvalid", false,-1);
        tracep->declBit(c+19,"top lsu_step axi_wvalid", false,-1);
        tracep->declBit(c+20,"top lsu_step axi_bready", false,-1);
        tracep->declBus(c+35,"top lsu_step state", false,-1, 1,0);
        tracep->declBit(c+362,"top arbiter clock", false,-1);
        tracep->declBit(c+363,"top arbiter reset", false,-1);
        tracep->declBus(c+21,"top arbiter io_ifu_axi_in_araddr", false,-1, 31,0);
        tracep->declBit(c+22,"top arbiter io_ifu_axi_in_arvalid", false,-1);
        tracep->declBit(c+23,"top arbiter io_ifu_axi_in_rready", false,-1);
        tracep->declQuad(c+294,"top arbiter io_ifu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+24,"top arbiter io_ifu_axi_out_rvalid", false,-1);
        tracep->declBus(c+287,"top arbiter io_lsu_axi_in_araddr", false,-1, 31,0);
        tracep->declBit(c+16,"top arbiter io_lsu_axi_in_arvalid", false,-1);
        tracep->declBit(c+17,"top arbiter io_lsu_axi_in_rready", false,-1);
        tracep->declBus(c+287,"top arbiter io_lsu_axi_in_awaddr", false,-1, 31,0);
        tracep->declBit(c+18,"top arbiter io_lsu_axi_in_awvalid", false,-1);
        tracep->declBus(c+293,"top arbiter io_lsu_axi_in_wdata", false,-1, 31,0);
        tracep->declBus(c+290,"top arbiter io_lsu_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+19,"top arbiter io_lsu_axi_in_wvalid", false,-1);
        tracep->declBit(c+20,"top arbiter io_lsu_axi_in_bready", false,-1);
        tracep->declBit(c+11,"top arbiter io_lsu_axi_out_arready", false,-1);
        tracep->declQuad(c+291,"top arbiter io_lsu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+12,"top arbiter io_lsu_axi_out_rvalid", false,-1);
        tracep->declBit(c+13,"top arbiter io_lsu_axi_out_awready", false,-1);
        tracep->declBit(c+14,"top arbiter io_lsu_axi_out_wready", false,-1);
        tracep->declBit(c+15,"top arbiter io_lsu_axi_out_bvalid", false,-1);
        tracep->declBit(c+6,"top arbiter io_axi_in_arready", false,-1);
        tracep->declQuad(c+283,"top arbiter io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+7,"top arbiter io_axi_in_rvalid", false,-1);
        tracep->declBit(c+8,"top arbiter io_axi_in_awready", false,-1);
        tracep->declBit(c+9,"top arbiter io_axi_in_wready", false,-1);
        tracep->declBit(c+10,"top arbiter io_axi_in_bvalid", false,-1);
        tracep->declBus(c+253,"top arbiter io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+1,"top arbiter io_axi_out_arvalid", false,-1);
        tracep->declBit(c+2,"top arbiter io_axi_out_rready", false,-1);
        tracep->declBus(c+254,"top arbiter io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBit(c+3,"top arbiter io_axi_out_awvalid", false,-1);
        tracep->declBus(c+255,"top arbiter io_axi_out_wdata", false,-1, 31,0);
        tracep->declBus(c+256,"top arbiter io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+4,"top arbiter io_axi_out_wvalid", false,-1);
        tracep->declBit(c+5,"top arbiter io_axi_out_bready", false,-1);
        tracep->declBus(c+36,"top arbiter state", false,-1, 1,0);
        tracep->declBit(c+362,"top ifu_step clock", false,-1);
        tracep->declBit(c+363,"top ifu_step reset", false,-1);
        tracep->declQuad(c+25,"top ifu_step io_pc", false,-1, 63,0);
        tracep->declBit(c+22,"top ifu_step io_pc_valid", false,-1);
        tracep->declBit(c+24,"top ifu_step io_inst_valid", false,-1);
        tracep->declBus(c+296,"top ifu_step io_inst", false,-1, 31,0);
        tracep->declBus(c+27,"top ifu_step io_inst_reg", false,-1, 31,0);
        tracep->declQuad(c+294,"top ifu_step io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+24,"top ifu_step io_axi_in_rvalid", false,-1);
        tracep->declBus(c+21,"top ifu_step io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+22,"top ifu_step io_axi_out_arvalid", false,-1);
        tracep->declBit(c+23,"top ifu_step io_axi_out_rready", false,-1);
        tracep->declBit(c+23,"top ifu_step inst_ready", false,-1);
        tracep->declBus(c+27,"top ifu_step inst_reg", false,-1, 31,0);
        tracep->declBus(c+297,"top idu_step io_inst", false,-1, 31,0);
        tracep->declBus(c+298,"top idu_step io_inst_now", false,-1, 31,0);
        tracep->declBus(c+299,"top idu_step io_rs1", false,-1, 4,0);
        tracep->declBus(c+300,"top idu_step io_rs2", false,-1, 4,0);
        tracep->declBus(c+301,"top idu_step io_rd", false,-1, 4,0);
        tracep->declQuad(c+302,"top idu_step io_imm", false,-1, 63,0);
        tracep->declBit(c+304,"top idu_step io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+305,"top idu_step io_ctrl_sign_csr_write", false,-1);
        tracep->declBit(c+306,"top idu_step io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+307,"top idu_step io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declBit(c+285,"top idu_step io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+286,"top idu_step io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+290,"top idu_step io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBus(c+301,"top idu_step rd", false,-1, 4,0);
        tracep->declBus(c+312,"top idu_step imm_imm", false,-1, 11,0);
        tracep->declBus(c+313,"top idu_step imm_imm_1", false,-1, 19,0);
        tracep->declBus(c+314,"top idu_step imm_imm_2", false,-1, 19,0);
        tracep->declBus(c+315,"top idu_step imm_imm_3", false,-1, 11,0);
        tracep->declBus(c+316,"top idu_step imm_imm_4", false,-1, 11,0);
        tracep->declBus(c+317,"top idu_step inst_type", false,-1, 31,0);
        tracep->declBit(c+362,"top exu_step clock", false,-1);
        tracep->declBit(c+363,"top exu_step reset", false,-1);
        tracep->declQuad(c+25,"top exu_step io_pc", false,-1, 63,0);
        tracep->declQuad(c+28,"top exu_step io_pc_next", false,-1, 63,0);
        tracep->declBus(c+298,"top exu_step io_inst_now", false,-1, 31,0);
        tracep->declBus(c+299,"top exu_step io_rs1", false,-1, 4,0);
        tracep->declBus(c+300,"top exu_step io_rs2", false,-1, 4,0);
        tracep->declBus(c+301,"top exu_step io_rd", false,-1, 4,0);
        tracep->declQuad(c+302,"top exu_step io_imm", false,-1, 63,0);
        tracep->declBit(c+304,"top exu_step io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+305,"top exu_step io_ctrl_sign_csr_write", false,-1);
        tracep->declBit(c+306,"top exu_step io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+307,"top exu_step io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declBit(c+285,"top exu_step io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+286,"top exu_step io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+290,"top exu_step io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declQuad(c+308,"top exu_step io_res2rd", false,-1, 63,0);
        tracep->declBit(c+24,"top exu_step io_inst_valid", false,-1);
        tracep->declBit(c+285,"top exu_step io_inst_store", false,-1);
        tracep->declBit(c+286,"top exu_step io_inst_load", false,-1);
        tracep->declBus(c+287,"top exu_step io_Mem_addr", false,-1, 31,0);
        tracep->declQuad(c+291,"top exu_step io_Mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+288,"top exu_step io_Mem_wdata", false,-1, 63,0);
        tracep->declBus(c+290,"top exu_step io_Mem_wstrb", false,-1, 7,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+37+i*2,"top exu_step Regfile", true,(i+0), 63,0);}}
        tracep->declBit(c+372,"top exu_step Regfile_src1_value_MPORT_en", false,-1);
        tracep->declBus(c+299,"top exu_step Regfile_src1_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+263,"top exu_step Regfile_src1_value_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_src2_value_MPORT_en", false,-1);
        tracep->declBus(c+300,"top exu_step Regfile_src2_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+265,"top exu_step Regfile_src2_value_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_value_MPORT_en", false,-1);
        tracep->declBus(c+301,"top exu_step Regfile_reg_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+267,"top exu_step Regfile_reg_value_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_MPORT_4_en", false,-1);
        tracep->declBus(c+373,"top exu_step Regfile_MPORT_4_addr", false,-1, 4,0);
        tracep->declQuad(c+101,"top exu_step Regfile_MPORT_4_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_j_pc_MPORT_en", false,-1);
        tracep->declBus(c+299,"top exu_step Regfile_j_pc_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+263,"top exu_step Regfile_j_pc_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_j_pc_MPORT_1_en", false,-1);
        tracep->declBus(c+300,"top exu_step Regfile_j_pc_MPORT_1_addr", false,-1, 4,0);
        tracep->declQuad(c+265,"top exu_step Regfile_j_pc_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_j_pc_MPORT_2_en", false,-1);
        tracep->declBus(c+299,"top exu_step Regfile_j_pc_MPORT_2_addr", false,-1, 4,0);
        tracep->declQuad(c+263,"top exu_step Regfile_j_pc_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_j_pc_MPORT_3_en", false,-1);
        tracep->declBus(c+300,"top exu_step Regfile_j_pc_MPORT_3_addr", false,-1, 4,0);
        tracep->declQuad(c+265,"top exu_step Regfile_j_pc_MPORT_3_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_j_pc_MPORT_4_en", false,-1);
        tracep->declBus(c+299,"top exu_step Regfile_j_pc_MPORT_4_addr", false,-1, 4,0);
        tracep->declQuad(c+263,"top exu_step Regfile_j_pc_MPORT_4_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_j_pc_MPORT_5_en", false,-1);
        tracep->declBus(c+300,"top exu_step Regfile_j_pc_MPORT_5_addr", false,-1, 4,0);
        tracep->declQuad(c+265,"top exu_step Regfile_j_pc_MPORT_5_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_j_pc_MPORT_6_en", false,-1);
        tracep->declBus(c+299,"top exu_step Regfile_j_pc_MPORT_6_addr", false,-1, 4,0);
        tracep->declQuad(c+263,"top exu_step Regfile_j_pc_MPORT_6_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_j_pc_MPORT_7_en", false,-1);
        tracep->declBus(c+300,"top exu_step Regfile_j_pc_MPORT_7_addr", false,-1, 4,0);
        tracep->declQuad(c+265,"top exu_step Regfile_j_pc_MPORT_7_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_j_pc_MPORT_8_en", false,-1);
        tracep->declBus(c+299,"top exu_step Regfile_j_pc_MPORT_8_addr", false,-1, 4,0);
        tracep->declQuad(c+263,"top exu_step Regfile_j_pc_MPORT_8_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_j_pc_MPORT_9_en", false,-1);
        tracep->declBus(c+300,"top exu_step Regfile_j_pc_MPORT_9_addr", false,-1, 4,0);
        tracep->declQuad(c+265,"top exu_step Regfile_j_pc_MPORT_9_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_j_pc_MPORT_10_en", false,-1);
        tracep->declBus(c+299,"top exu_step Regfile_j_pc_MPORT_10_addr", false,-1, 4,0);
        tracep->declQuad(c+263,"top exu_step Regfile_j_pc_MPORT_10_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_j_pc_MPORT_11_en", false,-1);
        tracep->declBus(c+300,"top exu_step Regfile_j_pc_MPORT_11_addr", false,-1, 4,0);
        tracep->declQuad(c+265,"top exu_step Regfile_j_pc_MPORT_11_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_0_MPORT_en", false,-1);
        tracep->declBus(c+374,"top exu_step Regfile_reg_trace_io_input_reg_0_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+103,"top exu_step Regfile_reg_trace_io_input_reg_0_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_1_MPORT_en", false,-1);
        tracep->declBus(c+375,"top exu_step Regfile_reg_trace_io_input_reg_1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+105,"top exu_step Regfile_reg_trace_io_input_reg_1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_2_MPORT_en", false,-1);
        tracep->declBus(c+376,"top exu_step Regfile_reg_trace_io_input_reg_2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+107,"top exu_step Regfile_reg_trace_io_input_reg_2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_3_MPORT_en", false,-1);
        tracep->declBus(c+377,"top exu_step Regfile_reg_trace_io_input_reg_3_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+109,"top exu_step Regfile_reg_trace_io_input_reg_3_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_4_MPORT_en", false,-1);
        tracep->declBus(c+378,"top exu_step Regfile_reg_trace_io_input_reg_4_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+111,"top exu_step Regfile_reg_trace_io_input_reg_4_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_5_MPORT_en", false,-1);
        tracep->declBus(c+379,"top exu_step Regfile_reg_trace_io_input_reg_5_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+113,"top exu_step Regfile_reg_trace_io_input_reg_5_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_6_MPORT_en", false,-1);
        tracep->declBus(c+380,"top exu_step Regfile_reg_trace_io_input_reg_6_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+115,"top exu_step Regfile_reg_trace_io_input_reg_6_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_7_MPORT_en", false,-1);
        tracep->declBus(c+381,"top exu_step Regfile_reg_trace_io_input_reg_7_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+117,"top exu_step Regfile_reg_trace_io_input_reg_7_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_8_MPORT_en", false,-1);
        tracep->declBus(c+382,"top exu_step Regfile_reg_trace_io_input_reg_8_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+119,"top exu_step Regfile_reg_trace_io_input_reg_8_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_9_MPORT_en", false,-1);
        tracep->declBus(c+383,"top exu_step Regfile_reg_trace_io_input_reg_9_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+121,"top exu_step Regfile_reg_trace_io_input_reg_9_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_10_MPORT_en", false,-1);
        tracep->declBus(c+384,"top exu_step Regfile_reg_trace_io_input_reg_10_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+123,"top exu_step Regfile_reg_trace_io_input_reg_10_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_11_MPORT_en", false,-1);
        tracep->declBus(c+385,"top exu_step Regfile_reg_trace_io_input_reg_11_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+125,"top exu_step Regfile_reg_trace_io_input_reg_11_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_12_MPORT_en", false,-1);
        tracep->declBus(c+386,"top exu_step Regfile_reg_trace_io_input_reg_12_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+127,"top exu_step Regfile_reg_trace_io_input_reg_12_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_13_MPORT_en", false,-1);
        tracep->declBus(c+387,"top exu_step Regfile_reg_trace_io_input_reg_13_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+129,"top exu_step Regfile_reg_trace_io_input_reg_13_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_14_MPORT_en", false,-1);
        tracep->declBus(c+388,"top exu_step Regfile_reg_trace_io_input_reg_14_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+131,"top exu_step Regfile_reg_trace_io_input_reg_14_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_15_MPORT_en", false,-1);
        tracep->declBus(c+389,"top exu_step Regfile_reg_trace_io_input_reg_15_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+133,"top exu_step Regfile_reg_trace_io_input_reg_15_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_16_MPORT_en", false,-1);
        tracep->declBus(c+390,"top exu_step Regfile_reg_trace_io_input_reg_16_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+135,"top exu_step Regfile_reg_trace_io_input_reg_16_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_17_MPORT_en", false,-1);
        tracep->declBus(c+373,"top exu_step Regfile_reg_trace_io_input_reg_17_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+101,"top exu_step Regfile_reg_trace_io_input_reg_17_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_18_MPORT_en", false,-1);
        tracep->declBus(c+391,"top exu_step Regfile_reg_trace_io_input_reg_18_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+137,"top exu_step Regfile_reg_trace_io_input_reg_18_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_19_MPORT_en", false,-1);
        tracep->declBus(c+392,"top exu_step Regfile_reg_trace_io_input_reg_19_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+139,"top exu_step Regfile_reg_trace_io_input_reg_19_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_20_MPORT_en", false,-1);
        tracep->declBus(c+393,"top exu_step Regfile_reg_trace_io_input_reg_20_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+141,"top exu_step Regfile_reg_trace_io_input_reg_20_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_21_MPORT_en", false,-1);
        tracep->declBus(c+394,"top exu_step Regfile_reg_trace_io_input_reg_21_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+143,"top exu_step Regfile_reg_trace_io_input_reg_21_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_22_MPORT_en", false,-1);
        tracep->declBus(c+395,"top exu_step Regfile_reg_trace_io_input_reg_22_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+145,"top exu_step Regfile_reg_trace_io_input_reg_22_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_23_MPORT_en", false,-1);
        tracep->declBus(c+396,"top exu_step Regfile_reg_trace_io_input_reg_23_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+147,"top exu_step Regfile_reg_trace_io_input_reg_23_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_24_MPORT_en", false,-1);
        tracep->declBus(c+397,"top exu_step Regfile_reg_trace_io_input_reg_24_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+149,"top exu_step Regfile_reg_trace_io_input_reg_24_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_25_MPORT_en", false,-1);
        tracep->declBus(c+398,"top exu_step Regfile_reg_trace_io_input_reg_25_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+151,"top exu_step Regfile_reg_trace_io_input_reg_25_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_26_MPORT_en", false,-1);
        tracep->declBus(c+399,"top exu_step Regfile_reg_trace_io_input_reg_26_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+153,"top exu_step Regfile_reg_trace_io_input_reg_26_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_27_MPORT_en", false,-1);
        tracep->declBus(c+400,"top exu_step Regfile_reg_trace_io_input_reg_27_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+155,"top exu_step Regfile_reg_trace_io_input_reg_27_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_28_MPORT_en", false,-1);
        tracep->declBus(c+401,"top exu_step Regfile_reg_trace_io_input_reg_28_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+157,"top exu_step Regfile_reg_trace_io_input_reg_28_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_29_MPORT_en", false,-1);
        tracep->declBus(c+402,"top exu_step Regfile_reg_trace_io_input_reg_29_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+159,"top exu_step Regfile_reg_trace_io_input_reg_29_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_30_MPORT_en", false,-1);
        tracep->declBus(c+403,"top exu_step Regfile_reg_trace_io_input_reg_30_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+161,"top exu_step Regfile_reg_trace_io_input_reg_30_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_reg_trace_io_input_reg_31_MPORT_en", false,-1);
        tracep->declBus(c+404,"top exu_step Regfile_reg_trace_io_input_reg_31_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+163,"top exu_step Regfile_reg_trace_io_input_reg_31_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_mem_wdata_MPORT_en", false,-1);
        tracep->declBus(c+300,"top exu_step Regfile_mem_wdata_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+265,"top exu_step Regfile_mem_wdata_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_mem_wdata_MPORT_1_en", false,-1);
        tracep->declBus(c+300,"top exu_step Regfile_mem_wdata_MPORT_1_addr", false,-1, 4,0);
        tracep->declQuad(c+265,"top exu_step Regfile_mem_wdata_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_mem_wdata_MPORT_2_en", false,-1);
        tracep->declBus(c+300,"top exu_step Regfile_mem_wdata_MPORT_2_addr", false,-1, 4,0);
        tracep->declQuad(c+265,"top exu_step Regfile_mem_wdata_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step Regfile_mem_wdata_MPORT_3_en", false,-1);
        tracep->declBus(c+300,"top exu_step Regfile_mem_wdata_MPORT_3_addr", false,-1, 4,0);
        tracep->declQuad(c+265,"top exu_step Regfile_mem_wdata_MPORT_3_data", false,-1, 63,0);
        tracep->declQuad(c+269,"top exu_step Regfile_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+301,"top exu_step Regfile_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+372,"top exu_step Regfile_MPORT_mask", false,-1);
        tracep->declBit(c+372,"top exu_step Regfile_MPORT_en", false,-1);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+165+i*2,"top exu_step CSR_Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+372,"top exu_step CSR_Reg_io_res2rd_MPORT_en", false,-1);
        tracep->declBus(c+318,"top exu_step CSR_Reg_io_res2rd_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+271,"top exu_step CSR_Reg_io_res2rd_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step CSR_Reg_io_res2rd_MPORT_1_en", false,-1);
        tracep->declBus(c+318,"top exu_step CSR_Reg_io_res2rd_MPORT_1_addr", false,-1, 1,0);
        tracep->declQuad(c+271,"top exu_step CSR_Reg_io_res2rd_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step CSR_Reg_io_res2rd_MPORT_2_en", false,-1);
        tracep->declBus(c+318,"top exu_step CSR_Reg_io_res2rd_MPORT_2_addr", false,-1, 1,0);
        tracep->declQuad(c+271,"top exu_step CSR_Reg_io_res2rd_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step CSR_Reg_csr_wdata_MPORT_en", false,-1);
        tracep->declBus(c+318,"top exu_step CSR_Reg_csr_wdata_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+271,"top exu_step CSR_Reg_csr_wdata_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step CSR_Reg_csr_wdata_MPORT_1_en", false,-1);
        tracep->declBus(c+318,"top exu_step CSR_Reg_csr_wdata_MPORT_1_addr", false,-1, 1,0);
        tracep->declQuad(c+271,"top exu_step CSR_Reg_csr_wdata_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step CSR_Reg_MPORT_2_en", false,-1);
        tracep->declBus(c+405,"top exu_step CSR_Reg_MPORT_2_addr", false,-1, 1,0);
        tracep->declQuad(c+173,"top exu_step CSR_Reg_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step CSR_Reg_MPORT_5_en", false,-1);
        tracep->declBus(c+406,"top exu_step CSR_Reg_MPORT_5_addr", false,-1, 1,0);
        tracep->declQuad(c+175,"top exu_step CSR_Reg_MPORT_5_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step CSR_Reg_MPORT_7_en", false,-1);
        tracep->declBus(c+318,"top exu_step CSR_Reg_MPORT_7_addr", false,-1, 1,0);
        tracep->declQuad(c+271,"top exu_step CSR_Reg_MPORT_7_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step CSR_Reg_j_pc_MPORT_12_en", false,-1);
        tracep->declBus(c+407,"top exu_step CSR_Reg_j_pc_MPORT_12_addr", false,-1, 1,0);
        tracep->declQuad(c+177,"top exu_step CSR_Reg_j_pc_MPORT_12_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step CSR_Reg_j_pc_MPORT_13_en", false,-1);
        tracep->declBus(c+405,"top exu_step CSR_Reg_j_pc_MPORT_13_addr", false,-1, 1,0);
        tracep->declQuad(c+173,"top exu_step CSR_Reg_j_pc_MPORT_13_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step CSR_Reg_reg_trace_io_csr_reg_0_MPORT_en", false,-1);
        tracep->declBus(c+407,"top exu_step CSR_Reg_reg_trace_io_csr_reg_0_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+177,"top exu_step CSR_Reg_reg_trace_io_csr_reg_0_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step CSR_Reg_reg_trace_io_csr_reg_1_MPORT_en", false,-1);
        tracep->declBus(c+405,"top exu_step CSR_Reg_reg_trace_io_csr_reg_1_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+173,"top exu_step CSR_Reg_reg_trace_io_csr_reg_1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+372,"top exu_step CSR_Reg_reg_trace_io_csr_reg_2_MPORT_en", false,-1);
        tracep->declBus(c+408,"top exu_step CSR_Reg_reg_trace_io_csr_reg_2_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+179,"top exu_step CSR_Reg_reg_trace_io_csr_reg_2_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+273,"top exu_step CSR_Reg_MPORT_1_data", false,-1, 63,0);
        tracep->declBus(c+405,"top exu_step CSR_Reg_MPORT_1_addr", false,-1, 1,0);
        tracep->declBit(c+372,"top exu_step CSR_Reg_MPORT_1_mask", false,-1);
        tracep->declBit(c+372,"top exu_step CSR_Reg_MPORT_1_en", false,-1);
        tracep->declQuad(c+275,"top exu_step CSR_Reg_MPORT_3_data", false,-1, 63,0);
        tracep->declBus(c+406,"top exu_step CSR_Reg_MPORT_3_addr", false,-1, 1,0);
        tracep->declBit(c+372,"top exu_step CSR_Reg_MPORT_3_mask", false,-1);
        tracep->declBit(c+372,"top exu_step CSR_Reg_MPORT_3_en", false,-1);
        tracep->declQuad(c+277,"top exu_step CSR_Reg_MPORT_6_data", false,-1, 63,0);
        tracep->declBus(c+318,"top exu_step CSR_Reg_MPORT_6_addr", false,-1, 1,0);
        tracep->declBit(c+372,"top exu_step CSR_Reg_MPORT_6_mask", false,-1);
        tracep->declBit(c+372,"top exu_step CSR_Reg_MPORT_6_en", false,-1);
        tracep->declQuad(c+103,"top exu_step reg_trace_input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+105,"top exu_step reg_trace_input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+107,"top exu_step reg_trace_input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+109,"top exu_step reg_trace_input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+111,"top exu_step reg_trace_input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+113,"top exu_step reg_trace_input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+115,"top exu_step reg_trace_input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+117,"top exu_step reg_trace_input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+119,"top exu_step reg_trace_input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+121,"top exu_step reg_trace_input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+123,"top exu_step reg_trace_input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+125,"top exu_step reg_trace_input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+127,"top exu_step reg_trace_input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+129,"top exu_step reg_trace_input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+131,"top exu_step reg_trace_input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+133,"top exu_step reg_trace_input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+135,"top exu_step reg_trace_input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+101,"top exu_step reg_trace_input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+137,"top exu_step reg_trace_input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+139,"top exu_step reg_trace_input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+141,"top exu_step reg_trace_input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+143,"top exu_step reg_trace_input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+145,"top exu_step reg_trace_input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+147,"top exu_step reg_trace_input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+149,"top exu_step reg_trace_input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+151,"top exu_step reg_trace_input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+153,"top exu_step reg_trace_input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+155,"top exu_step reg_trace_input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+157,"top exu_step reg_trace_input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+159,"top exu_step reg_trace_input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+161,"top exu_step reg_trace_input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+163,"top exu_step reg_trace_input_reg_31", false,-1, 63,0);
        tracep->declQuad(c+177,"top exu_step reg_trace_csr_reg_0", false,-1, 63,0);
        tracep->declQuad(c+173,"top exu_step reg_trace_csr_reg_1", false,-1, 63,0);
        tracep->declQuad(c+179,"top exu_step reg_trace_csr_reg_2", false,-1, 63,0);
        tracep->declQuad(c+409,"top exu_step reg_trace_csr_reg_3", false,-1, 63,0);
        tracep->declQuad(c+25,"top exu_step reg_trace_pc", false,-1, 63,0);
        tracep->declBus(c+319,"top exu_step csr_addr", false,-1, 11,0);
        tracep->declQuad(c+320,"top exu_step src1_value", false,-1, 63,0);
        tracep->declQuad(c+322,"top exu_step src2_value", false,-1, 63,0);
        tracep->declQuad(c+324,"top exu_step add_res", false,-1, 63,0);
        tracep->declQuad(c+326,"top exu_step sub_res", false,-1, 63,0);
        tracep->declQuad(c+328,"top exu_step sra_res", false,-1, 63,0);
        tracep->declQuad(c+330,"top exu_step srl_res", false,-1, 63,0);
        tracep->declArray(c+332,"top exu_step sll_res", false,-1, 126,0);
        tracep->declBus(c+336,"top exu_step sraw_res", false,-1, 31,0);
        tracep->declBus(c+337,"top exu_step srlw_res", false,-1, 31,0);
        tracep->declQuad(c+338,"top exu_step sllw_res", false,-1, 62,0);
        tracep->declQuad(c+340,"top exu_step or_res", false,-1, 63,0);
        tracep->declQuad(c+342,"top exu_step xor_res", false,-1, 63,0);
        tracep->declQuad(c+344,"top exu_step and_res", false,-1, 63,0);
        tracep->declQuad(c+346,"top exu_step mlu_res", false,-1, 63,0);
        tracep->declBus(c+348,"top exu_step mluw_res", false,-1, 31,0);
        tracep->declBus(c+349,"top exu_step divw_res", false,-1, 31,0);
        tracep->declBus(c+350,"top exu_step divuw_res", false,-1, 31,0);
        tracep->declBus(c+351,"top exu_step remw_res", false,-1, 31,0);
        tracep->declBus(c+352,"top exu_step remuw_res", false,-1, 31,0);
        tracep->declArray(c+353,"top exu_step div_res", false,-1, 64,0);
        tracep->declQuad(c+356,"top exu_step divu_res", false,-1, 63,0);
        tracep->declQuad(c+358,"top exu_step rem_res", false,-1, 63,0);
        tracep->declQuad(c+360,"top exu_step remu_res", false,-1, 63,0);
        tracep->declQuad(c+279,"top exu_step reg_value", false,-1, 63,0);
        tracep->declQuad(c+281,"top exu_step csr_wdata", false,-1, 63,0);
        tracep->declQuad(c+28,"top exu_step pc_next", false,-1, 63,0);
        tracep->declQuad(c+103,"top exu_step reg_trace input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+105,"top exu_step reg_trace input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+107,"top exu_step reg_trace input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+109,"top exu_step reg_trace input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+111,"top exu_step reg_trace input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+113,"top exu_step reg_trace input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+115,"top exu_step reg_trace input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+117,"top exu_step reg_trace input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+119,"top exu_step reg_trace input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+121,"top exu_step reg_trace input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+123,"top exu_step reg_trace input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+125,"top exu_step reg_trace input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+127,"top exu_step reg_trace input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+129,"top exu_step reg_trace input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+131,"top exu_step reg_trace input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+133,"top exu_step reg_trace input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+135,"top exu_step reg_trace input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+101,"top exu_step reg_trace input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+137,"top exu_step reg_trace input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+139,"top exu_step reg_trace input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+141,"top exu_step reg_trace input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+143,"top exu_step reg_trace input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+145,"top exu_step reg_trace input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+147,"top exu_step reg_trace input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+149,"top exu_step reg_trace input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+151,"top exu_step reg_trace input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+153,"top exu_step reg_trace input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+155,"top exu_step reg_trace input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+157,"top exu_step reg_trace input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+159,"top exu_step reg_trace input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+161,"top exu_step reg_trace input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+163,"top exu_step reg_trace input_reg_31", false,-1, 63,0);
        tracep->declQuad(c+177,"top exu_step reg_trace csr_reg_0", false,-1, 63,0);
        tracep->declQuad(c+173,"top exu_step reg_trace csr_reg_1", false,-1, 63,0);
        tracep->declQuad(c+179,"top exu_step reg_trace csr_reg_2", false,-1, 63,0);
        tracep->declQuad(c+409,"top exu_step reg_trace csr_reg_3", false,-1, 63,0);
        tracep->declQuad(c+25,"top exu_step reg_trace pc", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+181+i*2,"top exu_step reg_trace traceregs", true,(i+0), 63,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+245+i*2,"top exu_step reg_trace csr_regs", true,(i+0), 63,0);}}
        tracep->declBus(c+310,"top dpi flag", false,-1, 31,0);
        tracep->declBus(c+311,"top dpi ecall_flag", false,-1, 31,0);
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
        tracep->fullBit(oldp+1,(vlSelf->top__DOT__arbiter_io_axi_out_arvalid));
        tracep->fullBit(oldp+2,(vlSelf->top__DOT__arbiter_io_axi_out_rready));
        tracep->fullBit(oldp+3,(vlSelf->top__DOT__arbiter_io_axi_out_awvalid));
        tracep->fullBit(oldp+4,(vlSelf->top__DOT__arbiter_io_axi_out_wvalid));
        tracep->fullBit(oldp+5,(vlSelf->top__DOT__arbiter_io_axi_out_bready));
        tracep->fullBit(oldp+6,(vlSelf->top__DOT__axi__DOT__axi_arready));
        tracep->fullBit(oldp+7,(vlSelf->top__DOT__axi__DOT__axi_rvalid));
        tracep->fullBit(oldp+8,(vlSelf->top__DOT__axi__DOT__axi_awready));
        tracep->fullBit(oldp+9,(vlSelf->top__DOT__axi__DOT__axi_wready));
        tracep->fullBit(oldp+10,(vlSelf->top__DOT__axi__DOT__axi_bvalid));
        tracep->fullBit(oldp+11,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                   ? ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_awvalid)
                                       ? (IData)(vlSelf->top__DOT__axi__DOT__axi_arready)
                                       : ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_arvalid) 
                                          & (IData)(vlSelf->top__DOT__axi__DOT__axi_arready)))
                                   : ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                      & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                          ? (IData)(vlSelf->top__DOT__axi__DOT__axi_arready)
                                          : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                             & (IData)(vlSelf->top__DOT__axi__DOT__axi_arready)))))));
        tracep->fullBit(oldp+12,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid));
        tracep->fullBit(oldp+13,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                   ? ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_awvalid)
                                       ? (IData)(vlSelf->top__DOT__axi__DOT__axi_awready)
                                       : ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_arvalid) 
                                          & (IData)(vlSelf->top__DOT__axi__DOT__axi_awready)))
                                   : ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                      & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                          ? (IData)(vlSelf->top__DOT__axi__DOT__axi_awready)
                                          : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                             & (IData)(vlSelf->top__DOT__axi__DOT__axi_awready)))))));
        tracep->fullBit(oldp+14,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                   ? ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_awvalid)
                                       ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                       : ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_arvalid) 
                                          & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))
                                   : ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                      & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                          ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                          : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                             & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))))));
        tracep->fullBit(oldp+15,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid));
        tracep->fullBit(oldp+16,(vlSelf->top__DOT__lsu_step__DOT__axi_arvalid));
        tracep->fullBit(oldp+17,(vlSelf->top__DOT__lsu_step__DOT__axi_rready));
        tracep->fullBit(oldp+18,(vlSelf->top__DOT__lsu_step__DOT__axi_awvalid));
        tracep->fullBit(oldp+19,(vlSelf->top__DOT__lsu_step__DOT__axi_wvalid));
        tracep->fullBit(oldp+20,(vlSelf->top__DOT__lsu_step__DOT__axi_bready));
        tracep->fullIData(oldp+21,((IData)(vlSelf->top__DOT__pc_now)),32);
        tracep->fullBit(oldp+22,(vlSelf->top__DOT__pc_valid));
        tracep->fullBit(oldp+23,(vlSelf->top__DOT__ifu_step__DOT__inst_ready));
        tracep->fullBit(oldp+24,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid));
        tracep->fullQData(oldp+25,(vlSelf->top__DOT__pc_now),64);
        tracep->fullIData(oldp+27,(vlSelf->top__DOT__ifu_step__DOT__inst_reg),32);
        tracep->fullQData(oldp+28,(vlSelf->top__DOT__exu_step__DOT__pc_next),64);
        tracep->fullBit(oldp+30,(vlSelf->top__DOT__execute_end));
        tracep->fullBit(oldp+31,(vlSelf->top__DOT__diff_step));
        tracep->fullBit(oldp+32,(((IData)(vlSelf->top__DOT__axi__DOT__axi_wready) 
                                  & (IData)(vlSelf->top__DOT__arbiter_io_axi_out_wvalid))));
        tracep->fullBit(oldp+33,(((IData)(vlSelf->top__DOT__axi__DOT__axi_arready) 
                                  & (IData)(vlSelf->top__DOT__arbiter_io_axi_out_arvalid))));
        tracep->fullCData(oldp+34,(vlSelf->top__DOT__axi__DOT__state),3);
        tracep->fullCData(oldp+35,(vlSelf->top__DOT__lsu_step__DOT__state),2);
        tracep->fullCData(oldp+36,(vlSelf->top__DOT__arbiter__DOT__state),2);
        tracep->fullQData(oldp+37,(vlSelf->top__DOT__exu_step__DOT__Regfile[0]),64);
        tracep->fullQData(oldp+39,(vlSelf->top__DOT__exu_step__DOT__Regfile[1]),64);
        tracep->fullQData(oldp+41,(vlSelf->top__DOT__exu_step__DOT__Regfile[2]),64);
        tracep->fullQData(oldp+43,(vlSelf->top__DOT__exu_step__DOT__Regfile[3]),64);
        tracep->fullQData(oldp+45,(vlSelf->top__DOT__exu_step__DOT__Regfile[4]),64);
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__exu_step__DOT__Regfile[5]),64);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__exu_step__DOT__Regfile[6]),64);
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__exu_step__DOT__Regfile[7]),64);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__exu_step__DOT__Regfile[8]),64);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__exu_step__DOT__Regfile[9]),64);
        tracep->fullQData(oldp+57,(vlSelf->top__DOT__exu_step__DOT__Regfile[10]),64);
        tracep->fullQData(oldp+59,(vlSelf->top__DOT__exu_step__DOT__Regfile[11]),64);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__exu_step__DOT__Regfile[12]),64);
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__exu_step__DOT__Regfile[13]),64);
        tracep->fullQData(oldp+65,(vlSelf->top__DOT__exu_step__DOT__Regfile[14]),64);
        tracep->fullQData(oldp+67,(vlSelf->top__DOT__exu_step__DOT__Regfile[15]),64);
        tracep->fullQData(oldp+69,(vlSelf->top__DOT__exu_step__DOT__Regfile[16]),64);
        tracep->fullQData(oldp+71,(vlSelf->top__DOT__exu_step__DOT__Regfile[17]),64);
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__exu_step__DOT__Regfile[18]),64);
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__exu_step__DOT__Regfile[19]),64);
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__exu_step__DOT__Regfile[20]),64);
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__exu_step__DOT__Regfile[21]),64);
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__exu_step__DOT__Regfile[22]),64);
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__exu_step__DOT__Regfile[23]),64);
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__exu_step__DOT__Regfile[24]),64);
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__exu_step__DOT__Regfile[25]),64);
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__exu_step__DOT__Regfile[26]),64);
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__exu_step__DOT__Regfile[27]),64);
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__exu_step__DOT__Regfile[28]),64);
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__exu_step__DOT__Regfile[29]),64);
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__exu_step__DOT__Regfile[30]),64);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__exu_step__DOT__Regfile[31]),64);
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x11U]),64);
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0U]),64);
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [1U]),64);
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [2U]),64);
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [3U]),64);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [4U]),64);
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [5U]),64);
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [6U]),64);
        tracep->fullQData(oldp+117,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [7U]),64);
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [8U]),64);
        tracep->fullQData(oldp+121,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [9U]),64);
        tracep->fullQData(oldp+123,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xaU]),64);
        tracep->fullQData(oldp+125,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xbU]),64);
        tracep->fullQData(oldp+127,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xcU]),64);
        tracep->fullQData(oldp+129,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xdU]),64);
        tracep->fullQData(oldp+131,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xeU]),64);
        tracep->fullQData(oldp+133,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0xfU]),64);
        tracep->fullQData(oldp+135,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x10U]),64);
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x12U]),64);
        tracep->fullQData(oldp+139,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x13U]),64);
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x14U]),64);
        tracep->fullQData(oldp+143,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x15U]),64);
        tracep->fullQData(oldp+145,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x16U]),64);
        tracep->fullQData(oldp+147,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x17U]),64);
        tracep->fullQData(oldp+149,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x18U]),64);
        tracep->fullQData(oldp+151,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x19U]),64);
        tracep->fullQData(oldp+153,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1aU]),64);
        tracep->fullQData(oldp+155,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1bU]),64);
        tracep->fullQData(oldp+157,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1cU]),64);
        tracep->fullQData(oldp+159,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1dU]),64);
        tracep->fullQData(oldp+161,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1eU]),64);
        tracep->fullQData(oldp+163,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [0x1fU]),64);
        tracep->fullQData(oldp+165,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[0]),64);
        tracep->fullQData(oldp+167,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[1]),64);
        tracep->fullQData(oldp+169,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[2]),64);
        tracep->fullQData(oldp+171,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[3]),64);
        tracep->fullQData(oldp+173,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                    [1U]),64);
        tracep->fullQData(oldp+175,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                    [3U]),64);
        tracep->fullQData(oldp+177,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                    [0U]),64);
        tracep->fullQData(oldp+179,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                    [2U]),64);
        tracep->fullQData(oldp+181,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0]),64);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[1]),64);
        tracep->fullQData(oldp+185,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[2]),64);
        tracep->fullQData(oldp+187,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[3]),64);
        tracep->fullQData(oldp+189,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[4]),64);
        tracep->fullQData(oldp+191,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[5]),64);
        tracep->fullQData(oldp+193,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[6]),64);
        tracep->fullQData(oldp+195,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[7]),64);
        tracep->fullQData(oldp+197,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[8]),64);
        tracep->fullQData(oldp+199,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[9]),64);
        tracep->fullQData(oldp+201,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[10]),64);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[11]),64);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[12]),64);
        tracep->fullQData(oldp+207,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[13]),64);
        tracep->fullQData(oldp+209,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[14]),64);
        tracep->fullQData(oldp+211,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[15]),64);
        tracep->fullQData(oldp+213,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[16]),64);
        tracep->fullQData(oldp+215,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[17]),64);
        tracep->fullQData(oldp+217,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[18]),64);
        tracep->fullQData(oldp+219,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[19]),64);
        tracep->fullQData(oldp+221,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[20]),64);
        tracep->fullQData(oldp+223,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[21]),64);
        tracep->fullQData(oldp+225,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[22]),64);
        tracep->fullQData(oldp+227,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[23]),64);
        tracep->fullQData(oldp+229,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[24]),64);
        tracep->fullQData(oldp+231,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[25]),64);
        tracep->fullQData(oldp+233,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[26]),64);
        tracep->fullQData(oldp+235,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[27]),64);
        tracep->fullQData(oldp+237,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[28]),64);
        tracep->fullQData(oldp+239,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[29]),64);
        tracep->fullQData(oldp+241,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[30]),64);
        tracep->fullQData(oldp+243,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[31]),64);
        tracep->fullQData(oldp+245,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[0]),64);
        tracep->fullQData(oldp+247,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[1]),64);
        tracep->fullQData(oldp+249,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[2]),64);
        tracep->fullQData(oldp+251,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[3]),64);
        tracep->fullIData(oldp+253,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                      ? ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_awvalid)
                                          ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                          : ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_arvalid)
                                              ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                              : ((IData)(vlSelf->top__DOT__pc_valid)
                                                  ? (IData)(vlSelf->top__DOT__pc_now)
                                                  : 0U)))
                                      : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                          ? (IData)(vlSelf->top__DOT__pc_now)
                                          : ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                              ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                                  : 0U))))),32);
        tracep->fullIData(oldp+254,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                      ? ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_awvalid)
                                          ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                          : ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_arvalid)
                                              ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                              : 0U))
                                      : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                          ? 0U : ((2U 
                                                   == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                                    : 0U))))),32);
        tracep->fullIData(oldp+255,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                      ? ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_awvalid)
                                          ? (IData)(vlSelf->top__DOT__exu_step_io_Mem_wdata)
                                          : ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_arvalid)
                                              ? (IData)(vlSelf->top__DOT__exu_step_io_Mem_wdata)
                                              : 0U))
                                      : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                          ? 0U : ((2U 
                                                   == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__exu_step_io_Mem_wdata)
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__exu_step_io_Mem_wdata)
                                                    : 0U))))),32);
        tracep->fullCData(oldp+256,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                      ? ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_awvalid)
                                          ? (IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_Wmask)
                                          : ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_arvalid)
                                              ? (IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_Wmask)
                                              : 0U))
                                      : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                          ? 0U : ((2U 
                                                   == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_Wmask)
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_Wmask)
                                                    : 0U))))),8);
        tracep->fullQData(oldp+257,((QData)((IData)(
                                                    ((0U 
                                                      == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_awvalid)
                                                       ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_arvalid)
                                                        ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__pc_valid)
                                                         ? (IData)(vlSelf->top__DOT__pc_now)
                                                         : 0U)))
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                       ? (IData)(vlSelf->top__DOT__pc_now)
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                        ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                         ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                                         : 0U))))))),64);
        tracep->fullQData(oldp+259,((QData)((IData)(
                                                    ((0U 
                                                      == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_awvalid)
                                                       ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_arvalid)
                                                        ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                                        : 0U))
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                        ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                         ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                                         : 0U))))))),64);
        tracep->fullQData(oldp+261,((QData)((IData)(
                                                    ((0U 
                                                      == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_awvalid)
                                                       ? (IData)(vlSelf->top__DOT__exu_step_io_Mem_wdata)
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_arvalid)
                                                        ? (IData)(vlSelf->top__DOT__exu_step_io_Mem_wdata)
                                                        : 0U))
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                        ? (IData)(vlSelf->top__DOT__exu_step_io_Mem_wdata)
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                         ? (IData)(vlSelf->top__DOT__exu_step_io_Mem_wdata)
                                                         : 0U))))))),64);
        tracep->fullQData(oldp+263,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [(0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+265,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [(0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                               >> 0x14U))]),64);
        tracep->fullQData(oldp+267,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                    [(0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                               >> 7U))]),64);
        tracep->fullQData(oldp+269,((((((0x100073U 
                                         != vlSelf->top__DOT__idu_step_io_inst) 
                                        & ((0x3023U 
                                            != (0x707fU 
                                                & vlSelf->top__DOT__idu_step_io_inst)) 
                                           & ((0x1023U 
                                               != (0x707fU 
                                                   & vlSelf->top__DOT__idu_step_io_inst)) 
                                              & ((0x23U 
                                                  != 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__idu_step_io_inst)) 
                                                 & ((0x2023U 
                                                     != 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__idu_step_io_inst)) 
                                                    & ((0x1063U 
                                                        != 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__idu_step_io_inst)) 
                                                       & ((0x63U 
                                                           != 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__idu_step_io_inst)) 
                                                          & ((0x5063U 
                                                              != 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__idu_step_io_inst)) 
                                                             & ((0x4063U 
                                                                 != 
                                                                 (0x707fU 
                                                                  & vlSelf->top__DOT__idu_step_io_inst)) 
                                                                & ((0x6063U 
                                                                    != 
                                                                    (0x707fU 
                                                                     & vlSelf->top__DOT__idu_step_io_inst)) 
                                                                   & ((0x7063U 
                                                                       != 
                                                                       (0x707fU 
                                                                        & vlSelf->top__DOT__idu_step_io_inst)) 
                                                                      & ((0x73U 
                                                                          != vlSelf->top__DOT__idu_step_io_inst) 
                                                                         & (0x30200073U 
                                                                            != vlSelf->top__DOT__idu_step_io_inst))))))))))))) 
                                       & (0U != (0x1fU 
                                                 & (vlSelf->top__DOT__idu_step_io_inst 
                                                    >> 7U)))) 
                                      & (IData)(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid))
                                      ? (((QData)((IData)(
                                                          vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U])))
                                      : ((0U == (0x1fU 
                                                 & (vlSelf->top__DOT__idu_step_io_inst 
                                                    >> 7U)))
                                          ? 0ULL : 
                                         vlSelf->top__DOT__exu_step__DOT__Regfile
                                         [(0x1fU & 
                                           (vlSelf->top__DOT__idu_step_io_inst 
                                            >> 7U))]))),64);
        tracep->fullQData(oldp+271,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                    [((0x342U == (0xfffU 
                                                  & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                       ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]),64);
        tracep->fullQData(oldp+273,(((IData)(vlSelf->top__DOT__exu_step__DOT___T_5)
                                      ? vlSelf->top__DOT__pc_now
                                      : vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                     [1U])),64);
        tracep->fullQData(oldp+275,(((IData)(vlSelf->top__DOT__exu_step__DOT___T_5)
                                      ? vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [0x11U] : vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                     [3U])),64);
        tracep->fullQData(oldp+277,(((((0x1073U == 
                                        (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                                       | ((0x2073U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__idu_step_io_inst)) 
                                          | (0x3073U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__idu_step_io_inst)))) 
                                      & (IData)(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid))
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
        tracep->fullQData(oldp+279,(((0U == (0x1fU 
                                             & (vlSelf->top__DOT__idu_step_io_inst 
                                                >> 7U)))
                                      ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [(0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                                >> 7U))])),64);
        tracep->fullQData(oldp+281,(((0x47U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
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
        tracep->fullQData(oldp+283,(vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata),64);
        tracep->fullBit(oldp+285,((0x44U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188))));
        tracep->fullBit(oldp+286,(vlSelf->top__DOT__idu_step_io_ctrl_sign_Readmem_en));
        tracep->fullIData(oldp+287,((IData)(vlSelf->top__DOT__exu_step__DOT__add_res)),32);
        tracep->fullQData(oldp+288,(vlSelf->top__DOT__exu_step_io_Mem_wdata),64);
        tracep->fullCData(oldp+290,(vlSelf->top__DOT__idu_step_io_ctrl_sign_Wmask),8);
        tracep->fullQData(oldp+291,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata),64);
        tracep->fullIData(oldp+293,((IData)(vlSelf->top__DOT__exu_step_io_Mem_wdata)),32);
        tracep->fullQData(oldp+294,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata),64);
        tracep->fullIData(oldp+296,((IData)(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata)),32);
        tracep->fullIData(oldp+297,(vlSelf->top__DOT__idu_step_io_inst),32);
        tracep->fullIData(oldp+298,(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194),32);
        tracep->fullCData(oldp+299,((0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+300,((0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+301,((0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                              >> 7U))),5);
        tracep->fullQData(oldp+302,(vlSelf->top__DOT__idu_step_io_imm),64);
        tracep->fullBit(oldp+304,(((0x100073U != vlSelf->top__DOT__idu_step_io_inst) 
                                   & ((0x3023U != (0x707fU 
                                                   & vlSelf->top__DOT__idu_step_io_inst)) 
                                      & ((0x1023U != 
                                          (0x707fU 
                                           & vlSelf->top__DOT__idu_step_io_inst)) 
                                         & ((0x23U 
                                             != (0x707fU 
                                                 & vlSelf->top__DOT__idu_step_io_inst)) 
                                            & ((0x2023U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__idu_step_io_inst)) 
                                               & ((0x1063U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__idu_step_io_inst)) 
                                                  & ((0x63U 
                                                      != 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__idu_step_io_inst)) 
                                                     & ((0x5063U 
                                                         != 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__idu_step_io_inst)) 
                                                        & ((0x4063U 
                                                            != 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__idu_step_io_inst)) 
                                                           & ((0x6063U 
                                                               != 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__idu_step_io_inst)) 
                                                              & ((0x7063U 
                                                                  != 
                                                                  (0x707fU 
                                                                   & vlSelf->top__DOT__idu_step_io_inst)) 
                                                                 & ((0x73U 
                                                                     != vlSelf->top__DOT__idu_step_io_inst) 
                                                                    & (0x30200073U 
                                                                       != vlSelf->top__DOT__idu_step_io_inst)))))))))))))));
        tracep->fullBit(oldp+305,(((0x1073U == (0x707fU 
                                                & vlSelf->top__DOT__idu_step_io_inst)) 
                                   | ((0x2073U == (0x707fU 
                                                   & vlSelf->top__DOT__idu_step_io_inst)) 
                                      | (0x3073U == 
                                         (0x707fU & vlSelf->top__DOT__idu_step_io_inst))))));
        tracep->fullBit(oldp+306,(vlSelf->top__DOT__idu_step_io_ctrl_sign_src2_is_imm));
        tracep->fullBit(oldp+307,(vlSelf->top__DOT__idu_step_io_ctrl_sign_src1_is_pc));
        tracep->fullQData(oldp+308,((((QData)((IData)(
                                                      vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U])))),64);
        tracep->fullIData(oldp+310,((2U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))),32);
        tracep->fullIData(oldp+311,((0x3dU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))),32);
        tracep->fullSData(oldp+312,((vlSelf->top__DOT__idu_step_io_inst 
                                     >> 0x14U)),12);
        tracep->fullIData(oldp+313,(((0x80000U & (vlSelf->top__DOT__idu_step_io_inst 
                                                  >> 0xcU)) 
                                     | ((0x7f800U & 
                                         (vlSelf->top__DOT__idu_step_io_inst 
                                          >> 1U)) | 
                                        ((0x400U & 
                                          (vlSelf->top__DOT__idu_step_io_inst 
                                           >> 0xaU)) 
                                         | (0x3ffU 
                                            & (vlSelf->top__DOT__idu_step_io_inst 
                                               >> 0x15U)))))),20);
        tracep->fullIData(oldp+314,((vlSelf->top__DOT__idu_step_io_inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+315,(((0xfe0U & (vlSelf->top__DOT__idu_step_io_inst 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                                 >> 7U)))),12);
        tracep->fullSData(oldp+316,(((0x800U & (vlSelf->top__DOT__idu_step_io_inst 
                                                >> 0x14U)) 
                                     | ((0x400U & (vlSelf->top__DOT__idu_step_io_inst 
                                                   << 3U)) 
                                        | ((0x3f0U 
                                            & (vlSelf->top__DOT__idu_step_io_inst 
                                               >> 0x15U)) 
                                           | (0xfU 
                                              & (vlSelf->top__DOT__idu_step_io_inst 
                                                 >> 8U)))))),12);
        tracep->fullIData(oldp+317,(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188),32);
        tracep->fullCData(oldp+318,(((0x342U == (0xfffU 
                                                 & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                      ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))),2);
        tracep->fullSData(oldp+319,((0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm))),12);
        tracep->fullQData(oldp+320,(vlSelf->top__DOT__exu_step__DOT__src1_value),64);
        tracep->fullQData(oldp+322,(vlSelf->top__DOT__exu_step__DOT__src2_value),64);
        tracep->fullQData(oldp+324,(vlSelf->top__DOT__exu_step__DOT__add_res),64);
        tracep->fullQData(oldp+326,(vlSelf->top__DOT__exu_step__DOT__sub_res),64);
        tracep->fullQData(oldp+328,(vlSelf->top__DOT__exu_step__DOT__sra_res),64);
        tracep->fullQData(oldp+330,(vlSelf->top__DOT__exu_step__DOT__srl_res),64);
        tracep->fullWData(oldp+332,(vlSelf->top__DOT__exu_step__DOT__sll_res),127);
        tracep->fullIData(oldp+336,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__exu_step__DOT__src1_value), 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)))),32);
        tracep->fullIData(oldp+337,(vlSelf->top__DOT__exu_step__DOT__srlw_res),32);
        tracep->fullQData(oldp+338,(vlSelf->top__DOT__exu_step__DOT__sllw_res),63);
        tracep->fullQData(oldp+340,(vlSelf->top__DOT__exu_step__DOT__or_res),64);
        tracep->fullQData(oldp+342,(vlSelf->top__DOT__exu_step__DOT__xor_res),64);
        tracep->fullQData(oldp+344,(vlSelf->top__DOT__exu_step__DOT__and_res),64);
        VL_EXTEND_WQ(128,64, __Vtemp169, vlSelf->top__DOT__exu_step__DOT__src1_value);
        VL_EXTEND_WQ(128,64, __Vtemp170, vlSelf->top__DOT__exu_step__DOT__src2_value);
        VL_MUL_W(4, __Vtemp171, __Vtemp169, __Vtemp170);
        tracep->fullQData(oldp+346,((((QData)((IData)(
                                                      __Vtemp171[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp171[0U])))),64);
        tracep->fullIData(oldp+348,((IData)(vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2)),32);
        tracep->fullIData(oldp+349,((IData)(vlSelf->top__DOT__exu_step__DOT___divw_res_T_4)),32);
        tracep->fullIData(oldp+350,(vlSelf->top__DOT__exu_step__DOT__divuw_res),32);
        tracep->fullIData(oldp+351,(vlSelf->top__DOT__exu_step__DOT__remw_res),32);
        tracep->fullIData(oldp+352,(vlSelf->top__DOT__exu_step__DOT__remuw_res),32);
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
        tracep->fullWData(oldp+353,(__Vtemp180),65);
        tracep->fullQData(oldp+356,(VL_DIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
        tracep->fullQData(oldp+358,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
        tracep->fullQData(oldp+360,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
        tracep->fullBit(oldp+362,(vlSelf->clock));
        tracep->fullBit(oldp+363,(vlSelf->reset));
        tracep->fullIData(oldp+364,(vlSelf->io_inst),32);
        tracep->fullQData(oldp+365,(vlSelf->io_pc),64);
        tracep->fullQData(oldp+367,(vlSelf->io_pc_next),64);
        tracep->fullQData(oldp+369,(vlSelf->io_outval),64);
        tracep->fullBit(oldp+371,(vlSelf->io_step));
        tracep->fullBit(oldp+372,(1U));
        tracep->fullCData(oldp+373,(0x11U),5);
        tracep->fullCData(oldp+374,(0U),5);
        tracep->fullCData(oldp+375,(1U),5);
        tracep->fullCData(oldp+376,(2U),5);
        tracep->fullCData(oldp+377,(3U),5);
        tracep->fullCData(oldp+378,(4U),5);
        tracep->fullCData(oldp+379,(5U),5);
        tracep->fullCData(oldp+380,(6U),5);
        tracep->fullCData(oldp+381,(7U),5);
        tracep->fullCData(oldp+382,(8U),5);
        tracep->fullCData(oldp+383,(9U),5);
        tracep->fullCData(oldp+384,(0xaU),5);
        tracep->fullCData(oldp+385,(0xbU),5);
        tracep->fullCData(oldp+386,(0xcU),5);
        tracep->fullCData(oldp+387,(0xdU),5);
        tracep->fullCData(oldp+388,(0xeU),5);
        tracep->fullCData(oldp+389,(0xfU),5);
        tracep->fullCData(oldp+390,(0x10U),5);
        tracep->fullCData(oldp+391,(0x12U),5);
        tracep->fullCData(oldp+392,(0x13U),5);
        tracep->fullCData(oldp+393,(0x14U),5);
        tracep->fullCData(oldp+394,(0x15U),5);
        tracep->fullCData(oldp+395,(0x16U),5);
        tracep->fullCData(oldp+396,(0x17U),5);
        tracep->fullCData(oldp+397,(0x18U),5);
        tracep->fullCData(oldp+398,(0x19U),5);
        tracep->fullCData(oldp+399,(0x1aU),5);
        tracep->fullCData(oldp+400,(0x1bU),5);
        tracep->fullCData(oldp+401,(0x1cU),5);
        tracep->fullCData(oldp+402,(0x1dU),5);
        tracep->fullCData(oldp+403,(0x1eU),5);
        tracep->fullCData(oldp+404,(0x1fU),5);
        tracep->fullCData(oldp+405,(1U),2);
        tracep->fullCData(oldp+406,(3U),2);
        tracep->fullCData(oldp+407,(0U),2);
        tracep->fullCData(oldp+408,(2U),2);
        tracep->fullQData(oldp+409,(0ULL),64);
    }
}
