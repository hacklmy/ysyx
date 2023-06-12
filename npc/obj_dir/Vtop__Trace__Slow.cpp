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
        tracep->declBit(c+1804,"clock", false,-1);
        tracep->declBit(c+1805,"reset", false,-1);
        tracep->declBus(c+1806,"io_inst", false,-1, 31,0);
        tracep->declQuad(c+1807,"io_pc", false,-1, 63,0);
        tracep->declBit(c+1809,"io_step", false,-1);
        tracep->declBit(c+1804,"top clock", false,-1);
        tracep->declBit(c+1805,"top reset", false,-1);
        tracep->declBus(c+1806,"top io_inst", false,-1, 31,0);
        tracep->declQuad(c+1807,"top io_pc", false,-1, 63,0);
        tracep->declBit(c+1809,"top io_step", false,-1);
        tracep->declBit(c+1804,"top Register_clock", false,-1);
        tracep->declBus(c+1,"top Register_io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top Register_io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top Register_io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top Register_io_rdata2", false,-1, 63,0);
        tracep->declBit(c+7,"top Register_io_we", false,-1);
        tracep->declBus(c+8,"top Register_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top Register_io_wdata", false,-1, 63,0);
        tracep->declBit(c+1804,"top IFU_clock", false,-1);
        tracep->declBit(c+1805,"top IFU_reset", false,-1);
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
        tracep->declBit(c+1804,"top IDU_clock", false,-1);
        tracep->declBit(c+1805,"top IDU_reset", false,-1);
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
        tracep->declBit(c+1804,"top EXU_clock", false,-1);
        tracep->declBit(c+1805,"top EXU_reset", false,-1);
        tracep->declQuad(c+31,"top EXU_io_pc", false,-1, 63,0);
        tracep->declBit(c+29,"top EXU_io_ds_to_es_valid", false,-1);
        tracep->declBit(c+55,"top EXU_io_ms_allowin", false,-1);
        tracep->declBit(c+30,"top EXU_io_es_allowin", false,-1);
        tracep->declBus(c+33,"top EXU_io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+34,"top EXU_io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+36,"top EXU_io_src2_value", false,-1, 63,0);
        tracep->declBus(c+38,"top EXU_io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+39,"top EXU_io_store_data", false,-1, 63,0);
        tracep->declBit(c+56,"top EXU_io_es_to_ms_valid", false,-1);
        tracep->declBus(c+45,"top EXU_io_load_type", false,-1, 2,0);
        tracep->declQuad(c+57,"top EXU_io_to_ms_pc", false,-1, 63,0);
        tracep->declQuad(c+59,"top EXU_io_to_ms_alures", false,-1, 63,0);
        tracep->declQuad(c+61,"top EXU_io_to_ms_store_data", false,-1, 63,0);
        tracep->declBit(c+63,"top EXU_io_to_ms_wen", false,-1);
        tracep->declBus(c+64,"top EXU_io_to_ms_wstrb", false,-1, 7,0);
        tracep->declBit(c+65,"top EXU_io_to_ms_ren", false,-1);
        tracep->declQuad(c+59,"top EXU_io_to_ms_maddr", false,-1, 63,0);
        tracep->declBus(c+52,"top EXU_io_to_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+46,"top EXU_io_to_ms_rf_we", false,-1);
        tracep->declBus(c+66,"top EXU_io_to_ms_load_type", false,-1, 2,0);
        tracep->declBit(c+41,"top EXU_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+42,"top EXU_io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+43,"top EXU_io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+44,"top EXU_io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBit(c+49,"top EXU_io_es_valid", false,-1);
        tracep->declBit(c+46,"top EXU_io_es_rf_we", false,-1);
        tracep->declBus(c+52,"top EXU_io_es_rf_dst", false,-1, 4,0);
        tracep->declBit(c+1804,"top LSU_clock", false,-1);
        tracep->declBit(c+1805,"top LSU_reset", false,-1);
        tracep->declQuad(c+57,"top LSU_io_pc", false,-1, 63,0);
        tracep->declBit(c+56,"top LSU_io_es_to_ms_valid", false,-1);
        tracep->declBit(c+55,"top LSU_io_ms_allowin", false,-1);
        tracep->declBit(c+46,"top LSU_io_rf_we", false,-1);
        tracep->declBus(c+52,"top LSU_io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+59,"top LSU_io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+61,"top LSU_io_store_data", false,-1, 63,0);
        tracep->declBus(c+66,"top LSU_io_load_type", false,-1, 2,0);
        tracep->declBit(c+63,"top LSU_io_wen", false,-1);
        tracep->declBus(c+64,"top LSU_io_wstrb", false,-1, 7,0);
        tracep->declBit(c+65,"top LSU_io_ren", false,-1);
        tracep->declQuad(c+59,"top LSU_io_maddr", false,-1, 63,0);
        tracep->declQuad(c+67,"top LSU_io_to_ws_pc", false,-1, 63,0);
        tracep->declQuad(c+69,"top LSU_io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+71,"top LSU_io_ms_to_ws_valid", false,-1);
        tracep->declBit(c+72,"top LSU_io_to_ws_rf_we", false,-1);
        tracep->declBus(c+53,"top LSU_io_to_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+50,"top LSU_io_ms_valid", false,-1);
        tracep->declBit(c+47,"top LSU_io_ms_rf_we", false,-1);
        tracep->declBus(c+53,"top LSU_io_ms_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+73,"top LSU_io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+75,"top LSU_io_axi_in_rvalid", false,-1);
        tracep->declBit(c+76,"top LSU_io_axi_in_wready", false,-1);
        tracep->declBus(c+77,"top LSU_io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+78,"top LSU_io_axi_out_arvalid", false,-1);
        tracep->declBus(c+77,"top LSU_io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBit(c+79,"top LSU_io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+80,"top LSU_io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+82,"top LSU_io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+83,"top LSU_io_axi_out_wvalid", false,-1);
        tracep->declBit(c+1804,"top WBU_clock", false,-1);
        tracep->declBit(c+1805,"top WBU_reset", false,-1);
        tracep->declQuad(c+67,"top WBU_io_pc", false,-1, 63,0);
        tracep->declBit(c+71,"top WBU_io_ms_to_ws_valid", false,-1);
        tracep->declQuad(c+69,"top WBU_io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+72,"top WBU_io_rf_we", false,-1);
        tracep->declBus(c+53,"top WBU_io_rf_dst", false,-1, 4,0);
        tracep->declBit(c+7,"top WBU_io_we", false,-1);
        tracep->declBus(c+8,"top WBU_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU_io_wdata", false,-1, 63,0);
        tracep->declBit(c+51,"top WBU_io_ws_valid", false,-1);
        tracep->declBit(c+48,"top WBU_io_ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU_io_ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+84,"top WBU_io_ws_pc", false,-1, 63,0);
        tracep->declBit(c+1804,"top arbiter_clock", false,-1);
        tracep->declBit(c+1805,"top arbiter_reset", false,-1);
        tracep->declBus(c+86,"top arbiter_io_ifu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+87,"top arbiter_io_ifu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+88,"top arbiter_io_ifu_axi_in_arvalid", false,-1);
        tracep->declBit(c+89,"top arbiter_io_ifu_axi_in_rready", false,-1);
        tracep->declQuad(c+90,"top arbiter_io_ifu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+92,"top arbiter_io_ifu_axi_out_rlast", false,-1);
        tracep->declBit(c+93,"top arbiter_io_ifu_axi_out_rvalid", false,-1);
        tracep->declBus(c+94,"top arbiter_io_lsu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+95,"top arbiter_io_lsu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+96,"top arbiter_io_lsu_axi_in_arvalid", false,-1);
        tracep->declBit(c+97,"top arbiter_io_lsu_axi_in_rready", false,-1);
        tracep->declBus(c+98,"top arbiter_io_lsu_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+99,"top arbiter_io_lsu_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+100,"top arbiter_io_lsu_axi_in_awvalid", false,-1);
        tracep->declQuad(c+101,"top arbiter_io_lsu_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+103,"top arbiter_io_lsu_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+104,"top arbiter_io_lsu_axi_in_wvalid", false,-1);
        tracep->declBit(c+105,"top arbiter_io_lsu_axi_in_bready", false,-1);
        tracep->declQuad(c+106,"top arbiter_io_lsu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+108,"top arbiter_io_lsu_axi_out_rlast", false,-1);
        tracep->declBit(c+109,"top arbiter_io_lsu_axi_out_rvalid", false,-1);
        tracep->declBit(c+110,"top arbiter_io_lsu_axi_out_wready", false,-1);
        tracep->declBit(c+111,"top arbiter_io_lsu_axi_out_bvalid", false,-1);
        tracep->declQuad(c+112,"top arbiter_io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+114,"top arbiter_io_axi_in_rlast", false,-1);
        tracep->declBit(c+115,"top arbiter_io_axi_in_rvalid", false,-1);
        tracep->declBit(c+116,"top arbiter_io_axi_in_wready", false,-1);
        tracep->declBit(c+117,"top arbiter_io_axi_in_bvalid", false,-1);
        tracep->declBus(c+118,"top arbiter_io_axi_out_araddr", false,-1, 31,0);
        tracep->declBus(c+119,"top arbiter_io_axi_out_arlen", false,-1, 7,0);
        tracep->declBit(c+120,"top arbiter_io_axi_out_arvalid", false,-1);
        tracep->declBit(c+121,"top arbiter_io_axi_out_rready", false,-1);
        tracep->declBus(c+122,"top arbiter_io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBus(c+123,"top arbiter_io_axi_out_awlen", false,-1, 7,0);
        tracep->declBit(c+124,"top arbiter_io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+125,"top arbiter_io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+127,"top arbiter_io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+128,"top arbiter_io_axi_out_wvalid", false,-1);
        tracep->declBit(c+129,"top arbiter_io_axi_out_bready", false,-1);
        tracep->declBit(c+1804,"top i_cache_clock", false,-1);
        tracep->declBit(c+1805,"top i_cache_reset", false,-1);
        tracep->declBus(c+23,"top i_cache_io_from_ifu_araddr", false,-1, 31,0);
        tracep->declBit(c+24,"top i_cache_io_from_ifu_arvalid", false,-1);
        tracep->declBit(c+25,"top i_cache_io_from_ifu_rready", false,-1);
        tracep->declQuad(c+19,"top i_cache_io_to_ifu_rdata", false,-1, 63,0);
        tracep->declBit(c+21,"top i_cache_io_to_ifu_rlast", false,-1);
        tracep->declBit(c+22,"top i_cache_io_to_ifu_rvalid", false,-1);
        tracep->declBus(c+86,"top i_cache_io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+87,"top i_cache_io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+88,"top i_cache_io_to_axi_arvalid", false,-1);
        tracep->declBit(c+89,"top i_cache_io_to_axi_rready", false,-1);
        tracep->declQuad(c+90,"top i_cache_io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+92,"top i_cache_io_from_axi_rlast", false,-1);
        tracep->declBit(c+93,"top i_cache_io_from_axi_rvalid", false,-1);
        tracep->declBit(c+28,"top i_cache_io_cache_init", false,-1);
        tracep->declBit(c+27,"top i_cache_io_clear_cache", false,-1);
        tracep->declBit(c+1804,"top d_cache_clock", false,-1);
        tracep->declBit(c+1805,"top d_cache_reset", false,-1);
        tracep->declBus(c+77,"top d_cache_io_from_lsu_araddr", false,-1, 31,0);
        tracep->declBit(c+78,"top d_cache_io_from_lsu_arvalid", false,-1);
        tracep->declBus(c+77,"top d_cache_io_from_lsu_awaddr", false,-1, 31,0);
        tracep->declBit(c+79,"top d_cache_io_from_lsu_awvalid", false,-1);
        tracep->declQuad(c+80,"top d_cache_io_from_lsu_wdata", false,-1, 63,0);
        tracep->declBus(c+82,"top d_cache_io_from_lsu_wstrb", false,-1, 7,0);
        tracep->declBit(c+83,"top d_cache_io_from_lsu_wvalid", false,-1);
        tracep->declQuad(c+73,"top d_cache_io_to_lsu_rdata", false,-1, 63,0);
        tracep->declBit(c+75,"top d_cache_io_to_lsu_rvalid", false,-1);
        tracep->declBit(c+76,"top d_cache_io_to_lsu_wready", false,-1);
        tracep->declBus(c+94,"top d_cache_io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+95,"top d_cache_io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+96,"top d_cache_io_to_axi_arvalid", false,-1);
        tracep->declBit(c+97,"top d_cache_io_to_axi_rready", false,-1);
        tracep->declBus(c+98,"top d_cache_io_to_axi_awaddr", false,-1, 31,0);
        tracep->declBus(c+99,"top d_cache_io_to_axi_awlen", false,-1, 7,0);
        tracep->declBit(c+100,"top d_cache_io_to_axi_awvalid", false,-1);
        tracep->declQuad(c+101,"top d_cache_io_to_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+103,"top d_cache_io_to_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+104,"top d_cache_io_to_axi_wvalid", false,-1);
        tracep->declBit(c+105,"top d_cache_io_to_axi_bready", false,-1);
        tracep->declQuad(c+106,"top d_cache_io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+108,"top d_cache_io_from_axi_rlast", false,-1);
        tracep->declBit(c+109,"top d_cache_io_from_axi_rvalid", false,-1);
        tracep->declBit(c+110,"top d_cache_io_from_axi_wready", false,-1);
        tracep->declBit(c+111,"top d_cache_io_from_axi_bvalid", false,-1);
        tracep->declBit(c+1804,"top axi_clock", false,-1);
        tracep->declBit(c+1805,"top axi_reset", false,-1);
        tracep->declBus(c+118,"top axi_io_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+119,"top axi_io_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+120,"top axi_io_axi_in_arvalid", false,-1);
        tracep->declBit(c+121,"top axi_io_axi_in_rready", false,-1);
        tracep->declBus(c+122,"top axi_io_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+123,"top axi_io_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+124,"top axi_io_axi_in_awvalid", false,-1);
        tracep->declQuad(c+125,"top axi_io_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+127,"top axi_io_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+128,"top axi_io_axi_in_wvalid", false,-1);
        tracep->declBit(c+129,"top axi_io_axi_in_bready", false,-1);
        tracep->declQuad(c+112,"top axi_io_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+114,"top axi_io_axi_out_rlast", false,-1);
        tracep->declBit(c+115,"top axi_io_axi_out_rvalid", false,-1);
        tracep->declBit(c+116,"top axi_io_axi_out_wready", false,-1);
        tracep->declBit(c+117,"top axi_io_axi_out_bvalid", false,-1);
        tracep->declBus(c+130,"top dpi_flag", false,-1, 31,0);
        tracep->declBus(c+131,"top dpi_ecall_flag", false,-1, 31,0);
        tracep->declQuad(c+132,"top dpi_pc", false,-1, 63,0);
        tracep->declBit(c+134,"top diff_step", false,-1);
        tracep->declBit(c+1804,"top Register clock", false,-1);
        tracep->declBus(c+1,"top Register io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top Register io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top Register io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top Register io_rdata2", false,-1, 63,0);
        tracep->declBit(c+7,"top Register io_we", false,-1);
        tracep->declBus(c+8,"top Register io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top Register io_wdata", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+135+i*2,"top Register Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+1810,"top Register Reg_io_rdata1_MPORT_en", false,-1);
        tracep->declBus(c+1,"top Register Reg_io_rdata1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+199,"top Register Reg_io_rdata1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_io_rdata2_MPORT_en", false,-1);
        tracep->declBus(c+2,"top Register Reg_io_rdata2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+201,"top Register Reg_io_rdata2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_0_MPORT_en", false,-1);
        tracep->declBus(c+1811,"top Register Reg_reg_trace_io_input_reg_0_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+203,"top Register Reg_reg_trace_io_input_reg_0_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_1_MPORT_en", false,-1);
        tracep->declBus(c+1812,"top Register Reg_reg_trace_io_input_reg_1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+205,"top Register Reg_reg_trace_io_input_reg_1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_2_MPORT_en", false,-1);
        tracep->declBus(c+1813,"top Register Reg_reg_trace_io_input_reg_2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+207,"top Register Reg_reg_trace_io_input_reg_2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_3_MPORT_en", false,-1);
        tracep->declBus(c+1814,"top Register Reg_reg_trace_io_input_reg_3_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+209,"top Register Reg_reg_trace_io_input_reg_3_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_4_MPORT_en", false,-1);
        tracep->declBus(c+1815,"top Register Reg_reg_trace_io_input_reg_4_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+211,"top Register Reg_reg_trace_io_input_reg_4_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_5_MPORT_en", false,-1);
        tracep->declBus(c+1816,"top Register Reg_reg_trace_io_input_reg_5_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+213,"top Register Reg_reg_trace_io_input_reg_5_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_6_MPORT_en", false,-1);
        tracep->declBus(c+1817,"top Register Reg_reg_trace_io_input_reg_6_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+215,"top Register Reg_reg_trace_io_input_reg_6_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_7_MPORT_en", false,-1);
        tracep->declBus(c+1818,"top Register Reg_reg_trace_io_input_reg_7_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+217,"top Register Reg_reg_trace_io_input_reg_7_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_8_MPORT_en", false,-1);
        tracep->declBus(c+1819,"top Register Reg_reg_trace_io_input_reg_8_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+219,"top Register Reg_reg_trace_io_input_reg_8_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_9_MPORT_en", false,-1);
        tracep->declBus(c+1820,"top Register Reg_reg_trace_io_input_reg_9_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+221,"top Register Reg_reg_trace_io_input_reg_9_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_10_MPORT_en", false,-1);
        tracep->declBus(c+1821,"top Register Reg_reg_trace_io_input_reg_10_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+223,"top Register Reg_reg_trace_io_input_reg_10_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_11_MPORT_en", false,-1);
        tracep->declBus(c+1822,"top Register Reg_reg_trace_io_input_reg_11_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+225,"top Register Reg_reg_trace_io_input_reg_11_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_12_MPORT_en", false,-1);
        tracep->declBus(c+1823,"top Register Reg_reg_trace_io_input_reg_12_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+227,"top Register Reg_reg_trace_io_input_reg_12_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_13_MPORT_en", false,-1);
        tracep->declBus(c+1824,"top Register Reg_reg_trace_io_input_reg_13_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+229,"top Register Reg_reg_trace_io_input_reg_13_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_14_MPORT_en", false,-1);
        tracep->declBus(c+1825,"top Register Reg_reg_trace_io_input_reg_14_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+231,"top Register Reg_reg_trace_io_input_reg_14_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_15_MPORT_en", false,-1);
        tracep->declBus(c+1826,"top Register Reg_reg_trace_io_input_reg_15_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+233,"top Register Reg_reg_trace_io_input_reg_15_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_16_MPORT_en", false,-1);
        tracep->declBus(c+1827,"top Register Reg_reg_trace_io_input_reg_16_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+235,"top Register Reg_reg_trace_io_input_reg_16_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_17_MPORT_en", false,-1);
        tracep->declBus(c+1828,"top Register Reg_reg_trace_io_input_reg_17_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+237,"top Register Reg_reg_trace_io_input_reg_17_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_18_MPORT_en", false,-1);
        tracep->declBus(c+1829,"top Register Reg_reg_trace_io_input_reg_18_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+239,"top Register Reg_reg_trace_io_input_reg_18_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_19_MPORT_en", false,-1);
        tracep->declBus(c+1830,"top Register Reg_reg_trace_io_input_reg_19_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+241,"top Register Reg_reg_trace_io_input_reg_19_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_20_MPORT_en", false,-1);
        tracep->declBus(c+1831,"top Register Reg_reg_trace_io_input_reg_20_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+243,"top Register Reg_reg_trace_io_input_reg_20_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_21_MPORT_en", false,-1);
        tracep->declBus(c+1832,"top Register Reg_reg_trace_io_input_reg_21_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+245,"top Register Reg_reg_trace_io_input_reg_21_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_22_MPORT_en", false,-1);
        tracep->declBus(c+1833,"top Register Reg_reg_trace_io_input_reg_22_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+247,"top Register Reg_reg_trace_io_input_reg_22_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_23_MPORT_en", false,-1);
        tracep->declBus(c+1834,"top Register Reg_reg_trace_io_input_reg_23_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+249,"top Register Reg_reg_trace_io_input_reg_23_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_24_MPORT_en", false,-1);
        tracep->declBus(c+1835,"top Register Reg_reg_trace_io_input_reg_24_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+251,"top Register Reg_reg_trace_io_input_reg_24_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_25_MPORT_en", false,-1);
        tracep->declBus(c+1836,"top Register Reg_reg_trace_io_input_reg_25_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+253,"top Register Reg_reg_trace_io_input_reg_25_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_26_MPORT_en", false,-1);
        tracep->declBus(c+1837,"top Register Reg_reg_trace_io_input_reg_26_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+255,"top Register Reg_reg_trace_io_input_reg_26_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_27_MPORT_en", false,-1);
        tracep->declBus(c+1838,"top Register Reg_reg_trace_io_input_reg_27_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+257,"top Register Reg_reg_trace_io_input_reg_27_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_28_MPORT_en", false,-1);
        tracep->declBus(c+1839,"top Register Reg_reg_trace_io_input_reg_28_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+259,"top Register Reg_reg_trace_io_input_reg_28_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_29_MPORT_en", false,-1);
        tracep->declBus(c+1840,"top Register Reg_reg_trace_io_input_reg_29_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+261,"top Register Reg_reg_trace_io_input_reg_29_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_30_MPORT_en", false,-1);
        tracep->declBus(c+1841,"top Register Reg_reg_trace_io_input_reg_30_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+263,"top Register Reg_reg_trace_io_input_reg_30_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1810,"top Register Reg_reg_trace_io_input_reg_31_MPORT_en", false,-1);
        tracep->declBus(c+1842,"top Register Reg_reg_trace_io_input_reg_31_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+265,"top Register Reg_reg_trace_io_input_reg_31_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+9,"top Register Reg_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+8,"top Register Reg_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+1810,"top Register Reg_MPORT_mask", false,-1);
        tracep->declBit(c+267,"top Register Reg_MPORT_en", false,-1);
        tracep->declQuad(c+203,"top Register reg_trace_input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+205,"top Register reg_trace_input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+207,"top Register reg_trace_input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+209,"top Register reg_trace_input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+211,"top Register reg_trace_input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+213,"top Register reg_trace_input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+215,"top Register reg_trace_input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+217,"top Register reg_trace_input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+219,"top Register reg_trace_input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+221,"top Register reg_trace_input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+223,"top Register reg_trace_input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+225,"top Register reg_trace_input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+227,"top Register reg_trace_input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+229,"top Register reg_trace_input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+231,"top Register reg_trace_input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+233,"top Register reg_trace_input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+235,"top Register reg_trace_input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+237,"top Register reg_trace_input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+239,"top Register reg_trace_input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+241,"top Register reg_trace_input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+243,"top Register reg_trace_input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+245,"top Register reg_trace_input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+247,"top Register reg_trace_input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+249,"top Register reg_trace_input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+251,"top Register reg_trace_input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+253,"top Register reg_trace_input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+255,"top Register reg_trace_input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+257,"top Register reg_trace_input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+259,"top Register reg_trace_input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+261,"top Register reg_trace_input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+263,"top Register reg_trace_input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+265,"top Register reg_trace_input_reg_31", false,-1, 63,0);
        tracep->declQuad(c+203,"top Register reg_trace input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+205,"top Register reg_trace input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+207,"top Register reg_trace input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+209,"top Register reg_trace input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+211,"top Register reg_trace input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+213,"top Register reg_trace input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+215,"top Register reg_trace input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+217,"top Register reg_trace input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+219,"top Register reg_trace input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+221,"top Register reg_trace input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+223,"top Register reg_trace input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+225,"top Register reg_trace input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+227,"top Register reg_trace input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+229,"top Register reg_trace input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+231,"top Register reg_trace input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+233,"top Register reg_trace input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+235,"top Register reg_trace input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+237,"top Register reg_trace input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+239,"top Register reg_trace input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+241,"top Register reg_trace input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+243,"top Register reg_trace input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+245,"top Register reg_trace input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+247,"top Register reg_trace input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+249,"top Register reg_trace input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+251,"top Register reg_trace input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+253,"top Register reg_trace input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+255,"top Register reg_trace input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+257,"top Register reg_trace input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+259,"top Register reg_trace input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+261,"top Register reg_trace input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+263,"top Register reg_trace input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+265,"top Register reg_trace input_reg_31", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+268+i*2,"top Register reg_trace traceregs", true,(i+0), 63,0);}}
        tracep->declBit(c+1804,"top IFU clock", false,-1);
        tracep->declBit(c+1805,"top IFU reset", false,-1);
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
        tracep->declBit(c+332,"top IFU fs_valid", false,-1);
        tracep->declBit(c+333,"top IFU fs_ready_go", false,-1);
        tracep->declBit(c+334,"top IFU cache_init", false,-1);
        tracep->declBit(c+335,"top IFU fs_to_ds_valid", false,-1);
        tracep->declQuad(c+15,"top IFU fs_pc", false,-1, 63,0);
        tracep->declBus(c+18,"top IFU fs_inst", false,-1, 31,0);
        tracep->declQuad(c+336,"top IFU seq_pc", false,-1, 63,0);
        tracep->declBit(c+338,"top IFU fs_allowin", false,-1);
        tracep->declBit(c+25,"top IFU inst_ready", false,-1);
        tracep->declBit(c+1804,"top IDU clock", false,-1);
        tracep->declBit(c+1805,"top IDU reset", false,-1);
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
        tracep->declBit(c+1804,"top IDU csr_reg_clock", false,-1);
        tracep->declBit(c+339,"top IDU csr_reg_io_wen1", false,-1);
        tracep->declBit(c+340,"top IDU csr_reg_io_wen2", false,-1);
        tracep->declBus(c+341,"top IDU csr_reg_io_waddr1", false,-1, 1,0);
        tracep->declQuad(c+342,"top IDU csr_reg_io_wdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top IDU csr_reg_io_wdata2", false,-1, 63,0);
        tracep->declBus(c+344,"top IDU csr_reg_io_raddr", false,-1, 1,0);
        tracep->declQuad(c+345,"top IDU csr_reg_io_rdata", false,-1, 63,0);
        tracep->declBit(c+54,"top IDU ds_valid", false,-1);
        tracep->declQuad(c+31,"top IDU ds_pc", false,-1, 63,0);
        tracep->declBus(c+347,"top IDU inst", false,-1, 31,0);
        tracep->declBit(c+348,"top IDU br_taken_cancel", false,-1);
        tracep->declBit(c+349,"top IDU src1_is_pc", false,-1);
        tracep->declBus(c+350,"top IDU inst_type", false,-1, 31,0);
        tracep->declBus(c+351,"top IDU csr_write", false,-1, 1,0);
        tracep->declBus(c+1,"top IDU rs1", false,-1, 4,0);
        tracep->declBit(c+352,"top IDU src2_is_imm", false,-1);
        tracep->declBus(c+353,"top IDU rs2", false,-1, 4,0);
        tracep->declBit(c+354,"top IDU conflict", false,-1);
        tracep->declBus(c+33,"top IDU ALUop", false,-1, 31,0);
        tracep->declBit(c+355,"top IDU ds_ready_go", false,-1);
        tracep->declBit(c+356,"top IDU ds_allowin", false,-1);
        tracep->declBit(c+357,"top IDU br_taken", false,-1);
        tracep->declBus(c+38,"top IDU rd", false,-1, 4,0);
        tracep->declBit(c+26,"top IDU fence", false,-1);
        tracep->declBus(c+358,"top IDU imm_imm", false,-1, 11,0);
        tracep->declBus(c+359,"top IDU imm_imm_1", false,-1, 19,0);
        tracep->declBus(c+360,"top IDU imm_imm_2", false,-1, 19,0);
        tracep->declBus(c+361,"top IDU imm_imm_3", false,-1, 11,0);
        tracep->declBus(c+362,"top IDU imm_imm_4", false,-1, 11,0);
        tracep->declQuad(c+363,"top IDU imm", false,-1, 63,0);
        tracep->declBus(c+365,"top IDU csr_index", false,-1, 1,0);
        tracep->declQuad(c+366,"top IDU csr_wdata", false,-1, 63,0);
        tracep->declQuad(c+368,"top IDU src1", false,-1, 63,0);
        tracep->declQuad(c+36,"top IDU src2", false,-1, 63,0);
        tracep->declBit(c+1804,"top IDU csr_reg clock", false,-1);
        tracep->declBit(c+339,"top IDU csr_reg io_wen1", false,-1);
        tracep->declBit(c+340,"top IDU csr_reg io_wen2", false,-1);
        tracep->declBus(c+341,"top IDU csr_reg io_waddr1", false,-1, 1,0);
        tracep->declQuad(c+342,"top IDU csr_reg io_wdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top IDU csr_reg io_wdata2", false,-1, 63,0);
        tracep->declBus(c+344,"top IDU csr_reg io_raddr", false,-1, 1,0);
        tracep->declQuad(c+345,"top IDU csr_reg io_rdata", false,-1, 63,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+370+i*2,"top IDU csr_reg CSR_Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+1810,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_en", false,-1);
        tracep->declBus(c+344,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+345,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+342,"top IDU csr_reg CSR_Reg_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+341,"top IDU csr_reg CSR_Reg_MPORT_addr", false,-1, 1,0);
        tracep->declBit(c+1810,"top IDU csr_reg CSR_Reg_MPORT_mask", false,-1);
        tracep->declBit(c+339,"top IDU csr_reg CSR_Reg_MPORT_en", false,-1);
        tracep->declQuad(c+5,"top IDU csr_reg CSR_Reg_MPORT_1_data", false,-1, 63,0);
        tracep->declBus(c+1843,"top IDU csr_reg CSR_Reg_MPORT_1_addr", false,-1, 1,0);
        tracep->declBit(c+1810,"top IDU csr_reg CSR_Reg_MPORT_1_mask", false,-1);
        tracep->declBit(c+340,"top IDU csr_reg CSR_Reg_MPORT_1_en", false,-1);
        tracep->declBit(c+1804,"top EXU clock", false,-1);
        tracep->declBit(c+1805,"top EXU reset", false,-1);
        tracep->declQuad(c+31,"top EXU io_pc", false,-1, 63,0);
        tracep->declBit(c+29,"top EXU io_ds_to_es_valid", false,-1);
        tracep->declBit(c+55,"top EXU io_ms_allowin", false,-1);
        tracep->declBit(c+30,"top EXU io_es_allowin", false,-1);
        tracep->declBus(c+33,"top EXU io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+34,"top EXU io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+36,"top EXU io_src2_value", false,-1, 63,0);
        tracep->declBus(c+38,"top EXU io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+39,"top EXU io_store_data", false,-1, 63,0);
        tracep->declBit(c+56,"top EXU io_es_to_ms_valid", false,-1);
        tracep->declBus(c+45,"top EXU io_load_type", false,-1, 2,0);
        tracep->declQuad(c+57,"top EXU io_to_ms_pc", false,-1, 63,0);
        tracep->declQuad(c+59,"top EXU io_to_ms_alures", false,-1, 63,0);
        tracep->declQuad(c+61,"top EXU io_to_ms_store_data", false,-1, 63,0);
        tracep->declBit(c+63,"top EXU io_to_ms_wen", false,-1);
        tracep->declBus(c+64,"top EXU io_to_ms_wstrb", false,-1, 7,0);
        tracep->declBit(c+65,"top EXU io_to_ms_ren", false,-1);
        tracep->declQuad(c+59,"top EXU io_to_ms_maddr", false,-1, 63,0);
        tracep->declBus(c+52,"top EXU io_to_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+46,"top EXU io_to_ms_rf_we", false,-1);
        tracep->declBus(c+66,"top EXU io_to_ms_load_type", false,-1, 2,0);
        tracep->declBit(c+41,"top EXU io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+42,"top EXU io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+43,"top EXU io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+44,"top EXU io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBit(c+49,"top EXU io_es_valid", false,-1);
        tracep->declBit(c+46,"top EXU io_es_rf_we", false,-1);
        tracep->declBus(c+52,"top EXU io_es_rf_dst", false,-1, 4,0);
        tracep->declBit(c+1804,"top EXU ALU_clock", false,-1);
        tracep->declBit(c+1805,"top EXU ALU_reset", false,-1);
        tracep->declQuad(c+378,"top EXU ALU_io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+380,"top EXU ALU_io_src2_value", false,-1, 63,0);
        tracep->declBus(c+382,"top EXU ALU_io_ALUop", false,-1, 31,0);
        tracep->declBit(c+49,"top EXU ALU_io_src_valid", false,-1);
        tracep->declBit(c+55,"top EXU ALU_io_res_ready", false,-1);
        tracep->declBit(c+383,"top EXU ALU_io_alu_busy", false,-1);
        tracep->declQuad(c+59,"top EXU ALU_io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+57,"top EXU es_pc", false,-1, 63,0);
        tracep->declBit(c+49,"top EXU es_valid", false,-1);
        tracep->declBus(c+52,"top EXU es_rd", false,-1, 4,0);
        tracep->declBit(c+46,"top EXU es_rf_we", false,-1);
        tracep->declQuad(c+384,"top EXU src1_value", false,-1, 63,0);
        tracep->declQuad(c+380,"top EXU src2_value", false,-1, 63,0);
        tracep->declQuad(c+61,"top EXU store_data", false,-1, 63,0);
        tracep->declBus(c+64,"top EXU st_wstrb", false,-1, 7,0);
        tracep->declBit(c+63,"top EXU st_we", false,-1);
        tracep->declBit(c+65,"top EXU ld_we", false,-1);
        tracep->declBus(c+382,"top EXU ALUop", false,-1, 31,0);
        tracep->declBus(c+66,"top EXU load_type", false,-1, 2,0);
        tracep->declBit(c+386,"top EXU es_ready_go", false,-1);
        tracep->declBit(c+30,"top EXU es_allowin", false,-1);
        tracep->declBit(c+1804,"top EXU ALU clock", false,-1);
        tracep->declBit(c+1805,"top EXU ALU reset", false,-1);
        tracep->declQuad(c+378,"top EXU ALU io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+380,"top EXU ALU io_src2_value", false,-1, 63,0);
        tracep->declBus(c+382,"top EXU ALU io_ALUop", false,-1, 31,0);
        tracep->declBit(c+49,"top EXU ALU io_src_valid", false,-1);
        tracep->declBit(c+55,"top EXU ALU io_res_ready", false,-1);
        tracep->declBit(c+383,"top EXU ALU io_alu_busy", false,-1);
        tracep->declQuad(c+59,"top EXU ALU io_alu_res", false,-1, 63,0);
        tracep->declBit(c+1804,"top EXU ALU Mul_clock", false,-1);
        tracep->declBit(c+1805,"top EXU ALU Mul_reset", false,-1);
        tracep->declBit(c+387,"top EXU ALU Mul_io_mul_valid", false,-1);
        tracep->declBit(c+388,"top EXU ALU Mul_io_mulw", false,-1);
        tracep->declQuad(c+378,"top EXU ALU Mul_io_multiplicand", false,-1, 63,0);
        tracep->declQuad(c+380,"top EXU ALU Mul_io_multiplier", false,-1, 63,0);
        tracep->declBit(c+389,"top EXU ALU Mul_io_out_valid", false,-1);
        tracep->declBit(c+55,"top EXU ALU Mul_io_out_ready", false,-1);
        tracep->declBus(c+390,"top EXU ALU Mul_io_result_hi", false,-1, 31,0);
        tracep->declBus(c+391,"top EXU ALU Mul_io_result_lo", false,-1, 31,0);
        tracep->declBit(c+1804,"top EXU ALU Div_clock", false,-1);
        tracep->declBit(c+1805,"top EXU ALU Div_reset", false,-1);
        tracep->declQuad(c+378,"top EXU ALU Div_io_dividend", false,-1, 63,0);
        tracep->declQuad(c+380,"top EXU ALU Div_io_divisor", false,-1, 63,0);
        tracep->declBit(c+392,"top EXU ALU Div_io_div_valid", false,-1);
        tracep->declBit(c+393,"top EXU ALU Div_io_divw", false,-1);
        tracep->declBit(c+394,"top EXU ALU Div_io_div_signed", false,-1);
        tracep->declBit(c+395,"top EXU ALU Div_io_out_valid", false,-1);
        tracep->declBit(c+55,"top EXU ALU Div_io_out_ready", false,-1);
        tracep->declQuad(c+396,"top EXU ALU Div_io_quotient", false,-1, 63,0);
        tracep->declQuad(c+398,"top EXU ALU Div_io_remainder", false,-1, 63,0);
        tracep->declBit(c+400,"top EXU ALU mul_valid", false,-1);
        tracep->declBit(c+401,"top EXU ALU div_valid", false,-1);
        tracep->declQuad(c+402,"top EXU ALU add_res", false,-1, 63,0);
        tracep->declQuad(c+404,"top EXU ALU sub_res", false,-1, 63,0);
        tracep->declQuad(c+406,"top EXU ALU sra_res", false,-1, 63,0);
        tracep->declQuad(c+408,"top EXU ALU srl_res", false,-1, 63,0);
        tracep->declArray(c+410,"top EXU ALU sll_res", false,-1, 126,0);
        tracep->declBus(c+414,"top EXU ALU sraw_res", false,-1, 31,0);
        tracep->declBus(c+415,"top EXU ALU srlw_res", false,-1, 31,0);
        tracep->declQuad(c+416,"top EXU ALU sllw_res", false,-1, 62,0);
        tracep->declQuad(c+418,"top EXU ALU or_res", false,-1, 63,0);
        tracep->declQuad(c+420,"top EXU ALU xor_res", false,-1, 63,0);
        tracep->declQuad(c+422,"top EXU ALU and_res", false,-1, 63,0);
        tracep->declQuad(c+424,"top EXU ALU mlu_res", false,-1, 63,0);
        tracep->declBus(c+426,"top EXU ALU divw_res", false,-1, 31,0);
        tracep->declBus(c+427,"top EXU ALU remw_res", false,-1, 31,0);
        tracep->declArray(c+428,"top EXU ALU alu_res", false,-1, 126,0);
        tracep->declBit(c+1804,"top EXU ALU Mul clock", false,-1);
        tracep->declBit(c+1805,"top EXU ALU Mul reset", false,-1);
        tracep->declBit(c+387,"top EXU ALU Mul io_mul_valid", false,-1);
        tracep->declBit(c+388,"top EXU ALU Mul io_mulw", false,-1);
        tracep->declQuad(c+378,"top EXU ALU Mul io_multiplicand", false,-1, 63,0);
        tracep->declQuad(c+380,"top EXU ALU Mul io_multiplier", false,-1, 63,0);
        tracep->declBit(c+389,"top EXU ALU Mul io_out_valid", false,-1);
        tracep->declBit(c+55,"top EXU ALU Mul io_out_ready", false,-1);
        tracep->declBus(c+390,"top EXU ALU Mul io_result_hi", false,-1, 31,0);
        tracep->declBus(c+391,"top EXU ALU Mul io_result_lo", false,-1, 31,0);
        tracep->declBus(c+432,"top EXU ALU Mul booth_partial_io_y", false,-1, 2,0);
        tracep->declQuad(c+433,"top EXU ALU Mul booth_partial_io_x", false,-1, 63,0);
        tracep->declBit(c+435,"top EXU ALU Mul booth_partial_io_c", false,-1);
        tracep->declQuad(c+436,"top EXU ALU Mul booth_partial_io_p", false,-1, 63,0);
        tracep->declBit(c+438,"top EXU ALU Mul sign", false,-1);
        tracep->declQuad(c+439,"top EXU ALU Mul res", false,-1, 63,0);
        tracep->declBus(c+441,"top EXU ALU Mul state", false,-1, 1,0);
        tracep->declArray(c+442,"top EXU ALU Mul src1", false,-1, 127,0);
        tracep->declArray(c+446,"top EXU ALU Mul src2", false,-1, 64,0);
        tracep->declQuad(c+449,"top EXU ALU Mul src1_32", false,-1, 63,0);
        tracep->declQuad(c+451,"top EXU ALU Mul src2_32", false,-1, 63,0);
        tracep->declArray(c+453,"top EXU ALU Mul real_cand", false,-1, 127,0);
        tracep->declQuad(c+457,"top EXU ALU Mul real_er", false,-1, 63,0);
        tracep->declBus(c+432,"top EXU ALU Mul booth_partial io_y", false,-1, 2,0);
        tracep->declQuad(c+433,"top EXU ALU Mul booth_partial io_x", false,-1, 63,0);
        tracep->declBit(c+435,"top EXU ALU Mul booth_partial io_c", false,-1);
        tracep->declQuad(c+436,"top EXU ALU Mul booth_partial io_p", false,-1, 63,0);
        tracep->declBit(c+1804,"top EXU ALU Div clock", false,-1);
        tracep->declBit(c+1805,"top EXU ALU Div reset", false,-1);
        tracep->declQuad(c+378,"top EXU ALU Div io_dividend", false,-1, 63,0);
        tracep->declQuad(c+380,"top EXU ALU Div io_divisor", false,-1, 63,0);
        tracep->declBit(c+392,"top EXU ALU Div io_div_valid", false,-1);
        tracep->declBit(c+393,"top EXU ALU Div io_divw", false,-1);
        tracep->declBit(c+394,"top EXU ALU Div io_div_signed", false,-1);
        tracep->declBit(c+395,"top EXU ALU Div io_out_valid", false,-1);
        tracep->declBit(c+55,"top EXU ALU Div io_out_ready", false,-1);
        tracep->declQuad(c+396,"top EXU ALU Div io_quotient", false,-1, 63,0);
        tracep->declQuad(c+398,"top EXU ALU Div io_remainder", false,-1, 63,0);
        tracep->declBit(c+459,"top EXU ALU Div dend_neg", false,-1);
        tracep->declBit(c+460,"top EXU ALU Div sor_neg", false,-1);
        tracep->declBit(c+461,"top EXU ALU Div quotient_neg", false,-1);
        tracep->declQuad(c+462,"top EXU ALU Div src1_32_s", false,-1, 63,0);
        tracep->declQuad(c+464,"top EXU ALU Div src2_32_s", false,-1, 63,0);
        tracep->declQuad(c+466,"top EXU ALU Div src1_32", false,-1, 63,0);
        tracep->declQuad(c+468,"top EXU ALU Div src2_32", false,-1, 63,0);
        tracep->declQuad(c+470,"top EXU ALU Div real_cand", false,-1, 63,0);
        tracep->declQuad(c+472,"top EXU ALU Div real_er", false,-1, 63,0);
        tracep->declArray(c+474,"top EXU ALU Div src2", false,-1, 64,0);
        tracep->declArray(c+477,"top EXU ALU Div div_cand", false,-1, 127,0);
        tracep->declBit(c+481,"top EXU ALU Div div_start", false,-1);
        tracep->declQuad(c+482,"top EXU ALU Div quotient", false,-1, 63,0);
        tracep->declBus(c+484,"top EXU ALU Div step_num", false,-1, 31,0);
        tracep->declArray(c+485,"top EXU ALU Div src1", false,-1, 127,0);
        tracep->declArray(c+489,"top EXU ALU Div sub_res", false,-1, 64,0);
        tracep->declArray(c+492,"top EXU ALU Div update_cand", false,-1, 127,0);
        tracep->declArray(c+496,"top EXU ALU Div new_cand", false,-1, 127,0);
        tracep->declBit(c+1804,"top LSU clock", false,-1);
        tracep->declBit(c+1805,"top LSU reset", false,-1);
        tracep->declQuad(c+57,"top LSU io_pc", false,-1, 63,0);
        tracep->declBit(c+56,"top LSU io_es_to_ms_valid", false,-1);
        tracep->declBit(c+55,"top LSU io_ms_allowin", false,-1);
        tracep->declBit(c+46,"top LSU io_rf_we", false,-1);
        tracep->declBus(c+52,"top LSU io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+59,"top LSU io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+61,"top LSU io_store_data", false,-1, 63,0);
        tracep->declBus(c+66,"top LSU io_load_type", false,-1, 2,0);
        tracep->declBit(c+63,"top LSU io_wen", false,-1);
        tracep->declBus(c+64,"top LSU io_wstrb", false,-1, 7,0);
        tracep->declBit(c+65,"top LSU io_ren", false,-1);
        tracep->declQuad(c+59,"top LSU io_maddr", false,-1, 63,0);
        tracep->declQuad(c+67,"top LSU io_to_ws_pc", false,-1, 63,0);
        tracep->declQuad(c+69,"top LSU io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+71,"top LSU io_ms_to_ws_valid", false,-1);
        tracep->declBit(c+72,"top LSU io_to_ws_rf_we", false,-1);
        tracep->declBus(c+53,"top LSU io_to_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+50,"top LSU io_ms_valid", false,-1);
        tracep->declBit(c+47,"top LSU io_ms_rf_we", false,-1);
        tracep->declBus(c+53,"top LSU io_ms_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+73,"top LSU io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+75,"top LSU io_axi_in_rvalid", false,-1);
        tracep->declBit(c+76,"top LSU io_axi_in_wready", false,-1);
        tracep->declBus(c+77,"top LSU io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+78,"top LSU io_axi_out_arvalid", false,-1);
        tracep->declBus(c+77,"top LSU io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBit(c+79,"top LSU io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+80,"top LSU io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+82,"top LSU io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+83,"top LSU io_axi_out_wvalid", false,-1);
        tracep->declBit(c+50,"top LSU ms_valid", false,-1);
        tracep->declQuad(c+67,"top LSU ms_pc", false,-1, 63,0);
        tracep->declBit(c+500,"top LSU ms_ready_go", false,-1);
        tracep->declBit(c+72,"top LSU ms_rf_we", false,-1);
        tracep->declBus(c+53,"top LSU ms_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+501,"top LSU ms_res", false,-1, 63,0);
        tracep->declQuad(c+80,"top LSU store_data", false,-1, 63,0);
        tracep->declBit(c+83,"top LSU wen", false,-1);
        tracep->declBus(c+82,"top LSU wstrb", false,-1, 7,0);
        tracep->declBit(c+503,"top LSU ren", false,-1);
        tracep->declQuad(c+504,"top LSU maddr", false,-1, 63,0);
        tracep->declBus(c+506,"top LSU load_type", false,-1, 2,0);
        tracep->declBit(c+55,"top LSU ms_allowin", false,-1);
        tracep->declQuad(c+507,"top LSU mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+509,"top LSU rdata", false,-1, 63,0);
        tracep->declBit(c+1804,"top WBU clock", false,-1);
        tracep->declBit(c+1805,"top WBU reset", false,-1);
        tracep->declQuad(c+67,"top WBU io_pc", false,-1, 63,0);
        tracep->declBit(c+71,"top WBU io_ms_to_ws_valid", false,-1);
        tracep->declQuad(c+69,"top WBU io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+72,"top WBU io_rf_we", false,-1);
        tracep->declBus(c+53,"top WBU io_rf_dst", false,-1, 4,0);
        tracep->declBit(c+7,"top WBU io_we", false,-1);
        tracep->declBus(c+8,"top WBU io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU io_wdata", false,-1, 63,0);
        tracep->declBit(c+51,"top WBU io_ws_valid", false,-1);
        tracep->declBit(c+48,"top WBU io_ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU io_ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+84,"top WBU io_ws_pc", false,-1, 63,0);
        tracep->declBit(c+51,"top WBU ws_valid", false,-1);
        tracep->declQuad(c+84,"top WBU ws_pc", false,-1, 63,0);
        tracep->declBit(c+48,"top WBU ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU ws_res", false,-1, 63,0);
        tracep->declBit(c+1804,"top arbiter clock", false,-1);
        tracep->declBit(c+1805,"top arbiter reset", false,-1);
        tracep->declBus(c+86,"top arbiter io_ifu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+87,"top arbiter io_ifu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+88,"top arbiter io_ifu_axi_in_arvalid", false,-1);
        tracep->declBit(c+89,"top arbiter io_ifu_axi_in_rready", false,-1);
        tracep->declQuad(c+90,"top arbiter io_ifu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+92,"top arbiter io_ifu_axi_out_rlast", false,-1);
        tracep->declBit(c+93,"top arbiter io_ifu_axi_out_rvalid", false,-1);
        tracep->declBus(c+94,"top arbiter io_lsu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+95,"top arbiter io_lsu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+96,"top arbiter io_lsu_axi_in_arvalid", false,-1);
        tracep->declBit(c+97,"top arbiter io_lsu_axi_in_rready", false,-1);
        tracep->declBus(c+98,"top arbiter io_lsu_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+99,"top arbiter io_lsu_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+100,"top arbiter io_lsu_axi_in_awvalid", false,-1);
        tracep->declQuad(c+101,"top arbiter io_lsu_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+103,"top arbiter io_lsu_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+104,"top arbiter io_lsu_axi_in_wvalid", false,-1);
        tracep->declBit(c+105,"top arbiter io_lsu_axi_in_bready", false,-1);
        tracep->declQuad(c+106,"top arbiter io_lsu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+108,"top arbiter io_lsu_axi_out_rlast", false,-1);
        tracep->declBit(c+109,"top arbiter io_lsu_axi_out_rvalid", false,-1);
        tracep->declBit(c+110,"top arbiter io_lsu_axi_out_wready", false,-1);
        tracep->declBit(c+111,"top arbiter io_lsu_axi_out_bvalid", false,-1);
        tracep->declQuad(c+112,"top arbiter io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+114,"top arbiter io_axi_in_rlast", false,-1);
        tracep->declBit(c+115,"top arbiter io_axi_in_rvalid", false,-1);
        tracep->declBit(c+116,"top arbiter io_axi_in_wready", false,-1);
        tracep->declBit(c+117,"top arbiter io_axi_in_bvalid", false,-1);
        tracep->declBus(c+118,"top arbiter io_axi_out_araddr", false,-1, 31,0);
        tracep->declBus(c+119,"top arbiter io_axi_out_arlen", false,-1, 7,0);
        tracep->declBit(c+120,"top arbiter io_axi_out_arvalid", false,-1);
        tracep->declBit(c+121,"top arbiter io_axi_out_rready", false,-1);
        tracep->declBus(c+122,"top arbiter io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBus(c+123,"top arbiter io_axi_out_awlen", false,-1, 7,0);
        tracep->declBit(c+124,"top arbiter io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+125,"top arbiter io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+127,"top arbiter io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+128,"top arbiter io_axi_out_wvalid", false,-1);
        tracep->declBit(c+129,"top arbiter io_axi_out_bready", false,-1);
        tracep->declBus(c+511,"top arbiter state", false,-1, 1,0);
        tracep->declBit(c+1804,"top i_cache clock", false,-1);
        tracep->declBit(c+1805,"top i_cache reset", false,-1);
        tracep->declBus(c+23,"top i_cache io_from_ifu_araddr", false,-1, 31,0);
        tracep->declBit(c+24,"top i_cache io_from_ifu_arvalid", false,-1);
        tracep->declBit(c+25,"top i_cache io_from_ifu_rready", false,-1);
        tracep->declQuad(c+19,"top i_cache io_to_ifu_rdata", false,-1, 63,0);
        tracep->declBit(c+21,"top i_cache io_to_ifu_rlast", false,-1);
        tracep->declBit(c+22,"top i_cache io_to_ifu_rvalid", false,-1);
        tracep->declBus(c+86,"top i_cache io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+87,"top i_cache io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+88,"top i_cache io_to_axi_arvalid", false,-1);
        tracep->declBit(c+89,"top i_cache io_to_axi_rready", false,-1);
        tracep->declQuad(c+90,"top i_cache io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+92,"top i_cache io_from_axi_rlast", false,-1);
        tracep->declBit(c+93,"top i_cache io_from_axi_rvalid", false,-1);
        tracep->declBit(c+28,"top i_cache io_cache_init", false,-1);
        tracep->declBit(c+27,"top i_cache io_clear_cache", false,-1);
        tracep->declArray(c+512,"top i_cache ram_0_0", false,-1, 511,0);
        tracep->declArray(c+528,"top i_cache ram_0_1", false,-1, 511,0);
        tracep->declArray(c+544,"top i_cache ram_0_2", false,-1, 511,0);
        tracep->declArray(c+560,"top i_cache ram_0_3", false,-1, 511,0);
        tracep->declArray(c+576,"top i_cache ram_0_4", false,-1, 511,0);
        tracep->declArray(c+592,"top i_cache ram_0_5", false,-1, 511,0);
        tracep->declArray(c+608,"top i_cache ram_0_6", false,-1, 511,0);
        tracep->declArray(c+624,"top i_cache ram_0_7", false,-1, 511,0);
        tracep->declArray(c+640,"top i_cache ram_0_8", false,-1, 511,0);
        tracep->declArray(c+656,"top i_cache ram_0_9", false,-1, 511,0);
        tracep->declArray(c+672,"top i_cache ram_0_10", false,-1, 511,0);
        tracep->declArray(c+688,"top i_cache ram_0_11", false,-1, 511,0);
        tracep->declArray(c+704,"top i_cache ram_0_12", false,-1, 511,0);
        tracep->declArray(c+720,"top i_cache ram_0_13", false,-1, 511,0);
        tracep->declArray(c+736,"top i_cache ram_0_14", false,-1, 511,0);
        tracep->declArray(c+752,"top i_cache ram_0_15", false,-1, 511,0);
        tracep->declArray(c+768,"top i_cache ram_1_0", false,-1, 511,0);
        tracep->declArray(c+784,"top i_cache ram_1_1", false,-1, 511,0);
        tracep->declArray(c+800,"top i_cache ram_1_2", false,-1, 511,0);
        tracep->declArray(c+816,"top i_cache ram_1_3", false,-1, 511,0);
        tracep->declArray(c+832,"top i_cache ram_1_4", false,-1, 511,0);
        tracep->declArray(c+848,"top i_cache ram_1_5", false,-1, 511,0);
        tracep->declArray(c+864,"top i_cache ram_1_6", false,-1, 511,0);
        tracep->declArray(c+880,"top i_cache ram_1_7", false,-1, 511,0);
        tracep->declArray(c+896,"top i_cache ram_1_8", false,-1, 511,0);
        tracep->declArray(c+912,"top i_cache ram_1_9", false,-1, 511,0);
        tracep->declArray(c+928,"top i_cache ram_1_10", false,-1, 511,0);
        tracep->declArray(c+944,"top i_cache ram_1_11", false,-1, 511,0);
        tracep->declArray(c+960,"top i_cache ram_1_12", false,-1, 511,0);
        tracep->declArray(c+976,"top i_cache ram_1_13", false,-1, 511,0);
        tracep->declArray(c+992,"top i_cache ram_1_14", false,-1, 511,0);
        tracep->declArray(c+1008,"top i_cache ram_1_15", false,-1, 511,0);
        tracep->declBus(c+1024,"top i_cache tag_0_0", false,-1, 31,0);
        tracep->declBus(c+1025,"top i_cache tag_0_1", false,-1, 31,0);
        tracep->declBus(c+1026,"top i_cache tag_0_2", false,-1, 31,0);
        tracep->declBus(c+1027,"top i_cache tag_0_3", false,-1, 31,0);
        tracep->declBus(c+1028,"top i_cache tag_0_4", false,-1, 31,0);
        tracep->declBus(c+1029,"top i_cache tag_0_5", false,-1, 31,0);
        tracep->declBus(c+1030,"top i_cache tag_0_6", false,-1, 31,0);
        tracep->declBus(c+1031,"top i_cache tag_0_7", false,-1, 31,0);
        tracep->declBus(c+1032,"top i_cache tag_0_8", false,-1, 31,0);
        tracep->declBus(c+1033,"top i_cache tag_0_9", false,-1, 31,0);
        tracep->declBus(c+1034,"top i_cache tag_0_10", false,-1, 31,0);
        tracep->declBus(c+1035,"top i_cache tag_0_11", false,-1, 31,0);
        tracep->declBus(c+1036,"top i_cache tag_0_12", false,-1, 31,0);
        tracep->declBus(c+1037,"top i_cache tag_0_13", false,-1, 31,0);
        tracep->declBus(c+1038,"top i_cache tag_0_14", false,-1, 31,0);
        tracep->declBus(c+1039,"top i_cache tag_0_15", false,-1, 31,0);
        tracep->declBus(c+1040,"top i_cache tag_1_0", false,-1, 31,0);
        tracep->declBus(c+1041,"top i_cache tag_1_1", false,-1, 31,0);
        tracep->declBus(c+1042,"top i_cache tag_1_2", false,-1, 31,0);
        tracep->declBus(c+1043,"top i_cache tag_1_3", false,-1, 31,0);
        tracep->declBus(c+1044,"top i_cache tag_1_4", false,-1, 31,0);
        tracep->declBus(c+1045,"top i_cache tag_1_5", false,-1, 31,0);
        tracep->declBus(c+1046,"top i_cache tag_1_6", false,-1, 31,0);
        tracep->declBus(c+1047,"top i_cache tag_1_7", false,-1, 31,0);
        tracep->declBus(c+1048,"top i_cache tag_1_8", false,-1, 31,0);
        tracep->declBus(c+1049,"top i_cache tag_1_9", false,-1, 31,0);
        tracep->declBus(c+1050,"top i_cache tag_1_10", false,-1, 31,0);
        tracep->declBus(c+1051,"top i_cache tag_1_11", false,-1, 31,0);
        tracep->declBus(c+1052,"top i_cache tag_1_12", false,-1, 31,0);
        tracep->declBus(c+1053,"top i_cache tag_1_13", false,-1, 31,0);
        tracep->declBus(c+1054,"top i_cache tag_1_14", false,-1, 31,0);
        tracep->declBus(c+1055,"top i_cache tag_1_15", false,-1, 31,0);
        tracep->declBit(c+1056,"top i_cache valid_0_0", false,-1);
        tracep->declBit(c+1057,"top i_cache valid_0_1", false,-1);
        tracep->declBit(c+1058,"top i_cache valid_0_2", false,-1);
        tracep->declBit(c+1059,"top i_cache valid_0_3", false,-1);
        tracep->declBit(c+1060,"top i_cache valid_0_4", false,-1);
        tracep->declBit(c+1061,"top i_cache valid_0_5", false,-1);
        tracep->declBit(c+1062,"top i_cache valid_0_6", false,-1);
        tracep->declBit(c+1063,"top i_cache valid_0_7", false,-1);
        tracep->declBit(c+1064,"top i_cache valid_0_8", false,-1);
        tracep->declBit(c+1065,"top i_cache valid_0_9", false,-1);
        tracep->declBit(c+1066,"top i_cache valid_0_10", false,-1);
        tracep->declBit(c+1067,"top i_cache valid_0_11", false,-1);
        tracep->declBit(c+1068,"top i_cache valid_0_12", false,-1);
        tracep->declBit(c+1069,"top i_cache valid_0_13", false,-1);
        tracep->declBit(c+1070,"top i_cache valid_0_14", false,-1);
        tracep->declBit(c+1071,"top i_cache valid_0_15", false,-1);
        tracep->declBit(c+1072,"top i_cache valid_1_0", false,-1);
        tracep->declBit(c+1073,"top i_cache valid_1_1", false,-1);
        tracep->declBit(c+1074,"top i_cache valid_1_2", false,-1);
        tracep->declBit(c+1075,"top i_cache valid_1_3", false,-1);
        tracep->declBit(c+1076,"top i_cache valid_1_4", false,-1);
        tracep->declBit(c+1077,"top i_cache valid_1_5", false,-1);
        tracep->declBit(c+1078,"top i_cache valid_1_6", false,-1);
        tracep->declBit(c+1079,"top i_cache valid_1_7", false,-1);
        tracep->declBit(c+1080,"top i_cache valid_1_8", false,-1);
        tracep->declBit(c+1081,"top i_cache valid_1_9", false,-1);
        tracep->declBit(c+1082,"top i_cache valid_1_10", false,-1);
        tracep->declBit(c+1083,"top i_cache valid_1_11", false,-1);
        tracep->declBit(c+1084,"top i_cache valid_1_12", false,-1);
        tracep->declBit(c+1085,"top i_cache valid_1_13", false,-1);
        tracep->declBit(c+1086,"top i_cache valid_1_14", false,-1);
        tracep->declBit(c+1087,"top i_cache valid_1_15", false,-1);
        tracep->declQuad(c+1088,"top i_cache receive_data_0", false,-1, 63,0);
        tracep->declQuad(c+1090,"top i_cache receive_data_1", false,-1, 63,0);
        tracep->declQuad(c+1092,"top i_cache receive_data_2", false,-1, 63,0);
        tracep->declQuad(c+1094,"top i_cache receive_data_3", false,-1, 63,0);
        tracep->declQuad(c+1096,"top i_cache receive_data_4", false,-1, 63,0);
        tracep->declQuad(c+1098,"top i_cache receive_data_5", false,-1, 63,0);
        tracep->declQuad(c+1100,"top i_cache receive_data_6", false,-1, 63,0);
        tracep->declQuad(c+1102,"top i_cache receive_data_7", false,-1, 63,0);
        tracep->declBus(c+1104,"top i_cache receive_num", false,-1, 2,0);
        tracep->declBus(c+1105,"top i_cache quene_0", false,-1, 1,0);
        tracep->declBus(c+1106,"top i_cache quene_1", false,-1, 1,0);
        tracep->declBus(c+1107,"top i_cache quene_2", false,-1, 1,0);
        tracep->declBus(c+1108,"top i_cache quene_3", false,-1, 1,0);
        tracep->declBus(c+1109,"top i_cache quene_4", false,-1, 1,0);
        tracep->declBus(c+1110,"top i_cache quene_5", false,-1, 1,0);
        tracep->declBus(c+1111,"top i_cache quene_6", false,-1, 1,0);
        tracep->declBus(c+1112,"top i_cache quene_7", false,-1, 1,0);
        tracep->declBus(c+1113,"top i_cache quene_8", false,-1, 1,0);
        tracep->declBus(c+1114,"top i_cache quene_9", false,-1, 1,0);
        tracep->declBus(c+1115,"top i_cache quene_10", false,-1, 1,0);
        tracep->declBus(c+1116,"top i_cache quene_11", false,-1, 1,0);
        tracep->declBus(c+1117,"top i_cache quene_12", false,-1, 1,0);
        tracep->declBus(c+1118,"top i_cache quene_13", false,-1, 1,0);
        tracep->declBus(c+1119,"top i_cache quene_14", false,-1, 1,0);
        tracep->declBus(c+1120,"top i_cache quene_15", false,-1, 1,0);
        tracep->declBus(c+1121,"top i_cache offset", false,-1, 5,0);
        tracep->declBus(c+1122,"top i_cache index", false,-1, 3,0);
        tracep->declBus(c+1123,"top i_cache tag", false,-1, 21,0);
        tracep->declBus(c+1124,"top i_cache shift_bit", false,-1, 8,0);
        tracep->declBit(c+1125,"top i_cache way0_hit", false,-1);
        tracep->declBit(c+1126,"top i_cache way1_hit", false,-1);
        tracep->declBus(c+1127,"top i_cache unuse_way", false,-1, 1,0);
        tracep->declBus(c+1128,"top i_cache state", false,-1, 2,0);
        tracep->declBit(c+1804,"top d_cache clock", false,-1);
        tracep->declBit(c+1805,"top d_cache reset", false,-1);
        tracep->declBus(c+77,"top d_cache io_from_lsu_araddr", false,-1, 31,0);
        tracep->declBit(c+78,"top d_cache io_from_lsu_arvalid", false,-1);
        tracep->declBus(c+77,"top d_cache io_from_lsu_awaddr", false,-1, 31,0);
        tracep->declBit(c+79,"top d_cache io_from_lsu_awvalid", false,-1);
        tracep->declQuad(c+80,"top d_cache io_from_lsu_wdata", false,-1, 63,0);
        tracep->declBus(c+82,"top d_cache io_from_lsu_wstrb", false,-1, 7,0);
        tracep->declBit(c+83,"top d_cache io_from_lsu_wvalid", false,-1);
        tracep->declQuad(c+73,"top d_cache io_to_lsu_rdata", false,-1, 63,0);
        tracep->declBit(c+75,"top d_cache io_to_lsu_rvalid", false,-1);
        tracep->declBit(c+76,"top d_cache io_to_lsu_wready", false,-1);
        tracep->declBus(c+94,"top d_cache io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+95,"top d_cache io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+96,"top d_cache io_to_axi_arvalid", false,-1);
        tracep->declBit(c+97,"top d_cache io_to_axi_rready", false,-1);
        tracep->declBus(c+98,"top d_cache io_to_axi_awaddr", false,-1, 31,0);
        tracep->declBus(c+99,"top d_cache io_to_axi_awlen", false,-1, 7,0);
        tracep->declBit(c+100,"top d_cache io_to_axi_awvalid", false,-1);
        tracep->declQuad(c+101,"top d_cache io_to_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+103,"top d_cache io_to_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+104,"top d_cache io_to_axi_wvalid", false,-1);
        tracep->declBit(c+105,"top d_cache io_to_axi_bready", false,-1);
        tracep->declQuad(c+106,"top d_cache io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+108,"top d_cache io_from_axi_rlast", false,-1);
        tracep->declBit(c+109,"top d_cache io_from_axi_rvalid", false,-1);
        tracep->declBit(c+110,"top d_cache io_from_axi_wready", false,-1);
        tracep->declBit(c+111,"top d_cache io_from_axi_bvalid", false,-1);
        tracep->declArray(c+1129,"top d_cache ram_0_0", false,-1, 511,0);
        tracep->declArray(c+1145,"top d_cache ram_0_1", false,-1, 511,0);
        tracep->declArray(c+1161,"top d_cache ram_0_2", false,-1, 511,0);
        tracep->declArray(c+1177,"top d_cache ram_0_3", false,-1, 511,0);
        tracep->declArray(c+1193,"top d_cache ram_0_4", false,-1, 511,0);
        tracep->declArray(c+1209,"top d_cache ram_0_5", false,-1, 511,0);
        tracep->declArray(c+1225,"top d_cache ram_0_6", false,-1, 511,0);
        tracep->declArray(c+1241,"top d_cache ram_0_7", false,-1, 511,0);
        tracep->declArray(c+1257,"top d_cache ram_0_8", false,-1, 511,0);
        tracep->declArray(c+1273,"top d_cache ram_0_9", false,-1, 511,0);
        tracep->declArray(c+1289,"top d_cache ram_0_10", false,-1, 511,0);
        tracep->declArray(c+1305,"top d_cache ram_0_11", false,-1, 511,0);
        tracep->declArray(c+1321,"top d_cache ram_0_12", false,-1, 511,0);
        tracep->declArray(c+1337,"top d_cache ram_0_13", false,-1, 511,0);
        tracep->declArray(c+1353,"top d_cache ram_0_14", false,-1, 511,0);
        tracep->declArray(c+1369,"top d_cache ram_0_15", false,-1, 511,0);
        tracep->declArray(c+1385,"top d_cache ram_1_0", false,-1, 511,0);
        tracep->declArray(c+1401,"top d_cache ram_1_1", false,-1, 511,0);
        tracep->declArray(c+1417,"top d_cache ram_1_2", false,-1, 511,0);
        tracep->declArray(c+1433,"top d_cache ram_1_3", false,-1, 511,0);
        tracep->declArray(c+1449,"top d_cache ram_1_4", false,-1, 511,0);
        tracep->declArray(c+1465,"top d_cache ram_1_5", false,-1, 511,0);
        tracep->declArray(c+1481,"top d_cache ram_1_6", false,-1, 511,0);
        tracep->declArray(c+1497,"top d_cache ram_1_7", false,-1, 511,0);
        tracep->declArray(c+1513,"top d_cache ram_1_8", false,-1, 511,0);
        tracep->declArray(c+1529,"top d_cache ram_1_9", false,-1, 511,0);
        tracep->declArray(c+1545,"top d_cache ram_1_10", false,-1, 511,0);
        tracep->declArray(c+1561,"top d_cache ram_1_11", false,-1, 511,0);
        tracep->declArray(c+1577,"top d_cache ram_1_12", false,-1, 511,0);
        tracep->declArray(c+1593,"top d_cache ram_1_13", false,-1, 511,0);
        tracep->declArray(c+1609,"top d_cache ram_1_14", false,-1, 511,0);
        tracep->declArray(c+1625,"top d_cache ram_1_15", false,-1, 511,0);
        tracep->declBus(c+1641,"top d_cache tag_0_0", false,-1, 31,0);
        tracep->declBus(c+1642,"top d_cache tag_0_1", false,-1, 31,0);
        tracep->declBus(c+1643,"top d_cache tag_0_2", false,-1, 31,0);
        tracep->declBus(c+1644,"top d_cache tag_0_3", false,-1, 31,0);
        tracep->declBus(c+1645,"top d_cache tag_0_4", false,-1, 31,0);
        tracep->declBus(c+1646,"top d_cache tag_0_5", false,-1, 31,0);
        tracep->declBus(c+1647,"top d_cache tag_0_6", false,-1, 31,0);
        tracep->declBus(c+1648,"top d_cache tag_0_7", false,-1, 31,0);
        tracep->declBus(c+1649,"top d_cache tag_0_8", false,-1, 31,0);
        tracep->declBus(c+1650,"top d_cache tag_0_9", false,-1, 31,0);
        tracep->declBus(c+1651,"top d_cache tag_0_10", false,-1, 31,0);
        tracep->declBus(c+1652,"top d_cache tag_0_11", false,-1, 31,0);
        tracep->declBus(c+1653,"top d_cache tag_0_12", false,-1, 31,0);
        tracep->declBus(c+1654,"top d_cache tag_0_13", false,-1, 31,0);
        tracep->declBus(c+1655,"top d_cache tag_0_14", false,-1, 31,0);
        tracep->declBus(c+1656,"top d_cache tag_0_15", false,-1, 31,0);
        tracep->declBus(c+1657,"top d_cache tag_1_0", false,-1, 31,0);
        tracep->declBus(c+1658,"top d_cache tag_1_1", false,-1, 31,0);
        tracep->declBus(c+1659,"top d_cache tag_1_2", false,-1, 31,0);
        tracep->declBus(c+1660,"top d_cache tag_1_3", false,-1, 31,0);
        tracep->declBus(c+1661,"top d_cache tag_1_4", false,-1, 31,0);
        tracep->declBus(c+1662,"top d_cache tag_1_5", false,-1, 31,0);
        tracep->declBus(c+1663,"top d_cache tag_1_6", false,-1, 31,0);
        tracep->declBus(c+1664,"top d_cache tag_1_7", false,-1, 31,0);
        tracep->declBus(c+1665,"top d_cache tag_1_8", false,-1, 31,0);
        tracep->declBus(c+1666,"top d_cache tag_1_9", false,-1, 31,0);
        tracep->declBus(c+1667,"top d_cache tag_1_10", false,-1, 31,0);
        tracep->declBus(c+1668,"top d_cache tag_1_11", false,-1, 31,0);
        tracep->declBus(c+1669,"top d_cache tag_1_12", false,-1, 31,0);
        tracep->declBus(c+1670,"top d_cache tag_1_13", false,-1, 31,0);
        tracep->declBus(c+1671,"top d_cache tag_1_14", false,-1, 31,0);
        tracep->declBus(c+1672,"top d_cache tag_1_15", false,-1, 31,0);
        tracep->declBit(c+1673,"top d_cache valid_0_0", false,-1);
        tracep->declBit(c+1674,"top d_cache valid_0_1", false,-1);
        tracep->declBit(c+1675,"top d_cache valid_0_2", false,-1);
        tracep->declBit(c+1676,"top d_cache valid_0_3", false,-1);
        tracep->declBit(c+1677,"top d_cache valid_0_4", false,-1);
        tracep->declBit(c+1678,"top d_cache valid_0_5", false,-1);
        tracep->declBit(c+1679,"top d_cache valid_0_6", false,-1);
        tracep->declBit(c+1680,"top d_cache valid_0_7", false,-1);
        tracep->declBit(c+1681,"top d_cache valid_0_8", false,-1);
        tracep->declBit(c+1682,"top d_cache valid_0_9", false,-1);
        tracep->declBit(c+1683,"top d_cache valid_0_10", false,-1);
        tracep->declBit(c+1684,"top d_cache valid_0_11", false,-1);
        tracep->declBit(c+1685,"top d_cache valid_0_12", false,-1);
        tracep->declBit(c+1686,"top d_cache valid_0_13", false,-1);
        tracep->declBit(c+1687,"top d_cache valid_0_14", false,-1);
        tracep->declBit(c+1688,"top d_cache valid_0_15", false,-1);
        tracep->declBit(c+1689,"top d_cache valid_1_0", false,-1);
        tracep->declBit(c+1690,"top d_cache valid_1_1", false,-1);
        tracep->declBit(c+1691,"top d_cache valid_1_2", false,-1);
        tracep->declBit(c+1692,"top d_cache valid_1_3", false,-1);
        tracep->declBit(c+1693,"top d_cache valid_1_4", false,-1);
        tracep->declBit(c+1694,"top d_cache valid_1_5", false,-1);
        tracep->declBit(c+1695,"top d_cache valid_1_6", false,-1);
        tracep->declBit(c+1696,"top d_cache valid_1_7", false,-1);
        tracep->declBit(c+1697,"top d_cache valid_1_8", false,-1);
        tracep->declBit(c+1698,"top d_cache valid_1_9", false,-1);
        tracep->declBit(c+1699,"top d_cache valid_1_10", false,-1);
        tracep->declBit(c+1700,"top d_cache valid_1_11", false,-1);
        tracep->declBit(c+1701,"top d_cache valid_1_12", false,-1);
        tracep->declBit(c+1702,"top d_cache valid_1_13", false,-1);
        tracep->declBit(c+1703,"top d_cache valid_1_14", false,-1);
        tracep->declBit(c+1704,"top d_cache valid_1_15", false,-1);
        tracep->declBit(c+1705,"top d_cache dirty_0_0", false,-1);
        tracep->declBit(c+1706,"top d_cache dirty_0_1", false,-1);
        tracep->declBit(c+1707,"top d_cache dirty_0_2", false,-1);
        tracep->declBit(c+1708,"top d_cache dirty_0_3", false,-1);
        tracep->declBit(c+1709,"top d_cache dirty_0_4", false,-1);
        tracep->declBit(c+1710,"top d_cache dirty_0_5", false,-1);
        tracep->declBit(c+1711,"top d_cache dirty_0_6", false,-1);
        tracep->declBit(c+1712,"top d_cache dirty_0_7", false,-1);
        tracep->declBit(c+1713,"top d_cache dirty_0_8", false,-1);
        tracep->declBit(c+1714,"top d_cache dirty_0_9", false,-1);
        tracep->declBit(c+1715,"top d_cache dirty_0_10", false,-1);
        tracep->declBit(c+1716,"top d_cache dirty_0_11", false,-1);
        tracep->declBit(c+1717,"top d_cache dirty_0_12", false,-1);
        tracep->declBit(c+1718,"top d_cache dirty_0_13", false,-1);
        tracep->declBit(c+1719,"top d_cache dirty_0_14", false,-1);
        tracep->declBit(c+1720,"top d_cache dirty_0_15", false,-1);
        tracep->declBit(c+1721,"top d_cache dirty_1_0", false,-1);
        tracep->declBit(c+1722,"top d_cache dirty_1_1", false,-1);
        tracep->declBit(c+1723,"top d_cache dirty_1_2", false,-1);
        tracep->declBit(c+1724,"top d_cache dirty_1_3", false,-1);
        tracep->declBit(c+1725,"top d_cache dirty_1_4", false,-1);
        tracep->declBit(c+1726,"top d_cache dirty_1_5", false,-1);
        tracep->declBit(c+1727,"top d_cache dirty_1_6", false,-1);
        tracep->declBit(c+1728,"top d_cache dirty_1_7", false,-1);
        tracep->declBit(c+1729,"top d_cache dirty_1_8", false,-1);
        tracep->declBit(c+1730,"top d_cache dirty_1_9", false,-1);
        tracep->declBit(c+1731,"top d_cache dirty_1_10", false,-1);
        tracep->declBit(c+1732,"top d_cache dirty_1_11", false,-1);
        tracep->declBit(c+1733,"top d_cache dirty_1_12", false,-1);
        tracep->declBit(c+1734,"top d_cache dirty_1_13", false,-1);
        tracep->declBit(c+1735,"top d_cache dirty_1_14", false,-1);
        tracep->declBit(c+1736,"top d_cache dirty_1_15", false,-1);
        tracep->declArray(c+1737,"top d_cache write_back_data", false,-1, 511,0);
        tracep->declBus(c+1753,"top d_cache write_back_addr", false,-1, 31,0);
        tracep->declQuad(c+1754,"top d_cache receive_data_0", false,-1, 63,0);
        tracep->declQuad(c+1756,"top d_cache receive_data_1", false,-1, 63,0);
        tracep->declQuad(c+1758,"top d_cache receive_data_2", false,-1, 63,0);
        tracep->declQuad(c+1760,"top d_cache receive_data_3", false,-1, 63,0);
        tracep->declQuad(c+1762,"top d_cache receive_data_4", false,-1, 63,0);
        tracep->declQuad(c+1764,"top d_cache receive_data_5", false,-1, 63,0);
        tracep->declQuad(c+1766,"top d_cache receive_data_6", false,-1, 63,0);
        tracep->declQuad(c+1768,"top d_cache receive_data_7", false,-1, 63,0);
        tracep->declBus(c+1770,"top d_cache receive_num", false,-1, 2,0);
        tracep->declBus(c+1771,"top d_cache quene_0", false,-1, 1,0);
        tracep->declBus(c+1772,"top d_cache quene_1", false,-1, 1,0);
        tracep->declBus(c+1773,"top d_cache quene_2", false,-1, 1,0);
        tracep->declBus(c+1774,"top d_cache quene_3", false,-1, 1,0);
        tracep->declBus(c+1775,"top d_cache quene_4", false,-1, 1,0);
        tracep->declBus(c+1776,"top d_cache quene_5", false,-1, 1,0);
        tracep->declBus(c+1777,"top d_cache quene_6", false,-1, 1,0);
        tracep->declBus(c+1778,"top d_cache quene_7", false,-1, 1,0);
        tracep->declBus(c+1779,"top d_cache quene_8", false,-1, 1,0);
        tracep->declBus(c+1780,"top d_cache quene_9", false,-1, 1,0);
        tracep->declBus(c+1781,"top d_cache quene_10", false,-1, 1,0);
        tracep->declBus(c+1782,"top d_cache quene_11", false,-1, 1,0);
        tracep->declBus(c+1783,"top d_cache quene_12", false,-1, 1,0);
        tracep->declBus(c+1784,"top d_cache quene_13", false,-1, 1,0);
        tracep->declBus(c+1785,"top d_cache quene_14", false,-1, 1,0);
        tracep->declBus(c+1786,"top d_cache quene_15", false,-1, 1,0);
        tracep->declBus(c+1787,"top d_cache offset", false,-1, 5,0);
        tracep->declBus(c+1788,"top d_cache index", false,-1, 3,0);
        tracep->declBus(c+1789,"top d_cache tag", false,-1, 21,0);
        tracep->declBus(c+1790,"top d_cache shift_bit", false,-1, 8,0);
        tracep->declQuad(c+1791,"top d_cache wmask", false,-1, 63,0);
        tracep->declBit(c+1793,"top d_cache way0_hit", false,-1);
        tracep->declBit(c+1794,"top d_cache way1_hit", false,-1);
        tracep->declBus(c+1795,"top d_cache unuse_way", false,-1, 1,0);
        tracep->declBus(c+1796,"top d_cache state", false,-1, 3,0);
        tracep->declBit(c+1804,"top axi clock", false,-1);
        tracep->declBit(c+1805,"top axi reset", false,-1);
        tracep->declBus(c+118,"top axi io_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+119,"top axi io_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+120,"top axi io_axi_in_arvalid", false,-1);
        tracep->declBit(c+121,"top axi io_axi_in_rready", false,-1);
        tracep->declBus(c+122,"top axi io_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+123,"top axi io_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+124,"top axi io_axi_in_awvalid", false,-1);
        tracep->declQuad(c+125,"top axi io_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+127,"top axi io_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+128,"top axi io_axi_in_wvalid", false,-1);
        tracep->declBit(c+129,"top axi io_axi_in_bready", false,-1);
        tracep->declQuad(c+112,"top axi io_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+114,"top axi io_axi_out_rlast", false,-1);
        tracep->declBit(c+115,"top axi io_axi_out_rvalid", false,-1);
        tracep->declBit(c+116,"top axi io_axi_out_wready", false,-1);
        tracep->declBit(c+117,"top axi io_axi_out_bvalid", false,-1);
        tracep->declQuad(c+1797,"top axi Mem_modle_Raddr", false,-1, 63,0);
        tracep->declQuad(c+112,"top axi Mem_modle_Rdata", false,-1, 63,0);
        tracep->declQuad(c+1799,"top axi Mem_modle_Waddr", false,-1, 63,0);
        tracep->declQuad(c+125,"top axi Mem_modle_Wdata", false,-1, 63,0);
        tracep->declBus(c+127,"top axi Mem_modle_Wmask", false,-1, 7,0);
        tracep->declBit(c+116,"top axi Mem_modle_Write_en", false,-1);
        tracep->declBit(c+115,"top axi Mem_modle_Read_en", false,-1);
        tracep->declBit(c+116,"top axi axi_wready", false,-1);
        tracep->declBit(c+117,"top axi axi_bvalid", false,-1);
        tracep->declBit(c+115,"top axi axi_rvalid", false,-1);
        tracep->declBus(c+1801,"top axi arlen", false,-1, 7,0);
        tracep->declBus(c+1802,"top axi awlen", false,-1, 7,0);
        tracep->declQuad(c+1797,"top axi araddr", false,-1, 63,0);
        tracep->declQuad(c+1799,"top axi awaddr", false,-1, 63,0);
        tracep->declBus(c+1803,"top axi state", false,-1, 2,0);
        tracep->declQuad(c+1797,"top axi Mem_modle Raddr", false,-1, 63,0);
        tracep->declQuad(c+1799,"top axi Mem_modle Waddr", false,-1, 63,0);
        tracep->declQuad(c+125,"top axi Mem_modle Wdata", false,-1, 63,0);
        tracep->declBus(c+127,"top axi Mem_modle Wmask", false,-1, 7,0);
        tracep->declBit(c+116,"top axi Mem_modle Write_en", false,-1);
        tracep->declBit(c+115,"top axi Mem_modle Read_en", false,-1);
        tracep->declQuad(c+112,"top axi Mem_modle Rdata", false,-1, 63,0);
        tracep->declBus(c+130,"top dpi flag", false,-1, 31,0);
        tracep->declBus(c+131,"top dpi ecall_flag", false,-1, 31,0);
        tracep->declQuad(c+132,"top dpi pc", false,-1, 63,0);
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
    VlWide<16>/*511:0*/ __Vtemp2420;
    VlWide<16>/*511:0*/ __Vtemp2421;
    VlWide<16>/*511:0*/ __Vtemp2425;
    VlWide<16>/*511:0*/ __Vtemp2426;
    VlWide<16>/*511:0*/ __Vtemp2431;
    VlWide<16>/*511:0*/ __Vtemp2432;
    VlWide<16>/*511:0*/ __Vtemp2435;
    VlWide<4>/*127:0*/ __Vtemp2439;
    VlWide<4>/*127:0*/ __Vtemp2440;
    VlWide<4>/*127:0*/ __Vtemp2441;
    VlWide<3>/*95:0*/ __Vtemp2444;
    VlWide<3>/*95:0*/ __Vtemp2445;
    VlWide<3>/*95:0*/ __Vtemp2449;
    VlWide<3>/*95:0*/ __Vtemp2453;
    VlWide<3>/*95:0*/ __Vtemp2460;
    VlWide<4>/*127:0*/ __Vtemp2461;
    VlWide<3>/*95:0*/ __Vtemp2462;
    VlWide<4>/*127:0*/ __Vtemp2463;
    VlWide<4>/*127:0*/ __Vtemp2464;
    VlWide<4>/*127:0*/ __Vtemp2470;
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
            __Vtemp2420[0U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0U];
            __Vtemp2420[1U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[1U];
            __Vtemp2420[2U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[2U];
            __Vtemp2420[3U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[3U];
            __Vtemp2420[4U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[4U];
            __Vtemp2420[5U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[5U];
            __Vtemp2420[6U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[6U];
            __Vtemp2420[7U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[7U];
            __Vtemp2420[8U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[8U];
            __Vtemp2420[9U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[9U];
            __Vtemp2420[0xaU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xaU];
            __Vtemp2420[0xbU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xbU];
            __Vtemp2420[0xcU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xcU];
            __Vtemp2420[0xdU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xdU];
            __Vtemp2420[0xeU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xeU];
            __Vtemp2420[0xfU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xfU];
        } else {
            __Vtemp2420[0U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1223[0U]);
            __Vtemp2420[1U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[1U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1223[1U]);
            __Vtemp2420[2U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[2U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1223[2U]);
            __Vtemp2420[3U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[3U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1223[3U]);
            __Vtemp2420[4U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[4U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1223[4U]);
            __Vtemp2420[5U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[5U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1223[5U]);
            __Vtemp2420[6U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[6U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1223[6U]);
            __Vtemp2420[7U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[7U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1223[7U]);
            __Vtemp2420[8U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[8U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1223[8U]);
            __Vtemp2420[9U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[9U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1223[9U]);
            __Vtemp2420[0xaU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xaU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1223[0xaU]);
            __Vtemp2420[0xbU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xbU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1223[0xbU]);
            __Vtemp2420[0xcU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xcU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1223[0xcU]);
            __Vtemp2420[0xdU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xdU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1223[0xdU]);
            __Vtemp2420[0xeU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xeU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1223[0xeU]);
            __Vtemp2420[0xfU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xfU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1223[0xfU]);
        }
        VL_SHIFTR_WWI(512,512,9, __Vtemp2421, __Vtemp2420, 
                      (0x1f8U & ((IData)(vlSelf->top__DOT__IFU__DOT__fs_pc) 
                                 << 3U)));
        if ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__IFU__DOT__fs_pc 
                                      >> 6U))))) {
            __Vtemp2425[0U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0U];
            __Vtemp2425[1U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[1U];
            __Vtemp2425[2U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[2U];
            __Vtemp2425[3U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[3U];
            __Vtemp2425[4U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[4U];
            __Vtemp2425[5U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[5U];
            __Vtemp2425[6U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[6U];
            __Vtemp2425[7U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[7U];
            __Vtemp2425[8U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[8U];
            __Vtemp2425[9U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[9U];
            __Vtemp2425[0xaU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xaU];
            __Vtemp2425[0xbU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xbU];
            __Vtemp2425[0xcU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xcU];
            __Vtemp2425[0xdU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xdU];
            __Vtemp2425[0xeU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xeU];
            __Vtemp2425[0xfU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xfU];
        } else {
            __Vtemp2425[0U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1239[0U]);
            __Vtemp2425[1U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[1U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1239[1U]);
            __Vtemp2425[2U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[2U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1239[2U]);
            __Vtemp2425[3U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[3U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1239[3U]);
            __Vtemp2425[4U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[4U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1239[4U]);
            __Vtemp2425[5U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[5U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1239[5U]);
            __Vtemp2425[6U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[6U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1239[6U]);
            __Vtemp2425[7U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[7U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1239[7U]);
            __Vtemp2425[8U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[8U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1239[8U]);
            __Vtemp2425[9U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[9U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1239[9U]);
            __Vtemp2425[0xaU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xaU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1239[0xaU]);
            __Vtemp2425[0xbU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xbU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1239[0xbU]);
            __Vtemp2425[0xcU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xcU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1239[0xcU]);
            __Vtemp2425[0xdU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xdU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1239[0xdU]);
            __Vtemp2425[0xeU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xeU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1239[0xeU]);
            __Vtemp2425[0xfU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xfU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1239[0xfU]);
        }
        VL_SHIFTR_WWI(512,512,9, __Vtemp2426, __Vtemp2425, 
                      (0x1f8U & ((IData)(vlSelf->top__DOT__IFU__DOT__fs_pc) 
                                 << 3U)));
        tracep->fullQData(oldp+19,((((QData)((IData)(
                                                     ((1U 
                                                       == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__i_cache__DOT__way0_hit)
                                                        ? 
                                                       __Vtemp2421[1U]
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__i_cache__DOT__way1_hit)
                                                         ? 
                                                        __Vtemp2426[1U]
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
                                                                   __Vtemp2421[0U]
                                                                    : 
                                                                   ((IData)(vlSelf->top__DOT__i_cache__DOT__way1_hit)
                                                                     ? 
                                                                    __Vtemp2426[0U]
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
        tracep->fullBit(oldp+30,(vlSelf->top__DOT__EXU_io_es_allowin));
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
        tracep->fullBit(oldp+56,(vlSelf->top__DOT__EXU_io_es_to_ms_valid));
        tracep->fullQData(oldp+57,(vlSelf->top__DOT__EXU__DOT__es_pc),64);
        tracep->fullQData(oldp+59,((((QData)((IData)(
                                                     vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])))),64);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__EXU__DOT__store_data),64);
        tracep->fullBit(oldp+63,(vlSelf->top__DOT__EXU__DOT__st_we));
        tracep->fullCData(oldp+64,(vlSelf->top__DOT__EXU__DOT__st_wstrb),8);
        tracep->fullBit(oldp+65,(vlSelf->top__DOT__EXU__DOT__ld_we));
        tracep->fullCData(oldp+66,(vlSelf->top__DOT__EXU__DOT__load_type),3);
        tracep->fullQData(oldp+67,(vlSelf->top__DOT__LSU__DOT__ms_pc),64);
        tracep->fullQData(oldp+69,(((0U != (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
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
        tracep->fullBit(oldp+71,(vlSelf->top__DOT__LSU_io_ms_to_ws_valid));
        tracep->fullBit(oldp+72,(vlSelf->top__DOT__LSU__DOT__ms_rf_we));
        VL_SHIFTR_WWI(512,512,9, __Vtemp2431, vlSelf->top__DOT__d_cache__DOT___GEN_88, 
                      (0x1f8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                 << 3U)));
        VL_SHIFTR_WWI(512,512,9, __Vtemp2432, vlSelf->top__DOT__d_cache__DOT___GEN_136, 
                      (0x1f8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                 << 3U)));
        VL_EXTEND_WQ(512,64, __Vtemp2435, ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
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
        tracep->fullQData(oldp+73,((((QData)((IData)(
                                                     ((1U 
                                                       == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                        ? 
                                                       __Vtemp2431[1U]
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                         ? 
                                                        __Vtemp2432[1U]
                                                         : 
                                                        Vtop__ConstPool__CONST_93e1b771_0[1U]))
                                                       : 
                                                      __Vtemp2435[1U]))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((1U 
                                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                                   ? 
                                                                  ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                                    ? 
                                                                   __Vtemp2431[0U]
                                                                    : 
                                                                   ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                                     ? 
                                                                    __Vtemp2432[0U]
                                                                     : 
                                                                    Vtop__ConstPool__CONST_93e1b771_0[0U]))
                                                                   : 
                                                                  __Vtemp2435[0U]))))),64);
        tracep->fullBit(oldp+75,(vlSelf->top__DOT__d_cache_io_to_lsu_rvalid));
        tracep->fullBit(oldp+76,(vlSelf->top__DOT__d_cache_io_to_lsu_wready));
        tracep->fullIData(oldp+77,((IData)(vlSelf->top__DOT__LSU__DOT__maddr)),32);
        tracep->fullBit(oldp+78,(vlSelf->top__DOT__LSU_io_axi_out_arvalid));
        tracep->fullBit(oldp+79,(vlSelf->top__DOT__LSU_io_axi_out_awvalid));
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__LSU__DOT__store_data),64);
        tracep->fullCData(oldp+82,(vlSelf->top__DOT__LSU__DOT__wstrb),8);
        tracep->fullBit(oldp+83,(vlSelf->top__DOT__LSU__DOT__wen));
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__WBU__DOT__ws_pc),64);
        tracep->fullIData(oldp+86,((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1257)),32);
        tracep->fullCData(oldp+87,(vlSelf->top__DOT__i_cache__DOT___GEN_1258),8);
        tracep->fullBit(oldp+88,(vlSelf->top__DOT__i_cache_io_to_axi_arvalid));
        tracep->fullBit(oldp+89,(vlSelf->top__DOT__i_cache_io_to_axi_rready));
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata),64);
        tracep->fullBit(oldp+92,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast));
        tracep->fullBit(oldp+93,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid));
        tracep->fullIData(oldp+94,((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2409)),32);
        tracep->fullCData(oldp+95,(vlSelf->top__DOT__d_cache_io_to_axi_arlen),8);
        tracep->fullBit(oldp+96,(vlSelf->top__DOT__d_cache_io_to_axi_arvalid));
        tracep->fullBit(oldp+97,(vlSelf->top__DOT__d_cache_io_to_axi_rready));
        tracep->fullIData(oldp+98,(vlSelf->top__DOT__d_cache_io_to_axi_awaddr),32);
        tracep->fullCData(oldp+99,(vlSelf->top__DOT__d_cache_io_to_axi_awlen),8);
        tracep->fullBit(oldp+100,(vlSelf->top__DOT__d_cache_io_to_axi_awvalid));
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__d_cache_io_to_axi_wdata),64);
        tracep->fullCData(oldp+103,(vlSelf->top__DOT__d_cache_io_to_axi_wstrb),8);
        tracep->fullBit(oldp+104,(vlSelf->top__DOT__d_cache_io_to_axi_wvalid));
        tracep->fullBit(oldp+105,(vlSelf->top__DOT__d_cache_io_to_axi_bready));
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata),64);
        tracep->fullBit(oldp+108,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rlast));
        tracep->fullBit(oldp+109,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid));
        tracep->fullBit(oldp+110,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_wready));
        tracep->fullBit(oldp+111,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid));
        tracep->fullQData(oldp+112,(vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata),64);
        tracep->fullBit(oldp+114,(vlSelf->top__DOT__axi_io_axi_out_rlast));
        tracep->fullBit(oldp+115,(vlSelf->top__DOT__axi__DOT__axi_rvalid));
        tracep->fullBit(oldp+116,(vlSelf->top__DOT__axi__DOT__axi_wready));
        tracep->fullBit(oldp+117,(vlSelf->top__DOT__axi__DOT__axi_bvalid));
        tracep->fullIData(oldp+118,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullCData(oldp+119,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullBit(oldp+120,(vlSelf->top__DOT__arbiter_io_axi_out_arvalid));
        tracep->fullBit(oldp+121,(vlSelf->top__DOT__arbiter_io_axi_out_rready));
        tracep->fullIData(oldp+122,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullCData(oldp+123,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullBit(oldp+124,(vlSelf->top__DOT__arbiter_io_axi_out_awvalid));
        tracep->fullQData(oldp+125,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullCData(oldp+127,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullBit(oldp+128,(vlSelf->top__DOT__arbiter_io_axi_out_wvalid));
        tracep->fullBit(oldp+129,(vlSelf->top__DOT__arbiter_io_axi_out_bready));
        tracep->fullIData(oldp+130,((2U == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))),32);
        tracep->fullIData(oldp+131,((0x3dU == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))),32);
        tracep->fullQData(oldp+132,(((IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)
                                      ? vlSelf->top__DOT__WBU__DOT__ws_pc
                                      : ((IData)(vlSelf->top__DOT__LSU__DOT__ms_valid)
                                          ? vlSelf->top__DOT__LSU__DOT__ms_pc
                                          : ((IData)(vlSelf->top__DOT__EXU__DOT__es_valid)
                                              ? vlSelf->top__DOT__EXU__DOT__es_pc
                                              : ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)
                                                  ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                                  : vlSelf->top__DOT__IFU__DOT__fs_pc))))),64);
        tracep->fullBit(oldp+134,(vlSelf->top__DOT__diff_step));
        tracep->fullQData(oldp+135,(vlSelf->top__DOT__Register__DOT__Reg[0]),64);
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__Register__DOT__Reg[1]),64);
        tracep->fullQData(oldp+139,(vlSelf->top__DOT__Register__DOT__Reg[2]),64);
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__Register__DOT__Reg[3]),64);
        tracep->fullQData(oldp+143,(vlSelf->top__DOT__Register__DOT__Reg[4]),64);
        tracep->fullQData(oldp+145,(vlSelf->top__DOT__Register__DOT__Reg[5]),64);
        tracep->fullQData(oldp+147,(vlSelf->top__DOT__Register__DOT__Reg[6]),64);
        tracep->fullQData(oldp+149,(vlSelf->top__DOT__Register__DOT__Reg[7]),64);
        tracep->fullQData(oldp+151,(vlSelf->top__DOT__Register__DOT__Reg[8]),64);
        tracep->fullQData(oldp+153,(vlSelf->top__DOT__Register__DOT__Reg[9]),64);
        tracep->fullQData(oldp+155,(vlSelf->top__DOT__Register__DOT__Reg[10]),64);
        tracep->fullQData(oldp+157,(vlSelf->top__DOT__Register__DOT__Reg[11]),64);
        tracep->fullQData(oldp+159,(vlSelf->top__DOT__Register__DOT__Reg[12]),64);
        tracep->fullQData(oldp+161,(vlSelf->top__DOT__Register__DOT__Reg[13]),64);
        tracep->fullQData(oldp+163,(vlSelf->top__DOT__Register__DOT__Reg[14]),64);
        tracep->fullQData(oldp+165,(vlSelf->top__DOT__Register__DOT__Reg[15]),64);
        tracep->fullQData(oldp+167,(vlSelf->top__DOT__Register__DOT__Reg[16]),64);
        tracep->fullQData(oldp+169,(vlSelf->top__DOT__Register__DOT__Reg[17]),64);
        tracep->fullQData(oldp+171,(vlSelf->top__DOT__Register__DOT__Reg[18]),64);
        tracep->fullQData(oldp+173,(vlSelf->top__DOT__Register__DOT__Reg[19]),64);
        tracep->fullQData(oldp+175,(vlSelf->top__DOT__Register__DOT__Reg[20]),64);
        tracep->fullQData(oldp+177,(vlSelf->top__DOT__Register__DOT__Reg[21]),64);
        tracep->fullQData(oldp+179,(vlSelf->top__DOT__Register__DOT__Reg[22]),64);
        tracep->fullQData(oldp+181,(vlSelf->top__DOT__Register__DOT__Reg[23]),64);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT__Register__DOT__Reg[24]),64);
        tracep->fullQData(oldp+185,(vlSelf->top__DOT__Register__DOT__Reg[25]),64);
        tracep->fullQData(oldp+187,(vlSelf->top__DOT__Register__DOT__Reg[26]),64);
        tracep->fullQData(oldp+189,(vlSelf->top__DOT__Register__DOT__Reg[27]),64);
        tracep->fullQData(oldp+191,(vlSelf->top__DOT__Register__DOT__Reg[28]),64);
        tracep->fullQData(oldp+193,(vlSelf->top__DOT__Register__DOT__Reg[29]),64);
        tracep->fullQData(oldp+195,(vlSelf->top__DOT__Register__DOT__Reg[30]),64);
        tracep->fullQData(oldp+197,(vlSelf->top__DOT__Register__DOT__Reg[31]),64);
        tracep->fullQData(oldp+199,(vlSelf->top__DOT__Register__DOT__Reg
                                    [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+201,(vlSelf->top__DOT__Register__DOT__Reg
                                    [vlSelf->top__DOT__IDU_io_raddr2]),64);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0U]),64);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__Register__DOT__Reg
                                    [1U]),64);
        tracep->fullQData(oldp+207,(vlSelf->top__DOT__Register__DOT__Reg
                                    [2U]),64);
        tracep->fullQData(oldp+209,(vlSelf->top__DOT__Register__DOT__Reg
                                    [3U]),64);
        tracep->fullQData(oldp+211,(vlSelf->top__DOT__Register__DOT__Reg
                                    [4U]),64);
        tracep->fullQData(oldp+213,(vlSelf->top__DOT__Register__DOT__Reg
                                    [5U]),64);
        tracep->fullQData(oldp+215,(vlSelf->top__DOT__Register__DOT__Reg
                                    [6U]),64);
        tracep->fullQData(oldp+217,(vlSelf->top__DOT__Register__DOT__Reg
                                    [7U]),64);
        tracep->fullQData(oldp+219,(vlSelf->top__DOT__Register__DOT__Reg
                                    [8U]),64);
        tracep->fullQData(oldp+221,(vlSelf->top__DOT__Register__DOT__Reg
                                    [9U]),64);
        tracep->fullQData(oldp+223,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xaU]),64);
        tracep->fullQData(oldp+225,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xbU]),64);
        tracep->fullQData(oldp+227,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xcU]),64);
        tracep->fullQData(oldp+229,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xdU]),64);
        tracep->fullQData(oldp+231,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xeU]),64);
        tracep->fullQData(oldp+233,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xfU]),64);
        tracep->fullQData(oldp+235,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x10U]),64);
        tracep->fullQData(oldp+237,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x11U]),64);
        tracep->fullQData(oldp+239,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x12U]),64);
        tracep->fullQData(oldp+241,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x13U]),64);
        tracep->fullQData(oldp+243,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x14U]),64);
        tracep->fullQData(oldp+245,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x15U]),64);
        tracep->fullQData(oldp+247,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x16U]),64);
        tracep->fullQData(oldp+249,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x17U]),64);
        tracep->fullQData(oldp+251,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x18U]),64);
        tracep->fullQData(oldp+253,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x19U]),64);
        tracep->fullQData(oldp+255,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1aU]),64);
        tracep->fullQData(oldp+257,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1bU]),64);
        tracep->fullQData(oldp+259,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1cU]),64);
        tracep->fullQData(oldp+261,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1dU]),64);
        tracep->fullQData(oldp+263,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1eU]),64);
        tracep->fullQData(oldp+265,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1fU]),64);
        tracep->fullBit(oldp+267,((((IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we) 
                                    & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)) 
                                   & (0U != (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_dst)))));
        tracep->fullQData(oldp+268,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0]),64);
        tracep->fullQData(oldp+270,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[1]),64);
        tracep->fullQData(oldp+272,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[2]),64);
        tracep->fullQData(oldp+274,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[3]),64);
        tracep->fullQData(oldp+276,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[4]),64);
        tracep->fullQData(oldp+278,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[5]),64);
        tracep->fullQData(oldp+280,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[6]),64);
        tracep->fullQData(oldp+282,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[7]),64);
        tracep->fullQData(oldp+284,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[8]),64);
        tracep->fullQData(oldp+286,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[9]),64);
        tracep->fullQData(oldp+288,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[10]),64);
        tracep->fullQData(oldp+290,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[11]),64);
        tracep->fullQData(oldp+292,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[12]),64);
        tracep->fullQData(oldp+294,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[13]),64);
        tracep->fullQData(oldp+296,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[14]),64);
        tracep->fullQData(oldp+298,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[15]),64);
        tracep->fullQData(oldp+300,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[16]),64);
        tracep->fullQData(oldp+302,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[17]),64);
        tracep->fullQData(oldp+304,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[18]),64);
        tracep->fullQData(oldp+306,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[19]),64);
        tracep->fullQData(oldp+308,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[20]),64);
        tracep->fullQData(oldp+310,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[21]),64);
        tracep->fullQData(oldp+312,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[22]),64);
        tracep->fullQData(oldp+314,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[23]),64);
        tracep->fullQData(oldp+316,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[24]),64);
        tracep->fullQData(oldp+318,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[25]),64);
        tracep->fullQData(oldp+320,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[26]),64);
        tracep->fullQData(oldp+322,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[27]),64);
        tracep->fullQData(oldp+324,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[28]),64);
        tracep->fullQData(oldp+326,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[29]),64);
        tracep->fullQData(oldp+328,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[30]),64);
        tracep->fullQData(oldp+330,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[31]),64);
        tracep->fullBit(oldp+332,(vlSelf->top__DOT__IFU__DOT__fs_valid));
        tracep->fullBit(oldp+333,(vlSelf->top__DOT__IFU__DOT__fs_ready_go));
        tracep->fullBit(oldp+334,(vlSelf->top__DOT__IFU__DOT__cache_init));
        tracep->fullBit(oldp+335,(vlSelf->top__DOT__IFU__DOT__fs_to_ds_valid));
        tracep->fullQData(oldp+336,((4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc)),64);
        tracep->fullBit(oldp+338,(vlSelf->top__DOT__IFU__DOT__fs_allowin));
        tracep->fullBit(oldp+339,(((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
                                   & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
        tracep->fullBit(oldp+340,((((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
                                    >> 1U) & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
        tracep->fullCData(oldp+341,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                      ? 1U : ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                               ? (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)
                                               : 0U))),2);
        tracep->fullQData(oldp+342,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
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
        tracep->fullCData(oldp+344,(((2U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                      ? 0U : ((0x3eU 
                                               == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))
                                               ? 1U
                                               : (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)))),2);
        tracep->fullQData(oldp+345,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data),64);
        tracep->fullIData(oldp+347,(vlSelf->top__DOT__IDU__DOT__inst),32);
        tracep->fullBit(oldp+348,(vlSelf->top__DOT__IDU__DOT__br_taken_cancel));
        tracep->fullBit(oldp+349,(vlSelf->top__DOT__IDU__DOT__src1_is_pc));
        tracep->fullIData(oldp+350,(vlSelf->top__DOT__IDU__DOT___inst_type_T_188),32);
        tracep->fullCData(oldp+351,(vlSelf->top__DOT__IDU__DOT__csr_write),2);
        tracep->fullBit(oldp+352,(vlSelf->top__DOT__IDU__DOT__src2_is_imm));
        tracep->fullCData(oldp+353,(vlSelf->top__DOT__IDU__DOT__rs2),5);
        tracep->fullBit(oldp+354,(vlSelf->top__DOT__IDU__DOT__conflict));
        tracep->fullBit(oldp+355,(vlSelf->top__DOT__IDU__DOT__ds_ready_go));
        tracep->fullBit(oldp+356,(vlSelf->top__DOT__IDU__DOT__ds_allowin));
        tracep->fullBit(oldp+357,(vlSelf->top__DOT__IDU__DOT__br_taken));
        tracep->fullSData(oldp+358,((vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0x14U)),12);
        tracep->fullIData(oldp+359,(((0x80000U & (vlSelf->top__DOT__IDU__DOT__inst 
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
        tracep->fullIData(oldp+360,((vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+361,(((0xfe0U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 7U)))),12);
        tracep->fullSData(oldp+362,(((0x800U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x14U)) 
                                     | ((0x400U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                   << 3U)) 
                                        | ((0x3f0U 
                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0x15U)) 
                                           | (0xfU 
                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 8U)))))),12);
        tracep->fullQData(oldp+363,(vlSelf->top__DOT__IDU__DOT__imm),64);
        tracep->fullCData(oldp+365,(vlSelf->top__DOT__IDU__DOT__csr_index),2);
        tracep->fullQData(oldp+366,(((0x1073U == (0x707fU 
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
        tracep->fullQData(oldp+368,(vlSelf->top__DOT__IDU__DOT__src1),64);
        tracep->fullQData(oldp+370,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[0]),64);
        tracep->fullQData(oldp+372,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[1]),64);
        tracep->fullQData(oldp+374,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[2]),64);
        tracep->fullQData(oldp+376,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[3]),64);
        tracep->fullQData(oldp+378,(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value),64);
        tracep->fullQData(oldp+380,(vlSelf->top__DOT__EXU__DOT__src2_value),64);
        tracep->fullIData(oldp+382,(vlSelf->top__DOT__EXU__DOT__ALUop),32);
        tracep->fullBit(oldp+383,(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy));
        tracep->fullQData(oldp+384,(vlSelf->top__DOT__EXU__DOT__src1_value),64);
        tracep->fullBit(oldp+386,((1U & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy)))));
        tracep->fullBit(oldp+387,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_mul_valid));
        tracep->fullBit(oldp+388,((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)));
        tracep->fullBit(oldp+389,(((0U != (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state)) 
                                   & ((1U != (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state)) 
                                      & (2U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))))));
        tracep->fullIData(oldp+390,(((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                      ? 0U : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                               ? 0U
                                               : ((2U 
                                                   == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                                   ? 
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
                                                                 >> 0x20U))))
                                                   : 0U)))),32);
        tracep->fullIData(oldp+391,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_result_lo),32);
        tracep->fullBit(oldp+392,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_valid));
        tracep->fullBit(oldp+393,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw));
        tracep->fullBit(oldp+394,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed));
        tracep->fullBit(oldp+395,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start) 
                                   & VL_GTES_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num))));
        tracep->fullQData(oldp+396,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_quotient),64);
        tracep->fullQData(oldp+398,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder),64);
        tracep->fullBit(oldp+400,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__mul_valid));
        tracep->fullBit(oldp+401,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__div_valid));
        tracep->fullQData(oldp+402,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res),64);
        tracep->fullQData(oldp+404,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sub_res),64);
        tracep->fullQData(oldp+406,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sra_res),64);
        tracep->fullQData(oldp+408,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),64);
        VL_EXTEND_WQ(127,64, __Vtemp2439, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
        VL_SHIFTL_WWI(127,127,6, __Vtemp2440, __Vtemp2439, 
                      (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
        __Vtemp2441[0U] = __Vtemp2440[0U];
        __Vtemp2441[1U] = __Vtemp2440[1U];
        __Vtemp2441[2U] = __Vtemp2440[2U];
        __Vtemp2441[3U] = (0x7fffffffU & __Vtemp2440[3U]);
        tracep->fullWData(oldp+410,(__Vtemp2441),127);
        tracep->fullIData(oldp+414,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value), 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),32);
        tracep->fullIData(oldp+415,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__srlw_res),32);
        tracep->fullQData(oldp+416,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sllw_res),63);
        tracep->fullQData(oldp+418,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     | vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+420,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     ^ vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+422,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     & vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+424,((((QData)((IData)(
                                                      ((0U 
                                                        == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                                          ? 
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
                                                                        >> 0x20U))))
                                                          : 0U))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_result_lo)))),64);
        tracep->fullIData(oldp+426,((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_quotient)),32);
        tracep->fullIData(oldp+427,((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder)),32);
        tracep->fullWData(oldp+428,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res),127);
        tracep->fullCData(oldp+432,((7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])),3);
        tracep->fullQData(oldp+433,((((QData)((IData)(
                                                      vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))),64);
        tracep->fullBit(oldp+435,(((6U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])) 
                                   | ((5U == (7U & 
                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])) 
                                      | (4U == (7U 
                                                & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))))));
        VL_EXTEND_WQ(65,64, __Vtemp2444, (~ (((QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
        VL_EXTEND_WQ(65,64, __Vtemp2445, (~ (((QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
        VL_EXTEND_WQ(65,64, __Vtemp2449, ((2U == (7U 
                                                  & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                           ? (((QData)((IData)(
                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))
                                           : ((1U == 
                                               (7U 
                                                & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                               ? (((QData)((IData)(
                                                                   vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))
                                               : 0ULL)));
        __Vtemp2453[1U] = ((4U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
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
                                : __Vtemp2449[1U]));
        __Vtemp2460[2U] = ((7U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                            ? 0U : (1U & ((6U == (7U 
                                                  & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                           ? __Vtemp2444[2U]
                                           : ((5U == 
                                               (7U 
                                                & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                               ? __Vtemp2445[2U]
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
                                                   __Vtemp2449[2U]))))));
        tracep->fullQData(oldp+436,((((QData)((IData)(
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
                                                        __Vtemp2444[1U]
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (7U 
                                                           & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                          ? 
                                                         __Vtemp2445[1U]
                                                          : 
                                                         __Vtemp2453[1U]))))) 
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
                                                                    __Vtemp2444[0U]
                                                                     : 
                                                                    ((5U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                                      ? 
                                                                     __Vtemp2445[0U]
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
                                                                       __Vtemp2449[0U]))))))))),64);
        tracep->fullBit(oldp+438,((1U & ((IData)((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                                  >> 0x3fU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__EXU__DOT__src2_value 
                                                    >> 0x3fU))))));
        tracep->fullQData(oldp+439,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__res),64);
        tracep->fullCData(oldp+441,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state),2);
        tracep->fullWData(oldp+442,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1),128);
        tracep->fullWData(oldp+446,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2),65);
        tracep->fullQData(oldp+449,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32),64);
        tracep->fullQData(oldp+451,(((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)
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
        __Vtemp2461[0U] = (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32);
        __Vtemp2461[1U] = (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                   >> 0x20U));
        __Vtemp2461[2U] = (IData)(((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                  >> 0x3fU)))
                                    ? 0xffffffffffffffffULL
                                    : 0ULL));
        __Vtemp2461[3U] = (IData)((((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                   >> 0x3fU)))
                                     ? 0xffffffffffffffffULL
                                     : 0ULL) >> 0x20U));
        tracep->fullWData(oldp+453,(__Vtemp2461),128);
        tracep->fullQData(oldp+457,((((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)
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
        tracep->fullBit(oldp+459,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg));
        tracep->fullBit(oldp+460,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg));
        tracep->fullBit(oldp+461,((((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg) 
                                    & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg))) 
                                   | ((~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)) 
                                      & (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)))));
        tracep->fullQData(oldp+462,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s),64);
        tracep->fullQData(oldp+464,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s),64);
        tracep->fullQData(oldp+466,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                      ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                      : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)),64);
        tracep->fullQData(oldp+468,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                      ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                      : vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+470,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                      ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)
                                          ? (1ULL + 
                                             (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s))
                                          : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s)
                                      : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                          ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                          : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))),64);
        tracep->fullQData(oldp+472,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                      ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)
                                          ? (1ULL + 
                                             (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s))
                                          : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s)
                                      : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                          ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                          : vlSelf->top__DOT__EXU__DOT__src2_value))),64);
        VL_EXTEND_WQ(65,64, __Vtemp2462, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                           ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)
                                               ? (1ULL 
                                                  + 
                                                  (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s))
                                               : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s)
                                           : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                               ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                               : vlSelf->top__DOT__EXU__DOT__src2_value)));
        tracep->fullWData(oldp+474,(__Vtemp2462),65);
        tracep->fullWData(oldp+477,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand),128);
        tracep->fullBit(oldp+481,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start));
        tracep->fullQData(oldp+482,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient),64);
        tracep->fullIData(oldp+484,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num),32);
        VL_EXTEND_WQ(128,64, __Vtemp2463, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                            ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)
                                                ? (1ULL 
                                                   + 
                                                   (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s))
                                                : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s)
                                            : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                                ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                                : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)));
        tracep->fullWData(oldp+485,(__Vtemp2463),128);
        tracep->fullWData(oldp+489,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res),65);
        __Vtemp2464[0U] = 0U;
        __Vtemp2464[1U] = (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                           << 0x1fU);
        __Vtemp2464[2U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                            >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                      << 0x1fU));
        __Vtemp2464[3U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                            >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                      << 0x1fU));
        tracep->fullWData(oldp+492,(__Vtemp2464),128);
        if ((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])) {
            __Vtemp2470[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U];
            __Vtemp2470[1U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U];
            __Vtemp2470[2U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U];
            __Vtemp2470[3U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U];
        } else {
            __Vtemp2470[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U];
            __Vtemp2470[1U] = ((0x7fffffffU & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U]) 
                               | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                                  << 0x1fU));
            __Vtemp2470[2U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                                >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                          << 0x1fU));
            __Vtemp2470[3U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                          << 0x1fU));
        }
        tracep->fullWData(oldp+496,(__Vtemp2470),128);
        tracep->fullBit(oldp+500,(vlSelf->top__DOT__LSU__DOT__ms_ready_go));
        tracep->fullQData(oldp+501,(vlSelf->top__DOT__LSU__DOT__ms_res),64);
        tracep->fullBit(oldp+503,(vlSelf->top__DOT__LSU__DOT__ren));
        tracep->fullQData(oldp+504,(vlSelf->top__DOT__LSU__DOT__maddr),64);
        tracep->fullCData(oldp+506,(vlSelf->top__DOT__LSU__DOT__load_type),3);
        tracep->fullQData(oldp+507,(vlSelf->top__DOT__LSU__DOT__mem_rdata),64);
        tracep->fullQData(oldp+509,(((7U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
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
        tracep->fullCData(oldp+511,(vlSelf->top__DOT__arbiter__DOT__state),2);
        tracep->fullWData(oldp+512,(vlSelf->top__DOT__i_cache__DOT__ram_0_0),512);
        tracep->fullWData(oldp+528,(vlSelf->top__DOT__i_cache__DOT__ram_0_1),512);
        tracep->fullWData(oldp+544,(vlSelf->top__DOT__i_cache__DOT__ram_0_2),512);
        tracep->fullWData(oldp+560,(vlSelf->top__DOT__i_cache__DOT__ram_0_3),512);
        tracep->fullWData(oldp+576,(vlSelf->top__DOT__i_cache__DOT__ram_0_4),512);
        tracep->fullWData(oldp+592,(vlSelf->top__DOT__i_cache__DOT__ram_0_5),512);
        tracep->fullWData(oldp+608,(vlSelf->top__DOT__i_cache__DOT__ram_0_6),512);
        tracep->fullWData(oldp+624,(vlSelf->top__DOT__i_cache__DOT__ram_0_7),512);
        tracep->fullWData(oldp+640,(vlSelf->top__DOT__i_cache__DOT__ram_0_8),512);
        tracep->fullWData(oldp+656,(vlSelf->top__DOT__i_cache__DOT__ram_0_9),512);
        tracep->fullWData(oldp+672,(vlSelf->top__DOT__i_cache__DOT__ram_0_10),512);
        tracep->fullWData(oldp+688,(vlSelf->top__DOT__i_cache__DOT__ram_0_11),512);
        tracep->fullWData(oldp+704,(vlSelf->top__DOT__i_cache__DOT__ram_0_12),512);
        tracep->fullWData(oldp+720,(vlSelf->top__DOT__i_cache__DOT__ram_0_13),512);
        tracep->fullWData(oldp+736,(vlSelf->top__DOT__i_cache__DOT__ram_0_14),512);
        tracep->fullWData(oldp+752,(vlSelf->top__DOT__i_cache__DOT__ram_0_15),512);
        tracep->fullWData(oldp+768,(vlSelf->top__DOT__i_cache__DOT__ram_1_0),512);
        tracep->fullWData(oldp+784,(vlSelf->top__DOT__i_cache__DOT__ram_1_1),512);
        tracep->fullWData(oldp+800,(vlSelf->top__DOT__i_cache__DOT__ram_1_2),512);
        tracep->fullWData(oldp+816,(vlSelf->top__DOT__i_cache__DOT__ram_1_3),512);
        tracep->fullWData(oldp+832,(vlSelf->top__DOT__i_cache__DOT__ram_1_4),512);
        tracep->fullWData(oldp+848,(vlSelf->top__DOT__i_cache__DOT__ram_1_5),512);
        tracep->fullWData(oldp+864,(vlSelf->top__DOT__i_cache__DOT__ram_1_6),512);
        tracep->fullWData(oldp+880,(vlSelf->top__DOT__i_cache__DOT__ram_1_7),512);
        tracep->fullWData(oldp+896,(vlSelf->top__DOT__i_cache__DOT__ram_1_8),512);
        tracep->fullWData(oldp+912,(vlSelf->top__DOT__i_cache__DOT__ram_1_9),512);
        tracep->fullWData(oldp+928,(vlSelf->top__DOT__i_cache__DOT__ram_1_10),512);
        tracep->fullWData(oldp+944,(vlSelf->top__DOT__i_cache__DOT__ram_1_11),512);
        tracep->fullWData(oldp+960,(vlSelf->top__DOT__i_cache__DOT__ram_1_12),512);
        tracep->fullWData(oldp+976,(vlSelf->top__DOT__i_cache__DOT__ram_1_13),512);
        tracep->fullWData(oldp+992,(vlSelf->top__DOT__i_cache__DOT__ram_1_14),512);
        tracep->fullWData(oldp+1008,(vlSelf->top__DOT__i_cache__DOT__ram_1_15),512);
        tracep->fullIData(oldp+1024,(vlSelf->top__DOT__i_cache__DOT__tag_0_0),32);
        tracep->fullIData(oldp+1025,(vlSelf->top__DOT__i_cache__DOT__tag_0_1),32);
        tracep->fullIData(oldp+1026,(vlSelf->top__DOT__i_cache__DOT__tag_0_2),32);
        tracep->fullIData(oldp+1027,(vlSelf->top__DOT__i_cache__DOT__tag_0_3),32);
        tracep->fullIData(oldp+1028,(vlSelf->top__DOT__i_cache__DOT__tag_0_4),32);
        tracep->fullIData(oldp+1029,(vlSelf->top__DOT__i_cache__DOT__tag_0_5),32);
        tracep->fullIData(oldp+1030,(vlSelf->top__DOT__i_cache__DOT__tag_0_6),32);
        tracep->fullIData(oldp+1031,(vlSelf->top__DOT__i_cache__DOT__tag_0_7),32);
        tracep->fullIData(oldp+1032,(vlSelf->top__DOT__i_cache__DOT__tag_0_8),32);
        tracep->fullIData(oldp+1033,(vlSelf->top__DOT__i_cache__DOT__tag_0_9),32);
        tracep->fullIData(oldp+1034,(vlSelf->top__DOT__i_cache__DOT__tag_0_10),32);
        tracep->fullIData(oldp+1035,(vlSelf->top__DOT__i_cache__DOT__tag_0_11),32);
        tracep->fullIData(oldp+1036,(vlSelf->top__DOT__i_cache__DOT__tag_0_12),32);
        tracep->fullIData(oldp+1037,(vlSelf->top__DOT__i_cache__DOT__tag_0_13),32);
        tracep->fullIData(oldp+1038,(vlSelf->top__DOT__i_cache__DOT__tag_0_14),32);
        tracep->fullIData(oldp+1039,(vlSelf->top__DOT__i_cache__DOT__tag_0_15),32);
        tracep->fullIData(oldp+1040,(vlSelf->top__DOT__i_cache__DOT__tag_1_0),32);
        tracep->fullIData(oldp+1041,(vlSelf->top__DOT__i_cache__DOT__tag_1_1),32);
        tracep->fullIData(oldp+1042,(vlSelf->top__DOT__i_cache__DOT__tag_1_2),32);
        tracep->fullIData(oldp+1043,(vlSelf->top__DOT__i_cache__DOT__tag_1_3),32);
        tracep->fullIData(oldp+1044,(vlSelf->top__DOT__i_cache__DOT__tag_1_4),32);
        tracep->fullIData(oldp+1045,(vlSelf->top__DOT__i_cache__DOT__tag_1_5),32);
        tracep->fullIData(oldp+1046,(vlSelf->top__DOT__i_cache__DOT__tag_1_6),32);
        tracep->fullIData(oldp+1047,(vlSelf->top__DOT__i_cache__DOT__tag_1_7),32);
        tracep->fullIData(oldp+1048,(vlSelf->top__DOT__i_cache__DOT__tag_1_8),32);
        tracep->fullIData(oldp+1049,(vlSelf->top__DOT__i_cache__DOT__tag_1_9),32);
        tracep->fullIData(oldp+1050,(vlSelf->top__DOT__i_cache__DOT__tag_1_10),32);
        tracep->fullIData(oldp+1051,(vlSelf->top__DOT__i_cache__DOT__tag_1_11),32);
        tracep->fullIData(oldp+1052,(vlSelf->top__DOT__i_cache__DOT__tag_1_12),32);
        tracep->fullIData(oldp+1053,(vlSelf->top__DOT__i_cache__DOT__tag_1_13),32);
        tracep->fullIData(oldp+1054,(vlSelf->top__DOT__i_cache__DOT__tag_1_14),32);
        tracep->fullIData(oldp+1055,(vlSelf->top__DOT__i_cache__DOT__tag_1_15),32);
        tracep->fullBit(oldp+1056,(vlSelf->top__DOT__i_cache__DOT__valid_0_0));
        tracep->fullBit(oldp+1057,(vlSelf->top__DOT__i_cache__DOT__valid_0_1));
        tracep->fullBit(oldp+1058,(vlSelf->top__DOT__i_cache__DOT__valid_0_2));
        tracep->fullBit(oldp+1059,(vlSelf->top__DOT__i_cache__DOT__valid_0_3));
        tracep->fullBit(oldp+1060,(vlSelf->top__DOT__i_cache__DOT__valid_0_4));
        tracep->fullBit(oldp+1061,(vlSelf->top__DOT__i_cache__DOT__valid_0_5));
        tracep->fullBit(oldp+1062,(vlSelf->top__DOT__i_cache__DOT__valid_0_6));
        tracep->fullBit(oldp+1063,(vlSelf->top__DOT__i_cache__DOT__valid_0_7));
        tracep->fullBit(oldp+1064,(vlSelf->top__DOT__i_cache__DOT__valid_0_8));
        tracep->fullBit(oldp+1065,(vlSelf->top__DOT__i_cache__DOT__valid_0_9));
        tracep->fullBit(oldp+1066,(vlSelf->top__DOT__i_cache__DOT__valid_0_10));
        tracep->fullBit(oldp+1067,(vlSelf->top__DOT__i_cache__DOT__valid_0_11));
        tracep->fullBit(oldp+1068,(vlSelf->top__DOT__i_cache__DOT__valid_0_12));
        tracep->fullBit(oldp+1069,(vlSelf->top__DOT__i_cache__DOT__valid_0_13));
        tracep->fullBit(oldp+1070,(vlSelf->top__DOT__i_cache__DOT__valid_0_14));
        tracep->fullBit(oldp+1071,(vlSelf->top__DOT__i_cache__DOT__valid_0_15));
        tracep->fullBit(oldp+1072,(vlSelf->top__DOT__i_cache__DOT__valid_1_0));
        tracep->fullBit(oldp+1073,(vlSelf->top__DOT__i_cache__DOT__valid_1_1));
        tracep->fullBit(oldp+1074,(vlSelf->top__DOT__i_cache__DOT__valid_1_2));
        tracep->fullBit(oldp+1075,(vlSelf->top__DOT__i_cache__DOT__valid_1_3));
        tracep->fullBit(oldp+1076,(vlSelf->top__DOT__i_cache__DOT__valid_1_4));
        tracep->fullBit(oldp+1077,(vlSelf->top__DOT__i_cache__DOT__valid_1_5));
        tracep->fullBit(oldp+1078,(vlSelf->top__DOT__i_cache__DOT__valid_1_6));
        tracep->fullBit(oldp+1079,(vlSelf->top__DOT__i_cache__DOT__valid_1_7));
        tracep->fullBit(oldp+1080,(vlSelf->top__DOT__i_cache__DOT__valid_1_8));
        tracep->fullBit(oldp+1081,(vlSelf->top__DOT__i_cache__DOT__valid_1_9));
        tracep->fullBit(oldp+1082,(vlSelf->top__DOT__i_cache__DOT__valid_1_10));
        tracep->fullBit(oldp+1083,(vlSelf->top__DOT__i_cache__DOT__valid_1_11));
        tracep->fullBit(oldp+1084,(vlSelf->top__DOT__i_cache__DOT__valid_1_12));
        tracep->fullBit(oldp+1085,(vlSelf->top__DOT__i_cache__DOT__valid_1_13));
        tracep->fullBit(oldp+1086,(vlSelf->top__DOT__i_cache__DOT__valid_1_14));
        tracep->fullBit(oldp+1087,(vlSelf->top__DOT__i_cache__DOT__valid_1_15));
        tracep->fullQData(oldp+1088,(vlSelf->top__DOT__i_cache__DOT__receive_data_0),64);
        tracep->fullQData(oldp+1090,(vlSelf->top__DOT__i_cache__DOT__receive_data_1),64);
        tracep->fullQData(oldp+1092,(vlSelf->top__DOT__i_cache__DOT__receive_data_2),64);
        tracep->fullQData(oldp+1094,(vlSelf->top__DOT__i_cache__DOT__receive_data_3),64);
        tracep->fullQData(oldp+1096,(vlSelf->top__DOT__i_cache__DOT__receive_data_4),64);
        tracep->fullQData(oldp+1098,(vlSelf->top__DOT__i_cache__DOT__receive_data_5),64);
        tracep->fullQData(oldp+1100,(vlSelf->top__DOT__i_cache__DOT__receive_data_6),64);
        tracep->fullQData(oldp+1102,(vlSelf->top__DOT__i_cache__DOT__receive_data_7),64);
        tracep->fullCData(oldp+1104,(vlSelf->top__DOT__i_cache__DOT__receive_num),3);
        tracep->fullCData(oldp+1105,(vlSelf->top__DOT__i_cache__DOT__quene_0),2);
        tracep->fullCData(oldp+1106,(vlSelf->top__DOT__i_cache__DOT__quene_1),2);
        tracep->fullCData(oldp+1107,(vlSelf->top__DOT__i_cache__DOT__quene_2),2);
        tracep->fullCData(oldp+1108,(vlSelf->top__DOT__i_cache__DOT__quene_3),2);
        tracep->fullCData(oldp+1109,(vlSelf->top__DOT__i_cache__DOT__quene_4),2);
        tracep->fullCData(oldp+1110,(vlSelf->top__DOT__i_cache__DOT__quene_5),2);
        tracep->fullCData(oldp+1111,(vlSelf->top__DOT__i_cache__DOT__quene_6),2);
        tracep->fullCData(oldp+1112,(vlSelf->top__DOT__i_cache__DOT__quene_7),2);
        tracep->fullCData(oldp+1113,(vlSelf->top__DOT__i_cache__DOT__quene_8),2);
        tracep->fullCData(oldp+1114,(vlSelf->top__DOT__i_cache__DOT__quene_9),2);
        tracep->fullCData(oldp+1115,(vlSelf->top__DOT__i_cache__DOT__quene_10),2);
        tracep->fullCData(oldp+1116,(vlSelf->top__DOT__i_cache__DOT__quene_11),2);
        tracep->fullCData(oldp+1117,(vlSelf->top__DOT__i_cache__DOT__quene_12),2);
        tracep->fullCData(oldp+1118,(vlSelf->top__DOT__i_cache__DOT__quene_13),2);
        tracep->fullCData(oldp+1119,(vlSelf->top__DOT__i_cache__DOT__quene_14),2);
        tracep->fullCData(oldp+1120,(vlSelf->top__DOT__i_cache__DOT__quene_15),2);
        tracep->fullCData(oldp+1121,((0x3fU & (IData)(vlSelf->top__DOT__IFU__DOT__fs_pc))),6);
        tracep->fullCData(oldp+1122,((0xfU & (IData)(
                                                     (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                      >> 6U)))),4);
        tracep->fullIData(oldp+1123,((0x3fffffU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 0xaU)))),22);
        tracep->fullSData(oldp+1124,((0x1f8U & ((IData)(vlSelf->top__DOT__IFU__DOT__fs_pc) 
                                                << 3U))),9);
        tracep->fullBit(oldp+1125,(vlSelf->top__DOT__i_cache__DOT__way0_hit));
        tracep->fullBit(oldp+1126,(vlSelf->top__DOT__i_cache__DOT__way1_hit));
        tracep->fullCData(oldp+1127,(vlSelf->top__DOT__i_cache__DOT__unuse_way),2);
        tracep->fullCData(oldp+1128,(vlSelf->top__DOT__i_cache__DOT__state),3);
        tracep->fullWData(oldp+1129,(vlSelf->top__DOT__d_cache__DOT__ram_0_0),512);
        tracep->fullWData(oldp+1145,(vlSelf->top__DOT__d_cache__DOT__ram_0_1),512);
        tracep->fullWData(oldp+1161,(vlSelf->top__DOT__d_cache__DOT__ram_0_2),512);
        tracep->fullWData(oldp+1177,(vlSelf->top__DOT__d_cache__DOT__ram_0_3),512);
        tracep->fullWData(oldp+1193,(vlSelf->top__DOT__d_cache__DOT__ram_0_4),512);
        tracep->fullWData(oldp+1209,(vlSelf->top__DOT__d_cache__DOT__ram_0_5),512);
        tracep->fullWData(oldp+1225,(vlSelf->top__DOT__d_cache__DOT__ram_0_6),512);
        tracep->fullWData(oldp+1241,(vlSelf->top__DOT__d_cache__DOT__ram_0_7),512);
        tracep->fullWData(oldp+1257,(vlSelf->top__DOT__d_cache__DOT__ram_0_8),512);
        tracep->fullWData(oldp+1273,(vlSelf->top__DOT__d_cache__DOT__ram_0_9),512);
        tracep->fullWData(oldp+1289,(vlSelf->top__DOT__d_cache__DOT__ram_0_10),512);
        tracep->fullWData(oldp+1305,(vlSelf->top__DOT__d_cache__DOT__ram_0_11),512);
        tracep->fullWData(oldp+1321,(vlSelf->top__DOT__d_cache__DOT__ram_0_12),512);
        tracep->fullWData(oldp+1337,(vlSelf->top__DOT__d_cache__DOT__ram_0_13),512);
        tracep->fullWData(oldp+1353,(vlSelf->top__DOT__d_cache__DOT__ram_0_14),512);
        tracep->fullWData(oldp+1369,(vlSelf->top__DOT__d_cache__DOT__ram_0_15),512);
        tracep->fullWData(oldp+1385,(vlSelf->top__DOT__d_cache__DOT__ram_1_0),512);
        tracep->fullWData(oldp+1401,(vlSelf->top__DOT__d_cache__DOT__ram_1_1),512);
        tracep->fullWData(oldp+1417,(vlSelf->top__DOT__d_cache__DOT__ram_1_2),512);
        tracep->fullWData(oldp+1433,(vlSelf->top__DOT__d_cache__DOT__ram_1_3),512);
        tracep->fullWData(oldp+1449,(vlSelf->top__DOT__d_cache__DOT__ram_1_4),512);
        tracep->fullWData(oldp+1465,(vlSelf->top__DOT__d_cache__DOT__ram_1_5),512);
        tracep->fullWData(oldp+1481,(vlSelf->top__DOT__d_cache__DOT__ram_1_6),512);
        tracep->fullWData(oldp+1497,(vlSelf->top__DOT__d_cache__DOT__ram_1_7),512);
        tracep->fullWData(oldp+1513,(vlSelf->top__DOT__d_cache__DOT__ram_1_8),512);
        tracep->fullWData(oldp+1529,(vlSelf->top__DOT__d_cache__DOT__ram_1_9),512);
        tracep->fullWData(oldp+1545,(vlSelf->top__DOT__d_cache__DOT__ram_1_10),512);
        tracep->fullWData(oldp+1561,(vlSelf->top__DOT__d_cache__DOT__ram_1_11),512);
        tracep->fullWData(oldp+1577,(vlSelf->top__DOT__d_cache__DOT__ram_1_12),512);
        tracep->fullWData(oldp+1593,(vlSelf->top__DOT__d_cache__DOT__ram_1_13),512);
        tracep->fullWData(oldp+1609,(vlSelf->top__DOT__d_cache__DOT__ram_1_14),512);
        tracep->fullWData(oldp+1625,(vlSelf->top__DOT__d_cache__DOT__ram_1_15),512);
        tracep->fullIData(oldp+1641,(vlSelf->top__DOT__d_cache__DOT__tag_0_0),32);
        tracep->fullIData(oldp+1642,(vlSelf->top__DOT__d_cache__DOT__tag_0_1),32);
        tracep->fullIData(oldp+1643,(vlSelf->top__DOT__d_cache__DOT__tag_0_2),32);
        tracep->fullIData(oldp+1644,(vlSelf->top__DOT__d_cache__DOT__tag_0_3),32);
        tracep->fullIData(oldp+1645,(vlSelf->top__DOT__d_cache__DOT__tag_0_4),32);
        tracep->fullIData(oldp+1646,(vlSelf->top__DOT__d_cache__DOT__tag_0_5),32);
        tracep->fullIData(oldp+1647,(vlSelf->top__DOT__d_cache__DOT__tag_0_6),32);
        tracep->fullIData(oldp+1648,(vlSelf->top__DOT__d_cache__DOT__tag_0_7),32);
        tracep->fullIData(oldp+1649,(vlSelf->top__DOT__d_cache__DOT__tag_0_8),32);
        tracep->fullIData(oldp+1650,(vlSelf->top__DOT__d_cache__DOT__tag_0_9),32);
        tracep->fullIData(oldp+1651,(vlSelf->top__DOT__d_cache__DOT__tag_0_10),32);
        tracep->fullIData(oldp+1652,(vlSelf->top__DOT__d_cache__DOT__tag_0_11),32);
        tracep->fullIData(oldp+1653,(vlSelf->top__DOT__d_cache__DOT__tag_0_12),32);
        tracep->fullIData(oldp+1654,(vlSelf->top__DOT__d_cache__DOT__tag_0_13),32);
        tracep->fullIData(oldp+1655,(vlSelf->top__DOT__d_cache__DOT__tag_0_14),32);
        tracep->fullIData(oldp+1656,(vlSelf->top__DOT__d_cache__DOT__tag_0_15),32);
        tracep->fullIData(oldp+1657,(vlSelf->top__DOT__d_cache__DOT__tag_1_0),32);
        tracep->fullIData(oldp+1658,(vlSelf->top__DOT__d_cache__DOT__tag_1_1),32);
        tracep->fullIData(oldp+1659,(vlSelf->top__DOT__d_cache__DOT__tag_1_2),32);
        tracep->fullIData(oldp+1660,(vlSelf->top__DOT__d_cache__DOT__tag_1_3),32);
        tracep->fullIData(oldp+1661,(vlSelf->top__DOT__d_cache__DOT__tag_1_4),32);
        tracep->fullIData(oldp+1662,(vlSelf->top__DOT__d_cache__DOT__tag_1_5),32);
        tracep->fullIData(oldp+1663,(vlSelf->top__DOT__d_cache__DOT__tag_1_6),32);
        tracep->fullIData(oldp+1664,(vlSelf->top__DOT__d_cache__DOT__tag_1_7),32);
        tracep->fullIData(oldp+1665,(vlSelf->top__DOT__d_cache__DOT__tag_1_8),32);
        tracep->fullIData(oldp+1666,(vlSelf->top__DOT__d_cache__DOT__tag_1_9),32);
        tracep->fullIData(oldp+1667,(vlSelf->top__DOT__d_cache__DOT__tag_1_10),32);
        tracep->fullIData(oldp+1668,(vlSelf->top__DOT__d_cache__DOT__tag_1_11),32);
        tracep->fullIData(oldp+1669,(vlSelf->top__DOT__d_cache__DOT__tag_1_12),32);
        tracep->fullIData(oldp+1670,(vlSelf->top__DOT__d_cache__DOT__tag_1_13),32);
        tracep->fullIData(oldp+1671,(vlSelf->top__DOT__d_cache__DOT__tag_1_14),32);
        tracep->fullIData(oldp+1672,(vlSelf->top__DOT__d_cache__DOT__tag_1_15),32);
        tracep->fullBit(oldp+1673,(vlSelf->top__DOT__d_cache__DOT__valid_0_0));
        tracep->fullBit(oldp+1674,(vlSelf->top__DOT__d_cache__DOT__valid_0_1));
        tracep->fullBit(oldp+1675,(vlSelf->top__DOT__d_cache__DOT__valid_0_2));
        tracep->fullBit(oldp+1676,(vlSelf->top__DOT__d_cache__DOT__valid_0_3));
        tracep->fullBit(oldp+1677,(vlSelf->top__DOT__d_cache__DOT__valid_0_4));
        tracep->fullBit(oldp+1678,(vlSelf->top__DOT__d_cache__DOT__valid_0_5));
        tracep->fullBit(oldp+1679,(vlSelf->top__DOT__d_cache__DOT__valid_0_6));
        tracep->fullBit(oldp+1680,(vlSelf->top__DOT__d_cache__DOT__valid_0_7));
        tracep->fullBit(oldp+1681,(vlSelf->top__DOT__d_cache__DOT__valid_0_8));
        tracep->fullBit(oldp+1682,(vlSelf->top__DOT__d_cache__DOT__valid_0_9));
        tracep->fullBit(oldp+1683,(vlSelf->top__DOT__d_cache__DOT__valid_0_10));
        tracep->fullBit(oldp+1684,(vlSelf->top__DOT__d_cache__DOT__valid_0_11));
        tracep->fullBit(oldp+1685,(vlSelf->top__DOT__d_cache__DOT__valid_0_12));
        tracep->fullBit(oldp+1686,(vlSelf->top__DOT__d_cache__DOT__valid_0_13));
        tracep->fullBit(oldp+1687,(vlSelf->top__DOT__d_cache__DOT__valid_0_14));
        tracep->fullBit(oldp+1688,(vlSelf->top__DOT__d_cache__DOT__valid_0_15));
        tracep->fullBit(oldp+1689,(vlSelf->top__DOT__d_cache__DOT__valid_1_0));
        tracep->fullBit(oldp+1690,(vlSelf->top__DOT__d_cache__DOT__valid_1_1));
        tracep->fullBit(oldp+1691,(vlSelf->top__DOT__d_cache__DOT__valid_1_2));
        tracep->fullBit(oldp+1692,(vlSelf->top__DOT__d_cache__DOT__valid_1_3));
        tracep->fullBit(oldp+1693,(vlSelf->top__DOT__d_cache__DOT__valid_1_4));
        tracep->fullBit(oldp+1694,(vlSelf->top__DOT__d_cache__DOT__valid_1_5));
        tracep->fullBit(oldp+1695,(vlSelf->top__DOT__d_cache__DOT__valid_1_6));
        tracep->fullBit(oldp+1696,(vlSelf->top__DOT__d_cache__DOT__valid_1_7));
        tracep->fullBit(oldp+1697,(vlSelf->top__DOT__d_cache__DOT__valid_1_8));
        tracep->fullBit(oldp+1698,(vlSelf->top__DOT__d_cache__DOT__valid_1_9));
        tracep->fullBit(oldp+1699,(vlSelf->top__DOT__d_cache__DOT__valid_1_10));
        tracep->fullBit(oldp+1700,(vlSelf->top__DOT__d_cache__DOT__valid_1_11));
        tracep->fullBit(oldp+1701,(vlSelf->top__DOT__d_cache__DOT__valid_1_12));
        tracep->fullBit(oldp+1702,(vlSelf->top__DOT__d_cache__DOT__valid_1_13));
        tracep->fullBit(oldp+1703,(vlSelf->top__DOT__d_cache__DOT__valid_1_14));
        tracep->fullBit(oldp+1704,(vlSelf->top__DOT__d_cache__DOT__valid_1_15));
        tracep->fullBit(oldp+1705,(vlSelf->top__DOT__d_cache__DOT__dirty_0_0));
        tracep->fullBit(oldp+1706,(vlSelf->top__DOT__d_cache__DOT__dirty_0_1));
        tracep->fullBit(oldp+1707,(vlSelf->top__DOT__d_cache__DOT__dirty_0_2));
        tracep->fullBit(oldp+1708,(vlSelf->top__DOT__d_cache__DOT__dirty_0_3));
        tracep->fullBit(oldp+1709,(vlSelf->top__DOT__d_cache__DOT__dirty_0_4));
        tracep->fullBit(oldp+1710,(vlSelf->top__DOT__d_cache__DOT__dirty_0_5));
        tracep->fullBit(oldp+1711,(vlSelf->top__DOT__d_cache__DOT__dirty_0_6));
        tracep->fullBit(oldp+1712,(vlSelf->top__DOT__d_cache__DOT__dirty_0_7));
        tracep->fullBit(oldp+1713,(vlSelf->top__DOT__d_cache__DOT__dirty_0_8));
        tracep->fullBit(oldp+1714,(vlSelf->top__DOT__d_cache__DOT__dirty_0_9));
        tracep->fullBit(oldp+1715,(vlSelf->top__DOT__d_cache__DOT__dirty_0_10));
        tracep->fullBit(oldp+1716,(vlSelf->top__DOT__d_cache__DOT__dirty_0_11));
        tracep->fullBit(oldp+1717,(vlSelf->top__DOT__d_cache__DOT__dirty_0_12));
        tracep->fullBit(oldp+1718,(vlSelf->top__DOT__d_cache__DOT__dirty_0_13));
        tracep->fullBit(oldp+1719,(vlSelf->top__DOT__d_cache__DOT__dirty_0_14));
        tracep->fullBit(oldp+1720,(vlSelf->top__DOT__d_cache__DOT__dirty_0_15));
        tracep->fullBit(oldp+1721,(vlSelf->top__DOT__d_cache__DOT__dirty_1_0));
        tracep->fullBit(oldp+1722,(vlSelf->top__DOT__d_cache__DOT__dirty_1_1));
        tracep->fullBit(oldp+1723,(vlSelf->top__DOT__d_cache__DOT__dirty_1_2));
        tracep->fullBit(oldp+1724,(vlSelf->top__DOT__d_cache__DOT__dirty_1_3));
        tracep->fullBit(oldp+1725,(vlSelf->top__DOT__d_cache__DOT__dirty_1_4));
        tracep->fullBit(oldp+1726,(vlSelf->top__DOT__d_cache__DOT__dirty_1_5));
        tracep->fullBit(oldp+1727,(vlSelf->top__DOT__d_cache__DOT__dirty_1_6));
        tracep->fullBit(oldp+1728,(vlSelf->top__DOT__d_cache__DOT__dirty_1_7));
        tracep->fullBit(oldp+1729,(vlSelf->top__DOT__d_cache__DOT__dirty_1_8));
        tracep->fullBit(oldp+1730,(vlSelf->top__DOT__d_cache__DOT__dirty_1_9));
        tracep->fullBit(oldp+1731,(vlSelf->top__DOT__d_cache__DOT__dirty_1_10));
        tracep->fullBit(oldp+1732,(vlSelf->top__DOT__d_cache__DOT__dirty_1_11));
        tracep->fullBit(oldp+1733,(vlSelf->top__DOT__d_cache__DOT__dirty_1_12));
        tracep->fullBit(oldp+1734,(vlSelf->top__DOT__d_cache__DOT__dirty_1_13));
        tracep->fullBit(oldp+1735,(vlSelf->top__DOT__d_cache__DOT__dirty_1_14));
        tracep->fullBit(oldp+1736,(vlSelf->top__DOT__d_cache__DOT__dirty_1_15));
        tracep->fullWData(oldp+1737,(vlSelf->top__DOT__d_cache__DOT__write_back_data),512);
        tracep->fullIData(oldp+1753,(vlSelf->top__DOT__d_cache__DOT__write_back_addr),32);
        tracep->fullQData(oldp+1754,(vlSelf->top__DOT__d_cache__DOT__receive_data_0),64);
        tracep->fullQData(oldp+1756,(vlSelf->top__DOT__d_cache__DOT__receive_data_1),64);
        tracep->fullQData(oldp+1758,(vlSelf->top__DOT__d_cache__DOT__receive_data_2),64);
        tracep->fullQData(oldp+1760,(vlSelf->top__DOT__d_cache__DOT__receive_data_3),64);
        tracep->fullQData(oldp+1762,(vlSelf->top__DOT__d_cache__DOT__receive_data_4),64);
        tracep->fullQData(oldp+1764,(vlSelf->top__DOT__d_cache__DOT__receive_data_5),64);
        tracep->fullQData(oldp+1766,(vlSelf->top__DOT__d_cache__DOT__receive_data_6),64);
        tracep->fullQData(oldp+1768,(vlSelf->top__DOT__d_cache__DOT__receive_data_7),64);
        tracep->fullCData(oldp+1770,(vlSelf->top__DOT__d_cache__DOT__receive_num),3);
        tracep->fullCData(oldp+1771,(vlSelf->top__DOT__d_cache__DOT__quene_0),2);
        tracep->fullCData(oldp+1772,(vlSelf->top__DOT__d_cache__DOT__quene_1),2);
        tracep->fullCData(oldp+1773,(vlSelf->top__DOT__d_cache__DOT__quene_2),2);
        tracep->fullCData(oldp+1774,(vlSelf->top__DOT__d_cache__DOT__quene_3),2);
        tracep->fullCData(oldp+1775,(vlSelf->top__DOT__d_cache__DOT__quene_4),2);
        tracep->fullCData(oldp+1776,(vlSelf->top__DOT__d_cache__DOT__quene_5),2);
        tracep->fullCData(oldp+1777,(vlSelf->top__DOT__d_cache__DOT__quene_6),2);
        tracep->fullCData(oldp+1778,(vlSelf->top__DOT__d_cache__DOT__quene_7),2);
        tracep->fullCData(oldp+1779,(vlSelf->top__DOT__d_cache__DOT__quene_8),2);
        tracep->fullCData(oldp+1780,(vlSelf->top__DOT__d_cache__DOT__quene_9),2);
        tracep->fullCData(oldp+1781,(vlSelf->top__DOT__d_cache__DOT__quene_10),2);
        tracep->fullCData(oldp+1782,(vlSelf->top__DOT__d_cache__DOT__quene_11),2);
        tracep->fullCData(oldp+1783,(vlSelf->top__DOT__d_cache__DOT__quene_12),2);
        tracep->fullCData(oldp+1784,(vlSelf->top__DOT__d_cache__DOT__quene_13),2);
        tracep->fullCData(oldp+1785,(vlSelf->top__DOT__d_cache__DOT__quene_14),2);
        tracep->fullCData(oldp+1786,(vlSelf->top__DOT__d_cache__DOT__quene_15),2);
        tracep->fullCData(oldp+1787,((0x3fU & (IData)(vlSelf->top__DOT__LSU__DOT__maddr))),6);
        tracep->fullCData(oldp+1788,((0xfU & (IData)(
                                                     (vlSelf->top__DOT__LSU__DOT__maddr 
                                                      >> 6U)))),4);
        tracep->fullIData(oldp+1789,((0x3fffffU & (IData)(
                                                          (vlSelf->top__DOT__LSU__DOT__maddr 
                                                           >> 0xaU)))),22);
        tracep->fullSData(oldp+1790,((0x1f8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                                << 3U))),9);
        tracep->fullQData(oldp+1791,(vlSelf->top__DOT__d_cache__DOT__wmask),64);
        tracep->fullBit(oldp+1793,(vlSelf->top__DOT__d_cache__DOT__way0_hit));
        tracep->fullBit(oldp+1794,(vlSelf->top__DOT__d_cache__DOT__way1_hit));
        tracep->fullCData(oldp+1795,(vlSelf->top__DOT__d_cache__DOT__unuse_way),2);
        tracep->fullCData(oldp+1796,(vlSelf->top__DOT__d_cache__DOT__state),4);
        tracep->fullQData(oldp+1797,(vlSelf->top__DOT__axi__DOT__araddr),64);
        tracep->fullQData(oldp+1799,(vlSelf->top__DOT__axi__DOT__awaddr),64);
        tracep->fullCData(oldp+1801,(vlSelf->top__DOT__axi__DOT__arlen),8);
        tracep->fullCData(oldp+1802,(vlSelf->top__DOT__axi__DOT__awlen),8);
        tracep->fullCData(oldp+1803,(vlSelf->top__DOT__axi__DOT__state),3);
        tracep->fullBit(oldp+1804,(vlSelf->clock));
        tracep->fullBit(oldp+1805,(vlSelf->reset));
        tracep->fullIData(oldp+1806,(vlSelf->io_inst),32);
        tracep->fullQData(oldp+1807,(vlSelf->io_pc),64);
        tracep->fullBit(oldp+1809,(vlSelf->io_step));
        tracep->fullBit(oldp+1810,(1U));
        tracep->fullCData(oldp+1811,(0U),5);
        tracep->fullCData(oldp+1812,(1U),5);
        tracep->fullCData(oldp+1813,(2U),5);
        tracep->fullCData(oldp+1814,(3U),5);
        tracep->fullCData(oldp+1815,(4U),5);
        tracep->fullCData(oldp+1816,(5U),5);
        tracep->fullCData(oldp+1817,(6U),5);
        tracep->fullCData(oldp+1818,(7U),5);
        tracep->fullCData(oldp+1819,(8U),5);
        tracep->fullCData(oldp+1820,(9U),5);
        tracep->fullCData(oldp+1821,(0xaU),5);
        tracep->fullCData(oldp+1822,(0xbU),5);
        tracep->fullCData(oldp+1823,(0xcU),5);
        tracep->fullCData(oldp+1824,(0xdU),5);
        tracep->fullCData(oldp+1825,(0xeU),5);
        tracep->fullCData(oldp+1826,(0xfU),5);
        tracep->fullCData(oldp+1827,(0x10U),5);
        tracep->fullCData(oldp+1828,(0x11U),5);
        tracep->fullCData(oldp+1829,(0x12U),5);
        tracep->fullCData(oldp+1830,(0x13U),5);
        tracep->fullCData(oldp+1831,(0x14U),5);
        tracep->fullCData(oldp+1832,(0x15U),5);
        tracep->fullCData(oldp+1833,(0x16U),5);
        tracep->fullCData(oldp+1834,(0x17U),5);
        tracep->fullCData(oldp+1835,(0x18U),5);
        tracep->fullCData(oldp+1836,(0x19U),5);
        tracep->fullCData(oldp+1837,(0x1aU),5);
        tracep->fullCData(oldp+1838,(0x1bU),5);
        tracep->fullCData(oldp+1839,(0x1cU),5);
        tracep->fullCData(oldp+1840,(0x1dU),5);
        tracep->fullCData(oldp+1841,(0x1eU),5);
        tracep->fullCData(oldp+1842,(0x1fU),5);
        tracep->fullCData(oldp+1843,(3U),2);
    }
}
