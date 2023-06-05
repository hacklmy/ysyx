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
        tracep->declBit(c+1645,"clock", false,-1);
        tracep->declBit(c+1646,"reset", false,-1);
        tracep->declBus(c+1647,"io_inst", false,-1, 31,0);
        tracep->declQuad(c+1648,"io_pc", false,-1, 63,0);
        tracep->declQuad(c+1650,"io_pc_next", false,-1, 63,0);
        tracep->declQuad(c+1652,"io_outval", false,-1, 63,0);
        tracep->declBit(c+1654,"io_step", false,-1);
        tracep->declBit(c+1645,"top clock", false,-1);
        tracep->declBit(c+1646,"top reset", false,-1);
        tracep->declBus(c+1647,"top io_inst", false,-1, 31,0);
        tracep->declQuad(c+1648,"top io_pc", false,-1, 63,0);
        tracep->declQuad(c+1650,"top io_pc_next", false,-1, 63,0);
        tracep->declQuad(c+1652,"top io_outval", false,-1, 63,0);
        tracep->declBit(c+1654,"top io_step", false,-1);
        tracep->declBit(c+1645,"top axi_clock", false,-1);
        tracep->declBit(c+1646,"top axi_reset", false,-1);
        tracep->declBus(c+1,"top axi_io_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+2,"top axi_io_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+3,"top axi_io_axi_in_arvalid", false,-1);
        tracep->declBit(c+4,"top axi_io_axi_in_rready", false,-1);
        tracep->declBus(c+5,"top axi_io_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+6,"top axi_io_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+7,"top axi_io_axi_in_awvalid", false,-1);
        tracep->declQuad(c+8,"top axi_io_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+10,"top axi_io_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+11,"top axi_io_axi_in_wvalid", false,-1);
        tracep->declBit(c+12,"top axi_io_axi_in_bready", false,-1);
        tracep->declQuad(c+13,"top axi_io_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+15,"top axi_io_axi_out_rlast", false,-1);
        tracep->declBit(c+16,"top axi_io_axi_out_rvalid", false,-1);
        tracep->declBit(c+17,"top axi_io_axi_out_awready", false,-1);
        tracep->declBit(c+18,"top axi_io_axi_out_wready", false,-1);
        tracep->declBit(c+19,"top axi_io_axi_out_bvalid", false,-1);
        tracep->declBit(c+1645,"top lsu_step_clock", false,-1);
        tracep->declBit(c+1646,"top lsu_step_reset", false,-1);
        tracep->declBit(c+20,"top lsu_step_io_inst_store", false,-1);
        tracep->declBit(c+21,"top lsu_step_io_inst_load", false,-1);
        tracep->declBus(c+22,"top lsu_step_io_mem_addr", false,-1, 31,0);
        tracep->declQuad(c+23,"top lsu_step_io_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+25,"top lsu_step_io_mem_wstrb", false,-1, 7,0);
        tracep->declQuad(c+26,"top lsu_step_io_mem_rdata", false,-1, 63,0);
        tracep->declBit(c+28,"top lsu_step_io_axi_in_arready", false,-1);
        tracep->declQuad(c+26,"top lsu_step_io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+29,"top lsu_step_io_axi_in_rvalid", false,-1);
        tracep->declBit(c+30,"top lsu_step_io_axi_in_awready", false,-1);
        tracep->declBit(c+31,"top lsu_step_io_axi_in_wready", false,-1);
        tracep->declBit(c+32,"top lsu_step_io_axi_in_bvalid", false,-1);
        tracep->declBus(c+22,"top lsu_step_io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+33,"top lsu_step_io_axi_out_arvalid", false,-1);
        tracep->declBit(c+34,"top lsu_step_io_axi_out_rready", false,-1);
        tracep->declBus(c+22,"top lsu_step_io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBit(c+35,"top lsu_step_io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+23,"top lsu_step_io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+25,"top lsu_step_io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+36,"top lsu_step_io_axi_out_wvalid", false,-1);
        tracep->declBit(c+37,"top lsu_step_io_axi_out_bready", false,-1);
        tracep->declBit(c+1645,"top arbiter_clock", false,-1);
        tracep->declBit(c+1646,"top arbiter_reset", false,-1);
        tracep->declBus(c+38,"top arbiter_io_ifu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+39,"top arbiter_io_ifu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+40,"top arbiter_io_ifu_axi_in_arvalid", false,-1);
        tracep->declBit(c+41,"top arbiter_io_ifu_axi_in_rready", false,-1);
        tracep->declQuad(c+42,"top arbiter_io_ifu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+44,"top arbiter_io_ifu_axi_out_rlast", false,-1);
        tracep->declBit(c+45,"top arbiter_io_ifu_axi_out_rvalid", false,-1);
        tracep->declBus(c+46,"top arbiter_io_lsu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+47,"top arbiter_io_lsu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+48,"top arbiter_io_lsu_axi_in_arvalid", false,-1);
        tracep->declBit(c+49,"top arbiter_io_lsu_axi_in_rready", false,-1);
        tracep->declBus(c+50,"top arbiter_io_lsu_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+51,"top arbiter_io_lsu_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+52,"top arbiter_io_lsu_axi_in_awvalid", false,-1);
        tracep->declQuad(c+53,"top arbiter_io_lsu_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+55,"top arbiter_io_lsu_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+56,"top arbiter_io_lsu_axi_in_wvalid", false,-1);
        tracep->declBit(c+57,"top arbiter_io_lsu_axi_in_bready", false,-1);
        tracep->declQuad(c+58,"top arbiter_io_lsu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+60,"top arbiter_io_lsu_axi_out_rlast", false,-1);
        tracep->declBit(c+61,"top arbiter_io_lsu_axi_out_rvalid", false,-1);
        tracep->declBit(c+62,"top arbiter_io_lsu_axi_out_awready", false,-1);
        tracep->declBit(c+63,"top arbiter_io_lsu_axi_out_wready", false,-1);
        tracep->declBit(c+64,"top arbiter_io_lsu_axi_out_bvalid", false,-1);
        tracep->declQuad(c+13,"top arbiter_io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+15,"top arbiter_io_axi_in_rlast", false,-1);
        tracep->declBit(c+16,"top arbiter_io_axi_in_rvalid", false,-1);
        tracep->declBit(c+17,"top arbiter_io_axi_in_awready", false,-1);
        tracep->declBit(c+18,"top arbiter_io_axi_in_wready", false,-1);
        tracep->declBit(c+19,"top arbiter_io_axi_in_bvalid", false,-1);
        tracep->declBus(c+1,"top arbiter_io_axi_out_araddr", false,-1, 31,0);
        tracep->declBus(c+2,"top arbiter_io_axi_out_arlen", false,-1, 7,0);
        tracep->declBit(c+3,"top arbiter_io_axi_out_arvalid", false,-1);
        tracep->declBit(c+4,"top arbiter_io_axi_out_rready", false,-1);
        tracep->declBus(c+5,"top arbiter_io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBus(c+6,"top arbiter_io_axi_out_awlen", false,-1, 7,0);
        tracep->declBit(c+7,"top arbiter_io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+8,"top arbiter_io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+10,"top arbiter_io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+11,"top arbiter_io_axi_out_wvalid", false,-1);
        tracep->declBit(c+12,"top arbiter_io_axi_out_bready", false,-1);
        tracep->declBit(c+1645,"top ifu_step_clock", false,-1);
        tracep->declBit(c+1646,"top ifu_step_reset", false,-1);
        tracep->declQuad(c+65,"top ifu_step_io_pc", false,-1, 63,0);
        tracep->declBit(c+67,"top ifu_step_io_pc_valid", false,-1);
        tracep->declBit(c+68,"top ifu_step_io_inst_valid", false,-1);
        tracep->declBus(c+69,"top ifu_step_io_inst", false,-1, 31,0);
        tracep->declBus(c+70,"top ifu_step_io_inst_reg", false,-1, 31,0);
        tracep->declQuad(c+71,"top ifu_step_io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+73,"top ifu_step_io_axi_in_rlast", false,-1);
        tracep->declBit(c+68,"top ifu_step_io_axi_in_rvalid", false,-1);
        tracep->declBus(c+74,"top ifu_step_io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+67,"top ifu_step_io_axi_out_arvalid", false,-1);
        tracep->declBit(c+75,"top ifu_step_io_axi_out_rready", false,-1);
        tracep->declBit(c+1645,"top i_cache_clock", false,-1);
        tracep->declBit(c+1646,"top i_cache_reset", false,-1);
        tracep->declBus(c+74,"top i_cache_io_from_ifu_araddr", false,-1, 31,0);
        tracep->declBit(c+67,"top i_cache_io_from_ifu_arvalid", false,-1);
        tracep->declBit(c+75,"top i_cache_io_from_ifu_rready", false,-1);
        tracep->declQuad(c+71,"top i_cache_io_to_ifu_rdata", false,-1, 63,0);
        tracep->declBit(c+73,"top i_cache_io_to_ifu_rlast", false,-1);
        tracep->declBit(c+68,"top i_cache_io_to_ifu_rvalid", false,-1);
        tracep->declBus(c+38,"top i_cache_io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+39,"top i_cache_io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+40,"top i_cache_io_to_axi_arvalid", false,-1);
        tracep->declBit(c+41,"top i_cache_io_to_axi_rready", false,-1);
        tracep->declQuad(c+42,"top i_cache_io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+44,"top i_cache_io_from_axi_rlast", false,-1);
        tracep->declBit(c+45,"top i_cache_io_from_axi_rvalid", false,-1);
        tracep->declBit(c+1645,"top d_cache_clock", false,-1);
        tracep->declBit(c+1646,"top d_cache_reset", false,-1);
        tracep->declBus(c+22,"top d_cache_io_from_lsu_araddr", false,-1, 31,0);
        tracep->declBit(c+33,"top d_cache_io_from_lsu_arvalid", false,-1);
        tracep->declBit(c+34,"top d_cache_io_from_lsu_rready", false,-1);
        tracep->declBus(c+22,"top d_cache_io_from_lsu_awaddr", false,-1, 31,0);
        tracep->declBit(c+35,"top d_cache_io_from_lsu_awvalid", false,-1);
        tracep->declQuad(c+23,"top d_cache_io_from_lsu_wdata", false,-1, 63,0);
        tracep->declBus(c+25,"top d_cache_io_from_lsu_wstrb", false,-1, 7,0);
        tracep->declBit(c+36,"top d_cache_io_from_lsu_wvalid", false,-1);
        tracep->declBit(c+37,"top d_cache_io_from_lsu_bready", false,-1);
        tracep->declBit(c+28,"top d_cache_io_to_lsu_arready", false,-1);
        tracep->declQuad(c+26,"top d_cache_io_to_lsu_rdata", false,-1, 63,0);
        tracep->declBit(c+29,"top d_cache_io_to_lsu_rvalid", false,-1);
        tracep->declBit(c+30,"top d_cache_io_to_lsu_awready", false,-1);
        tracep->declBit(c+31,"top d_cache_io_to_lsu_wready", false,-1);
        tracep->declBit(c+32,"top d_cache_io_to_lsu_bvalid", false,-1);
        tracep->declBus(c+46,"top d_cache_io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+47,"top d_cache_io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+48,"top d_cache_io_to_axi_arvalid", false,-1);
        tracep->declBit(c+49,"top d_cache_io_to_axi_rready", false,-1);
        tracep->declBus(c+50,"top d_cache_io_to_axi_awaddr", false,-1, 31,0);
        tracep->declBus(c+51,"top d_cache_io_to_axi_awlen", false,-1, 7,0);
        tracep->declBit(c+52,"top d_cache_io_to_axi_awvalid", false,-1);
        tracep->declQuad(c+53,"top d_cache_io_to_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+55,"top d_cache_io_to_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+56,"top d_cache_io_to_axi_wvalid", false,-1);
        tracep->declBit(c+57,"top d_cache_io_to_axi_bready", false,-1);
        tracep->declQuad(c+58,"top d_cache_io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+60,"top d_cache_io_from_axi_rlast", false,-1);
        tracep->declBit(c+61,"top d_cache_io_from_axi_rvalid", false,-1);
        tracep->declBit(c+62,"top d_cache_io_from_axi_awready", false,-1);
        tracep->declBit(c+63,"top d_cache_io_from_axi_wready", false,-1);
        tracep->declBit(c+64,"top d_cache_io_from_axi_bvalid", false,-1);
        tracep->declBus(c+76,"top idu_step_io_inst", false,-1, 31,0);
        tracep->declBus(c+77,"top idu_step_io_inst_now", false,-1, 31,0);
        tracep->declBus(c+78,"top idu_step_io_rs1", false,-1, 4,0);
        tracep->declBus(c+79,"top idu_step_io_rs2", false,-1, 4,0);
        tracep->declBus(c+80,"top idu_step_io_rd", false,-1, 4,0);
        tracep->declQuad(c+81,"top idu_step_io_imm", false,-1, 63,0);
        tracep->declBit(c+83,"top idu_step_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+84,"top idu_step_io_ctrl_sign_csr_write", false,-1);
        tracep->declBit(c+85,"top idu_step_io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+86,"top idu_step_io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declBit(c+20,"top idu_step_io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+21,"top idu_step_io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+25,"top idu_step_io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBit(c+1645,"top exu_step_clock", false,-1);
        tracep->declBit(c+1646,"top exu_step_reset", false,-1);
        tracep->declQuad(c+65,"top exu_step_io_pc", false,-1, 63,0);
        tracep->declQuad(c+87,"top exu_step_io_pc_next", false,-1, 63,0);
        tracep->declBus(c+77,"top exu_step_io_inst_now", false,-1, 31,0);
        tracep->declBus(c+78,"top exu_step_io_rs1", false,-1, 4,0);
        tracep->declBus(c+79,"top exu_step_io_rs2", false,-1, 4,0);
        tracep->declBus(c+80,"top exu_step_io_rd", false,-1, 4,0);
        tracep->declQuad(c+81,"top exu_step_io_imm", false,-1, 63,0);
        tracep->declBit(c+83,"top exu_step_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+84,"top exu_step_io_ctrl_sign_csr_write", false,-1);
        tracep->declBit(c+85,"top exu_step_io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+86,"top exu_step_io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declBit(c+20,"top exu_step_io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+21,"top exu_step_io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+25,"top exu_step_io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declQuad(c+89,"top exu_step_io_res2rd", false,-1, 63,0);
        tracep->declBit(c+68,"top exu_step_io_inst_valid", false,-1);
        tracep->declBit(c+20,"top exu_step_io_inst_store", false,-1);
        tracep->declBit(c+21,"top exu_step_io_inst_load", false,-1);
        tracep->declBus(c+22,"top exu_step_io_Mem_addr", false,-1, 31,0);
        tracep->declQuad(c+26,"top exu_step_io_Mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+23,"top exu_step_io_Mem_wdata", false,-1, 63,0);
        tracep->declBus(c+25,"top exu_step_io_Mem_wstrb", false,-1, 7,0);
        tracep->declBit(c+29,"top exu_step_io_rdata_valid", false,-1);
        tracep->declBus(c+91,"top dpi_flag", false,-1, 31,0);
        tracep->declBus(c+92,"top dpi_ecall_flag", false,-1, 31,0);
        tracep->declQuad(c+65,"top pc_now", false,-1, 63,0);
        tracep->declBit(c+93,"top execute_end", false,-1);
        tracep->declBit(c+67,"top pc_valid", false,-1);
        tracep->declBit(c+94,"top diff_step", false,-1);
        tracep->declBit(c+1645,"top axi clock", false,-1);
        tracep->declBit(c+1646,"top axi reset", false,-1);
        tracep->declBus(c+1,"top axi io_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+2,"top axi io_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+3,"top axi io_axi_in_arvalid", false,-1);
        tracep->declBit(c+4,"top axi io_axi_in_rready", false,-1);
        tracep->declBus(c+5,"top axi io_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+6,"top axi io_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+7,"top axi io_axi_in_awvalid", false,-1);
        tracep->declQuad(c+8,"top axi io_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+10,"top axi io_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+11,"top axi io_axi_in_wvalid", false,-1);
        tracep->declBit(c+12,"top axi io_axi_in_bready", false,-1);
        tracep->declQuad(c+13,"top axi io_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+15,"top axi io_axi_out_rlast", false,-1);
        tracep->declBit(c+16,"top axi io_axi_out_rvalid", false,-1);
        tracep->declBit(c+17,"top axi io_axi_out_awready", false,-1);
        tracep->declBit(c+18,"top axi io_axi_out_wready", false,-1);
        tracep->declBit(c+19,"top axi io_axi_out_bvalid", false,-1);
        tracep->declQuad(c+95,"top axi Mem_modle_Raddr", false,-1, 63,0);
        tracep->declQuad(c+13,"top axi Mem_modle_Rdata", false,-1, 63,0);
        tracep->declQuad(c+97,"top axi Mem_modle_Waddr", false,-1, 63,0);
        tracep->declQuad(c+8,"top axi Mem_modle_Wdata", false,-1, 63,0);
        tracep->declBus(c+10,"top axi Mem_modle_Wmask", false,-1, 7,0);
        tracep->declBit(c+18,"top axi Mem_modle_Write_en", false,-1);
        tracep->declBit(c+16,"top axi Mem_modle_Read_en", false,-1);
        tracep->declBit(c+17,"top axi axi_awready", false,-1);
        tracep->declBit(c+18,"top axi axi_wready", false,-1);
        tracep->declBit(c+19,"top axi axi_bvalid", false,-1);
        tracep->declBit(c+16,"top axi axi_rvalid", false,-1);
        tracep->declBus(c+99,"top axi arlen", false,-1, 7,0);
        tracep->declBus(c+100,"top axi awlen", false,-1, 7,0);
        tracep->declQuad(c+95,"top axi araddr", false,-1, 63,0);
        tracep->declQuad(c+97,"top axi awaddr", false,-1, 63,0);
        tracep->declBus(c+101,"top axi state", false,-1, 2,0);
        tracep->declQuad(c+95,"top axi Mem_modle Raddr", false,-1, 63,0);
        tracep->declQuad(c+97,"top axi Mem_modle Waddr", false,-1, 63,0);
        tracep->declQuad(c+8,"top axi Mem_modle Wdata", false,-1, 63,0);
        tracep->declBus(c+10,"top axi Mem_modle Wmask", false,-1, 7,0);
        tracep->declBit(c+18,"top axi Mem_modle Write_en", false,-1);
        tracep->declBit(c+16,"top axi Mem_modle Read_en", false,-1);
        tracep->declQuad(c+13,"top axi Mem_modle Rdata", false,-1, 63,0);
        tracep->declBit(c+1645,"top lsu_step clock", false,-1);
        tracep->declBit(c+1646,"top lsu_step reset", false,-1);
        tracep->declBit(c+20,"top lsu_step io_inst_store", false,-1);
        tracep->declBit(c+21,"top lsu_step io_inst_load", false,-1);
        tracep->declBus(c+22,"top lsu_step io_mem_addr", false,-1, 31,0);
        tracep->declQuad(c+23,"top lsu_step io_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+25,"top lsu_step io_mem_wstrb", false,-1, 7,0);
        tracep->declQuad(c+26,"top lsu_step io_mem_rdata", false,-1, 63,0);
        tracep->declBit(c+28,"top lsu_step io_axi_in_arready", false,-1);
        tracep->declQuad(c+26,"top lsu_step io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+29,"top lsu_step io_axi_in_rvalid", false,-1);
        tracep->declBit(c+30,"top lsu_step io_axi_in_awready", false,-1);
        tracep->declBit(c+31,"top lsu_step io_axi_in_wready", false,-1);
        tracep->declBit(c+32,"top lsu_step io_axi_in_bvalid", false,-1);
        tracep->declBus(c+22,"top lsu_step io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+33,"top lsu_step io_axi_out_arvalid", false,-1);
        tracep->declBit(c+34,"top lsu_step io_axi_out_rready", false,-1);
        tracep->declBus(c+22,"top lsu_step io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBit(c+35,"top lsu_step io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+23,"top lsu_step io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+25,"top lsu_step io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+36,"top lsu_step io_axi_out_wvalid", false,-1);
        tracep->declBit(c+37,"top lsu_step io_axi_out_bready", false,-1);
        tracep->declBit(c+33,"top lsu_step axi_arvalid", false,-1);
        tracep->declBit(c+34,"top lsu_step axi_rready", false,-1);
        tracep->declBit(c+35,"top lsu_step axi_awvalid", false,-1);
        tracep->declBit(c+36,"top lsu_step axi_wvalid", false,-1);
        tracep->declBit(c+37,"top lsu_step axi_bready", false,-1);
        tracep->declBus(c+102,"top lsu_step state", false,-1, 1,0);
        tracep->declBit(c+1645,"top arbiter clock", false,-1);
        tracep->declBit(c+1646,"top arbiter reset", false,-1);
        tracep->declBus(c+38,"top arbiter io_ifu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+39,"top arbiter io_ifu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+40,"top arbiter io_ifu_axi_in_arvalid", false,-1);
        tracep->declBit(c+41,"top arbiter io_ifu_axi_in_rready", false,-1);
        tracep->declQuad(c+42,"top arbiter io_ifu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+44,"top arbiter io_ifu_axi_out_rlast", false,-1);
        tracep->declBit(c+45,"top arbiter io_ifu_axi_out_rvalid", false,-1);
        tracep->declBus(c+46,"top arbiter io_lsu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+47,"top arbiter io_lsu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+48,"top arbiter io_lsu_axi_in_arvalid", false,-1);
        tracep->declBit(c+49,"top arbiter io_lsu_axi_in_rready", false,-1);
        tracep->declBus(c+50,"top arbiter io_lsu_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+51,"top arbiter io_lsu_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+52,"top arbiter io_lsu_axi_in_awvalid", false,-1);
        tracep->declQuad(c+53,"top arbiter io_lsu_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+55,"top arbiter io_lsu_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+56,"top arbiter io_lsu_axi_in_wvalid", false,-1);
        tracep->declBit(c+57,"top arbiter io_lsu_axi_in_bready", false,-1);
        tracep->declQuad(c+58,"top arbiter io_lsu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+60,"top arbiter io_lsu_axi_out_rlast", false,-1);
        tracep->declBit(c+61,"top arbiter io_lsu_axi_out_rvalid", false,-1);
        tracep->declBit(c+62,"top arbiter io_lsu_axi_out_awready", false,-1);
        tracep->declBit(c+63,"top arbiter io_lsu_axi_out_wready", false,-1);
        tracep->declBit(c+64,"top arbiter io_lsu_axi_out_bvalid", false,-1);
        tracep->declQuad(c+13,"top arbiter io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+15,"top arbiter io_axi_in_rlast", false,-1);
        tracep->declBit(c+16,"top arbiter io_axi_in_rvalid", false,-1);
        tracep->declBit(c+17,"top arbiter io_axi_in_awready", false,-1);
        tracep->declBit(c+18,"top arbiter io_axi_in_wready", false,-1);
        tracep->declBit(c+19,"top arbiter io_axi_in_bvalid", false,-1);
        tracep->declBus(c+1,"top arbiter io_axi_out_araddr", false,-1, 31,0);
        tracep->declBus(c+2,"top arbiter io_axi_out_arlen", false,-1, 7,0);
        tracep->declBit(c+3,"top arbiter io_axi_out_arvalid", false,-1);
        tracep->declBit(c+4,"top arbiter io_axi_out_rready", false,-1);
        tracep->declBus(c+5,"top arbiter io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBus(c+6,"top arbiter io_axi_out_awlen", false,-1, 7,0);
        tracep->declBit(c+7,"top arbiter io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+8,"top arbiter io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+10,"top arbiter io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+11,"top arbiter io_axi_out_wvalid", false,-1);
        tracep->declBit(c+12,"top arbiter io_axi_out_bready", false,-1);
        tracep->declBus(c+103,"top arbiter state", false,-1, 1,0);
        tracep->declBit(c+1645,"top ifu_step clock", false,-1);
        tracep->declBit(c+1646,"top ifu_step reset", false,-1);
        tracep->declQuad(c+65,"top ifu_step io_pc", false,-1, 63,0);
        tracep->declBit(c+67,"top ifu_step io_pc_valid", false,-1);
        tracep->declBit(c+68,"top ifu_step io_inst_valid", false,-1);
        tracep->declBus(c+69,"top ifu_step io_inst", false,-1, 31,0);
        tracep->declBus(c+70,"top ifu_step io_inst_reg", false,-1, 31,0);
        tracep->declQuad(c+71,"top ifu_step io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+73,"top ifu_step io_axi_in_rlast", false,-1);
        tracep->declBit(c+68,"top ifu_step io_axi_in_rvalid", false,-1);
        tracep->declBus(c+74,"top ifu_step io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+67,"top ifu_step io_axi_out_arvalid", false,-1);
        tracep->declBit(c+75,"top ifu_step io_axi_out_rready", false,-1);
        tracep->declBit(c+75,"top ifu_step inst_ready", false,-1);
        tracep->declBus(c+70,"top ifu_step inst_reg", false,-1, 31,0);
        tracep->declBit(c+1645,"top i_cache clock", false,-1);
        tracep->declBit(c+1646,"top i_cache reset", false,-1);
        tracep->declBus(c+74,"top i_cache io_from_ifu_araddr", false,-1, 31,0);
        tracep->declBit(c+67,"top i_cache io_from_ifu_arvalid", false,-1);
        tracep->declBit(c+75,"top i_cache io_from_ifu_rready", false,-1);
        tracep->declQuad(c+71,"top i_cache io_to_ifu_rdata", false,-1, 63,0);
        tracep->declBit(c+73,"top i_cache io_to_ifu_rlast", false,-1);
        tracep->declBit(c+68,"top i_cache io_to_ifu_rvalid", false,-1);
        tracep->declBus(c+38,"top i_cache io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+39,"top i_cache io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+40,"top i_cache io_to_axi_arvalid", false,-1);
        tracep->declBit(c+41,"top i_cache io_to_axi_rready", false,-1);
        tracep->declQuad(c+42,"top i_cache io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+44,"top i_cache io_from_axi_rlast", false,-1);
        tracep->declBit(c+45,"top i_cache io_from_axi_rvalid", false,-1);
        tracep->declArray(c+104,"top i_cache ram_0_0", false,-1, 511,0);
        tracep->declArray(c+120,"top i_cache ram_0_1", false,-1, 511,0);
        tracep->declArray(c+136,"top i_cache ram_0_2", false,-1, 511,0);
        tracep->declArray(c+152,"top i_cache ram_0_3", false,-1, 511,0);
        tracep->declArray(c+168,"top i_cache ram_0_4", false,-1, 511,0);
        tracep->declArray(c+184,"top i_cache ram_0_5", false,-1, 511,0);
        tracep->declArray(c+200,"top i_cache ram_0_6", false,-1, 511,0);
        tracep->declArray(c+216,"top i_cache ram_0_7", false,-1, 511,0);
        tracep->declArray(c+232,"top i_cache ram_0_8", false,-1, 511,0);
        tracep->declArray(c+248,"top i_cache ram_0_9", false,-1, 511,0);
        tracep->declArray(c+264,"top i_cache ram_0_10", false,-1, 511,0);
        tracep->declArray(c+280,"top i_cache ram_0_11", false,-1, 511,0);
        tracep->declArray(c+296,"top i_cache ram_0_12", false,-1, 511,0);
        tracep->declArray(c+312,"top i_cache ram_0_13", false,-1, 511,0);
        tracep->declArray(c+328,"top i_cache ram_0_14", false,-1, 511,0);
        tracep->declArray(c+344,"top i_cache ram_0_15", false,-1, 511,0);
        tracep->declArray(c+360,"top i_cache ram_1_0", false,-1, 511,0);
        tracep->declArray(c+376,"top i_cache ram_1_1", false,-1, 511,0);
        tracep->declArray(c+392,"top i_cache ram_1_2", false,-1, 511,0);
        tracep->declArray(c+408,"top i_cache ram_1_3", false,-1, 511,0);
        tracep->declArray(c+424,"top i_cache ram_1_4", false,-1, 511,0);
        tracep->declArray(c+440,"top i_cache ram_1_5", false,-1, 511,0);
        tracep->declArray(c+456,"top i_cache ram_1_6", false,-1, 511,0);
        tracep->declArray(c+472,"top i_cache ram_1_7", false,-1, 511,0);
        tracep->declArray(c+488,"top i_cache ram_1_8", false,-1, 511,0);
        tracep->declArray(c+504,"top i_cache ram_1_9", false,-1, 511,0);
        tracep->declArray(c+520,"top i_cache ram_1_10", false,-1, 511,0);
        tracep->declArray(c+536,"top i_cache ram_1_11", false,-1, 511,0);
        tracep->declArray(c+552,"top i_cache ram_1_12", false,-1, 511,0);
        tracep->declArray(c+568,"top i_cache ram_1_13", false,-1, 511,0);
        tracep->declArray(c+584,"top i_cache ram_1_14", false,-1, 511,0);
        tracep->declArray(c+600,"top i_cache ram_1_15", false,-1, 511,0);
        tracep->declBus(c+616,"top i_cache tag_0_0", false,-1, 31,0);
        tracep->declBus(c+617,"top i_cache tag_0_1", false,-1, 31,0);
        tracep->declBus(c+618,"top i_cache tag_0_2", false,-1, 31,0);
        tracep->declBus(c+619,"top i_cache tag_0_3", false,-1, 31,0);
        tracep->declBus(c+620,"top i_cache tag_0_4", false,-1, 31,0);
        tracep->declBus(c+621,"top i_cache tag_0_5", false,-1, 31,0);
        tracep->declBus(c+622,"top i_cache tag_0_6", false,-1, 31,0);
        tracep->declBus(c+623,"top i_cache tag_0_7", false,-1, 31,0);
        tracep->declBus(c+624,"top i_cache tag_0_8", false,-1, 31,0);
        tracep->declBus(c+625,"top i_cache tag_0_9", false,-1, 31,0);
        tracep->declBus(c+626,"top i_cache tag_0_10", false,-1, 31,0);
        tracep->declBus(c+627,"top i_cache tag_0_11", false,-1, 31,0);
        tracep->declBus(c+628,"top i_cache tag_0_12", false,-1, 31,0);
        tracep->declBus(c+629,"top i_cache tag_0_13", false,-1, 31,0);
        tracep->declBus(c+630,"top i_cache tag_0_14", false,-1, 31,0);
        tracep->declBus(c+631,"top i_cache tag_0_15", false,-1, 31,0);
        tracep->declBus(c+632,"top i_cache tag_1_0", false,-1, 31,0);
        tracep->declBus(c+633,"top i_cache tag_1_1", false,-1, 31,0);
        tracep->declBus(c+634,"top i_cache tag_1_2", false,-1, 31,0);
        tracep->declBus(c+635,"top i_cache tag_1_3", false,-1, 31,0);
        tracep->declBus(c+636,"top i_cache tag_1_4", false,-1, 31,0);
        tracep->declBus(c+637,"top i_cache tag_1_5", false,-1, 31,0);
        tracep->declBus(c+638,"top i_cache tag_1_6", false,-1, 31,0);
        tracep->declBus(c+639,"top i_cache tag_1_7", false,-1, 31,0);
        tracep->declBus(c+640,"top i_cache tag_1_8", false,-1, 31,0);
        tracep->declBus(c+641,"top i_cache tag_1_9", false,-1, 31,0);
        tracep->declBus(c+642,"top i_cache tag_1_10", false,-1, 31,0);
        tracep->declBus(c+643,"top i_cache tag_1_11", false,-1, 31,0);
        tracep->declBus(c+644,"top i_cache tag_1_12", false,-1, 31,0);
        tracep->declBus(c+645,"top i_cache tag_1_13", false,-1, 31,0);
        tracep->declBus(c+646,"top i_cache tag_1_14", false,-1, 31,0);
        tracep->declBus(c+647,"top i_cache tag_1_15", false,-1, 31,0);
        tracep->declBit(c+648,"top i_cache valid_0_0", false,-1);
        tracep->declBit(c+649,"top i_cache valid_0_1", false,-1);
        tracep->declBit(c+650,"top i_cache valid_0_2", false,-1);
        tracep->declBit(c+651,"top i_cache valid_0_3", false,-1);
        tracep->declBit(c+652,"top i_cache valid_0_4", false,-1);
        tracep->declBit(c+653,"top i_cache valid_0_5", false,-1);
        tracep->declBit(c+654,"top i_cache valid_0_6", false,-1);
        tracep->declBit(c+655,"top i_cache valid_0_7", false,-1);
        tracep->declBit(c+656,"top i_cache valid_0_8", false,-1);
        tracep->declBit(c+657,"top i_cache valid_0_9", false,-1);
        tracep->declBit(c+658,"top i_cache valid_0_10", false,-1);
        tracep->declBit(c+659,"top i_cache valid_0_11", false,-1);
        tracep->declBit(c+660,"top i_cache valid_0_12", false,-1);
        tracep->declBit(c+661,"top i_cache valid_0_13", false,-1);
        tracep->declBit(c+662,"top i_cache valid_0_14", false,-1);
        tracep->declBit(c+663,"top i_cache valid_0_15", false,-1);
        tracep->declBit(c+664,"top i_cache valid_1_0", false,-1);
        tracep->declBit(c+665,"top i_cache valid_1_1", false,-1);
        tracep->declBit(c+666,"top i_cache valid_1_2", false,-1);
        tracep->declBit(c+667,"top i_cache valid_1_3", false,-1);
        tracep->declBit(c+668,"top i_cache valid_1_4", false,-1);
        tracep->declBit(c+669,"top i_cache valid_1_5", false,-1);
        tracep->declBit(c+670,"top i_cache valid_1_6", false,-1);
        tracep->declBit(c+671,"top i_cache valid_1_7", false,-1);
        tracep->declBit(c+672,"top i_cache valid_1_8", false,-1);
        tracep->declBit(c+673,"top i_cache valid_1_9", false,-1);
        tracep->declBit(c+674,"top i_cache valid_1_10", false,-1);
        tracep->declBit(c+675,"top i_cache valid_1_11", false,-1);
        tracep->declBit(c+676,"top i_cache valid_1_12", false,-1);
        tracep->declBit(c+677,"top i_cache valid_1_13", false,-1);
        tracep->declBit(c+678,"top i_cache valid_1_14", false,-1);
        tracep->declBit(c+679,"top i_cache valid_1_15", false,-1);
        tracep->declBit(c+680,"top i_cache way0_hit", false,-1);
        tracep->declBit(c+681,"top i_cache way1_hit", false,-1);
        tracep->declBus(c+682,"top i_cache unuse_way", false,-1, 1,0);
        tracep->declQuad(c+683,"top i_cache receive_data_0", false,-1, 63,0);
        tracep->declQuad(c+685,"top i_cache receive_data_1", false,-1, 63,0);
        tracep->declQuad(c+687,"top i_cache receive_data_2", false,-1, 63,0);
        tracep->declQuad(c+689,"top i_cache receive_data_3", false,-1, 63,0);
        tracep->declQuad(c+691,"top i_cache receive_data_4", false,-1, 63,0);
        tracep->declQuad(c+693,"top i_cache receive_data_5", false,-1, 63,0);
        tracep->declQuad(c+695,"top i_cache receive_data_6", false,-1, 63,0);
        tracep->declQuad(c+697,"top i_cache receive_data_7", false,-1, 63,0);
        tracep->declBus(c+699,"top i_cache receive_num", false,-1, 2,0);
        tracep->declBit(c+700,"top i_cache quene", false,-1);
        tracep->declBus(c+701,"top i_cache offset", false,-1, 5,0);
        tracep->declBus(c+702,"top i_cache index", false,-1, 3,0);
        tracep->declBus(c+703,"top i_cache tag", false,-1, 21,0);
        tracep->declBus(c+704,"top i_cache shift_bit", false,-1, 8,0);
        tracep->declBus(c+705,"top i_cache state", false,-1, 2,0);
        tracep->declBit(c+1645,"top d_cache clock", false,-1);
        tracep->declBit(c+1646,"top d_cache reset", false,-1);
        tracep->declBus(c+22,"top d_cache io_from_lsu_araddr", false,-1, 31,0);
        tracep->declBit(c+33,"top d_cache io_from_lsu_arvalid", false,-1);
        tracep->declBit(c+34,"top d_cache io_from_lsu_rready", false,-1);
        tracep->declBus(c+22,"top d_cache io_from_lsu_awaddr", false,-1, 31,0);
        tracep->declBit(c+35,"top d_cache io_from_lsu_awvalid", false,-1);
        tracep->declQuad(c+23,"top d_cache io_from_lsu_wdata", false,-1, 63,0);
        tracep->declBus(c+25,"top d_cache io_from_lsu_wstrb", false,-1, 7,0);
        tracep->declBit(c+36,"top d_cache io_from_lsu_wvalid", false,-1);
        tracep->declBit(c+37,"top d_cache io_from_lsu_bready", false,-1);
        tracep->declBit(c+28,"top d_cache io_to_lsu_arready", false,-1);
        tracep->declQuad(c+26,"top d_cache io_to_lsu_rdata", false,-1, 63,0);
        tracep->declBit(c+29,"top d_cache io_to_lsu_rvalid", false,-1);
        tracep->declBit(c+30,"top d_cache io_to_lsu_awready", false,-1);
        tracep->declBit(c+31,"top d_cache io_to_lsu_wready", false,-1);
        tracep->declBit(c+32,"top d_cache io_to_lsu_bvalid", false,-1);
        tracep->declBus(c+46,"top d_cache io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+47,"top d_cache io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+48,"top d_cache io_to_axi_arvalid", false,-1);
        tracep->declBit(c+49,"top d_cache io_to_axi_rready", false,-1);
        tracep->declBus(c+50,"top d_cache io_to_axi_awaddr", false,-1, 31,0);
        tracep->declBus(c+51,"top d_cache io_to_axi_awlen", false,-1, 7,0);
        tracep->declBit(c+52,"top d_cache io_to_axi_awvalid", false,-1);
        tracep->declQuad(c+53,"top d_cache io_to_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+55,"top d_cache io_to_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+56,"top d_cache io_to_axi_wvalid", false,-1);
        tracep->declBit(c+57,"top d_cache io_to_axi_bready", false,-1);
        tracep->declQuad(c+58,"top d_cache io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+60,"top d_cache io_from_axi_rlast", false,-1);
        tracep->declBit(c+61,"top d_cache io_from_axi_rvalid", false,-1);
        tracep->declBit(c+62,"top d_cache io_from_axi_awready", false,-1);
        tracep->declBit(c+63,"top d_cache io_from_axi_wready", false,-1);
        tracep->declBit(c+64,"top d_cache io_from_axi_bvalid", false,-1);
        tracep->declArray(c+706,"top d_cache ram_0_0", false,-1, 511,0);
        tracep->declArray(c+722,"top d_cache ram_0_1", false,-1, 511,0);
        tracep->declArray(c+738,"top d_cache ram_0_2", false,-1, 511,0);
        tracep->declArray(c+754,"top d_cache ram_0_3", false,-1, 511,0);
        tracep->declArray(c+770,"top d_cache ram_0_4", false,-1, 511,0);
        tracep->declArray(c+786,"top d_cache ram_0_5", false,-1, 511,0);
        tracep->declArray(c+802,"top d_cache ram_0_6", false,-1, 511,0);
        tracep->declArray(c+818,"top d_cache ram_0_7", false,-1, 511,0);
        tracep->declArray(c+834,"top d_cache ram_0_8", false,-1, 511,0);
        tracep->declArray(c+850,"top d_cache ram_0_9", false,-1, 511,0);
        tracep->declArray(c+866,"top d_cache ram_0_10", false,-1, 511,0);
        tracep->declArray(c+882,"top d_cache ram_0_11", false,-1, 511,0);
        tracep->declArray(c+898,"top d_cache ram_0_12", false,-1, 511,0);
        tracep->declArray(c+914,"top d_cache ram_0_13", false,-1, 511,0);
        tracep->declArray(c+930,"top d_cache ram_0_14", false,-1, 511,0);
        tracep->declArray(c+946,"top d_cache ram_0_15", false,-1, 511,0);
        tracep->declArray(c+962,"top d_cache ram_1_0", false,-1, 511,0);
        tracep->declArray(c+978,"top d_cache ram_1_1", false,-1, 511,0);
        tracep->declArray(c+994,"top d_cache ram_1_2", false,-1, 511,0);
        tracep->declArray(c+1010,"top d_cache ram_1_3", false,-1, 511,0);
        tracep->declArray(c+1026,"top d_cache ram_1_4", false,-1, 511,0);
        tracep->declArray(c+1042,"top d_cache ram_1_5", false,-1, 511,0);
        tracep->declArray(c+1058,"top d_cache ram_1_6", false,-1, 511,0);
        tracep->declArray(c+1074,"top d_cache ram_1_7", false,-1, 511,0);
        tracep->declArray(c+1090,"top d_cache ram_1_8", false,-1, 511,0);
        tracep->declArray(c+1106,"top d_cache ram_1_9", false,-1, 511,0);
        tracep->declArray(c+1122,"top d_cache ram_1_10", false,-1, 511,0);
        tracep->declArray(c+1138,"top d_cache ram_1_11", false,-1, 511,0);
        tracep->declArray(c+1154,"top d_cache ram_1_12", false,-1, 511,0);
        tracep->declArray(c+1170,"top d_cache ram_1_13", false,-1, 511,0);
        tracep->declArray(c+1186,"top d_cache ram_1_14", false,-1, 511,0);
        tracep->declArray(c+1202,"top d_cache ram_1_15", false,-1, 511,0);
        tracep->declBus(c+1218,"top d_cache tag_0_0", false,-1, 31,0);
        tracep->declBus(c+1219,"top d_cache tag_0_1", false,-1, 31,0);
        tracep->declBus(c+1220,"top d_cache tag_0_2", false,-1, 31,0);
        tracep->declBus(c+1221,"top d_cache tag_0_3", false,-1, 31,0);
        tracep->declBus(c+1222,"top d_cache tag_0_4", false,-1, 31,0);
        tracep->declBus(c+1223,"top d_cache tag_0_5", false,-1, 31,0);
        tracep->declBus(c+1224,"top d_cache tag_0_6", false,-1, 31,0);
        tracep->declBus(c+1225,"top d_cache tag_0_7", false,-1, 31,0);
        tracep->declBus(c+1226,"top d_cache tag_0_8", false,-1, 31,0);
        tracep->declBus(c+1227,"top d_cache tag_0_9", false,-1, 31,0);
        tracep->declBus(c+1228,"top d_cache tag_0_10", false,-1, 31,0);
        tracep->declBus(c+1229,"top d_cache tag_0_11", false,-1, 31,0);
        tracep->declBus(c+1230,"top d_cache tag_0_12", false,-1, 31,0);
        tracep->declBus(c+1231,"top d_cache tag_0_13", false,-1, 31,0);
        tracep->declBus(c+1232,"top d_cache tag_0_14", false,-1, 31,0);
        tracep->declBus(c+1233,"top d_cache tag_0_15", false,-1, 31,0);
        tracep->declBus(c+1234,"top d_cache tag_1_0", false,-1, 31,0);
        tracep->declBus(c+1235,"top d_cache tag_1_1", false,-1, 31,0);
        tracep->declBus(c+1236,"top d_cache tag_1_2", false,-1, 31,0);
        tracep->declBus(c+1237,"top d_cache tag_1_3", false,-1, 31,0);
        tracep->declBus(c+1238,"top d_cache tag_1_4", false,-1, 31,0);
        tracep->declBus(c+1239,"top d_cache tag_1_5", false,-1, 31,0);
        tracep->declBus(c+1240,"top d_cache tag_1_6", false,-1, 31,0);
        tracep->declBus(c+1241,"top d_cache tag_1_7", false,-1, 31,0);
        tracep->declBus(c+1242,"top d_cache tag_1_8", false,-1, 31,0);
        tracep->declBus(c+1243,"top d_cache tag_1_9", false,-1, 31,0);
        tracep->declBus(c+1244,"top d_cache tag_1_10", false,-1, 31,0);
        tracep->declBus(c+1245,"top d_cache tag_1_11", false,-1, 31,0);
        tracep->declBus(c+1246,"top d_cache tag_1_12", false,-1, 31,0);
        tracep->declBus(c+1247,"top d_cache tag_1_13", false,-1, 31,0);
        tracep->declBus(c+1248,"top d_cache tag_1_14", false,-1, 31,0);
        tracep->declBus(c+1249,"top d_cache tag_1_15", false,-1, 31,0);
        tracep->declBit(c+1250,"top d_cache valid_0_0", false,-1);
        tracep->declBit(c+1251,"top d_cache valid_0_1", false,-1);
        tracep->declBit(c+1252,"top d_cache valid_0_2", false,-1);
        tracep->declBit(c+1253,"top d_cache valid_0_3", false,-1);
        tracep->declBit(c+1254,"top d_cache valid_0_4", false,-1);
        tracep->declBit(c+1255,"top d_cache valid_0_5", false,-1);
        tracep->declBit(c+1256,"top d_cache valid_0_6", false,-1);
        tracep->declBit(c+1257,"top d_cache valid_0_7", false,-1);
        tracep->declBit(c+1258,"top d_cache valid_0_8", false,-1);
        tracep->declBit(c+1259,"top d_cache valid_0_9", false,-1);
        tracep->declBit(c+1260,"top d_cache valid_0_10", false,-1);
        tracep->declBit(c+1261,"top d_cache valid_0_11", false,-1);
        tracep->declBit(c+1262,"top d_cache valid_0_12", false,-1);
        tracep->declBit(c+1263,"top d_cache valid_0_13", false,-1);
        tracep->declBit(c+1264,"top d_cache valid_0_14", false,-1);
        tracep->declBit(c+1265,"top d_cache valid_0_15", false,-1);
        tracep->declBit(c+1266,"top d_cache valid_1_0", false,-1);
        tracep->declBit(c+1267,"top d_cache valid_1_1", false,-1);
        tracep->declBit(c+1268,"top d_cache valid_1_2", false,-1);
        tracep->declBit(c+1269,"top d_cache valid_1_3", false,-1);
        tracep->declBit(c+1270,"top d_cache valid_1_4", false,-1);
        tracep->declBit(c+1271,"top d_cache valid_1_5", false,-1);
        tracep->declBit(c+1272,"top d_cache valid_1_6", false,-1);
        tracep->declBit(c+1273,"top d_cache valid_1_7", false,-1);
        tracep->declBit(c+1274,"top d_cache valid_1_8", false,-1);
        tracep->declBit(c+1275,"top d_cache valid_1_9", false,-1);
        tracep->declBit(c+1276,"top d_cache valid_1_10", false,-1);
        tracep->declBit(c+1277,"top d_cache valid_1_11", false,-1);
        tracep->declBit(c+1278,"top d_cache valid_1_12", false,-1);
        tracep->declBit(c+1279,"top d_cache valid_1_13", false,-1);
        tracep->declBit(c+1280,"top d_cache valid_1_14", false,-1);
        tracep->declBit(c+1281,"top d_cache valid_1_15", false,-1);
        tracep->declBit(c+1282,"top d_cache dirty_0_0", false,-1);
        tracep->declBit(c+1283,"top d_cache dirty_0_1", false,-1);
        tracep->declBit(c+1284,"top d_cache dirty_0_2", false,-1);
        tracep->declBit(c+1285,"top d_cache dirty_0_3", false,-1);
        tracep->declBit(c+1286,"top d_cache dirty_0_4", false,-1);
        tracep->declBit(c+1287,"top d_cache dirty_0_5", false,-1);
        tracep->declBit(c+1288,"top d_cache dirty_0_6", false,-1);
        tracep->declBit(c+1289,"top d_cache dirty_0_7", false,-1);
        tracep->declBit(c+1290,"top d_cache dirty_0_8", false,-1);
        tracep->declBit(c+1291,"top d_cache dirty_0_9", false,-1);
        tracep->declBit(c+1292,"top d_cache dirty_0_10", false,-1);
        tracep->declBit(c+1293,"top d_cache dirty_0_11", false,-1);
        tracep->declBit(c+1294,"top d_cache dirty_0_12", false,-1);
        tracep->declBit(c+1295,"top d_cache dirty_0_13", false,-1);
        tracep->declBit(c+1296,"top d_cache dirty_0_14", false,-1);
        tracep->declBit(c+1297,"top d_cache dirty_0_15", false,-1);
        tracep->declBit(c+1298,"top d_cache dirty_1_0", false,-1);
        tracep->declBit(c+1299,"top d_cache dirty_1_1", false,-1);
        tracep->declBit(c+1300,"top d_cache dirty_1_2", false,-1);
        tracep->declBit(c+1301,"top d_cache dirty_1_3", false,-1);
        tracep->declBit(c+1302,"top d_cache dirty_1_4", false,-1);
        tracep->declBit(c+1303,"top d_cache dirty_1_5", false,-1);
        tracep->declBit(c+1304,"top d_cache dirty_1_6", false,-1);
        tracep->declBit(c+1305,"top d_cache dirty_1_7", false,-1);
        tracep->declBit(c+1306,"top d_cache dirty_1_8", false,-1);
        tracep->declBit(c+1307,"top d_cache dirty_1_9", false,-1);
        tracep->declBit(c+1308,"top d_cache dirty_1_10", false,-1);
        tracep->declBit(c+1309,"top d_cache dirty_1_11", false,-1);
        tracep->declBit(c+1310,"top d_cache dirty_1_12", false,-1);
        tracep->declBit(c+1311,"top d_cache dirty_1_13", false,-1);
        tracep->declBit(c+1312,"top d_cache dirty_1_14", false,-1);
        tracep->declBit(c+1313,"top d_cache dirty_1_15", false,-1);
        tracep->declBit(c+1314,"top d_cache way0_hit", false,-1);
        tracep->declBit(c+1315,"top d_cache way1_hit", false,-1);
        tracep->declArray(c+1316,"top d_cache write_back_data", false,-1, 511,0);
        tracep->declBus(c+1332,"top d_cache write_back_addr", false,-1, 31,0);
        tracep->declBus(c+1333,"top d_cache unuse_way", false,-1, 1,0);
        tracep->declQuad(c+1334,"top d_cache receive_data_0", false,-1, 63,0);
        tracep->declQuad(c+1336,"top d_cache receive_data_1", false,-1, 63,0);
        tracep->declQuad(c+1338,"top d_cache receive_data_2", false,-1, 63,0);
        tracep->declQuad(c+1340,"top d_cache receive_data_3", false,-1, 63,0);
        tracep->declQuad(c+1342,"top d_cache receive_data_4", false,-1, 63,0);
        tracep->declQuad(c+1344,"top d_cache receive_data_5", false,-1, 63,0);
        tracep->declQuad(c+1346,"top d_cache receive_data_6", false,-1, 63,0);
        tracep->declQuad(c+1348,"top d_cache receive_data_7", false,-1, 63,0);
        tracep->declBus(c+1350,"top d_cache receive_num", false,-1, 2,0);
        tracep->declBit(c+1351,"top d_cache quene", false,-1);
        tracep->declBus(c+1352,"top d_cache offset", false,-1, 2,0);
        tracep->declBus(c+1353,"top d_cache index", false,-1, 6,0);
        tracep->declBus(c+1354,"top d_cache tag", false,-1, 21,0);
        tracep->declBus(c+1355,"top d_cache shift_bit", false,-1, 5,0);
        tracep->declQuad(c+1356,"top d_cache wmask", false,-1, 63,0);
        tracep->declBus(c+1358,"top d_cache state", false,-1, 2,0);
        tracep->declBus(c+76,"top idu_step io_inst", false,-1, 31,0);
        tracep->declBus(c+77,"top idu_step io_inst_now", false,-1, 31,0);
        tracep->declBus(c+78,"top idu_step io_rs1", false,-1, 4,0);
        tracep->declBus(c+79,"top idu_step io_rs2", false,-1, 4,0);
        tracep->declBus(c+80,"top idu_step io_rd", false,-1, 4,0);
        tracep->declQuad(c+81,"top idu_step io_imm", false,-1, 63,0);
        tracep->declBit(c+83,"top idu_step io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+84,"top idu_step io_ctrl_sign_csr_write", false,-1);
        tracep->declBit(c+85,"top idu_step io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+86,"top idu_step io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declBit(c+20,"top idu_step io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+21,"top idu_step io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+25,"top idu_step io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBus(c+80,"top idu_step rd", false,-1, 4,0);
        tracep->declBus(c+1359,"top idu_step imm_imm", false,-1, 11,0);
        tracep->declBus(c+1360,"top idu_step imm_imm_1", false,-1, 19,0);
        tracep->declBus(c+1361,"top idu_step imm_imm_2", false,-1, 19,0);
        tracep->declBus(c+1362,"top idu_step imm_imm_3", false,-1, 11,0);
        tracep->declBus(c+1363,"top idu_step imm_imm_4", false,-1, 11,0);
        tracep->declBus(c+1364,"top idu_step inst_type", false,-1, 31,0);
        tracep->declBit(c+1645,"top exu_step clock", false,-1);
        tracep->declBit(c+1646,"top exu_step reset", false,-1);
        tracep->declQuad(c+65,"top exu_step io_pc", false,-1, 63,0);
        tracep->declQuad(c+87,"top exu_step io_pc_next", false,-1, 63,0);
        tracep->declBus(c+77,"top exu_step io_inst_now", false,-1, 31,0);
        tracep->declBus(c+78,"top exu_step io_rs1", false,-1, 4,0);
        tracep->declBus(c+79,"top exu_step io_rs2", false,-1, 4,0);
        tracep->declBus(c+80,"top exu_step io_rd", false,-1, 4,0);
        tracep->declQuad(c+81,"top exu_step io_imm", false,-1, 63,0);
        tracep->declBit(c+83,"top exu_step io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+84,"top exu_step io_ctrl_sign_csr_write", false,-1);
        tracep->declBit(c+85,"top exu_step io_ctrl_sign_src2_is_imm", false,-1);
        tracep->declBit(c+86,"top exu_step io_ctrl_sign_src1_is_pc", false,-1);
        tracep->declBit(c+20,"top exu_step io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+21,"top exu_step io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+25,"top exu_step io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declQuad(c+89,"top exu_step io_res2rd", false,-1, 63,0);
        tracep->declBit(c+68,"top exu_step io_inst_valid", false,-1);
        tracep->declBit(c+20,"top exu_step io_inst_store", false,-1);
        tracep->declBit(c+21,"top exu_step io_inst_load", false,-1);
        tracep->declBus(c+22,"top exu_step io_Mem_addr", false,-1, 31,0);
        tracep->declQuad(c+26,"top exu_step io_Mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+23,"top exu_step io_Mem_wdata", false,-1, 63,0);
        tracep->declBus(c+25,"top exu_step io_Mem_wstrb", false,-1, 7,0);
        tracep->declBit(c+29,"top exu_step io_rdata_valid", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1365+i*2,"top exu_step Regfile", true,(i+0), 63,0);}}
        tracep->declBit(c+1655,"top exu_step Regfile_src1_value_MPORT_en", false,-1);
        tracep->declBus(c+78,"top exu_step Regfile_src1_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1429,"top exu_step Regfile_src1_value_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_src2_value_MPORT_en", false,-1);
        tracep->declBus(c+79,"top exu_step Regfile_src2_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1431,"top exu_step Regfile_src2_value_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_value_MPORT_en", false,-1);
        tracep->declBus(c+80,"top exu_step Regfile_reg_value_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1433,"top exu_step Regfile_reg_value_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_MPORT_4_en", false,-1);
        tracep->declBus(c+1656,"top exu_step Regfile_MPORT_4_addr", false,-1, 4,0);
        tracep->declQuad(c+1435,"top exu_step Regfile_MPORT_4_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_j_pc_MPORT_en", false,-1);
        tracep->declBus(c+78,"top exu_step Regfile_j_pc_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1429,"top exu_step Regfile_j_pc_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_j_pc_MPORT_1_en", false,-1);
        tracep->declBus(c+79,"top exu_step Regfile_j_pc_MPORT_1_addr", false,-1, 4,0);
        tracep->declQuad(c+1431,"top exu_step Regfile_j_pc_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_j_pc_MPORT_2_en", false,-1);
        tracep->declBus(c+78,"top exu_step Regfile_j_pc_MPORT_2_addr", false,-1, 4,0);
        tracep->declQuad(c+1429,"top exu_step Regfile_j_pc_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_j_pc_MPORT_3_en", false,-1);
        tracep->declBus(c+79,"top exu_step Regfile_j_pc_MPORT_3_addr", false,-1, 4,0);
        tracep->declQuad(c+1431,"top exu_step Regfile_j_pc_MPORT_3_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_j_pc_MPORT_4_en", false,-1);
        tracep->declBus(c+78,"top exu_step Regfile_j_pc_MPORT_4_addr", false,-1, 4,0);
        tracep->declQuad(c+1429,"top exu_step Regfile_j_pc_MPORT_4_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_j_pc_MPORT_5_en", false,-1);
        tracep->declBus(c+79,"top exu_step Regfile_j_pc_MPORT_5_addr", false,-1, 4,0);
        tracep->declQuad(c+1431,"top exu_step Regfile_j_pc_MPORT_5_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_j_pc_MPORT_6_en", false,-1);
        tracep->declBus(c+78,"top exu_step Regfile_j_pc_MPORT_6_addr", false,-1, 4,0);
        tracep->declQuad(c+1429,"top exu_step Regfile_j_pc_MPORT_6_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_j_pc_MPORT_7_en", false,-1);
        tracep->declBus(c+79,"top exu_step Regfile_j_pc_MPORT_7_addr", false,-1, 4,0);
        tracep->declQuad(c+1431,"top exu_step Regfile_j_pc_MPORT_7_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_j_pc_MPORT_8_en", false,-1);
        tracep->declBus(c+78,"top exu_step Regfile_j_pc_MPORT_8_addr", false,-1, 4,0);
        tracep->declQuad(c+1429,"top exu_step Regfile_j_pc_MPORT_8_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_j_pc_MPORT_9_en", false,-1);
        tracep->declBus(c+79,"top exu_step Regfile_j_pc_MPORT_9_addr", false,-1, 4,0);
        tracep->declQuad(c+1431,"top exu_step Regfile_j_pc_MPORT_9_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_j_pc_MPORT_10_en", false,-1);
        tracep->declBus(c+78,"top exu_step Regfile_j_pc_MPORT_10_addr", false,-1, 4,0);
        tracep->declQuad(c+1429,"top exu_step Regfile_j_pc_MPORT_10_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_j_pc_MPORT_11_en", false,-1);
        tracep->declBus(c+79,"top exu_step Regfile_j_pc_MPORT_11_addr", false,-1, 4,0);
        tracep->declQuad(c+1431,"top exu_step Regfile_j_pc_MPORT_11_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_0_MPORT_en", false,-1);
        tracep->declBus(c+1657,"top exu_step Regfile_reg_trace_io_input_reg_0_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1437,"top exu_step Regfile_reg_trace_io_input_reg_0_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_1_MPORT_en", false,-1);
        tracep->declBus(c+1658,"top exu_step Regfile_reg_trace_io_input_reg_1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1439,"top exu_step Regfile_reg_trace_io_input_reg_1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_2_MPORT_en", false,-1);
        tracep->declBus(c+1659,"top exu_step Regfile_reg_trace_io_input_reg_2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1441,"top exu_step Regfile_reg_trace_io_input_reg_2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_3_MPORT_en", false,-1);
        tracep->declBus(c+1660,"top exu_step Regfile_reg_trace_io_input_reg_3_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1443,"top exu_step Regfile_reg_trace_io_input_reg_3_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_4_MPORT_en", false,-1);
        tracep->declBus(c+1661,"top exu_step Regfile_reg_trace_io_input_reg_4_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1445,"top exu_step Regfile_reg_trace_io_input_reg_4_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_5_MPORT_en", false,-1);
        tracep->declBus(c+1662,"top exu_step Regfile_reg_trace_io_input_reg_5_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1447,"top exu_step Regfile_reg_trace_io_input_reg_5_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_6_MPORT_en", false,-1);
        tracep->declBus(c+1663,"top exu_step Regfile_reg_trace_io_input_reg_6_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1449,"top exu_step Regfile_reg_trace_io_input_reg_6_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_7_MPORT_en", false,-1);
        tracep->declBus(c+1664,"top exu_step Regfile_reg_trace_io_input_reg_7_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1451,"top exu_step Regfile_reg_trace_io_input_reg_7_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_8_MPORT_en", false,-1);
        tracep->declBus(c+1665,"top exu_step Regfile_reg_trace_io_input_reg_8_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1453,"top exu_step Regfile_reg_trace_io_input_reg_8_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_9_MPORT_en", false,-1);
        tracep->declBus(c+1666,"top exu_step Regfile_reg_trace_io_input_reg_9_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1455,"top exu_step Regfile_reg_trace_io_input_reg_9_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_10_MPORT_en", false,-1);
        tracep->declBus(c+1667,"top exu_step Regfile_reg_trace_io_input_reg_10_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1457,"top exu_step Regfile_reg_trace_io_input_reg_10_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_11_MPORT_en", false,-1);
        tracep->declBus(c+1668,"top exu_step Regfile_reg_trace_io_input_reg_11_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1459,"top exu_step Regfile_reg_trace_io_input_reg_11_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_12_MPORT_en", false,-1);
        tracep->declBus(c+1669,"top exu_step Regfile_reg_trace_io_input_reg_12_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1461,"top exu_step Regfile_reg_trace_io_input_reg_12_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_13_MPORT_en", false,-1);
        tracep->declBus(c+1670,"top exu_step Regfile_reg_trace_io_input_reg_13_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1463,"top exu_step Regfile_reg_trace_io_input_reg_13_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_14_MPORT_en", false,-1);
        tracep->declBus(c+1671,"top exu_step Regfile_reg_trace_io_input_reg_14_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1465,"top exu_step Regfile_reg_trace_io_input_reg_14_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_15_MPORT_en", false,-1);
        tracep->declBus(c+1672,"top exu_step Regfile_reg_trace_io_input_reg_15_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1467,"top exu_step Regfile_reg_trace_io_input_reg_15_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_16_MPORT_en", false,-1);
        tracep->declBus(c+1673,"top exu_step Regfile_reg_trace_io_input_reg_16_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1469,"top exu_step Regfile_reg_trace_io_input_reg_16_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_17_MPORT_en", false,-1);
        tracep->declBus(c+1656,"top exu_step Regfile_reg_trace_io_input_reg_17_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1435,"top exu_step Regfile_reg_trace_io_input_reg_17_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_18_MPORT_en", false,-1);
        tracep->declBus(c+1674,"top exu_step Regfile_reg_trace_io_input_reg_18_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1471,"top exu_step Regfile_reg_trace_io_input_reg_18_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_19_MPORT_en", false,-1);
        tracep->declBus(c+1675,"top exu_step Regfile_reg_trace_io_input_reg_19_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1473,"top exu_step Regfile_reg_trace_io_input_reg_19_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_20_MPORT_en", false,-1);
        tracep->declBus(c+1676,"top exu_step Regfile_reg_trace_io_input_reg_20_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1475,"top exu_step Regfile_reg_trace_io_input_reg_20_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_21_MPORT_en", false,-1);
        tracep->declBus(c+1677,"top exu_step Regfile_reg_trace_io_input_reg_21_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1477,"top exu_step Regfile_reg_trace_io_input_reg_21_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_22_MPORT_en", false,-1);
        tracep->declBus(c+1678,"top exu_step Regfile_reg_trace_io_input_reg_22_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1479,"top exu_step Regfile_reg_trace_io_input_reg_22_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_23_MPORT_en", false,-1);
        tracep->declBus(c+1679,"top exu_step Regfile_reg_trace_io_input_reg_23_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1481,"top exu_step Regfile_reg_trace_io_input_reg_23_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_24_MPORT_en", false,-1);
        tracep->declBus(c+1680,"top exu_step Regfile_reg_trace_io_input_reg_24_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1483,"top exu_step Regfile_reg_trace_io_input_reg_24_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_25_MPORT_en", false,-1);
        tracep->declBus(c+1681,"top exu_step Regfile_reg_trace_io_input_reg_25_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1485,"top exu_step Regfile_reg_trace_io_input_reg_25_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_26_MPORT_en", false,-1);
        tracep->declBus(c+1682,"top exu_step Regfile_reg_trace_io_input_reg_26_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1487,"top exu_step Regfile_reg_trace_io_input_reg_26_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_27_MPORT_en", false,-1);
        tracep->declBus(c+1683,"top exu_step Regfile_reg_trace_io_input_reg_27_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1489,"top exu_step Regfile_reg_trace_io_input_reg_27_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_28_MPORT_en", false,-1);
        tracep->declBus(c+1684,"top exu_step Regfile_reg_trace_io_input_reg_28_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1491,"top exu_step Regfile_reg_trace_io_input_reg_28_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_29_MPORT_en", false,-1);
        tracep->declBus(c+1685,"top exu_step Regfile_reg_trace_io_input_reg_29_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1493,"top exu_step Regfile_reg_trace_io_input_reg_29_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_30_MPORT_en", false,-1);
        tracep->declBus(c+1686,"top exu_step Regfile_reg_trace_io_input_reg_30_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1495,"top exu_step Regfile_reg_trace_io_input_reg_30_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_reg_trace_io_input_reg_31_MPORT_en", false,-1);
        tracep->declBus(c+1687,"top exu_step Regfile_reg_trace_io_input_reg_31_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1497,"top exu_step Regfile_reg_trace_io_input_reg_31_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_mem_wdata_MPORT_en", false,-1);
        tracep->declBus(c+79,"top exu_step Regfile_mem_wdata_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+1431,"top exu_step Regfile_mem_wdata_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_mem_wdata_MPORT_1_en", false,-1);
        tracep->declBus(c+79,"top exu_step Regfile_mem_wdata_MPORT_1_addr", false,-1, 4,0);
        tracep->declQuad(c+1431,"top exu_step Regfile_mem_wdata_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_mem_wdata_MPORT_2_en", false,-1);
        tracep->declBus(c+79,"top exu_step Regfile_mem_wdata_MPORT_2_addr", false,-1, 4,0);
        tracep->declQuad(c+1431,"top exu_step Regfile_mem_wdata_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step Regfile_mem_wdata_MPORT_3_en", false,-1);
        tracep->declBus(c+79,"top exu_step Regfile_mem_wdata_MPORT_3_addr", false,-1, 4,0);
        tracep->declQuad(c+1431,"top exu_step Regfile_mem_wdata_MPORT_3_data", false,-1, 63,0);
        tracep->declQuad(c+1499,"top exu_step Regfile_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+80,"top exu_step Regfile_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+1655,"top exu_step Regfile_MPORT_mask", false,-1);
        tracep->declBit(c+1655,"top exu_step Regfile_MPORT_en", false,-1);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+1501+i*2,"top exu_step CSR_Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+1655,"top exu_step CSR_Reg_io_res2rd_MPORT_en", false,-1);
        tracep->declBus(c+1509,"top exu_step CSR_Reg_io_res2rd_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+1510,"top exu_step CSR_Reg_io_res2rd_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step CSR_Reg_io_res2rd_MPORT_1_en", false,-1);
        tracep->declBus(c+1509,"top exu_step CSR_Reg_io_res2rd_MPORT_1_addr", false,-1, 1,0);
        tracep->declQuad(c+1510,"top exu_step CSR_Reg_io_res2rd_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step CSR_Reg_io_res2rd_MPORT_2_en", false,-1);
        tracep->declBus(c+1509,"top exu_step CSR_Reg_io_res2rd_MPORT_2_addr", false,-1, 1,0);
        tracep->declQuad(c+1510,"top exu_step CSR_Reg_io_res2rd_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step CSR_Reg_csr_wdata_MPORT_en", false,-1);
        tracep->declBus(c+1509,"top exu_step CSR_Reg_csr_wdata_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+1510,"top exu_step CSR_Reg_csr_wdata_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step CSR_Reg_csr_wdata_MPORT_1_en", false,-1);
        tracep->declBus(c+1509,"top exu_step CSR_Reg_csr_wdata_MPORT_1_addr", false,-1, 1,0);
        tracep->declQuad(c+1510,"top exu_step CSR_Reg_csr_wdata_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step CSR_Reg_MPORT_2_en", false,-1);
        tracep->declBus(c+1688,"top exu_step CSR_Reg_MPORT_2_addr", false,-1, 1,0);
        tracep->declQuad(c+1512,"top exu_step CSR_Reg_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step CSR_Reg_MPORT_5_en", false,-1);
        tracep->declBus(c+1689,"top exu_step CSR_Reg_MPORT_5_addr", false,-1, 1,0);
        tracep->declQuad(c+1514,"top exu_step CSR_Reg_MPORT_5_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step CSR_Reg_MPORT_7_en", false,-1);
        tracep->declBus(c+1509,"top exu_step CSR_Reg_MPORT_7_addr", false,-1, 1,0);
        tracep->declQuad(c+1510,"top exu_step CSR_Reg_MPORT_7_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step CSR_Reg_j_pc_MPORT_12_en", false,-1);
        tracep->declBus(c+1690,"top exu_step CSR_Reg_j_pc_MPORT_12_addr", false,-1, 1,0);
        tracep->declQuad(c+1516,"top exu_step CSR_Reg_j_pc_MPORT_12_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step CSR_Reg_j_pc_MPORT_13_en", false,-1);
        tracep->declBus(c+1688,"top exu_step CSR_Reg_j_pc_MPORT_13_addr", false,-1, 1,0);
        tracep->declQuad(c+1512,"top exu_step CSR_Reg_j_pc_MPORT_13_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step CSR_Reg_reg_trace_io_csr_reg_0_MPORT_en", false,-1);
        tracep->declBus(c+1690,"top exu_step CSR_Reg_reg_trace_io_csr_reg_0_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+1516,"top exu_step CSR_Reg_reg_trace_io_csr_reg_0_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step CSR_Reg_reg_trace_io_csr_reg_1_MPORT_en", false,-1);
        tracep->declBus(c+1688,"top exu_step CSR_Reg_reg_trace_io_csr_reg_1_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+1512,"top exu_step CSR_Reg_reg_trace_io_csr_reg_1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1655,"top exu_step CSR_Reg_reg_trace_io_csr_reg_2_MPORT_en", false,-1);
        tracep->declBus(c+1691,"top exu_step CSR_Reg_reg_trace_io_csr_reg_2_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+1518,"top exu_step CSR_Reg_reg_trace_io_csr_reg_2_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+1520,"top exu_step CSR_Reg_MPORT_1_data", false,-1, 63,0);
        tracep->declBus(c+1688,"top exu_step CSR_Reg_MPORT_1_addr", false,-1, 1,0);
        tracep->declBit(c+1655,"top exu_step CSR_Reg_MPORT_1_mask", false,-1);
        tracep->declBit(c+1655,"top exu_step CSR_Reg_MPORT_1_en", false,-1);
        tracep->declQuad(c+1522,"top exu_step CSR_Reg_MPORT_3_data", false,-1, 63,0);
        tracep->declBus(c+1689,"top exu_step CSR_Reg_MPORT_3_addr", false,-1, 1,0);
        tracep->declBit(c+1655,"top exu_step CSR_Reg_MPORT_3_mask", false,-1);
        tracep->declBit(c+1655,"top exu_step CSR_Reg_MPORT_3_en", false,-1);
        tracep->declQuad(c+1524,"top exu_step CSR_Reg_MPORT_6_data", false,-1, 63,0);
        tracep->declBus(c+1509,"top exu_step CSR_Reg_MPORT_6_addr", false,-1, 1,0);
        tracep->declBit(c+1655,"top exu_step CSR_Reg_MPORT_6_mask", false,-1);
        tracep->declBit(c+1655,"top exu_step CSR_Reg_MPORT_6_en", false,-1);
        tracep->declQuad(c+1437,"top exu_step reg_trace_input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+1439,"top exu_step reg_trace_input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+1441,"top exu_step reg_trace_input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+1443,"top exu_step reg_trace_input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+1445,"top exu_step reg_trace_input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+1447,"top exu_step reg_trace_input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+1449,"top exu_step reg_trace_input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+1451,"top exu_step reg_trace_input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+1453,"top exu_step reg_trace_input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+1455,"top exu_step reg_trace_input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+1457,"top exu_step reg_trace_input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+1459,"top exu_step reg_trace_input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+1461,"top exu_step reg_trace_input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+1463,"top exu_step reg_trace_input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+1465,"top exu_step reg_trace_input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+1467,"top exu_step reg_trace_input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+1469,"top exu_step reg_trace_input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+1435,"top exu_step reg_trace_input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+1471,"top exu_step reg_trace_input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+1473,"top exu_step reg_trace_input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+1475,"top exu_step reg_trace_input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+1477,"top exu_step reg_trace_input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+1479,"top exu_step reg_trace_input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+1481,"top exu_step reg_trace_input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+1483,"top exu_step reg_trace_input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+1485,"top exu_step reg_trace_input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+1487,"top exu_step reg_trace_input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+1489,"top exu_step reg_trace_input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+1491,"top exu_step reg_trace_input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+1493,"top exu_step reg_trace_input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+1495,"top exu_step reg_trace_input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+1497,"top exu_step reg_trace_input_reg_31", false,-1, 63,0);
        tracep->declQuad(c+1516,"top exu_step reg_trace_csr_reg_0", false,-1, 63,0);
        tracep->declQuad(c+1512,"top exu_step reg_trace_csr_reg_1", false,-1, 63,0);
        tracep->declQuad(c+1518,"top exu_step reg_trace_csr_reg_2", false,-1, 63,0);
        tracep->declQuad(c+1692,"top exu_step reg_trace_csr_reg_3", false,-1, 63,0);
        tracep->declQuad(c+65,"top exu_step reg_trace_pc", false,-1, 63,0);
        tracep->declBus(c+1526,"top exu_step csr_addr", false,-1, 11,0);
        tracep->declQuad(c+1527,"top exu_step src1_value", false,-1, 63,0);
        tracep->declQuad(c+1529,"top exu_step src2_value", false,-1, 63,0);
        tracep->declQuad(c+1531,"top exu_step add_res", false,-1, 63,0);
        tracep->declQuad(c+1533,"top exu_step sub_res", false,-1, 63,0);
        tracep->declQuad(c+1535,"top exu_step sra_res", false,-1, 63,0);
        tracep->declQuad(c+1537,"top exu_step srl_res", false,-1, 63,0);
        tracep->declArray(c+1539,"top exu_step sll_res", false,-1, 126,0);
        tracep->declBus(c+1543,"top exu_step sraw_res", false,-1, 31,0);
        tracep->declBus(c+1544,"top exu_step srlw_res", false,-1, 31,0);
        tracep->declQuad(c+1545,"top exu_step sllw_res", false,-1, 62,0);
        tracep->declQuad(c+1547,"top exu_step or_res", false,-1, 63,0);
        tracep->declQuad(c+1549,"top exu_step xor_res", false,-1, 63,0);
        tracep->declQuad(c+1551,"top exu_step and_res", false,-1, 63,0);
        tracep->declQuad(c+1553,"top exu_step mlu_res", false,-1, 63,0);
        tracep->declBus(c+1555,"top exu_step mluw_res", false,-1, 31,0);
        tracep->declBus(c+1556,"top exu_step divw_res", false,-1, 31,0);
        tracep->declBus(c+1557,"top exu_step divuw_res", false,-1, 31,0);
        tracep->declBus(c+1558,"top exu_step remw_res", false,-1, 31,0);
        tracep->declBus(c+1559,"top exu_step remuw_res", false,-1, 31,0);
        tracep->declArray(c+1560,"top exu_step div_res", false,-1, 64,0);
        tracep->declQuad(c+1563,"top exu_step divu_res", false,-1, 63,0);
        tracep->declQuad(c+1565,"top exu_step rem_res", false,-1, 63,0);
        tracep->declQuad(c+1567,"top exu_step remu_res", false,-1, 63,0);
        tracep->declQuad(c+1569,"top exu_step reg_value", false,-1, 63,0);
        tracep->declQuad(c+1571,"top exu_step csr_wdata", false,-1, 63,0);
        tracep->declQuad(c+87,"top exu_step pc_next", false,-1, 63,0);
        tracep->declQuad(c+1437,"top exu_step reg_trace input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+1439,"top exu_step reg_trace input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+1441,"top exu_step reg_trace input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+1443,"top exu_step reg_trace input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+1445,"top exu_step reg_trace input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+1447,"top exu_step reg_trace input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+1449,"top exu_step reg_trace input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+1451,"top exu_step reg_trace input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+1453,"top exu_step reg_trace input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+1455,"top exu_step reg_trace input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+1457,"top exu_step reg_trace input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+1459,"top exu_step reg_trace input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+1461,"top exu_step reg_trace input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+1463,"top exu_step reg_trace input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+1465,"top exu_step reg_trace input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+1467,"top exu_step reg_trace input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+1469,"top exu_step reg_trace input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+1435,"top exu_step reg_trace input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+1471,"top exu_step reg_trace input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+1473,"top exu_step reg_trace input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+1475,"top exu_step reg_trace input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+1477,"top exu_step reg_trace input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+1479,"top exu_step reg_trace input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+1481,"top exu_step reg_trace input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+1483,"top exu_step reg_trace input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+1485,"top exu_step reg_trace input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+1487,"top exu_step reg_trace input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+1489,"top exu_step reg_trace input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+1491,"top exu_step reg_trace input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+1493,"top exu_step reg_trace input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+1495,"top exu_step reg_trace input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+1497,"top exu_step reg_trace input_reg_31", false,-1, 63,0);
        tracep->declQuad(c+1516,"top exu_step reg_trace csr_reg_0", false,-1, 63,0);
        tracep->declQuad(c+1512,"top exu_step reg_trace csr_reg_1", false,-1, 63,0);
        tracep->declQuad(c+1518,"top exu_step reg_trace csr_reg_2", false,-1, 63,0);
        tracep->declQuad(c+1692,"top exu_step reg_trace csr_reg_3", false,-1, 63,0);
        tracep->declQuad(c+65,"top exu_step reg_trace pc", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1573+i*2,"top exu_step reg_trace traceregs", true,(i+0), 63,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+1637+i*2,"top exu_step reg_trace csr_regs", true,(i+0), 63,0);}}
        tracep->declBus(c+91,"top dpi flag", false,-1, 31,0);
        tracep->declBus(c+92,"top dpi ecall_flag", false,-1, 31,0);
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
    VlWide<4>/*127:0*/ __Vtemp2259;
    VlWide<4>/*127:0*/ __Vtemp2260;
    VlWide<4>/*127:0*/ __Vtemp2261;
    VlWide<3>/*95:0*/ __Vtemp2264;
    VlWide<3>/*95:0*/ __Vtemp2265;
    VlWide<3>/*95:0*/ __Vtemp2267;
    VlWide<3>/*95:0*/ __Vtemp2268;
    VlWide<3>/*95:0*/ __Vtemp2269;
    VlWide<3>/*95:0*/ __Vtemp2270;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                    ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2214)
                                        : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                            ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2214)
                                            : ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1043)
                                                : 0U)))
                                    : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                        ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1043)
                                        : ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                            ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2214)
                                            : ((3U 
                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2214)
                                                : 0U))))),32);
        tracep->fullCData(oldp+2,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                    ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2215)
                                        : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                            ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2215)
                                            : ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1044)
                                                : 0U)))
                                    : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                        ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1044)
                                        : ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                            ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2215)
                                            : ((3U 
                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2215)
                                                : 0U))))),8);
        tracep->fullBit(oldp+3,(vlSelf->top__DOT__arbiter_io_axi_out_arvalid));
        tracep->fullBit(oldp+4,(vlSelf->top__DOT__arbiter_io_axi_out_rready));
        tracep->fullIData(oldp+5,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                    ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                        ? vlSelf->top__DOT__d_cache_io_to_axi_awaddr
                                        : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                            ? vlSelf->top__DOT__d_cache_io_to_axi_awaddr
                                            : 0U)) : 
                                   ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                     ? 0U : ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                              ? vlSelf->top__DOT__d_cache_io_to_axi_awaddr
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? vlSelf->top__DOT__d_cache_io_to_axi_awaddr
                                                  : 0U))))),32);
        tracep->fullCData(oldp+6,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                    ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                        ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_awlen)
                                        : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                            ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_awlen)
                                            : 0U)) : 
                                   ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                     ? 0U : ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                              ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_awlen)
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_awlen)
                                                  : 0U))))),8);
        tracep->fullBit(oldp+7,(vlSelf->top__DOT__arbiter_io_axi_out_awvalid));
        tracep->fullQData(oldp+8,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                    ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                        ? (((QData)((IData)(
                                                            vlSelf->top__DOT__d_cache__DOT___GEN_2224[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->top__DOT__d_cache__DOT___GEN_2224[0U])))
                                        : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                            ? (((QData)((IData)(
                                                                vlSelf->top__DOT__d_cache__DOT___GEN_2224[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__d_cache__DOT___GEN_2224[0U])))
                                            : 0ULL))
                                    : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                        ? 0ULL : ((2U 
                                                   == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT___GEN_2224[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___GEN_2224[0U])))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___GEN_2224[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__d_cache__DOT___GEN_2224[0U])))
                                                    : 0ULL))))),64);
        tracep->fullCData(oldp+10,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                     ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                         ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wstrb)
                                         : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                             ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wstrb)
                                             : 0U))
                                     : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                         ? 0U : ((2U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wstrb)
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wstrb)
                                                   : 0U))))),8);
        tracep->fullBit(oldp+11,(vlSelf->top__DOT__arbiter_io_axi_out_wvalid));
        tracep->fullBit(oldp+12,(vlSelf->top__DOT__arbiter_io_axi_out_bready));
        tracep->fullQData(oldp+13,(vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata),64);
        tracep->fullBit(oldp+15,(vlSelf->top__DOT__axi_io_axi_out_rlast));
        tracep->fullBit(oldp+16,(vlSelf->top__DOT__axi__DOT__axi_rvalid));
        tracep->fullBit(oldp+17,(vlSelf->top__DOT__axi__DOT__axi_awready));
        tracep->fullBit(oldp+18,(vlSelf->top__DOT__axi__DOT__axi_wready));
        tracep->fullBit(oldp+19,(vlSelf->top__DOT__axi__DOT__axi_bvalid));
        tracep->fullBit(oldp+20,((0x44U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188))));
        tracep->fullBit(oldp+21,(vlSelf->top__DOT__idu_step_io_ctrl_sign_Readmem_en));
        tracep->fullIData(oldp+22,((IData)(vlSelf->top__DOT__exu_step__DOT__add_res)),32);
        tracep->fullQData(oldp+23,(vlSelf->top__DOT__exu_step_io_Mem_wdata),64);
        tracep->fullCData(oldp+25,(vlSelf->top__DOT__idu_step_io_ctrl_sign_Wmask),8);
        tracep->fullQData(oldp+26,((((QData)((IData)(
                                                     vlSelf->top__DOT__d_cache__DOT___GEN_2229[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__d_cache__DOT___GEN_2229[0U])))),64);
        tracep->fullBit(oldp+28,((1U & ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                        | ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                            ? ((~ (IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)) 
                                               & (~ (IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)))
                                            : ((3U 
                                                == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                               | ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                  | (6U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__state)))))))));
        tracep->fullBit(oldp+29,(vlSelf->top__DOT__d_cache_io_to_lsu_rvalid));
        tracep->fullBit(oldp+30,(((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                  & ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2140)
                                      : ((3U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                         & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                            & ((0U 
                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                                    ? (IData)(vlSelf->top__DOT__axi__DOT__axi_awready)
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid) 
                                                    & (IData)(vlSelf->top__DOT__axi__DOT__axi_awready)))
                                                : (
                                                   (1U 
                                                    != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                                   & ((2U 
                                                       == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                       ? (IData)(vlSelf->top__DOT__axi__DOT__axi_awready)
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                                       & (IData)(vlSelf->top__DOT__axi__DOT__axi_awready)))))))))));
        tracep->fullBit(oldp+31,(((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                  & ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2140)
                                      : ((3U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                         & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                            & (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_wready)))))));
        tracep->fullBit(oldp+32,(vlSelf->top__DOT__d_cache_io_to_lsu_bvalid));
        tracep->fullBit(oldp+33,(vlSelf->top__DOT__lsu_step__DOT__axi_arvalid));
        tracep->fullBit(oldp+34,(vlSelf->top__DOT__lsu_step__DOT__axi_rready));
        tracep->fullBit(oldp+35,(vlSelf->top__DOT__lsu_step__DOT__axi_awvalid));
        tracep->fullBit(oldp+36,(vlSelf->top__DOT__lsu_step__DOT__axi_wvalid));
        tracep->fullBit(oldp+37,(vlSelf->top__DOT__lsu_step__DOT__axi_bready));
        tracep->fullIData(oldp+38,((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1043)),32);
        tracep->fullCData(oldp+39,(vlSelf->top__DOT__i_cache__DOT___GEN_1044),8);
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__i_cache_io_to_axi_arvalid));
        tracep->fullBit(oldp+41,(vlSelf->top__DOT__i_cache_io_to_axi_rready));
        tracep->fullQData(oldp+42,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata),64);
        tracep->fullBit(oldp+44,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast));
        tracep->fullBit(oldp+45,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid));
        tracep->fullIData(oldp+46,((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2214)),32);
        tracep->fullCData(oldp+47,(vlSelf->top__DOT__d_cache__DOT___GEN_2215),8);
        tracep->fullBit(oldp+48,(vlSelf->top__DOT__d_cache_io_to_axi_arvalid));
        tracep->fullBit(oldp+49,(vlSelf->top__DOT__d_cache_io_to_axi_rready));
        tracep->fullIData(oldp+50,(vlSelf->top__DOT__d_cache_io_to_axi_awaddr),32);
        tracep->fullCData(oldp+51,(vlSelf->top__DOT__d_cache_io_to_axi_awlen),8);
        tracep->fullBit(oldp+52,(vlSelf->top__DOT__d_cache_io_to_axi_awvalid));
        tracep->fullQData(oldp+53,((((QData)((IData)(
                                                     vlSelf->top__DOT__d_cache__DOT___GEN_2224[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__d_cache__DOT___GEN_2224[0U])))),64);
        tracep->fullCData(oldp+55,(vlSelf->top__DOT__d_cache_io_to_axi_wstrb),8);
        tracep->fullBit(oldp+56,(vlSelf->top__DOT__d_cache_io_to_axi_wvalid));
        tracep->fullBit(oldp+57,(vlSelf->top__DOT__d_cache_io_to_axi_bready));
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata),64);
        tracep->fullBit(oldp+60,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rlast));
        tracep->fullBit(oldp+61,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid));
        tracep->fullBit(oldp+62,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                   ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                       ? (IData)(vlSelf->top__DOT__axi__DOT__axi_awready)
                                       : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid) 
                                          & (IData)(vlSelf->top__DOT__axi__DOT__axi_awready)))
                                   : ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                      & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                          ? (IData)(vlSelf->top__DOT__axi__DOT__axi_awready)
                                          : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                             & (IData)(vlSelf->top__DOT__axi__DOT__axi_awready)))))));
        tracep->fullBit(oldp+63,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_wready));
        tracep->fullBit(oldp+64,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid));
        tracep->fullQData(oldp+65,(vlSelf->top__DOT__pc_now),64);
        tracep->fullBit(oldp+67,(vlSelf->top__DOT__pc_valid));
        tracep->fullBit(oldp+68,(vlSelf->top__DOT__i_cache_io_to_ifu_rvalid));
        tracep->fullIData(oldp+69,(vlSelf->top__DOT__i_cache__DOT___GEN_1048[0U]),32);
        tracep->fullIData(oldp+70,(vlSelf->top__DOT__ifu_step__DOT__inst_reg),32);
        tracep->fullQData(oldp+71,((((QData)((IData)(
                                                     vlSelf->top__DOT__i_cache__DOT___GEN_1048[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__i_cache__DOT___GEN_1048[0U])))),64);
        tracep->fullBit(oldp+73,(vlSelf->top__DOT__i_cache_io_to_ifu_rlast));
        tracep->fullIData(oldp+74,((IData)(vlSelf->top__DOT__pc_now)),32);
        tracep->fullBit(oldp+75,(vlSelf->top__DOT__ifu_step__DOT__inst_ready));
        tracep->fullIData(oldp+76,(vlSelf->top__DOT__idu_step_io_inst),32);
        tracep->fullIData(oldp+77,(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194),32);
        tracep->fullCData(oldp+78,((0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+79,((0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+80,((0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                             >> 7U))),5);
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__idu_step_io_imm),64);
        tracep->fullBit(oldp+83,(((0x100073U != vlSelf->top__DOT__idu_step_io_inst) 
                                  & ((0x3023U != (0x707fU 
                                                  & vlSelf->top__DOT__idu_step_io_inst)) 
                                     & ((0x1023U != 
                                         (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                                        & ((0x23U != 
                                            (0x707fU 
                                             & vlSelf->top__DOT__idu_step_io_inst)) 
                                           & ((0x2023U 
                                               != (0x707fU 
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
        tracep->fullBit(oldp+84,(((0x1073U == (0x707fU 
                                               & vlSelf->top__DOT__idu_step_io_inst)) 
                                  | ((0x2073U == (0x707fU 
                                                  & vlSelf->top__DOT__idu_step_io_inst)) 
                                     | (0x3073U == 
                                        (0x707fU & vlSelf->top__DOT__idu_step_io_inst))))));
        tracep->fullBit(oldp+85,(vlSelf->top__DOT__idu_step_io_ctrl_sign_src2_is_imm));
        tracep->fullBit(oldp+86,(vlSelf->top__DOT__idu_step_io_ctrl_sign_src1_is_pc));
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__exu_step__DOT__pc_next),64);
        tracep->fullQData(oldp+89,((((QData)((IData)(
                                                     vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U])))),64);
        tracep->fullIData(oldp+91,((2U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))),32);
        tracep->fullIData(oldp+92,((0x3dU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))),32);
        tracep->fullBit(oldp+93,(vlSelf->top__DOT__execute_end));
        tracep->fullBit(oldp+94,(vlSelf->top__DOT__diff_step));
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__axi__DOT__araddr),64);
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__axi__DOT__awaddr),64);
        tracep->fullCData(oldp+99,(vlSelf->top__DOT__axi__DOT__arlen),8);
        tracep->fullCData(oldp+100,(vlSelf->top__DOT__axi__DOT__awlen),8);
        tracep->fullCData(oldp+101,(vlSelf->top__DOT__axi__DOT__state),3);
        tracep->fullCData(oldp+102,(vlSelf->top__DOT__lsu_step__DOT__state),2);
        tracep->fullCData(oldp+103,(vlSelf->top__DOT__arbiter__DOT__state),2);
        tracep->fullWData(oldp+104,(vlSelf->top__DOT__i_cache__DOT__ram_0_0),512);
        tracep->fullWData(oldp+120,(vlSelf->top__DOT__i_cache__DOT__ram_0_1),512);
        tracep->fullWData(oldp+136,(vlSelf->top__DOT__i_cache__DOT__ram_0_2),512);
        tracep->fullWData(oldp+152,(vlSelf->top__DOT__i_cache__DOT__ram_0_3),512);
        tracep->fullWData(oldp+168,(vlSelf->top__DOT__i_cache__DOT__ram_0_4),512);
        tracep->fullWData(oldp+184,(vlSelf->top__DOT__i_cache__DOT__ram_0_5),512);
        tracep->fullWData(oldp+200,(vlSelf->top__DOT__i_cache__DOT__ram_0_6),512);
        tracep->fullWData(oldp+216,(vlSelf->top__DOT__i_cache__DOT__ram_0_7),512);
        tracep->fullWData(oldp+232,(vlSelf->top__DOT__i_cache__DOT__ram_0_8),512);
        tracep->fullWData(oldp+248,(vlSelf->top__DOT__i_cache__DOT__ram_0_9),512);
        tracep->fullWData(oldp+264,(vlSelf->top__DOT__i_cache__DOT__ram_0_10),512);
        tracep->fullWData(oldp+280,(vlSelf->top__DOT__i_cache__DOT__ram_0_11),512);
        tracep->fullWData(oldp+296,(vlSelf->top__DOT__i_cache__DOT__ram_0_12),512);
        tracep->fullWData(oldp+312,(vlSelf->top__DOT__i_cache__DOT__ram_0_13),512);
        tracep->fullWData(oldp+328,(vlSelf->top__DOT__i_cache__DOT__ram_0_14),512);
        tracep->fullWData(oldp+344,(vlSelf->top__DOT__i_cache__DOT__ram_0_15),512);
        tracep->fullWData(oldp+360,(vlSelf->top__DOT__i_cache__DOT__ram_1_0),512);
        tracep->fullWData(oldp+376,(vlSelf->top__DOT__i_cache__DOT__ram_1_1),512);
        tracep->fullWData(oldp+392,(vlSelf->top__DOT__i_cache__DOT__ram_1_2),512);
        tracep->fullWData(oldp+408,(vlSelf->top__DOT__i_cache__DOT__ram_1_3),512);
        tracep->fullWData(oldp+424,(vlSelf->top__DOT__i_cache__DOT__ram_1_4),512);
        tracep->fullWData(oldp+440,(vlSelf->top__DOT__i_cache__DOT__ram_1_5),512);
        tracep->fullWData(oldp+456,(vlSelf->top__DOT__i_cache__DOT__ram_1_6),512);
        tracep->fullWData(oldp+472,(vlSelf->top__DOT__i_cache__DOT__ram_1_7),512);
        tracep->fullWData(oldp+488,(vlSelf->top__DOT__i_cache__DOT__ram_1_8),512);
        tracep->fullWData(oldp+504,(vlSelf->top__DOT__i_cache__DOT__ram_1_9),512);
        tracep->fullWData(oldp+520,(vlSelf->top__DOT__i_cache__DOT__ram_1_10),512);
        tracep->fullWData(oldp+536,(vlSelf->top__DOT__i_cache__DOT__ram_1_11),512);
        tracep->fullWData(oldp+552,(vlSelf->top__DOT__i_cache__DOT__ram_1_12),512);
        tracep->fullWData(oldp+568,(vlSelf->top__DOT__i_cache__DOT__ram_1_13),512);
        tracep->fullWData(oldp+584,(vlSelf->top__DOT__i_cache__DOT__ram_1_14),512);
        tracep->fullWData(oldp+600,(vlSelf->top__DOT__i_cache__DOT__ram_1_15),512);
        tracep->fullIData(oldp+616,(vlSelf->top__DOT__i_cache__DOT__tag_0_0),32);
        tracep->fullIData(oldp+617,(vlSelf->top__DOT__i_cache__DOT__tag_0_1),32);
        tracep->fullIData(oldp+618,(vlSelf->top__DOT__i_cache__DOT__tag_0_2),32);
        tracep->fullIData(oldp+619,(vlSelf->top__DOT__i_cache__DOT__tag_0_3),32);
        tracep->fullIData(oldp+620,(vlSelf->top__DOT__i_cache__DOT__tag_0_4),32);
        tracep->fullIData(oldp+621,(vlSelf->top__DOT__i_cache__DOT__tag_0_5),32);
        tracep->fullIData(oldp+622,(vlSelf->top__DOT__i_cache__DOT__tag_0_6),32);
        tracep->fullIData(oldp+623,(vlSelf->top__DOT__i_cache__DOT__tag_0_7),32);
        tracep->fullIData(oldp+624,(vlSelf->top__DOT__i_cache__DOT__tag_0_8),32);
        tracep->fullIData(oldp+625,(vlSelf->top__DOT__i_cache__DOT__tag_0_9),32);
        tracep->fullIData(oldp+626,(vlSelf->top__DOT__i_cache__DOT__tag_0_10),32);
        tracep->fullIData(oldp+627,(vlSelf->top__DOT__i_cache__DOT__tag_0_11),32);
        tracep->fullIData(oldp+628,(vlSelf->top__DOT__i_cache__DOT__tag_0_12),32);
        tracep->fullIData(oldp+629,(vlSelf->top__DOT__i_cache__DOT__tag_0_13),32);
        tracep->fullIData(oldp+630,(vlSelf->top__DOT__i_cache__DOT__tag_0_14),32);
        tracep->fullIData(oldp+631,(vlSelf->top__DOT__i_cache__DOT__tag_0_15),32);
        tracep->fullIData(oldp+632,(vlSelf->top__DOT__i_cache__DOT__tag_1_0),32);
        tracep->fullIData(oldp+633,(vlSelf->top__DOT__i_cache__DOT__tag_1_1),32);
        tracep->fullIData(oldp+634,(vlSelf->top__DOT__i_cache__DOT__tag_1_2),32);
        tracep->fullIData(oldp+635,(vlSelf->top__DOT__i_cache__DOT__tag_1_3),32);
        tracep->fullIData(oldp+636,(vlSelf->top__DOT__i_cache__DOT__tag_1_4),32);
        tracep->fullIData(oldp+637,(vlSelf->top__DOT__i_cache__DOT__tag_1_5),32);
        tracep->fullIData(oldp+638,(vlSelf->top__DOT__i_cache__DOT__tag_1_6),32);
        tracep->fullIData(oldp+639,(vlSelf->top__DOT__i_cache__DOT__tag_1_7),32);
        tracep->fullIData(oldp+640,(vlSelf->top__DOT__i_cache__DOT__tag_1_8),32);
        tracep->fullIData(oldp+641,(vlSelf->top__DOT__i_cache__DOT__tag_1_9),32);
        tracep->fullIData(oldp+642,(vlSelf->top__DOT__i_cache__DOT__tag_1_10),32);
        tracep->fullIData(oldp+643,(vlSelf->top__DOT__i_cache__DOT__tag_1_11),32);
        tracep->fullIData(oldp+644,(vlSelf->top__DOT__i_cache__DOT__tag_1_12),32);
        tracep->fullIData(oldp+645,(vlSelf->top__DOT__i_cache__DOT__tag_1_13),32);
        tracep->fullIData(oldp+646,(vlSelf->top__DOT__i_cache__DOT__tag_1_14),32);
        tracep->fullIData(oldp+647,(vlSelf->top__DOT__i_cache__DOT__tag_1_15),32);
        tracep->fullBit(oldp+648,(vlSelf->top__DOT__i_cache__DOT__valid_0_0));
        tracep->fullBit(oldp+649,(vlSelf->top__DOT__i_cache__DOT__valid_0_1));
        tracep->fullBit(oldp+650,(vlSelf->top__DOT__i_cache__DOT__valid_0_2));
        tracep->fullBit(oldp+651,(vlSelf->top__DOT__i_cache__DOT__valid_0_3));
        tracep->fullBit(oldp+652,(vlSelf->top__DOT__i_cache__DOT__valid_0_4));
        tracep->fullBit(oldp+653,(vlSelf->top__DOT__i_cache__DOT__valid_0_5));
        tracep->fullBit(oldp+654,(vlSelf->top__DOT__i_cache__DOT__valid_0_6));
        tracep->fullBit(oldp+655,(vlSelf->top__DOT__i_cache__DOT__valid_0_7));
        tracep->fullBit(oldp+656,(vlSelf->top__DOT__i_cache__DOT__valid_0_8));
        tracep->fullBit(oldp+657,(vlSelf->top__DOT__i_cache__DOT__valid_0_9));
        tracep->fullBit(oldp+658,(vlSelf->top__DOT__i_cache__DOT__valid_0_10));
        tracep->fullBit(oldp+659,(vlSelf->top__DOT__i_cache__DOT__valid_0_11));
        tracep->fullBit(oldp+660,(vlSelf->top__DOT__i_cache__DOT__valid_0_12));
        tracep->fullBit(oldp+661,(vlSelf->top__DOT__i_cache__DOT__valid_0_13));
        tracep->fullBit(oldp+662,(vlSelf->top__DOT__i_cache__DOT__valid_0_14));
        tracep->fullBit(oldp+663,(vlSelf->top__DOT__i_cache__DOT__valid_0_15));
        tracep->fullBit(oldp+664,(vlSelf->top__DOT__i_cache__DOT__valid_1_0));
        tracep->fullBit(oldp+665,(vlSelf->top__DOT__i_cache__DOT__valid_1_1));
        tracep->fullBit(oldp+666,(vlSelf->top__DOT__i_cache__DOT__valid_1_2));
        tracep->fullBit(oldp+667,(vlSelf->top__DOT__i_cache__DOT__valid_1_3));
        tracep->fullBit(oldp+668,(vlSelf->top__DOT__i_cache__DOT__valid_1_4));
        tracep->fullBit(oldp+669,(vlSelf->top__DOT__i_cache__DOT__valid_1_5));
        tracep->fullBit(oldp+670,(vlSelf->top__DOT__i_cache__DOT__valid_1_6));
        tracep->fullBit(oldp+671,(vlSelf->top__DOT__i_cache__DOT__valid_1_7));
        tracep->fullBit(oldp+672,(vlSelf->top__DOT__i_cache__DOT__valid_1_8));
        tracep->fullBit(oldp+673,(vlSelf->top__DOT__i_cache__DOT__valid_1_9));
        tracep->fullBit(oldp+674,(vlSelf->top__DOT__i_cache__DOT__valid_1_10));
        tracep->fullBit(oldp+675,(vlSelf->top__DOT__i_cache__DOT__valid_1_11));
        tracep->fullBit(oldp+676,(vlSelf->top__DOT__i_cache__DOT__valid_1_12));
        tracep->fullBit(oldp+677,(vlSelf->top__DOT__i_cache__DOT__valid_1_13));
        tracep->fullBit(oldp+678,(vlSelf->top__DOT__i_cache__DOT__valid_1_14));
        tracep->fullBit(oldp+679,(vlSelf->top__DOT__i_cache__DOT__valid_1_15));
        tracep->fullBit(oldp+680,(vlSelf->top__DOT__i_cache__DOT__way0_hit));
        tracep->fullBit(oldp+681,(vlSelf->top__DOT__i_cache__DOT__way1_hit));
        tracep->fullCData(oldp+682,(vlSelf->top__DOT__i_cache__DOT__unuse_way),2);
        tracep->fullQData(oldp+683,(vlSelf->top__DOT__i_cache__DOT__receive_data_0),64);
        tracep->fullQData(oldp+685,(vlSelf->top__DOT__i_cache__DOT__receive_data_1),64);
        tracep->fullQData(oldp+687,(vlSelf->top__DOT__i_cache__DOT__receive_data_2),64);
        tracep->fullQData(oldp+689,(vlSelf->top__DOT__i_cache__DOT__receive_data_3),64);
        tracep->fullQData(oldp+691,(vlSelf->top__DOT__i_cache__DOT__receive_data_4),64);
        tracep->fullQData(oldp+693,(vlSelf->top__DOT__i_cache__DOT__receive_data_5),64);
        tracep->fullQData(oldp+695,(vlSelf->top__DOT__i_cache__DOT__receive_data_6),64);
        tracep->fullQData(oldp+697,(vlSelf->top__DOT__i_cache__DOT__receive_data_7),64);
        tracep->fullCData(oldp+699,(vlSelf->top__DOT__i_cache__DOT__receive_num),3);
        tracep->fullBit(oldp+700,(vlSelf->top__DOT__i_cache__DOT__quene));
        tracep->fullCData(oldp+701,((0x3fU & (IData)(vlSelf->top__DOT__pc_now))),6);
        tracep->fullCData(oldp+702,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__pc_now 
                                                     >> 6U)))),4);
        tracep->fullIData(oldp+703,((0x3fffffU & (IData)(
                                                         (vlSelf->top__DOT__pc_now 
                                                          >> 0xaU)))),22);
        tracep->fullSData(oldp+704,((0x1f8U & ((IData)(vlSelf->top__DOT__pc_now) 
                                               << 3U))),9);
        tracep->fullCData(oldp+705,(vlSelf->top__DOT__i_cache__DOT__state),3);
        tracep->fullWData(oldp+706,(vlSelf->top__DOT__d_cache__DOT__ram_0_0),512);
        tracep->fullWData(oldp+722,(vlSelf->top__DOT__d_cache__DOT__ram_0_1),512);
        tracep->fullWData(oldp+738,(vlSelf->top__DOT__d_cache__DOT__ram_0_2),512);
        tracep->fullWData(oldp+754,(vlSelf->top__DOT__d_cache__DOT__ram_0_3),512);
        tracep->fullWData(oldp+770,(vlSelf->top__DOT__d_cache__DOT__ram_0_4),512);
        tracep->fullWData(oldp+786,(vlSelf->top__DOT__d_cache__DOT__ram_0_5),512);
        tracep->fullWData(oldp+802,(vlSelf->top__DOT__d_cache__DOT__ram_0_6),512);
        tracep->fullWData(oldp+818,(vlSelf->top__DOT__d_cache__DOT__ram_0_7),512);
        tracep->fullWData(oldp+834,(vlSelf->top__DOT__d_cache__DOT__ram_0_8),512);
        tracep->fullWData(oldp+850,(vlSelf->top__DOT__d_cache__DOT__ram_0_9),512);
        tracep->fullWData(oldp+866,(vlSelf->top__DOT__d_cache__DOT__ram_0_10),512);
        tracep->fullWData(oldp+882,(vlSelf->top__DOT__d_cache__DOT__ram_0_11),512);
        tracep->fullWData(oldp+898,(vlSelf->top__DOT__d_cache__DOT__ram_0_12),512);
        tracep->fullWData(oldp+914,(vlSelf->top__DOT__d_cache__DOT__ram_0_13),512);
        tracep->fullWData(oldp+930,(vlSelf->top__DOT__d_cache__DOT__ram_0_14),512);
        tracep->fullWData(oldp+946,(vlSelf->top__DOT__d_cache__DOT__ram_0_15),512);
        tracep->fullWData(oldp+962,(vlSelf->top__DOT__d_cache__DOT__ram_1_0),512);
        tracep->fullWData(oldp+978,(vlSelf->top__DOT__d_cache__DOT__ram_1_1),512);
        tracep->fullWData(oldp+994,(vlSelf->top__DOT__d_cache__DOT__ram_1_2),512);
        tracep->fullWData(oldp+1010,(vlSelf->top__DOT__d_cache__DOT__ram_1_3),512);
        tracep->fullWData(oldp+1026,(vlSelf->top__DOT__d_cache__DOT__ram_1_4),512);
        tracep->fullWData(oldp+1042,(vlSelf->top__DOT__d_cache__DOT__ram_1_5),512);
        tracep->fullWData(oldp+1058,(vlSelf->top__DOT__d_cache__DOT__ram_1_6),512);
        tracep->fullWData(oldp+1074,(vlSelf->top__DOT__d_cache__DOT__ram_1_7),512);
        tracep->fullWData(oldp+1090,(vlSelf->top__DOT__d_cache__DOT__ram_1_8),512);
        tracep->fullWData(oldp+1106,(vlSelf->top__DOT__d_cache__DOT__ram_1_9),512);
        tracep->fullWData(oldp+1122,(vlSelf->top__DOT__d_cache__DOT__ram_1_10),512);
        tracep->fullWData(oldp+1138,(vlSelf->top__DOT__d_cache__DOT__ram_1_11),512);
        tracep->fullWData(oldp+1154,(vlSelf->top__DOT__d_cache__DOT__ram_1_12),512);
        tracep->fullWData(oldp+1170,(vlSelf->top__DOT__d_cache__DOT__ram_1_13),512);
        tracep->fullWData(oldp+1186,(vlSelf->top__DOT__d_cache__DOT__ram_1_14),512);
        tracep->fullWData(oldp+1202,(vlSelf->top__DOT__d_cache__DOT__ram_1_15),512);
        tracep->fullIData(oldp+1218,(vlSelf->top__DOT__d_cache__DOT__tag_0_0),32);
        tracep->fullIData(oldp+1219,(vlSelf->top__DOT__d_cache__DOT__tag_0_1),32);
        tracep->fullIData(oldp+1220,(vlSelf->top__DOT__d_cache__DOT__tag_0_2),32);
        tracep->fullIData(oldp+1221,(vlSelf->top__DOT__d_cache__DOT__tag_0_3),32);
        tracep->fullIData(oldp+1222,(vlSelf->top__DOT__d_cache__DOT__tag_0_4),32);
        tracep->fullIData(oldp+1223,(vlSelf->top__DOT__d_cache__DOT__tag_0_5),32);
        tracep->fullIData(oldp+1224,(vlSelf->top__DOT__d_cache__DOT__tag_0_6),32);
        tracep->fullIData(oldp+1225,(vlSelf->top__DOT__d_cache__DOT__tag_0_7),32);
        tracep->fullIData(oldp+1226,(vlSelf->top__DOT__d_cache__DOT__tag_0_8),32);
        tracep->fullIData(oldp+1227,(vlSelf->top__DOT__d_cache__DOT__tag_0_9),32);
        tracep->fullIData(oldp+1228,(vlSelf->top__DOT__d_cache__DOT__tag_0_10),32);
        tracep->fullIData(oldp+1229,(vlSelf->top__DOT__d_cache__DOT__tag_0_11),32);
        tracep->fullIData(oldp+1230,(vlSelf->top__DOT__d_cache__DOT__tag_0_12),32);
        tracep->fullIData(oldp+1231,(vlSelf->top__DOT__d_cache__DOT__tag_0_13),32);
        tracep->fullIData(oldp+1232,(vlSelf->top__DOT__d_cache__DOT__tag_0_14),32);
        tracep->fullIData(oldp+1233,(vlSelf->top__DOT__d_cache__DOT__tag_0_15),32);
        tracep->fullIData(oldp+1234,(vlSelf->top__DOT__d_cache__DOT__tag_1_0),32);
        tracep->fullIData(oldp+1235,(vlSelf->top__DOT__d_cache__DOT__tag_1_1),32);
        tracep->fullIData(oldp+1236,(vlSelf->top__DOT__d_cache__DOT__tag_1_2),32);
        tracep->fullIData(oldp+1237,(vlSelf->top__DOT__d_cache__DOT__tag_1_3),32);
        tracep->fullIData(oldp+1238,(vlSelf->top__DOT__d_cache__DOT__tag_1_4),32);
        tracep->fullIData(oldp+1239,(vlSelf->top__DOT__d_cache__DOT__tag_1_5),32);
        tracep->fullIData(oldp+1240,(vlSelf->top__DOT__d_cache__DOT__tag_1_6),32);
        tracep->fullIData(oldp+1241,(vlSelf->top__DOT__d_cache__DOT__tag_1_7),32);
        tracep->fullIData(oldp+1242,(vlSelf->top__DOT__d_cache__DOT__tag_1_8),32);
        tracep->fullIData(oldp+1243,(vlSelf->top__DOT__d_cache__DOT__tag_1_9),32);
        tracep->fullIData(oldp+1244,(vlSelf->top__DOT__d_cache__DOT__tag_1_10),32);
        tracep->fullIData(oldp+1245,(vlSelf->top__DOT__d_cache__DOT__tag_1_11),32);
        tracep->fullIData(oldp+1246,(vlSelf->top__DOT__d_cache__DOT__tag_1_12),32);
        tracep->fullIData(oldp+1247,(vlSelf->top__DOT__d_cache__DOT__tag_1_13),32);
        tracep->fullIData(oldp+1248,(vlSelf->top__DOT__d_cache__DOT__tag_1_14),32);
        tracep->fullIData(oldp+1249,(vlSelf->top__DOT__d_cache__DOT__tag_1_15),32);
        tracep->fullBit(oldp+1250,(vlSelf->top__DOT__d_cache__DOT__valid_0_0));
        tracep->fullBit(oldp+1251,(vlSelf->top__DOT__d_cache__DOT__valid_0_1));
        tracep->fullBit(oldp+1252,(vlSelf->top__DOT__d_cache__DOT__valid_0_2));
        tracep->fullBit(oldp+1253,(vlSelf->top__DOT__d_cache__DOT__valid_0_3));
        tracep->fullBit(oldp+1254,(vlSelf->top__DOT__d_cache__DOT__valid_0_4));
        tracep->fullBit(oldp+1255,(vlSelf->top__DOT__d_cache__DOT__valid_0_5));
        tracep->fullBit(oldp+1256,(vlSelf->top__DOT__d_cache__DOT__valid_0_6));
        tracep->fullBit(oldp+1257,(vlSelf->top__DOT__d_cache__DOT__valid_0_7));
        tracep->fullBit(oldp+1258,(vlSelf->top__DOT__d_cache__DOT__valid_0_8));
        tracep->fullBit(oldp+1259,(vlSelf->top__DOT__d_cache__DOT__valid_0_9));
        tracep->fullBit(oldp+1260,(vlSelf->top__DOT__d_cache__DOT__valid_0_10));
        tracep->fullBit(oldp+1261,(vlSelf->top__DOT__d_cache__DOT__valid_0_11));
        tracep->fullBit(oldp+1262,(vlSelf->top__DOT__d_cache__DOT__valid_0_12));
        tracep->fullBit(oldp+1263,(vlSelf->top__DOT__d_cache__DOT__valid_0_13));
        tracep->fullBit(oldp+1264,(vlSelf->top__DOT__d_cache__DOT__valid_0_14));
        tracep->fullBit(oldp+1265,(vlSelf->top__DOT__d_cache__DOT__valid_0_15));
        tracep->fullBit(oldp+1266,(vlSelf->top__DOT__d_cache__DOT__valid_1_0));
        tracep->fullBit(oldp+1267,(vlSelf->top__DOT__d_cache__DOT__valid_1_1));
        tracep->fullBit(oldp+1268,(vlSelf->top__DOT__d_cache__DOT__valid_1_2));
        tracep->fullBit(oldp+1269,(vlSelf->top__DOT__d_cache__DOT__valid_1_3));
        tracep->fullBit(oldp+1270,(vlSelf->top__DOT__d_cache__DOT__valid_1_4));
        tracep->fullBit(oldp+1271,(vlSelf->top__DOT__d_cache__DOT__valid_1_5));
        tracep->fullBit(oldp+1272,(vlSelf->top__DOT__d_cache__DOT__valid_1_6));
        tracep->fullBit(oldp+1273,(vlSelf->top__DOT__d_cache__DOT__valid_1_7));
        tracep->fullBit(oldp+1274,(vlSelf->top__DOT__d_cache__DOT__valid_1_8));
        tracep->fullBit(oldp+1275,(vlSelf->top__DOT__d_cache__DOT__valid_1_9));
        tracep->fullBit(oldp+1276,(vlSelf->top__DOT__d_cache__DOT__valid_1_10));
        tracep->fullBit(oldp+1277,(vlSelf->top__DOT__d_cache__DOT__valid_1_11));
        tracep->fullBit(oldp+1278,(vlSelf->top__DOT__d_cache__DOT__valid_1_12));
        tracep->fullBit(oldp+1279,(vlSelf->top__DOT__d_cache__DOT__valid_1_13));
        tracep->fullBit(oldp+1280,(vlSelf->top__DOT__d_cache__DOT__valid_1_14));
        tracep->fullBit(oldp+1281,(vlSelf->top__DOT__d_cache__DOT__valid_1_15));
        tracep->fullBit(oldp+1282,(vlSelf->top__DOT__d_cache__DOT__dirty_0_0));
        tracep->fullBit(oldp+1283,(vlSelf->top__DOT__d_cache__DOT__dirty_0_1));
        tracep->fullBit(oldp+1284,(vlSelf->top__DOT__d_cache__DOT__dirty_0_2));
        tracep->fullBit(oldp+1285,(vlSelf->top__DOT__d_cache__DOT__dirty_0_3));
        tracep->fullBit(oldp+1286,(vlSelf->top__DOT__d_cache__DOT__dirty_0_4));
        tracep->fullBit(oldp+1287,(vlSelf->top__DOT__d_cache__DOT__dirty_0_5));
        tracep->fullBit(oldp+1288,(vlSelf->top__DOT__d_cache__DOT__dirty_0_6));
        tracep->fullBit(oldp+1289,(vlSelf->top__DOT__d_cache__DOT__dirty_0_7));
        tracep->fullBit(oldp+1290,(vlSelf->top__DOT__d_cache__DOT__dirty_0_8));
        tracep->fullBit(oldp+1291,(vlSelf->top__DOT__d_cache__DOT__dirty_0_9));
        tracep->fullBit(oldp+1292,(vlSelf->top__DOT__d_cache__DOT__dirty_0_10));
        tracep->fullBit(oldp+1293,(vlSelf->top__DOT__d_cache__DOT__dirty_0_11));
        tracep->fullBit(oldp+1294,(vlSelf->top__DOT__d_cache__DOT__dirty_0_12));
        tracep->fullBit(oldp+1295,(vlSelf->top__DOT__d_cache__DOT__dirty_0_13));
        tracep->fullBit(oldp+1296,(vlSelf->top__DOT__d_cache__DOT__dirty_0_14));
        tracep->fullBit(oldp+1297,(vlSelf->top__DOT__d_cache__DOT__dirty_0_15));
        tracep->fullBit(oldp+1298,(vlSelf->top__DOT__d_cache__DOT__dirty_1_0));
        tracep->fullBit(oldp+1299,(vlSelf->top__DOT__d_cache__DOT__dirty_1_1));
        tracep->fullBit(oldp+1300,(vlSelf->top__DOT__d_cache__DOT__dirty_1_2));
        tracep->fullBit(oldp+1301,(vlSelf->top__DOT__d_cache__DOT__dirty_1_3));
        tracep->fullBit(oldp+1302,(vlSelf->top__DOT__d_cache__DOT__dirty_1_4));
        tracep->fullBit(oldp+1303,(vlSelf->top__DOT__d_cache__DOT__dirty_1_5));
        tracep->fullBit(oldp+1304,(vlSelf->top__DOT__d_cache__DOT__dirty_1_6));
        tracep->fullBit(oldp+1305,(vlSelf->top__DOT__d_cache__DOT__dirty_1_7));
        tracep->fullBit(oldp+1306,(vlSelf->top__DOT__d_cache__DOT__dirty_1_8));
        tracep->fullBit(oldp+1307,(vlSelf->top__DOT__d_cache__DOT__dirty_1_9));
        tracep->fullBit(oldp+1308,(vlSelf->top__DOT__d_cache__DOT__dirty_1_10));
        tracep->fullBit(oldp+1309,(vlSelf->top__DOT__d_cache__DOT__dirty_1_11));
        tracep->fullBit(oldp+1310,(vlSelf->top__DOT__d_cache__DOT__dirty_1_12));
        tracep->fullBit(oldp+1311,(vlSelf->top__DOT__d_cache__DOT__dirty_1_13));
        tracep->fullBit(oldp+1312,(vlSelf->top__DOT__d_cache__DOT__dirty_1_14));
        tracep->fullBit(oldp+1313,(vlSelf->top__DOT__d_cache__DOT__dirty_1_15));
        tracep->fullBit(oldp+1314,(vlSelf->top__DOT__d_cache__DOT__way0_hit));
        tracep->fullBit(oldp+1315,(vlSelf->top__DOT__d_cache__DOT__way1_hit));
        tracep->fullWData(oldp+1316,(vlSelf->top__DOT__d_cache__DOT__write_back_data),512);
        tracep->fullIData(oldp+1332,(vlSelf->top__DOT__d_cache__DOT__write_back_addr),32);
        tracep->fullCData(oldp+1333,(vlSelf->top__DOT__d_cache__DOT__unuse_way),2);
        tracep->fullQData(oldp+1334,(vlSelf->top__DOT__d_cache__DOT__receive_data_0),64);
        tracep->fullQData(oldp+1336,(vlSelf->top__DOT__d_cache__DOT__receive_data_1),64);
        tracep->fullQData(oldp+1338,(vlSelf->top__DOT__d_cache__DOT__receive_data_2),64);
        tracep->fullQData(oldp+1340,(vlSelf->top__DOT__d_cache__DOT__receive_data_3),64);
        tracep->fullQData(oldp+1342,(vlSelf->top__DOT__d_cache__DOT__receive_data_4),64);
        tracep->fullQData(oldp+1344,(vlSelf->top__DOT__d_cache__DOT__receive_data_5),64);
        tracep->fullQData(oldp+1346,(vlSelf->top__DOT__d_cache__DOT__receive_data_6),64);
        tracep->fullQData(oldp+1348,(vlSelf->top__DOT__d_cache__DOT__receive_data_7),64);
        tracep->fullCData(oldp+1350,(vlSelf->top__DOT__d_cache__DOT__receive_num),3);
        tracep->fullBit(oldp+1351,(vlSelf->top__DOT__d_cache__DOT__quene));
        tracep->fullCData(oldp+1352,((7U & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res))),3);
        tracep->fullCData(oldp+1353,((0x7fU & (IData)(
                                                      (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                       >> 3U)))),7);
        tracep->fullIData(oldp+1354,((0x3fffffU & (IData)(
                                                          (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                           >> 0xaU)))),22);
        tracep->fullCData(oldp+1355,((0x38U & ((IData)(vlSelf->top__DOT__exu_step__DOT__add_res) 
                                               << 3U))),6);
        tracep->fullQData(oldp+1356,(vlSelf->top__DOT__d_cache__DOT__wmask),64);
        tracep->fullCData(oldp+1358,(vlSelf->top__DOT__d_cache__DOT__state),3);
        tracep->fullSData(oldp+1359,((vlSelf->top__DOT__idu_step_io_inst 
                                      >> 0x14U)),12);
        tracep->fullIData(oldp+1360,(((0x80000U & (vlSelf->top__DOT__idu_step_io_inst 
                                                   >> 0xcU)) 
                                      | ((0x7f800U 
                                          & (vlSelf->top__DOT__idu_step_io_inst 
                                             >> 1U)) 
                                         | ((0x400U 
                                             & (vlSelf->top__DOT__idu_step_io_inst 
                                                >> 0xaU)) 
                                            | (0x3ffU 
                                               & (vlSelf->top__DOT__idu_step_io_inst 
                                                  >> 0x15U)))))),20);
        tracep->fullIData(oldp+1361,((vlSelf->top__DOT__idu_step_io_inst 
                                      >> 0xcU)),20);
        tracep->fullSData(oldp+1362,(((0xfe0U & (vlSelf->top__DOT__idu_step_io_inst 
                                                 >> 0x14U)) 
                                      | (0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                                  >> 7U)))),12);
        tracep->fullSData(oldp+1363,(((0x800U & (vlSelf->top__DOT__idu_step_io_inst 
                                                 >> 0x14U)) 
                                      | ((0x400U & 
                                          (vlSelf->top__DOT__idu_step_io_inst 
                                           << 3U)) 
                                         | ((0x3f0U 
                                             & (vlSelf->top__DOT__idu_step_io_inst 
                                                >> 0x15U)) 
                                            | (0xfU 
                                               & (vlSelf->top__DOT__idu_step_io_inst 
                                                  >> 8U)))))),12);
        tracep->fullIData(oldp+1364,(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188),32);
        tracep->fullQData(oldp+1365,(vlSelf->top__DOT__exu_step__DOT__Regfile[0]),64);
        tracep->fullQData(oldp+1367,(vlSelf->top__DOT__exu_step__DOT__Regfile[1]),64);
        tracep->fullQData(oldp+1369,(vlSelf->top__DOT__exu_step__DOT__Regfile[2]),64);
        tracep->fullQData(oldp+1371,(vlSelf->top__DOT__exu_step__DOT__Regfile[3]),64);
        tracep->fullQData(oldp+1373,(vlSelf->top__DOT__exu_step__DOT__Regfile[4]),64);
        tracep->fullQData(oldp+1375,(vlSelf->top__DOT__exu_step__DOT__Regfile[5]),64);
        tracep->fullQData(oldp+1377,(vlSelf->top__DOT__exu_step__DOT__Regfile[6]),64);
        tracep->fullQData(oldp+1379,(vlSelf->top__DOT__exu_step__DOT__Regfile[7]),64);
        tracep->fullQData(oldp+1381,(vlSelf->top__DOT__exu_step__DOT__Regfile[8]),64);
        tracep->fullQData(oldp+1383,(vlSelf->top__DOT__exu_step__DOT__Regfile[9]),64);
        tracep->fullQData(oldp+1385,(vlSelf->top__DOT__exu_step__DOT__Regfile[10]),64);
        tracep->fullQData(oldp+1387,(vlSelf->top__DOT__exu_step__DOT__Regfile[11]),64);
        tracep->fullQData(oldp+1389,(vlSelf->top__DOT__exu_step__DOT__Regfile[12]),64);
        tracep->fullQData(oldp+1391,(vlSelf->top__DOT__exu_step__DOT__Regfile[13]),64);
        tracep->fullQData(oldp+1393,(vlSelf->top__DOT__exu_step__DOT__Regfile[14]),64);
        tracep->fullQData(oldp+1395,(vlSelf->top__DOT__exu_step__DOT__Regfile[15]),64);
        tracep->fullQData(oldp+1397,(vlSelf->top__DOT__exu_step__DOT__Regfile[16]),64);
        tracep->fullQData(oldp+1399,(vlSelf->top__DOT__exu_step__DOT__Regfile[17]),64);
        tracep->fullQData(oldp+1401,(vlSelf->top__DOT__exu_step__DOT__Regfile[18]),64);
        tracep->fullQData(oldp+1403,(vlSelf->top__DOT__exu_step__DOT__Regfile[19]),64);
        tracep->fullQData(oldp+1405,(vlSelf->top__DOT__exu_step__DOT__Regfile[20]),64);
        tracep->fullQData(oldp+1407,(vlSelf->top__DOT__exu_step__DOT__Regfile[21]),64);
        tracep->fullQData(oldp+1409,(vlSelf->top__DOT__exu_step__DOT__Regfile[22]),64);
        tracep->fullQData(oldp+1411,(vlSelf->top__DOT__exu_step__DOT__Regfile[23]),64);
        tracep->fullQData(oldp+1413,(vlSelf->top__DOT__exu_step__DOT__Regfile[24]),64);
        tracep->fullQData(oldp+1415,(vlSelf->top__DOT__exu_step__DOT__Regfile[25]),64);
        tracep->fullQData(oldp+1417,(vlSelf->top__DOT__exu_step__DOT__Regfile[26]),64);
        tracep->fullQData(oldp+1419,(vlSelf->top__DOT__exu_step__DOT__Regfile[27]),64);
        tracep->fullQData(oldp+1421,(vlSelf->top__DOT__exu_step__DOT__Regfile[28]),64);
        tracep->fullQData(oldp+1423,(vlSelf->top__DOT__exu_step__DOT__Regfile[29]),64);
        tracep->fullQData(oldp+1425,(vlSelf->top__DOT__exu_step__DOT__Regfile[30]),64);
        tracep->fullQData(oldp+1427,(vlSelf->top__DOT__exu_step__DOT__Regfile[31]),64);
        tracep->fullQData(oldp+1429,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [(0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                                >> 0xfU))]),64);
        tracep->fullQData(oldp+1431,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [(0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                                >> 0x14U))]),64);
        tracep->fullQData(oldp+1433,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [(0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                                >> 7U))]),64);
        tracep->fullQData(oldp+1435,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [0x11U]),64);
        tracep->fullQData(oldp+1437,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [0U]),64);
        tracep->fullQData(oldp+1439,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [1U]),64);
        tracep->fullQData(oldp+1441,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [2U]),64);
        tracep->fullQData(oldp+1443,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [3U]),64);
        tracep->fullQData(oldp+1445,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [4U]),64);
        tracep->fullQData(oldp+1447,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [5U]),64);
        tracep->fullQData(oldp+1449,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [6U]),64);
        tracep->fullQData(oldp+1451,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [7U]),64);
        tracep->fullQData(oldp+1453,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [8U]),64);
        tracep->fullQData(oldp+1455,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [9U]),64);
        tracep->fullQData(oldp+1457,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [0xaU]),64);
        tracep->fullQData(oldp+1459,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [0xbU]),64);
        tracep->fullQData(oldp+1461,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [0xcU]),64);
        tracep->fullQData(oldp+1463,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [0xdU]),64);
        tracep->fullQData(oldp+1465,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [0xeU]),64);
        tracep->fullQData(oldp+1467,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [0xfU]),64);
        tracep->fullQData(oldp+1469,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [0x10U]),64);
        tracep->fullQData(oldp+1471,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [0x12U]),64);
        tracep->fullQData(oldp+1473,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [0x13U]),64);
        tracep->fullQData(oldp+1475,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [0x14U]),64);
        tracep->fullQData(oldp+1477,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [0x15U]),64);
        tracep->fullQData(oldp+1479,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [0x16U]),64);
        tracep->fullQData(oldp+1481,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [0x17U]),64);
        tracep->fullQData(oldp+1483,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [0x18U]),64);
        tracep->fullQData(oldp+1485,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [0x19U]),64);
        tracep->fullQData(oldp+1487,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [0x1aU]),64);
        tracep->fullQData(oldp+1489,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [0x1bU]),64);
        tracep->fullQData(oldp+1491,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [0x1cU]),64);
        tracep->fullQData(oldp+1493,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [0x1dU]),64);
        tracep->fullQData(oldp+1495,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [0x1eU]),64);
        tracep->fullQData(oldp+1497,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                     [0x1fU]),64);
        tracep->fullQData(oldp+1499,(vlSelf->top__DOT__exu_step__DOT__Regfile_MPORT_data),64);
        tracep->fullQData(oldp+1501,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[0]),64);
        tracep->fullQData(oldp+1503,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[1]),64);
        tracep->fullQData(oldp+1505,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[2]),64);
        tracep->fullQData(oldp+1507,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[3]),64);
        tracep->fullCData(oldp+1509,(((0x342U == (0xfffU 
                                                  & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                       ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))),2);
        tracep->fullQData(oldp+1510,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                     [((0x342U == (0xfffU 
                                                   & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                        ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]),64);
        tracep->fullQData(oldp+1512,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                     [1U]),64);
        tracep->fullQData(oldp+1514,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                     [3U]),64);
        tracep->fullQData(oldp+1516,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                     [0U]),64);
        tracep->fullQData(oldp+1518,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                     [2U]),64);
        tracep->fullQData(oldp+1520,(((IData)(vlSelf->top__DOT__exu_step__DOT___T_9)
                                       ? vlSelf->top__DOT__pc_now
                                       : vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                      [1U])),64);
        tracep->fullQData(oldp+1522,(((IData)(vlSelf->top__DOT__exu_step__DOT___T_9)
                                       ? vlSelf->top__DOT__exu_step__DOT__Regfile
                                      [0x11U] : vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                      [3U])),64);
        tracep->fullQData(oldp+1524,(((((0x1073U == 
                                         (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                                        | ((0x2073U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__idu_step_io_inst)) 
                                           | (0x3073U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__idu_step_io_inst)))) 
                                       & (IData)(vlSelf->top__DOT__i_cache_io_to_ifu_rvalid))
                                       ? ((0x47U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                           ? (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                              & (~ 
                                                 vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                                 [(
                                                   (0x342U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                                    ? 3U
                                                    : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]))
                                           : ((0x46U 
                                               == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                               ? (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                  | vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                                  [
                                                  ((0x342U 
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
                                      [((0x342U == 
                                         (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                         ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))])),64);
        tracep->fullSData(oldp+1526,((0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm))),12);
        tracep->fullQData(oldp+1527,(vlSelf->top__DOT__exu_step__DOT__src1_value),64);
        tracep->fullQData(oldp+1529,(vlSelf->top__DOT__exu_step__DOT__src2_value),64);
        tracep->fullQData(oldp+1531,(vlSelf->top__DOT__exu_step__DOT__add_res),64);
        tracep->fullQData(oldp+1533,(vlSelf->top__DOT__exu_step__DOT__sub_res),64);
        tracep->fullQData(oldp+1535,(vlSelf->top__DOT__exu_step__DOT__sra_res),64);
        tracep->fullQData(oldp+1537,(vlSelf->top__DOT__exu_step__DOT__srl_res),64);
        tracep->fullWData(oldp+1539,(vlSelf->top__DOT__exu_step__DOT__sll_res),127);
        tracep->fullIData(oldp+1543,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__exu_step__DOT__src1_value), 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)))),32);
        tracep->fullIData(oldp+1544,(vlSelf->top__DOT__exu_step__DOT__srlw_res),32);
        tracep->fullQData(oldp+1545,(vlSelf->top__DOT__exu_step__DOT__sllw_res),63);
        tracep->fullQData(oldp+1547,(vlSelf->top__DOT__exu_step__DOT__or_res),64);
        tracep->fullQData(oldp+1549,(vlSelf->top__DOT__exu_step__DOT__xor_res),64);
        tracep->fullQData(oldp+1551,(vlSelf->top__DOT__exu_step__DOT__and_res),64);
        VL_EXTEND_WQ(128,64, __Vtemp2259, vlSelf->top__DOT__exu_step__DOT__src1_value);
        VL_EXTEND_WQ(128,64, __Vtemp2260, vlSelf->top__DOT__exu_step__DOT__src2_value);
        VL_MUL_W(4, __Vtemp2261, __Vtemp2259, __Vtemp2260);
        tracep->fullQData(oldp+1553,((((QData)((IData)(
                                                       __Vtemp2261[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vtemp2261[0U])))),64);
        tracep->fullIData(oldp+1555,((IData)(vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2)),32);
        tracep->fullIData(oldp+1556,((IData)(vlSelf->top__DOT__exu_step__DOT___divw_res_T_4)),32);
        tracep->fullIData(oldp+1557,(vlSelf->top__DOT__exu_step__DOT__divuw_res),32);
        tracep->fullIData(oldp+1558,(vlSelf->top__DOT__exu_step__DOT__remw_res),32);
        tracep->fullIData(oldp+1559,(vlSelf->top__DOT__exu_step__DOT__remuw_res),32);
        VL_EXTENDS_WQ(65,64, __Vtemp2264, vlSelf->top__DOT__exu_step__DOT__src1_value);
        __Vtemp2265[0U] = __Vtemp2264[0U];
        __Vtemp2265[1U] = __Vtemp2264[1U];
        __Vtemp2265[2U] = (1U & __Vtemp2264[2U]);
        VL_EXTENDS_WQ(65,64, __Vtemp2267, vlSelf->top__DOT__exu_step__DOT__src2_value);
        __Vtemp2268[0U] = __Vtemp2267[0U];
        __Vtemp2268[1U] = __Vtemp2267[1U];
        __Vtemp2268[2U] = (1U & __Vtemp2267[2U]);
        VL_DIVS_WWW(65, __Vtemp2269, __Vtemp2265, __Vtemp2268);
        __Vtemp2270[0U] = __Vtemp2269[0U];
        __Vtemp2270[1U] = __Vtemp2269[1U];
        __Vtemp2270[2U] = (1U & __Vtemp2269[2U]);
        tracep->fullWData(oldp+1560,(__Vtemp2270),65);
        tracep->fullQData(oldp+1563,(VL_DIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
        tracep->fullQData(oldp+1565,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
        tracep->fullQData(oldp+1567,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
        tracep->fullQData(oldp+1569,(((0U == (0x1fU 
                                              & (vlSelf->top__DOT__idu_step_io_inst 
                                                 >> 7U)))
                                       ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
                                      [(0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                                 >> 7U))])),64);
        tracep->fullQData(oldp+1571,(((0x47U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                       ? (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                          & (~ vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                             [((0x342U 
                                                == 
                                                (0xfffU 
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
        tracep->fullQData(oldp+1573,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0]),64);
        tracep->fullQData(oldp+1575,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[1]),64);
        tracep->fullQData(oldp+1577,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[2]),64);
        tracep->fullQData(oldp+1579,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[3]),64);
        tracep->fullQData(oldp+1581,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[4]),64);
        tracep->fullQData(oldp+1583,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[5]),64);
        tracep->fullQData(oldp+1585,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[6]),64);
        tracep->fullQData(oldp+1587,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[7]),64);
        tracep->fullQData(oldp+1589,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[8]),64);
        tracep->fullQData(oldp+1591,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[9]),64);
        tracep->fullQData(oldp+1593,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[10]),64);
        tracep->fullQData(oldp+1595,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[11]),64);
        tracep->fullQData(oldp+1597,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[12]),64);
        tracep->fullQData(oldp+1599,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[13]),64);
        tracep->fullQData(oldp+1601,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[14]),64);
        tracep->fullQData(oldp+1603,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[15]),64);
        tracep->fullQData(oldp+1605,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[16]),64);
        tracep->fullQData(oldp+1607,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[17]),64);
        tracep->fullQData(oldp+1609,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[18]),64);
        tracep->fullQData(oldp+1611,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[19]),64);
        tracep->fullQData(oldp+1613,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[20]),64);
        tracep->fullQData(oldp+1615,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[21]),64);
        tracep->fullQData(oldp+1617,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[22]),64);
        tracep->fullQData(oldp+1619,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[23]),64);
        tracep->fullQData(oldp+1621,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[24]),64);
        tracep->fullQData(oldp+1623,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[25]),64);
        tracep->fullQData(oldp+1625,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[26]),64);
        tracep->fullQData(oldp+1627,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[27]),64);
        tracep->fullQData(oldp+1629,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[28]),64);
        tracep->fullQData(oldp+1631,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[29]),64);
        tracep->fullQData(oldp+1633,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[30]),64);
        tracep->fullQData(oldp+1635,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[31]),64);
        tracep->fullQData(oldp+1637,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[0]),64);
        tracep->fullQData(oldp+1639,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[1]),64);
        tracep->fullQData(oldp+1641,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[2]),64);
        tracep->fullQData(oldp+1643,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[3]),64);
        tracep->fullBit(oldp+1645,(vlSelf->clock));
        tracep->fullBit(oldp+1646,(vlSelf->reset));
        tracep->fullIData(oldp+1647,(vlSelf->io_inst),32);
        tracep->fullQData(oldp+1648,(vlSelf->io_pc),64);
        tracep->fullQData(oldp+1650,(vlSelf->io_pc_next),64);
        tracep->fullQData(oldp+1652,(vlSelf->io_outval),64);
        tracep->fullBit(oldp+1654,(vlSelf->io_step));
        tracep->fullBit(oldp+1655,(1U));
        tracep->fullCData(oldp+1656,(0x11U),5);
        tracep->fullCData(oldp+1657,(0U),5);
        tracep->fullCData(oldp+1658,(1U),5);
        tracep->fullCData(oldp+1659,(2U),5);
        tracep->fullCData(oldp+1660,(3U),5);
        tracep->fullCData(oldp+1661,(4U),5);
        tracep->fullCData(oldp+1662,(5U),5);
        tracep->fullCData(oldp+1663,(6U),5);
        tracep->fullCData(oldp+1664,(7U),5);
        tracep->fullCData(oldp+1665,(8U),5);
        tracep->fullCData(oldp+1666,(9U),5);
        tracep->fullCData(oldp+1667,(0xaU),5);
        tracep->fullCData(oldp+1668,(0xbU),5);
        tracep->fullCData(oldp+1669,(0xcU),5);
        tracep->fullCData(oldp+1670,(0xdU),5);
        tracep->fullCData(oldp+1671,(0xeU),5);
        tracep->fullCData(oldp+1672,(0xfU),5);
        tracep->fullCData(oldp+1673,(0x10U),5);
        tracep->fullCData(oldp+1674,(0x12U),5);
        tracep->fullCData(oldp+1675,(0x13U),5);
        tracep->fullCData(oldp+1676,(0x14U),5);
        tracep->fullCData(oldp+1677,(0x15U),5);
        tracep->fullCData(oldp+1678,(0x16U),5);
        tracep->fullCData(oldp+1679,(0x17U),5);
        tracep->fullCData(oldp+1680,(0x18U),5);
        tracep->fullCData(oldp+1681,(0x19U),5);
        tracep->fullCData(oldp+1682,(0x1aU),5);
        tracep->fullCData(oldp+1683,(0x1bU),5);
        tracep->fullCData(oldp+1684,(0x1cU),5);
        tracep->fullCData(oldp+1685,(0x1dU),5);
        tracep->fullCData(oldp+1686,(0x1eU),5);
        tracep->fullCData(oldp+1687,(0x1fU),5);
        tracep->fullCData(oldp+1688,(1U),2);
        tracep->fullCData(oldp+1689,(3U),2);
        tracep->fullCData(oldp+1690,(0U),2);
        tracep->fullCData(oldp+1691,(2U),2);
        tracep->fullQData(oldp+1692,(0ULL),64);
    }
}
