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
        tracep->declBit(c+1729,"clock", false,-1);
        tracep->declBit(c+1730,"reset", false,-1);
        tracep->declBus(c+1731,"io_inst", false,-1, 31,0);
        tracep->declQuad(c+1732,"io_pc", false,-1, 63,0);
        tracep->declBit(c+1734,"io_step", false,-1);
        tracep->declBit(c+1729,"top clock", false,-1);
        tracep->declBit(c+1730,"top reset", false,-1);
        tracep->declBus(c+1731,"top io_inst", false,-1, 31,0);
        tracep->declQuad(c+1732,"top io_pc", false,-1, 63,0);
        tracep->declBit(c+1734,"top io_step", false,-1);
        tracep->declBit(c+1729,"top Register_clock", false,-1);
        tracep->declBus(c+1,"top Register_io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top Register_io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top Register_io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top Register_io_rdata2", false,-1, 63,0);
        tracep->declBit(c+7,"top Register_io_we", false,-1);
        tracep->declBus(c+8,"top Register_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top Register_io_wdata", false,-1, 63,0);
        tracep->declBit(c+1729,"top IFU_clock", false,-1);
        tracep->declBit(c+1730,"top IFU_reset", false,-1);
        tracep->declBit(c+11,"top IFU_io_ds_allowin", false,-1);
        tracep->declBit(c+12,"top IFU_io_br_taken", false,-1);
        tracep->declQuad(c+13,"top IFU_io_br_target", false,-1, 63,0);
        tracep->declQuad(c+15,"top IFU_io_to_ds_pc", false,-1, 63,0);
        tracep->declBit(c+17,"top IFU_io_fs_to_ds_valid", false,-1);
        tracep->declBus(c+18,"top IFU_io_inst", false,-1, 31,0);
        tracep->declQuad(c+19,"top IFU_io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+21,"top IFU_io_axi_in_rlast", false,-1);
        tracep->declBit(c+22,"top IFU_io_axi_in_rvalid", false,-1);
        tracep->declBus(c+23,"top IFU_io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+24,"top IFU_io_axi_out_arvalid", false,-1);
        tracep->declBit(c+25,"top IFU_io_axi_out_rready", false,-1);
        tracep->declBit(c+26,"top IFU_io_fence", false,-1);
        tracep->declBit(c+27,"top IFU_io_clear_cache", false,-1);
        tracep->declBit(c+28,"top IFU_io_cache_init", false,-1);
        tracep->declBit(c+1729,"top IDU_clock", false,-1);
        tracep->declBit(c+1730,"top IDU_reset", false,-1);
        tracep->declQuad(c+15,"top IDU_io_pc", false,-1, 63,0);
        tracep->declBit(c+17,"top IDU_io_fs_to_ds_valid", false,-1);
        tracep->declBit(c+29,"top IDU_io_ds_to_es_valid", false,-1);
        tracep->declBit(c+30,"top IDU_io_es_allowin", false,-1);
        tracep->declBus(c+18,"top IDU_io_from_fs_inst", false,-1, 31,0);
        tracep->declBit(c+12,"top IDU_io_br_taken", false,-1);
        tracep->declQuad(c+13,"top IDU_io_br_target", false,-1, 63,0);
        tracep->declBit(c+11,"top IDU_io_ds_allowin", false,-1);
        tracep->declBit(c+26,"top IDU_io_fence", false,-1);
        tracep->declBus(c+1,"top IDU_io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top IDU_io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top IDU_io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top IDU_io_rdata2", false,-1, 63,0);
        tracep->declQuad(c+31,"top IDU_io_to_es_pc", false,-1, 63,0);
        tracep->declBus(c+33,"top IDU_io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+34,"top IDU_io_src1", false,-1, 63,0);
        tracep->declQuad(c+36,"top IDU_io_src2", false,-1, 63,0);
        tracep->declBus(c+38,"top IDU_io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+39,"top IDU_io_store_data", false,-1, 63,0);
        tracep->declBit(c+41,"top IDU_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+42,"top IDU_io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+43,"top IDU_io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+44,"top IDU_io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBus(c+45,"top IDU_io_load_type", false,-1, 2,0);
        tracep->declBit(c+46,"top IDU_io_es_rf_we", false,-1);
        tracep->declBit(c+47,"top IDU_io_ms_rf_we", false,-1);
        tracep->declBit(c+48,"top IDU_io_ws_rf_we", false,-1);
        tracep->declBit(c+49,"top IDU_io_es_valid", false,-1);
        tracep->declBit(c+50,"top IDU_io_ms_valid", false,-1);
        tracep->declBit(c+51,"top IDU_io_ws_valid", false,-1);
        tracep->declBus(c+52,"top IDU_io_es_rf_dst", false,-1, 4,0);
        tracep->declBus(c+53,"top IDU_io_ms_rf_dst", false,-1, 4,0);
        tracep->declBus(c+8,"top IDU_io_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+54,"top IDU_io_ds_valid", false,-1);
        tracep->declBit(c+1729,"top EXU_clock", false,-1);
        tracep->declBit(c+1730,"top EXU_reset", false,-1);
        tracep->declQuad(c+31,"top EXU_io_pc", false,-1, 63,0);
        tracep->declBit(c+29,"top EXU_io_ds_to_es_valid", false,-1);
        tracep->declBit(c+55,"top EXU_io_ms_allowin", false,-1);
        tracep->declBit(c+30,"top EXU_io_es_allowin", false,-1);
        tracep->declBus(c+33,"top EXU_io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+34,"top EXU_io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+36,"top EXU_io_src2_value", false,-1, 63,0);
        tracep->declBus(c+38,"top EXU_io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+39,"top EXU_io_store_data", false,-1, 63,0);
        tracep->declBit(c+49,"top EXU_io_es_to_ms_valid", false,-1);
        tracep->declBus(c+45,"top EXU_io_load_type", false,-1, 2,0);
        tracep->declQuad(c+56,"top EXU_io_to_ms_pc", false,-1, 63,0);
        tracep->declQuad(c+58,"top EXU_io_to_ms_alures", false,-1, 63,0);
        tracep->declQuad(c+60,"top EXU_io_to_ms_store_data", false,-1, 63,0);
        tracep->declBit(c+62,"top EXU_io_to_ms_wen", false,-1);
        tracep->declBus(c+63,"top EXU_io_to_ms_wstrb", false,-1, 7,0);
        tracep->declBit(c+64,"top EXU_io_to_ms_ren", false,-1);
        tracep->declQuad(c+58,"top EXU_io_to_ms_maddr", false,-1, 63,0);
        tracep->declBus(c+52,"top EXU_io_to_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+46,"top EXU_io_to_ms_rf_we", false,-1);
        tracep->declBus(c+65,"top EXU_io_to_ms_load_type", false,-1, 2,0);
        tracep->declBit(c+41,"top EXU_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+42,"top EXU_io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+43,"top EXU_io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+44,"top EXU_io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBit(c+49,"top EXU_io_es_valid", false,-1);
        tracep->declBit(c+46,"top EXU_io_es_rf_we", false,-1);
        tracep->declBus(c+52,"top EXU_io_es_rf_dst", false,-1, 4,0);
        tracep->declBit(c+1729,"top LSU_clock", false,-1);
        tracep->declBit(c+1730,"top LSU_reset", false,-1);
        tracep->declQuad(c+56,"top LSU_io_pc", false,-1, 63,0);
        tracep->declBit(c+49,"top LSU_io_es_to_ms_valid", false,-1);
        tracep->declBit(c+55,"top LSU_io_ms_allowin", false,-1);
        tracep->declBit(c+46,"top LSU_io_rf_we", false,-1);
        tracep->declBus(c+52,"top LSU_io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+58,"top LSU_io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+60,"top LSU_io_store_data", false,-1, 63,0);
        tracep->declBus(c+65,"top LSU_io_load_type", false,-1, 2,0);
        tracep->declBit(c+62,"top LSU_io_wen", false,-1);
        tracep->declBus(c+63,"top LSU_io_wstrb", false,-1, 7,0);
        tracep->declBit(c+64,"top LSU_io_ren", false,-1);
        tracep->declQuad(c+58,"top LSU_io_maddr", false,-1, 63,0);
        tracep->declQuad(c+66,"top LSU_io_to_ws_pc", false,-1, 63,0);
        tracep->declQuad(c+68,"top LSU_io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+70,"top LSU_io_ms_to_ws_valid", false,-1);
        tracep->declBit(c+71,"top LSU_io_to_ws_rf_we", false,-1);
        tracep->declBus(c+53,"top LSU_io_to_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+50,"top LSU_io_ms_valid", false,-1);
        tracep->declBit(c+47,"top LSU_io_ms_rf_we", false,-1);
        tracep->declBus(c+53,"top LSU_io_ms_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+72,"top LSU_io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+74,"top LSU_io_axi_in_rvalid", false,-1);
        tracep->declBit(c+75,"top LSU_io_axi_in_wready", false,-1);
        tracep->declBus(c+76,"top LSU_io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+77,"top LSU_io_axi_out_arvalid", false,-1);
        tracep->declBus(c+76,"top LSU_io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBit(c+78,"top LSU_io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+79,"top LSU_io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+81,"top LSU_io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+82,"top LSU_io_axi_out_wvalid", false,-1);
        tracep->declBit(c+1729,"top WBU_clock", false,-1);
        tracep->declBit(c+1730,"top WBU_reset", false,-1);
        tracep->declQuad(c+66,"top WBU_io_pc", false,-1, 63,0);
        tracep->declBit(c+70,"top WBU_io_ms_to_ws_valid", false,-1);
        tracep->declQuad(c+68,"top WBU_io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+71,"top WBU_io_rf_we", false,-1);
        tracep->declBus(c+53,"top WBU_io_rf_dst", false,-1, 4,0);
        tracep->declBit(c+7,"top WBU_io_we", false,-1);
        tracep->declBus(c+8,"top WBU_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU_io_wdata", false,-1, 63,0);
        tracep->declBit(c+51,"top WBU_io_ws_valid", false,-1);
        tracep->declBit(c+48,"top WBU_io_ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU_io_ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+83,"top WBU_io_ws_pc", false,-1, 63,0);
        tracep->declBit(c+1729,"top arbiter_clock", false,-1);
        tracep->declBit(c+1730,"top arbiter_reset", false,-1);
        tracep->declBus(c+85,"top arbiter_io_ifu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+86,"top arbiter_io_ifu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+87,"top arbiter_io_ifu_axi_in_arvalid", false,-1);
        tracep->declBit(c+88,"top arbiter_io_ifu_axi_in_rready", false,-1);
        tracep->declQuad(c+89,"top arbiter_io_ifu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+91,"top arbiter_io_ifu_axi_out_rlast", false,-1);
        tracep->declBit(c+92,"top arbiter_io_ifu_axi_out_rvalid", false,-1);
        tracep->declBus(c+93,"top arbiter_io_lsu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+94,"top arbiter_io_lsu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+95,"top arbiter_io_lsu_axi_in_arvalid", false,-1);
        tracep->declBit(c+96,"top arbiter_io_lsu_axi_in_rready", false,-1);
        tracep->declBus(c+97,"top arbiter_io_lsu_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+98,"top arbiter_io_lsu_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+99,"top arbiter_io_lsu_axi_in_awvalid", false,-1);
        tracep->declQuad(c+100,"top arbiter_io_lsu_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+102,"top arbiter_io_lsu_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+103,"top arbiter_io_lsu_axi_in_wvalid", false,-1);
        tracep->declBit(c+104,"top arbiter_io_lsu_axi_in_bready", false,-1);
        tracep->declQuad(c+105,"top arbiter_io_lsu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+107,"top arbiter_io_lsu_axi_out_rlast", false,-1);
        tracep->declBit(c+108,"top arbiter_io_lsu_axi_out_rvalid", false,-1);
        tracep->declBit(c+109,"top arbiter_io_lsu_axi_out_wready", false,-1);
        tracep->declBit(c+110,"top arbiter_io_lsu_axi_out_bvalid", false,-1);
        tracep->declQuad(c+111,"top arbiter_io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+113,"top arbiter_io_axi_in_rlast", false,-1);
        tracep->declBit(c+114,"top arbiter_io_axi_in_rvalid", false,-1);
        tracep->declBit(c+115,"top arbiter_io_axi_in_wready", false,-1);
        tracep->declBit(c+116,"top arbiter_io_axi_in_bvalid", false,-1);
        tracep->declBus(c+117,"top arbiter_io_axi_out_araddr", false,-1, 31,0);
        tracep->declBus(c+118,"top arbiter_io_axi_out_arlen", false,-1, 7,0);
        tracep->declBit(c+119,"top arbiter_io_axi_out_arvalid", false,-1);
        tracep->declBit(c+120,"top arbiter_io_axi_out_rready", false,-1);
        tracep->declBus(c+121,"top arbiter_io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBus(c+122,"top arbiter_io_axi_out_awlen", false,-1, 7,0);
        tracep->declBit(c+123,"top arbiter_io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+124,"top arbiter_io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+126,"top arbiter_io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+127,"top arbiter_io_axi_out_wvalid", false,-1);
        tracep->declBit(c+128,"top arbiter_io_axi_out_bready", false,-1);
        tracep->declBit(c+1729,"top i_cache_clock", false,-1);
        tracep->declBit(c+1730,"top i_cache_reset", false,-1);
        tracep->declBus(c+23,"top i_cache_io_from_ifu_araddr", false,-1, 31,0);
        tracep->declBit(c+24,"top i_cache_io_from_ifu_arvalid", false,-1);
        tracep->declBit(c+25,"top i_cache_io_from_ifu_rready", false,-1);
        tracep->declQuad(c+19,"top i_cache_io_to_ifu_rdata", false,-1, 63,0);
        tracep->declBit(c+21,"top i_cache_io_to_ifu_rlast", false,-1);
        tracep->declBit(c+22,"top i_cache_io_to_ifu_rvalid", false,-1);
        tracep->declBus(c+85,"top i_cache_io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+86,"top i_cache_io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+87,"top i_cache_io_to_axi_arvalid", false,-1);
        tracep->declBit(c+88,"top i_cache_io_to_axi_rready", false,-1);
        tracep->declQuad(c+89,"top i_cache_io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+91,"top i_cache_io_from_axi_rlast", false,-1);
        tracep->declBit(c+92,"top i_cache_io_from_axi_rvalid", false,-1);
        tracep->declBit(c+28,"top i_cache_io_cache_init", false,-1);
        tracep->declBit(c+27,"top i_cache_io_clear_cache", false,-1);
        tracep->declBit(c+1729,"top d_cache_clock", false,-1);
        tracep->declBit(c+1730,"top d_cache_reset", false,-1);
        tracep->declBus(c+76,"top d_cache_io_from_lsu_araddr", false,-1, 31,0);
        tracep->declBit(c+77,"top d_cache_io_from_lsu_arvalid", false,-1);
        tracep->declBus(c+76,"top d_cache_io_from_lsu_awaddr", false,-1, 31,0);
        tracep->declBit(c+78,"top d_cache_io_from_lsu_awvalid", false,-1);
        tracep->declQuad(c+79,"top d_cache_io_from_lsu_wdata", false,-1, 63,0);
        tracep->declBus(c+81,"top d_cache_io_from_lsu_wstrb", false,-1, 7,0);
        tracep->declBit(c+82,"top d_cache_io_from_lsu_wvalid", false,-1);
        tracep->declQuad(c+72,"top d_cache_io_to_lsu_rdata", false,-1, 63,0);
        tracep->declBit(c+74,"top d_cache_io_to_lsu_rvalid", false,-1);
        tracep->declBit(c+75,"top d_cache_io_to_lsu_wready", false,-1);
        tracep->declBus(c+93,"top d_cache_io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+94,"top d_cache_io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+95,"top d_cache_io_to_axi_arvalid", false,-1);
        tracep->declBit(c+96,"top d_cache_io_to_axi_rready", false,-1);
        tracep->declBus(c+97,"top d_cache_io_to_axi_awaddr", false,-1, 31,0);
        tracep->declBus(c+98,"top d_cache_io_to_axi_awlen", false,-1, 7,0);
        tracep->declBit(c+99,"top d_cache_io_to_axi_awvalid", false,-1);
        tracep->declQuad(c+100,"top d_cache_io_to_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+102,"top d_cache_io_to_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+103,"top d_cache_io_to_axi_wvalid", false,-1);
        tracep->declBit(c+104,"top d_cache_io_to_axi_bready", false,-1);
        tracep->declQuad(c+105,"top d_cache_io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+107,"top d_cache_io_from_axi_rlast", false,-1);
        tracep->declBit(c+108,"top d_cache_io_from_axi_rvalid", false,-1);
        tracep->declBit(c+109,"top d_cache_io_from_axi_wready", false,-1);
        tracep->declBit(c+110,"top d_cache_io_from_axi_bvalid", false,-1);
        tracep->declBit(c+1729,"top axi_clock", false,-1);
        tracep->declBit(c+1730,"top axi_reset", false,-1);
        tracep->declBus(c+117,"top axi_io_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+118,"top axi_io_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+119,"top axi_io_axi_in_arvalid", false,-1);
        tracep->declBit(c+120,"top axi_io_axi_in_rready", false,-1);
        tracep->declBus(c+121,"top axi_io_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+122,"top axi_io_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+123,"top axi_io_axi_in_awvalid", false,-1);
        tracep->declQuad(c+124,"top axi_io_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+126,"top axi_io_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+127,"top axi_io_axi_in_wvalid", false,-1);
        tracep->declBit(c+128,"top axi_io_axi_in_bready", false,-1);
        tracep->declQuad(c+111,"top axi_io_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+113,"top axi_io_axi_out_rlast", false,-1);
        tracep->declBit(c+114,"top axi_io_axi_out_rvalid", false,-1);
        tracep->declBit(c+115,"top axi_io_axi_out_wready", false,-1);
        tracep->declBit(c+116,"top axi_io_axi_out_bvalid", false,-1);
        tracep->declBus(c+129,"top dpi_flag", false,-1, 31,0);
        tracep->declBus(c+130,"top dpi_ecall_flag", false,-1, 31,0);
        tracep->declQuad(c+131,"top dpi_pc", false,-1, 63,0);
        tracep->declBit(c+133,"top diff_step", false,-1);
        tracep->declBit(c+1729,"top Register clock", false,-1);
        tracep->declBus(c+1,"top Register io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top Register io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top Register io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top Register io_rdata2", false,-1, 63,0);
        tracep->declBit(c+7,"top Register io_we", false,-1);
        tracep->declBus(c+8,"top Register io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top Register io_wdata", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+134+i*2,"top Register Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+1735,"top Register Reg_io_rdata1_MPORT_en", false,-1);
        tracep->declBus(c+1,"top Register Reg_io_rdata1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+198,"top Register Reg_io_rdata1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_io_rdata2_MPORT_en", false,-1);
        tracep->declBus(c+2,"top Register Reg_io_rdata2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+200,"top Register Reg_io_rdata2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_0_MPORT_en", false,-1);
        tracep->declBus(c+1736,"top Register Reg_reg_trace_io_input_reg_0_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+202,"top Register Reg_reg_trace_io_input_reg_0_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_1_MPORT_en", false,-1);
        tracep->declBus(c+1737,"top Register Reg_reg_trace_io_input_reg_1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+204,"top Register Reg_reg_trace_io_input_reg_1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_2_MPORT_en", false,-1);
        tracep->declBus(c+1738,"top Register Reg_reg_trace_io_input_reg_2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+206,"top Register Reg_reg_trace_io_input_reg_2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_3_MPORT_en", false,-1);
        tracep->declBus(c+1739,"top Register Reg_reg_trace_io_input_reg_3_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+208,"top Register Reg_reg_trace_io_input_reg_3_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_4_MPORT_en", false,-1);
        tracep->declBus(c+1740,"top Register Reg_reg_trace_io_input_reg_4_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+210,"top Register Reg_reg_trace_io_input_reg_4_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_5_MPORT_en", false,-1);
        tracep->declBus(c+1741,"top Register Reg_reg_trace_io_input_reg_5_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+212,"top Register Reg_reg_trace_io_input_reg_5_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_6_MPORT_en", false,-1);
        tracep->declBus(c+1742,"top Register Reg_reg_trace_io_input_reg_6_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+214,"top Register Reg_reg_trace_io_input_reg_6_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_7_MPORT_en", false,-1);
        tracep->declBus(c+1743,"top Register Reg_reg_trace_io_input_reg_7_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+216,"top Register Reg_reg_trace_io_input_reg_7_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_8_MPORT_en", false,-1);
        tracep->declBus(c+1744,"top Register Reg_reg_trace_io_input_reg_8_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+218,"top Register Reg_reg_trace_io_input_reg_8_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_9_MPORT_en", false,-1);
        tracep->declBus(c+1745,"top Register Reg_reg_trace_io_input_reg_9_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+220,"top Register Reg_reg_trace_io_input_reg_9_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_10_MPORT_en", false,-1);
        tracep->declBus(c+1746,"top Register Reg_reg_trace_io_input_reg_10_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+222,"top Register Reg_reg_trace_io_input_reg_10_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_11_MPORT_en", false,-1);
        tracep->declBus(c+1747,"top Register Reg_reg_trace_io_input_reg_11_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+224,"top Register Reg_reg_trace_io_input_reg_11_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_12_MPORT_en", false,-1);
        tracep->declBus(c+1748,"top Register Reg_reg_trace_io_input_reg_12_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+226,"top Register Reg_reg_trace_io_input_reg_12_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_13_MPORT_en", false,-1);
        tracep->declBus(c+1749,"top Register Reg_reg_trace_io_input_reg_13_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+228,"top Register Reg_reg_trace_io_input_reg_13_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_14_MPORT_en", false,-1);
        tracep->declBus(c+1750,"top Register Reg_reg_trace_io_input_reg_14_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+230,"top Register Reg_reg_trace_io_input_reg_14_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_15_MPORT_en", false,-1);
        tracep->declBus(c+1751,"top Register Reg_reg_trace_io_input_reg_15_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+232,"top Register Reg_reg_trace_io_input_reg_15_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_16_MPORT_en", false,-1);
        tracep->declBus(c+1752,"top Register Reg_reg_trace_io_input_reg_16_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+234,"top Register Reg_reg_trace_io_input_reg_16_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_17_MPORT_en", false,-1);
        tracep->declBus(c+1753,"top Register Reg_reg_trace_io_input_reg_17_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+236,"top Register Reg_reg_trace_io_input_reg_17_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_18_MPORT_en", false,-1);
        tracep->declBus(c+1754,"top Register Reg_reg_trace_io_input_reg_18_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+238,"top Register Reg_reg_trace_io_input_reg_18_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_19_MPORT_en", false,-1);
        tracep->declBus(c+1755,"top Register Reg_reg_trace_io_input_reg_19_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+240,"top Register Reg_reg_trace_io_input_reg_19_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_20_MPORT_en", false,-1);
        tracep->declBus(c+1756,"top Register Reg_reg_trace_io_input_reg_20_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+242,"top Register Reg_reg_trace_io_input_reg_20_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_21_MPORT_en", false,-1);
        tracep->declBus(c+1757,"top Register Reg_reg_trace_io_input_reg_21_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+244,"top Register Reg_reg_trace_io_input_reg_21_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_22_MPORT_en", false,-1);
        tracep->declBus(c+1758,"top Register Reg_reg_trace_io_input_reg_22_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+246,"top Register Reg_reg_trace_io_input_reg_22_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_23_MPORT_en", false,-1);
        tracep->declBus(c+1759,"top Register Reg_reg_trace_io_input_reg_23_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+248,"top Register Reg_reg_trace_io_input_reg_23_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_24_MPORT_en", false,-1);
        tracep->declBus(c+1760,"top Register Reg_reg_trace_io_input_reg_24_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+250,"top Register Reg_reg_trace_io_input_reg_24_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_25_MPORT_en", false,-1);
        tracep->declBus(c+1761,"top Register Reg_reg_trace_io_input_reg_25_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+252,"top Register Reg_reg_trace_io_input_reg_25_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_26_MPORT_en", false,-1);
        tracep->declBus(c+1762,"top Register Reg_reg_trace_io_input_reg_26_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+254,"top Register Reg_reg_trace_io_input_reg_26_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_27_MPORT_en", false,-1);
        tracep->declBus(c+1763,"top Register Reg_reg_trace_io_input_reg_27_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+256,"top Register Reg_reg_trace_io_input_reg_27_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_28_MPORT_en", false,-1);
        tracep->declBus(c+1764,"top Register Reg_reg_trace_io_input_reg_28_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+258,"top Register Reg_reg_trace_io_input_reg_28_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_29_MPORT_en", false,-1);
        tracep->declBus(c+1765,"top Register Reg_reg_trace_io_input_reg_29_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+260,"top Register Reg_reg_trace_io_input_reg_29_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_30_MPORT_en", false,-1);
        tracep->declBus(c+1766,"top Register Reg_reg_trace_io_input_reg_30_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+262,"top Register Reg_reg_trace_io_input_reg_30_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1735,"top Register Reg_reg_trace_io_input_reg_31_MPORT_en", false,-1);
        tracep->declBus(c+1767,"top Register Reg_reg_trace_io_input_reg_31_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+264,"top Register Reg_reg_trace_io_input_reg_31_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+9,"top Register Reg_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+8,"top Register Reg_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+1735,"top Register Reg_MPORT_mask", false,-1);
        tracep->declBit(c+266,"top Register Reg_MPORT_en", false,-1);
        tracep->declQuad(c+202,"top Register reg_trace_input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+204,"top Register reg_trace_input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+206,"top Register reg_trace_input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+208,"top Register reg_trace_input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+210,"top Register reg_trace_input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+212,"top Register reg_trace_input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+214,"top Register reg_trace_input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+216,"top Register reg_trace_input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+218,"top Register reg_trace_input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+220,"top Register reg_trace_input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+222,"top Register reg_trace_input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+224,"top Register reg_trace_input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+226,"top Register reg_trace_input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+228,"top Register reg_trace_input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+230,"top Register reg_trace_input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+232,"top Register reg_trace_input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+234,"top Register reg_trace_input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+236,"top Register reg_trace_input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+238,"top Register reg_trace_input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+240,"top Register reg_trace_input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+242,"top Register reg_trace_input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+244,"top Register reg_trace_input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+246,"top Register reg_trace_input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+248,"top Register reg_trace_input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+250,"top Register reg_trace_input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+252,"top Register reg_trace_input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+254,"top Register reg_trace_input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+256,"top Register reg_trace_input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+258,"top Register reg_trace_input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+260,"top Register reg_trace_input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+262,"top Register reg_trace_input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+264,"top Register reg_trace_input_reg_31", false,-1, 63,0);
        tracep->declQuad(c+202,"top Register reg_trace input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+204,"top Register reg_trace input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+206,"top Register reg_trace input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+208,"top Register reg_trace input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+210,"top Register reg_trace input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+212,"top Register reg_trace input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+214,"top Register reg_trace input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+216,"top Register reg_trace input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+218,"top Register reg_trace input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+220,"top Register reg_trace input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+222,"top Register reg_trace input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+224,"top Register reg_trace input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+226,"top Register reg_trace input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+228,"top Register reg_trace input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+230,"top Register reg_trace input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+232,"top Register reg_trace input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+234,"top Register reg_trace input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+236,"top Register reg_trace input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+238,"top Register reg_trace input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+240,"top Register reg_trace input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+242,"top Register reg_trace input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+244,"top Register reg_trace input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+246,"top Register reg_trace input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+248,"top Register reg_trace input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+250,"top Register reg_trace input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+252,"top Register reg_trace input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+254,"top Register reg_trace input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+256,"top Register reg_trace input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+258,"top Register reg_trace input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+260,"top Register reg_trace input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+262,"top Register reg_trace input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+264,"top Register reg_trace input_reg_31", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+267+i*2,"top Register reg_trace traceregs", true,(i+0), 63,0);}}
        tracep->declBit(c+1729,"top IFU clock", false,-1);
        tracep->declBit(c+1730,"top IFU reset", false,-1);
        tracep->declBit(c+11,"top IFU io_ds_allowin", false,-1);
        tracep->declBit(c+12,"top IFU io_br_taken", false,-1);
        tracep->declQuad(c+13,"top IFU io_br_target", false,-1, 63,0);
        tracep->declQuad(c+15,"top IFU io_to_ds_pc", false,-1, 63,0);
        tracep->declBit(c+17,"top IFU io_fs_to_ds_valid", false,-1);
        tracep->declBus(c+18,"top IFU io_inst", false,-1, 31,0);
        tracep->declQuad(c+19,"top IFU io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+21,"top IFU io_axi_in_rlast", false,-1);
        tracep->declBit(c+22,"top IFU io_axi_in_rvalid", false,-1);
        tracep->declBus(c+23,"top IFU io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+24,"top IFU io_axi_out_arvalid", false,-1);
        tracep->declBit(c+25,"top IFU io_axi_out_rready", false,-1);
        tracep->declBit(c+26,"top IFU io_fence", false,-1);
        tracep->declBit(c+27,"top IFU io_clear_cache", false,-1);
        tracep->declBit(c+28,"top IFU io_cache_init", false,-1);
        tracep->declBit(c+331,"top IFU fs_valid", false,-1);
        tracep->declBit(c+332,"top IFU fs_ready_go", false,-1);
        tracep->declBit(c+333,"top IFU cache_init", false,-1);
        tracep->declBit(c+334,"top IFU fs_to_ds_valid", false,-1);
        tracep->declQuad(c+15,"top IFU fs_pc", false,-1, 63,0);
        tracep->declBus(c+18,"top IFU fs_inst", false,-1, 31,0);
        tracep->declQuad(c+335,"top IFU seq_pc", false,-1, 63,0);
        tracep->declBit(c+337,"top IFU fs_allowin", false,-1);
        tracep->declBit(c+25,"top IFU inst_ready", false,-1);
        tracep->declBit(c+1729,"top IDU clock", false,-1);
        tracep->declBit(c+1730,"top IDU reset", false,-1);
        tracep->declQuad(c+15,"top IDU io_pc", false,-1, 63,0);
        tracep->declBit(c+17,"top IDU io_fs_to_ds_valid", false,-1);
        tracep->declBit(c+29,"top IDU io_ds_to_es_valid", false,-1);
        tracep->declBit(c+30,"top IDU io_es_allowin", false,-1);
        tracep->declBus(c+18,"top IDU io_from_fs_inst", false,-1, 31,0);
        tracep->declBit(c+12,"top IDU io_br_taken", false,-1);
        tracep->declQuad(c+13,"top IDU io_br_target", false,-1, 63,0);
        tracep->declBit(c+11,"top IDU io_ds_allowin", false,-1);
        tracep->declBit(c+26,"top IDU io_fence", false,-1);
        tracep->declBus(c+1,"top IDU io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top IDU io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top IDU io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top IDU io_rdata2", false,-1, 63,0);
        tracep->declQuad(c+31,"top IDU io_to_es_pc", false,-1, 63,0);
        tracep->declBus(c+33,"top IDU io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+34,"top IDU io_src1", false,-1, 63,0);
        tracep->declQuad(c+36,"top IDU io_src2", false,-1, 63,0);
        tracep->declBus(c+38,"top IDU io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+39,"top IDU io_store_data", false,-1, 63,0);
        tracep->declBit(c+41,"top IDU io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+42,"top IDU io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+43,"top IDU io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+44,"top IDU io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBus(c+45,"top IDU io_load_type", false,-1, 2,0);
        tracep->declBit(c+46,"top IDU io_es_rf_we", false,-1);
        tracep->declBit(c+47,"top IDU io_ms_rf_we", false,-1);
        tracep->declBit(c+48,"top IDU io_ws_rf_we", false,-1);
        tracep->declBit(c+49,"top IDU io_es_valid", false,-1);
        tracep->declBit(c+50,"top IDU io_ms_valid", false,-1);
        tracep->declBit(c+51,"top IDU io_ws_valid", false,-1);
        tracep->declBus(c+52,"top IDU io_es_rf_dst", false,-1, 4,0);
        tracep->declBus(c+53,"top IDU io_ms_rf_dst", false,-1, 4,0);
        tracep->declBus(c+8,"top IDU io_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+54,"top IDU io_ds_valid", false,-1);
        tracep->declBit(c+1729,"top IDU csr_reg_clock", false,-1);
        tracep->declBit(c+338,"top IDU csr_reg_io_wen1", false,-1);
        tracep->declBit(c+339,"top IDU csr_reg_io_wen2", false,-1);
        tracep->declBus(c+340,"top IDU csr_reg_io_waddr1", false,-1, 1,0);
        tracep->declQuad(c+341,"top IDU csr_reg_io_wdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top IDU csr_reg_io_wdata2", false,-1, 63,0);
        tracep->declBus(c+343,"top IDU csr_reg_io_raddr", false,-1, 1,0);
        tracep->declQuad(c+344,"top IDU csr_reg_io_rdata", false,-1, 63,0);
        tracep->declBit(c+54,"top IDU ds_valid", false,-1);
        tracep->declQuad(c+31,"top IDU ds_pc", false,-1, 63,0);
        tracep->declBus(c+346,"top IDU inst", false,-1, 31,0);
        tracep->declBit(c+347,"top IDU br_taken_cancel", false,-1);
        tracep->declBit(c+348,"top IDU src1_is_pc", false,-1);
        tracep->declBus(c+349,"top IDU inst_type", false,-1, 31,0);
        tracep->declBus(c+350,"top IDU csr_write", false,-1, 1,0);
        tracep->declBus(c+1,"top IDU rs1", false,-1, 4,0);
        tracep->declBit(c+351,"top IDU src2_is_imm", false,-1);
        tracep->declBus(c+2,"top IDU rs2", false,-1, 4,0);
        tracep->declBit(c+352,"top IDU conflict", false,-1);
        tracep->declBus(c+33,"top IDU ALUop", false,-1, 31,0);
        tracep->declBit(c+353,"top IDU ds_ready_go", false,-1);
        tracep->declBit(c+354,"top IDU ds_allowin", false,-1);
        tracep->declBit(c+355,"top IDU br_taken", false,-1);
        tracep->declBus(c+38,"top IDU rd", false,-1, 4,0);
        tracep->declBit(c+26,"top IDU fence", false,-1);
        tracep->declBus(c+356,"top IDU imm_imm", false,-1, 11,0);
        tracep->declBus(c+357,"top IDU imm_imm_1", false,-1, 19,0);
        tracep->declBus(c+358,"top IDU imm_imm_2", false,-1, 19,0);
        tracep->declBus(c+359,"top IDU imm_imm_3", false,-1, 11,0);
        tracep->declBus(c+360,"top IDU imm_imm_4", false,-1, 11,0);
        tracep->declQuad(c+361,"top IDU imm", false,-1, 63,0);
        tracep->declBus(c+363,"top IDU csr_index", false,-1, 1,0);
        tracep->declQuad(c+364,"top IDU csr_wdata", false,-1, 63,0);
        tracep->declQuad(c+366,"top IDU src1", false,-1, 63,0);
        tracep->declQuad(c+36,"top IDU src2", false,-1, 63,0);
        tracep->declBit(c+1729,"top IDU csr_reg clock", false,-1);
        tracep->declBit(c+338,"top IDU csr_reg io_wen1", false,-1);
        tracep->declBit(c+339,"top IDU csr_reg io_wen2", false,-1);
        tracep->declBus(c+340,"top IDU csr_reg io_waddr1", false,-1, 1,0);
        tracep->declQuad(c+341,"top IDU csr_reg io_wdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top IDU csr_reg io_wdata2", false,-1, 63,0);
        tracep->declBus(c+343,"top IDU csr_reg io_raddr", false,-1, 1,0);
        tracep->declQuad(c+344,"top IDU csr_reg io_rdata", false,-1, 63,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+368+i*2,"top IDU csr_reg CSR_Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+1735,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_en", false,-1);
        tracep->declBus(c+343,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+344,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+341,"top IDU csr_reg CSR_Reg_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+340,"top IDU csr_reg CSR_Reg_MPORT_addr", false,-1, 1,0);
        tracep->declBit(c+1735,"top IDU csr_reg CSR_Reg_MPORT_mask", false,-1);
        tracep->declBit(c+338,"top IDU csr_reg CSR_Reg_MPORT_en", false,-1);
        tracep->declQuad(c+5,"top IDU csr_reg CSR_Reg_MPORT_1_data", false,-1, 63,0);
        tracep->declBus(c+1768,"top IDU csr_reg CSR_Reg_MPORT_1_addr", false,-1, 1,0);
        tracep->declBit(c+1735,"top IDU csr_reg CSR_Reg_MPORT_1_mask", false,-1);
        tracep->declBit(c+339,"top IDU csr_reg CSR_Reg_MPORT_1_en", false,-1);
        tracep->declBit(c+1729,"top EXU clock", false,-1);
        tracep->declBit(c+1730,"top EXU reset", false,-1);
        tracep->declQuad(c+31,"top EXU io_pc", false,-1, 63,0);
        tracep->declBit(c+29,"top EXU io_ds_to_es_valid", false,-1);
        tracep->declBit(c+55,"top EXU io_ms_allowin", false,-1);
        tracep->declBit(c+30,"top EXU io_es_allowin", false,-1);
        tracep->declBus(c+33,"top EXU io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+34,"top EXU io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+36,"top EXU io_src2_value", false,-1, 63,0);
        tracep->declBus(c+38,"top EXU io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+39,"top EXU io_store_data", false,-1, 63,0);
        tracep->declBit(c+49,"top EXU io_es_to_ms_valid", false,-1);
        tracep->declBus(c+45,"top EXU io_load_type", false,-1, 2,0);
        tracep->declQuad(c+56,"top EXU io_to_ms_pc", false,-1, 63,0);
        tracep->declQuad(c+58,"top EXU io_to_ms_alures", false,-1, 63,0);
        tracep->declQuad(c+60,"top EXU io_to_ms_store_data", false,-1, 63,0);
        tracep->declBit(c+62,"top EXU io_to_ms_wen", false,-1);
        tracep->declBus(c+63,"top EXU io_to_ms_wstrb", false,-1, 7,0);
        tracep->declBit(c+64,"top EXU io_to_ms_ren", false,-1);
        tracep->declQuad(c+58,"top EXU io_to_ms_maddr", false,-1, 63,0);
        tracep->declBus(c+52,"top EXU io_to_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+46,"top EXU io_to_ms_rf_we", false,-1);
        tracep->declBus(c+65,"top EXU io_to_ms_load_type", false,-1, 2,0);
        tracep->declBit(c+41,"top EXU io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+42,"top EXU io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+43,"top EXU io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+44,"top EXU io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBit(c+49,"top EXU io_es_valid", false,-1);
        tracep->declBit(c+46,"top EXU io_es_rf_we", false,-1);
        tracep->declBus(c+52,"top EXU io_es_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+376,"top EXU ALU_io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+378,"top EXU ALU_io_src2_value", false,-1, 63,0);
        tracep->declBus(c+380,"top EXU ALU_io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+58,"top EXU ALU_io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+56,"top EXU es_pc", false,-1, 63,0);
        tracep->declBit(c+49,"top EXU es_valid", false,-1);
        tracep->declBus(c+52,"top EXU es_rd", false,-1, 4,0);
        tracep->declBit(c+46,"top EXU es_rf_we", false,-1);
        tracep->declQuad(c+381,"top EXU src1_value", false,-1, 63,0);
        tracep->declQuad(c+378,"top EXU src2_value", false,-1, 63,0);
        tracep->declQuad(c+60,"top EXU store_data", false,-1, 63,0);
        tracep->declBus(c+63,"top EXU st_wstrb", false,-1, 7,0);
        tracep->declBit(c+62,"top EXU st_we", false,-1);
        tracep->declBit(c+64,"top EXU ld_we", false,-1);
        tracep->declBus(c+380,"top EXU ALUop", false,-1, 31,0);
        tracep->declBus(c+65,"top EXU load_type", false,-1, 2,0);
        tracep->declBit(c+30,"top EXU es_allowin", false,-1);
        tracep->declQuad(c+376,"top EXU ALU io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+378,"top EXU ALU io_src2_value", false,-1, 63,0);
        tracep->declBus(c+380,"top EXU ALU io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+58,"top EXU ALU io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+383,"top EXU ALU add_res", false,-1, 63,0);
        tracep->declQuad(c+385,"top EXU ALU sub_res", false,-1, 63,0);
        tracep->declQuad(c+387,"top EXU ALU sra_res", false,-1, 63,0);
        tracep->declQuad(c+389,"top EXU ALU srl_res", false,-1, 63,0);
        tracep->declArray(c+391,"top EXU ALU sll_res", false,-1, 126,0);
        tracep->declBus(c+395,"top EXU ALU sraw_res", false,-1, 31,0);
        tracep->declBus(c+396,"top EXU ALU srlw_res", false,-1, 31,0);
        tracep->declQuad(c+397,"top EXU ALU sllw_res", false,-1, 62,0);
        tracep->declQuad(c+399,"top EXU ALU or_res", false,-1, 63,0);
        tracep->declQuad(c+401,"top EXU ALU xor_res", false,-1, 63,0);
        tracep->declQuad(c+403,"top EXU ALU and_res", false,-1, 63,0);
        tracep->declQuad(c+405,"top EXU ALU mlu_res", false,-1, 63,0);
        tracep->declBus(c+407,"top EXU ALU mluw_res", false,-1, 31,0);
        tracep->declBus(c+408,"top EXU ALU divw_res", false,-1, 31,0);
        tracep->declBus(c+409,"top EXU ALU divuw_res", false,-1, 31,0);
        tracep->declBus(c+410,"top EXU ALU remw_res", false,-1, 31,0);
        tracep->declBus(c+411,"top EXU ALU remuw_res", false,-1, 31,0);
        tracep->declArray(c+412,"top EXU ALU div_res", false,-1, 64,0);
        tracep->declQuad(c+415,"top EXU ALU divu_res", false,-1, 63,0);
        tracep->declQuad(c+417,"top EXU ALU rem_res", false,-1, 63,0);
        tracep->declQuad(c+419,"top EXU ALU remu_res", false,-1, 63,0);
        tracep->declArray(c+421,"top EXU ALU alu_res", false,-1, 126,0);
        tracep->declBit(c+1729,"top LSU clock", false,-1);
        tracep->declBit(c+1730,"top LSU reset", false,-1);
        tracep->declQuad(c+56,"top LSU io_pc", false,-1, 63,0);
        tracep->declBit(c+49,"top LSU io_es_to_ms_valid", false,-1);
        tracep->declBit(c+55,"top LSU io_ms_allowin", false,-1);
        tracep->declBit(c+46,"top LSU io_rf_we", false,-1);
        tracep->declBus(c+52,"top LSU io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+58,"top LSU io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+60,"top LSU io_store_data", false,-1, 63,0);
        tracep->declBus(c+65,"top LSU io_load_type", false,-1, 2,0);
        tracep->declBit(c+62,"top LSU io_wen", false,-1);
        tracep->declBus(c+63,"top LSU io_wstrb", false,-1, 7,0);
        tracep->declBit(c+64,"top LSU io_ren", false,-1);
        tracep->declQuad(c+58,"top LSU io_maddr", false,-1, 63,0);
        tracep->declQuad(c+66,"top LSU io_to_ws_pc", false,-1, 63,0);
        tracep->declQuad(c+68,"top LSU io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+70,"top LSU io_ms_to_ws_valid", false,-1);
        tracep->declBit(c+71,"top LSU io_to_ws_rf_we", false,-1);
        tracep->declBus(c+53,"top LSU io_to_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+50,"top LSU io_ms_valid", false,-1);
        tracep->declBit(c+47,"top LSU io_ms_rf_we", false,-1);
        tracep->declBus(c+53,"top LSU io_ms_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+72,"top LSU io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+74,"top LSU io_axi_in_rvalid", false,-1);
        tracep->declBit(c+75,"top LSU io_axi_in_wready", false,-1);
        tracep->declBus(c+76,"top LSU io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+77,"top LSU io_axi_out_arvalid", false,-1);
        tracep->declBus(c+76,"top LSU io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBit(c+78,"top LSU io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+79,"top LSU io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+81,"top LSU io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+82,"top LSU io_axi_out_wvalid", false,-1);
        tracep->declBit(c+50,"top LSU ms_valid", false,-1);
        tracep->declQuad(c+66,"top LSU ms_pc", false,-1, 63,0);
        tracep->declBit(c+425,"top LSU ms_ready_go", false,-1);
        tracep->declBit(c+71,"top LSU ms_rf_we", false,-1);
        tracep->declBus(c+53,"top LSU ms_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+426,"top LSU ms_res", false,-1, 63,0);
        tracep->declQuad(c+79,"top LSU store_data", false,-1, 63,0);
        tracep->declBit(c+82,"top LSU wen", false,-1);
        tracep->declBus(c+81,"top LSU wstrb", false,-1, 7,0);
        tracep->declBit(c+428,"top LSU ren", false,-1);
        tracep->declQuad(c+429,"top LSU maddr", false,-1, 63,0);
        tracep->declBus(c+431,"top LSU load_type", false,-1, 2,0);
        tracep->declBit(c+55,"top LSU ms_allowin", false,-1);
        tracep->declQuad(c+432,"top LSU mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+434,"top LSU rdata", false,-1, 63,0);
        tracep->declBit(c+1729,"top WBU clock", false,-1);
        tracep->declBit(c+1730,"top WBU reset", false,-1);
        tracep->declQuad(c+66,"top WBU io_pc", false,-1, 63,0);
        tracep->declBit(c+70,"top WBU io_ms_to_ws_valid", false,-1);
        tracep->declQuad(c+68,"top WBU io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+71,"top WBU io_rf_we", false,-1);
        tracep->declBus(c+53,"top WBU io_rf_dst", false,-1, 4,0);
        tracep->declBit(c+7,"top WBU io_we", false,-1);
        tracep->declBus(c+8,"top WBU io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU io_wdata", false,-1, 63,0);
        tracep->declBit(c+51,"top WBU io_ws_valid", false,-1);
        tracep->declBit(c+48,"top WBU io_ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU io_ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+83,"top WBU io_ws_pc", false,-1, 63,0);
        tracep->declBit(c+51,"top WBU ws_valid", false,-1);
        tracep->declQuad(c+83,"top WBU ws_pc", false,-1, 63,0);
        tracep->declBit(c+48,"top WBU ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU ws_res", false,-1, 63,0);
        tracep->declBit(c+1729,"top arbiter clock", false,-1);
        tracep->declBit(c+1730,"top arbiter reset", false,-1);
        tracep->declBus(c+85,"top arbiter io_ifu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+86,"top arbiter io_ifu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+87,"top arbiter io_ifu_axi_in_arvalid", false,-1);
        tracep->declBit(c+88,"top arbiter io_ifu_axi_in_rready", false,-1);
        tracep->declQuad(c+89,"top arbiter io_ifu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+91,"top arbiter io_ifu_axi_out_rlast", false,-1);
        tracep->declBit(c+92,"top arbiter io_ifu_axi_out_rvalid", false,-1);
        tracep->declBus(c+93,"top arbiter io_lsu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+94,"top arbiter io_lsu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+95,"top arbiter io_lsu_axi_in_arvalid", false,-1);
        tracep->declBit(c+96,"top arbiter io_lsu_axi_in_rready", false,-1);
        tracep->declBus(c+97,"top arbiter io_lsu_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+98,"top arbiter io_lsu_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+99,"top arbiter io_lsu_axi_in_awvalid", false,-1);
        tracep->declQuad(c+100,"top arbiter io_lsu_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+102,"top arbiter io_lsu_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+103,"top arbiter io_lsu_axi_in_wvalid", false,-1);
        tracep->declBit(c+104,"top arbiter io_lsu_axi_in_bready", false,-1);
        tracep->declQuad(c+105,"top arbiter io_lsu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+107,"top arbiter io_lsu_axi_out_rlast", false,-1);
        tracep->declBit(c+108,"top arbiter io_lsu_axi_out_rvalid", false,-1);
        tracep->declBit(c+109,"top arbiter io_lsu_axi_out_wready", false,-1);
        tracep->declBit(c+110,"top arbiter io_lsu_axi_out_bvalid", false,-1);
        tracep->declQuad(c+111,"top arbiter io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+113,"top arbiter io_axi_in_rlast", false,-1);
        tracep->declBit(c+114,"top arbiter io_axi_in_rvalid", false,-1);
        tracep->declBit(c+115,"top arbiter io_axi_in_wready", false,-1);
        tracep->declBit(c+116,"top arbiter io_axi_in_bvalid", false,-1);
        tracep->declBus(c+117,"top arbiter io_axi_out_araddr", false,-1, 31,0);
        tracep->declBus(c+118,"top arbiter io_axi_out_arlen", false,-1, 7,0);
        tracep->declBit(c+119,"top arbiter io_axi_out_arvalid", false,-1);
        tracep->declBit(c+120,"top arbiter io_axi_out_rready", false,-1);
        tracep->declBus(c+121,"top arbiter io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBus(c+122,"top arbiter io_axi_out_awlen", false,-1, 7,0);
        tracep->declBit(c+123,"top arbiter io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+124,"top arbiter io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+126,"top arbiter io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+127,"top arbiter io_axi_out_wvalid", false,-1);
        tracep->declBit(c+128,"top arbiter io_axi_out_bready", false,-1);
        tracep->declBus(c+436,"top arbiter state", false,-1, 1,0);
        tracep->declBit(c+1729,"top i_cache clock", false,-1);
        tracep->declBit(c+1730,"top i_cache reset", false,-1);
        tracep->declBus(c+23,"top i_cache io_from_ifu_araddr", false,-1, 31,0);
        tracep->declBit(c+24,"top i_cache io_from_ifu_arvalid", false,-1);
        tracep->declBit(c+25,"top i_cache io_from_ifu_rready", false,-1);
        tracep->declQuad(c+19,"top i_cache io_to_ifu_rdata", false,-1, 63,0);
        tracep->declBit(c+21,"top i_cache io_to_ifu_rlast", false,-1);
        tracep->declBit(c+22,"top i_cache io_to_ifu_rvalid", false,-1);
        tracep->declBus(c+85,"top i_cache io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+86,"top i_cache io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+87,"top i_cache io_to_axi_arvalid", false,-1);
        tracep->declBit(c+88,"top i_cache io_to_axi_rready", false,-1);
        tracep->declQuad(c+89,"top i_cache io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+91,"top i_cache io_from_axi_rlast", false,-1);
        tracep->declBit(c+92,"top i_cache io_from_axi_rvalid", false,-1);
        tracep->declBit(c+28,"top i_cache io_cache_init", false,-1);
        tracep->declBit(c+27,"top i_cache io_clear_cache", false,-1);
        tracep->declArray(c+437,"top i_cache ram_0_0", false,-1, 511,0);
        tracep->declArray(c+453,"top i_cache ram_0_1", false,-1, 511,0);
        tracep->declArray(c+469,"top i_cache ram_0_2", false,-1, 511,0);
        tracep->declArray(c+485,"top i_cache ram_0_3", false,-1, 511,0);
        tracep->declArray(c+501,"top i_cache ram_0_4", false,-1, 511,0);
        tracep->declArray(c+517,"top i_cache ram_0_5", false,-1, 511,0);
        tracep->declArray(c+533,"top i_cache ram_0_6", false,-1, 511,0);
        tracep->declArray(c+549,"top i_cache ram_0_7", false,-1, 511,0);
        tracep->declArray(c+565,"top i_cache ram_0_8", false,-1, 511,0);
        tracep->declArray(c+581,"top i_cache ram_0_9", false,-1, 511,0);
        tracep->declArray(c+597,"top i_cache ram_0_10", false,-1, 511,0);
        tracep->declArray(c+613,"top i_cache ram_0_11", false,-1, 511,0);
        tracep->declArray(c+629,"top i_cache ram_0_12", false,-1, 511,0);
        tracep->declArray(c+645,"top i_cache ram_0_13", false,-1, 511,0);
        tracep->declArray(c+661,"top i_cache ram_0_14", false,-1, 511,0);
        tracep->declArray(c+677,"top i_cache ram_0_15", false,-1, 511,0);
        tracep->declArray(c+693,"top i_cache ram_1_0", false,-1, 511,0);
        tracep->declArray(c+709,"top i_cache ram_1_1", false,-1, 511,0);
        tracep->declArray(c+725,"top i_cache ram_1_2", false,-1, 511,0);
        tracep->declArray(c+741,"top i_cache ram_1_3", false,-1, 511,0);
        tracep->declArray(c+757,"top i_cache ram_1_4", false,-1, 511,0);
        tracep->declArray(c+773,"top i_cache ram_1_5", false,-1, 511,0);
        tracep->declArray(c+789,"top i_cache ram_1_6", false,-1, 511,0);
        tracep->declArray(c+805,"top i_cache ram_1_7", false,-1, 511,0);
        tracep->declArray(c+821,"top i_cache ram_1_8", false,-1, 511,0);
        tracep->declArray(c+837,"top i_cache ram_1_9", false,-1, 511,0);
        tracep->declArray(c+853,"top i_cache ram_1_10", false,-1, 511,0);
        tracep->declArray(c+869,"top i_cache ram_1_11", false,-1, 511,0);
        tracep->declArray(c+885,"top i_cache ram_1_12", false,-1, 511,0);
        tracep->declArray(c+901,"top i_cache ram_1_13", false,-1, 511,0);
        tracep->declArray(c+917,"top i_cache ram_1_14", false,-1, 511,0);
        tracep->declArray(c+933,"top i_cache ram_1_15", false,-1, 511,0);
        tracep->declBus(c+949,"top i_cache tag_0_0", false,-1, 31,0);
        tracep->declBus(c+950,"top i_cache tag_0_1", false,-1, 31,0);
        tracep->declBus(c+951,"top i_cache tag_0_2", false,-1, 31,0);
        tracep->declBus(c+952,"top i_cache tag_0_3", false,-1, 31,0);
        tracep->declBus(c+953,"top i_cache tag_0_4", false,-1, 31,0);
        tracep->declBus(c+954,"top i_cache tag_0_5", false,-1, 31,0);
        tracep->declBus(c+955,"top i_cache tag_0_6", false,-1, 31,0);
        tracep->declBus(c+956,"top i_cache tag_0_7", false,-1, 31,0);
        tracep->declBus(c+957,"top i_cache tag_0_8", false,-1, 31,0);
        tracep->declBus(c+958,"top i_cache tag_0_9", false,-1, 31,0);
        tracep->declBus(c+959,"top i_cache tag_0_10", false,-1, 31,0);
        tracep->declBus(c+960,"top i_cache tag_0_11", false,-1, 31,0);
        tracep->declBus(c+961,"top i_cache tag_0_12", false,-1, 31,0);
        tracep->declBus(c+962,"top i_cache tag_0_13", false,-1, 31,0);
        tracep->declBus(c+963,"top i_cache tag_0_14", false,-1, 31,0);
        tracep->declBus(c+964,"top i_cache tag_0_15", false,-1, 31,0);
        tracep->declBus(c+965,"top i_cache tag_1_0", false,-1, 31,0);
        tracep->declBus(c+966,"top i_cache tag_1_1", false,-1, 31,0);
        tracep->declBus(c+967,"top i_cache tag_1_2", false,-1, 31,0);
        tracep->declBus(c+968,"top i_cache tag_1_3", false,-1, 31,0);
        tracep->declBus(c+969,"top i_cache tag_1_4", false,-1, 31,0);
        tracep->declBus(c+970,"top i_cache tag_1_5", false,-1, 31,0);
        tracep->declBus(c+971,"top i_cache tag_1_6", false,-1, 31,0);
        tracep->declBus(c+972,"top i_cache tag_1_7", false,-1, 31,0);
        tracep->declBus(c+973,"top i_cache tag_1_8", false,-1, 31,0);
        tracep->declBus(c+974,"top i_cache tag_1_9", false,-1, 31,0);
        tracep->declBus(c+975,"top i_cache tag_1_10", false,-1, 31,0);
        tracep->declBus(c+976,"top i_cache tag_1_11", false,-1, 31,0);
        tracep->declBus(c+977,"top i_cache tag_1_12", false,-1, 31,0);
        tracep->declBus(c+978,"top i_cache tag_1_13", false,-1, 31,0);
        tracep->declBus(c+979,"top i_cache tag_1_14", false,-1, 31,0);
        tracep->declBus(c+980,"top i_cache tag_1_15", false,-1, 31,0);
        tracep->declBit(c+981,"top i_cache valid_0_0", false,-1);
        tracep->declBit(c+982,"top i_cache valid_0_1", false,-1);
        tracep->declBit(c+983,"top i_cache valid_0_2", false,-1);
        tracep->declBit(c+984,"top i_cache valid_0_3", false,-1);
        tracep->declBit(c+985,"top i_cache valid_0_4", false,-1);
        tracep->declBit(c+986,"top i_cache valid_0_5", false,-1);
        tracep->declBit(c+987,"top i_cache valid_0_6", false,-1);
        tracep->declBit(c+988,"top i_cache valid_0_7", false,-1);
        tracep->declBit(c+989,"top i_cache valid_0_8", false,-1);
        tracep->declBit(c+990,"top i_cache valid_0_9", false,-1);
        tracep->declBit(c+991,"top i_cache valid_0_10", false,-1);
        tracep->declBit(c+992,"top i_cache valid_0_11", false,-1);
        tracep->declBit(c+993,"top i_cache valid_0_12", false,-1);
        tracep->declBit(c+994,"top i_cache valid_0_13", false,-1);
        tracep->declBit(c+995,"top i_cache valid_0_14", false,-1);
        tracep->declBit(c+996,"top i_cache valid_0_15", false,-1);
        tracep->declBit(c+997,"top i_cache valid_1_0", false,-1);
        tracep->declBit(c+998,"top i_cache valid_1_1", false,-1);
        tracep->declBit(c+999,"top i_cache valid_1_2", false,-1);
        tracep->declBit(c+1000,"top i_cache valid_1_3", false,-1);
        tracep->declBit(c+1001,"top i_cache valid_1_4", false,-1);
        tracep->declBit(c+1002,"top i_cache valid_1_5", false,-1);
        tracep->declBit(c+1003,"top i_cache valid_1_6", false,-1);
        tracep->declBit(c+1004,"top i_cache valid_1_7", false,-1);
        tracep->declBit(c+1005,"top i_cache valid_1_8", false,-1);
        tracep->declBit(c+1006,"top i_cache valid_1_9", false,-1);
        tracep->declBit(c+1007,"top i_cache valid_1_10", false,-1);
        tracep->declBit(c+1008,"top i_cache valid_1_11", false,-1);
        tracep->declBit(c+1009,"top i_cache valid_1_12", false,-1);
        tracep->declBit(c+1010,"top i_cache valid_1_13", false,-1);
        tracep->declBit(c+1011,"top i_cache valid_1_14", false,-1);
        tracep->declBit(c+1012,"top i_cache valid_1_15", false,-1);
        tracep->declQuad(c+1013,"top i_cache receive_data_0", false,-1, 63,0);
        tracep->declQuad(c+1015,"top i_cache receive_data_1", false,-1, 63,0);
        tracep->declQuad(c+1017,"top i_cache receive_data_2", false,-1, 63,0);
        tracep->declQuad(c+1019,"top i_cache receive_data_3", false,-1, 63,0);
        tracep->declQuad(c+1021,"top i_cache receive_data_4", false,-1, 63,0);
        tracep->declQuad(c+1023,"top i_cache receive_data_5", false,-1, 63,0);
        tracep->declQuad(c+1025,"top i_cache receive_data_6", false,-1, 63,0);
        tracep->declQuad(c+1027,"top i_cache receive_data_7", false,-1, 63,0);
        tracep->declBus(c+1029,"top i_cache receive_num", false,-1, 2,0);
        tracep->declBus(c+1030,"top i_cache quene_0", false,-1, 1,0);
        tracep->declBus(c+1031,"top i_cache quene_1", false,-1, 1,0);
        tracep->declBus(c+1032,"top i_cache quene_2", false,-1, 1,0);
        tracep->declBus(c+1033,"top i_cache quene_3", false,-1, 1,0);
        tracep->declBus(c+1034,"top i_cache quene_4", false,-1, 1,0);
        tracep->declBus(c+1035,"top i_cache quene_5", false,-1, 1,0);
        tracep->declBus(c+1036,"top i_cache quene_6", false,-1, 1,0);
        tracep->declBus(c+1037,"top i_cache quene_7", false,-1, 1,0);
        tracep->declBus(c+1038,"top i_cache quene_8", false,-1, 1,0);
        tracep->declBus(c+1039,"top i_cache quene_9", false,-1, 1,0);
        tracep->declBus(c+1040,"top i_cache quene_10", false,-1, 1,0);
        tracep->declBus(c+1041,"top i_cache quene_11", false,-1, 1,0);
        tracep->declBus(c+1042,"top i_cache quene_12", false,-1, 1,0);
        tracep->declBus(c+1043,"top i_cache quene_13", false,-1, 1,0);
        tracep->declBus(c+1044,"top i_cache quene_14", false,-1, 1,0);
        tracep->declBus(c+1045,"top i_cache quene_15", false,-1, 1,0);
        tracep->declBus(c+1046,"top i_cache offset", false,-1, 5,0);
        tracep->declBus(c+1047,"top i_cache index", false,-1, 3,0);
        tracep->declBus(c+1048,"top i_cache tag", false,-1, 21,0);
        tracep->declBus(c+1049,"top i_cache shift_bit", false,-1, 8,0);
        tracep->declBit(c+1050,"top i_cache way0_hit", false,-1);
        tracep->declBit(c+1051,"top i_cache way1_hit", false,-1);
        tracep->declBus(c+1052,"top i_cache unuse_way", false,-1, 1,0);
        tracep->declBus(c+1053,"top i_cache state", false,-1, 2,0);
        tracep->declBit(c+1729,"top d_cache clock", false,-1);
        tracep->declBit(c+1730,"top d_cache reset", false,-1);
        tracep->declBus(c+76,"top d_cache io_from_lsu_araddr", false,-1, 31,0);
        tracep->declBit(c+77,"top d_cache io_from_lsu_arvalid", false,-1);
        tracep->declBus(c+76,"top d_cache io_from_lsu_awaddr", false,-1, 31,0);
        tracep->declBit(c+78,"top d_cache io_from_lsu_awvalid", false,-1);
        tracep->declQuad(c+79,"top d_cache io_from_lsu_wdata", false,-1, 63,0);
        tracep->declBus(c+81,"top d_cache io_from_lsu_wstrb", false,-1, 7,0);
        tracep->declBit(c+82,"top d_cache io_from_lsu_wvalid", false,-1);
        tracep->declQuad(c+72,"top d_cache io_to_lsu_rdata", false,-1, 63,0);
        tracep->declBit(c+74,"top d_cache io_to_lsu_rvalid", false,-1);
        tracep->declBit(c+75,"top d_cache io_to_lsu_wready", false,-1);
        tracep->declBus(c+93,"top d_cache io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+94,"top d_cache io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+95,"top d_cache io_to_axi_arvalid", false,-1);
        tracep->declBit(c+96,"top d_cache io_to_axi_rready", false,-1);
        tracep->declBus(c+97,"top d_cache io_to_axi_awaddr", false,-1, 31,0);
        tracep->declBus(c+98,"top d_cache io_to_axi_awlen", false,-1, 7,0);
        tracep->declBit(c+99,"top d_cache io_to_axi_awvalid", false,-1);
        tracep->declQuad(c+100,"top d_cache io_to_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+102,"top d_cache io_to_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+103,"top d_cache io_to_axi_wvalid", false,-1);
        tracep->declBit(c+104,"top d_cache io_to_axi_bready", false,-1);
        tracep->declQuad(c+105,"top d_cache io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+107,"top d_cache io_from_axi_rlast", false,-1);
        tracep->declBit(c+108,"top d_cache io_from_axi_rvalid", false,-1);
        tracep->declBit(c+109,"top d_cache io_from_axi_wready", false,-1);
        tracep->declBit(c+110,"top d_cache io_from_axi_bvalid", false,-1);
        tracep->declArray(c+1054,"top d_cache ram_0_0", false,-1, 511,0);
        tracep->declArray(c+1070,"top d_cache ram_0_1", false,-1, 511,0);
        tracep->declArray(c+1086,"top d_cache ram_0_2", false,-1, 511,0);
        tracep->declArray(c+1102,"top d_cache ram_0_3", false,-1, 511,0);
        tracep->declArray(c+1118,"top d_cache ram_0_4", false,-1, 511,0);
        tracep->declArray(c+1134,"top d_cache ram_0_5", false,-1, 511,0);
        tracep->declArray(c+1150,"top d_cache ram_0_6", false,-1, 511,0);
        tracep->declArray(c+1166,"top d_cache ram_0_7", false,-1, 511,0);
        tracep->declArray(c+1182,"top d_cache ram_0_8", false,-1, 511,0);
        tracep->declArray(c+1198,"top d_cache ram_0_9", false,-1, 511,0);
        tracep->declArray(c+1214,"top d_cache ram_0_10", false,-1, 511,0);
        tracep->declArray(c+1230,"top d_cache ram_0_11", false,-1, 511,0);
        tracep->declArray(c+1246,"top d_cache ram_0_12", false,-1, 511,0);
        tracep->declArray(c+1262,"top d_cache ram_0_13", false,-1, 511,0);
        tracep->declArray(c+1278,"top d_cache ram_0_14", false,-1, 511,0);
        tracep->declArray(c+1294,"top d_cache ram_0_15", false,-1, 511,0);
        tracep->declArray(c+1310,"top d_cache ram_1_0", false,-1, 511,0);
        tracep->declArray(c+1326,"top d_cache ram_1_1", false,-1, 511,0);
        tracep->declArray(c+1342,"top d_cache ram_1_2", false,-1, 511,0);
        tracep->declArray(c+1358,"top d_cache ram_1_3", false,-1, 511,0);
        tracep->declArray(c+1374,"top d_cache ram_1_4", false,-1, 511,0);
        tracep->declArray(c+1390,"top d_cache ram_1_5", false,-1, 511,0);
        tracep->declArray(c+1406,"top d_cache ram_1_6", false,-1, 511,0);
        tracep->declArray(c+1422,"top d_cache ram_1_7", false,-1, 511,0);
        tracep->declArray(c+1438,"top d_cache ram_1_8", false,-1, 511,0);
        tracep->declArray(c+1454,"top d_cache ram_1_9", false,-1, 511,0);
        tracep->declArray(c+1470,"top d_cache ram_1_10", false,-1, 511,0);
        tracep->declArray(c+1486,"top d_cache ram_1_11", false,-1, 511,0);
        tracep->declArray(c+1502,"top d_cache ram_1_12", false,-1, 511,0);
        tracep->declArray(c+1518,"top d_cache ram_1_13", false,-1, 511,0);
        tracep->declArray(c+1534,"top d_cache ram_1_14", false,-1, 511,0);
        tracep->declArray(c+1550,"top d_cache ram_1_15", false,-1, 511,0);
        tracep->declBus(c+1566,"top d_cache tag_0_0", false,-1, 31,0);
        tracep->declBus(c+1567,"top d_cache tag_0_1", false,-1, 31,0);
        tracep->declBus(c+1568,"top d_cache tag_0_2", false,-1, 31,0);
        tracep->declBus(c+1569,"top d_cache tag_0_3", false,-1, 31,0);
        tracep->declBus(c+1570,"top d_cache tag_0_4", false,-1, 31,0);
        tracep->declBus(c+1571,"top d_cache tag_0_5", false,-1, 31,0);
        tracep->declBus(c+1572,"top d_cache tag_0_6", false,-1, 31,0);
        tracep->declBus(c+1573,"top d_cache tag_0_7", false,-1, 31,0);
        tracep->declBus(c+1574,"top d_cache tag_0_8", false,-1, 31,0);
        tracep->declBus(c+1575,"top d_cache tag_0_9", false,-1, 31,0);
        tracep->declBus(c+1576,"top d_cache tag_0_10", false,-1, 31,0);
        tracep->declBus(c+1577,"top d_cache tag_0_11", false,-1, 31,0);
        tracep->declBus(c+1578,"top d_cache tag_0_12", false,-1, 31,0);
        tracep->declBus(c+1579,"top d_cache tag_0_13", false,-1, 31,0);
        tracep->declBus(c+1580,"top d_cache tag_0_14", false,-1, 31,0);
        tracep->declBus(c+1581,"top d_cache tag_0_15", false,-1, 31,0);
        tracep->declBus(c+1582,"top d_cache tag_1_0", false,-1, 31,0);
        tracep->declBus(c+1583,"top d_cache tag_1_1", false,-1, 31,0);
        tracep->declBus(c+1584,"top d_cache tag_1_2", false,-1, 31,0);
        tracep->declBus(c+1585,"top d_cache tag_1_3", false,-1, 31,0);
        tracep->declBus(c+1586,"top d_cache tag_1_4", false,-1, 31,0);
        tracep->declBus(c+1587,"top d_cache tag_1_5", false,-1, 31,0);
        tracep->declBus(c+1588,"top d_cache tag_1_6", false,-1, 31,0);
        tracep->declBus(c+1589,"top d_cache tag_1_7", false,-1, 31,0);
        tracep->declBus(c+1590,"top d_cache tag_1_8", false,-1, 31,0);
        tracep->declBus(c+1591,"top d_cache tag_1_9", false,-1, 31,0);
        tracep->declBus(c+1592,"top d_cache tag_1_10", false,-1, 31,0);
        tracep->declBus(c+1593,"top d_cache tag_1_11", false,-1, 31,0);
        tracep->declBus(c+1594,"top d_cache tag_1_12", false,-1, 31,0);
        tracep->declBus(c+1595,"top d_cache tag_1_13", false,-1, 31,0);
        tracep->declBus(c+1596,"top d_cache tag_1_14", false,-1, 31,0);
        tracep->declBus(c+1597,"top d_cache tag_1_15", false,-1, 31,0);
        tracep->declBit(c+1598,"top d_cache valid_0_0", false,-1);
        tracep->declBit(c+1599,"top d_cache valid_0_1", false,-1);
        tracep->declBit(c+1600,"top d_cache valid_0_2", false,-1);
        tracep->declBit(c+1601,"top d_cache valid_0_3", false,-1);
        tracep->declBit(c+1602,"top d_cache valid_0_4", false,-1);
        tracep->declBit(c+1603,"top d_cache valid_0_5", false,-1);
        tracep->declBit(c+1604,"top d_cache valid_0_6", false,-1);
        tracep->declBit(c+1605,"top d_cache valid_0_7", false,-1);
        tracep->declBit(c+1606,"top d_cache valid_0_8", false,-1);
        tracep->declBit(c+1607,"top d_cache valid_0_9", false,-1);
        tracep->declBit(c+1608,"top d_cache valid_0_10", false,-1);
        tracep->declBit(c+1609,"top d_cache valid_0_11", false,-1);
        tracep->declBit(c+1610,"top d_cache valid_0_12", false,-1);
        tracep->declBit(c+1611,"top d_cache valid_0_13", false,-1);
        tracep->declBit(c+1612,"top d_cache valid_0_14", false,-1);
        tracep->declBit(c+1613,"top d_cache valid_0_15", false,-1);
        tracep->declBit(c+1614,"top d_cache valid_1_0", false,-1);
        tracep->declBit(c+1615,"top d_cache valid_1_1", false,-1);
        tracep->declBit(c+1616,"top d_cache valid_1_2", false,-1);
        tracep->declBit(c+1617,"top d_cache valid_1_3", false,-1);
        tracep->declBit(c+1618,"top d_cache valid_1_4", false,-1);
        tracep->declBit(c+1619,"top d_cache valid_1_5", false,-1);
        tracep->declBit(c+1620,"top d_cache valid_1_6", false,-1);
        tracep->declBit(c+1621,"top d_cache valid_1_7", false,-1);
        tracep->declBit(c+1622,"top d_cache valid_1_8", false,-1);
        tracep->declBit(c+1623,"top d_cache valid_1_9", false,-1);
        tracep->declBit(c+1624,"top d_cache valid_1_10", false,-1);
        tracep->declBit(c+1625,"top d_cache valid_1_11", false,-1);
        tracep->declBit(c+1626,"top d_cache valid_1_12", false,-1);
        tracep->declBit(c+1627,"top d_cache valid_1_13", false,-1);
        tracep->declBit(c+1628,"top d_cache valid_1_14", false,-1);
        tracep->declBit(c+1629,"top d_cache valid_1_15", false,-1);
        tracep->declBit(c+1630,"top d_cache dirty_0_0", false,-1);
        tracep->declBit(c+1631,"top d_cache dirty_0_1", false,-1);
        tracep->declBit(c+1632,"top d_cache dirty_0_2", false,-1);
        tracep->declBit(c+1633,"top d_cache dirty_0_3", false,-1);
        tracep->declBit(c+1634,"top d_cache dirty_0_4", false,-1);
        tracep->declBit(c+1635,"top d_cache dirty_0_5", false,-1);
        tracep->declBit(c+1636,"top d_cache dirty_0_6", false,-1);
        tracep->declBit(c+1637,"top d_cache dirty_0_7", false,-1);
        tracep->declBit(c+1638,"top d_cache dirty_0_8", false,-1);
        tracep->declBit(c+1639,"top d_cache dirty_0_9", false,-1);
        tracep->declBit(c+1640,"top d_cache dirty_0_10", false,-1);
        tracep->declBit(c+1641,"top d_cache dirty_0_11", false,-1);
        tracep->declBit(c+1642,"top d_cache dirty_0_12", false,-1);
        tracep->declBit(c+1643,"top d_cache dirty_0_13", false,-1);
        tracep->declBit(c+1644,"top d_cache dirty_0_14", false,-1);
        tracep->declBit(c+1645,"top d_cache dirty_0_15", false,-1);
        tracep->declBit(c+1646,"top d_cache dirty_1_0", false,-1);
        tracep->declBit(c+1647,"top d_cache dirty_1_1", false,-1);
        tracep->declBit(c+1648,"top d_cache dirty_1_2", false,-1);
        tracep->declBit(c+1649,"top d_cache dirty_1_3", false,-1);
        tracep->declBit(c+1650,"top d_cache dirty_1_4", false,-1);
        tracep->declBit(c+1651,"top d_cache dirty_1_5", false,-1);
        tracep->declBit(c+1652,"top d_cache dirty_1_6", false,-1);
        tracep->declBit(c+1653,"top d_cache dirty_1_7", false,-1);
        tracep->declBit(c+1654,"top d_cache dirty_1_8", false,-1);
        tracep->declBit(c+1655,"top d_cache dirty_1_9", false,-1);
        tracep->declBit(c+1656,"top d_cache dirty_1_10", false,-1);
        tracep->declBit(c+1657,"top d_cache dirty_1_11", false,-1);
        tracep->declBit(c+1658,"top d_cache dirty_1_12", false,-1);
        tracep->declBit(c+1659,"top d_cache dirty_1_13", false,-1);
        tracep->declBit(c+1660,"top d_cache dirty_1_14", false,-1);
        tracep->declBit(c+1661,"top d_cache dirty_1_15", false,-1);
        tracep->declArray(c+1662,"top d_cache write_back_data", false,-1, 511,0);
        tracep->declBus(c+1678,"top d_cache write_back_addr", false,-1, 31,0);
        tracep->declQuad(c+1679,"top d_cache receive_data_0", false,-1, 63,0);
        tracep->declQuad(c+1681,"top d_cache receive_data_1", false,-1, 63,0);
        tracep->declQuad(c+1683,"top d_cache receive_data_2", false,-1, 63,0);
        tracep->declQuad(c+1685,"top d_cache receive_data_3", false,-1, 63,0);
        tracep->declQuad(c+1687,"top d_cache receive_data_4", false,-1, 63,0);
        tracep->declQuad(c+1689,"top d_cache receive_data_5", false,-1, 63,0);
        tracep->declQuad(c+1691,"top d_cache receive_data_6", false,-1, 63,0);
        tracep->declQuad(c+1693,"top d_cache receive_data_7", false,-1, 63,0);
        tracep->declBus(c+1695,"top d_cache receive_num", false,-1, 2,0);
        tracep->declBus(c+1696,"top d_cache quene_0", false,-1, 1,0);
        tracep->declBus(c+1697,"top d_cache quene_1", false,-1, 1,0);
        tracep->declBus(c+1698,"top d_cache quene_2", false,-1, 1,0);
        tracep->declBus(c+1699,"top d_cache quene_3", false,-1, 1,0);
        tracep->declBus(c+1700,"top d_cache quene_4", false,-1, 1,0);
        tracep->declBus(c+1701,"top d_cache quene_5", false,-1, 1,0);
        tracep->declBus(c+1702,"top d_cache quene_6", false,-1, 1,0);
        tracep->declBus(c+1703,"top d_cache quene_7", false,-1, 1,0);
        tracep->declBus(c+1704,"top d_cache quene_8", false,-1, 1,0);
        tracep->declBus(c+1705,"top d_cache quene_9", false,-1, 1,0);
        tracep->declBus(c+1706,"top d_cache quene_10", false,-1, 1,0);
        tracep->declBus(c+1707,"top d_cache quene_11", false,-1, 1,0);
        tracep->declBus(c+1708,"top d_cache quene_12", false,-1, 1,0);
        tracep->declBus(c+1709,"top d_cache quene_13", false,-1, 1,0);
        tracep->declBus(c+1710,"top d_cache quene_14", false,-1, 1,0);
        tracep->declBus(c+1711,"top d_cache quene_15", false,-1, 1,0);
        tracep->declBus(c+1712,"top d_cache offset", false,-1, 5,0);
        tracep->declBus(c+1713,"top d_cache index", false,-1, 3,0);
        tracep->declBus(c+1714,"top d_cache tag", false,-1, 21,0);
        tracep->declBus(c+1715,"top d_cache shift_bit", false,-1, 8,0);
        tracep->declQuad(c+1716,"top d_cache wmask", false,-1, 63,0);
        tracep->declBit(c+1718,"top d_cache way0_hit", false,-1);
        tracep->declBit(c+1719,"top d_cache way1_hit", false,-1);
        tracep->declBus(c+1720,"top d_cache unuse_way", false,-1, 1,0);
        tracep->declBus(c+1721,"top d_cache state", false,-1, 3,0);
        tracep->declBit(c+1729,"top axi clock", false,-1);
        tracep->declBit(c+1730,"top axi reset", false,-1);
        tracep->declBus(c+117,"top axi io_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+118,"top axi io_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+119,"top axi io_axi_in_arvalid", false,-1);
        tracep->declBit(c+120,"top axi io_axi_in_rready", false,-1);
        tracep->declBus(c+121,"top axi io_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+122,"top axi io_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+123,"top axi io_axi_in_awvalid", false,-1);
        tracep->declQuad(c+124,"top axi io_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+126,"top axi io_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+127,"top axi io_axi_in_wvalid", false,-1);
        tracep->declBit(c+128,"top axi io_axi_in_bready", false,-1);
        tracep->declQuad(c+111,"top axi io_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+113,"top axi io_axi_out_rlast", false,-1);
        tracep->declBit(c+114,"top axi io_axi_out_rvalid", false,-1);
        tracep->declBit(c+115,"top axi io_axi_out_wready", false,-1);
        tracep->declBit(c+116,"top axi io_axi_out_bvalid", false,-1);
        tracep->declQuad(c+1722,"top axi Mem_modle_Raddr", false,-1, 63,0);
        tracep->declQuad(c+111,"top axi Mem_modle_Rdata", false,-1, 63,0);
        tracep->declQuad(c+1724,"top axi Mem_modle_Waddr", false,-1, 63,0);
        tracep->declQuad(c+124,"top axi Mem_modle_Wdata", false,-1, 63,0);
        tracep->declBus(c+126,"top axi Mem_modle_Wmask", false,-1, 7,0);
        tracep->declBit(c+115,"top axi Mem_modle_Write_en", false,-1);
        tracep->declBit(c+114,"top axi Mem_modle_Read_en", false,-1);
        tracep->declBit(c+115,"top axi axi_wready", false,-1);
        tracep->declBit(c+116,"top axi axi_bvalid", false,-1);
        tracep->declBit(c+114,"top axi axi_rvalid", false,-1);
        tracep->declBus(c+1726,"top axi arlen", false,-1, 7,0);
        tracep->declBus(c+1727,"top axi awlen", false,-1, 7,0);
        tracep->declQuad(c+1722,"top axi araddr", false,-1, 63,0);
        tracep->declQuad(c+1724,"top axi awaddr", false,-1, 63,0);
        tracep->declBus(c+1728,"top axi state", false,-1, 2,0);
        tracep->declQuad(c+1722,"top axi Mem_modle Raddr", false,-1, 63,0);
        tracep->declQuad(c+1724,"top axi Mem_modle Waddr", false,-1, 63,0);
        tracep->declQuad(c+124,"top axi Mem_modle Wdata", false,-1, 63,0);
        tracep->declBus(c+126,"top axi Mem_modle Wmask", false,-1, 7,0);
        tracep->declBit(c+115,"top axi Mem_modle Write_en", false,-1);
        tracep->declBit(c+114,"top axi Mem_modle Read_en", false,-1);
        tracep->declQuad(c+111,"top axi Mem_modle Rdata", false,-1, 63,0);
        tracep->declBus(c+129,"top dpi flag", false,-1, 31,0);
        tracep->declBus(c+130,"top dpi ecall_flag", false,-1, 31,0);
        tracep->declQuad(c+131,"top dpi pc", false,-1, 63,0);
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

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<16>/*511:0*/ __Vtemp2335;
    VlWide<16>/*511:0*/ __Vtemp2336;
    VlWide<16>/*511:0*/ __Vtemp2340;
    VlWide<16>/*511:0*/ __Vtemp2341;
    VlWide<16>/*511:0*/ __Vtemp2346;
    VlWide<16>/*511:0*/ __Vtemp2347;
    VlWide<16>/*511:0*/ __Vtemp2350;
    VlWide<4>/*127:0*/ __Vtemp2354;
    VlWide<4>/*127:0*/ __Vtemp2355;
    VlWide<4>/*127:0*/ __Vtemp2356;
    VlWide<4>/*127:0*/ __Vtemp2357;
    VlWide<4>/*127:0*/ __Vtemp2358;
    VlWide<4>/*127:0*/ __Vtemp2359;
    VlWide<3>/*95:0*/ __Vtemp2362;
    VlWide<3>/*95:0*/ __Vtemp2363;
    VlWide<3>/*95:0*/ __Vtemp2365;
    VlWide<3>/*95:0*/ __Vtemp2366;
    VlWide<3>/*95:0*/ __Vtemp2367;
    VlWide<3>/*95:0*/ __Vtemp2368;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                            >> 0xfU))),5);
        tracep->fullCData(oldp+2,(vlSelf->top__DOT__IDU_io_raddr2),5);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__Register_io_rdata1),64);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__Register_io_rdata2),64);
        tracep->fullBit(oldp+7,(((IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we) 
                                 & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid))));
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__WBU__DOT__ws_rf_dst),5);
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__WBU__DOT__ws_res),64);
        tracep->fullBit(oldp+11,(vlSelf->top__DOT__IDU_io_ds_allowin));
        tracep->fullBit(oldp+12,(((IData)(vlSelf->top__DOT__IDU__DOT__br_taken) 
                                  & (~ (IData)(vlSelf->top__DOT__IDU__DOT__br_taken_cancel)))));
        tracep->fullQData(oldp+13,(((0x67U == (0x707fU 
                                               & vlSelf->top__DOT__IDU__DOT__inst))
                                     ? (0xfffffffffffffffeULL 
                                        & vlSelf->top__DOT__IDU__DOT___br_target_T_1)
                                     : ((0x73U == vlSelf->top__DOT__IDU__DOT__inst)
                                         ? vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data
                                         : ((0x30200073U 
                                             == vlSelf->top__DOT__IDU__DOT__inst)
                                             ? (4ULL 
                                                + vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data)
                                             : vlSelf->top__DOT__IDU__DOT___br_target_T_1)))),64);
        tracep->fullQData(oldp+15,(vlSelf->top__DOT__IFU__DOT__fs_pc),64);
        tracep->fullBit(oldp+17,(vlSelf->top__DOT__IFU_io_fs_to_ds_valid));
        tracep->fullIData(oldp+18,(vlSelf->top__DOT__IFU__DOT__fs_inst),32);
        if ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__IFU__DOT__fs_pc 
                                      >> 6U))))) {
            __Vtemp2335[0U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0U];
            __Vtemp2335[1U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[1U];
            __Vtemp2335[2U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[2U];
            __Vtemp2335[3U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[3U];
            __Vtemp2335[4U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[4U];
            __Vtemp2335[5U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[5U];
            __Vtemp2335[6U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[6U];
            __Vtemp2335[7U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[7U];
            __Vtemp2335[8U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[8U];
            __Vtemp2335[9U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[9U];
            __Vtemp2335[0xaU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xaU];
            __Vtemp2335[0xbU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xbU];
            __Vtemp2335[0xcU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xcU];
            __Vtemp2335[0xdU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xdU];
            __Vtemp2335[0xeU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xeU];
            __Vtemp2335[0xfU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xfU];
        } else {
            __Vtemp2335[0U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1223[0U]);
            __Vtemp2335[1U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[1U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1223[1U]);
            __Vtemp2335[2U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[2U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1223[2U]);
            __Vtemp2335[3U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[3U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1223[3U]);
            __Vtemp2335[4U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[4U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1223[4U]);
            __Vtemp2335[5U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[5U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1223[5U]);
            __Vtemp2335[6U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[6U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1223[6U]);
            __Vtemp2335[7U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[7U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1223[7U]);
            __Vtemp2335[8U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[8U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1223[8U]);
            __Vtemp2335[9U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[9U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1223[9U]);
            __Vtemp2335[0xaU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xaU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1223[0xaU]);
            __Vtemp2335[0xbU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xbU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1223[0xbU]);
            __Vtemp2335[0xcU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xcU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1223[0xcU]);
            __Vtemp2335[0xdU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xdU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1223[0xdU]);
            __Vtemp2335[0xeU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xeU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1223[0xeU]);
            __Vtemp2335[0xfU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xfU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1223[0xfU]);
        }
        VL_SHIFTR_WWI(512,512,9, __Vtemp2336, __Vtemp2335, 
                      (0x1f8U & ((IData)(vlSelf->top__DOT__IFU__DOT__fs_pc) 
                                 << 3U)));
        if ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__IFU__DOT__fs_pc 
                                      >> 6U))))) {
            __Vtemp2340[0U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0U];
            __Vtemp2340[1U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[1U];
            __Vtemp2340[2U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[2U];
            __Vtemp2340[3U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[3U];
            __Vtemp2340[4U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[4U];
            __Vtemp2340[5U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[5U];
            __Vtemp2340[6U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[6U];
            __Vtemp2340[7U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[7U];
            __Vtemp2340[8U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[8U];
            __Vtemp2340[9U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[9U];
            __Vtemp2340[0xaU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xaU];
            __Vtemp2340[0xbU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xbU];
            __Vtemp2340[0xcU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xcU];
            __Vtemp2340[0xdU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xdU];
            __Vtemp2340[0xeU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xeU];
            __Vtemp2340[0xfU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xfU];
        } else {
            __Vtemp2340[0U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1239[0U]);
            __Vtemp2340[1U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[1U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1239[1U]);
            __Vtemp2340[2U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[2U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1239[2U]);
            __Vtemp2340[3U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[3U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1239[3U]);
            __Vtemp2340[4U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[4U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1239[4U]);
            __Vtemp2340[5U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[5U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1239[5U]);
            __Vtemp2340[6U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[6U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1239[6U]);
            __Vtemp2340[7U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[7U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1239[7U]);
            __Vtemp2340[8U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[8U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1239[8U]);
            __Vtemp2340[9U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[9U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1239[9U]);
            __Vtemp2340[0xaU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xaU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1239[0xaU]);
            __Vtemp2340[0xbU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xbU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1239[0xbU]);
            __Vtemp2340[0xcU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xcU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1239[0xcU]);
            __Vtemp2340[0xdU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xdU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1239[0xdU]);
            __Vtemp2340[0xeU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xeU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1239[0xeU]);
            __Vtemp2340[0xfU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xfU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1239[0xfU]);
        }
        VL_SHIFTR_WWI(512,512,9, __Vtemp2341, __Vtemp2340, 
                      (0x1f8U & ((IData)(vlSelf->top__DOT__IFU__DOT__fs_pc) 
                                 << 3U)));
        tracep->fullQData(oldp+19,((((QData)((IData)(
                                                     ((1U 
                                                       == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__i_cache__DOT__way0_hit)
                                                        ? 
                                                       __Vtemp2336[1U]
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__i_cache__DOT__way1_hit)
                                                         ? 
                                                        __Vtemp2341[1U]
                                                         : 
                                                        Vtop__ConstPool__CONST_93e1b771_0[1U]))
                                                       : 
                                                      Vtop__ConstPool__CONST_93e1b771_0[1U]))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((1U 
                                                                   == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                                   ? 
                                                                  ((IData)(vlSelf->top__DOT__i_cache__DOT__way0_hit)
                                                                    ? 
                                                                   __Vtemp2336[0U]
                                                                    : 
                                                                   ((IData)(vlSelf->top__DOT__i_cache__DOT__way1_hit)
                                                                     ? 
                                                                    __Vtemp2341[0U]
                                                                     : 
                                                                    Vtop__ConstPool__CONST_93e1b771_0[0U]))
                                                                   : 
                                                                  Vtop__ConstPool__CONST_93e1b771_0[0U]))))),64);
        tracep->fullBit(oldp+21,(((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                  & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1248))));
        tracep->fullBit(oldp+22,(vlSelf->top__DOT__i_cache_io_to_ifu_rvalid));
        tracep->fullIData(oldp+23,((IData)(vlSelf->top__DOT__IFU__DOT__fs_pc)),32);
        tracep->fullBit(oldp+24,(((IData)(vlSelf->top__DOT__IFU__DOT__fs_valid) 
                                  & (~ (IData)(vlSelf->top__DOT__IFU__DOT__fs_ready_go)))));
        tracep->fullBit(oldp+25,(vlSelf->top__DOT__IFU__DOT__inst_ready));
        tracep->fullBit(oldp+26,((0x100fU == vlSelf->top__DOT__IDU__DOT__inst)));
        tracep->fullBit(oldp+27,(((0x100fU == vlSelf->top__DOT__IDU__DOT__inst) 
                                  & (~ (IData)(vlSelf->top__DOT__IFU__DOT__cache_init)))));
        tracep->fullBit(oldp+28,((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__state))));
        tracep->fullBit(oldp+29,(vlSelf->top__DOT__IDU_io_ds_to_es_valid));
        tracep->fullBit(oldp+30,(vlSelf->top__DOT__EXU__DOT__es_allowin));
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__IDU__DOT__ds_pc),64);
        tracep->fullIData(oldp+33,(vlSelf->top__DOT__IDU__DOT___ALUop_T_176),32);
        tracep->fullQData(oldp+34,(((1U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                     ? vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data
                                     : vlSelf->top__DOT__IDU__DOT__src1)),64);
        tracep->fullQData(oldp+36,(((IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)
                                     ? vlSelf->top__DOT__IDU__DOT__imm
                                     : vlSelf->top__DOT__Register_io_rdata2)),64);
        tracep->fullCData(oldp+38,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                             >> 7U))),5);
        tracep->fullQData(oldp+39,(((0x3023U == (0x707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                     ? vlSelf->top__DOT__Register_io_rdata2
                                     : (QData)((IData)(
                                                       ((0x1023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__IDU__DOT__inst))
                                                         ? 
                                                        (0xffffU 
                                                         & (IData)(vlSelf->top__DOT__Register_io_rdata2))
                                                         : 
                                                        ((0x23U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__IDU__DOT__inst))
                                                          ? 
                                                         (0xffU 
                                                          & (IData)(vlSelf->top__DOT__Register_io_rdata2))
                                                          : 
                                                         ((0x2023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__IDU__DOT__inst))
                                                           ? (IData)(vlSelf->top__DOT__Register_io_rdata2)
                                                           : 0U))))))),64);
        tracep->fullBit(oldp+41,(((0x100073U != vlSelf->top__DOT__IDU__DOT__inst) 
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
        tracep->fullBit(oldp+42,((0x44U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))));
        tracep->fullBit(oldp+43,(((0x3003U == (0x707fU 
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
        tracep->fullCData(oldp+44,(((0x3023U == (0x707fU 
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
        tracep->fullCData(oldp+45,(((0x2003U == (0x707fU 
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
        tracep->fullBit(oldp+46,(vlSelf->top__DOT__EXU__DOT__es_rf_we));
        tracep->fullBit(oldp+47,(vlSelf->top__DOT__LSU_io_ms_rf_we));
        tracep->fullBit(oldp+48,(vlSelf->top__DOT__WBU__DOT__ws_rf_we));
        tracep->fullBit(oldp+49,(vlSelf->top__DOT__EXU__DOT__es_valid));
        tracep->fullBit(oldp+50,(vlSelf->top__DOT__LSU__DOT__ms_valid));
        tracep->fullBit(oldp+51,(vlSelf->top__DOT__WBU__DOT__ws_valid));
        tracep->fullCData(oldp+52,(vlSelf->top__DOT__EXU__DOT__es_rd),5);
        tracep->fullCData(oldp+53,(vlSelf->top__DOT__LSU__DOT__ms_rf_dst),5);
        tracep->fullBit(oldp+54,(vlSelf->top__DOT__IDU__DOT__ds_valid));
        tracep->fullBit(oldp+55,(vlSelf->top__DOT__LSU_io_ms_allowin));
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__EXU__DOT__es_pc),64);
        tracep->fullQData(oldp+58,((((QData)((IData)(
                                                     vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])))),64);
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__EXU__DOT__store_data),64);
        tracep->fullBit(oldp+62,(vlSelf->top__DOT__EXU__DOT__st_we));
        tracep->fullCData(oldp+63,(vlSelf->top__DOT__EXU__DOT__st_wstrb),8);
        tracep->fullBit(oldp+64,(vlSelf->top__DOT__EXU__DOT__ld_we));
        tracep->fullCData(oldp+65,(vlSelf->top__DOT__EXU__DOT__load_type),3);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__LSU__DOT__ms_pc),64);
        tracep->fullQData(oldp+68,(((0U != (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                     ? ((7U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata))))
                                         : ((6U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                             ? ((((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__LSU__DOT__mem_rdata 
                                                              >> 7U)))
                                                   ? 0xffffffffffffffULL
                                                   : 0ULL) 
                                                 << 8U) 
                                                | (QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata)))))
                                             : ((5U 
                                                 == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                 ? 
                                                ((((1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__LSU__DOT__mem_rdata 
                                                               >> 0xfU)))
                                                    ? 0xffffffffffffULL
                                                    : 0ULL) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata)))))
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                  ? (QData)((IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata))))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                    ? vlSelf->top__DOT__LSU__DOT__mem_rdata
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__LSU__DOT__mem_rdata 
                                                                                >> 0x1fU)))
                                                                        ? 0xffffffffU
                                                                        : 0U))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata)))
                                                     : vlSelf->top__DOT__LSU__DOT__mem_rdata)))))))
                                     : vlSelf->top__DOT__LSU__DOT__ms_res)),64);
        tracep->fullBit(oldp+70,(vlSelf->top__DOT__LSU_io_ms_to_ws_valid));
        tracep->fullBit(oldp+71,(vlSelf->top__DOT__LSU__DOT__ms_rf_we));
        VL_SHIFTR_WWI(512,512,9, __Vtemp2346, vlSelf->top__DOT__d_cache__DOT___GEN_88, 
                      (0x1f8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                 << 3U)));
        VL_SHIFTR_WWI(512,512,9, __Vtemp2347, vlSelf->top__DOT__d_cache__DOT___GEN_136, 
                      (0x1f8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                 << 3U)));
        VL_EXTEND_WQ(512,64, __Vtemp2350, ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                            ? 0ULL : 
                                           ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                             ? 0ULL
                                             : (((4U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                 | (8U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state)))
                                                 ? 0ULL
                                                 : 
                                                ((6U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? 0ULL
                                                  : 
                                                 ((7U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata
                                                   : 0ULL))))));
        tracep->fullQData(oldp+72,((((QData)((IData)(
                                                     ((1U 
                                                       == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                        ? 
                                                       __Vtemp2346[1U]
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                         ? 
                                                        __Vtemp2347[1U]
                                                         : 
                                                        Vtop__ConstPool__CONST_93e1b771_0[1U]))
                                                       : 
                                                      __Vtemp2350[1U]))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((1U 
                                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                                   ? 
                                                                  ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                                    ? 
                                                                   __Vtemp2346[0U]
                                                                    : 
                                                                   ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                                     ? 
                                                                    __Vtemp2347[0U]
                                                                     : 
                                                                    Vtop__ConstPool__CONST_93e1b771_0[0U]))
                                                                   : 
                                                                  __Vtemp2350[0U]))))),64);
        tracep->fullBit(oldp+74,(vlSelf->top__DOT__d_cache_io_to_lsu_rvalid));
        tracep->fullBit(oldp+75,(vlSelf->top__DOT__d_cache_io_to_lsu_wready));
        tracep->fullIData(oldp+76,((IData)(vlSelf->top__DOT__LSU__DOT__maddr)),32);
        tracep->fullBit(oldp+77,(vlSelf->top__DOT__LSU_io_axi_out_arvalid));
        tracep->fullBit(oldp+78,(vlSelf->top__DOT__LSU_io_axi_out_awvalid));
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__LSU__DOT__store_data),64);
        tracep->fullCData(oldp+81,(vlSelf->top__DOT__LSU__DOT__wstrb),8);
        tracep->fullBit(oldp+82,(vlSelf->top__DOT__LSU__DOT__wen));
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__WBU__DOT__ws_pc),64);
        tracep->fullIData(oldp+85,((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1257)),32);
        tracep->fullCData(oldp+86,(vlSelf->top__DOT__i_cache__DOT___GEN_1258),8);
        tracep->fullBit(oldp+87,(vlSelf->top__DOT__i_cache_io_to_axi_arvalid));
        tracep->fullBit(oldp+88,(vlSelf->top__DOT__i_cache_io_to_axi_rready));
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata),64);
        tracep->fullBit(oldp+91,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast));
        tracep->fullBit(oldp+92,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid));
        tracep->fullIData(oldp+93,((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2409)),32);
        tracep->fullCData(oldp+94,(vlSelf->top__DOT__d_cache_io_to_axi_arlen),8);
        tracep->fullBit(oldp+95,(vlSelf->top__DOT__d_cache_io_to_axi_arvalid));
        tracep->fullBit(oldp+96,(vlSelf->top__DOT__d_cache_io_to_axi_rready));
        tracep->fullIData(oldp+97,(vlSelf->top__DOT__d_cache_io_to_axi_awaddr),32);
        tracep->fullCData(oldp+98,(vlSelf->top__DOT__d_cache_io_to_axi_awlen),8);
        tracep->fullBit(oldp+99,(vlSelf->top__DOT__d_cache_io_to_axi_awvalid));
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__d_cache_io_to_axi_wdata),64);
        tracep->fullCData(oldp+102,(vlSelf->top__DOT__d_cache_io_to_axi_wstrb),8);
        tracep->fullBit(oldp+103,(vlSelf->top__DOT__d_cache_io_to_axi_wvalid));
        tracep->fullBit(oldp+104,(vlSelf->top__DOT__d_cache_io_to_axi_bready));
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata),64);
        tracep->fullBit(oldp+107,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rlast));
        tracep->fullBit(oldp+108,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid));
        tracep->fullBit(oldp+109,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_wready));
        tracep->fullBit(oldp+110,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid));
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata),64);
        tracep->fullBit(oldp+113,(vlSelf->top__DOT__axi_io_axi_out_rlast));
        tracep->fullBit(oldp+114,(vlSelf->top__DOT__axi__DOT__axi_rvalid));
        tracep->fullBit(oldp+115,(vlSelf->top__DOT__axi__DOT__axi_wready));
        tracep->fullBit(oldp+116,(vlSelf->top__DOT__axi__DOT__axi_bvalid));
        tracep->fullIData(oldp+117,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                      ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2409)
                                          : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2409)
                                              : ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1257)
                                                  : 0U)))
                                      : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1257)
                                          : ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2409)
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2409)
                                                  : 0U))))),32);
        tracep->fullCData(oldp+118,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                      ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                          ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                                          : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                              ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                                              : ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1258)
                                                  : 0U)))
                                      : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1258)
                                          : ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                              ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                                                  : 0U))))),8);
        tracep->fullBit(oldp+119,(vlSelf->top__DOT__arbiter_io_axi_out_arvalid));
        tracep->fullBit(oldp+120,(vlSelf->top__DOT__arbiter_io_axi_out_rready));
        tracep->fullIData(oldp+121,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullCData(oldp+122,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullBit(oldp+123,(vlSelf->top__DOT__arbiter_io_axi_out_awvalid));
        tracep->fullQData(oldp+124,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullCData(oldp+126,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullBit(oldp+127,(vlSelf->top__DOT__arbiter_io_axi_out_wvalid));
        tracep->fullBit(oldp+128,(vlSelf->top__DOT__arbiter_io_axi_out_bready));
        tracep->fullIData(oldp+129,((2U == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))),32);
        tracep->fullIData(oldp+130,((0x3dU == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))),32);
        tracep->fullQData(oldp+131,(((IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)
                                      ? vlSelf->top__DOT__WBU__DOT__ws_pc
                                      : ((IData)(vlSelf->top__DOT__LSU__DOT__ms_valid)
                                          ? vlSelf->top__DOT__LSU__DOT__ms_pc
                                          : ((IData)(vlSelf->top__DOT__EXU__DOT__es_valid)
                                              ? vlSelf->top__DOT__EXU__DOT__es_pc
                                              : ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)
                                                  ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                                  : vlSelf->top__DOT__IFU__DOT__fs_pc))))),64);
        tracep->fullBit(oldp+133,(vlSelf->top__DOT__diff_step));
        tracep->fullQData(oldp+134,(vlSelf->top__DOT__Register__DOT__Reg[0]),64);
        tracep->fullQData(oldp+136,(vlSelf->top__DOT__Register__DOT__Reg[1]),64);
        tracep->fullQData(oldp+138,(vlSelf->top__DOT__Register__DOT__Reg[2]),64);
        tracep->fullQData(oldp+140,(vlSelf->top__DOT__Register__DOT__Reg[3]),64);
        tracep->fullQData(oldp+142,(vlSelf->top__DOT__Register__DOT__Reg[4]),64);
        tracep->fullQData(oldp+144,(vlSelf->top__DOT__Register__DOT__Reg[5]),64);
        tracep->fullQData(oldp+146,(vlSelf->top__DOT__Register__DOT__Reg[6]),64);
        tracep->fullQData(oldp+148,(vlSelf->top__DOT__Register__DOT__Reg[7]),64);
        tracep->fullQData(oldp+150,(vlSelf->top__DOT__Register__DOT__Reg[8]),64);
        tracep->fullQData(oldp+152,(vlSelf->top__DOT__Register__DOT__Reg[9]),64);
        tracep->fullQData(oldp+154,(vlSelf->top__DOT__Register__DOT__Reg[10]),64);
        tracep->fullQData(oldp+156,(vlSelf->top__DOT__Register__DOT__Reg[11]),64);
        tracep->fullQData(oldp+158,(vlSelf->top__DOT__Register__DOT__Reg[12]),64);
        tracep->fullQData(oldp+160,(vlSelf->top__DOT__Register__DOT__Reg[13]),64);
        tracep->fullQData(oldp+162,(vlSelf->top__DOT__Register__DOT__Reg[14]),64);
        tracep->fullQData(oldp+164,(vlSelf->top__DOT__Register__DOT__Reg[15]),64);
        tracep->fullQData(oldp+166,(vlSelf->top__DOT__Register__DOT__Reg[16]),64);
        tracep->fullQData(oldp+168,(vlSelf->top__DOT__Register__DOT__Reg[17]),64);
        tracep->fullQData(oldp+170,(vlSelf->top__DOT__Register__DOT__Reg[18]),64);
        tracep->fullQData(oldp+172,(vlSelf->top__DOT__Register__DOT__Reg[19]),64);
        tracep->fullQData(oldp+174,(vlSelf->top__DOT__Register__DOT__Reg[20]),64);
        tracep->fullQData(oldp+176,(vlSelf->top__DOT__Register__DOT__Reg[21]),64);
        tracep->fullQData(oldp+178,(vlSelf->top__DOT__Register__DOT__Reg[22]),64);
        tracep->fullQData(oldp+180,(vlSelf->top__DOT__Register__DOT__Reg[23]),64);
        tracep->fullQData(oldp+182,(vlSelf->top__DOT__Register__DOT__Reg[24]),64);
        tracep->fullQData(oldp+184,(vlSelf->top__DOT__Register__DOT__Reg[25]),64);
        tracep->fullQData(oldp+186,(vlSelf->top__DOT__Register__DOT__Reg[26]),64);
        tracep->fullQData(oldp+188,(vlSelf->top__DOT__Register__DOT__Reg[27]),64);
        tracep->fullQData(oldp+190,(vlSelf->top__DOT__Register__DOT__Reg[28]),64);
        tracep->fullQData(oldp+192,(vlSelf->top__DOT__Register__DOT__Reg[29]),64);
        tracep->fullQData(oldp+194,(vlSelf->top__DOT__Register__DOT__Reg[30]),64);
        tracep->fullQData(oldp+196,(vlSelf->top__DOT__Register__DOT__Reg[31]),64);
        tracep->fullQData(oldp+198,(vlSelf->top__DOT__Register__DOT__Reg
                                    [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+200,(vlSelf->top__DOT__Register__DOT__Reg
                                    [vlSelf->top__DOT__IDU_io_raddr2]),64);
        tracep->fullQData(oldp+202,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0U]),64);
        tracep->fullQData(oldp+204,(vlSelf->top__DOT__Register__DOT__Reg
                                    [1U]),64);
        tracep->fullQData(oldp+206,(vlSelf->top__DOT__Register__DOT__Reg
                                    [2U]),64);
        tracep->fullQData(oldp+208,(vlSelf->top__DOT__Register__DOT__Reg
                                    [3U]),64);
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__Register__DOT__Reg
                                    [4U]),64);
        tracep->fullQData(oldp+212,(vlSelf->top__DOT__Register__DOT__Reg
                                    [5U]),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__Register__DOT__Reg
                                    [6U]),64);
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__Register__DOT__Reg
                                    [7U]),64);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__Register__DOT__Reg
                                    [8U]),64);
        tracep->fullQData(oldp+220,(vlSelf->top__DOT__Register__DOT__Reg
                                    [9U]),64);
        tracep->fullQData(oldp+222,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xaU]),64);
        tracep->fullQData(oldp+224,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xbU]),64);
        tracep->fullQData(oldp+226,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xcU]),64);
        tracep->fullQData(oldp+228,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xdU]),64);
        tracep->fullQData(oldp+230,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xeU]),64);
        tracep->fullQData(oldp+232,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xfU]),64);
        tracep->fullQData(oldp+234,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x10U]),64);
        tracep->fullQData(oldp+236,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x11U]),64);
        tracep->fullQData(oldp+238,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x12U]),64);
        tracep->fullQData(oldp+240,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x13U]),64);
        tracep->fullQData(oldp+242,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x14U]),64);
        tracep->fullQData(oldp+244,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x15U]),64);
        tracep->fullQData(oldp+246,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x16U]),64);
        tracep->fullQData(oldp+248,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x17U]),64);
        tracep->fullQData(oldp+250,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x18U]),64);
        tracep->fullQData(oldp+252,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x19U]),64);
        tracep->fullQData(oldp+254,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1aU]),64);
        tracep->fullQData(oldp+256,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1bU]),64);
        tracep->fullQData(oldp+258,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1cU]),64);
        tracep->fullQData(oldp+260,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1dU]),64);
        tracep->fullQData(oldp+262,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1eU]),64);
        tracep->fullQData(oldp+264,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1fU]),64);
        tracep->fullBit(oldp+266,((((IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we) 
                                    & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)) 
                                   & (0U != (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_dst)))));
        tracep->fullQData(oldp+267,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0]),64);
        tracep->fullQData(oldp+269,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[1]),64);
        tracep->fullQData(oldp+271,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[2]),64);
        tracep->fullQData(oldp+273,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[3]),64);
        tracep->fullQData(oldp+275,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[4]),64);
        tracep->fullQData(oldp+277,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[5]),64);
        tracep->fullQData(oldp+279,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[6]),64);
        tracep->fullQData(oldp+281,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[7]),64);
        tracep->fullQData(oldp+283,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[8]),64);
        tracep->fullQData(oldp+285,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[9]),64);
        tracep->fullQData(oldp+287,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[10]),64);
        tracep->fullQData(oldp+289,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[11]),64);
        tracep->fullQData(oldp+291,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[12]),64);
        tracep->fullQData(oldp+293,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[13]),64);
        tracep->fullQData(oldp+295,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[14]),64);
        tracep->fullQData(oldp+297,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[15]),64);
        tracep->fullQData(oldp+299,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[16]),64);
        tracep->fullQData(oldp+301,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[17]),64);
        tracep->fullQData(oldp+303,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[18]),64);
        tracep->fullQData(oldp+305,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[19]),64);
        tracep->fullQData(oldp+307,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[20]),64);
        tracep->fullQData(oldp+309,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[21]),64);
        tracep->fullQData(oldp+311,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[22]),64);
        tracep->fullQData(oldp+313,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[23]),64);
        tracep->fullQData(oldp+315,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[24]),64);
        tracep->fullQData(oldp+317,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[25]),64);
        tracep->fullQData(oldp+319,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[26]),64);
        tracep->fullQData(oldp+321,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[27]),64);
        tracep->fullQData(oldp+323,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[28]),64);
        tracep->fullQData(oldp+325,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[29]),64);
        tracep->fullQData(oldp+327,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[30]),64);
        tracep->fullQData(oldp+329,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[31]),64);
        tracep->fullBit(oldp+331,(vlSelf->top__DOT__IFU__DOT__fs_valid));
        tracep->fullBit(oldp+332,(vlSelf->top__DOT__IFU__DOT__fs_ready_go));
        tracep->fullBit(oldp+333,(vlSelf->top__DOT__IFU__DOT__cache_init));
        tracep->fullBit(oldp+334,(vlSelf->top__DOT__IFU__DOT__fs_to_ds_valid));
        tracep->fullQData(oldp+335,((4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc)),64);
        tracep->fullBit(oldp+337,(vlSelf->top__DOT__IFU__DOT__fs_allowin));
        tracep->fullBit(oldp+338,(((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
                                   & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
        tracep->fullBit(oldp+339,((((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
                                    >> 1U) & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
        tracep->fullCData(oldp+340,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                      ? 1U : ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                               ? (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)
                                               : 0U))),2);
        tracep->fullQData(oldp+341,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                      ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                      : ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                          ? ((0x1073U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                              ? vlSelf->top__DOT__Register_io_rdata1
                                              : ((0x2073U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                                  ? 
                                                 (vlSelf->top__DOT__Register_io_rdata1 
                                                  | vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data)
                                                  : 
                                                 ((0x3073U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 
                                                  (vlSelf->top__DOT__Register_io_rdata1 
                                                   & (~ vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data))
                                                   : 0ULL)))
                                          : 0ULL))),64);
        tracep->fullCData(oldp+343,(((2U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                      ? 0U : ((0x3eU 
                                               == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))
                                               ? 1U
                                               : (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)))),2);
        tracep->fullQData(oldp+344,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data),64);
        tracep->fullIData(oldp+346,(vlSelf->top__DOT__IDU__DOT__inst),32);
        tracep->fullBit(oldp+347,(vlSelf->top__DOT__IDU__DOT__br_taken_cancel));
        tracep->fullBit(oldp+348,(vlSelf->top__DOT__IDU__DOT__src1_is_pc));
        tracep->fullIData(oldp+349,(vlSelf->top__DOT__IDU__DOT___inst_type_T_188),32);
        tracep->fullCData(oldp+350,(vlSelf->top__DOT__IDU__DOT__csr_write),2);
        tracep->fullBit(oldp+351,(vlSelf->top__DOT__IDU__DOT__src2_is_imm));
        tracep->fullBit(oldp+352,(vlSelf->top__DOT__IDU__DOT__conflict));
        tracep->fullBit(oldp+353,(vlSelf->top__DOT__IDU__DOT__ds_ready_go));
        tracep->fullBit(oldp+354,(vlSelf->top__DOT__IDU__DOT__ds_allowin));
        tracep->fullBit(oldp+355,(vlSelf->top__DOT__IDU__DOT__br_taken));
        tracep->fullSData(oldp+356,((vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0x14U)),12);
        tracep->fullIData(oldp+357,(((0x80000U & (vlSelf->top__DOT__IDU__DOT__inst 
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
        tracep->fullIData(oldp+358,((vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+359,(((0xfe0U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 7U)))),12);
        tracep->fullSData(oldp+360,(((0x800U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x14U)) 
                                     | ((0x400U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                   << 3U)) 
                                        | ((0x3f0U 
                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0x15U)) 
                                           | (0xfU 
                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 8U)))))),12);
        tracep->fullQData(oldp+361,(vlSelf->top__DOT__IDU__DOT__imm),64);
        tracep->fullCData(oldp+363,(vlSelf->top__DOT__IDU__DOT__csr_index),2);
        tracep->fullQData(oldp+364,(((0x1073U == (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                      ? vlSelf->top__DOT__Register_io_rdata1
                                      : ((0x2073U == 
                                          (0x707fU 
                                           & vlSelf->top__DOT__IDU__DOT__inst))
                                          ? (vlSelf->top__DOT__Register_io_rdata1 
                                             | vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data)
                                          : ((0x3073U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                              ? (vlSelf->top__DOT__Register_io_rdata1 
                                                 & (~ vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data))
                                              : 0ULL)))),64);
        tracep->fullQData(oldp+366,(vlSelf->top__DOT__IDU__DOT__src1),64);
        tracep->fullQData(oldp+368,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[0]),64);
        tracep->fullQData(oldp+370,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[1]),64);
        tracep->fullQData(oldp+372,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[2]),64);
        tracep->fullQData(oldp+374,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[3]),64);
        tracep->fullQData(oldp+376,(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value),64);
        tracep->fullQData(oldp+378,(vlSelf->top__DOT__EXU__DOT__src2_value),64);
        tracep->fullIData(oldp+380,(vlSelf->top__DOT__EXU__DOT__ALUop),32);
        tracep->fullQData(oldp+381,(vlSelf->top__DOT__EXU__DOT__src1_value),64);
        tracep->fullQData(oldp+383,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res),64);
        tracep->fullQData(oldp+385,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sub_res),64);
        tracep->fullQData(oldp+387,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sra_res),64);
        tracep->fullQData(oldp+389,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),64);
        VL_EXTEND_WQ(127,64, __Vtemp2354, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
        VL_SHIFTL_WWI(127,127,6, __Vtemp2355, __Vtemp2354, 
                      (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
        __Vtemp2356[0U] = __Vtemp2355[0U];
        __Vtemp2356[1U] = __Vtemp2355[1U];
        __Vtemp2356[2U] = __Vtemp2355[2U];
        __Vtemp2356[3U] = (0x7fffffffU & __Vtemp2355[3U]);
        tracep->fullWData(oldp+391,(__Vtemp2356),127);
        tracep->fullIData(oldp+395,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value), 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),32);
        tracep->fullIData(oldp+396,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__srlw_res),32);
        tracep->fullQData(oldp+397,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sllw_res),63);
        tracep->fullQData(oldp+399,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     | vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+401,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     ^ vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+403,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     & vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        VL_EXTEND_WQ(128,64, __Vtemp2357, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
        VL_EXTEND_WQ(128,64, __Vtemp2358, vlSelf->top__DOT__EXU__DOT__src2_value);
        VL_MUL_W(4, __Vtemp2359, __Vtemp2357, __Vtemp2358);
        tracep->fullQData(oldp+405,((((QData)((IData)(
                                                      __Vtemp2359[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp2359[0U])))),64);
        tracep->fullIData(oldp+407,((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT___mluw_res_T_2)),32);
        tracep->fullIData(oldp+408,((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT___divw_res_T_4)),32);
        tracep->fullIData(oldp+409,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__divuw_res),32);
        tracep->fullIData(oldp+410,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__remw_res),32);
        tracep->fullIData(oldp+411,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__remuw_res),32);
        VL_EXTENDS_WQ(65,64, __Vtemp2362, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
        __Vtemp2363[0U] = __Vtemp2362[0U];
        __Vtemp2363[1U] = __Vtemp2362[1U];
        __Vtemp2363[2U] = (1U & __Vtemp2362[2U]);
        VL_EXTENDS_WQ(65,64, __Vtemp2365, vlSelf->top__DOT__EXU__DOT__src2_value);
        __Vtemp2366[0U] = __Vtemp2365[0U];
        __Vtemp2366[1U] = __Vtemp2365[1U];
        __Vtemp2366[2U] = (1U & __Vtemp2365[2U]);
        VL_DIVS_WWW(65, __Vtemp2367, __Vtemp2363, __Vtemp2366);
        __Vtemp2368[0U] = __Vtemp2367[0U];
        __Vtemp2368[1U] = __Vtemp2367[1U];
        __Vtemp2368[2U] = (1U & __Vtemp2367[2U]);
        tracep->fullWData(oldp+412,(__Vtemp2368),65);
        tracep->fullQData(oldp+415,(VL_DIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value, vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+417,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value, vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+419,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value, vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullWData(oldp+421,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res),127);
        tracep->fullBit(oldp+425,(vlSelf->top__DOT__LSU__DOT__ms_ready_go));
        tracep->fullQData(oldp+426,(vlSelf->top__DOT__LSU__DOT__ms_res),64);
        tracep->fullBit(oldp+428,(vlSelf->top__DOT__LSU__DOT__ren));
        tracep->fullQData(oldp+429,(vlSelf->top__DOT__LSU__DOT__maddr),64);
        tracep->fullCData(oldp+431,(vlSelf->top__DOT__LSU__DOT__load_type),3);
        tracep->fullQData(oldp+432,(vlSelf->top__DOT__LSU__DOT__mem_rdata),64);
        tracep->fullQData(oldp+434,(((7U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata))))
                                      : ((6U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                          ? ((((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__LSU__DOT__mem_rdata 
                                                           >> 7U)))
                                                ? 0xffffffffffffffULL
                                                : 0ULL) 
                                              << 8U) 
                                             | (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata)))))
                                          : ((5U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                              ? (((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__LSU__DOT__mem_rdata 
                                                               >> 0xfU)))
                                                    ? 0xffffffffffffULL
                                                    : 0ULL) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata)))))
                                              : ((4U 
                                                  == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                  ? (QData)((IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata))))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                    ? vlSelf->top__DOT__LSU__DOT__mem_rdata
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__LSU__DOT__mem_rdata 
                                                                                >> 0x1fU)))
                                                                        ? 0xffffffffU
                                                                        : 0U))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata)))
                                                     : vlSelf->top__DOT__LSU__DOT__mem_rdata)))))))),64);
        tracep->fullCData(oldp+436,(vlSelf->top__DOT__arbiter__DOT__state),2);
        tracep->fullWData(oldp+437,(vlSelf->top__DOT__i_cache__DOT__ram_0_0),512);
        tracep->fullWData(oldp+453,(vlSelf->top__DOT__i_cache__DOT__ram_0_1),512);
        tracep->fullWData(oldp+469,(vlSelf->top__DOT__i_cache__DOT__ram_0_2),512);
        tracep->fullWData(oldp+485,(vlSelf->top__DOT__i_cache__DOT__ram_0_3),512);
        tracep->fullWData(oldp+501,(vlSelf->top__DOT__i_cache__DOT__ram_0_4),512);
        tracep->fullWData(oldp+517,(vlSelf->top__DOT__i_cache__DOT__ram_0_5),512);
        tracep->fullWData(oldp+533,(vlSelf->top__DOT__i_cache__DOT__ram_0_6),512);
        tracep->fullWData(oldp+549,(vlSelf->top__DOT__i_cache__DOT__ram_0_7),512);
        tracep->fullWData(oldp+565,(vlSelf->top__DOT__i_cache__DOT__ram_0_8),512);
        tracep->fullWData(oldp+581,(vlSelf->top__DOT__i_cache__DOT__ram_0_9),512);
        tracep->fullWData(oldp+597,(vlSelf->top__DOT__i_cache__DOT__ram_0_10),512);
        tracep->fullWData(oldp+613,(vlSelf->top__DOT__i_cache__DOT__ram_0_11),512);
        tracep->fullWData(oldp+629,(vlSelf->top__DOT__i_cache__DOT__ram_0_12),512);
        tracep->fullWData(oldp+645,(vlSelf->top__DOT__i_cache__DOT__ram_0_13),512);
        tracep->fullWData(oldp+661,(vlSelf->top__DOT__i_cache__DOT__ram_0_14),512);
        tracep->fullWData(oldp+677,(vlSelf->top__DOT__i_cache__DOT__ram_0_15),512);
        tracep->fullWData(oldp+693,(vlSelf->top__DOT__i_cache__DOT__ram_1_0),512);
        tracep->fullWData(oldp+709,(vlSelf->top__DOT__i_cache__DOT__ram_1_1),512);
        tracep->fullWData(oldp+725,(vlSelf->top__DOT__i_cache__DOT__ram_1_2),512);
        tracep->fullWData(oldp+741,(vlSelf->top__DOT__i_cache__DOT__ram_1_3),512);
        tracep->fullWData(oldp+757,(vlSelf->top__DOT__i_cache__DOT__ram_1_4),512);
        tracep->fullWData(oldp+773,(vlSelf->top__DOT__i_cache__DOT__ram_1_5),512);
        tracep->fullWData(oldp+789,(vlSelf->top__DOT__i_cache__DOT__ram_1_6),512);
        tracep->fullWData(oldp+805,(vlSelf->top__DOT__i_cache__DOT__ram_1_7),512);
        tracep->fullWData(oldp+821,(vlSelf->top__DOT__i_cache__DOT__ram_1_8),512);
        tracep->fullWData(oldp+837,(vlSelf->top__DOT__i_cache__DOT__ram_1_9),512);
        tracep->fullWData(oldp+853,(vlSelf->top__DOT__i_cache__DOT__ram_1_10),512);
        tracep->fullWData(oldp+869,(vlSelf->top__DOT__i_cache__DOT__ram_1_11),512);
        tracep->fullWData(oldp+885,(vlSelf->top__DOT__i_cache__DOT__ram_1_12),512);
        tracep->fullWData(oldp+901,(vlSelf->top__DOT__i_cache__DOT__ram_1_13),512);
        tracep->fullWData(oldp+917,(vlSelf->top__DOT__i_cache__DOT__ram_1_14),512);
        tracep->fullWData(oldp+933,(vlSelf->top__DOT__i_cache__DOT__ram_1_15),512);
        tracep->fullIData(oldp+949,(vlSelf->top__DOT__i_cache__DOT__tag_0_0),32);
        tracep->fullIData(oldp+950,(vlSelf->top__DOT__i_cache__DOT__tag_0_1),32);
        tracep->fullIData(oldp+951,(vlSelf->top__DOT__i_cache__DOT__tag_0_2),32);
        tracep->fullIData(oldp+952,(vlSelf->top__DOT__i_cache__DOT__tag_0_3),32);
        tracep->fullIData(oldp+953,(vlSelf->top__DOT__i_cache__DOT__tag_0_4),32);
        tracep->fullIData(oldp+954,(vlSelf->top__DOT__i_cache__DOT__tag_0_5),32);
        tracep->fullIData(oldp+955,(vlSelf->top__DOT__i_cache__DOT__tag_0_6),32);
        tracep->fullIData(oldp+956,(vlSelf->top__DOT__i_cache__DOT__tag_0_7),32);
        tracep->fullIData(oldp+957,(vlSelf->top__DOT__i_cache__DOT__tag_0_8),32);
        tracep->fullIData(oldp+958,(vlSelf->top__DOT__i_cache__DOT__tag_0_9),32);
        tracep->fullIData(oldp+959,(vlSelf->top__DOT__i_cache__DOT__tag_0_10),32);
        tracep->fullIData(oldp+960,(vlSelf->top__DOT__i_cache__DOT__tag_0_11),32);
        tracep->fullIData(oldp+961,(vlSelf->top__DOT__i_cache__DOT__tag_0_12),32);
        tracep->fullIData(oldp+962,(vlSelf->top__DOT__i_cache__DOT__tag_0_13),32);
        tracep->fullIData(oldp+963,(vlSelf->top__DOT__i_cache__DOT__tag_0_14),32);
        tracep->fullIData(oldp+964,(vlSelf->top__DOT__i_cache__DOT__tag_0_15),32);
        tracep->fullIData(oldp+965,(vlSelf->top__DOT__i_cache__DOT__tag_1_0),32);
        tracep->fullIData(oldp+966,(vlSelf->top__DOT__i_cache__DOT__tag_1_1),32);
        tracep->fullIData(oldp+967,(vlSelf->top__DOT__i_cache__DOT__tag_1_2),32);
        tracep->fullIData(oldp+968,(vlSelf->top__DOT__i_cache__DOT__tag_1_3),32);
        tracep->fullIData(oldp+969,(vlSelf->top__DOT__i_cache__DOT__tag_1_4),32);
        tracep->fullIData(oldp+970,(vlSelf->top__DOT__i_cache__DOT__tag_1_5),32);
        tracep->fullIData(oldp+971,(vlSelf->top__DOT__i_cache__DOT__tag_1_6),32);
        tracep->fullIData(oldp+972,(vlSelf->top__DOT__i_cache__DOT__tag_1_7),32);
        tracep->fullIData(oldp+973,(vlSelf->top__DOT__i_cache__DOT__tag_1_8),32);
        tracep->fullIData(oldp+974,(vlSelf->top__DOT__i_cache__DOT__tag_1_9),32);
        tracep->fullIData(oldp+975,(vlSelf->top__DOT__i_cache__DOT__tag_1_10),32);
        tracep->fullIData(oldp+976,(vlSelf->top__DOT__i_cache__DOT__tag_1_11),32);
        tracep->fullIData(oldp+977,(vlSelf->top__DOT__i_cache__DOT__tag_1_12),32);
        tracep->fullIData(oldp+978,(vlSelf->top__DOT__i_cache__DOT__tag_1_13),32);
        tracep->fullIData(oldp+979,(vlSelf->top__DOT__i_cache__DOT__tag_1_14),32);
        tracep->fullIData(oldp+980,(vlSelf->top__DOT__i_cache__DOT__tag_1_15),32);
        tracep->fullBit(oldp+981,(vlSelf->top__DOT__i_cache__DOT__valid_0_0));
        tracep->fullBit(oldp+982,(vlSelf->top__DOT__i_cache__DOT__valid_0_1));
        tracep->fullBit(oldp+983,(vlSelf->top__DOT__i_cache__DOT__valid_0_2));
        tracep->fullBit(oldp+984,(vlSelf->top__DOT__i_cache__DOT__valid_0_3));
        tracep->fullBit(oldp+985,(vlSelf->top__DOT__i_cache__DOT__valid_0_4));
        tracep->fullBit(oldp+986,(vlSelf->top__DOT__i_cache__DOT__valid_0_5));
        tracep->fullBit(oldp+987,(vlSelf->top__DOT__i_cache__DOT__valid_0_6));
        tracep->fullBit(oldp+988,(vlSelf->top__DOT__i_cache__DOT__valid_0_7));
        tracep->fullBit(oldp+989,(vlSelf->top__DOT__i_cache__DOT__valid_0_8));
        tracep->fullBit(oldp+990,(vlSelf->top__DOT__i_cache__DOT__valid_0_9));
        tracep->fullBit(oldp+991,(vlSelf->top__DOT__i_cache__DOT__valid_0_10));
        tracep->fullBit(oldp+992,(vlSelf->top__DOT__i_cache__DOT__valid_0_11));
        tracep->fullBit(oldp+993,(vlSelf->top__DOT__i_cache__DOT__valid_0_12));
        tracep->fullBit(oldp+994,(vlSelf->top__DOT__i_cache__DOT__valid_0_13));
        tracep->fullBit(oldp+995,(vlSelf->top__DOT__i_cache__DOT__valid_0_14));
        tracep->fullBit(oldp+996,(vlSelf->top__DOT__i_cache__DOT__valid_0_15));
        tracep->fullBit(oldp+997,(vlSelf->top__DOT__i_cache__DOT__valid_1_0));
        tracep->fullBit(oldp+998,(vlSelf->top__DOT__i_cache__DOT__valid_1_1));
        tracep->fullBit(oldp+999,(vlSelf->top__DOT__i_cache__DOT__valid_1_2));
        tracep->fullBit(oldp+1000,(vlSelf->top__DOT__i_cache__DOT__valid_1_3));
        tracep->fullBit(oldp+1001,(vlSelf->top__DOT__i_cache__DOT__valid_1_4));
        tracep->fullBit(oldp+1002,(vlSelf->top__DOT__i_cache__DOT__valid_1_5));
        tracep->fullBit(oldp+1003,(vlSelf->top__DOT__i_cache__DOT__valid_1_6));
        tracep->fullBit(oldp+1004,(vlSelf->top__DOT__i_cache__DOT__valid_1_7));
        tracep->fullBit(oldp+1005,(vlSelf->top__DOT__i_cache__DOT__valid_1_8));
        tracep->fullBit(oldp+1006,(vlSelf->top__DOT__i_cache__DOT__valid_1_9));
        tracep->fullBit(oldp+1007,(vlSelf->top__DOT__i_cache__DOT__valid_1_10));
        tracep->fullBit(oldp+1008,(vlSelf->top__DOT__i_cache__DOT__valid_1_11));
        tracep->fullBit(oldp+1009,(vlSelf->top__DOT__i_cache__DOT__valid_1_12));
        tracep->fullBit(oldp+1010,(vlSelf->top__DOT__i_cache__DOT__valid_1_13));
        tracep->fullBit(oldp+1011,(vlSelf->top__DOT__i_cache__DOT__valid_1_14));
        tracep->fullBit(oldp+1012,(vlSelf->top__DOT__i_cache__DOT__valid_1_15));
        tracep->fullQData(oldp+1013,(vlSelf->top__DOT__i_cache__DOT__receive_data_0),64);
        tracep->fullQData(oldp+1015,(vlSelf->top__DOT__i_cache__DOT__receive_data_1),64);
        tracep->fullQData(oldp+1017,(vlSelf->top__DOT__i_cache__DOT__receive_data_2),64);
        tracep->fullQData(oldp+1019,(vlSelf->top__DOT__i_cache__DOT__receive_data_3),64);
        tracep->fullQData(oldp+1021,(vlSelf->top__DOT__i_cache__DOT__receive_data_4),64);
        tracep->fullQData(oldp+1023,(vlSelf->top__DOT__i_cache__DOT__receive_data_5),64);
        tracep->fullQData(oldp+1025,(vlSelf->top__DOT__i_cache__DOT__receive_data_6),64);
        tracep->fullQData(oldp+1027,(vlSelf->top__DOT__i_cache__DOT__receive_data_7),64);
        tracep->fullCData(oldp+1029,(vlSelf->top__DOT__i_cache__DOT__receive_num),3);
        tracep->fullCData(oldp+1030,(vlSelf->top__DOT__i_cache__DOT__quene_0),2);
        tracep->fullCData(oldp+1031,(vlSelf->top__DOT__i_cache__DOT__quene_1),2);
        tracep->fullCData(oldp+1032,(vlSelf->top__DOT__i_cache__DOT__quene_2),2);
        tracep->fullCData(oldp+1033,(vlSelf->top__DOT__i_cache__DOT__quene_3),2);
        tracep->fullCData(oldp+1034,(vlSelf->top__DOT__i_cache__DOT__quene_4),2);
        tracep->fullCData(oldp+1035,(vlSelf->top__DOT__i_cache__DOT__quene_5),2);
        tracep->fullCData(oldp+1036,(vlSelf->top__DOT__i_cache__DOT__quene_6),2);
        tracep->fullCData(oldp+1037,(vlSelf->top__DOT__i_cache__DOT__quene_7),2);
        tracep->fullCData(oldp+1038,(vlSelf->top__DOT__i_cache__DOT__quene_8),2);
        tracep->fullCData(oldp+1039,(vlSelf->top__DOT__i_cache__DOT__quene_9),2);
        tracep->fullCData(oldp+1040,(vlSelf->top__DOT__i_cache__DOT__quene_10),2);
        tracep->fullCData(oldp+1041,(vlSelf->top__DOT__i_cache__DOT__quene_11),2);
        tracep->fullCData(oldp+1042,(vlSelf->top__DOT__i_cache__DOT__quene_12),2);
        tracep->fullCData(oldp+1043,(vlSelf->top__DOT__i_cache__DOT__quene_13),2);
        tracep->fullCData(oldp+1044,(vlSelf->top__DOT__i_cache__DOT__quene_14),2);
        tracep->fullCData(oldp+1045,(vlSelf->top__DOT__i_cache__DOT__quene_15),2);
        tracep->fullCData(oldp+1046,((0x3fU & (IData)(vlSelf->top__DOT__IFU__DOT__fs_pc))),6);
        tracep->fullCData(oldp+1047,((0xfU & (IData)(
                                                     (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                      >> 6U)))),4);
        tracep->fullIData(oldp+1048,((0x3fffffU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 0xaU)))),22);
        tracep->fullSData(oldp+1049,((0x1f8U & ((IData)(vlSelf->top__DOT__IFU__DOT__fs_pc) 
                                                << 3U))),9);
        tracep->fullBit(oldp+1050,(vlSelf->top__DOT__i_cache__DOT__way0_hit));
        tracep->fullBit(oldp+1051,(vlSelf->top__DOT__i_cache__DOT__way1_hit));
        tracep->fullCData(oldp+1052,(vlSelf->top__DOT__i_cache__DOT__unuse_way),2);
        tracep->fullCData(oldp+1053,(vlSelf->top__DOT__i_cache__DOT__state),3);
        tracep->fullWData(oldp+1054,(vlSelf->top__DOT__d_cache__DOT__ram_0_0),512);
        tracep->fullWData(oldp+1070,(vlSelf->top__DOT__d_cache__DOT__ram_0_1),512);
        tracep->fullWData(oldp+1086,(vlSelf->top__DOT__d_cache__DOT__ram_0_2),512);
        tracep->fullWData(oldp+1102,(vlSelf->top__DOT__d_cache__DOT__ram_0_3),512);
        tracep->fullWData(oldp+1118,(vlSelf->top__DOT__d_cache__DOT__ram_0_4),512);
        tracep->fullWData(oldp+1134,(vlSelf->top__DOT__d_cache__DOT__ram_0_5),512);
        tracep->fullWData(oldp+1150,(vlSelf->top__DOT__d_cache__DOT__ram_0_6),512);
        tracep->fullWData(oldp+1166,(vlSelf->top__DOT__d_cache__DOT__ram_0_7),512);
        tracep->fullWData(oldp+1182,(vlSelf->top__DOT__d_cache__DOT__ram_0_8),512);
        tracep->fullWData(oldp+1198,(vlSelf->top__DOT__d_cache__DOT__ram_0_9),512);
        tracep->fullWData(oldp+1214,(vlSelf->top__DOT__d_cache__DOT__ram_0_10),512);
        tracep->fullWData(oldp+1230,(vlSelf->top__DOT__d_cache__DOT__ram_0_11),512);
        tracep->fullWData(oldp+1246,(vlSelf->top__DOT__d_cache__DOT__ram_0_12),512);
        tracep->fullWData(oldp+1262,(vlSelf->top__DOT__d_cache__DOT__ram_0_13),512);
        tracep->fullWData(oldp+1278,(vlSelf->top__DOT__d_cache__DOT__ram_0_14),512);
        tracep->fullWData(oldp+1294,(vlSelf->top__DOT__d_cache__DOT__ram_0_15),512);
        tracep->fullWData(oldp+1310,(vlSelf->top__DOT__d_cache__DOT__ram_1_0),512);
        tracep->fullWData(oldp+1326,(vlSelf->top__DOT__d_cache__DOT__ram_1_1),512);
        tracep->fullWData(oldp+1342,(vlSelf->top__DOT__d_cache__DOT__ram_1_2),512);
        tracep->fullWData(oldp+1358,(vlSelf->top__DOT__d_cache__DOT__ram_1_3),512);
        tracep->fullWData(oldp+1374,(vlSelf->top__DOT__d_cache__DOT__ram_1_4),512);
        tracep->fullWData(oldp+1390,(vlSelf->top__DOT__d_cache__DOT__ram_1_5),512);
        tracep->fullWData(oldp+1406,(vlSelf->top__DOT__d_cache__DOT__ram_1_6),512);
        tracep->fullWData(oldp+1422,(vlSelf->top__DOT__d_cache__DOT__ram_1_7),512);
        tracep->fullWData(oldp+1438,(vlSelf->top__DOT__d_cache__DOT__ram_1_8),512);
        tracep->fullWData(oldp+1454,(vlSelf->top__DOT__d_cache__DOT__ram_1_9),512);
        tracep->fullWData(oldp+1470,(vlSelf->top__DOT__d_cache__DOT__ram_1_10),512);
        tracep->fullWData(oldp+1486,(vlSelf->top__DOT__d_cache__DOT__ram_1_11),512);
        tracep->fullWData(oldp+1502,(vlSelf->top__DOT__d_cache__DOT__ram_1_12),512);
        tracep->fullWData(oldp+1518,(vlSelf->top__DOT__d_cache__DOT__ram_1_13),512);
        tracep->fullWData(oldp+1534,(vlSelf->top__DOT__d_cache__DOT__ram_1_14),512);
        tracep->fullWData(oldp+1550,(vlSelf->top__DOT__d_cache__DOT__ram_1_15),512);
        tracep->fullIData(oldp+1566,(vlSelf->top__DOT__d_cache__DOT__tag_0_0),32);
        tracep->fullIData(oldp+1567,(vlSelf->top__DOT__d_cache__DOT__tag_0_1),32);
        tracep->fullIData(oldp+1568,(vlSelf->top__DOT__d_cache__DOT__tag_0_2),32);
        tracep->fullIData(oldp+1569,(vlSelf->top__DOT__d_cache__DOT__tag_0_3),32);
        tracep->fullIData(oldp+1570,(vlSelf->top__DOT__d_cache__DOT__tag_0_4),32);
        tracep->fullIData(oldp+1571,(vlSelf->top__DOT__d_cache__DOT__tag_0_5),32);
        tracep->fullIData(oldp+1572,(vlSelf->top__DOT__d_cache__DOT__tag_0_6),32);
        tracep->fullIData(oldp+1573,(vlSelf->top__DOT__d_cache__DOT__tag_0_7),32);
        tracep->fullIData(oldp+1574,(vlSelf->top__DOT__d_cache__DOT__tag_0_8),32);
        tracep->fullIData(oldp+1575,(vlSelf->top__DOT__d_cache__DOT__tag_0_9),32);
        tracep->fullIData(oldp+1576,(vlSelf->top__DOT__d_cache__DOT__tag_0_10),32);
        tracep->fullIData(oldp+1577,(vlSelf->top__DOT__d_cache__DOT__tag_0_11),32);
        tracep->fullIData(oldp+1578,(vlSelf->top__DOT__d_cache__DOT__tag_0_12),32);
        tracep->fullIData(oldp+1579,(vlSelf->top__DOT__d_cache__DOT__tag_0_13),32);
        tracep->fullIData(oldp+1580,(vlSelf->top__DOT__d_cache__DOT__tag_0_14),32);
        tracep->fullIData(oldp+1581,(vlSelf->top__DOT__d_cache__DOT__tag_0_15),32);
        tracep->fullIData(oldp+1582,(vlSelf->top__DOT__d_cache__DOT__tag_1_0),32);
        tracep->fullIData(oldp+1583,(vlSelf->top__DOT__d_cache__DOT__tag_1_1),32);
        tracep->fullIData(oldp+1584,(vlSelf->top__DOT__d_cache__DOT__tag_1_2),32);
        tracep->fullIData(oldp+1585,(vlSelf->top__DOT__d_cache__DOT__tag_1_3),32);
        tracep->fullIData(oldp+1586,(vlSelf->top__DOT__d_cache__DOT__tag_1_4),32);
        tracep->fullIData(oldp+1587,(vlSelf->top__DOT__d_cache__DOT__tag_1_5),32);
        tracep->fullIData(oldp+1588,(vlSelf->top__DOT__d_cache__DOT__tag_1_6),32);
        tracep->fullIData(oldp+1589,(vlSelf->top__DOT__d_cache__DOT__tag_1_7),32);
        tracep->fullIData(oldp+1590,(vlSelf->top__DOT__d_cache__DOT__tag_1_8),32);
        tracep->fullIData(oldp+1591,(vlSelf->top__DOT__d_cache__DOT__tag_1_9),32);
        tracep->fullIData(oldp+1592,(vlSelf->top__DOT__d_cache__DOT__tag_1_10),32);
        tracep->fullIData(oldp+1593,(vlSelf->top__DOT__d_cache__DOT__tag_1_11),32);
        tracep->fullIData(oldp+1594,(vlSelf->top__DOT__d_cache__DOT__tag_1_12),32);
        tracep->fullIData(oldp+1595,(vlSelf->top__DOT__d_cache__DOT__tag_1_13),32);
        tracep->fullIData(oldp+1596,(vlSelf->top__DOT__d_cache__DOT__tag_1_14),32);
        tracep->fullIData(oldp+1597,(vlSelf->top__DOT__d_cache__DOT__tag_1_15),32);
        tracep->fullBit(oldp+1598,(vlSelf->top__DOT__d_cache__DOT__valid_0_0));
        tracep->fullBit(oldp+1599,(vlSelf->top__DOT__d_cache__DOT__valid_0_1));
        tracep->fullBit(oldp+1600,(vlSelf->top__DOT__d_cache__DOT__valid_0_2));
        tracep->fullBit(oldp+1601,(vlSelf->top__DOT__d_cache__DOT__valid_0_3));
        tracep->fullBit(oldp+1602,(vlSelf->top__DOT__d_cache__DOT__valid_0_4));
        tracep->fullBit(oldp+1603,(vlSelf->top__DOT__d_cache__DOT__valid_0_5));
        tracep->fullBit(oldp+1604,(vlSelf->top__DOT__d_cache__DOT__valid_0_6));
        tracep->fullBit(oldp+1605,(vlSelf->top__DOT__d_cache__DOT__valid_0_7));
        tracep->fullBit(oldp+1606,(vlSelf->top__DOT__d_cache__DOT__valid_0_8));
        tracep->fullBit(oldp+1607,(vlSelf->top__DOT__d_cache__DOT__valid_0_9));
        tracep->fullBit(oldp+1608,(vlSelf->top__DOT__d_cache__DOT__valid_0_10));
        tracep->fullBit(oldp+1609,(vlSelf->top__DOT__d_cache__DOT__valid_0_11));
        tracep->fullBit(oldp+1610,(vlSelf->top__DOT__d_cache__DOT__valid_0_12));
        tracep->fullBit(oldp+1611,(vlSelf->top__DOT__d_cache__DOT__valid_0_13));
        tracep->fullBit(oldp+1612,(vlSelf->top__DOT__d_cache__DOT__valid_0_14));
        tracep->fullBit(oldp+1613,(vlSelf->top__DOT__d_cache__DOT__valid_0_15));
        tracep->fullBit(oldp+1614,(vlSelf->top__DOT__d_cache__DOT__valid_1_0));
        tracep->fullBit(oldp+1615,(vlSelf->top__DOT__d_cache__DOT__valid_1_1));
        tracep->fullBit(oldp+1616,(vlSelf->top__DOT__d_cache__DOT__valid_1_2));
        tracep->fullBit(oldp+1617,(vlSelf->top__DOT__d_cache__DOT__valid_1_3));
        tracep->fullBit(oldp+1618,(vlSelf->top__DOT__d_cache__DOT__valid_1_4));
        tracep->fullBit(oldp+1619,(vlSelf->top__DOT__d_cache__DOT__valid_1_5));
        tracep->fullBit(oldp+1620,(vlSelf->top__DOT__d_cache__DOT__valid_1_6));
        tracep->fullBit(oldp+1621,(vlSelf->top__DOT__d_cache__DOT__valid_1_7));
        tracep->fullBit(oldp+1622,(vlSelf->top__DOT__d_cache__DOT__valid_1_8));
        tracep->fullBit(oldp+1623,(vlSelf->top__DOT__d_cache__DOT__valid_1_9));
        tracep->fullBit(oldp+1624,(vlSelf->top__DOT__d_cache__DOT__valid_1_10));
        tracep->fullBit(oldp+1625,(vlSelf->top__DOT__d_cache__DOT__valid_1_11));
        tracep->fullBit(oldp+1626,(vlSelf->top__DOT__d_cache__DOT__valid_1_12));
        tracep->fullBit(oldp+1627,(vlSelf->top__DOT__d_cache__DOT__valid_1_13));
        tracep->fullBit(oldp+1628,(vlSelf->top__DOT__d_cache__DOT__valid_1_14));
        tracep->fullBit(oldp+1629,(vlSelf->top__DOT__d_cache__DOT__valid_1_15));
        tracep->fullBit(oldp+1630,(vlSelf->top__DOT__d_cache__DOT__dirty_0_0));
        tracep->fullBit(oldp+1631,(vlSelf->top__DOT__d_cache__DOT__dirty_0_1));
        tracep->fullBit(oldp+1632,(vlSelf->top__DOT__d_cache__DOT__dirty_0_2));
        tracep->fullBit(oldp+1633,(vlSelf->top__DOT__d_cache__DOT__dirty_0_3));
        tracep->fullBit(oldp+1634,(vlSelf->top__DOT__d_cache__DOT__dirty_0_4));
        tracep->fullBit(oldp+1635,(vlSelf->top__DOT__d_cache__DOT__dirty_0_5));
        tracep->fullBit(oldp+1636,(vlSelf->top__DOT__d_cache__DOT__dirty_0_6));
        tracep->fullBit(oldp+1637,(vlSelf->top__DOT__d_cache__DOT__dirty_0_7));
        tracep->fullBit(oldp+1638,(vlSelf->top__DOT__d_cache__DOT__dirty_0_8));
        tracep->fullBit(oldp+1639,(vlSelf->top__DOT__d_cache__DOT__dirty_0_9));
        tracep->fullBit(oldp+1640,(vlSelf->top__DOT__d_cache__DOT__dirty_0_10));
        tracep->fullBit(oldp+1641,(vlSelf->top__DOT__d_cache__DOT__dirty_0_11));
        tracep->fullBit(oldp+1642,(vlSelf->top__DOT__d_cache__DOT__dirty_0_12));
        tracep->fullBit(oldp+1643,(vlSelf->top__DOT__d_cache__DOT__dirty_0_13));
        tracep->fullBit(oldp+1644,(vlSelf->top__DOT__d_cache__DOT__dirty_0_14));
        tracep->fullBit(oldp+1645,(vlSelf->top__DOT__d_cache__DOT__dirty_0_15));
        tracep->fullBit(oldp+1646,(vlSelf->top__DOT__d_cache__DOT__dirty_1_0));
        tracep->fullBit(oldp+1647,(vlSelf->top__DOT__d_cache__DOT__dirty_1_1));
        tracep->fullBit(oldp+1648,(vlSelf->top__DOT__d_cache__DOT__dirty_1_2));
        tracep->fullBit(oldp+1649,(vlSelf->top__DOT__d_cache__DOT__dirty_1_3));
        tracep->fullBit(oldp+1650,(vlSelf->top__DOT__d_cache__DOT__dirty_1_4));
        tracep->fullBit(oldp+1651,(vlSelf->top__DOT__d_cache__DOT__dirty_1_5));
        tracep->fullBit(oldp+1652,(vlSelf->top__DOT__d_cache__DOT__dirty_1_6));
        tracep->fullBit(oldp+1653,(vlSelf->top__DOT__d_cache__DOT__dirty_1_7));
        tracep->fullBit(oldp+1654,(vlSelf->top__DOT__d_cache__DOT__dirty_1_8));
        tracep->fullBit(oldp+1655,(vlSelf->top__DOT__d_cache__DOT__dirty_1_9));
        tracep->fullBit(oldp+1656,(vlSelf->top__DOT__d_cache__DOT__dirty_1_10));
        tracep->fullBit(oldp+1657,(vlSelf->top__DOT__d_cache__DOT__dirty_1_11));
        tracep->fullBit(oldp+1658,(vlSelf->top__DOT__d_cache__DOT__dirty_1_12));
        tracep->fullBit(oldp+1659,(vlSelf->top__DOT__d_cache__DOT__dirty_1_13));
        tracep->fullBit(oldp+1660,(vlSelf->top__DOT__d_cache__DOT__dirty_1_14));
        tracep->fullBit(oldp+1661,(vlSelf->top__DOT__d_cache__DOT__dirty_1_15));
        tracep->fullWData(oldp+1662,(vlSelf->top__DOT__d_cache__DOT__write_back_data),512);
        tracep->fullIData(oldp+1678,(vlSelf->top__DOT__d_cache__DOT__write_back_addr),32);
        tracep->fullQData(oldp+1679,(vlSelf->top__DOT__d_cache__DOT__receive_data_0),64);
        tracep->fullQData(oldp+1681,(vlSelf->top__DOT__d_cache__DOT__receive_data_1),64);
        tracep->fullQData(oldp+1683,(vlSelf->top__DOT__d_cache__DOT__receive_data_2),64);
        tracep->fullQData(oldp+1685,(vlSelf->top__DOT__d_cache__DOT__receive_data_3),64);
        tracep->fullQData(oldp+1687,(vlSelf->top__DOT__d_cache__DOT__receive_data_4),64);
        tracep->fullQData(oldp+1689,(vlSelf->top__DOT__d_cache__DOT__receive_data_5),64);
        tracep->fullQData(oldp+1691,(vlSelf->top__DOT__d_cache__DOT__receive_data_6),64);
        tracep->fullQData(oldp+1693,(vlSelf->top__DOT__d_cache__DOT__receive_data_7),64);
        tracep->fullCData(oldp+1695,(vlSelf->top__DOT__d_cache__DOT__receive_num),3);
        tracep->fullCData(oldp+1696,(vlSelf->top__DOT__d_cache__DOT__quene_0),2);
        tracep->fullCData(oldp+1697,(vlSelf->top__DOT__d_cache__DOT__quene_1),2);
        tracep->fullCData(oldp+1698,(vlSelf->top__DOT__d_cache__DOT__quene_2),2);
        tracep->fullCData(oldp+1699,(vlSelf->top__DOT__d_cache__DOT__quene_3),2);
        tracep->fullCData(oldp+1700,(vlSelf->top__DOT__d_cache__DOT__quene_4),2);
        tracep->fullCData(oldp+1701,(vlSelf->top__DOT__d_cache__DOT__quene_5),2);
        tracep->fullCData(oldp+1702,(vlSelf->top__DOT__d_cache__DOT__quene_6),2);
        tracep->fullCData(oldp+1703,(vlSelf->top__DOT__d_cache__DOT__quene_7),2);
        tracep->fullCData(oldp+1704,(vlSelf->top__DOT__d_cache__DOT__quene_8),2);
        tracep->fullCData(oldp+1705,(vlSelf->top__DOT__d_cache__DOT__quene_9),2);
        tracep->fullCData(oldp+1706,(vlSelf->top__DOT__d_cache__DOT__quene_10),2);
        tracep->fullCData(oldp+1707,(vlSelf->top__DOT__d_cache__DOT__quene_11),2);
        tracep->fullCData(oldp+1708,(vlSelf->top__DOT__d_cache__DOT__quene_12),2);
        tracep->fullCData(oldp+1709,(vlSelf->top__DOT__d_cache__DOT__quene_13),2);
        tracep->fullCData(oldp+1710,(vlSelf->top__DOT__d_cache__DOT__quene_14),2);
        tracep->fullCData(oldp+1711,(vlSelf->top__DOT__d_cache__DOT__quene_15),2);
        tracep->fullCData(oldp+1712,((0x3fU & (IData)(vlSelf->top__DOT__LSU__DOT__maddr))),6);
        tracep->fullCData(oldp+1713,((0xfU & (IData)(
                                                     (vlSelf->top__DOT__LSU__DOT__maddr 
                                                      >> 6U)))),4);
        tracep->fullIData(oldp+1714,((0x3fffffU & (IData)(
                                                          (vlSelf->top__DOT__LSU__DOT__maddr 
                                                           >> 0xaU)))),22);
        tracep->fullSData(oldp+1715,((0x1f8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                                << 3U))),9);
        tracep->fullQData(oldp+1716,(vlSelf->top__DOT__d_cache__DOT__wmask),64);
        tracep->fullBit(oldp+1718,(vlSelf->top__DOT__d_cache__DOT__way0_hit));
        tracep->fullBit(oldp+1719,(vlSelf->top__DOT__d_cache__DOT__way1_hit));
        tracep->fullCData(oldp+1720,(vlSelf->top__DOT__d_cache__DOT__unuse_way),2);
        tracep->fullCData(oldp+1721,(vlSelf->top__DOT__d_cache__DOT__state),4);
        tracep->fullQData(oldp+1722,(vlSelf->top__DOT__axi__DOT__araddr),64);
        tracep->fullQData(oldp+1724,(vlSelf->top__DOT__axi__DOT__awaddr),64);
        tracep->fullCData(oldp+1726,(vlSelf->top__DOT__axi__DOT__arlen),8);
        tracep->fullCData(oldp+1727,(vlSelf->top__DOT__axi__DOT__awlen),8);
        tracep->fullCData(oldp+1728,(vlSelf->top__DOT__axi__DOT__state),3);
        tracep->fullBit(oldp+1729,(vlSelf->clock));
        tracep->fullBit(oldp+1730,(vlSelf->reset));
        tracep->fullIData(oldp+1731,(vlSelf->io_inst),32);
        tracep->fullQData(oldp+1732,(vlSelf->io_pc),64);
        tracep->fullBit(oldp+1734,(vlSelf->io_step));
        tracep->fullBit(oldp+1735,(1U));
        tracep->fullCData(oldp+1736,(0U),5);
        tracep->fullCData(oldp+1737,(1U),5);
        tracep->fullCData(oldp+1738,(2U),5);
        tracep->fullCData(oldp+1739,(3U),5);
        tracep->fullCData(oldp+1740,(4U),5);
        tracep->fullCData(oldp+1741,(5U),5);
        tracep->fullCData(oldp+1742,(6U),5);
        tracep->fullCData(oldp+1743,(7U),5);
        tracep->fullCData(oldp+1744,(8U),5);
        tracep->fullCData(oldp+1745,(9U),5);
        tracep->fullCData(oldp+1746,(0xaU),5);
        tracep->fullCData(oldp+1747,(0xbU),5);
        tracep->fullCData(oldp+1748,(0xcU),5);
        tracep->fullCData(oldp+1749,(0xdU),5);
        tracep->fullCData(oldp+1750,(0xeU),5);
        tracep->fullCData(oldp+1751,(0xfU),5);
        tracep->fullCData(oldp+1752,(0x10U),5);
        tracep->fullCData(oldp+1753,(0x11U),5);
        tracep->fullCData(oldp+1754,(0x12U),5);
        tracep->fullCData(oldp+1755,(0x13U),5);
        tracep->fullCData(oldp+1756,(0x14U),5);
        tracep->fullCData(oldp+1757,(0x15U),5);
        tracep->fullCData(oldp+1758,(0x16U),5);
        tracep->fullCData(oldp+1759,(0x17U),5);
        tracep->fullCData(oldp+1760,(0x18U),5);
        tracep->fullCData(oldp+1761,(0x19U),5);
        tracep->fullCData(oldp+1762,(0x1aU),5);
        tracep->fullCData(oldp+1763,(0x1bU),5);
        tracep->fullCData(oldp+1764,(0x1cU),5);
        tracep->fullCData(oldp+1765,(0x1dU),5);
        tracep->fullCData(oldp+1766,(0x1eU),5);
        tracep->fullCData(oldp+1767,(0x1fU),5);
        tracep->fullCData(oldp+1768,(3U),2);
    }
}
