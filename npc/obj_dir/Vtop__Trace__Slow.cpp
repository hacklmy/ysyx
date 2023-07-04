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
        tracep->declBit(c+825,"clock", false,-1);
        tracep->declBit(c+826,"reset", false,-1);
        tracep->declBus(c+827,"io_inst", false,-1, 31,0);
        tracep->declQuad(c+828,"io_pc", false,-1, 63,0);
        tracep->declBit(c+830,"io_step", false,-1);
        tracep->declBit(c+825,"top clock", false,-1);
        tracep->declBit(c+826,"top reset", false,-1);
        tracep->declBus(c+827,"top io_inst", false,-1, 31,0);
        tracep->declQuad(c+828,"top io_pc", false,-1, 63,0);
        tracep->declBit(c+830,"top io_step", false,-1);
        tracep->declBit(c+825,"top Register_clock", false,-1);
        tracep->declBus(c+1,"top Register_io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top Register_io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top Register_io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top Register_io_rdata2", false,-1, 63,0);
        tracep->declBit(c+7,"top Register_io_we", false,-1);
        tracep->declBus(c+8,"top Register_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top Register_io_wdata", false,-1, 63,0);
        tracep->declBit(c+825,"top IFU_clock", false,-1);
        tracep->declBit(c+826,"top IFU_reset", false,-1);
        tracep->declBit(c+11,"top IFU_io_ds_allowin", false,-1);
        tracep->declBit(c+12,"top IFU_io_ds_ready_go", false,-1);
        tracep->declBit(c+13,"top IFU_io_ds_valid", false,-1);
        tracep->declBit(c+14,"top IFU_io_br_taken", false,-1);
        tracep->declQuad(c+15,"top IFU_io_br_target", false,-1, 63,0);
        tracep->declQuad(c+17,"top IFU_io_to_ds_pc", false,-1, 63,0);
        tracep->declBit(c+19,"top IFU_io_fs_to_ds_valid", false,-1);
        tracep->declBus(c+20,"top IFU_io_inst", false,-1, 31,0);
        tracep->declBit(c+21,"top IFU_io_axi_in_arready", false,-1);
        tracep->declQuad(c+22,"top IFU_io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+24,"top IFU_io_axi_in_rvalid", false,-1);
        tracep->declBus(c+25,"top IFU_io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+12,"top IFU_io_axi_out_arvalid", false,-1);
        tracep->declBit(c+26,"top IFU_io_axi_out_rready", false,-1);
        tracep->declBit(c+27,"top IFU_io_fence", false,-1);
        tracep->declBit(c+28,"top IFU_io_clear_cache", false,-1);
        tracep->declBit(c+29,"top IFU_io_cache_init", false,-1);
        tracep->declBit(c+825,"top IDU_clock", false,-1);
        tracep->declBit(c+826,"top IDU_reset", false,-1);
        tracep->declQuad(c+17,"top IDU_io_pc", false,-1, 63,0);
        tracep->declBit(c+19,"top IDU_io_fs_to_ds_valid", false,-1);
        tracep->declBit(c+30,"top IDU_io_ds_to_es_valid", false,-1);
        tracep->declBit(c+31,"top IDU_io_es_allowin", false,-1);
        tracep->declBus(c+20,"top IDU_io_from_fs_inst", false,-1, 31,0);
        tracep->declBit(c+14,"top IDU_io_br_taken", false,-1);
        tracep->declQuad(c+15,"top IDU_io_br_target", false,-1, 63,0);
        tracep->declBit(c+11,"top IDU_io_ds_allowin", false,-1);
        tracep->declBit(c+12,"top IDU_io_ds_ready_go", false,-1);
        tracep->declBit(c+27,"top IDU_io_fence", false,-1);
        tracep->declBus(c+1,"top IDU_io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top IDU_io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top IDU_io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top IDU_io_rdata2", false,-1, 63,0);
        tracep->declQuad(c+32,"top IDU_io_to_es_pc", false,-1, 63,0);
        tracep->declBus(c+34,"top IDU_io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+35,"top IDU_io_src1", false,-1, 63,0);
        tracep->declQuad(c+37,"top IDU_io_src2", false,-1, 63,0);
        tracep->declBus(c+39,"top IDU_io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+40,"top IDU_io_store_data", false,-1, 63,0);
        tracep->declBit(c+42,"top IDU_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+43,"top IDU_io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+44,"top IDU_io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+45,"top IDU_io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBus(c+46,"top IDU_io_load_type", false,-1, 2,0);
        tracep->declBit(c+47,"top IDU_io_es_ld", false,-1);
        tracep->declQuad(c+48,"top IDU_io_es_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+50,"top IDU_io_ms_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+9,"top IDU_io_ws_fwd_res", false,-1, 63,0);
        tracep->declBit(c+52,"top IDU_io_es_fwd_ready", false,-1);
        tracep->declBit(c+53,"top IDU_io_ms_fwd_ready", false,-1);
        tracep->declBit(c+54,"top IDU_io_es_rf_we", false,-1);
        tracep->declBit(c+55,"top IDU_io_ms_rf_we", false,-1);
        tracep->declBit(c+56,"top IDU_io_ws_rf_we", false,-1);
        tracep->declBit(c+57,"top IDU_io_es_valid", false,-1);
        tracep->declBit(c+58,"top IDU_io_ms_valid", false,-1);
        tracep->declBit(c+59,"top IDU_io_ws_valid", false,-1);
        tracep->declBus(c+60,"top IDU_io_es_rf_dst", false,-1, 4,0);
        tracep->declBus(c+61,"top IDU_io_ms_rf_dst", false,-1, 4,0);
        tracep->declBus(c+8,"top IDU_io_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+13,"top IDU_io_ds_valid", false,-1);
        tracep->declBit(c+825,"top EXU_clock", false,-1);
        tracep->declBit(c+826,"top EXU_reset", false,-1);
        tracep->declQuad(c+32,"top EXU_io_pc", false,-1, 63,0);
        tracep->declBit(c+30,"top EXU_io_ds_to_es_valid", false,-1);
        tracep->declBit(c+62,"top EXU_io_ms_allowin", false,-1);
        tracep->declBit(c+31,"top EXU_io_es_allowin", false,-1);
        tracep->declBus(c+34,"top EXU_io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+35,"top EXU_io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+37,"top EXU_io_src2_value", false,-1, 63,0);
        tracep->declBus(c+39,"top EXU_io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+40,"top EXU_io_store_data", false,-1, 63,0);
        tracep->declBit(c+52,"top EXU_io_es_to_ms_valid", false,-1);
        tracep->declBus(c+46,"top EXU_io_load_type", false,-1, 2,0);
        tracep->declQuad(c+63,"top EXU_io_to_ms_pc", false,-1, 63,0);
        tracep->declQuad(c+48,"top EXU_io_to_ms_alures", false,-1, 63,0);
        tracep->declQuad(c+65,"top EXU_io_to_ms_store_data", false,-1, 63,0);
        tracep->declBit(c+67,"top EXU_io_to_ms_wen", false,-1);
        tracep->declBus(c+68,"top EXU_io_to_ms_wstrb", false,-1, 7,0);
        tracep->declBit(c+69,"top EXU_io_to_ms_ren", false,-1);
        tracep->declQuad(c+48,"top EXU_io_to_ms_maddr", false,-1, 63,0);
        tracep->declBus(c+60,"top EXU_io_to_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+54,"top EXU_io_to_ms_rf_we", false,-1);
        tracep->declBus(c+70,"top EXU_io_to_ms_load_type", false,-1, 2,0);
        tracep->declBit(c+42,"top EXU_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+43,"top EXU_io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+44,"top EXU_io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+45,"top EXU_io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBit(c+57,"top EXU_io_es_valid", false,-1);
        tracep->declBit(c+54,"top EXU_io_es_rf_we", false,-1);
        tracep->declBus(c+60,"top EXU_io_es_rf_dst", false,-1, 4,0);
        tracep->declBit(c+52,"top EXU_io_es_fwd_ready", false,-1);
        tracep->declQuad(c+48,"top EXU_io_es_fwd_res", false,-1, 63,0);
        tracep->declBit(c+47,"top EXU_io_es_ld", false,-1);
        tracep->declBit(c+825,"top LSU_clock", false,-1);
        tracep->declBit(c+826,"top LSU_reset", false,-1);
        tracep->declQuad(c+63,"top LSU_io_pc", false,-1, 63,0);
        tracep->declBit(c+52,"top LSU_io_es_to_ms_valid", false,-1);
        tracep->declBit(c+62,"top LSU_io_ms_allowin", false,-1);
        tracep->declBit(c+54,"top LSU_io_rf_we", false,-1);
        tracep->declBus(c+60,"top LSU_io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+48,"top LSU_io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+65,"top LSU_io_store_data", false,-1, 63,0);
        tracep->declBus(c+70,"top LSU_io_load_type", false,-1, 2,0);
        tracep->declBit(c+67,"top LSU_io_wen", false,-1);
        tracep->declBus(c+68,"top LSU_io_wstrb", false,-1, 7,0);
        tracep->declBit(c+69,"top LSU_io_ren", false,-1);
        tracep->declQuad(c+48,"top LSU_io_maddr", false,-1, 63,0);
        tracep->declQuad(c+71,"top LSU_io_to_ws_pc", false,-1, 63,0);
        tracep->declQuad(c+73,"top LSU_io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+53,"top LSU_io_ms_to_ws_valid", false,-1);
        tracep->declBit(c+75,"top LSU_io_to_ws_rf_we", false,-1);
        tracep->declBus(c+61,"top LSU_io_to_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+58,"top LSU_io_ms_valid", false,-1);
        tracep->declBit(c+55,"top LSU_io_ms_rf_we", false,-1);
        tracep->declBus(c+61,"top LSU_io_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+53,"top LSU_io_ms_fwd_ready", false,-1);
        tracep->declQuad(c+50,"top LSU_io_ms_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+76,"top LSU_io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+78,"top LSU_io_axi_in_rvalid", false,-1);
        tracep->declBit(c+79,"top LSU_io_axi_in_bvalid", false,-1);
        tracep->declBus(c+80,"top LSU_io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+81,"top LSU_io_axi_out_arvalid", false,-1);
        tracep->declBus(c+80,"top LSU_io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBit(c+82,"top LSU_io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+83,"top LSU_io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+85,"top LSU_io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+86,"top LSU_io_axi_out_wvalid", false,-1);
        tracep->declBit(c+825,"top WBU_clock", false,-1);
        tracep->declBit(c+826,"top WBU_reset", false,-1);
        tracep->declQuad(c+71,"top WBU_io_pc", false,-1, 63,0);
        tracep->declBit(c+53,"top WBU_io_ms_to_ws_valid", false,-1);
        tracep->declQuad(c+73,"top WBU_io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+75,"top WBU_io_rf_we", false,-1);
        tracep->declBus(c+61,"top WBU_io_rf_dst", false,-1, 4,0);
        tracep->declBit(c+7,"top WBU_io_we", false,-1);
        tracep->declBus(c+8,"top WBU_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU_io_wdata", false,-1, 63,0);
        tracep->declBit(c+59,"top WBU_io_ws_valid", false,-1);
        tracep->declBit(c+56,"top WBU_io_ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU_io_ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU_io_ws_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+87,"top WBU_io_ws_pc", false,-1, 63,0);
        tracep->declBit(c+825,"top arbiter_clock", false,-1);
        tracep->declBit(c+826,"top arbiter_reset", false,-1);
        tracep->declBus(c+89,"top arbiter_io_ifu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+90,"top arbiter_io_ifu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+91,"top arbiter_io_ifu_axi_in_arvalid", false,-1);
        tracep->declBit(c+92,"top arbiter_io_ifu_axi_in_rready", false,-1);
        tracep->declQuad(c+93,"top arbiter_io_ifu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+95,"top arbiter_io_ifu_axi_out_rlast", false,-1);
        tracep->declBit(c+96,"top arbiter_io_ifu_axi_out_rvalid", false,-1);
        tracep->declBus(c+97,"top arbiter_io_lsu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+98,"top arbiter_io_lsu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+99,"top arbiter_io_lsu_axi_in_arvalid", false,-1);
        tracep->declBit(c+100,"top arbiter_io_lsu_axi_in_rready", false,-1);
        tracep->declBus(c+101,"top arbiter_io_lsu_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+102,"top arbiter_io_lsu_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+103,"top arbiter_io_lsu_axi_in_awvalid", false,-1);
        tracep->declQuad(c+104,"top arbiter_io_lsu_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+106,"top arbiter_io_lsu_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+107,"top arbiter_io_lsu_axi_in_wvalid", false,-1);
        tracep->declBit(c+108,"top arbiter_io_lsu_axi_in_bready", false,-1);
        tracep->declQuad(c+109,"top arbiter_io_lsu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+111,"top arbiter_io_lsu_axi_out_rlast", false,-1);
        tracep->declBit(c+112,"top arbiter_io_lsu_axi_out_rvalid", false,-1);
        tracep->declBit(c+113,"top arbiter_io_lsu_axi_out_wready", false,-1);
        tracep->declBit(c+114,"top arbiter_io_lsu_axi_out_bvalid", false,-1);
        tracep->declQuad(c+115,"top arbiter_io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+117,"top arbiter_io_axi_in_rlast", false,-1);
        tracep->declBit(c+118,"top arbiter_io_axi_in_rvalid", false,-1);
        tracep->declBit(c+119,"top arbiter_io_axi_in_wready", false,-1);
        tracep->declBit(c+120,"top arbiter_io_axi_in_bvalid", false,-1);
        tracep->declBus(c+121,"top arbiter_io_axi_out_araddr", false,-1, 31,0);
        tracep->declBus(c+122,"top arbiter_io_axi_out_arlen", false,-1, 7,0);
        tracep->declBit(c+123,"top arbiter_io_axi_out_arvalid", false,-1);
        tracep->declBit(c+124,"top arbiter_io_axi_out_rready", false,-1);
        tracep->declBus(c+125,"top arbiter_io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBus(c+126,"top arbiter_io_axi_out_awlen", false,-1, 7,0);
        tracep->declBit(c+127,"top arbiter_io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+128,"top arbiter_io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+130,"top arbiter_io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+131,"top arbiter_io_axi_out_wvalid", false,-1);
        tracep->declBit(c+132,"top arbiter_io_axi_out_bready", false,-1);
        tracep->declBit(c+825,"top i_cache_clock", false,-1);
        tracep->declBit(c+826,"top i_cache_reset", false,-1);
        tracep->declBus(c+25,"top i_cache_io_from_ifu_araddr", false,-1, 31,0);
        tracep->declBit(c+12,"top i_cache_io_from_ifu_arvalid", false,-1);
        tracep->declBit(c+26,"top i_cache_io_from_ifu_rready", false,-1);
        tracep->declBit(c+21,"top i_cache_io_to_ifu_arready", false,-1);
        tracep->declQuad(c+22,"top i_cache_io_to_ifu_rdata", false,-1, 63,0);
        tracep->declBit(c+24,"top i_cache_io_to_ifu_rvalid", false,-1);
        tracep->declBus(c+89,"top i_cache_io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+90,"top i_cache_io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+91,"top i_cache_io_to_axi_arvalid", false,-1);
        tracep->declBit(c+92,"top i_cache_io_to_axi_rready", false,-1);
        tracep->declQuad(c+93,"top i_cache_io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+95,"top i_cache_io_from_axi_rlast", false,-1);
        tracep->declBit(c+96,"top i_cache_io_from_axi_rvalid", false,-1);
        tracep->declBit(c+29,"top i_cache_io_cache_init", false,-1);
        tracep->declBit(c+28,"top i_cache_io_clear_cache", false,-1);
        tracep->declBit(c+825,"top d_cache_clock", false,-1);
        tracep->declBit(c+826,"top d_cache_reset", false,-1);
        tracep->declBus(c+80,"top d_cache_io_from_lsu_araddr", false,-1, 31,0);
        tracep->declBit(c+81,"top d_cache_io_from_lsu_arvalid", false,-1);
        tracep->declBus(c+80,"top d_cache_io_from_lsu_awaddr", false,-1, 31,0);
        tracep->declBit(c+82,"top d_cache_io_from_lsu_awvalid", false,-1);
        tracep->declQuad(c+83,"top d_cache_io_from_lsu_wdata", false,-1, 63,0);
        tracep->declBus(c+85,"top d_cache_io_from_lsu_wstrb", false,-1, 7,0);
        tracep->declBit(c+86,"top d_cache_io_from_lsu_wvalid", false,-1);
        tracep->declQuad(c+76,"top d_cache_io_to_lsu_rdata", false,-1, 63,0);
        tracep->declBit(c+78,"top d_cache_io_to_lsu_rvalid", false,-1);
        tracep->declBit(c+79,"top d_cache_io_to_lsu_bvalid", false,-1);
        tracep->declBus(c+97,"top d_cache_io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+98,"top d_cache_io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+99,"top d_cache_io_to_axi_arvalid", false,-1);
        tracep->declBit(c+100,"top d_cache_io_to_axi_rready", false,-1);
        tracep->declBus(c+101,"top d_cache_io_to_axi_awaddr", false,-1, 31,0);
        tracep->declBus(c+102,"top d_cache_io_to_axi_awlen", false,-1, 7,0);
        tracep->declBit(c+103,"top d_cache_io_to_axi_awvalid", false,-1);
        tracep->declQuad(c+104,"top d_cache_io_to_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+106,"top d_cache_io_to_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+107,"top d_cache_io_to_axi_wvalid", false,-1);
        tracep->declBit(c+108,"top d_cache_io_to_axi_bready", false,-1);
        tracep->declQuad(c+109,"top d_cache_io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+111,"top d_cache_io_from_axi_rlast", false,-1);
        tracep->declBit(c+112,"top d_cache_io_from_axi_rvalid", false,-1);
        tracep->declBit(c+113,"top d_cache_io_from_axi_wready", false,-1);
        tracep->declBit(c+114,"top d_cache_io_from_axi_bvalid", false,-1);
        tracep->declBit(c+825,"top axi_clock", false,-1);
        tracep->declBit(c+826,"top axi_reset", false,-1);
        tracep->declBus(c+121,"top axi_io_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+122,"top axi_io_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+123,"top axi_io_axi_in_arvalid", false,-1);
        tracep->declBit(c+124,"top axi_io_axi_in_rready", false,-1);
        tracep->declBus(c+125,"top axi_io_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+126,"top axi_io_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+127,"top axi_io_axi_in_awvalid", false,-1);
        tracep->declQuad(c+128,"top axi_io_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+130,"top axi_io_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+131,"top axi_io_axi_in_wvalid", false,-1);
        tracep->declBit(c+132,"top axi_io_axi_in_bready", false,-1);
        tracep->declQuad(c+115,"top axi_io_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+117,"top axi_io_axi_out_rlast", false,-1);
        tracep->declBit(c+118,"top axi_io_axi_out_rvalid", false,-1);
        tracep->declBit(c+119,"top axi_io_axi_out_wready", false,-1);
        tracep->declBit(c+120,"top axi_io_axi_out_bvalid", false,-1);
        tracep->declBus(c+133,"top dpi_flag", false,-1, 31,0);
        tracep->declBus(c+134,"top dpi_ecall_flag", false,-1, 31,0);
        tracep->declQuad(c+135,"top dpi_pc", false,-1, 63,0);
        tracep->declBit(c+137,"top diff_step", false,-1);
        tracep->declBit(c+825,"top Register clock", false,-1);
        tracep->declBus(c+1,"top Register io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top Register io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top Register io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top Register io_rdata2", false,-1, 63,0);
        tracep->declBit(c+7,"top Register io_we", false,-1);
        tracep->declBus(c+8,"top Register io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top Register io_wdata", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+138+i*2,"top Register Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+831,"top Register Reg_io_rdata1_MPORT_en", false,-1);
        tracep->declBus(c+1,"top Register Reg_io_rdata1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+202,"top Register Reg_io_rdata1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_io_rdata2_MPORT_en", false,-1);
        tracep->declBus(c+2,"top Register Reg_io_rdata2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+204,"top Register Reg_io_rdata2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_0_MPORT_en", false,-1);
        tracep->declBus(c+832,"top Register Reg_reg_trace_io_input_reg_0_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+206,"top Register Reg_reg_trace_io_input_reg_0_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_1_MPORT_en", false,-1);
        tracep->declBus(c+833,"top Register Reg_reg_trace_io_input_reg_1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+208,"top Register Reg_reg_trace_io_input_reg_1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_2_MPORT_en", false,-1);
        tracep->declBus(c+834,"top Register Reg_reg_trace_io_input_reg_2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+210,"top Register Reg_reg_trace_io_input_reg_2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_3_MPORT_en", false,-1);
        tracep->declBus(c+835,"top Register Reg_reg_trace_io_input_reg_3_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+212,"top Register Reg_reg_trace_io_input_reg_3_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_4_MPORT_en", false,-1);
        tracep->declBus(c+836,"top Register Reg_reg_trace_io_input_reg_4_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+214,"top Register Reg_reg_trace_io_input_reg_4_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_5_MPORT_en", false,-1);
        tracep->declBus(c+837,"top Register Reg_reg_trace_io_input_reg_5_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+216,"top Register Reg_reg_trace_io_input_reg_5_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_6_MPORT_en", false,-1);
        tracep->declBus(c+838,"top Register Reg_reg_trace_io_input_reg_6_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+218,"top Register Reg_reg_trace_io_input_reg_6_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_7_MPORT_en", false,-1);
        tracep->declBus(c+839,"top Register Reg_reg_trace_io_input_reg_7_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+220,"top Register Reg_reg_trace_io_input_reg_7_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_8_MPORT_en", false,-1);
        tracep->declBus(c+840,"top Register Reg_reg_trace_io_input_reg_8_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+222,"top Register Reg_reg_trace_io_input_reg_8_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_9_MPORT_en", false,-1);
        tracep->declBus(c+841,"top Register Reg_reg_trace_io_input_reg_9_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+224,"top Register Reg_reg_trace_io_input_reg_9_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_10_MPORT_en", false,-1);
        tracep->declBus(c+842,"top Register Reg_reg_trace_io_input_reg_10_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+226,"top Register Reg_reg_trace_io_input_reg_10_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_11_MPORT_en", false,-1);
        tracep->declBus(c+843,"top Register Reg_reg_trace_io_input_reg_11_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+228,"top Register Reg_reg_trace_io_input_reg_11_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_12_MPORT_en", false,-1);
        tracep->declBus(c+844,"top Register Reg_reg_trace_io_input_reg_12_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+230,"top Register Reg_reg_trace_io_input_reg_12_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_13_MPORT_en", false,-1);
        tracep->declBus(c+845,"top Register Reg_reg_trace_io_input_reg_13_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+232,"top Register Reg_reg_trace_io_input_reg_13_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_14_MPORT_en", false,-1);
        tracep->declBus(c+846,"top Register Reg_reg_trace_io_input_reg_14_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+234,"top Register Reg_reg_trace_io_input_reg_14_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_15_MPORT_en", false,-1);
        tracep->declBus(c+847,"top Register Reg_reg_trace_io_input_reg_15_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+236,"top Register Reg_reg_trace_io_input_reg_15_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_16_MPORT_en", false,-1);
        tracep->declBus(c+848,"top Register Reg_reg_trace_io_input_reg_16_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+238,"top Register Reg_reg_trace_io_input_reg_16_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_17_MPORT_en", false,-1);
        tracep->declBus(c+849,"top Register Reg_reg_trace_io_input_reg_17_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+240,"top Register Reg_reg_trace_io_input_reg_17_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_18_MPORT_en", false,-1);
        tracep->declBus(c+850,"top Register Reg_reg_trace_io_input_reg_18_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+242,"top Register Reg_reg_trace_io_input_reg_18_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_19_MPORT_en", false,-1);
        tracep->declBus(c+851,"top Register Reg_reg_trace_io_input_reg_19_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+244,"top Register Reg_reg_trace_io_input_reg_19_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_20_MPORT_en", false,-1);
        tracep->declBus(c+852,"top Register Reg_reg_trace_io_input_reg_20_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+246,"top Register Reg_reg_trace_io_input_reg_20_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_21_MPORT_en", false,-1);
        tracep->declBus(c+853,"top Register Reg_reg_trace_io_input_reg_21_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+248,"top Register Reg_reg_trace_io_input_reg_21_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_22_MPORT_en", false,-1);
        tracep->declBus(c+854,"top Register Reg_reg_trace_io_input_reg_22_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+250,"top Register Reg_reg_trace_io_input_reg_22_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_23_MPORT_en", false,-1);
        tracep->declBus(c+855,"top Register Reg_reg_trace_io_input_reg_23_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+252,"top Register Reg_reg_trace_io_input_reg_23_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_24_MPORT_en", false,-1);
        tracep->declBus(c+856,"top Register Reg_reg_trace_io_input_reg_24_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+254,"top Register Reg_reg_trace_io_input_reg_24_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_25_MPORT_en", false,-1);
        tracep->declBus(c+857,"top Register Reg_reg_trace_io_input_reg_25_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+256,"top Register Reg_reg_trace_io_input_reg_25_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_26_MPORT_en", false,-1);
        tracep->declBus(c+858,"top Register Reg_reg_trace_io_input_reg_26_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+258,"top Register Reg_reg_trace_io_input_reg_26_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_27_MPORT_en", false,-1);
        tracep->declBus(c+859,"top Register Reg_reg_trace_io_input_reg_27_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+260,"top Register Reg_reg_trace_io_input_reg_27_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_28_MPORT_en", false,-1);
        tracep->declBus(c+860,"top Register Reg_reg_trace_io_input_reg_28_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+262,"top Register Reg_reg_trace_io_input_reg_28_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_29_MPORT_en", false,-1);
        tracep->declBus(c+861,"top Register Reg_reg_trace_io_input_reg_29_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+264,"top Register Reg_reg_trace_io_input_reg_29_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_30_MPORT_en", false,-1);
        tracep->declBus(c+862,"top Register Reg_reg_trace_io_input_reg_30_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+266,"top Register Reg_reg_trace_io_input_reg_30_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+831,"top Register Reg_reg_trace_io_input_reg_31_MPORT_en", false,-1);
        tracep->declBus(c+863,"top Register Reg_reg_trace_io_input_reg_31_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+268,"top Register Reg_reg_trace_io_input_reg_31_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+9,"top Register Reg_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+8,"top Register Reg_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+831,"top Register Reg_MPORT_mask", false,-1);
        tracep->declBit(c+270,"top Register Reg_MPORT_en", false,-1);
        tracep->declQuad(c+206,"top Register reg_trace_input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+208,"top Register reg_trace_input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+210,"top Register reg_trace_input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+212,"top Register reg_trace_input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+214,"top Register reg_trace_input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+216,"top Register reg_trace_input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+218,"top Register reg_trace_input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+220,"top Register reg_trace_input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+222,"top Register reg_trace_input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+224,"top Register reg_trace_input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+226,"top Register reg_trace_input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+228,"top Register reg_trace_input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+230,"top Register reg_trace_input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+232,"top Register reg_trace_input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+234,"top Register reg_trace_input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+236,"top Register reg_trace_input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+238,"top Register reg_trace_input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+240,"top Register reg_trace_input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+242,"top Register reg_trace_input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+244,"top Register reg_trace_input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+246,"top Register reg_trace_input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+248,"top Register reg_trace_input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+250,"top Register reg_trace_input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+252,"top Register reg_trace_input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+254,"top Register reg_trace_input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+256,"top Register reg_trace_input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+258,"top Register reg_trace_input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+260,"top Register reg_trace_input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+262,"top Register reg_trace_input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+264,"top Register reg_trace_input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+266,"top Register reg_trace_input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+268,"top Register reg_trace_input_reg_31", false,-1, 63,0);
        tracep->declQuad(c+206,"top Register reg_trace input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+208,"top Register reg_trace input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+210,"top Register reg_trace input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+212,"top Register reg_trace input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+214,"top Register reg_trace input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+216,"top Register reg_trace input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+218,"top Register reg_trace input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+220,"top Register reg_trace input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+222,"top Register reg_trace input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+224,"top Register reg_trace input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+226,"top Register reg_trace input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+228,"top Register reg_trace input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+230,"top Register reg_trace input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+232,"top Register reg_trace input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+234,"top Register reg_trace input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+236,"top Register reg_trace input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+238,"top Register reg_trace input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+240,"top Register reg_trace input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+242,"top Register reg_trace input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+244,"top Register reg_trace input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+246,"top Register reg_trace input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+248,"top Register reg_trace input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+250,"top Register reg_trace input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+252,"top Register reg_trace input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+254,"top Register reg_trace input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+256,"top Register reg_trace input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+258,"top Register reg_trace input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+260,"top Register reg_trace input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+262,"top Register reg_trace input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+264,"top Register reg_trace input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+266,"top Register reg_trace input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+268,"top Register reg_trace input_reg_31", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+271+i*2,"top Register reg_trace traceregs", true,(i+0), 63,0);}}
        tracep->declBit(c+825,"top IFU clock", false,-1);
        tracep->declBit(c+826,"top IFU reset", false,-1);
        tracep->declBit(c+11,"top IFU io_ds_allowin", false,-1);
        tracep->declBit(c+12,"top IFU io_ds_ready_go", false,-1);
        tracep->declBit(c+13,"top IFU io_ds_valid", false,-1);
        tracep->declBit(c+14,"top IFU io_br_taken", false,-1);
        tracep->declQuad(c+15,"top IFU io_br_target", false,-1, 63,0);
        tracep->declQuad(c+17,"top IFU io_to_ds_pc", false,-1, 63,0);
        tracep->declBit(c+19,"top IFU io_fs_to_ds_valid", false,-1);
        tracep->declBus(c+20,"top IFU io_inst", false,-1, 31,0);
        tracep->declBit(c+21,"top IFU io_axi_in_arready", false,-1);
        tracep->declQuad(c+22,"top IFU io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+24,"top IFU io_axi_in_rvalid", false,-1);
        tracep->declBus(c+25,"top IFU io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+12,"top IFU io_axi_out_arvalid", false,-1);
        tracep->declBit(c+26,"top IFU io_axi_out_rready", false,-1);
        tracep->declBit(c+27,"top IFU io_fence", false,-1);
        tracep->declBit(c+28,"top IFU io_clear_cache", false,-1);
        tracep->declBit(c+29,"top IFU io_cache_init", false,-1);
        tracep->declQuad(c+335,"top IFU br_target", false,-1, 63,0);
        tracep->declBit(c+19,"top IFU fs_valid", false,-1);
        tracep->declQuad(c+337,"top IFU fs_pc_next", false,-1, 63,0);
        tracep->declBit(c+339,"top IFU cache_init", false,-1);
        tracep->declQuad(c+17,"top IFU fs_pc", false,-1, 63,0);
        tracep->declBus(c+20,"top IFU fs_inst", false,-1, 31,0);
        tracep->declQuad(c+340,"top IFU seq_pc", false,-1, 63,0);
        tracep->declQuad(c+342,"top IFU pc_next", false,-1, 63,0);
        tracep->declBit(c+344,"top IFU fs_allowin", false,-1);
        tracep->declBit(c+825,"top IDU clock", false,-1);
        tracep->declBit(c+826,"top IDU reset", false,-1);
        tracep->declQuad(c+17,"top IDU io_pc", false,-1, 63,0);
        tracep->declBit(c+19,"top IDU io_fs_to_ds_valid", false,-1);
        tracep->declBit(c+30,"top IDU io_ds_to_es_valid", false,-1);
        tracep->declBit(c+31,"top IDU io_es_allowin", false,-1);
        tracep->declBus(c+20,"top IDU io_from_fs_inst", false,-1, 31,0);
        tracep->declBit(c+14,"top IDU io_br_taken", false,-1);
        tracep->declQuad(c+15,"top IDU io_br_target", false,-1, 63,0);
        tracep->declBit(c+11,"top IDU io_ds_allowin", false,-1);
        tracep->declBit(c+12,"top IDU io_ds_ready_go", false,-1);
        tracep->declBit(c+27,"top IDU io_fence", false,-1);
        tracep->declBus(c+1,"top IDU io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top IDU io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top IDU io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top IDU io_rdata2", false,-1, 63,0);
        tracep->declQuad(c+32,"top IDU io_to_es_pc", false,-1, 63,0);
        tracep->declBus(c+34,"top IDU io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+35,"top IDU io_src1", false,-1, 63,0);
        tracep->declQuad(c+37,"top IDU io_src2", false,-1, 63,0);
        tracep->declBus(c+39,"top IDU io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+40,"top IDU io_store_data", false,-1, 63,0);
        tracep->declBit(c+42,"top IDU io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+43,"top IDU io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+44,"top IDU io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+45,"top IDU io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBus(c+46,"top IDU io_load_type", false,-1, 2,0);
        tracep->declBit(c+47,"top IDU io_es_ld", false,-1);
        tracep->declQuad(c+48,"top IDU io_es_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+50,"top IDU io_ms_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+9,"top IDU io_ws_fwd_res", false,-1, 63,0);
        tracep->declBit(c+52,"top IDU io_es_fwd_ready", false,-1);
        tracep->declBit(c+53,"top IDU io_ms_fwd_ready", false,-1);
        tracep->declBit(c+54,"top IDU io_es_rf_we", false,-1);
        tracep->declBit(c+55,"top IDU io_ms_rf_we", false,-1);
        tracep->declBit(c+56,"top IDU io_ws_rf_we", false,-1);
        tracep->declBit(c+57,"top IDU io_es_valid", false,-1);
        tracep->declBit(c+58,"top IDU io_ms_valid", false,-1);
        tracep->declBit(c+59,"top IDU io_ws_valid", false,-1);
        tracep->declBus(c+60,"top IDU io_es_rf_dst", false,-1, 4,0);
        tracep->declBus(c+61,"top IDU io_ms_rf_dst", false,-1, 4,0);
        tracep->declBus(c+8,"top IDU io_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+13,"top IDU io_ds_valid", false,-1);
        tracep->declBit(c+825,"top IDU csr_reg_clock", false,-1);
        tracep->declBit(c+345,"top IDU csr_reg_io_wen1", false,-1);
        tracep->declBit(c+346,"top IDU csr_reg_io_wen2", false,-1);
        tracep->declBus(c+347,"top IDU csr_reg_io_waddr1", false,-1, 1,0);
        tracep->declQuad(c+348,"top IDU csr_reg_io_wdata1", false,-1, 63,0);
        tracep->declQuad(c+350,"top IDU csr_reg_io_wdata2", false,-1, 63,0);
        tracep->declBus(c+352,"top IDU csr_reg_io_raddr", false,-1, 1,0);
        tracep->declQuad(c+353,"top IDU csr_reg_io_rdata", false,-1, 63,0);
        tracep->declBit(c+13,"top IDU ds_valid", false,-1);
        tracep->declQuad(c+32,"top IDU ds_pc", false,-1, 63,0);
        tracep->declBus(c+355,"top IDU inst", false,-1, 31,0);
        tracep->declBit(c+356,"top IDU br_taken_cancel", false,-1);
        tracep->declBit(c+357,"top IDU src1_is_pc", false,-1);
        tracep->declBus(c+358,"top IDU inst_type", false,-1, 31,0);
        tracep->declBus(c+359,"top IDU csr_write", false,-1, 1,0);
        tracep->declBus(c+1,"top IDU rs1", false,-1, 4,0);
        tracep->declBit(c+360,"top IDU conflict_es_rs1", false,-1);
        tracep->declBit(c+361,"top IDU conflict_ms_rs1", false,-1);
        tracep->declBit(c+362,"top IDU conflict_ws_rs1", false,-1);
        tracep->declBit(c+363,"top IDU src2_is_imm", false,-1);
        tracep->declBus(c+364,"top IDU rs2", false,-1, 4,0);
        tracep->declBit(c+365,"top IDU conflict_es_rs2", false,-1);
        tracep->declBit(c+366,"top IDU conflict_ms_rs2", false,-1);
        tracep->declBit(c+367,"top IDU conflict_ws_rs2", false,-1);
        tracep->declBit(c+368,"top IDU ds_ready_go", false,-1);
        tracep->declBit(c+369,"top IDU ds_allowin", false,-1);
        tracep->declQuad(c+370,"top IDU rdata1", false,-1, 63,0);
        tracep->declQuad(c+372,"top IDU rdata2", false,-1, 63,0);
        tracep->declBit(c+374,"top IDU br_taken", false,-1);
        tracep->declBus(c+39,"top IDU rd", false,-1, 4,0);
        tracep->declBit(c+27,"top IDU fence", false,-1);
        tracep->declBus(c+375,"top IDU imm_imm", false,-1, 11,0);
        tracep->declBus(c+376,"top IDU imm_imm_1", false,-1, 19,0);
        tracep->declBus(c+377,"top IDU imm_imm_2", false,-1, 19,0);
        tracep->declBus(c+378,"top IDU imm_imm_3", false,-1, 11,0);
        tracep->declBus(c+379,"top IDU imm_imm_4", false,-1, 11,0);
        tracep->declQuad(c+380,"top IDU imm", false,-1, 63,0);
        tracep->declBus(c+382,"top IDU csr_index", false,-1, 1,0);
        tracep->declQuad(c+383,"top IDU csr_wdata", false,-1, 63,0);
        tracep->declBus(c+34,"top IDU ALUop", false,-1, 31,0);
        tracep->declQuad(c+385,"top IDU src1", false,-1, 63,0);
        tracep->declQuad(c+37,"top IDU src2", false,-1, 63,0);
        tracep->declBit(c+825,"top IDU csr_reg clock", false,-1);
        tracep->declBit(c+345,"top IDU csr_reg io_wen1", false,-1);
        tracep->declBit(c+346,"top IDU csr_reg io_wen2", false,-1);
        tracep->declBus(c+347,"top IDU csr_reg io_waddr1", false,-1, 1,0);
        tracep->declQuad(c+348,"top IDU csr_reg io_wdata1", false,-1, 63,0);
        tracep->declQuad(c+350,"top IDU csr_reg io_wdata2", false,-1, 63,0);
        tracep->declBus(c+352,"top IDU csr_reg io_raddr", false,-1, 1,0);
        tracep->declQuad(c+353,"top IDU csr_reg io_rdata", false,-1, 63,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+387+i*2,"top IDU csr_reg CSR_Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+831,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_en", false,-1);
        tracep->declBus(c+352,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+353,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+348,"top IDU csr_reg CSR_Reg_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+347,"top IDU csr_reg CSR_Reg_MPORT_addr", false,-1, 1,0);
        tracep->declBit(c+831,"top IDU csr_reg CSR_Reg_MPORT_mask", false,-1);
        tracep->declBit(c+345,"top IDU csr_reg CSR_Reg_MPORT_en", false,-1);
        tracep->declQuad(c+350,"top IDU csr_reg CSR_Reg_MPORT_1_data", false,-1, 63,0);
        tracep->declBus(c+864,"top IDU csr_reg CSR_Reg_MPORT_1_addr", false,-1, 1,0);
        tracep->declBit(c+831,"top IDU csr_reg CSR_Reg_MPORT_1_mask", false,-1);
        tracep->declBit(c+346,"top IDU csr_reg CSR_Reg_MPORT_1_en", false,-1);
        tracep->declBit(c+825,"top EXU clock", false,-1);
        tracep->declBit(c+826,"top EXU reset", false,-1);
        tracep->declQuad(c+32,"top EXU io_pc", false,-1, 63,0);
        tracep->declBit(c+30,"top EXU io_ds_to_es_valid", false,-1);
        tracep->declBit(c+62,"top EXU io_ms_allowin", false,-1);
        tracep->declBit(c+31,"top EXU io_es_allowin", false,-1);
        tracep->declBus(c+34,"top EXU io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+35,"top EXU io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+37,"top EXU io_src2_value", false,-1, 63,0);
        tracep->declBus(c+39,"top EXU io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+40,"top EXU io_store_data", false,-1, 63,0);
        tracep->declBit(c+52,"top EXU io_es_to_ms_valid", false,-1);
        tracep->declBus(c+46,"top EXU io_load_type", false,-1, 2,0);
        tracep->declQuad(c+63,"top EXU io_to_ms_pc", false,-1, 63,0);
        tracep->declQuad(c+48,"top EXU io_to_ms_alures", false,-1, 63,0);
        tracep->declQuad(c+65,"top EXU io_to_ms_store_data", false,-1, 63,0);
        tracep->declBit(c+67,"top EXU io_to_ms_wen", false,-1);
        tracep->declBus(c+68,"top EXU io_to_ms_wstrb", false,-1, 7,0);
        tracep->declBit(c+69,"top EXU io_to_ms_ren", false,-1);
        tracep->declQuad(c+48,"top EXU io_to_ms_maddr", false,-1, 63,0);
        tracep->declBus(c+60,"top EXU io_to_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+54,"top EXU io_to_ms_rf_we", false,-1);
        tracep->declBus(c+70,"top EXU io_to_ms_load_type", false,-1, 2,0);
        tracep->declBit(c+42,"top EXU io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+43,"top EXU io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+44,"top EXU io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+45,"top EXU io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBit(c+57,"top EXU io_es_valid", false,-1);
        tracep->declBit(c+54,"top EXU io_es_rf_we", false,-1);
        tracep->declBus(c+60,"top EXU io_es_rf_dst", false,-1, 4,0);
        tracep->declBit(c+52,"top EXU io_es_fwd_ready", false,-1);
        tracep->declQuad(c+48,"top EXU io_es_fwd_res", false,-1, 63,0);
        tracep->declBit(c+47,"top EXU io_es_ld", false,-1);
        tracep->declBit(c+825,"top EXU ALU_clock", false,-1);
        tracep->declBit(c+826,"top EXU ALU_reset", false,-1);
        tracep->declQuad(c+395,"top EXU ALU_io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+397,"top EXU ALU_io_src2_value", false,-1, 63,0);
        tracep->declBus(c+399,"top EXU ALU_io_ALUop", false,-1, 31,0);
        tracep->declBit(c+57,"top EXU ALU_io_src_valid", false,-1);
        tracep->declBit(c+400,"top EXU ALU_io_alu_busy", false,-1);
        tracep->declBit(c+62,"top EXU ALU_io_res_ready", false,-1);
        tracep->declQuad(c+48,"top EXU ALU_io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+63,"top EXU es_pc", false,-1, 63,0);
        tracep->declBit(c+57,"top EXU es_valid", false,-1);
        tracep->declBus(c+60,"top EXU es_rd", false,-1, 4,0);
        tracep->declBit(c+54,"top EXU es_rf_we", false,-1);
        tracep->declQuad(c+401,"top EXU src1_value", false,-1, 63,0);
        tracep->declQuad(c+397,"top EXU src2_value", false,-1, 63,0);
        tracep->declQuad(c+65,"top EXU store_data", false,-1, 63,0);
        tracep->declBus(c+68,"top EXU st_wstrb", false,-1, 7,0);
        tracep->declBit(c+67,"top EXU st_we", false,-1);
        tracep->declBit(c+69,"top EXU ld_we", false,-1);
        tracep->declBus(c+399,"top EXU ALUop", false,-1, 31,0);
        tracep->declBus(c+70,"top EXU load_type", false,-1, 2,0);
        tracep->declBit(c+403,"top EXU es_ready_go", false,-1);
        tracep->declBit(c+31,"top EXU es_allowin", false,-1);
        tracep->declBit(c+825,"top EXU ALU clock", false,-1);
        tracep->declBit(c+826,"top EXU ALU reset", false,-1);
        tracep->declQuad(c+395,"top EXU ALU io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+397,"top EXU ALU io_src2_value", false,-1, 63,0);
        tracep->declBus(c+399,"top EXU ALU io_ALUop", false,-1, 31,0);
        tracep->declBit(c+57,"top EXU ALU io_src_valid", false,-1);
        tracep->declBit(c+400,"top EXU ALU io_alu_busy", false,-1);
        tracep->declBit(c+62,"top EXU ALU io_res_ready", false,-1);
        tracep->declQuad(c+48,"top EXU ALU io_alu_res", false,-1, 63,0);
        tracep->declBit(c+825,"top EXU ALU Mul_clock", false,-1);
        tracep->declBit(c+826,"top EXU ALU Mul_reset", false,-1);
        tracep->declBit(c+404,"top EXU ALU Mul_io_mul_valid", false,-1);
        tracep->declBit(c+405,"top EXU ALU Mul_io_mulw", false,-1);
        tracep->declQuad(c+395,"top EXU ALU Mul_io_multiplicand", false,-1, 63,0);
        tracep->declQuad(c+397,"top EXU ALU Mul_io_multiplier", false,-1, 63,0);
        tracep->declBit(c+406,"top EXU ALU Mul_io_out_valid", false,-1);
        tracep->declBit(c+62,"top EXU ALU Mul_io_out_ready", false,-1);
        tracep->declBus(c+407,"top EXU ALU Mul_io_result_hi", false,-1, 31,0);
        tracep->declBus(c+408,"top EXU ALU Mul_io_result_lo", false,-1, 31,0);
        tracep->declBit(c+825,"top EXU ALU Div_clock", false,-1);
        tracep->declBit(c+826,"top EXU ALU Div_reset", false,-1);
        tracep->declQuad(c+395,"top EXU ALU Div_io_dividend", false,-1, 63,0);
        tracep->declQuad(c+397,"top EXU ALU Div_io_divisor", false,-1, 63,0);
        tracep->declBit(c+409,"top EXU ALU Div_io_div_valid", false,-1);
        tracep->declBit(c+410,"top EXU ALU Div_io_divw", false,-1);
        tracep->declBit(c+411,"top EXU ALU Div_io_div_signed", false,-1);
        tracep->declBit(c+412,"top EXU ALU Div_io_out_valid", false,-1);
        tracep->declQuad(c+413,"top EXU ALU Div_io_quotient", false,-1, 63,0);
        tracep->declQuad(c+415,"top EXU ALU Div_io_remainder", false,-1, 63,0);
        tracep->declBit(c+417,"top EXU ALU mul_valid", false,-1);
        tracep->declBit(c+418,"top EXU ALU div_valid", false,-1);
        tracep->declQuad(c+419,"top EXU ALU add_res", false,-1, 63,0);
        tracep->declQuad(c+421,"top EXU ALU sub_res", false,-1, 63,0);
        tracep->declQuad(c+423,"top EXU ALU sra_res", false,-1, 63,0);
        tracep->declQuad(c+425,"top EXU ALU srl_res", false,-1, 63,0);
        tracep->declArray(c+427,"top EXU ALU sll_res", false,-1, 126,0);
        tracep->declBus(c+431,"top EXU ALU sraw_res", false,-1, 31,0);
        tracep->declBus(c+432,"top EXU ALU srlw_res", false,-1, 31,0);
        tracep->declQuad(c+433,"top EXU ALU sllw_res", false,-1, 62,0);
        tracep->declQuad(c+435,"top EXU ALU or_res", false,-1, 63,0);
        tracep->declQuad(c+437,"top EXU ALU xor_res", false,-1, 63,0);
        tracep->declQuad(c+439,"top EXU ALU and_res", false,-1, 63,0);
        tracep->declQuad(c+441,"top EXU ALU mlu_res", false,-1, 63,0);
        tracep->declBus(c+443,"top EXU ALU divw_res", false,-1, 31,0);
        tracep->declBus(c+444,"top EXU ALU remw_res", false,-1, 31,0);
        tracep->declArray(c+445,"top EXU ALU alu_res", false,-1, 126,0);
        tracep->declBit(c+825,"top EXU ALU Mul clock", false,-1);
        tracep->declBit(c+826,"top EXU ALU Mul reset", false,-1);
        tracep->declBit(c+404,"top EXU ALU Mul io_mul_valid", false,-1);
        tracep->declBit(c+405,"top EXU ALU Mul io_mulw", false,-1);
        tracep->declQuad(c+395,"top EXU ALU Mul io_multiplicand", false,-1, 63,0);
        tracep->declQuad(c+397,"top EXU ALU Mul io_multiplier", false,-1, 63,0);
        tracep->declBit(c+406,"top EXU ALU Mul io_out_valid", false,-1);
        tracep->declBit(c+62,"top EXU ALU Mul io_out_ready", false,-1);
        tracep->declBus(c+407,"top EXU ALU Mul io_result_hi", false,-1, 31,0);
        tracep->declBus(c+408,"top EXU ALU Mul io_result_lo", false,-1, 31,0);
        tracep->declBus(c+449,"top EXU ALU Mul booth_partial_io_y", false,-1, 2,0);
        tracep->declQuad(c+450,"top EXU ALU Mul booth_partial_io_x", false,-1, 63,0);
        tracep->declBit(c+452,"top EXU ALU Mul booth_partial_io_c", false,-1);
        tracep->declQuad(c+453,"top EXU ALU Mul booth_partial_io_p", false,-1, 63,0);
        tracep->declBit(c+455,"top EXU ALU Mul sign", false,-1);
        tracep->declQuad(c+456,"top EXU ALU Mul res", false,-1, 63,0);
        tracep->declBus(c+458,"top EXU ALU Mul state", false,-1, 1,0);
        tracep->declArray(c+459,"top EXU ALU Mul src1", false,-1, 127,0);
        tracep->declArray(c+463,"top EXU ALU Mul src2", false,-1, 64,0);
        tracep->declQuad(c+466,"top EXU ALU Mul src1_32", false,-1, 63,0);
        tracep->declQuad(c+468,"top EXU ALU Mul src2_32", false,-1, 63,0);
        tracep->declArray(c+470,"top EXU ALU Mul real_cand", false,-1, 127,0);
        tracep->declQuad(c+474,"top EXU ALU Mul real_er", false,-1, 63,0);
        tracep->declBus(c+449,"top EXU ALU Mul booth_partial io_y", false,-1, 2,0);
        tracep->declQuad(c+450,"top EXU ALU Mul booth_partial io_x", false,-1, 63,0);
        tracep->declBit(c+452,"top EXU ALU Mul booth_partial io_c", false,-1);
        tracep->declQuad(c+453,"top EXU ALU Mul booth_partial io_p", false,-1, 63,0);
        tracep->declBit(c+825,"top EXU ALU Div clock", false,-1);
        tracep->declBit(c+826,"top EXU ALU Div reset", false,-1);
        tracep->declQuad(c+395,"top EXU ALU Div io_dividend", false,-1, 63,0);
        tracep->declQuad(c+397,"top EXU ALU Div io_divisor", false,-1, 63,0);
        tracep->declBit(c+409,"top EXU ALU Div io_div_valid", false,-1);
        tracep->declBit(c+410,"top EXU ALU Div io_divw", false,-1);
        tracep->declBit(c+411,"top EXU ALU Div io_div_signed", false,-1);
        tracep->declBit(c+412,"top EXU ALU Div io_out_valid", false,-1);
        tracep->declQuad(c+413,"top EXU ALU Div io_quotient", false,-1, 63,0);
        tracep->declQuad(c+415,"top EXU ALU Div io_remainder", false,-1, 63,0);
        tracep->declBit(c+476,"top EXU ALU Div dend_neg", false,-1);
        tracep->declBit(c+477,"top EXU ALU Div sor_neg", false,-1);
        tracep->declBit(c+478,"top EXU ALU Div quotient_neg", false,-1);
        tracep->declQuad(c+479,"top EXU ALU Div src1_32_s", false,-1, 63,0);
        tracep->declQuad(c+481,"top EXU ALU Div src2_32_s", false,-1, 63,0);
        tracep->declQuad(c+483,"top EXU ALU Div src1_32", false,-1, 63,0);
        tracep->declQuad(c+485,"top EXU ALU Div src2_32", false,-1, 63,0);
        tracep->declQuad(c+487,"top EXU ALU Div real_cand", false,-1, 63,0);
        tracep->declQuad(c+489,"top EXU ALU Div real_er", false,-1, 63,0);
        tracep->declArray(c+491,"top EXU ALU Div src2", false,-1, 64,0);
        tracep->declArray(c+494,"top EXU ALU Div div_cand", false,-1, 127,0);
        tracep->declBit(c+498,"top EXU ALU Div div_start", false,-1);
        tracep->declQuad(c+499,"top EXU ALU Div quotient", false,-1, 63,0);
        tracep->declBus(c+501,"top EXU ALU Div step_num", false,-1, 31,0);
        tracep->declArray(c+502,"top EXU ALU Div src1", false,-1, 127,0);
        tracep->declArray(c+506,"top EXU ALU Div sub_res", false,-1, 64,0);
        tracep->declArray(c+509,"top EXU ALU Div update_cand", false,-1, 127,0);
        tracep->declArray(c+513,"top EXU ALU Div new_cand", false,-1, 127,0);
        tracep->declBit(c+825,"top LSU clock", false,-1);
        tracep->declBit(c+826,"top LSU reset", false,-1);
        tracep->declQuad(c+63,"top LSU io_pc", false,-1, 63,0);
        tracep->declBit(c+52,"top LSU io_es_to_ms_valid", false,-1);
        tracep->declBit(c+62,"top LSU io_ms_allowin", false,-1);
        tracep->declBit(c+54,"top LSU io_rf_we", false,-1);
        tracep->declBus(c+60,"top LSU io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+48,"top LSU io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+65,"top LSU io_store_data", false,-1, 63,0);
        tracep->declBus(c+70,"top LSU io_load_type", false,-1, 2,0);
        tracep->declBit(c+67,"top LSU io_wen", false,-1);
        tracep->declBus(c+68,"top LSU io_wstrb", false,-1, 7,0);
        tracep->declBit(c+69,"top LSU io_ren", false,-1);
        tracep->declQuad(c+48,"top LSU io_maddr", false,-1, 63,0);
        tracep->declQuad(c+71,"top LSU io_to_ws_pc", false,-1, 63,0);
        tracep->declQuad(c+73,"top LSU io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+53,"top LSU io_ms_to_ws_valid", false,-1);
        tracep->declBit(c+75,"top LSU io_to_ws_rf_we", false,-1);
        tracep->declBus(c+61,"top LSU io_to_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+58,"top LSU io_ms_valid", false,-1);
        tracep->declBit(c+55,"top LSU io_ms_rf_we", false,-1);
        tracep->declBus(c+61,"top LSU io_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+53,"top LSU io_ms_fwd_ready", false,-1);
        tracep->declQuad(c+50,"top LSU io_ms_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+76,"top LSU io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+78,"top LSU io_axi_in_rvalid", false,-1);
        tracep->declBit(c+79,"top LSU io_axi_in_bvalid", false,-1);
        tracep->declBus(c+80,"top LSU io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+81,"top LSU io_axi_out_arvalid", false,-1);
        tracep->declBus(c+80,"top LSU io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBit(c+82,"top LSU io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+83,"top LSU io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+85,"top LSU io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+86,"top LSU io_axi_out_wvalid", false,-1);
        tracep->declBit(c+58,"top LSU ms_valid", false,-1);
        tracep->declQuad(c+71,"top LSU ms_pc", false,-1, 63,0);
        tracep->declBit(c+75,"top LSU ms_rf_we", false,-1);
        tracep->declBus(c+61,"top LSU ms_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+517,"top LSU ms_res", false,-1, 63,0);
        tracep->declQuad(c+83,"top LSU store_data", false,-1, 63,0);
        tracep->declBit(c+86,"top LSU wen", false,-1);
        tracep->declBus(c+85,"top LSU wstrb", false,-1, 7,0);
        tracep->declBit(c+519,"top LSU ren", false,-1);
        tracep->declQuad(c+520,"top LSU maddr", false,-1, 63,0);
        tracep->declBus(c+522,"top LSU load_type", false,-1, 2,0);
        tracep->declBit(c+523,"top LSU ms_ready_go", false,-1);
        tracep->declBit(c+62,"top LSU ms_allowin", false,-1);
        tracep->declQuad(c+524,"top LSU rdata", false,-1, 63,0);
        tracep->declBit(c+825,"top WBU clock", false,-1);
        tracep->declBit(c+826,"top WBU reset", false,-1);
        tracep->declQuad(c+71,"top WBU io_pc", false,-1, 63,0);
        tracep->declBit(c+53,"top WBU io_ms_to_ws_valid", false,-1);
        tracep->declQuad(c+73,"top WBU io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+75,"top WBU io_rf_we", false,-1);
        tracep->declBus(c+61,"top WBU io_rf_dst", false,-1, 4,0);
        tracep->declBit(c+7,"top WBU io_we", false,-1);
        tracep->declBus(c+8,"top WBU io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU io_wdata", false,-1, 63,0);
        tracep->declBit(c+59,"top WBU io_ws_valid", false,-1);
        tracep->declBit(c+56,"top WBU io_ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU io_ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU io_ws_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+87,"top WBU io_ws_pc", false,-1, 63,0);
        tracep->declBit(c+59,"top WBU ws_valid", false,-1);
        tracep->declQuad(c+87,"top WBU ws_pc", false,-1, 63,0);
        tracep->declBit(c+56,"top WBU ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU ws_res", false,-1, 63,0);
        tracep->declBit(c+825,"top arbiter clock", false,-1);
        tracep->declBit(c+826,"top arbiter reset", false,-1);
        tracep->declBus(c+89,"top arbiter io_ifu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+90,"top arbiter io_ifu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+91,"top arbiter io_ifu_axi_in_arvalid", false,-1);
        tracep->declBit(c+92,"top arbiter io_ifu_axi_in_rready", false,-1);
        tracep->declQuad(c+93,"top arbiter io_ifu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+95,"top arbiter io_ifu_axi_out_rlast", false,-1);
        tracep->declBit(c+96,"top arbiter io_ifu_axi_out_rvalid", false,-1);
        tracep->declBus(c+97,"top arbiter io_lsu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+98,"top arbiter io_lsu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+99,"top arbiter io_lsu_axi_in_arvalid", false,-1);
        tracep->declBit(c+100,"top arbiter io_lsu_axi_in_rready", false,-1);
        tracep->declBus(c+101,"top arbiter io_lsu_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+102,"top arbiter io_lsu_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+103,"top arbiter io_lsu_axi_in_awvalid", false,-1);
        tracep->declQuad(c+104,"top arbiter io_lsu_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+106,"top arbiter io_lsu_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+107,"top arbiter io_lsu_axi_in_wvalid", false,-1);
        tracep->declBit(c+108,"top arbiter io_lsu_axi_in_bready", false,-1);
        tracep->declQuad(c+109,"top arbiter io_lsu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+111,"top arbiter io_lsu_axi_out_rlast", false,-1);
        tracep->declBit(c+112,"top arbiter io_lsu_axi_out_rvalid", false,-1);
        tracep->declBit(c+113,"top arbiter io_lsu_axi_out_wready", false,-1);
        tracep->declBit(c+114,"top arbiter io_lsu_axi_out_bvalid", false,-1);
        tracep->declQuad(c+115,"top arbiter io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+117,"top arbiter io_axi_in_rlast", false,-1);
        tracep->declBit(c+118,"top arbiter io_axi_in_rvalid", false,-1);
        tracep->declBit(c+119,"top arbiter io_axi_in_wready", false,-1);
        tracep->declBit(c+120,"top arbiter io_axi_in_bvalid", false,-1);
        tracep->declBus(c+121,"top arbiter io_axi_out_araddr", false,-1, 31,0);
        tracep->declBus(c+122,"top arbiter io_axi_out_arlen", false,-1, 7,0);
        tracep->declBit(c+123,"top arbiter io_axi_out_arvalid", false,-1);
        tracep->declBit(c+124,"top arbiter io_axi_out_rready", false,-1);
        tracep->declBus(c+125,"top arbiter io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBus(c+126,"top arbiter io_axi_out_awlen", false,-1, 7,0);
        tracep->declBit(c+127,"top arbiter io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+128,"top arbiter io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+130,"top arbiter io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+131,"top arbiter io_axi_out_wvalid", false,-1);
        tracep->declBit(c+132,"top arbiter io_axi_out_bready", false,-1);
        tracep->declBus(c+526,"top arbiter state", false,-1, 1,0);
        tracep->declBit(c+825,"top i_cache clock", false,-1);
        tracep->declBit(c+826,"top i_cache reset", false,-1);
        tracep->declBus(c+25,"top i_cache io_from_ifu_araddr", false,-1, 31,0);
        tracep->declBit(c+12,"top i_cache io_from_ifu_arvalid", false,-1);
        tracep->declBit(c+26,"top i_cache io_from_ifu_rready", false,-1);
        tracep->declBit(c+21,"top i_cache io_to_ifu_arready", false,-1);
        tracep->declQuad(c+22,"top i_cache io_to_ifu_rdata", false,-1, 63,0);
        tracep->declBit(c+24,"top i_cache io_to_ifu_rvalid", false,-1);
        tracep->declBus(c+89,"top i_cache io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+90,"top i_cache io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+91,"top i_cache io_to_axi_arvalid", false,-1);
        tracep->declBit(c+92,"top i_cache io_to_axi_rready", false,-1);
        tracep->declQuad(c+93,"top i_cache io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+95,"top i_cache io_from_axi_rlast", false,-1);
        tracep->declBit(c+96,"top i_cache io_from_axi_rvalid", false,-1);
        tracep->declBit(c+29,"top i_cache io_cache_init", false,-1);
        tracep->declBit(c+28,"top i_cache io_clear_cache", false,-1);
        tracep->declBit(c+527,"top i_cache cacheLine_io_to_ifu_rdata_MPORT_en", false,-1);
        tracep->declBus(c+528,"top i_cache cacheLine_io_to_ifu_rdata_MPORT_addr", false,-1, 5,0);
        tracep->declArray(c+529,"top i_cache cacheLine_io_to_ifu_rdata_MPORT_data", false,-1, 511,0);
        tracep->declArray(c+545,"top i_cache cacheLine_MPORT_data", false,-1, 511,0);
        tracep->declBus(c+561,"top i_cache cacheLine_MPORT_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache cacheLine_MPORT_mask", false,-1);
        tracep->declBit(c+562,"top i_cache cacheLine_MPORT_en", false,-1);
        tracep->declArray(c+545,"top i_cache cacheLine_MPORT_3_data", false,-1, 511,0);
        tracep->declBus(c+563,"top i_cache cacheLine_MPORT_3_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache cacheLine_MPORT_3_mask", false,-1);
        tracep->declBit(c+564,"top i_cache cacheLine_MPORT_3_en", false,-1);
        tracep->declBit(c+831,"top i_cache validMem_valid_0_MPORT_en", false,-1);
        tracep->declBus(c+565,"top i_cache validMem_valid_0_MPORT_addr", false,-1, 5,0);
        tracep->declBit(c+566,"top i_cache validMem_valid_0_MPORT_data", false,-1);
        tracep->declBit(c+831,"top i_cache validMem_valid_1_MPORT_en", false,-1);
        tracep->declBus(c+567,"top i_cache validMem_valid_1_MPORT_addr", false,-1, 5,0);
        tracep->declBit(c+568,"top i_cache validMem_valid_1_MPORT_data", false,-1);
        tracep->declBit(c+831,"top i_cache validMem_valid_2_MPORT_en", false,-1);
        tracep->declBus(c+569,"top i_cache validMem_valid_2_MPORT_addr", false,-1, 5,0);
        tracep->declBit(c+570,"top i_cache validMem_valid_2_MPORT_data", false,-1);
        tracep->declBit(c+831,"top i_cache validMem_valid_3_MPORT_en", false,-1);
        tracep->declBus(c+571,"top i_cache validMem_valid_3_MPORT_addr", false,-1, 5,0);
        tracep->declBit(c+572,"top i_cache validMem_valid_3_MPORT_data", false,-1);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_2_data", false,-1);
        tracep->declBus(c+561,"top i_cache validMem_MPORT_2_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_2_mask", false,-1);
        tracep->declBit(c+562,"top i_cache validMem_MPORT_2_en", false,-1);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_5_data", false,-1);
        tracep->declBus(c+563,"top i_cache validMem_MPORT_5_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_5_mask", false,-1);
        tracep->declBit(c+564,"top i_cache validMem_MPORT_5_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_6_data", false,-1);
        tracep->declBus(c+866,"top i_cache validMem_MPORT_6_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_6_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_6_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_7_data", false,-1);
        tracep->declBus(c+867,"top i_cache validMem_MPORT_7_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_7_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_7_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_8_data", false,-1);
        tracep->declBus(c+868,"top i_cache validMem_MPORT_8_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_8_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_8_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_9_data", false,-1);
        tracep->declBus(c+869,"top i_cache validMem_MPORT_9_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_9_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_9_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_10_data", false,-1);
        tracep->declBus(c+870,"top i_cache validMem_MPORT_10_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_10_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_10_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_11_data", false,-1);
        tracep->declBus(c+871,"top i_cache validMem_MPORT_11_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_11_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_11_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_12_data", false,-1);
        tracep->declBus(c+872,"top i_cache validMem_MPORT_12_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_12_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_12_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_13_data", false,-1);
        tracep->declBus(c+873,"top i_cache validMem_MPORT_13_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_13_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_13_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_14_data", false,-1);
        tracep->declBus(c+874,"top i_cache validMem_MPORT_14_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_14_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_14_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_15_data", false,-1);
        tracep->declBus(c+875,"top i_cache validMem_MPORT_15_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_15_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_15_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_16_data", false,-1);
        tracep->declBus(c+876,"top i_cache validMem_MPORT_16_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_16_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_16_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_17_data", false,-1);
        tracep->declBus(c+877,"top i_cache validMem_MPORT_17_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_17_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_17_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_18_data", false,-1);
        tracep->declBus(c+878,"top i_cache validMem_MPORT_18_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_18_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_18_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_19_data", false,-1);
        tracep->declBus(c+879,"top i_cache validMem_MPORT_19_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_19_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_19_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_20_data", false,-1);
        tracep->declBus(c+880,"top i_cache validMem_MPORT_20_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_20_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_20_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_21_data", false,-1);
        tracep->declBus(c+881,"top i_cache validMem_MPORT_21_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_21_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_21_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_22_data", false,-1);
        tracep->declBus(c+882,"top i_cache validMem_MPORT_22_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_22_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_22_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_23_data", false,-1);
        tracep->declBus(c+883,"top i_cache validMem_MPORT_23_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_23_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_23_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_24_data", false,-1);
        tracep->declBus(c+884,"top i_cache validMem_MPORT_24_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_24_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_24_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_25_data", false,-1);
        tracep->declBus(c+885,"top i_cache validMem_MPORT_25_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_25_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_25_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_26_data", false,-1);
        tracep->declBus(c+886,"top i_cache validMem_MPORT_26_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_26_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_26_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_27_data", false,-1);
        tracep->declBus(c+887,"top i_cache validMem_MPORT_27_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_27_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_27_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_28_data", false,-1);
        tracep->declBus(c+888,"top i_cache validMem_MPORT_28_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_28_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_28_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_29_data", false,-1);
        tracep->declBus(c+889,"top i_cache validMem_MPORT_29_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_29_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_29_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_30_data", false,-1);
        tracep->declBus(c+890,"top i_cache validMem_MPORT_30_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_30_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_30_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_31_data", false,-1);
        tracep->declBus(c+891,"top i_cache validMem_MPORT_31_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_31_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_31_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_32_data", false,-1);
        tracep->declBus(c+892,"top i_cache validMem_MPORT_32_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_32_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_32_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_33_data", false,-1);
        tracep->declBus(c+893,"top i_cache validMem_MPORT_33_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_33_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_33_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_34_data", false,-1);
        tracep->declBus(c+894,"top i_cache validMem_MPORT_34_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_34_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_34_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_35_data", false,-1);
        tracep->declBus(c+895,"top i_cache validMem_MPORT_35_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_35_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_35_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_36_data", false,-1);
        tracep->declBus(c+896,"top i_cache validMem_MPORT_36_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_36_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_36_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_37_data", false,-1);
        tracep->declBus(c+897,"top i_cache validMem_MPORT_37_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_37_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_37_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_38_data", false,-1);
        tracep->declBus(c+898,"top i_cache validMem_MPORT_38_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_38_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_38_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_39_data", false,-1);
        tracep->declBus(c+899,"top i_cache validMem_MPORT_39_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_39_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_39_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_40_data", false,-1);
        tracep->declBus(c+900,"top i_cache validMem_MPORT_40_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_40_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_40_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_41_data", false,-1);
        tracep->declBus(c+901,"top i_cache validMem_MPORT_41_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_41_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_41_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_42_data", false,-1);
        tracep->declBus(c+902,"top i_cache validMem_MPORT_42_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_42_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_42_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_43_data", false,-1);
        tracep->declBus(c+903,"top i_cache validMem_MPORT_43_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_43_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_43_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_44_data", false,-1);
        tracep->declBus(c+904,"top i_cache validMem_MPORT_44_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_44_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_44_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_45_data", false,-1);
        tracep->declBus(c+905,"top i_cache validMem_MPORT_45_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_45_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_45_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_46_data", false,-1);
        tracep->declBus(c+906,"top i_cache validMem_MPORT_46_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_46_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_46_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_47_data", false,-1);
        tracep->declBus(c+907,"top i_cache validMem_MPORT_47_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_47_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_47_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_48_data", false,-1);
        tracep->declBus(c+908,"top i_cache validMem_MPORT_48_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_48_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_48_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_49_data", false,-1);
        tracep->declBus(c+909,"top i_cache validMem_MPORT_49_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_49_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_49_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_50_data", false,-1);
        tracep->declBus(c+910,"top i_cache validMem_MPORT_50_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_50_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_50_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_51_data", false,-1);
        tracep->declBus(c+911,"top i_cache validMem_MPORT_51_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_51_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_51_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_52_data", false,-1);
        tracep->declBus(c+912,"top i_cache validMem_MPORT_52_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_52_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_52_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_53_data", false,-1);
        tracep->declBus(c+913,"top i_cache validMem_MPORT_53_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_53_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_53_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_54_data", false,-1);
        tracep->declBus(c+914,"top i_cache validMem_MPORT_54_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_54_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_54_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_55_data", false,-1);
        tracep->declBus(c+915,"top i_cache validMem_MPORT_55_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_55_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_55_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_56_data", false,-1);
        tracep->declBus(c+916,"top i_cache validMem_MPORT_56_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_56_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_56_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_57_data", false,-1);
        tracep->declBus(c+917,"top i_cache validMem_MPORT_57_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_57_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_57_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_58_data", false,-1);
        tracep->declBus(c+918,"top i_cache validMem_MPORT_58_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_58_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_58_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_59_data", false,-1);
        tracep->declBus(c+919,"top i_cache validMem_MPORT_59_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_59_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_59_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_60_data", false,-1);
        tracep->declBus(c+920,"top i_cache validMem_MPORT_60_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_60_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_60_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_61_data", false,-1);
        tracep->declBus(c+921,"top i_cache validMem_MPORT_61_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_61_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_61_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_62_data", false,-1);
        tracep->declBus(c+922,"top i_cache validMem_MPORT_62_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_62_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_62_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_63_data", false,-1);
        tracep->declBus(c+923,"top i_cache validMem_MPORT_63_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_63_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_63_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_64_data", false,-1);
        tracep->declBus(c+924,"top i_cache validMem_MPORT_64_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_64_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_64_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_65_data", false,-1);
        tracep->declBus(c+925,"top i_cache validMem_MPORT_65_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_65_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_65_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_66_data", false,-1);
        tracep->declBus(c+926,"top i_cache validMem_MPORT_66_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_66_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_66_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_67_data", false,-1);
        tracep->declBus(c+927,"top i_cache validMem_MPORT_67_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_67_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_67_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_68_data", false,-1);
        tracep->declBus(c+928,"top i_cache validMem_MPORT_68_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_68_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_68_en", false,-1);
        tracep->declBit(c+865,"top i_cache validMem_MPORT_69_data", false,-1);
        tracep->declBus(c+929,"top i_cache validMem_MPORT_69_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache validMem_MPORT_69_mask", false,-1);
        tracep->declBit(c+573,"top i_cache validMem_MPORT_69_en", false,-1);
        tracep->declBit(c+831,"top i_cache tagMem_tagMatch_0_MPORT_en", false,-1);
        tracep->declBus(c+565,"top i_cache tagMem_tagMatch_0_MPORT_addr", false,-1, 5,0);
        tracep->declBus(c+574,"top i_cache tagMem_tagMatch_0_MPORT_data", false,-1, 31,0);
        tracep->declBit(c+831,"top i_cache tagMem_tagMatch_1_MPORT_en", false,-1);
        tracep->declBus(c+567,"top i_cache tagMem_tagMatch_1_MPORT_addr", false,-1, 5,0);
        tracep->declBus(c+575,"top i_cache tagMem_tagMatch_1_MPORT_data", false,-1, 31,0);
        tracep->declBit(c+831,"top i_cache tagMem_tagMatch_2_MPORT_en", false,-1);
        tracep->declBus(c+569,"top i_cache tagMem_tagMatch_2_MPORT_addr", false,-1, 5,0);
        tracep->declBus(c+576,"top i_cache tagMem_tagMatch_2_MPORT_data", false,-1, 31,0);
        tracep->declBit(c+831,"top i_cache tagMem_tagMatch_3_MPORT_en", false,-1);
        tracep->declBus(c+571,"top i_cache tagMem_tagMatch_3_MPORT_addr", false,-1, 5,0);
        tracep->declBus(c+577,"top i_cache tagMem_tagMatch_3_MPORT_data", false,-1, 31,0);
        tracep->declBus(c+578,"top i_cache tagMem_MPORT_1_data", false,-1, 31,0);
        tracep->declBus(c+561,"top i_cache tagMem_MPORT_1_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache tagMem_MPORT_1_mask", false,-1);
        tracep->declBit(c+562,"top i_cache tagMem_MPORT_1_en", false,-1);
        tracep->declBus(c+578,"top i_cache tagMem_MPORT_4_data", false,-1, 31,0);
        tracep->declBus(c+563,"top i_cache tagMem_MPORT_4_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top i_cache tagMem_MPORT_4_mask", false,-1);
        tracep->declBit(c+564,"top i_cache tagMem_MPORT_4_en", false,-1);
        tracep->declBus(c+579,"top i_cache addr", false,-1, 31,0);
        tracep->declBus(c+580,"top i_cache offset", false,-1, 5,0);
        tracep->declBus(c+581,"top i_cache index", false,-1, 3,0);
        tracep->declBus(c+582,"top i_cache tag", false,-1, 21,0);
        tracep->declBus(c+583,"top i_cache shift_bit", false,-1, 8,0);
        tracep->declBit(c+566,"top i_cache valid_0", false,-1);
        tracep->declBit(c+568,"top i_cache valid_1", false,-1);
        tracep->declBit(c+570,"top i_cache valid_2", false,-1);
        tracep->declBit(c+572,"top i_cache valid_3", false,-1);
        tracep->declBit(c+584,"top i_cache allvalid", false,-1);
        tracep->declBus(c+585,"top i_cache foundUnvalidIndex", false,-1, 1,0);
        tracep->declBus(c+586,"top i_cache unvalidIndex", false,-1, 8,0);
        tracep->declBit(c+587,"top i_cache tagMatch_0", false,-1);
        tracep->declBit(c+588,"top i_cache tagMatch_1", false,-1);
        tracep->declBit(c+589,"top i_cache tagMatch_2", false,-1);
        tracep->declBit(c+590,"top i_cache tagMatch_3", false,-1);
        tracep->declBit(c+591,"top i_cache anyMatch", false,-1);
        tracep->declBus(c+592,"top i_cache foundtagIndex", false,-1, 1,0);
        tracep->declBus(c+593,"top i_cache tagIndex", false,-1, 8,0);
        tracep->declQuad(c+594,"top i_cache receive_data_0", false,-1, 63,0);
        tracep->declQuad(c+596,"top i_cache receive_data_1", false,-1, 63,0);
        tracep->declQuad(c+598,"top i_cache receive_data_2", false,-1, 63,0);
        tracep->declQuad(c+600,"top i_cache receive_data_3", false,-1, 63,0);
        tracep->declQuad(c+602,"top i_cache receive_data_4", false,-1, 63,0);
        tracep->declQuad(c+604,"top i_cache receive_data_5", false,-1, 63,0);
        tracep->declQuad(c+606,"top i_cache receive_data_6", false,-1, 63,0);
        tracep->declQuad(c+608,"top i_cache receive_data_7", false,-1, 63,0);
        tracep->declBus(c+610,"top i_cache receive_num", false,-1, 2,0);
        tracep->declBus(c+611,"top i_cache quene_0", false,-1, 7,0);
        tracep->declBus(c+612,"top i_cache quene_1", false,-1, 7,0);
        tracep->declBus(c+613,"top i_cache quene_2", false,-1, 7,0);
        tracep->declBus(c+614,"top i_cache quene_3", false,-1, 7,0);
        tracep->declBus(c+615,"top i_cache quene_4", false,-1, 7,0);
        tracep->declBus(c+616,"top i_cache quene_5", false,-1, 7,0);
        tracep->declBus(c+617,"top i_cache quene_6", false,-1, 7,0);
        tracep->declBus(c+618,"top i_cache quene_7", false,-1, 7,0);
        tracep->declBus(c+619,"top i_cache quene_8", false,-1, 7,0);
        tracep->declBus(c+620,"top i_cache quene_9", false,-1, 7,0);
        tracep->declBus(c+621,"top i_cache quene_10", false,-1, 7,0);
        tracep->declBus(c+622,"top i_cache quene_11", false,-1, 7,0);
        tracep->declBus(c+623,"top i_cache quene_12", false,-1, 7,0);
        tracep->declBus(c+624,"top i_cache quene_13", false,-1, 7,0);
        tracep->declBus(c+625,"top i_cache quene_14", false,-1, 7,0);
        tracep->declBus(c+626,"top i_cache quene_15", false,-1, 7,0);
        tracep->declBus(c+627,"top i_cache replace_way", false,-1, 1,0);
        tracep->declBus(c+628,"top i_cache state", false,-1, 2,0);
        tracep->declArray(c+629,"top i_cache lo", false,-1, 255,0);
        tracep->declArray(c+637,"top i_cache hi", false,-1, 255,0);
        tracep->declBus(c+645,"top i_cache replaceIndex", false,-1, 31,0);
        tracep->declBit(c+825,"top d_cache clock", false,-1);
        tracep->declBit(c+826,"top d_cache reset", false,-1);
        tracep->declBus(c+80,"top d_cache io_from_lsu_araddr", false,-1, 31,0);
        tracep->declBit(c+81,"top d_cache io_from_lsu_arvalid", false,-1);
        tracep->declBus(c+80,"top d_cache io_from_lsu_awaddr", false,-1, 31,0);
        tracep->declBit(c+82,"top d_cache io_from_lsu_awvalid", false,-1);
        tracep->declQuad(c+83,"top d_cache io_from_lsu_wdata", false,-1, 63,0);
        tracep->declBus(c+85,"top d_cache io_from_lsu_wstrb", false,-1, 7,0);
        tracep->declBit(c+86,"top d_cache io_from_lsu_wvalid", false,-1);
        tracep->declQuad(c+76,"top d_cache io_to_lsu_rdata", false,-1, 63,0);
        tracep->declBit(c+78,"top d_cache io_to_lsu_rvalid", false,-1);
        tracep->declBit(c+79,"top d_cache io_to_lsu_bvalid", false,-1);
        tracep->declBus(c+97,"top d_cache io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+98,"top d_cache io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+99,"top d_cache io_to_axi_arvalid", false,-1);
        tracep->declBit(c+100,"top d_cache io_to_axi_rready", false,-1);
        tracep->declBus(c+101,"top d_cache io_to_axi_awaddr", false,-1, 31,0);
        tracep->declBus(c+102,"top d_cache io_to_axi_awlen", false,-1, 7,0);
        tracep->declBit(c+103,"top d_cache io_to_axi_awvalid", false,-1);
        tracep->declQuad(c+104,"top d_cache io_to_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+106,"top d_cache io_to_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+107,"top d_cache io_to_axi_wvalid", false,-1);
        tracep->declBit(c+108,"top d_cache io_to_axi_bready", false,-1);
        tracep->declQuad(c+109,"top d_cache io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+111,"top d_cache io_from_axi_rlast", false,-1);
        tracep->declBit(c+112,"top d_cache io_from_axi_rvalid", false,-1);
        tracep->declBit(c+113,"top d_cache io_from_axi_wready", false,-1);
        tracep->declBit(c+114,"top d_cache io_from_axi_bvalid", false,-1);
        tracep->declBit(c+646,"top d_cache cacheLine_MPORT_1_en", false,-1);
        tracep->declBus(c+647,"top d_cache cacheLine_MPORT_1_addr", false,-1, 5,0);
        tracep->declArray(c+648,"top d_cache cacheLine_MPORT_1_data", false,-1, 511,0);
        tracep->declBit(c+664,"top d_cache cacheLine_write_back_data_MPORT_en", false,-1);
        tracep->declBus(c+665,"top d_cache cacheLine_write_back_data_MPORT_addr", false,-1, 5,0);
        tracep->declArray(c+666,"top d_cache cacheLine_write_back_data_MPORT_data", false,-1, 511,0);
        tracep->declBit(c+682,"top d_cache cacheLine_io_to_lsu_rdata_MPORT_en", false,-1);
        tracep->declBus(c+647,"top d_cache cacheLine_io_to_lsu_rdata_MPORT_addr", false,-1, 5,0);
        tracep->declArray(c+648,"top d_cache cacheLine_io_to_lsu_rdata_MPORT_data", false,-1, 511,0);
        tracep->declArray(c+683,"top d_cache cacheLine_MPORT_data", false,-1, 511,0);
        tracep->declBus(c+647,"top d_cache cacheLine_MPORT_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top d_cache cacheLine_MPORT_mask", false,-1);
        tracep->declBit(c+646,"top d_cache cacheLine_MPORT_en", false,-1);
        tracep->declArray(c+699,"top d_cache cacheLine_MPORT_3_data", false,-1, 511,0);
        tracep->declBus(c+715,"top d_cache cacheLine_MPORT_3_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top d_cache cacheLine_MPORT_3_mask", false,-1);
        tracep->declBit(c+716,"top d_cache cacheLine_MPORT_3_en", false,-1);
        tracep->declArray(c+699,"top d_cache cacheLine_MPORT_6_data", false,-1, 511,0);
        tracep->declBus(c+665,"top d_cache cacheLine_MPORT_6_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top d_cache cacheLine_MPORT_6_mask", false,-1);
        tracep->declBit(c+717,"top d_cache cacheLine_MPORT_6_en", false,-1);
        tracep->declBit(c+831,"top d_cache validMem_valid_0_MPORT_en", false,-1);
        tracep->declBus(c+718,"top d_cache validMem_valid_0_MPORT_addr", false,-1, 5,0);
        tracep->declBit(c+719,"top d_cache validMem_valid_0_MPORT_data", false,-1);
        tracep->declBit(c+831,"top d_cache validMem_valid_1_MPORT_en", false,-1);
        tracep->declBus(c+720,"top d_cache validMem_valid_1_MPORT_addr", false,-1, 5,0);
        tracep->declBit(c+721,"top d_cache validMem_valid_1_MPORT_data", false,-1);
        tracep->declBit(c+831,"top d_cache validMem_valid_2_MPORT_en", false,-1);
        tracep->declBus(c+722,"top d_cache validMem_valid_2_MPORT_addr", false,-1, 5,0);
        tracep->declBit(c+723,"top d_cache validMem_valid_2_MPORT_data", false,-1);
        tracep->declBit(c+831,"top d_cache validMem_valid_3_MPORT_en", false,-1);
        tracep->declBus(c+724,"top d_cache validMem_valid_3_MPORT_addr", false,-1, 5,0);
        tracep->declBit(c+725,"top d_cache validMem_valid_3_MPORT_data", false,-1);
        tracep->declBit(c+831,"top d_cache validMem_MPORT_5_data", false,-1);
        tracep->declBus(c+715,"top d_cache validMem_MPORT_5_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top d_cache validMem_MPORT_5_mask", false,-1);
        tracep->declBit(c+716,"top d_cache validMem_MPORT_5_en", false,-1);
        tracep->declBit(c+831,"top d_cache validMem_MPORT_8_data", false,-1);
        tracep->declBus(c+665,"top d_cache validMem_MPORT_8_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top d_cache validMem_MPORT_8_mask", false,-1);
        tracep->declBit(c+717,"top d_cache validMem_MPORT_8_en", false,-1);
        tracep->declBit(c+831,"top d_cache tagMem_tagMatch_0_MPORT_en", false,-1);
        tracep->declBus(c+718,"top d_cache tagMem_tagMatch_0_MPORT_addr", false,-1, 5,0);
        tracep->declBus(c+726,"top d_cache tagMem_tagMatch_0_MPORT_data", false,-1, 31,0);
        tracep->declBit(c+831,"top d_cache tagMem_tagMatch_1_MPORT_en", false,-1);
        tracep->declBus(c+720,"top d_cache tagMem_tagMatch_1_MPORT_addr", false,-1, 5,0);
        tracep->declBus(c+727,"top d_cache tagMem_tagMatch_1_MPORT_data", false,-1, 31,0);
        tracep->declBit(c+831,"top d_cache tagMem_tagMatch_2_MPORT_en", false,-1);
        tracep->declBus(c+722,"top d_cache tagMem_tagMatch_2_MPORT_addr", false,-1, 5,0);
        tracep->declBus(c+728,"top d_cache tagMem_tagMatch_2_MPORT_data", false,-1, 31,0);
        tracep->declBit(c+831,"top d_cache tagMem_tagMatch_3_MPORT_en", false,-1);
        tracep->declBus(c+724,"top d_cache tagMem_tagMatch_3_MPORT_addr", false,-1, 5,0);
        tracep->declBus(c+729,"top d_cache tagMem_tagMatch_3_MPORT_data", false,-1, 31,0);
        tracep->declBit(c+664,"top d_cache tagMem_write_back_addr_MPORT_en", false,-1);
        tracep->declBus(c+665,"top d_cache tagMem_write_back_addr_MPORT_addr", false,-1, 5,0);
        tracep->declBus(c+730,"top d_cache tagMem_write_back_addr_MPORT_data", false,-1, 31,0);
        tracep->declBus(c+731,"top d_cache tagMem_MPORT_4_data", false,-1, 31,0);
        tracep->declBus(c+715,"top d_cache tagMem_MPORT_4_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top d_cache tagMem_MPORT_4_mask", false,-1);
        tracep->declBit(c+716,"top d_cache tagMem_MPORT_4_en", false,-1);
        tracep->declBus(c+731,"top d_cache tagMem_MPORT_7_data", false,-1, 31,0);
        tracep->declBus(c+665,"top d_cache tagMem_MPORT_7_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top d_cache tagMem_MPORT_7_mask", false,-1);
        tracep->declBit(c+717,"top d_cache tagMem_MPORT_7_en", false,-1);
        tracep->declBit(c+717,"top d_cache dirtyMem_MPORT_9_en", false,-1);
        tracep->declBus(c+665,"top d_cache dirtyMem_MPORT_9_addr", false,-1, 5,0);
        tracep->declBit(c+732,"top d_cache dirtyMem_MPORT_9_data", false,-1);
        tracep->declBit(c+831,"top d_cache dirtyMem_MPORT_2_data", false,-1);
        tracep->declBus(c+647,"top d_cache dirtyMem_MPORT_2_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top d_cache dirtyMem_MPORT_2_mask", false,-1);
        tracep->declBit(c+646,"top d_cache dirtyMem_MPORT_2_en", false,-1);
        tracep->declBit(c+865,"top d_cache dirtyMem_MPORT_10_data", false,-1);
        tracep->declBus(c+665,"top d_cache dirtyMem_MPORT_10_addr", false,-1, 5,0);
        tracep->declBit(c+831,"top d_cache dirtyMem_MPORT_10_mask", false,-1);
        tracep->declBit(c+664,"top d_cache dirtyMem_MPORT_10_en", false,-1);
        tracep->declBus(c+733,"top d_cache offset", false,-1, 5,0);
        tracep->declBus(c+734,"top d_cache index", false,-1, 3,0);
        tracep->declBus(c+735,"top d_cache tag", false,-1, 21,0);
        tracep->declBit(c+719,"top d_cache valid_0", false,-1);
        tracep->declBit(c+721,"top d_cache valid_1", false,-1);
        tracep->declBit(c+723,"top d_cache valid_2", false,-1);
        tracep->declBit(c+725,"top d_cache valid_3", false,-1);
        tracep->declBit(c+736,"top d_cache allvalid", false,-1);
        tracep->declBus(c+737,"top d_cache foundUnvalidIndex", false,-1, 1,0);
        tracep->declBus(c+738,"top d_cache unvalidIndex", false,-1, 8,0);
        tracep->declBit(c+739,"top d_cache tagMatch_0", false,-1);
        tracep->declBit(c+740,"top d_cache tagMatch_1", false,-1);
        tracep->declBit(c+741,"top d_cache tagMatch_2", false,-1);
        tracep->declBit(c+742,"top d_cache tagMatch_3", false,-1);
        tracep->declBit(c+743,"top d_cache anyMatch", false,-1);
        tracep->declBus(c+744,"top d_cache foundtagIndex", false,-1, 1,0);
        tracep->declBus(c+745,"top d_cache tagIndex", false,-1, 8,0);
        tracep->declArray(c+746,"top d_cache write_back_data", false,-1, 511,0);
        tracep->declBus(c+762,"top d_cache write_back_addr", false,-1, 31,0);
        tracep->declQuad(c+763,"top d_cache receive_data_0", false,-1, 63,0);
        tracep->declQuad(c+765,"top d_cache receive_data_1", false,-1, 63,0);
        tracep->declQuad(c+767,"top d_cache receive_data_2", false,-1, 63,0);
        tracep->declQuad(c+769,"top d_cache receive_data_3", false,-1, 63,0);
        tracep->declQuad(c+771,"top d_cache receive_data_4", false,-1, 63,0);
        tracep->declQuad(c+773,"top d_cache receive_data_5", false,-1, 63,0);
        tracep->declQuad(c+775,"top d_cache receive_data_6", false,-1, 63,0);
        tracep->declQuad(c+777,"top d_cache receive_data_7", false,-1, 63,0);
        tracep->declBus(c+779,"top d_cache receive_num", false,-1, 2,0);
        tracep->declBus(c+780,"top d_cache quene_0", false,-1, 7,0);
        tracep->declBus(c+781,"top d_cache quene_1", false,-1, 7,0);
        tracep->declBus(c+782,"top d_cache quene_2", false,-1, 7,0);
        tracep->declBus(c+783,"top d_cache quene_3", false,-1, 7,0);
        tracep->declBus(c+784,"top d_cache quene_4", false,-1, 7,0);
        tracep->declBus(c+785,"top d_cache quene_5", false,-1, 7,0);
        tracep->declBus(c+786,"top d_cache quene_6", false,-1, 7,0);
        tracep->declBus(c+787,"top d_cache quene_7", false,-1, 7,0);
        tracep->declBus(c+788,"top d_cache quene_8", false,-1, 7,0);
        tracep->declBus(c+789,"top d_cache quene_9", false,-1, 7,0);
        tracep->declBus(c+790,"top d_cache quene_10", false,-1, 7,0);
        tracep->declBus(c+791,"top d_cache quene_11", false,-1, 7,0);
        tracep->declBus(c+792,"top d_cache quene_12", false,-1, 7,0);
        tracep->declBus(c+793,"top d_cache quene_13", false,-1, 7,0);
        tracep->declBus(c+794,"top d_cache quene_14", false,-1, 7,0);
        tracep->declBus(c+795,"top d_cache quene_15", false,-1, 7,0);
        tracep->declBus(c+796,"top d_cache replace_way", false,-1, 1,0);
        tracep->declBus(c+797,"top d_cache shift_bit", false,-1, 8,0);
        tracep->declQuad(c+798,"top d_cache wmask", false,-1, 63,0);
        tracep->declBus(c+800,"top d_cache state", false,-1, 2,0);
        tracep->declArray(c+801,"top d_cache lo", false,-1, 255,0);
        tracep->declArray(c+809,"top d_cache hi", false,-1, 255,0);
        tracep->declBus(c+817,"top d_cache replaceIndex", false,-1, 31,0);
        tracep->declBit(c+825,"top axi clock", false,-1);
        tracep->declBit(c+826,"top axi reset", false,-1);
        tracep->declBus(c+121,"top axi io_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+122,"top axi io_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+123,"top axi io_axi_in_arvalid", false,-1);
        tracep->declBit(c+124,"top axi io_axi_in_rready", false,-1);
        tracep->declBus(c+125,"top axi io_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+126,"top axi io_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+127,"top axi io_axi_in_awvalid", false,-1);
        tracep->declQuad(c+128,"top axi io_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+130,"top axi io_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+131,"top axi io_axi_in_wvalid", false,-1);
        tracep->declBit(c+132,"top axi io_axi_in_bready", false,-1);
        tracep->declQuad(c+115,"top axi io_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+117,"top axi io_axi_out_rlast", false,-1);
        tracep->declBit(c+118,"top axi io_axi_out_rvalid", false,-1);
        tracep->declBit(c+119,"top axi io_axi_out_wready", false,-1);
        tracep->declBit(c+120,"top axi io_axi_out_bvalid", false,-1);
        tracep->declQuad(c+818,"top axi Mem_modle_Raddr", false,-1, 63,0);
        tracep->declQuad(c+115,"top axi Mem_modle_Rdata", false,-1, 63,0);
        tracep->declQuad(c+820,"top axi Mem_modle_Waddr", false,-1, 63,0);
        tracep->declQuad(c+128,"top axi Mem_modle_Wdata", false,-1, 63,0);
        tracep->declBus(c+130,"top axi Mem_modle_Wmask", false,-1, 7,0);
        tracep->declBit(c+119,"top axi Mem_modle_Write_en", false,-1);
        tracep->declBit(c+118,"top axi Mem_modle_Read_en", false,-1);
        tracep->declBit(c+119,"top axi axi_wready", false,-1);
        tracep->declBit(c+120,"top axi axi_bvalid", false,-1);
        tracep->declBit(c+118,"top axi axi_rvalid", false,-1);
        tracep->declBus(c+822,"top axi arlen", false,-1, 7,0);
        tracep->declBus(c+823,"top axi awlen", false,-1, 7,0);
        tracep->declQuad(c+818,"top axi araddr", false,-1, 63,0);
        tracep->declQuad(c+820,"top axi awaddr", false,-1, 63,0);
        tracep->declBus(c+824,"top axi state", false,-1, 2,0);
        tracep->declQuad(c+818,"top axi Mem_modle Raddr", false,-1, 63,0);
        tracep->declQuad(c+820,"top axi Mem_modle Waddr", false,-1, 63,0);
        tracep->declQuad(c+128,"top axi Mem_modle Wdata", false,-1, 63,0);
        tracep->declBus(c+130,"top axi Mem_modle Wmask", false,-1, 7,0);
        tracep->declBit(c+119,"top axi Mem_modle Write_en", false,-1);
        tracep->declBit(c+118,"top axi Mem_modle Read_en", false,-1);
        tracep->declQuad(c+115,"top axi Mem_modle Rdata", false,-1, 63,0);
        tracep->declBus(c+133,"top dpi flag", false,-1, 31,0);
        tracep->declBus(c+134,"top dpi ecall_flag", false,-1, 31,0);
        tracep->declQuad(c+135,"top dpi pc", false,-1, 63,0);
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

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_93e1b771_0;
extern const VlWide<18>/*575:0*/ Vtop__ConstPool__CONST_ee9aa94f_0;

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<16>/*511:0*/ __Vtemp290;
    VlWide<16>/*511:0*/ __Vtemp291;
    VlWide<4>/*127:0*/ __Vtemp297;
    VlWide<4>/*127:0*/ __Vtemp298;
    VlWide<4>/*127:0*/ __Vtemp299;
    VlWide<3>/*95:0*/ __Vtemp303;
    VlWide<3>/*95:0*/ __Vtemp304;
    VlWide<3>/*95:0*/ __Vtemp308;
    VlWide<3>/*95:0*/ __Vtemp312;
    VlWide<3>/*95:0*/ __Vtemp319;
    VlWide<4>/*127:0*/ __Vtemp320;
    VlWide<3>/*95:0*/ __Vtemp321;
    VlWide<4>/*127:0*/ __Vtemp322;
    VlWide<4>/*127:0*/ __Vtemp323;
    VlWide<4>/*127:0*/ __Vtemp329;
    VlWide<16>/*511:0*/ __Vtemp330;
    VlWide<16>/*511:0*/ __Vtemp331;
    VlWide<16>/*511:0*/ __Vtemp332;
    VlWide<16>/*511:0*/ __Vtemp333;
    VlWide<18>/*575:0*/ __Vtemp334;
    VlWide<18>/*575:0*/ __Vtemp335;
    VlWide<18>/*575:0*/ __Vtemp339;
    VlWide<18>/*575:0*/ __Vtemp340;
    VlWide<16>/*511:0*/ __Vtemp345;
    VlWide<16>/*511:0*/ __Vtemp346;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                            >> 0xfU))),5);
        tracep->fullCData(oldp+2,(vlSelf->top__DOT__IDU_io_raddr2),5);
        tracep->fullQData(oldp+3,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__IDU__DOT__inst 
                                            >> 0xfU)))
                                    ? 0ULL : vlSelf->top__DOT__Register__DOT__Reg
                                   [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                              >> 0xfU))])),64);
        tracep->fullQData(oldp+5,(((0U == (IData)(vlSelf->top__DOT__IDU_io_raddr2))
                                    ? 0ULL : vlSelf->top__DOT__Register__DOT__Reg
                                   [vlSelf->top__DOT__IDU_io_raddr2])),64);
        tracep->fullBit(oldp+7,(((IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we) 
                                 & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid))));
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__WBU__DOT__ws_rf_dst),5);
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__WBU__DOT__ws_res),64);
        tracep->fullBit(oldp+11,(vlSelf->top__DOT__IDU_io_ds_allowin));
        tracep->fullBit(oldp+12,(vlSelf->top__DOT__IDU_io_ds_ready_go));
        tracep->fullBit(oldp+13,(vlSelf->top__DOT__IDU__DOT__ds_valid));
        tracep->fullBit(oldp+14,(vlSelf->top__DOT__IDU_io_br_taken));
        tracep->fullQData(oldp+15,(vlSelf->top__DOT__IDU_io_br_target),64);
        tracep->fullQData(oldp+17,(vlSelf->top__DOT__IFU__DOT__fs_pc),64);
        tracep->fullBit(oldp+19,(vlSelf->top__DOT__IFU__DOT__fs_valid));
        tracep->fullIData(oldp+20,(vlSelf->top__DOT__IFU__DOT__fs_inst),32);
        tracep->fullBit(oldp+21,(((1U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                  & ((2U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                     & (0U == (IData)(vlSelf->top__DOT__i_cache__DOT__state))))));
        __Vtemp290[0U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][0U];
        __Vtemp290[1U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][1U];
        __Vtemp290[2U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][2U];
        __Vtemp290[3U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][3U];
        __Vtemp290[4U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][4U];
        __Vtemp290[5U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][5U];
        __Vtemp290[6U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][6U];
        __Vtemp290[7U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][7U];
        __Vtemp290[8U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][8U];
        __Vtemp290[9U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][9U];
        __Vtemp290[0xaU] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][0xaU];
        __Vtemp290[0xbU] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][0xbU];
        __Vtemp290[0xcU] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][0xcU];
        __Vtemp290[0xdU] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][0xdU];
        __Vtemp290[0xeU] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][0xeU];
        __Vtemp290[0xfU] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][0xfU];
        VL_SHIFTR_WWI(512,512,9, __Vtemp291, __Vtemp290, 
                      (0x1f8U & (vlSelf->top__DOT__i_cache__DOT__addr 
                                 << 3U)));
        tracep->fullQData(oldp+22,((((QData)((IData)(
                                                     ((1U 
                                                       == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                       ? 
                                                      __Vtemp291[1U]
                                                       : 
                                                      Vtop__ConstPool__CONST_93e1b771_0[1U]))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((1U 
                                                                   == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                                   ? 
                                                                  __Vtemp291[0U]
                                                                   : 
                                                                  Vtop__ConstPool__CONST_93e1b771_0[0U]))))),64);
        tracep->fullBit(oldp+24,(vlSelf->top__DOT__i_cache_io_to_ifu_rvalid));
        tracep->fullIData(oldp+25,((IData)(((IData)(vlSelf->top__DOT__IDU_io_br_taken)
                                             ? ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)
                                                 ? vlSelf->top__DOT__IDU_io_br_target
                                                 : vlSelf->top__DOT__IFU__DOT__br_target)
                                             : (4ULL 
                                                + vlSelf->top__DOT__IFU__DOT__fs_pc)))),32);
        tracep->fullBit(oldp+26,(vlSelf->top__DOT__IFU_io_axi_out_rready));
        tracep->fullBit(oldp+27,((0x100fU == vlSelf->top__DOT__IDU__DOT__inst)));
        tracep->fullBit(oldp+28,(((0x100fU == vlSelf->top__DOT__IDU__DOT__inst) 
                                  & (~ (IData)(vlSelf->top__DOT__IFU__DOT__cache_init)))));
        tracep->fullBit(oldp+29,((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__state))));
        tracep->fullBit(oldp+30,(vlSelf->top__DOT__IDU_io_ds_to_es_valid));
        tracep->fullBit(oldp+31,(vlSelf->top__DOT__EXU__DOT__es_allowin));
        tracep->fullQData(oldp+32,(vlSelf->top__DOT__IDU__DOT__ds_pc),64);
        tracep->fullIData(oldp+34,(vlSelf->top__DOT__IDU__DOT___ALUop_T_176),32);
        tracep->fullQData(oldp+35,(((1U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                     ? vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data
                                     : vlSelf->top__DOT__IDU__DOT__src1)),64);
        tracep->fullQData(oldp+37,(((IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)
                                     ? vlSelf->top__DOT__IDU__DOT__imm
                                     : vlSelf->top__DOT__IDU__DOT__rdata2)),64);
        tracep->fullCData(oldp+39,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                             >> 7U))),5);
        tracep->fullQData(oldp+40,(((0x3023U == (0x707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                     ? vlSelf->top__DOT__IDU__DOT__rdata2
                                     : (QData)((IData)(
                                                       ((0x1023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__IDU__DOT__inst))
                                                         ? 
                                                        (0xffffU 
                                                         & (IData)(vlSelf->top__DOT__IDU__DOT__rdata2))
                                                         : 
                                                        ((0x23U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__IDU__DOT__inst))
                                                          ? 
                                                         (0xffU 
                                                          & (IData)(vlSelf->top__DOT__IDU__DOT__rdata2))
                                                          : 
                                                         ((0x2023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__IDU__DOT__inst))
                                                           ? (IData)(vlSelf->top__DOT__IDU__DOT__rdata2)
                                                           : 0U))))))),64);
        tracep->fullBit(oldp+42,(((0x100073U != vlSelf->top__DOT__IDU__DOT__inst) 
                                  & ((0x3023U != (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst)) 
                                     & ((0x1023U != 
                                         (0x707fU & vlSelf->top__DOT__IDU__DOT__inst)) 
                                        & ((0x23U != 
                                            (0x707fU 
                                             & vlSelf->top__DOT__IDU__DOT__inst)) 
                                           & ((0x2023U 
                                               != (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst)) 
                                              & ((0x1063U 
                                                  != 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                 & ((0x63U 
                                                     != 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                    & ((0x5063U 
                                                        != 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                       & ((0x4063U 
                                                           != 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                          & ((0x6063U 
                                                              != 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                             & ((0x7063U 
                                                                 != 
                                                                 (0x707fU 
                                                                  & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                                & ((0x73U 
                                                                    != vlSelf->top__DOT__IDU__DOT__inst) 
                                                                   & ((0x30200073U 
                                                                       != vlSelf->top__DOT__IDU__DOT__inst) 
                                                                      & (0x100fU 
                                                                         != vlSelf->top__DOT__IDU__DOT__inst))))))))))))))));
        tracep->fullBit(oldp+43,((0x44U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))));
        tracep->fullBit(oldp+44,(((0x3003U == (0x707fU 
                                               & vlSelf->top__DOT__IDU__DOT__inst)) 
                                  | ((0x2003U == (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst)) 
                                     | ((0x6003U == 
                                         (0x707fU & vlSelf->top__DOT__IDU__DOT__inst)) 
                                        | ((0x1003U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__IDU__DOT__inst)) 
                                           | ((0x5003U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst)) 
                                              | ((3U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                 | (0x4003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))))))))));
        tracep->fullCData(oldp+45,(((0x3023U == (0x707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                     ? 0xffU : ((0x1023U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                                 ? 3U
                                                 : 
                                                ((0x23U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                                  ? 1U
                                                  : 
                                                 ((0x2023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 0xfU
                                                   : 0U))))),8);
        tracep->fullCData(oldp+46,(((0x2003U == (0x707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                     ? 1U : ((0x3003U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                              ? 2U : 
                                             ((0x4003U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                               ? 3U
                                               : ((0x6003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 4U
                                                   : 
                                                  ((0x1003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 5U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst))
                                                     ? 6U
                                                     : 
                                                    ((0x5003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__IDU__DOT__inst))
                                                      ? 7U
                                                      : 0U)))))))),3);
        tracep->fullBit(oldp+47,(vlSelf->top__DOT__EXU_io_es_ld));
        tracep->fullQData(oldp+48,((((QData)((IData)(
                                                     vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])))),64);
        tracep->fullQData(oldp+50,(vlSelf->top__DOT__LSU_io_ms_fwd_res),64);
        tracep->fullBit(oldp+52,(vlSelf->top__DOT__EXU_io_es_to_ms_valid));
        tracep->fullBit(oldp+53,(vlSelf->top__DOT__LSU_io_ms_to_ws_valid));
        tracep->fullBit(oldp+54,(vlSelf->top__DOT__EXU__DOT__es_rf_we));
        tracep->fullBit(oldp+55,(vlSelf->top__DOT__LSU_io_ms_rf_we));
        tracep->fullBit(oldp+56,(vlSelf->top__DOT__WBU__DOT__ws_rf_we));
        tracep->fullBit(oldp+57,(vlSelf->top__DOT__EXU__DOT__es_valid));
        tracep->fullBit(oldp+58,(vlSelf->top__DOT__LSU__DOT__ms_valid));
        tracep->fullBit(oldp+59,(vlSelf->top__DOT__WBU__DOT__ws_valid));
        tracep->fullCData(oldp+60,(vlSelf->top__DOT__EXU__DOT__es_rd),5);
        tracep->fullCData(oldp+61,(vlSelf->top__DOT__LSU__DOT__ms_rf_dst),5);
        tracep->fullBit(oldp+62,(vlSelf->top__DOT__LSU__DOT__ms_allowin));
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__EXU__DOT__es_pc),64);
        tracep->fullQData(oldp+65,(vlSelf->top__DOT__EXU__DOT__store_data),64);
        tracep->fullBit(oldp+67,(vlSelf->top__DOT__EXU__DOT__st_we));
        tracep->fullCData(oldp+68,(vlSelf->top__DOT__EXU__DOT__st_wstrb),8);
        tracep->fullBit(oldp+69,(vlSelf->top__DOT__EXU__DOT__ld_we));
        tracep->fullCData(oldp+70,(vlSelf->top__DOT__EXU__DOT__load_type),3);
        tracep->fullQData(oldp+71,(vlSelf->top__DOT__LSU__DOT__ms_pc),64);
        tracep->fullQData(oldp+73,(((0U != (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                     ? vlSelf->top__DOT__LSU__DOT__rdata
                                     : vlSelf->top__DOT__LSU__DOT__ms_res)),64);
        tracep->fullBit(oldp+75,(vlSelf->top__DOT__LSU__DOT__ms_rf_we));
        tracep->fullQData(oldp+76,((((QData)((IData)(
                                                     vlSelf->top__DOT__d_cache__DOT___GEN_589[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__d_cache__DOT___GEN_589[0U])))),64);
        tracep->fullBit(oldp+78,(((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__anyMatch)
                                   : ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                      & ((3U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                         & ((4U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                            & ((6U 
                                                != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                               & (((0U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                   & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3)) 
                                                  & (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)))))))));
        tracep->fullBit(oldp+79,(((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                  & ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__anyMatch)
                                      : ((3U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                         & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                             ? (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid)
                                             : ((6U 
                                                 != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                & (((0U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                    & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3)) 
                                                   & (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid)))))))));
        tracep->fullIData(oldp+80,((IData)(vlSelf->top__DOT__LSU__DOT__maddr)),32);
        tracep->fullBit(oldp+81,(vlSelf->top__DOT__LSU_io_axi_out_arvalid));
        tracep->fullBit(oldp+82,(vlSelf->top__DOT__LSU_io_axi_out_awvalid));
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__LSU__DOT__store_data),64);
        tracep->fullCData(oldp+85,(vlSelf->top__DOT__LSU__DOT__wstrb),8);
        tracep->fullBit(oldp+86,(vlSelf->top__DOT__LSU__DOT__wen));
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__WBU__DOT__ws_pc),64);
        tracep->fullIData(oldp+89,((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_605)),32);
        tracep->fullCData(oldp+90,(vlSelf->top__DOT__i_cache__DOT___GEN_606),8);
        tracep->fullBit(oldp+91,(vlSelf->top__DOT__i_cache_io_to_axi_arvalid));
        tracep->fullBit(oldp+92,(vlSelf->top__DOT__i_cache_io_to_axi_rready));
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata),64);
        tracep->fullBit(oldp+95,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast));
        tracep->fullBit(oldp+96,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid));
        tracep->fullIData(oldp+97,((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_571)),32);
        tracep->fullCData(oldp+98,(vlSelf->top__DOT__d_cache_io_to_axi_arlen),8);
        tracep->fullBit(oldp+99,(vlSelf->top__DOT__d_cache_io_to_axi_arvalid));
        tracep->fullBit(oldp+100,(vlSelf->top__DOT__d_cache_io_to_axi_rready));
        tracep->fullIData(oldp+101,(vlSelf->top__DOT__d_cache_io_to_axi_awaddr),32);
        tracep->fullCData(oldp+102,(vlSelf->top__DOT__d_cache_io_to_axi_awlen),8);
        tracep->fullBit(oldp+103,(vlSelf->top__DOT__d_cache_io_to_axi_awvalid));
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__d_cache_io_to_axi_wdata),64);
        tracep->fullCData(oldp+106,(vlSelf->top__DOT__d_cache_io_to_axi_wstrb),8);
        tracep->fullBit(oldp+107,(vlSelf->top__DOT__d_cache_io_to_axi_wvalid));
        tracep->fullBit(oldp+108,(vlSelf->top__DOT__d_cache_io_to_axi_bready));
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata),64);
        tracep->fullBit(oldp+111,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rlast));
        tracep->fullBit(oldp+112,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid));
        tracep->fullBit(oldp+113,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                    ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                        ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                        : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid) 
                                           & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))
                                    : ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                       & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                           ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                           : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                              & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))))));
        tracep->fullBit(oldp+114,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid));
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata),64);
        tracep->fullBit(oldp+117,(vlSelf->top__DOT__axi_io_axi_out_rlast));
        tracep->fullBit(oldp+118,(vlSelf->top__DOT__axi__DOT__axi_rvalid));
        tracep->fullBit(oldp+119,(vlSelf->top__DOT__axi__DOT__axi_wready));
        tracep->fullBit(oldp+120,(vlSelf->top__DOT__axi__DOT__axi_bvalid));
        tracep->fullIData(oldp+121,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                      ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_571)
                                          : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_571)
                                              : ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_605)
                                                  : 0U)))
                                      : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_605)
                                          : ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_571)
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_571)
                                                  : 0U))))),32);
        tracep->fullCData(oldp+122,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                      ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                          ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                                          : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                              ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                                              : ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_606)
                                                  : 0U)))
                                      : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_606)
                                          : ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                              ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                                                  : 0U))))),8);
        tracep->fullBit(oldp+123,(vlSelf->top__DOT__arbiter_io_axi_out_arvalid));
        tracep->fullBit(oldp+124,(vlSelf->top__DOT__arbiter_io_axi_out_rready));
        tracep->fullIData(oldp+125,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                      ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                          ? vlSelf->top__DOT__d_cache_io_to_axi_awaddr
                                          : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                              ? vlSelf->top__DOT__d_cache_io_to_axi_awaddr
                                              : 0U))
                                      : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                          ? 0U : ((2U 
                                                   == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                   ? vlSelf->top__DOT__d_cache_io_to_axi_awaddr
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                    ? vlSelf->top__DOT__d_cache_io_to_axi_awaddr
                                                    : 0U))))),32);
        tracep->fullCData(oldp+126,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                      ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                          ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_awlen)
                                          : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                              ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_awlen)
                                              : 0U))
                                      : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                          ? 0U : ((2U 
                                                   == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_awlen)
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_awlen)
                                                    : 0U))))),8);
        tracep->fullBit(oldp+127,(vlSelf->top__DOT__arbiter_io_axi_out_awvalid));
        tracep->fullQData(oldp+128,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                      ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                          ? vlSelf->top__DOT__d_cache_io_to_axi_wdata
                                          : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                              ? vlSelf->top__DOT__d_cache_io_to_axi_wdata
                                              : 0ULL))
                                      : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                          ? 0ULL : 
                                         ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                           ? vlSelf->top__DOT__d_cache_io_to_axi_wdata
                                           : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                               ? vlSelf->top__DOT__d_cache_io_to_axi_wdata
                                               : 0ULL))))),64);
        tracep->fullCData(oldp+130,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullBit(oldp+131,(vlSelf->top__DOT__arbiter_io_axi_out_wvalid));
        tracep->fullBit(oldp+132,(vlSelf->top__DOT__arbiter_io_axi_out_bready));
        tracep->fullIData(oldp+133,((2U == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))),32);
        tracep->fullIData(oldp+134,((0x3dU == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))),32);
        tracep->fullQData(oldp+135,(((IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)
                                      ? vlSelf->top__DOT__WBU__DOT__ws_pc
                                      : ((IData)(vlSelf->top__DOT__LSU__DOT__ms_valid)
                                          ? vlSelf->top__DOT__LSU__DOT__ms_pc
                                          : ((IData)(vlSelf->top__DOT__EXU__DOT__es_valid)
                                              ? vlSelf->top__DOT__EXU__DOT__es_pc
                                              : ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)
                                                  ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                                  : vlSelf->top__DOT__IFU__DOT__fs_pc))))),64);
        tracep->fullBit(oldp+137,(vlSelf->top__DOT__diff_step));
        tracep->fullQData(oldp+138,(vlSelf->top__DOT__Register__DOT__Reg[0]),64);
        tracep->fullQData(oldp+140,(vlSelf->top__DOT__Register__DOT__Reg[1]),64);
        tracep->fullQData(oldp+142,(vlSelf->top__DOT__Register__DOT__Reg[2]),64);
        tracep->fullQData(oldp+144,(vlSelf->top__DOT__Register__DOT__Reg[3]),64);
        tracep->fullQData(oldp+146,(vlSelf->top__DOT__Register__DOT__Reg[4]),64);
        tracep->fullQData(oldp+148,(vlSelf->top__DOT__Register__DOT__Reg[5]),64);
        tracep->fullQData(oldp+150,(vlSelf->top__DOT__Register__DOT__Reg[6]),64);
        tracep->fullQData(oldp+152,(vlSelf->top__DOT__Register__DOT__Reg[7]),64);
        tracep->fullQData(oldp+154,(vlSelf->top__DOT__Register__DOT__Reg[8]),64);
        tracep->fullQData(oldp+156,(vlSelf->top__DOT__Register__DOT__Reg[9]),64);
        tracep->fullQData(oldp+158,(vlSelf->top__DOT__Register__DOT__Reg[10]),64);
        tracep->fullQData(oldp+160,(vlSelf->top__DOT__Register__DOT__Reg[11]),64);
        tracep->fullQData(oldp+162,(vlSelf->top__DOT__Register__DOT__Reg[12]),64);
        tracep->fullQData(oldp+164,(vlSelf->top__DOT__Register__DOT__Reg[13]),64);
        tracep->fullQData(oldp+166,(vlSelf->top__DOT__Register__DOT__Reg[14]),64);
        tracep->fullQData(oldp+168,(vlSelf->top__DOT__Register__DOT__Reg[15]),64);
        tracep->fullQData(oldp+170,(vlSelf->top__DOT__Register__DOT__Reg[16]),64);
        tracep->fullQData(oldp+172,(vlSelf->top__DOT__Register__DOT__Reg[17]),64);
        tracep->fullQData(oldp+174,(vlSelf->top__DOT__Register__DOT__Reg[18]),64);
        tracep->fullQData(oldp+176,(vlSelf->top__DOT__Register__DOT__Reg[19]),64);
        tracep->fullQData(oldp+178,(vlSelf->top__DOT__Register__DOT__Reg[20]),64);
        tracep->fullQData(oldp+180,(vlSelf->top__DOT__Register__DOT__Reg[21]),64);
        tracep->fullQData(oldp+182,(vlSelf->top__DOT__Register__DOT__Reg[22]),64);
        tracep->fullQData(oldp+184,(vlSelf->top__DOT__Register__DOT__Reg[23]),64);
        tracep->fullQData(oldp+186,(vlSelf->top__DOT__Register__DOT__Reg[24]),64);
        tracep->fullQData(oldp+188,(vlSelf->top__DOT__Register__DOT__Reg[25]),64);
        tracep->fullQData(oldp+190,(vlSelf->top__DOT__Register__DOT__Reg[26]),64);
        tracep->fullQData(oldp+192,(vlSelf->top__DOT__Register__DOT__Reg[27]),64);
        tracep->fullQData(oldp+194,(vlSelf->top__DOT__Register__DOT__Reg[28]),64);
        tracep->fullQData(oldp+196,(vlSelf->top__DOT__Register__DOT__Reg[29]),64);
        tracep->fullQData(oldp+198,(vlSelf->top__DOT__Register__DOT__Reg[30]),64);
        tracep->fullQData(oldp+200,(vlSelf->top__DOT__Register__DOT__Reg[31]),64);
        tracep->fullQData(oldp+202,(vlSelf->top__DOT__Register__DOT__Reg
                                    [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+204,(vlSelf->top__DOT__Register__DOT__Reg
                                    [vlSelf->top__DOT__IDU_io_raddr2]),64);
        tracep->fullQData(oldp+206,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0U]),64);
        tracep->fullQData(oldp+208,(vlSelf->top__DOT__Register__DOT__Reg
                                    [1U]),64);
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__Register__DOT__Reg
                                    [2U]),64);
        tracep->fullQData(oldp+212,(vlSelf->top__DOT__Register__DOT__Reg
                                    [3U]),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__Register__DOT__Reg
                                    [4U]),64);
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__Register__DOT__Reg
                                    [5U]),64);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__Register__DOT__Reg
                                    [6U]),64);
        tracep->fullQData(oldp+220,(vlSelf->top__DOT__Register__DOT__Reg
                                    [7U]),64);
        tracep->fullQData(oldp+222,(vlSelf->top__DOT__Register__DOT__Reg
                                    [8U]),64);
        tracep->fullQData(oldp+224,(vlSelf->top__DOT__Register__DOT__Reg
                                    [9U]),64);
        tracep->fullQData(oldp+226,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xaU]),64);
        tracep->fullQData(oldp+228,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xbU]),64);
        tracep->fullQData(oldp+230,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xcU]),64);
        tracep->fullQData(oldp+232,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xdU]),64);
        tracep->fullQData(oldp+234,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xeU]),64);
        tracep->fullQData(oldp+236,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xfU]),64);
        tracep->fullQData(oldp+238,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x10U]),64);
        tracep->fullQData(oldp+240,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x11U]),64);
        tracep->fullQData(oldp+242,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x12U]),64);
        tracep->fullQData(oldp+244,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x13U]),64);
        tracep->fullQData(oldp+246,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x14U]),64);
        tracep->fullQData(oldp+248,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x15U]),64);
        tracep->fullQData(oldp+250,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x16U]),64);
        tracep->fullQData(oldp+252,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x17U]),64);
        tracep->fullQData(oldp+254,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x18U]),64);
        tracep->fullQData(oldp+256,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x19U]),64);
        tracep->fullQData(oldp+258,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1aU]),64);
        tracep->fullQData(oldp+260,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1bU]),64);
        tracep->fullQData(oldp+262,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1cU]),64);
        tracep->fullQData(oldp+264,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1dU]),64);
        tracep->fullQData(oldp+266,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1eU]),64);
        tracep->fullQData(oldp+268,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1fU]),64);
        tracep->fullBit(oldp+270,((((IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we) 
                                    & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)) 
                                   & (0U != (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_dst)))));
        tracep->fullQData(oldp+271,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0]),64);
        tracep->fullQData(oldp+273,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[1]),64);
        tracep->fullQData(oldp+275,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[2]),64);
        tracep->fullQData(oldp+277,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[3]),64);
        tracep->fullQData(oldp+279,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[4]),64);
        tracep->fullQData(oldp+281,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[5]),64);
        tracep->fullQData(oldp+283,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[6]),64);
        tracep->fullQData(oldp+285,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[7]),64);
        tracep->fullQData(oldp+287,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[8]),64);
        tracep->fullQData(oldp+289,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[9]),64);
        tracep->fullQData(oldp+291,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[10]),64);
        tracep->fullQData(oldp+293,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[11]),64);
        tracep->fullQData(oldp+295,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[12]),64);
        tracep->fullQData(oldp+297,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[13]),64);
        tracep->fullQData(oldp+299,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[14]),64);
        tracep->fullQData(oldp+301,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[15]),64);
        tracep->fullQData(oldp+303,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[16]),64);
        tracep->fullQData(oldp+305,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[17]),64);
        tracep->fullQData(oldp+307,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[18]),64);
        tracep->fullQData(oldp+309,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[19]),64);
        tracep->fullQData(oldp+311,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[20]),64);
        tracep->fullQData(oldp+313,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[21]),64);
        tracep->fullQData(oldp+315,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[22]),64);
        tracep->fullQData(oldp+317,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[23]),64);
        tracep->fullQData(oldp+319,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[24]),64);
        tracep->fullQData(oldp+321,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[25]),64);
        tracep->fullQData(oldp+323,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[26]),64);
        tracep->fullQData(oldp+325,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[27]),64);
        tracep->fullQData(oldp+327,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[28]),64);
        tracep->fullQData(oldp+329,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[29]),64);
        tracep->fullQData(oldp+331,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[30]),64);
        tracep->fullQData(oldp+333,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[31]),64);
        tracep->fullQData(oldp+335,(vlSelf->top__DOT__IFU__DOT__br_target),64);
        tracep->fullQData(oldp+337,(vlSelf->top__DOT__IFU__DOT__fs_pc_next),64);
        tracep->fullBit(oldp+339,(vlSelf->top__DOT__IFU__DOT__cache_init));
        tracep->fullQData(oldp+340,((4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc)),64);
        tracep->fullQData(oldp+342,(((IData)(vlSelf->top__DOT__IDU_io_br_taken)
                                      ? ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)
                                          ? vlSelf->top__DOT__IDU_io_br_target
                                          : vlSelf->top__DOT__IFU__DOT__br_target)
                                      : (4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc))),64);
        tracep->fullBit(oldp+344,(vlSelf->top__DOT__IFU__DOT__fs_allowin));
        tracep->fullBit(oldp+345,(((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
                                   & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
        tracep->fullBit(oldp+346,((((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
                                    >> 1U) & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
        tracep->fullCData(oldp+347,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                      ? 1U : ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                               ? (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)
                                               : 0U))),2);
        tracep->fullQData(oldp+348,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                      ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                      : ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                          ? ((0x1073U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                              ? vlSelf->top__DOT__IDU__DOT__rdata1
                                              : ((0x2073U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                                  ? 
                                                 (vlSelf->top__DOT__IDU__DOT__rdata1 
                                                  | vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data)
                                                  : 
                                                 ((0x3073U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 
                                                  (vlSelf->top__DOT__IDU__DOT__rdata1 
                                                   & (~ vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data))
                                                   : 0ULL)))
                                          : 0ULL))),64);
        tracep->fullQData(oldp+350,(((IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2)
                                      ? (((QData)((IData)(
                                                          vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])))
                                      : vlSelf->top__DOT__IDU__DOT___rdata2_T_1)),64);
        tracep->fullCData(oldp+352,(((2U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                      ? 0U : ((0x3eU 
                                               == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))
                                               ? 1U
                                               : (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)))),2);
        tracep->fullQData(oldp+353,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data),64);
        tracep->fullIData(oldp+355,(vlSelf->top__DOT__IDU__DOT__inst),32);
        tracep->fullBit(oldp+356,(vlSelf->top__DOT__IDU__DOT__br_taken_cancel));
        tracep->fullBit(oldp+357,(vlSelf->top__DOT__IDU__DOT__src1_is_pc));
        tracep->fullIData(oldp+358,(vlSelf->top__DOT__IDU__DOT___inst_type_T_188),32);
        tracep->fullCData(oldp+359,(vlSelf->top__DOT__IDU__DOT__csr_write),2);
        tracep->fullBit(oldp+360,(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1));
        tracep->fullBit(oldp+361,(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1));
        tracep->fullBit(oldp+362,(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs1));
        tracep->fullBit(oldp+363,(vlSelf->top__DOT__IDU__DOT__src2_is_imm));
        tracep->fullCData(oldp+364,(vlSelf->top__DOT__IDU__DOT__rs2),5);
        tracep->fullBit(oldp+365,(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2));
        tracep->fullBit(oldp+366,(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs2));
        tracep->fullBit(oldp+367,(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs2));
        tracep->fullBit(oldp+368,(vlSelf->top__DOT__IDU__DOT__ds_ready_go));
        tracep->fullBit(oldp+369,(vlSelf->top__DOT__IDU__DOT__ds_allowin));
        tracep->fullQData(oldp+370,(vlSelf->top__DOT__IDU__DOT__rdata1),64);
        tracep->fullQData(oldp+372,(vlSelf->top__DOT__IDU__DOT__rdata2),64);
        tracep->fullBit(oldp+374,(vlSelf->top__DOT__IDU__DOT__br_taken));
        tracep->fullSData(oldp+375,((vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0x14U)),12);
        tracep->fullIData(oldp+376,(((0x80000U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                  >> 0xcU)) 
                                     | ((0x7f800U & 
                                         (vlSelf->top__DOT__IDU__DOT__inst 
                                          >> 1U)) | 
                                        ((0x400U & 
                                          (vlSelf->top__DOT__IDU__DOT__inst 
                                           >> 0xaU)) 
                                         | (0x3ffU 
                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0x15U)))))),20);
        tracep->fullIData(oldp+377,((vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+378,(((0xfe0U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 7U)))),12);
        tracep->fullSData(oldp+379,(((0x800U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x14U)) 
                                     | ((0x400U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                   << 3U)) 
                                        | ((0x3f0U 
                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0x15U)) 
                                           | (0xfU 
                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 8U)))))),12);
        tracep->fullQData(oldp+380,(vlSelf->top__DOT__IDU__DOT__imm),64);
        tracep->fullCData(oldp+382,(vlSelf->top__DOT__IDU__DOT__csr_index),2);
        tracep->fullQData(oldp+383,(((0x1073U == (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                      ? vlSelf->top__DOT__IDU__DOT__rdata1
                                      : ((0x2073U == 
                                          (0x707fU 
                                           & vlSelf->top__DOT__IDU__DOT__inst))
                                          ? (vlSelf->top__DOT__IDU__DOT__rdata1 
                                             | vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data)
                                          : ((0x3073U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                              ? (vlSelf->top__DOT__IDU__DOT__rdata1 
                                                 & (~ vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data))
                                              : 0ULL)))),64);
        tracep->fullQData(oldp+385,(vlSelf->top__DOT__IDU__DOT__src1),64);
        tracep->fullQData(oldp+387,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[0]),64);
        tracep->fullQData(oldp+389,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[1]),64);
        tracep->fullQData(oldp+391,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[2]),64);
        tracep->fullQData(oldp+393,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[3]),64);
        tracep->fullQData(oldp+395,(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value),64);
        tracep->fullQData(oldp+397,(vlSelf->top__DOT__EXU__DOT__src2_value),64);
        tracep->fullIData(oldp+399,(vlSelf->top__DOT__EXU__DOT__ALUop),32);
        tracep->fullBit(oldp+400,(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy));
        tracep->fullQData(oldp+401,(vlSelf->top__DOT__EXU__DOT__src1_value),64);
        tracep->fullBit(oldp+403,((1U & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy)))));
        tracep->fullBit(oldp+404,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_mul_valid));
        tracep->fullBit(oldp+405,((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)));
        tracep->fullBit(oldp+406,(((0U != (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state)) 
                                   & ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state)) 
                                      & (0U == ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))))));
        tracep->fullIData(oldp+407,(((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                      ? 0U : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                               ? ((0U 
                                                   != 
                                                   ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                     | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                    | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                                   ? 0U
                                                   : 
                                                  ((((IData)(
                                                             (vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                                              >> 0x3fU)) 
                                                     ^ (IData)(
                                                               (vlSelf->top__DOT__EXU__DOT__src2_value 
                                                                >> 0x3fU))) 
                                                    << 0x1fU) 
                                                   | (0x7fffffffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__res 
                                                                 >> 0x20U)))))
                                               : 0U))),32);
        tracep->fullIData(oldp+408,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_result_lo),32);
        tracep->fullBit(oldp+409,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_valid));
        tracep->fullBit(oldp+410,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw));
        tracep->fullBit(oldp+411,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed));
        tracep->fullBit(oldp+412,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start) 
                                   & VL_GTES_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num))));
        tracep->fullQData(oldp+413,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_quotient),64);
        tracep->fullQData(oldp+415,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder),64);
        tracep->fullBit(oldp+417,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__mul_valid));
        tracep->fullBit(oldp+418,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__div_valid));
        tracep->fullQData(oldp+419,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res),64);
        tracep->fullQData(oldp+421,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sub_res),64);
        tracep->fullQData(oldp+423,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sra_res),64);
        tracep->fullQData(oldp+425,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),64);
        VL_EXTEND_WQ(127,64, __Vtemp297, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
        VL_SHIFTL_WWI(127,127,6, __Vtemp298, __Vtemp297, 
                      (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
        __Vtemp299[0U] = __Vtemp298[0U];
        __Vtemp299[1U] = __Vtemp298[1U];
        __Vtemp299[2U] = __Vtemp298[2U];
        __Vtemp299[3U] = (0x7fffffffU & __Vtemp298[3U]);
        tracep->fullWData(oldp+427,(__Vtemp299),127);
        tracep->fullIData(oldp+431,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value), 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),32);
        tracep->fullIData(oldp+432,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__srlw_res),32);
        tracep->fullQData(oldp+433,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sllw_res),63);
        tracep->fullQData(oldp+435,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     | vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+437,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     ^ vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+439,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     & vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+441,((((QData)((IData)(
                                                      ((0U 
                                                        == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                                         ? 
                                                        ((0U 
                                                          != 
                                                          ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                            | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                           | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                                          ? 0U
                                                          : 
                                                         ((((IData)(
                                                                    (vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                                                     >> 0x3fU)) 
                                                            ^ (IData)(
                                                                      (vlSelf->top__DOT__EXU__DOT__src2_value 
                                                                       >> 0x3fU))) 
                                                           << 0x1fU) 
                                                          | (0x7fffffffU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__res 
                                                                        >> 0x20U)))))
                                                         : 0U)))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_result_lo)))),64);
        tracep->fullIData(oldp+443,((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_quotient)),32);
        tracep->fullIData(oldp+444,((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder)),32);
        tracep->fullWData(oldp+445,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res),127);
        tracep->fullCData(oldp+449,((7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])),3);
        tracep->fullQData(oldp+450,((((QData)((IData)(
                                                      vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))),64);
        tracep->fullBit(oldp+452,(((6U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])) 
                                   | ((5U == (7U & 
                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])) 
                                      | (4U == (7U 
                                                & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))))));
        VL_EXTEND_WQ(65,64, __Vtemp303, (~ (((QData)((IData)(
                                                             vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
        VL_EXTEND_WQ(65,64, __Vtemp304, (~ (((QData)((IData)(
                                                             vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
        VL_EXTEND_WQ(65,64, __Vtemp308, ((2U == (7U 
                                                 & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                          ? (((QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))
                                          : ((1U == 
                                              (7U & 
                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                              ? (((QData)((IData)(
                                                                  vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))
                                              : 0ULL)));
        __Vtemp312[1U] = ((4U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                           ? (~ (((IData)((((QData)((IData)(
                                                            vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))) 
                                  >> 0x1fU) | ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U]))) 
                                                        >> 0x20U)) 
                                               << 1U)))
                           : ((3U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                               ? (((IData)((((QData)((IData)(
                                                             vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))) 
                                   >> 0x1fU) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U]))) 
                                                         >> 0x20U)) 
                                                << 1U))
                               : __Vtemp308[1U]));
        __Vtemp319[2U] = ((7U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                           ? 0U : (1U & ((6U == (7U 
                                                 & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                          ? __Vtemp303[2U]
                                          : ((5U == 
                                              (7U & 
                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                              ? __Vtemp304[2U]
                                              : ((4U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                  ? 
                                                 (~ 
                                                  ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU))
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                   ? 
                                                  ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU)
                                                   : 
                                                  __Vtemp308[2U]))))));
        tracep->fullQData(oldp+453,((((QData)((IData)(
                                                      ((7U 
                                                        == 
                                                        (7U 
                                                         & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                        ? 0U
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (7U 
                                                          & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                         ? 
                                                        __Vtemp303[1U]
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (7U 
                                                           & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                          ? 
                                                         __Vtemp304[1U]
                                                          : 
                                                         __Vtemp312[1U]))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((7U 
                                                                    == 
                                                                    (7U 
                                                                     & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                                    ? 0U
                                                                    : 
                                                                   ((6U 
                                                                     == 
                                                                     (7U 
                                                                      & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                                     ? 
                                                                    __Vtemp303[0U]
                                                                     : 
                                                                    ((5U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                                      ? 
                                                                     __Vtemp304[0U]
                                                                      : 
                                                                     ((4U 
                                                                       == 
                                                                       (7U 
                                                                        & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                                       ? 
                                                                      (~ 
                                                                       ((IData)(
                                                                                (((QData)((IData)(
                                                                                vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))) 
                                                                        << 1U))
                                                                       : 
                                                                      ((3U 
                                                                        == 
                                                                        (7U 
                                                                         & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                                        ? 
                                                                       ((IData)(
                                                                                (((QData)((IData)(
                                                                                vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))) 
                                                                        << 1U)
                                                                        : 
                                                                       __Vtemp308[0U]))))))))),64);
        tracep->fullBit(oldp+455,((1U & ((IData)((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                                  >> 0x3fU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__EXU__DOT__src2_value 
                                                    >> 0x3fU))))));
        tracep->fullQData(oldp+456,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__res),64);
        tracep->fullCData(oldp+458,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state),2);
        tracep->fullWData(oldp+459,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1),128);
        tracep->fullWData(oldp+463,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2),65);
        tracep->fullQData(oldp+466,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32),64);
        tracep->fullQData(oldp+468,(((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                      ? (((QData)((IData)(
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__EXU__DOT__src2_value 
                                                                       >> 0x1fU)))
                                                            ? 0xffffffffU
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))
                                      : vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        __Vtemp320[0U] = (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32);
        __Vtemp320[1U] = (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                  >> 0x20U));
        __Vtemp320[2U] = (IData)(((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                 >> 0x3fU)))
                                   ? 0xffffffffffffffffULL
                                   : 0ULL));
        __Vtemp320[3U] = (IData)((((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                  >> 0x3fU)))
                                    ? 0xffffffffffffffffULL
                                    : 0ULL) >> 0x20U));
        tracep->fullWData(oldp+470,(__Vtemp320),128);
        tracep->fullQData(oldp+474,((((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                       ? (((QData)((IData)(
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__EXU__DOT__src2_value 
                                                                        >> 0x1fU)))
                                                             ? 0xffffffffU
                                                             : 0U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))
                                       : vlSelf->top__DOT__EXU__DOT__src2_value) 
                                     << 1U)),64);
        tracep->fullBit(oldp+476,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg));
        tracep->fullBit(oldp+477,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg));
        tracep->fullBit(oldp+478,((((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg) 
                                    & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg))) 
                                   | ((~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)) 
                                      & (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)))));
        tracep->fullQData(oldp+479,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s),64);
        tracep->fullQData(oldp+481,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s),64);
        tracep->fullQData(oldp+483,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                      ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                      : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)),64);
        tracep->fullQData(oldp+485,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                      ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                      : vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+487,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                      ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)
                                          ? (1ULL + 
                                             (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s))
                                          : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s)
                                      : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                          ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                          : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))),64);
        tracep->fullQData(oldp+489,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                      ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)
                                          ? (1ULL + 
                                             (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s))
                                          : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s)
                                      : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                          ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                          : vlSelf->top__DOT__EXU__DOT__src2_value))),64);
        VL_EXTEND_WQ(65,64, __Vtemp321, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                          ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)
                                              ? (1ULL 
                                                 + 
                                                 (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s))
                                              : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s)
                                          : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                              ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                              : vlSelf->top__DOT__EXU__DOT__src2_value)));
        tracep->fullWData(oldp+491,(__Vtemp321),65);
        tracep->fullWData(oldp+494,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand),128);
        tracep->fullBit(oldp+498,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start));
        tracep->fullQData(oldp+499,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient),64);
        tracep->fullIData(oldp+501,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num),32);
        VL_EXTEND_WQ(128,64, __Vtemp322, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                           ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)
                                               ? (1ULL 
                                                  + 
                                                  (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s))
                                               : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s)
                                           : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                               ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                               : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)));
        tracep->fullWData(oldp+502,(__Vtemp322),128);
        tracep->fullWData(oldp+506,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res),65);
        __Vtemp323[0U] = 0U;
        __Vtemp323[1U] = (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                          << 0x1fU);
        __Vtemp323[2U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                           >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                     << 0x1fU));
        __Vtemp323[3U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                           >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                     << 0x1fU));
        tracep->fullWData(oldp+509,(__Vtemp323),128);
        if ((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])) {
            __Vtemp329[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U];
            __Vtemp329[1U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U];
            __Vtemp329[2U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U];
            __Vtemp329[3U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U];
        } else {
            __Vtemp329[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U];
            __Vtemp329[1U] = ((0x7fffffffU & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U]) 
                              | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                                 << 0x1fU));
            __Vtemp329[2U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                               >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                         << 0x1fU));
            __Vtemp329[3U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                               >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                         << 0x1fU));
        }
        tracep->fullWData(oldp+513,(__Vtemp329),128);
        tracep->fullQData(oldp+517,(vlSelf->top__DOT__LSU__DOT__ms_res),64);
        tracep->fullBit(oldp+519,(vlSelf->top__DOT__LSU__DOT__ren));
        tracep->fullQData(oldp+520,(vlSelf->top__DOT__LSU__DOT__maddr),64);
        tracep->fullCData(oldp+522,(vlSelf->top__DOT__LSU__DOT__load_type),3);
        tracep->fullBit(oldp+523,(vlSelf->top__DOT__LSU__DOT__ms_ready_go));
        tracep->fullQData(oldp+524,(vlSelf->top__DOT__LSU__DOT__rdata),64);
        tracep->fullCData(oldp+526,(vlSelf->top__DOT__arbiter__DOT__state),2);
        tracep->fullBit(oldp+527,((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__state))));
        tracep->fullCData(oldp+528,((0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                                  ? 1U
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                                               << 4U) 
                                              + (0xfU 
                                                 & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                    >> 6U))))),6);
        __Vtemp330[0U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][0U];
        __Vtemp330[1U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][1U];
        __Vtemp330[2U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][2U];
        __Vtemp330[3U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][3U];
        __Vtemp330[4U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][4U];
        __Vtemp330[5U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][5U];
        __Vtemp330[6U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][6U];
        __Vtemp330[7U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][7U];
        __Vtemp330[8U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][8U];
        __Vtemp330[9U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][9U];
        __Vtemp330[0xaU] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][0xaU];
        __Vtemp330[0xbU] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][0xbU];
        __Vtemp330[0xcU] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][0xcU];
        __Vtemp330[0xdU] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][0xdU];
        __Vtemp330[0xeU] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][0xeU];
        __Vtemp330[0xfU] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 6U))))][0xfU];
        tracep->fullWData(oldp+529,(__Vtemp330),512);
        __Vtemp331[0U] = vlSelf->top__DOT__i_cache__DOT__lo[0U];
        __Vtemp331[1U] = vlSelf->top__DOT__i_cache__DOT__lo[1U];
        __Vtemp331[2U] = vlSelf->top__DOT__i_cache__DOT__lo[2U];
        __Vtemp331[3U] = vlSelf->top__DOT__i_cache__DOT__lo[3U];
        __Vtemp331[4U] = vlSelf->top__DOT__i_cache__DOT__lo[4U];
        __Vtemp331[5U] = vlSelf->top__DOT__i_cache__DOT__lo[5U];
        __Vtemp331[6U] = vlSelf->top__DOT__i_cache__DOT__lo[6U];
        __Vtemp331[7U] = vlSelf->top__DOT__i_cache__DOT__lo[7U];
        __Vtemp331[8U] = vlSelf->top__DOT__i_cache__DOT__hi[0U];
        __Vtemp331[9U] = vlSelf->top__DOT__i_cache__DOT__hi[1U];
        __Vtemp331[0xaU] = vlSelf->top__DOT__i_cache__DOT__hi[2U];
        __Vtemp331[0xbU] = vlSelf->top__DOT__i_cache__DOT__hi[3U];
        __Vtemp331[0xcU] = vlSelf->top__DOT__i_cache__DOT__hi[4U];
        __Vtemp331[0xdU] = vlSelf->top__DOT__i_cache__DOT__hi[5U];
        __Vtemp331[0xeU] = vlSelf->top__DOT__i_cache__DOT__hi[6U];
        __Vtemp331[0xfU] = vlSelf->top__DOT__i_cache__DOT__hi[7U];
        tracep->fullWData(oldp+545,(__Vtemp331),512);
        tracep->fullCData(oldp+561,((0x3fU & (IData)(vlSelf->top__DOT__i_cache__DOT__unvalidIndex))),6);
        tracep->fullBit(oldp+562,(((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                   & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_392))));
        tracep->fullCData(oldp+563,((0x3fU & (IData)(vlSelf->top__DOT__i_cache__DOT___replaceIndex_T_2))),6);
        tracep->fullBit(oldp+564,(((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                   & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_416))));
        tracep->fullCData(oldp+565,((0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                             >> 6U))),6);
        tracep->fullBit(oldp+566,(vlSelf->top__DOT__i_cache__DOT__validMem_valid_0_MPORT_data));
        tracep->fullCData(oldp+567,((0x3fU & ((IData)(0x10U) 
                                              + (0xfU 
                                                 & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                    >> 6U))))),6);
        tracep->fullBit(oldp+568,(vlSelf->top__DOT__i_cache__DOT__validMem_valid_1_MPORT_data));
        tracep->fullCData(oldp+569,((0x3fU & ((IData)(0x20U) 
                                              + (0xfU 
                                                 & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                    >> 6U))))),6);
        tracep->fullBit(oldp+570,(vlSelf->top__DOT__i_cache__DOT__validMem_valid_2_MPORT_data));
        tracep->fullCData(oldp+571,((0x3fU & ((IData)(0x30U) 
                                              + (0xfU 
                                                 & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                    >> 6U))))),6);
        tracep->fullBit(oldp+572,(vlSelf->top__DOT__i_cache__DOT__validMem_valid_3_MPORT_data));
        tracep->fullBit(oldp+573,(((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                   & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_424))));
        tracep->fullIData(oldp+574,(vlSelf->top__DOT__i_cache__DOT__tagMem
                                    [(0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                              >> 6U))]),32);
        tracep->fullIData(oldp+575,(vlSelf->top__DOT__i_cache__DOT__tagMem
                                    [(0x3fU & ((IData)(0x10U) 
                                               + (0xfU 
                                                  & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                     >> 6U))))]),32);
        tracep->fullIData(oldp+576,(vlSelf->top__DOT__i_cache__DOT__tagMem
                                    [(0x3fU & ((IData)(0x20U) 
                                               + (0xfU 
                                                  & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                     >> 6U))))]),32);
        tracep->fullIData(oldp+577,(vlSelf->top__DOT__i_cache__DOT__tagMem
                                    [(0x3fU & ((IData)(0x30U) 
                                               + (0xfU 
                                                  & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                     >> 6U))))]),32);
        tracep->fullIData(oldp+578,((vlSelf->top__DOT__i_cache__DOT__addr 
                                     >> 0xaU)),32);
        tracep->fullIData(oldp+579,(vlSelf->top__DOT__i_cache__DOT__addr),32);
        tracep->fullCData(oldp+580,((0x3fU & vlSelf->top__DOT__i_cache__DOT__addr)),6);
        tracep->fullCData(oldp+581,((0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                             >> 6U))),4);
        tracep->fullIData(oldp+582,((vlSelf->top__DOT__i_cache__DOT__addr 
                                     >> 0xaU)),22);
        tracep->fullSData(oldp+583,((0x1f8U & (vlSelf->top__DOT__i_cache__DOT__addr 
                                               << 3U))),9);
        tracep->fullBit(oldp+584,(vlSelf->top__DOT__i_cache__DOT__allvalid));
        tracep->fullCData(oldp+585,(vlSelf->top__DOT__i_cache__DOT__foundUnvalidIndex),2);
        tracep->fullSData(oldp+586,(vlSelf->top__DOT__i_cache__DOT__unvalidIndex),9);
        tracep->fullBit(oldp+587,(vlSelf->top__DOT__i_cache__DOT__tagMatch_0));
        tracep->fullBit(oldp+588,(vlSelf->top__DOT__i_cache__DOT__tagMatch_1));
        tracep->fullBit(oldp+589,(vlSelf->top__DOT__i_cache__DOT__tagMatch_2));
        tracep->fullBit(oldp+590,(vlSelf->top__DOT__i_cache__DOT__tagMatch_3));
        tracep->fullBit(oldp+591,(vlSelf->top__DOT__i_cache__DOT__anyMatch));
        tracep->fullCData(oldp+592,(((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                                      ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                               ? 1U
                                               : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U))))),2);
        tracep->fullSData(oldp+593,((0x1ffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                     ? 3U
                                                     : 0U)))) 
                                                << 4U) 
                                               + (0xfU 
                                                  & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                     >> 6U))))),9);
        tracep->fullQData(oldp+594,(vlSelf->top__DOT__i_cache__DOT__receive_data_0),64);
        tracep->fullQData(oldp+596,(vlSelf->top__DOT__i_cache__DOT__receive_data_1),64);
        tracep->fullQData(oldp+598,(vlSelf->top__DOT__i_cache__DOT__receive_data_2),64);
        tracep->fullQData(oldp+600,(vlSelf->top__DOT__i_cache__DOT__receive_data_3),64);
        tracep->fullQData(oldp+602,(vlSelf->top__DOT__i_cache__DOT__receive_data_4),64);
        tracep->fullQData(oldp+604,(vlSelf->top__DOT__i_cache__DOT__receive_data_5),64);
        tracep->fullQData(oldp+606,(vlSelf->top__DOT__i_cache__DOT__receive_data_6),64);
        tracep->fullQData(oldp+608,(vlSelf->top__DOT__i_cache__DOT__receive_data_7),64);
        tracep->fullCData(oldp+610,(vlSelf->top__DOT__i_cache__DOT__receive_num),3);
        tracep->fullCData(oldp+611,(vlSelf->top__DOT__i_cache__DOT__quene_0),8);
        tracep->fullCData(oldp+612,(vlSelf->top__DOT__i_cache__DOT__quene_1),8);
        tracep->fullCData(oldp+613,(vlSelf->top__DOT__i_cache__DOT__quene_2),8);
        tracep->fullCData(oldp+614,(vlSelf->top__DOT__i_cache__DOT__quene_3),8);
        tracep->fullCData(oldp+615,(vlSelf->top__DOT__i_cache__DOT__quene_4),8);
        tracep->fullCData(oldp+616,(vlSelf->top__DOT__i_cache__DOT__quene_5),8);
        tracep->fullCData(oldp+617,(vlSelf->top__DOT__i_cache__DOT__quene_6),8);
        tracep->fullCData(oldp+618,(vlSelf->top__DOT__i_cache__DOT__quene_7),8);
        tracep->fullCData(oldp+619,(vlSelf->top__DOT__i_cache__DOT__quene_8),8);
        tracep->fullCData(oldp+620,(vlSelf->top__DOT__i_cache__DOT__quene_9),8);
        tracep->fullCData(oldp+621,(vlSelf->top__DOT__i_cache__DOT__quene_10),8);
        tracep->fullCData(oldp+622,(vlSelf->top__DOT__i_cache__DOT__quene_11),8);
        tracep->fullCData(oldp+623,(vlSelf->top__DOT__i_cache__DOT__quene_12),8);
        tracep->fullCData(oldp+624,(vlSelf->top__DOT__i_cache__DOT__quene_13),8);
        tracep->fullCData(oldp+625,(vlSelf->top__DOT__i_cache__DOT__quene_14),8);
        tracep->fullCData(oldp+626,(vlSelf->top__DOT__i_cache__DOT__quene_15),8);
        tracep->fullCData(oldp+627,((3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_15) 
                                           >> 6U))),2);
        tracep->fullCData(oldp+628,(vlSelf->top__DOT__i_cache__DOT__state),3);
        tracep->fullWData(oldp+629,(vlSelf->top__DOT__i_cache__DOT__lo),256);
        tracep->fullWData(oldp+637,(vlSelf->top__DOT__i_cache__DOT__hi),256);
        tracep->fullIData(oldp+645,(vlSelf->top__DOT__i_cache__DOT___replaceIndex_T_2),32);
        tracep->fullBit(oldp+646,(((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                   & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_341))));
        tracep->fullCData(oldp+647,((0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))),6);
        __Vtemp332[0U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0U];
        __Vtemp332[1U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][1U];
        __Vtemp332[2U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][2U];
        __Vtemp332[3U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][3U];
        __Vtemp332[4U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][4U];
        __Vtemp332[5U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][5U];
        __Vtemp332[6U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][6U];
        __Vtemp332[7U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][7U];
        __Vtemp332[8U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][8U];
        __Vtemp332[9U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][9U];
        __Vtemp332[0xaU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xaU];
        __Vtemp332[0xbU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xbU];
        __Vtemp332[0xcU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xcU];
        __Vtemp332[0xdU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xdU];
        __Vtemp332[0xeU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xeU];
        __Vtemp332[0xfU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xfU];
        tracep->fullWData(oldp+648,(__Vtemp332),512);
        tracep->fullBit(oldp+664,(((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                   & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_389))));
        tracep->fullCData(oldp+665,((0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))),6);
        __Vtemp333[0U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0U];
        __Vtemp333[1U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][1U];
        __Vtemp333[2U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][2U];
        __Vtemp333[3U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][3U];
        __Vtemp333[4U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][4U];
        __Vtemp333[5U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][5U];
        __Vtemp333[6U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][6U];
        __Vtemp333[7U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][7U];
        __Vtemp333[8U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][8U];
        __Vtemp333[9U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][9U];
        __Vtemp333[0xaU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0xaU];
        __Vtemp333[0xbU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0xbU];
        __Vtemp333[0xcU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0xcU];
        __Vtemp333[0xdU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0xdU];
        __Vtemp333[0xeU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0xeU];
        __Vtemp333[0xfU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0xfU];
        tracep->fullWData(oldp+666,(__Vtemp333),512);
        tracep->fullBit(oldp+682,((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))));
        VL_EXTEND_WQ(575,64, __Vtemp334, (vlSelf->top__DOT__LSU__DOT__store_data 
                                          & vlSelf->top__DOT__d_cache__DOT__wmask));
        VL_SHIFTL_WWI(575,575,9, __Vtemp335, __Vtemp334, 
                      (0x1f8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                 << 3U)));
        VL_EXTEND_WQ(575,64, __Vtemp339, vlSelf->top__DOT__d_cache__DOT__wmask);
        VL_SHIFTL_WWI(575,575,9, __Vtemp340, __Vtemp339, 
                      (0x1f8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                 << 3U)));
        __Vtemp345[0U] = ((Vtop__ConstPool__CONST_ee9aa94f_0[0U] 
                           & __Vtemp335[0U]) | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                                [(0x3fU 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0U] 
                                                & (~ 
                                                   (Vtop__ConstPool__CONST_ee9aa94f_0[0U] 
                                                    & __Vtemp340[0U]))));
        __Vtemp345[1U] = ((Vtop__ConstPool__CONST_ee9aa94f_0[1U] 
                           & __Vtemp335[1U]) | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                                [(0x3fU 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][1U] 
                                                & (~ 
                                                   (Vtop__ConstPool__CONST_ee9aa94f_0[1U] 
                                                    & __Vtemp340[1U]))));
        __Vtemp345[2U] = ((Vtop__ConstPool__CONST_ee9aa94f_0[2U] 
                           & __Vtemp335[2U]) | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                                [(0x3fU 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][2U] 
                                                & (~ 
                                                   (Vtop__ConstPool__CONST_ee9aa94f_0[2U] 
                                                    & __Vtemp340[2U]))));
        __Vtemp345[3U] = ((Vtop__ConstPool__CONST_ee9aa94f_0[3U] 
                           & __Vtemp335[3U]) | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                                [(0x3fU 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][3U] 
                                                & (~ 
                                                   (Vtop__ConstPool__CONST_ee9aa94f_0[3U] 
                                                    & __Vtemp340[3U]))));
        __Vtemp345[4U] = ((Vtop__ConstPool__CONST_ee9aa94f_0[4U] 
                           & __Vtemp335[4U]) | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                                [(0x3fU 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][4U] 
                                                & (~ 
                                                   (Vtop__ConstPool__CONST_ee9aa94f_0[4U] 
                                                    & __Vtemp340[4U]))));
        __Vtemp345[5U] = ((Vtop__ConstPool__CONST_ee9aa94f_0[5U] 
                           & __Vtemp335[5U]) | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                                [(0x3fU 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][5U] 
                                                & (~ 
                                                   (Vtop__ConstPool__CONST_ee9aa94f_0[5U] 
                                                    & __Vtemp340[5U]))));
        __Vtemp345[6U] = ((Vtop__ConstPool__CONST_ee9aa94f_0[6U] 
                           & __Vtemp335[6U]) | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                                [(0x3fU 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][6U] 
                                                & (~ 
                                                   (Vtop__ConstPool__CONST_ee9aa94f_0[6U] 
                                                    & __Vtemp340[6U]))));
        __Vtemp345[7U] = ((Vtop__ConstPool__CONST_ee9aa94f_0[7U] 
                           & __Vtemp335[7U]) | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                                [(0x3fU 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][7U] 
                                                & (~ 
                                                   (Vtop__ConstPool__CONST_ee9aa94f_0[7U] 
                                                    & __Vtemp340[7U]))));
        __Vtemp345[8U] = ((Vtop__ConstPool__CONST_ee9aa94f_0[8U] 
                           & __Vtemp335[8U]) | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                                [(0x3fU 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][8U] 
                                                & (~ 
                                                   (Vtop__ConstPool__CONST_ee9aa94f_0[8U] 
                                                    & __Vtemp340[8U]))));
        __Vtemp345[9U] = ((Vtop__ConstPool__CONST_ee9aa94f_0[9U] 
                           & __Vtemp335[9U]) | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                                [(0x3fU 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][9U] 
                                                & (~ 
                                                   (Vtop__ConstPool__CONST_ee9aa94f_0[9U] 
                                                    & __Vtemp340[9U]))));
        __Vtemp345[0xaU] = ((Vtop__ConstPool__CONST_ee9aa94f_0[0xaU] 
                             & __Vtemp335[0xaU]) | 
                            (vlSelf->top__DOT__d_cache__DOT__cacheLine
                             [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xaU] 
                             & (~ (Vtop__ConstPool__CONST_ee9aa94f_0[0xaU] 
                                   & __Vtemp340[0xaU]))));
        __Vtemp345[0xbU] = ((Vtop__ConstPool__CONST_ee9aa94f_0[0xbU] 
                             & __Vtemp335[0xbU]) | 
                            (vlSelf->top__DOT__d_cache__DOT__cacheLine
                             [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xbU] 
                             & (~ (Vtop__ConstPool__CONST_ee9aa94f_0[0xbU] 
                                   & __Vtemp340[0xbU]))));
        __Vtemp345[0xcU] = ((Vtop__ConstPool__CONST_ee9aa94f_0[0xcU] 
                             & __Vtemp335[0xcU]) | 
                            (vlSelf->top__DOT__d_cache__DOT__cacheLine
                             [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xcU] 
                             & (~ (Vtop__ConstPool__CONST_ee9aa94f_0[0xcU] 
                                   & __Vtemp340[0xcU]))));
        __Vtemp345[0xdU] = ((Vtop__ConstPool__CONST_ee9aa94f_0[0xdU] 
                             & __Vtemp335[0xdU]) | 
                            (vlSelf->top__DOT__d_cache__DOT__cacheLine
                             [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xdU] 
                             & (~ (Vtop__ConstPool__CONST_ee9aa94f_0[0xdU] 
                                   & __Vtemp340[0xdU]))));
        __Vtemp345[0xeU] = ((Vtop__ConstPool__CONST_ee9aa94f_0[0xeU] 
                             & __Vtemp335[0xeU]) | 
                            (vlSelf->top__DOT__d_cache__DOT__cacheLine
                             [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xeU] 
                             & (~ (Vtop__ConstPool__CONST_ee9aa94f_0[0xeU] 
                                   & __Vtemp340[0xeU]))));
        __Vtemp345[0xfU] = ((Vtop__ConstPool__CONST_ee9aa94f_0[0xfU] 
                             & __Vtemp335[0xfU]) | 
                            (vlSelf->top__DOT__d_cache__DOT__cacheLine
                             [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xfU] 
                             & (~ (Vtop__ConstPool__CONST_ee9aa94f_0[0xfU] 
                                   & __Vtemp340[0xfU]))));
        tracep->fullWData(oldp+683,(__Vtemp345),512);
        __Vtemp346[0U] = vlSelf->top__DOT__d_cache__DOT__lo[0U];
        __Vtemp346[1U] = vlSelf->top__DOT__d_cache__DOT__lo[1U];
        __Vtemp346[2U] = vlSelf->top__DOT__d_cache__DOT__lo[2U];
        __Vtemp346[3U] = vlSelf->top__DOT__d_cache__DOT__lo[3U];
        __Vtemp346[4U] = vlSelf->top__DOT__d_cache__DOT__lo[4U];
        __Vtemp346[5U] = vlSelf->top__DOT__d_cache__DOT__lo[5U];
        __Vtemp346[6U] = vlSelf->top__DOT__d_cache__DOT__lo[6U];
        __Vtemp346[7U] = vlSelf->top__DOT__d_cache__DOT__lo[7U];
        __Vtemp346[8U] = vlSelf->top__DOT__d_cache__DOT__hi[0U];
        __Vtemp346[9U] = vlSelf->top__DOT__d_cache__DOT__hi[1U];
        __Vtemp346[0xaU] = vlSelf->top__DOT__d_cache__DOT__hi[2U];
        __Vtemp346[0xbU] = vlSelf->top__DOT__d_cache__DOT__hi[3U];
        __Vtemp346[0xcU] = vlSelf->top__DOT__d_cache__DOT__hi[4U];
        __Vtemp346[0xdU] = vlSelf->top__DOT__d_cache__DOT__hi[5U];
        __Vtemp346[0xeU] = vlSelf->top__DOT__d_cache__DOT__hi[6U];
        __Vtemp346[0xfU] = vlSelf->top__DOT__d_cache__DOT__hi[7U];
        tracep->fullWData(oldp+699,(__Vtemp346),512);
        tracep->fullCData(oldp+715,((0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__unvalidIndex))),6);
        tracep->fullBit(oldp+716,(((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                   & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_356))));
        tracep->fullBit(oldp+717,(((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                   & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_380))));
        tracep->fullCData(oldp+718,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__LSU__DOT__maddr 
                                                     >> 6U)))),6);
        tracep->fullBit(oldp+719,(vlSelf->top__DOT__d_cache__DOT__validMem_valid_0_MPORT_data));
        tracep->fullCData(oldp+720,((0x3fU & ((IData)(0x10U) 
                                              + (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 6U)))))),6);
        tracep->fullBit(oldp+721,(vlSelf->top__DOT__d_cache__DOT__validMem_valid_1_MPORT_data));
        tracep->fullCData(oldp+722,((0x3fU & ((IData)(0x20U) 
                                              + (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 6U)))))),6);
        tracep->fullBit(oldp+723,(vlSelf->top__DOT__d_cache__DOT__validMem_valid_2_MPORT_data));
        tracep->fullCData(oldp+724,((0x3fU & ((IData)(0x30U) 
                                              + (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 6U)))))),6);
        tracep->fullBit(oldp+725,(vlSelf->top__DOT__d_cache__DOT__validMem_valid_3_MPORT_data));
        tracep->fullIData(oldp+726,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                    [(0xfU & (IData)(
                                                     (vlSelf->top__DOT__LSU__DOT__maddr 
                                                      >> 6U)))]),32);
        tracep->fullIData(oldp+727,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                    [(0x3fU & ((IData)(0x10U) 
                                               + (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 6U)))))]),32);
        tracep->fullIData(oldp+728,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                    [(0x3fU & ((IData)(0x20U) 
                                               + (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 6U)))))]),32);
        tracep->fullIData(oldp+729,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                    [(0x3fU & ((IData)(0x30U) 
                                               + (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 6U)))))]),32);
        tracep->fullIData(oldp+730,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                    [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))]),32);
        tracep->fullIData(oldp+731,((0x3fffffU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 0xaU)))),32);
        tracep->fullBit(oldp+732,(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data));
        tracep->fullCData(oldp+733,((0x3fU & (IData)(vlSelf->top__DOT__LSU__DOT__maddr))),6);
        tracep->fullCData(oldp+734,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__LSU__DOT__maddr 
                                                     >> 6U)))),4);
        tracep->fullIData(oldp+735,((0x3fffffU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 0xaU)))),22);
        tracep->fullBit(oldp+736,(vlSelf->top__DOT__d_cache__DOT__allvalid));
        tracep->fullCData(oldp+737,(vlSelf->top__DOT__d_cache__DOT__foundUnvalidIndex),2);
        tracep->fullSData(oldp+738,(vlSelf->top__DOT__d_cache__DOT__unvalidIndex),9);
        tracep->fullBit(oldp+739,(vlSelf->top__DOT__d_cache__DOT__tagMatch_0));
        tracep->fullBit(oldp+740,(vlSelf->top__DOT__d_cache__DOT__tagMatch_1));
        tracep->fullBit(oldp+741,(vlSelf->top__DOT__d_cache__DOT__tagMatch_2));
        tracep->fullBit(oldp+742,(vlSelf->top__DOT__d_cache__DOT__tagMatch_3));
        tracep->fullBit(oldp+743,(vlSelf->top__DOT__d_cache__DOT__anyMatch));
        tracep->fullCData(oldp+744,(((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_0)
                                      ? 0U : ((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_1)
                                               ? 1U
                                               : ((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_2)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U))))),2);
        tracep->fullSData(oldp+745,(vlSelf->top__DOT__d_cache__DOT__tagIndex),9);
        tracep->fullWData(oldp+746,(vlSelf->top__DOT__d_cache__DOT__write_back_data),512);
        tracep->fullIData(oldp+762,(vlSelf->top__DOT__d_cache__DOT__write_back_addr),32);
        tracep->fullQData(oldp+763,(vlSelf->top__DOT__d_cache__DOT__receive_data_0),64);
        tracep->fullQData(oldp+765,(vlSelf->top__DOT__d_cache__DOT__receive_data_1),64);
        tracep->fullQData(oldp+767,(vlSelf->top__DOT__d_cache__DOT__receive_data_2),64);
        tracep->fullQData(oldp+769,(vlSelf->top__DOT__d_cache__DOT__receive_data_3),64);
        tracep->fullQData(oldp+771,(vlSelf->top__DOT__d_cache__DOT__receive_data_4),64);
        tracep->fullQData(oldp+773,(vlSelf->top__DOT__d_cache__DOT__receive_data_5),64);
        tracep->fullQData(oldp+775,(vlSelf->top__DOT__d_cache__DOT__receive_data_6),64);
        tracep->fullQData(oldp+777,(vlSelf->top__DOT__d_cache__DOT__receive_data_7),64);
        tracep->fullCData(oldp+779,(vlSelf->top__DOT__d_cache__DOT__receive_num),3);
        tracep->fullCData(oldp+780,(vlSelf->top__DOT__d_cache__DOT__quene_0),8);
        tracep->fullCData(oldp+781,(vlSelf->top__DOT__d_cache__DOT__quene_1),8);
        tracep->fullCData(oldp+782,(vlSelf->top__DOT__d_cache__DOT__quene_2),8);
        tracep->fullCData(oldp+783,(vlSelf->top__DOT__d_cache__DOT__quene_3),8);
        tracep->fullCData(oldp+784,(vlSelf->top__DOT__d_cache__DOT__quene_4),8);
        tracep->fullCData(oldp+785,(vlSelf->top__DOT__d_cache__DOT__quene_5),8);
        tracep->fullCData(oldp+786,(vlSelf->top__DOT__d_cache__DOT__quene_6),8);
        tracep->fullCData(oldp+787,(vlSelf->top__DOT__d_cache__DOT__quene_7),8);
        tracep->fullCData(oldp+788,(vlSelf->top__DOT__d_cache__DOT__quene_8),8);
        tracep->fullCData(oldp+789,(vlSelf->top__DOT__d_cache__DOT__quene_9),8);
        tracep->fullCData(oldp+790,(vlSelf->top__DOT__d_cache__DOT__quene_10),8);
        tracep->fullCData(oldp+791,(vlSelf->top__DOT__d_cache__DOT__quene_11),8);
        tracep->fullCData(oldp+792,(vlSelf->top__DOT__d_cache__DOT__quene_12),8);
        tracep->fullCData(oldp+793,(vlSelf->top__DOT__d_cache__DOT__quene_13),8);
        tracep->fullCData(oldp+794,(vlSelf->top__DOT__d_cache__DOT__quene_14),8);
        tracep->fullCData(oldp+795,(vlSelf->top__DOT__d_cache__DOT__quene_15),8);
        tracep->fullCData(oldp+796,((3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_15) 
                                           >> 6U))),2);
        tracep->fullSData(oldp+797,((0x1f8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                               << 3U))),9);
        tracep->fullQData(oldp+798,(vlSelf->top__DOT__d_cache__DOT__wmask),64);
        tracep->fullCData(oldp+800,(vlSelf->top__DOT__d_cache__DOT__state),3);
        tracep->fullWData(oldp+801,(vlSelf->top__DOT__d_cache__DOT__lo),256);
        tracep->fullWData(oldp+809,(vlSelf->top__DOT__d_cache__DOT__hi),256);
        tracep->fullIData(oldp+817,(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2),32);
        tracep->fullQData(oldp+818,(vlSelf->top__DOT__axi__DOT__araddr),64);
        tracep->fullQData(oldp+820,(vlSelf->top__DOT__axi__DOT__awaddr),64);
        tracep->fullCData(oldp+822,(vlSelf->top__DOT__axi__DOT__arlen),8);
        tracep->fullCData(oldp+823,(vlSelf->top__DOT__axi__DOT__awlen),8);
        tracep->fullCData(oldp+824,(vlSelf->top__DOT__axi__DOT__state),3);
        tracep->fullBit(oldp+825,(vlSelf->clock));
        tracep->fullBit(oldp+826,(vlSelf->reset));
        tracep->fullIData(oldp+827,(vlSelf->io_inst),32);
        tracep->fullQData(oldp+828,(vlSelf->io_pc),64);
        tracep->fullBit(oldp+830,(vlSelf->io_step));
        tracep->fullBit(oldp+831,(1U));
        tracep->fullCData(oldp+832,(0U),5);
        tracep->fullCData(oldp+833,(1U),5);
        tracep->fullCData(oldp+834,(2U),5);
        tracep->fullCData(oldp+835,(3U),5);
        tracep->fullCData(oldp+836,(4U),5);
        tracep->fullCData(oldp+837,(5U),5);
        tracep->fullCData(oldp+838,(6U),5);
        tracep->fullCData(oldp+839,(7U),5);
        tracep->fullCData(oldp+840,(8U),5);
        tracep->fullCData(oldp+841,(9U),5);
        tracep->fullCData(oldp+842,(0xaU),5);
        tracep->fullCData(oldp+843,(0xbU),5);
        tracep->fullCData(oldp+844,(0xcU),5);
        tracep->fullCData(oldp+845,(0xdU),5);
        tracep->fullCData(oldp+846,(0xeU),5);
        tracep->fullCData(oldp+847,(0xfU),5);
        tracep->fullCData(oldp+848,(0x10U),5);
        tracep->fullCData(oldp+849,(0x11U),5);
        tracep->fullCData(oldp+850,(0x12U),5);
        tracep->fullCData(oldp+851,(0x13U),5);
        tracep->fullCData(oldp+852,(0x14U),5);
        tracep->fullCData(oldp+853,(0x15U),5);
        tracep->fullCData(oldp+854,(0x16U),5);
        tracep->fullCData(oldp+855,(0x17U),5);
        tracep->fullCData(oldp+856,(0x18U),5);
        tracep->fullCData(oldp+857,(0x19U),5);
        tracep->fullCData(oldp+858,(0x1aU),5);
        tracep->fullCData(oldp+859,(0x1bU),5);
        tracep->fullCData(oldp+860,(0x1cU),5);
        tracep->fullCData(oldp+861,(0x1dU),5);
        tracep->fullCData(oldp+862,(0x1eU),5);
        tracep->fullCData(oldp+863,(0x1fU),5);
        tracep->fullCData(oldp+864,(3U),2);
        tracep->fullBit(oldp+865,(0U));
        tracep->fullCData(oldp+866,(0U),6);
        tracep->fullCData(oldp+867,(1U),6);
        tracep->fullCData(oldp+868,(2U),6);
        tracep->fullCData(oldp+869,(3U),6);
        tracep->fullCData(oldp+870,(4U),6);
        tracep->fullCData(oldp+871,(5U),6);
        tracep->fullCData(oldp+872,(6U),6);
        tracep->fullCData(oldp+873,(7U),6);
        tracep->fullCData(oldp+874,(8U),6);
        tracep->fullCData(oldp+875,(9U),6);
        tracep->fullCData(oldp+876,(0xaU),6);
        tracep->fullCData(oldp+877,(0xbU),6);
        tracep->fullCData(oldp+878,(0xcU),6);
        tracep->fullCData(oldp+879,(0xdU),6);
        tracep->fullCData(oldp+880,(0xeU),6);
        tracep->fullCData(oldp+881,(0xfU),6);
        tracep->fullCData(oldp+882,(0x10U),6);
        tracep->fullCData(oldp+883,(0x11U),6);
        tracep->fullCData(oldp+884,(0x12U),6);
        tracep->fullCData(oldp+885,(0x13U),6);
        tracep->fullCData(oldp+886,(0x14U),6);
        tracep->fullCData(oldp+887,(0x15U),6);
        tracep->fullCData(oldp+888,(0x16U),6);
        tracep->fullCData(oldp+889,(0x17U),6);
        tracep->fullCData(oldp+890,(0x18U),6);
        tracep->fullCData(oldp+891,(0x19U),6);
        tracep->fullCData(oldp+892,(0x1aU),6);
        tracep->fullCData(oldp+893,(0x1bU),6);
        tracep->fullCData(oldp+894,(0x1cU),6);
        tracep->fullCData(oldp+895,(0x1dU),6);
        tracep->fullCData(oldp+896,(0x1eU),6);
        tracep->fullCData(oldp+897,(0x1fU),6);
        tracep->fullCData(oldp+898,(0x20U),6);
        tracep->fullCData(oldp+899,(0x21U),6);
        tracep->fullCData(oldp+900,(0x22U),6);
        tracep->fullCData(oldp+901,(0x23U),6);
        tracep->fullCData(oldp+902,(0x24U),6);
        tracep->fullCData(oldp+903,(0x25U),6);
        tracep->fullCData(oldp+904,(0x26U),6);
        tracep->fullCData(oldp+905,(0x27U),6);
        tracep->fullCData(oldp+906,(0x28U),6);
        tracep->fullCData(oldp+907,(0x29U),6);
        tracep->fullCData(oldp+908,(0x2aU),6);
        tracep->fullCData(oldp+909,(0x2bU),6);
        tracep->fullCData(oldp+910,(0x2cU),6);
        tracep->fullCData(oldp+911,(0x2dU),6);
        tracep->fullCData(oldp+912,(0x2eU),6);
        tracep->fullCData(oldp+913,(0x2fU),6);
        tracep->fullCData(oldp+914,(0x30U),6);
        tracep->fullCData(oldp+915,(0x31U),6);
        tracep->fullCData(oldp+916,(0x32U),6);
        tracep->fullCData(oldp+917,(0x33U),6);
        tracep->fullCData(oldp+918,(0x34U),6);
        tracep->fullCData(oldp+919,(0x35U),6);
        tracep->fullCData(oldp+920,(0x36U),6);
        tracep->fullCData(oldp+921,(0x37U),6);
        tracep->fullCData(oldp+922,(0x38U),6);
        tracep->fullCData(oldp+923,(0x39U),6);
        tracep->fullCData(oldp+924,(0x3aU),6);
        tracep->fullCData(oldp+925,(0x3bU),6);
        tracep->fullCData(oldp+926,(0x3cU),6);
        tracep->fullCData(oldp+927,(0x3dU),6);
        tracep->fullCData(oldp+928,(0x3eU),6);
        tracep->fullCData(oldp+929,(0x3fU),6);
    }
}
