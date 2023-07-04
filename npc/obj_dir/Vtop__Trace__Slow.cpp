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
        tracep->declBit(c+725,"clock", false,-1);
        tracep->declBit(c+726,"reset", false,-1);
        tracep->declBus(c+727,"io_inst", false,-1, 31,0);
        tracep->declQuad(c+728,"io_pc", false,-1, 63,0);
        tracep->declBit(c+730,"io_step", false,-1);
        tracep->declBit(c+725,"top clock", false,-1);
        tracep->declBit(c+726,"top reset", false,-1);
        tracep->declBus(c+727,"top io_inst", false,-1, 31,0);
        tracep->declQuad(c+728,"top io_pc", false,-1, 63,0);
        tracep->declBit(c+730,"top io_step", false,-1);
        tracep->declBit(c+725,"top Register_clock", false,-1);
        tracep->declBus(c+1,"top Register_io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top Register_io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top Register_io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top Register_io_rdata2", false,-1, 63,0);
        tracep->declBit(c+7,"top Register_io_we", false,-1);
        tracep->declBus(c+8,"top Register_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top Register_io_wdata", false,-1, 63,0);
        tracep->declBit(c+725,"top IFU_clock", false,-1);
        tracep->declBit(c+726,"top IFU_reset", false,-1);
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
        tracep->declBit(c+725,"top IDU_clock", false,-1);
        tracep->declBit(c+726,"top IDU_reset", false,-1);
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
        tracep->declBit(c+725,"top EXU_clock", false,-1);
        tracep->declBit(c+726,"top EXU_reset", false,-1);
        tracep->declQuad(c+32,"top EXU_io_pc", false,-1, 63,0);
        tracep->declBit(c+30,"top EXU_io_ds_to_es_valid", false,-1);
        tracep->declBit(c+62,"top EXU_io_ms_allowin", false,-1);
        tracep->declBit(c+31,"top EXU_io_es_allowin", false,-1);
        tracep->declBus(c+34,"top EXU_io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+35,"top EXU_io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+37,"top EXU_io_src2_value", false,-1, 63,0);
        tracep->declBus(c+39,"top EXU_io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+40,"top EXU_io_store_data", false,-1, 63,0);
        tracep->declBit(c+63,"top EXU_io_es_to_ms_valid", false,-1);
        tracep->declBus(c+46,"top EXU_io_load_type", false,-1, 2,0);
        tracep->declQuad(c+64,"top EXU_io_to_ms_pc", false,-1, 63,0);
        tracep->declQuad(c+48,"top EXU_io_to_ms_alures", false,-1, 63,0);
        tracep->declQuad(c+66,"top EXU_io_to_ms_store_data", false,-1, 63,0);
        tracep->declBit(c+68,"top EXU_io_to_ms_wen", false,-1);
        tracep->declBus(c+69,"top EXU_io_to_ms_wstrb", false,-1, 7,0);
        tracep->declBit(c+70,"top EXU_io_to_ms_ren", false,-1);
        tracep->declQuad(c+48,"top EXU_io_to_ms_maddr", false,-1, 63,0);
        tracep->declBus(c+60,"top EXU_io_to_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+54,"top EXU_io_to_ms_rf_we", false,-1);
        tracep->declBus(c+71,"top EXU_io_to_ms_load_type", false,-1, 2,0);
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
        tracep->declBit(c+725,"top LSU_clock", false,-1);
        tracep->declBit(c+726,"top LSU_reset", false,-1);
        tracep->declQuad(c+64,"top LSU_io_pc", false,-1, 63,0);
        tracep->declBit(c+63,"top LSU_io_es_to_ms_valid", false,-1);
        tracep->declBit(c+62,"top LSU_io_ms_allowin", false,-1);
        tracep->declBit(c+54,"top LSU_io_rf_we", false,-1);
        tracep->declBus(c+60,"top LSU_io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+48,"top LSU_io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+66,"top LSU_io_store_data", false,-1, 63,0);
        tracep->declBus(c+71,"top LSU_io_load_type", false,-1, 2,0);
        tracep->declBit(c+68,"top LSU_io_wen", false,-1);
        tracep->declBus(c+69,"top LSU_io_wstrb", false,-1, 7,0);
        tracep->declBit(c+70,"top LSU_io_ren", false,-1);
        tracep->declQuad(c+48,"top LSU_io_maddr", false,-1, 63,0);
        tracep->declQuad(c+72,"top LSU_io_to_ws_pc", false,-1, 63,0);
        tracep->declQuad(c+74,"top LSU_io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+76,"top LSU_io_ms_to_ws_valid", false,-1);
        tracep->declBit(c+77,"top LSU_io_to_ws_rf_we", false,-1);
        tracep->declBus(c+61,"top LSU_io_to_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+58,"top LSU_io_ms_valid", false,-1);
        tracep->declBit(c+55,"top LSU_io_ms_rf_we", false,-1);
        tracep->declBus(c+61,"top LSU_io_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+53,"top LSU_io_ms_fwd_ready", false,-1);
        tracep->declQuad(c+50,"top LSU_io_ms_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+78,"top LSU_io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+80,"top LSU_io_axi_in_rvalid", false,-1);
        tracep->declBit(c+81,"top LSU_io_axi_in_bvalid", false,-1);
        tracep->declBus(c+82,"top LSU_io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+83,"top LSU_io_axi_out_arvalid", false,-1);
        tracep->declBus(c+82,"top LSU_io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBit(c+84,"top LSU_io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+85,"top LSU_io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+87,"top LSU_io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+88,"top LSU_io_axi_out_wvalid", false,-1);
        tracep->declBit(c+725,"top WBU_clock", false,-1);
        tracep->declBit(c+726,"top WBU_reset", false,-1);
        tracep->declQuad(c+72,"top WBU_io_pc", false,-1, 63,0);
        tracep->declBit(c+76,"top WBU_io_ms_to_ws_valid", false,-1);
        tracep->declQuad(c+74,"top WBU_io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+77,"top WBU_io_rf_we", false,-1);
        tracep->declBus(c+61,"top WBU_io_rf_dst", false,-1, 4,0);
        tracep->declBit(c+7,"top WBU_io_we", false,-1);
        tracep->declBus(c+8,"top WBU_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU_io_wdata", false,-1, 63,0);
        tracep->declBit(c+59,"top WBU_io_ws_valid", false,-1);
        tracep->declBit(c+56,"top WBU_io_ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU_io_ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU_io_ws_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+89,"top WBU_io_ws_pc", false,-1, 63,0);
        tracep->declBit(c+725,"top arbiter_clock", false,-1);
        tracep->declBit(c+726,"top arbiter_reset", false,-1);
        tracep->declBus(c+91,"top arbiter_io_ifu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+92,"top arbiter_io_ifu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+93,"top arbiter_io_ifu_axi_in_arvalid", false,-1);
        tracep->declBit(c+94,"top arbiter_io_ifu_axi_in_rready", false,-1);
        tracep->declQuad(c+95,"top arbiter_io_ifu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+97,"top arbiter_io_ifu_axi_out_rlast", false,-1);
        tracep->declBit(c+98,"top arbiter_io_ifu_axi_out_rvalid", false,-1);
        tracep->declBus(c+99,"top arbiter_io_lsu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+100,"top arbiter_io_lsu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+101,"top arbiter_io_lsu_axi_in_arvalid", false,-1);
        tracep->declBit(c+102,"top arbiter_io_lsu_axi_in_rready", false,-1);
        tracep->declBus(c+103,"top arbiter_io_lsu_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+104,"top arbiter_io_lsu_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+105,"top arbiter_io_lsu_axi_in_awvalid", false,-1);
        tracep->declQuad(c+106,"top arbiter_io_lsu_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+108,"top arbiter_io_lsu_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+109,"top arbiter_io_lsu_axi_in_wvalid", false,-1);
        tracep->declBit(c+110,"top arbiter_io_lsu_axi_in_bready", false,-1);
        tracep->declQuad(c+111,"top arbiter_io_lsu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+113,"top arbiter_io_lsu_axi_out_rlast", false,-1);
        tracep->declBit(c+114,"top arbiter_io_lsu_axi_out_rvalid", false,-1);
        tracep->declBit(c+115,"top arbiter_io_lsu_axi_out_wready", false,-1);
        tracep->declBit(c+116,"top arbiter_io_lsu_axi_out_bvalid", false,-1);
        tracep->declQuad(c+117,"top arbiter_io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+119,"top arbiter_io_axi_in_rlast", false,-1);
        tracep->declBit(c+120,"top arbiter_io_axi_in_rvalid", false,-1);
        tracep->declBit(c+121,"top arbiter_io_axi_in_wready", false,-1);
        tracep->declBit(c+122,"top arbiter_io_axi_in_bvalid", false,-1);
        tracep->declBus(c+123,"top arbiter_io_axi_out_araddr", false,-1, 31,0);
        tracep->declBus(c+124,"top arbiter_io_axi_out_arlen", false,-1, 7,0);
        tracep->declBit(c+125,"top arbiter_io_axi_out_arvalid", false,-1);
        tracep->declBit(c+126,"top arbiter_io_axi_out_rready", false,-1);
        tracep->declBus(c+127,"top arbiter_io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBus(c+128,"top arbiter_io_axi_out_awlen", false,-1, 7,0);
        tracep->declBit(c+129,"top arbiter_io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+130,"top arbiter_io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+132,"top arbiter_io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+133,"top arbiter_io_axi_out_wvalid", false,-1);
        tracep->declBit(c+134,"top arbiter_io_axi_out_bready", false,-1);
        tracep->declBit(c+725,"top i_cache_clock", false,-1);
        tracep->declBit(c+726,"top i_cache_reset", false,-1);
        tracep->declBus(c+25,"top i_cache_io_from_ifu_araddr", false,-1, 31,0);
        tracep->declBit(c+12,"top i_cache_io_from_ifu_arvalid", false,-1);
        tracep->declBit(c+26,"top i_cache_io_from_ifu_rready", false,-1);
        tracep->declBit(c+21,"top i_cache_io_to_ifu_arready", false,-1);
        tracep->declQuad(c+22,"top i_cache_io_to_ifu_rdata", false,-1, 63,0);
        tracep->declBit(c+24,"top i_cache_io_to_ifu_rvalid", false,-1);
        tracep->declBus(c+91,"top i_cache_io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+92,"top i_cache_io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+93,"top i_cache_io_to_axi_arvalid", false,-1);
        tracep->declBit(c+94,"top i_cache_io_to_axi_rready", false,-1);
        tracep->declQuad(c+95,"top i_cache_io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+97,"top i_cache_io_from_axi_rlast", false,-1);
        tracep->declBit(c+98,"top i_cache_io_from_axi_rvalid", false,-1);
        tracep->declBit(c+29,"top i_cache_io_cache_init", false,-1);
        tracep->declBit(c+28,"top i_cache_io_clear_cache", false,-1);
        tracep->declBit(c+725,"top d_cache_clock", false,-1);
        tracep->declBit(c+726,"top d_cache_reset", false,-1);
        tracep->declBus(c+82,"top d_cache_io_from_lsu_araddr", false,-1, 31,0);
        tracep->declBit(c+83,"top d_cache_io_from_lsu_arvalid", false,-1);
        tracep->declBus(c+82,"top d_cache_io_from_lsu_awaddr", false,-1, 31,0);
        tracep->declBit(c+84,"top d_cache_io_from_lsu_awvalid", false,-1);
        tracep->declQuad(c+85,"top d_cache_io_from_lsu_wdata", false,-1, 63,0);
        tracep->declBus(c+87,"top d_cache_io_from_lsu_wstrb", false,-1, 7,0);
        tracep->declBit(c+88,"top d_cache_io_from_lsu_wvalid", false,-1);
        tracep->declQuad(c+78,"top d_cache_io_to_lsu_rdata", false,-1, 63,0);
        tracep->declBit(c+80,"top d_cache_io_to_lsu_rvalid", false,-1);
        tracep->declBit(c+81,"top d_cache_io_to_lsu_bvalid", false,-1);
        tracep->declBus(c+99,"top d_cache_io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+100,"top d_cache_io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+101,"top d_cache_io_to_axi_arvalid", false,-1);
        tracep->declBit(c+102,"top d_cache_io_to_axi_rready", false,-1);
        tracep->declBus(c+103,"top d_cache_io_to_axi_awaddr", false,-1, 31,0);
        tracep->declBus(c+104,"top d_cache_io_to_axi_awlen", false,-1, 7,0);
        tracep->declBit(c+105,"top d_cache_io_to_axi_awvalid", false,-1);
        tracep->declQuad(c+106,"top d_cache_io_to_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+108,"top d_cache_io_to_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+109,"top d_cache_io_to_axi_wvalid", false,-1);
        tracep->declBit(c+110,"top d_cache_io_to_axi_bready", false,-1);
        tracep->declQuad(c+111,"top d_cache_io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+113,"top d_cache_io_from_axi_rlast", false,-1);
        tracep->declBit(c+114,"top d_cache_io_from_axi_rvalid", false,-1);
        tracep->declBit(c+115,"top d_cache_io_from_axi_wready", false,-1);
        tracep->declBit(c+116,"top d_cache_io_from_axi_bvalid", false,-1);
        tracep->declBit(c+725,"top axi_clock", false,-1);
        tracep->declBit(c+726,"top axi_reset", false,-1);
        tracep->declBus(c+123,"top axi_io_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+124,"top axi_io_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+125,"top axi_io_axi_in_arvalid", false,-1);
        tracep->declBit(c+126,"top axi_io_axi_in_rready", false,-1);
        tracep->declBus(c+127,"top axi_io_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+128,"top axi_io_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+129,"top axi_io_axi_in_awvalid", false,-1);
        tracep->declQuad(c+130,"top axi_io_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+132,"top axi_io_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+133,"top axi_io_axi_in_wvalid", false,-1);
        tracep->declBit(c+134,"top axi_io_axi_in_bready", false,-1);
        tracep->declQuad(c+117,"top axi_io_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+119,"top axi_io_axi_out_rlast", false,-1);
        tracep->declBit(c+120,"top axi_io_axi_out_rvalid", false,-1);
        tracep->declBit(c+121,"top axi_io_axi_out_wready", false,-1);
        tracep->declBit(c+122,"top axi_io_axi_out_bvalid", false,-1);
        tracep->declBus(c+135,"top dpi_flag", false,-1, 31,0);
        tracep->declBus(c+136,"top dpi_ecall_flag", false,-1, 31,0);
        tracep->declQuad(c+137,"top dpi_pc", false,-1, 63,0);
        tracep->declBit(c+139,"top diff_step", false,-1);
        tracep->declBit(c+725,"top Register clock", false,-1);
        tracep->declBus(c+1,"top Register io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top Register io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top Register io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top Register io_rdata2", false,-1, 63,0);
        tracep->declBit(c+7,"top Register io_we", false,-1);
        tracep->declBus(c+8,"top Register io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top Register io_wdata", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+140+i*2,"top Register Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+731,"top Register Reg_io_rdata1_MPORT_en", false,-1);
        tracep->declBus(c+1,"top Register Reg_io_rdata1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+204,"top Register Reg_io_rdata1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_io_rdata2_MPORT_en", false,-1);
        tracep->declBus(c+2,"top Register Reg_io_rdata2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+206,"top Register Reg_io_rdata2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_0_MPORT_en", false,-1);
        tracep->declBus(c+732,"top Register Reg_reg_trace_io_input_reg_0_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+208,"top Register Reg_reg_trace_io_input_reg_0_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_1_MPORT_en", false,-1);
        tracep->declBus(c+733,"top Register Reg_reg_trace_io_input_reg_1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+210,"top Register Reg_reg_trace_io_input_reg_1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_2_MPORT_en", false,-1);
        tracep->declBus(c+734,"top Register Reg_reg_trace_io_input_reg_2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+212,"top Register Reg_reg_trace_io_input_reg_2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_3_MPORT_en", false,-1);
        tracep->declBus(c+735,"top Register Reg_reg_trace_io_input_reg_3_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+214,"top Register Reg_reg_trace_io_input_reg_3_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_4_MPORT_en", false,-1);
        tracep->declBus(c+736,"top Register Reg_reg_trace_io_input_reg_4_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+216,"top Register Reg_reg_trace_io_input_reg_4_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_5_MPORT_en", false,-1);
        tracep->declBus(c+737,"top Register Reg_reg_trace_io_input_reg_5_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+218,"top Register Reg_reg_trace_io_input_reg_5_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_6_MPORT_en", false,-1);
        tracep->declBus(c+738,"top Register Reg_reg_trace_io_input_reg_6_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+220,"top Register Reg_reg_trace_io_input_reg_6_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_7_MPORT_en", false,-1);
        tracep->declBus(c+739,"top Register Reg_reg_trace_io_input_reg_7_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+222,"top Register Reg_reg_trace_io_input_reg_7_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_8_MPORT_en", false,-1);
        tracep->declBus(c+740,"top Register Reg_reg_trace_io_input_reg_8_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+224,"top Register Reg_reg_trace_io_input_reg_8_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_9_MPORT_en", false,-1);
        tracep->declBus(c+741,"top Register Reg_reg_trace_io_input_reg_9_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+226,"top Register Reg_reg_trace_io_input_reg_9_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_10_MPORT_en", false,-1);
        tracep->declBus(c+742,"top Register Reg_reg_trace_io_input_reg_10_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+228,"top Register Reg_reg_trace_io_input_reg_10_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_11_MPORT_en", false,-1);
        tracep->declBus(c+743,"top Register Reg_reg_trace_io_input_reg_11_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+230,"top Register Reg_reg_trace_io_input_reg_11_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_12_MPORT_en", false,-1);
        tracep->declBus(c+744,"top Register Reg_reg_trace_io_input_reg_12_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+232,"top Register Reg_reg_trace_io_input_reg_12_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_13_MPORT_en", false,-1);
        tracep->declBus(c+745,"top Register Reg_reg_trace_io_input_reg_13_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+234,"top Register Reg_reg_trace_io_input_reg_13_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_14_MPORT_en", false,-1);
        tracep->declBus(c+746,"top Register Reg_reg_trace_io_input_reg_14_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+236,"top Register Reg_reg_trace_io_input_reg_14_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_15_MPORT_en", false,-1);
        tracep->declBus(c+747,"top Register Reg_reg_trace_io_input_reg_15_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+238,"top Register Reg_reg_trace_io_input_reg_15_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_16_MPORT_en", false,-1);
        tracep->declBus(c+748,"top Register Reg_reg_trace_io_input_reg_16_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+240,"top Register Reg_reg_trace_io_input_reg_16_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_17_MPORT_en", false,-1);
        tracep->declBus(c+749,"top Register Reg_reg_trace_io_input_reg_17_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+242,"top Register Reg_reg_trace_io_input_reg_17_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_18_MPORT_en", false,-1);
        tracep->declBus(c+750,"top Register Reg_reg_trace_io_input_reg_18_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+244,"top Register Reg_reg_trace_io_input_reg_18_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_19_MPORT_en", false,-1);
        tracep->declBus(c+751,"top Register Reg_reg_trace_io_input_reg_19_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+246,"top Register Reg_reg_trace_io_input_reg_19_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_20_MPORT_en", false,-1);
        tracep->declBus(c+752,"top Register Reg_reg_trace_io_input_reg_20_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+248,"top Register Reg_reg_trace_io_input_reg_20_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_21_MPORT_en", false,-1);
        tracep->declBus(c+753,"top Register Reg_reg_trace_io_input_reg_21_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+250,"top Register Reg_reg_trace_io_input_reg_21_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_22_MPORT_en", false,-1);
        tracep->declBus(c+754,"top Register Reg_reg_trace_io_input_reg_22_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+252,"top Register Reg_reg_trace_io_input_reg_22_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_23_MPORT_en", false,-1);
        tracep->declBus(c+755,"top Register Reg_reg_trace_io_input_reg_23_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+254,"top Register Reg_reg_trace_io_input_reg_23_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_24_MPORT_en", false,-1);
        tracep->declBus(c+756,"top Register Reg_reg_trace_io_input_reg_24_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+256,"top Register Reg_reg_trace_io_input_reg_24_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_25_MPORT_en", false,-1);
        tracep->declBus(c+757,"top Register Reg_reg_trace_io_input_reg_25_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+258,"top Register Reg_reg_trace_io_input_reg_25_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_26_MPORT_en", false,-1);
        tracep->declBus(c+758,"top Register Reg_reg_trace_io_input_reg_26_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+260,"top Register Reg_reg_trace_io_input_reg_26_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_27_MPORT_en", false,-1);
        tracep->declBus(c+759,"top Register Reg_reg_trace_io_input_reg_27_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+262,"top Register Reg_reg_trace_io_input_reg_27_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_28_MPORT_en", false,-1);
        tracep->declBus(c+760,"top Register Reg_reg_trace_io_input_reg_28_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+264,"top Register Reg_reg_trace_io_input_reg_28_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_29_MPORT_en", false,-1);
        tracep->declBus(c+761,"top Register Reg_reg_trace_io_input_reg_29_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+266,"top Register Reg_reg_trace_io_input_reg_29_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_30_MPORT_en", false,-1);
        tracep->declBus(c+762,"top Register Reg_reg_trace_io_input_reg_30_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+268,"top Register Reg_reg_trace_io_input_reg_30_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+731,"top Register Reg_reg_trace_io_input_reg_31_MPORT_en", false,-1);
        tracep->declBus(c+763,"top Register Reg_reg_trace_io_input_reg_31_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+270,"top Register Reg_reg_trace_io_input_reg_31_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+9,"top Register Reg_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+8,"top Register Reg_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+731,"top Register Reg_MPORT_mask", false,-1);
        tracep->declBit(c+272,"top Register Reg_MPORT_en", false,-1);
        tracep->declQuad(c+208,"top Register reg_trace_input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+210,"top Register reg_trace_input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+212,"top Register reg_trace_input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+214,"top Register reg_trace_input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+216,"top Register reg_trace_input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+218,"top Register reg_trace_input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+220,"top Register reg_trace_input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+222,"top Register reg_trace_input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+224,"top Register reg_trace_input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+226,"top Register reg_trace_input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+228,"top Register reg_trace_input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+230,"top Register reg_trace_input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+232,"top Register reg_trace_input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+234,"top Register reg_trace_input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+236,"top Register reg_trace_input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+238,"top Register reg_trace_input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+240,"top Register reg_trace_input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+242,"top Register reg_trace_input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+244,"top Register reg_trace_input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+246,"top Register reg_trace_input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+248,"top Register reg_trace_input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+250,"top Register reg_trace_input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+252,"top Register reg_trace_input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+254,"top Register reg_trace_input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+256,"top Register reg_trace_input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+258,"top Register reg_trace_input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+260,"top Register reg_trace_input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+262,"top Register reg_trace_input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+264,"top Register reg_trace_input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+266,"top Register reg_trace_input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+268,"top Register reg_trace_input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+270,"top Register reg_trace_input_reg_31", false,-1, 63,0);
        tracep->declQuad(c+208,"top Register reg_trace input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+210,"top Register reg_trace input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+212,"top Register reg_trace input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+214,"top Register reg_trace input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+216,"top Register reg_trace input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+218,"top Register reg_trace input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+220,"top Register reg_trace input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+222,"top Register reg_trace input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+224,"top Register reg_trace input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+226,"top Register reg_trace input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+228,"top Register reg_trace input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+230,"top Register reg_trace input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+232,"top Register reg_trace input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+234,"top Register reg_trace input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+236,"top Register reg_trace input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+238,"top Register reg_trace input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+240,"top Register reg_trace input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+242,"top Register reg_trace input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+244,"top Register reg_trace input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+246,"top Register reg_trace input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+248,"top Register reg_trace input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+250,"top Register reg_trace input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+252,"top Register reg_trace input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+254,"top Register reg_trace input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+256,"top Register reg_trace input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+258,"top Register reg_trace input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+260,"top Register reg_trace input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+262,"top Register reg_trace input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+264,"top Register reg_trace input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+266,"top Register reg_trace input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+268,"top Register reg_trace input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+270,"top Register reg_trace input_reg_31", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+273+i*2,"top Register reg_trace traceregs", true,(i+0), 63,0);}}
        tracep->declBit(c+725,"top IFU clock", false,-1);
        tracep->declBit(c+726,"top IFU reset", false,-1);
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
        tracep->declQuad(c+337,"top IFU br_target", false,-1, 63,0);
        tracep->declBit(c+19,"top IFU fs_valid", false,-1);
        tracep->declQuad(c+339,"top IFU fs_pc_next", false,-1, 63,0);
        tracep->declBit(c+341,"top IFU cache_init", false,-1);
        tracep->declQuad(c+17,"top IFU fs_pc", false,-1, 63,0);
        tracep->declBus(c+20,"top IFU fs_inst", false,-1, 31,0);
        tracep->declQuad(c+342,"top IFU seq_pc", false,-1, 63,0);
        tracep->declQuad(c+344,"top IFU pc_next", false,-1, 63,0);
        tracep->declBit(c+26,"top IFU fs_allowin", false,-1);
        tracep->declBit(c+725,"top IDU clock", false,-1);
        tracep->declBit(c+726,"top IDU reset", false,-1);
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
        tracep->declBit(c+725,"top IDU csr_reg_clock", false,-1);
        tracep->declBit(c+346,"top IDU csr_reg_io_wen1", false,-1);
        tracep->declBit(c+347,"top IDU csr_reg_io_wen2", false,-1);
        tracep->declBus(c+348,"top IDU csr_reg_io_waddr1", false,-1, 1,0);
        tracep->declQuad(c+349,"top IDU csr_reg_io_wdata1", false,-1, 63,0);
        tracep->declQuad(c+351,"top IDU csr_reg_io_wdata2", false,-1, 63,0);
        tracep->declBus(c+353,"top IDU csr_reg_io_raddr", false,-1, 1,0);
        tracep->declQuad(c+354,"top IDU csr_reg_io_rdata", false,-1, 63,0);
        tracep->declBit(c+13,"top IDU ds_valid", false,-1);
        tracep->declQuad(c+32,"top IDU ds_pc", false,-1, 63,0);
        tracep->declBus(c+356,"top IDU inst", false,-1, 31,0);
        tracep->declBit(c+357,"top IDU br_taken_cancel", false,-1);
        tracep->declBit(c+358,"top IDU src1_is_pc", false,-1);
        tracep->declBus(c+359,"top IDU inst_type", false,-1, 31,0);
        tracep->declBus(c+360,"top IDU csr_write", false,-1, 1,0);
        tracep->declBus(c+1,"top IDU rs1", false,-1, 4,0);
        tracep->declBit(c+361,"top IDU conflict_es_rs1", false,-1);
        tracep->declBit(c+362,"top IDU conflict_ms_rs1", false,-1);
        tracep->declBit(c+363,"top IDU conflict_ws_rs1", false,-1);
        tracep->declBit(c+364,"top IDU src2_is_imm", false,-1);
        tracep->declBus(c+365,"top IDU rs2", false,-1, 4,0);
        tracep->declBit(c+366,"top IDU conflict_es_rs2", false,-1);
        tracep->declBit(c+367,"top IDU conflict_ms_rs2", false,-1);
        tracep->declBit(c+368,"top IDU conflict_ws_rs2", false,-1);
        tracep->declBit(c+12,"top IDU ds_ready_go", false,-1);
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
        tracep->declBit(c+725,"top IDU csr_reg clock", false,-1);
        tracep->declBit(c+346,"top IDU csr_reg io_wen1", false,-1);
        tracep->declBit(c+347,"top IDU csr_reg io_wen2", false,-1);
        tracep->declBus(c+348,"top IDU csr_reg io_waddr1", false,-1, 1,0);
        tracep->declQuad(c+349,"top IDU csr_reg io_wdata1", false,-1, 63,0);
        tracep->declQuad(c+351,"top IDU csr_reg io_wdata2", false,-1, 63,0);
        tracep->declBus(c+353,"top IDU csr_reg io_raddr", false,-1, 1,0);
        tracep->declQuad(c+354,"top IDU csr_reg io_rdata", false,-1, 63,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+387+i*2,"top IDU csr_reg CSR_Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+731,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_en", false,-1);
        tracep->declBus(c+353,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+354,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+349,"top IDU csr_reg CSR_Reg_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+348,"top IDU csr_reg CSR_Reg_MPORT_addr", false,-1, 1,0);
        tracep->declBit(c+731,"top IDU csr_reg CSR_Reg_MPORT_mask", false,-1);
        tracep->declBit(c+346,"top IDU csr_reg CSR_Reg_MPORT_en", false,-1);
        tracep->declQuad(c+351,"top IDU csr_reg CSR_Reg_MPORT_1_data", false,-1, 63,0);
        tracep->declBus(c+764,"top IDU csr_reg CSR_Reg_MPORT_1_addr", false,-1, 1,0);
        tracep->declBit(c+731,"top IDU csr_reg CSR_Reg_MPORT_1_mask", false,-1);
        tracep->declBit(c+347,"top IDU csr_reg CSR_Reg_MPORT_1_en", false,-1);
        tracep->declBit(c+725,"top EXU clock", false,-1);
        tracep->declBit(c+726,"top EXU reset", false,-1);
        tracep->declQuad(c+32,"top EXU io_pc", false,-1, 63,0);
        tracep->declBit(c+30,"top EXU io_ds_to_es_valid", false,-1);
        tracep->declBit(c+62,"top EXU io_ms_allowin", false,-1);
        tracep->declBit(c+31,"top EXU io_es_allowin", false,-1);
        tracep->declBus(c+34,"top EXU io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+35,"top EXU io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+37,"top EXU io_src2_value", false,-1, 63,0);
        tracep->declBus(c+39,"top EXU io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+40,"top EXU io_store_data", false,-1, 63,0);
        tracep->declBit(c+63,"top EXU io_es_to_ms_valid", false,-1);
        tracep->declBus(c+46,"top EXU io_load_type", false,-1, 2,0);
        tracep->declQuad(c+64,"top EXU io_to_ms_pc", false,-1, 63,0);
        tracep->declQuad(c+48,"top EXU io_to_ms_alures", false,-1, 63,0);
        tracep->declQuad(c+66,"top EXU io_to_ms_store_data", false,-1, 63,0);
        tracep->declBit(c+68,"top EXU io_to_ms_wen", false,-1);
        tracep->declBus(c+69,"top EXU io_to_ms_wstrb", false,-1, 7,0);
        tracep->declBit(c+70,"top EXU io_to_ms_ren", false,-1);
        tracep->declQuad(c+48,"top EXU io_to_ms_maddr", false,-1, 63,0);
        tracep->declBus(c+60,"top EXU io_to_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+54,"top EXU io_to_ms_rf_we", false,-1);
        tracep->declBus(c+71,"top EXU io_to_ms_load_type", false,-1, 2,0);
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
        tracep->declBit(c+725,"top EXU ALU_clock", false,-1);
        tracep->declBit(c+726,"top EXU ALU_reset", false,-1);
        tracep->declQuad(c+395,"top EXU ALU_io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+397,"top EXU ALU_io_src2_value", false,-1, 63,0);
        tracep->declBus(c+399,"top EXU ALU_io_ALUop", false,-1, 31,0);
        tracep->declBit(c+57,"top EXU ALU_io_src_valid", false,-1);
        tracep->declBit(c+400,"top EXU ALU_io_alu_busy", false,-1);
        tracep->declBit(c+62,"top EXU ALU_io_res_ready", false,-1);
        tracep->declQuad(c+48,"top EXU ALU_io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+64,"top EXU es_pc", false,-1, 63,0);
        tracep->declBit(c+57,"top EXU es_valid", false,-1);
        tracep->declBus(c+60,"top EXU es_rd", false,-1, 4,0);
        tracep->declBit(c+54,"top EXU es_rf_we", false,-1);
        tracep->declQuad(c+401,"top EXU src1_value", false,-1, 63,0);
        tracep->declQuad(c+397,"top EXU src2_value", false,-1, 63,0);
        tracep->declQuad(c+66,"top EXU store_data", false,-1, 63,0);
        tracep->declBus(c+69,"top EXU st_wstrb", false,-1, 7,0);
        tracep->declBit(c+68,"top EXU st_we", false,-1);
        tracep->declBit(c+70,"top EXU ld_we", false,-1);
        tracep->declBus(c+399,"top EXU ALUop", false,-1, 31,0);
        tracep->declBus(c+71,"top EXU load_type", false,-1, 2,0);
        tracep->declBit(c+403,"top EXU es_ready_go", false,-1);
        tracep->declBit(c+31,"top EXU es_allowin", false,-1);
        tracep->declBit(c+725,"top EXU ALU clock", false,-1);
        tracep->declBit(c+726,"top EXU ALU reset", false,-1);
        tracep->declQuad(c+395,"top EXU ALU io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+397,"top EXU ALU io_src2_value", false,-1, 63,0);
        tracep->declBus(c+399,"top EXU ALU io_ALUop", false,-1, 31,0);
        tracep->declBit(c+57,"top EXU ALU io_src_valid", false,-1);
        tracep->declBit(c+400,"top EXU ALU io_alu_busy", false,-1);
        tracep->declBit(c+62,"top EXU ALU io_res_ready", false,-1);
        tracep->declQuad(c+48,"top EXU ALU io_alu_res", false,-1, 63,0);
        tracep->declBit(c+725,"top EXU ALU Mul_clock", false,-1);
        tracep->declBit(c+726,"top EXU ALU Mul_reset", false,-1);
        tracep->declBit(c+404,"top EXU ALU Mul_io_mul_valid", false,-1);
        tracep->declBit(c+405,"top EXU ALU Mul_io_mulw", false,-1);
        tracep->declQuad(c+395,"top EXU ALU Mul_io_multiplicand", false,-1, 63,0);
        tracep->declQuad(c+397,"top EXU ALU Mul_io_multiplier", false,-1, 63,0);
        tracep->declBit(c+406,"top EXU ALU Mul_io_out_valid", false,-1);
        tracep->declBit(c+62,"top EXU ALU Mul_io_out_ready", false,-1);
        tracep->declBus(c+407,"top EXU ALU Mul_io_result_hi", false,-1, 31,0);
        tracep->declBus(c+408,"top EXU ALU Mul_io_result_lo", false,-1, 31,0);
        tracep->declBit(c+725,"top EXU ALU Div_clock", false,-1);
        tracep->declBit(c+726,"top EXU ALU Div_reset", false,-1);
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
        tracep->declBit(c+725,"top EXU ALU Mul clock", false,-1);
        tracep->declBit(c+726,"top EXU ALU Mul reset", false,-1);
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
        tracep->declBit(c+725,"top EXU ALU Div clock", false,-1);
        tracep->declBit(c+726,"top EXU ALU Div reset", false,-1);
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
        tracep->declBit(c+725,"top LSU clock", false,-1);
        tracep->declBit(c+726,"top LSU reset", false,-1);
        tracep->declQuad(c+64,"top LSU io_pc", false,-1, 63,0);
        tracep->declBit(c+63,"top LSU io_es_to_ms_valid", false,-1);
        tracep->declBit(c+62,"top LSU io_ms_allowin", false,-1);
        tracep->declBit(c+54,"top LSU io_rf_we", false,-1);
        tracep->declBus(c+60,"top LSU io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+48,"top LSU io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+66,"top LSU io_store_data", false,-1, 63,0);
        tracep->declBus(c+71,"top LSU io_load_type", false,-1, 2,0);
        tracep->declBit(c+68,"top LSU io_wen", false,-1);
        tracep->declBus(c+69,"top LSU io_wstrb", false,-1, 7,0);
        tracep->declBit(c+70,"top LSU io_ren", false,-1);
        tracep->declQuad(c+48,"top LSU io_maddr", false,-1, 63,0);
        tracep->declQuad(c+72,"top LSU io_to_ws_pc", false,-1, 63,0);
        tracep->declQuad(c+74,"top LSU io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+76,"top LSU io_ms_to_ws_valid", false,-1);
        tracep->declBit(c+77,"top LSU io_to_ws_rf_we", false,-1);
        tracep->declBus(c+61,"top LSU io_to_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+58,"top LSU io_ms_valid", false,-1);
        tracep->declBit(c+55,"top LSU io_ms_rf_we", false,-1);
        tracep->declBus(c+61,"top LSU io_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+53,"top LSU io_ms_fwd_ready", false,-1);
        tracep->declQuad(c+50,"top LSU io_ms_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+78,"top LSU io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+80,"top LSU io_axi_in_rvalid", false,-1);
        tracep->declBit(c+81,"top LSU io_axi_in_bvalid", false,-1);
        tracep->declBus(c+82,"top LSU io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+83,"top LSU io_axi_out_arvalid", false,-1);
        tracep->declBus(c+82,"top LSU io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBit(c+84,"top LSU io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+85,"top LSU io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+87,"top LSU io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+88,"top LSU io_axi_out_wvalid", false,-1);
        tracep->declBit(c+58,"top LSU ms_valid", false,-1);
        tracep->declQuad(c+72,"top LSU ms_pc", false,-1, 63,0);
        tracep->declBit(c+77,"top LSU ms_rf_we", false,-1);
        tracep->declBus(c+61,"top LSU ms_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+517,"top LSU ms_res", false,-1, 63,0);
        tracep->declQuad(c+85,"top LSU store_data", false,-1, 63,0);
        tracep->declBit(c+88,"top LSU wen", false,-1);
        tracep->declBus(c+87,"top LSU wstrb", false,-1, 7,0);
        tracep->declBit(c+519,"top LSU ren", false,-1);
        tracep->declQuad(c+520,"top LSU maddr", false,-1, 63,0);
        tracep->declBus(c+522,"top LSU load_type", false,-1, 2,0);
        tracep->declBit(c+523,"top LSU ms_ready_go", false,-1);
        tracep->declBit(c+62,"top LSU ms_allowin", false,-1);
        tracep->declQuad(c+524,"top LSU rdata", false,-1, 63,0);
        tracep->declBit(c+725,"top WBU clock", false,-1);
        tracep->declBit(c+726,"top WBU reset", false,-1);
        tracep->declQuad(c+72,"top WBU io_pc", false,-1, 63,0);
        tracep->declBit(c+76,"top WBU io_ms_to_ws_valid", false,-1);
        tracep->declQuad(c+74,"top WBU io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+77,"top WBU io_rf_we", false,-1);
        tracep->declBus(c+61,"top WBU io_rf_dst", false,-1, 4,0);
        tracep->declBit(c+7,"top WBU io_we", false,-1);
        tracep->declBus(c+8,"top WBU io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU io_wdata", false,-1, 63,0);
        tracep->declBit(c+59,"top WBU io_ws_valid", false,-1);
        tracep->declBit(c+56,"top WBU io_ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU io_ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU io_ws_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+89,"top WBU io_ws_pc", false,-1, 63,0);
        tracep->declBit(c+59,"top WBU ws_valid", false,-1);
        tracep->declQuad(c+89,"top WBU ws_pc", false,-1, 63,0);
        tracep->declBit(c+56,"top WBU ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU ws_res", false,-1, 63,0);
        tracep->declBit(c+725,"top arbiter clock", false,-1);
        tracep->declBit(c+726,"top arbiter reset", false,-1);
        tracep->declBus(c+91,"top arbiter io_ifu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+92,"top arbiter io_ifu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+93,"top arbiter io_ifu_axi_in_arvalid", false,-1);
        tracep->declBit(c+94,"top arbiter io_ifu_axi_in_rready", false,-1);
        tracep->declQuad(c+95,"top arbiter io_ifu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+97,"top arbiter io_ifu_axi_out_rlast", false,-1);
        tracep->declBit(c+98,"top arbiter io_ifu_axi_out_rvalid", false,-1);
        tracep->declBus(c+99,"top arbiter io_lsu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+100,"top arbiter io_lsu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+101,"top arbiter io_lsu_axi_in_arvalid", false,-1);
        tracep->declBit(c+102,"top arbiter io_lsu_axi_in_rready", false,-1);
        tracep->declBus(c+103,"top arbiter io_lsu_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+104,"top arbiter io_lsu_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+105,"top arbiter io_lsu_axi_in_awvalid", false,-1);
        tracep->declQuad(c+106,"top arbiter io_lsu_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+108,"top arbiter io_lsu_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+109,"top arbiter io_lsu_axi_in_wvalid", false,-1);
        tracep->declBit(c+110,"top arbiter io_lsu_axi_in_bready", false,-1);
        tracep->declQuad(c+111,"top arbiter io_lsu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+113,"top arbiter io_lsu_axi_out_rlast", false,-1);
        tracep->declBit(c+114,"top arbiter io_lsu_axi_out_rvalid", false,-1);
        tracep->declBit(c+115,"top arbiter io_lsu_axi_out_wready", false,-1);
        tracep->declBit(c+116,"top arbiter io_lsu_axi_out_bvalid", false,-1);
        tracep->declQuad(c+117,"top arbiter io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+119,"top arbiter io_axi_in_rlast", false,-1);
        tracep->declBit(c+120,"top arbiter io_axi_in_rvalid", false,-1);
        tracep->declBit(c+121,"top arbiter io_axi_in_wready", false,-1);
        tracep->declBit(c+122,"top arbiter io_axi_in_bvalid", false,-1);
        tracep->declBus(c+123,"top arbiter io_axi_out_araddr", false,-1, 31,0);
        tracep->declBus(c+124,"top arbiter io_axi_out_arlen", false,-1, 7,0);
        tracep->declBit(c+125,"top arbiter io_axi_out_arvalid", false,-1);
        tracep->declBit(c+126,"top arbiter io_axi_out_rready", false,-1);
        tracep->declBus(c+127,"top arbiter io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBus(c+128,"top arbiter io_axi_out_awlen", false,-1, 7,0);
        tracep->declBit(c+129,"top arbiter io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+130,"top arbiter io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+132,"top arbiter io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+133,"top arbiter io_axi_out_wvalid", false,-1);
        tracep->declBit(c+134,"top arbiter io_axi_out_bready", false,-1);
        tracep->declBus(c+526,"top arbiter state", false,-1, 1,0);
        tracep->declBit(c+725,"top i_cache clock", false,-1);
        tracep->declBit(c+726,"top i_cache reset", false,-1);
        tracep->declBus(c+25,"top i_cache io_from_ifu_araddr", false,-1, 31,0);
        tracep->declBit(c+12,"top i_cache io_from_ifu_arvalid", false,-1);
        tracep->declBit(c+26,"top i_cache io_from_ifu_rready", false,-1);
        tracep->declBit(c+21,"top i_cache io_to_ifu_arready", false,-1);
        tracep->declQuad(c+22,"top i_cache io_to_ifu_rdata", false,-1, 63,0);
        tracep->declBit(c+24,"top i_cache io_to_ifu_rvalid", false,-1);
        tracep->declBus(c+91,"top i_cache io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+92,"top i_cache io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+93,"top i_cache io_to_axi_arvalid", false,-1);
        tracep->declBit(c+94,"top i_cache io_to_axi_rready", false,-1);
        tracep->declQuad(c+95,"top i_cache io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+97,"top i_cache io_from_axi_rlast", false,-1);
        tracep->declBit(c+98,"top i_cache io_from_axi_rvalid", false,-1);
        tracep->declBit(c+29,"top i_cache io_cache_init", false,-1);
        tracep->declBit(c+28,"top i_cache io_clear_cache", false,-1);
        tracep->declBit(c+527,"top i_cache cacheLine_io_to_ifu_rdata_MPORT_en", false,-1);
        tracep->declBus(c+528,"top i_cache cacheLine_io_to_ifu_rdata_MPORT_addr", false,-1, 5,0);
        tracep->declArray(c+529,"top i_cache cacheLine_io_to_ifu_rdata_MPORT_data", false,-1, 127,0);
        tracep->declArray(c+533,"top i_cache cacheLine_MPORT_data", false,-1, 127,0);
        tracep->declBus(c+537,"top i_cache cacheLine_MPORT_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache cacheLine_MPORT_mask", false,-1);
        tracep->declBit(c+538,"top i_cache cacheLine_MPORT_en", false,-1);
        tracep->declArray(c+533,"top i_cache cacheLine_MPORT_3_data", false,-1, 127,0);
        tracep->declBus(c+539,"top i_cache cacheLine_MPORT_3_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache cacheLine_MPORT_3_mask", false,-1);
        tracep->declBit(c+540,"top i_cache cacheLine_MPORT_3_en", false,-1);
        tracep->declBit(c+731,"top i_cache validMem_valid_0_MPORT_en", false,-1);
        tracep->declBus(c+541,"top i_cache validMem_valid_0_MPORT_addr", false,-1, 5,0);
        tracep->declBit(c+542,"top i_cache validMem_valid_0_MPORT_data", false,-1);
        tracep->declBit(c+731,"top i_cache validMem_valid_1_MPORT_en", false,-1);
        tracep->declBus(c+543,"top i_cache validMem_valid_1_MPORT_addr", false,-1, 5,0);
        tracep->declBit(c+544,"top i_cache validMem_valid_1_MPORT_data", false,-1);
        tracep->declBit(c+731,"top i_cache validMem_valid_2_MPORT_en", false,-1);
        tracep->declBus(c+545,"top i_cache validMem_valid_2_MPORT_addr", false,-1, 5,0);
        tracep->declBit(c+546,"top i_cache validMem_valid_2_MPORT_data", false,-1);
        tracep->declBit(c+731,"top i_cache validMem_valid_3_MPORT_en", false,-1);
        tracep->declBus(c+547,"top i_cache validMem_valid_3_MPORT_addr", false,-1, 5,0);
        tracep->declBit(c+548,"top i_cache validMem_valid_3_MPORT_data", false,-1);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_2_data", false,-1);
        tracep->declBus(c+537,"top i_cache validMem_MPORT_2_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_2_mask", false,-1);
        tracep->declBit(c+538,"top i_cache validMem_MPORT_2_en", false,-1);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_5_data", false,-1);
        tracep->declBus(c+539,"top i_cache validMem_MPORT_5_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_5_mask", false,-1);
        tracep->declBit(c+540,"top i_cache validMem_MPORT_5_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_6_data", false,-1);
        tracep->declBus(c+766,"top i_cache validMem_MPORT_6_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_6_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_6_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_7_data", false,-1);
        tracep->declBus(c+767,"top i_cache validMem_MPORT_7_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_7_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_7_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_8_data", false,-1);
        tracep->declBus(c+768,"top i_cache validMem_MPORT_8_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_8_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_8_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_9_data", false,-1);
        tracep->declBus(c+769,"top i_cache validMem_MPORT_9_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_9_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_9_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_10_data", false,-1);
        tracep->declBus(c+770,"top i_cache validMem_MPORT_10_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_10_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_10_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_11_data", false,-1);
        tracep->declBus(c+771,"top i_cache validMem_MPORT_11_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_11_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_11_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_12_data", false,-1);
        tracep->declBus(c+772,"top i_cache validMem_MPORT_12_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_12_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_12_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_13_data", false,-1);
        tracep->declBus(c+773,"top i_cache validMem_MPORT_13_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_13_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_13_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_14_data", false,-1);
        tracep->declBus(c+774,"top i_cache validMem_MPORT_14_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_14_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_14_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_15_data", false,-1);
        tracep->declBus(c+775,"top i_cache validMem_MPORT_15_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_15_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_15_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_16_data", false,-1);
        tracep->declBus(c+776,"top i_cache validMem_MPORT_16_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_16_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_16_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_17_data", false,-1);
        tracep->declBus(c+777,"top i_cache validMem_MPORT_17_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_17_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_17_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_18_data", false,-1);
        tracep->declBus(c+778,"top i_cache validMem_MPORT_18_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_18_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_18_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_19_data", false,-1);
        tracep->declBus(c+779,"top i_cache validMem_MPORT_19_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_19_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_19_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_20_data", false,-1);
        tracep->declBus(c+780,"top i_cache validMem_MPORT_20_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_20_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_20_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_21_data", false,-1);
        tracep->declBus(c+781,"top i_cache validMem_MPORT_21_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_21_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_21_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_22_data", false,-1);
        tracep->declBus(c+782,"top i_cache validMem_MPORT_22_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_22_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_22_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_23_data", false,-1);
        tracep->declBus(c+783,"top i_cache validMem_MPORT_23_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_23_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_23_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_24_data", false,-1);
        tracep->declBus(c+784,"top i_cache validMem_MPORT_24_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_24_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_24_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_25_data", false,-1);
        tracep->declBus(c+785,"top i_cache validMem_MPORT_25_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_25_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_25_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_26_data", false,-1);
        tracep->declBus(c+786,"top i_cache validMem_MPORT_26_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_26_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_26_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_27_data", false,-1);
        tracep->declBus(c+787,"top i_cache validMem_MPORT_27_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_27_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_27_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_28_data", false,-1);
        tracep->declBus(c+788,"top i_cache validMem_MPORT_28_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_28_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_28_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_29_data", false,-1);
        tracep->declBus(c+789,"top i_cache validMem_MPORT_29_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_29_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_29_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_30_data", false,-1);
        tracep->declBus(c+790,"top i_cache validMem_MPORT_30_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_30_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_30_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_31_data", false,-1);
        tracep->declBus(c+791,"top i_cache validMem_MPORT_31_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_31_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_31_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_32_data", false,-1);
        tracep->declBus(c+792,"top i_cache validMem_MPORT_32_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_32_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_32_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_33_data", false,-1);
        tracep->declBus(c+793,"top i_cache validMem_MPORT_33_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_33_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_33_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_34_data", false,-1);
        tracep->declBus(c+794,"top i_cache validMem_MPORT_34_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_34_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_34_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_35_data", false,-1);
        tracep->declBus(c+795,"top i_cache validMem_MPORT_35_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_35_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_35_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_36_data", false,-1);
        tracep->declBus(c+796,"top i_cache validMem_MPORT_36_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_36_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_36_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_37_data", false,-1);
        tracep->declBus(c+797,"top i_cache validMem_MPORT_37_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_37_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_37_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_38_data", false,-1);
        tracep->declBus(c+798,"top i_cache validMem_MPORT_38_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_38_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_38_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_39_data", false,-1);
        tracep->declBus(c+799,"top i_cache validMem_MPORT_39_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_39_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_39_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_40_data", false,-1);
        tracep->declBus(c+800,"top i_cache validMem_MPORT_40_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_40_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_40_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_41_data", false,-1);
        tracep->declBus(c+801,"top i_cache validMem_MPORT_41_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_41_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_41_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_42_data", false,-1);
        tracep->declBus(c+802,"top i_cache validMem_MPORT_42_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_42_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_42_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_43_data", false,-1);
        tracep->declBus(c+803,"top i_cache validMem_MPORT_43_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_43_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_43_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_44_data", false,-1);
        tracep->declBus(c+804,"top i_cache validMem_MPORT_44_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_44_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_44_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_45_data", false,-1);
        tracep->declBus(c+805,"top i_cache validMem_MPORT_45_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_45_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_45_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_46_data", false,-1);
        tracep->declBus(c+806,"top i_cache validMem_MPORT_46_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_46_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_46_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_47_data", false,-1);
        tracep->declBus(c+807,"top i_cache validMem_MPORT_47_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_47_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_47_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_48_data", false,-1);
        tracep->declBus(c+808,"top i_cache validMem_MPORT_48_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_48_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_48_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_49_data", false,-1);
        tracep->declBus(c+809,"top i_cache validMem_MPORT_49_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_49_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_49_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_50_data", false,-1);
        tracep->declBus(c+810,"top i_cache validMem_MPORT_50_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_50_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_50_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_51_data", false,-1);
        tracep->declBus(c+811,"top i_cache validMem_MPORT_51_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_51_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_51_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_52_data", false,-1);
        tracep->declBus(c+812,"top i_cache validMem_MPORT_52_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_52_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_52_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_53_data", false,-1);
        tracep->declBus(c+813,"top i_cache validMem_MPORT_53_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_53_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_53_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_54_data", false,-1);
        tracep->declBus(c+814,"top i_cache validMem_MPORT_54_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_54_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_54_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_55_data", false,-1);
        tracep->declBus(c+815,"top i_cache validMem_MPORT_55_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_55_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_55_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_56_data", false,-1);
        tracep->declBus(c+816,"top i_cache validMem_MPORT_56_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_56_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_56_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_57_data", false,-1);
        tracep->declBus(c+817,"top i_cache validMem_MPORT_57_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_57_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_57_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_58_data", false,-1);
        tracep->declBus(c+818,"top i_cache validMem_MPORT_58_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_58_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_58_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_59_data", false,-1);
        tracep->declBus(c+819,"top i_cache validMem_MPORT_59_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_59_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_59_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_60_data", false,-1);
        tracep->declBus(c+820,"top i_cache validMem_MPORT_60_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_60_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_60_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_61_data", false,-1);
        tracep->declBus(c+821,"top i_cache validMem_MPORT_61_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_61_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_61_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_62_data", false,-1);
        tracep->declBus(c+822,"top i_cache validMem_MPORT_62_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_62_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_62_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_63_data", false,-1);
        tracep->declBus(c+823,"top i_cache validMem_MPORT_63_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_63_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_63_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_64_data", false,-1);
        tracep->declBus(c+824,"top i_cache validMem_MPORT_64_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_64_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_64_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_65_data", false,-1);
        tracep->declBus(c+825,"top i_cache validMem_MPORT_65_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_65_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_65_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_66_data", false,-1);
        tracep->declBus(c+826,"top i_cache validMem_MPORT_66_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_66_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_66_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_67_data", false,-1);
        tracep->declBus(c+827,"top i_cache validMem_MPORT_67_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_67_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_67_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_68_data", false,-1);
        tracep->declBus(c+828,"top i_cache validMem_MPORT_68_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_68_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_68_en", false,-1);
        tracep->declBit(c+765,"top i_cache validMem_MPORT_69_data", false,-1);
        tracep->declBus(c+829,"top i_cache validMem_MPORT_69_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache validMem_MPORT_69_mask", false,-1);
        tracep->declBit(c+549,"top i_cache validMem_MPORT_69_en", false,-1);
        tracep->declBit(c+731,"top i_cache tagMem_tagMatch_0_MPORT_en", false,-1);
        tracep->declBus(c+541,"top i_cache tagMem_tagMatch_0_MPORT_addr", false,-1, 5,0);
        tracep->declBus(c+550,"top i_cache tagMem_tagMatch_0_MPORT_data", false,-1, 31,0);
        tracep->declBit(c+731,"top i_cache tagMem_tagMatch_1_MPORT_en", false,-1);
        tracep->declBus(c+543,"top i_cache tagMem_tagMatch_1_MPORT_addr", false,-1, 5,0);
        tracep->declBus(c+551,"top i_cache tagMem_tagMatch_1_MPORT_data", false,-1, 31,0);
        tracep->declBit(c+731,"top i_cache tagMem_tagMatch_2_MPORT_en", false,-1);
        tracep->declBus(c+545,"top i_cache tagMem_tagMatch_2_MPORT_addr", false,-1, 5,0);
        tracep->declBus(c+552,"top i_cache tagMem_tagMatch_2_MPORT_data", false,-1, 31,0);
        tracep->declBit(c+731,"top i_cache tagMem_tagMatch_3_MPORT_en", false,-1);
        tracep->declBus(c+547,"top i_cache tagMem_tagMatch_3_MPORT_addr", false,-1, 5,0);
        tracep->declBus(c+553,"top i_cache tagMem_tagMatch_3_MPORT_data", false,-1, 31,0);
        tracep->declBus(c+554,"top i_cache tagMem_MPORT_1_data", false,-1, 31,0);
        tracep->declBus(c+537,"top i_cache tagMem_MPORT_1_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache tagMem_MPORT_1_mask", false,-1);
        tracep->declBit(c+538,"top i_cache tagMem_MPORT_1_en", false,-1);
        tracep->declBus(c+554,"top i_cache tagMem_MPORT_4_data", false,-1, 31,0);
        tracep->declBus(c+539,"top i_cache tagMem_MPORT_4_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top i_cache tagMem_MPORT_4_mask", false,-1);
        tracep->declBit(c+540,"top i_cache tagMem_MPORT_4_en", false,-1);
        tracep->declBus(c+555,"top i_cache addr", false,-1, 31,0);
        tracep->declBus(c+556,"top i_cache offset", false,-1, 3,0);
        tracep->declBus(c+557,"top i_cache index", false,-1, 3,0);
        tracep->declBus(c+558,"top i_cache tag", false,-1, 23,0);
        tracep->declBus(c+559,"top i_cache shift_bit", false,-1, 6,0);
        tracep->declBit(c+542,"top i_cache valid_0", false,-1);
        tracep->declBit(c+544,"top i_cache valid_1", false,-1);
        tracep->declBit(c+546,"top i_cache valid_2", false,-1);
        tracep->declBit(c+548,"top i_cache valid_3", false,-1);
        tracep->declBit(c+560,"top i_cache allvalid", false,-1);
        tracep->declBus(c+561,"top i_cache foundUnvalidIndex", false,-1, 1,0);
        tracep->declBus(c+562,"top i_cache unvalidIndex", false,-1, 8,0);
        tracep->declBit(c+563,"top i_cache tagMatch_0", false,-1);
        tracep->declBit(c+564,"top i_cache tagMatch_1", false,-1);
        tracep->declBit(c+565,"top i_cache tagMatch_2", false,-1);
        tracep->declBit(c+566,"top i_cache tagMatch_3", false,-1);
        tracep->declBit(c+567,"top i_cache anyMatch", false,-1);
        tracep->declBus(c+568,"top i_cache foundtagIndex", false,-1, 1,0);
        tracep->declBus(c+569,"top i_cache tagIndex", false,-1, 8,0);
        tracep->declQuad(c+570,"top i_cache receive_data_0", false,-1, 63,0);
        tracep->declQuad(c+572,"top i_cache receive_data_1", false,-1, 63,0);
        tracep->declBus(c+574,"top i_cache receive_num", false,-1, 2,0);
        tracep->declBus(c+575,"top i_cache quene_0", false,-1, 7,0);
        tracep->declBus(c+576,"top i_cache quene_1", false,-1, 7,0);
        tracep->declBus(c+577,"top i_cache quene_2", false,-1, 7,0);
        tracep->declBus(c+578,"top i_cache quene_3", false,-1, 7,0);
        tracep->declBus(c+579,"top i_cache quene_4", false,-1, 7,0);
        tracep->declBus(c+580,"top i_cache quene_5", false,-1, 7,0);
        tracep->declBus(c+581,"top i_cache quene_6", false,-1, 7,0);
        tracep->declBus(c+582,"top i_cache quene_7", false,-1, 7,0);
        tracep->declBus(c+583,"top i_cache quene_8", false,-1, 7,0);
        tracep->declBus(c+584,"top i_cache quene_9", false,-1, 7,0);
        tracep->declBus(c+585,"top i_cache quene_10", false,-1, 7,0);
        tracep->declBus(c+586,"top i_cache quene_11", false,-1, 7,0);
        tracep->declBus(c+587,"top i_cache quene_12", false,-1, 7,0);
        tracep->declBus(c+588,"top i_cache quene_13", false,-1, 7,0);
        tracep->declBus(c+589,"top i_cache quene_14", false,-1, 7,0);
        tracep->declBus(c+590,"top i_cache quene_15", false,-1, 7,0);
        tracep->declBus(c+591,"top i_cache replace_way", false,-1, 1,0);
        tracep->declBus(c+592,"top i_cache state", false,-1, 2,0);
        tracep->declBus(c+593,"top i_cache replaceIndex", false,-1, 31,0);
        tracep->declBit(c+725,"top d_cache clock", false,-1);
        tracep->declBit(c+726,"top d_cache reset", false,-1);
        tracep->declBus(c+82,"top d_cache io_from_lsu_araddr", false,-1, 31,0);
        tracep->declBit(c+83,"top d_cache io_from_lsu_arvalid", false,-1);
        tracep->declBus(c+82,"top d_cache io_from_lsu_awaddr", false,-1, 31,0);
        tracep->declBit(c+84,"top d_cache io_from_lsu_awvalid", false,-1);
        tracep->declQuad(c+85,"top d_cache io_from_lsu_wdata", false,-1, 63,0);
        tracep->declBus(c+87,"top d_cache io_from_lsu_wstrb", false,-1, 7,0);
        tracep->declBit(c+88,"top d_cache io_from_lsu_wvalid", false,-1);
        tracep->declQuad(c+78,"top d_cache io_to_lsu_rdata", false,-1, 63,0);
        tracep->declBit(c+80,"top d_cache io_to_lsu_rvalid", false,-1);
        tracep->declBit(c+81,"top d_cache io_to_lsu_bvalid", false,-1);
        tracep->declBus(c+99,"top d_cache io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+100,"top d_cache io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+101,"top d_cache io_to_axi_arvalid", false,-1);
        tracep->declBit(c+102,"top d_cache io_to_axi_rready", false,-1);
        tracep->declBus(c+103,"top d_cache io_to_axi_awaddr", false,-1, 31,0);
        tracep->declBus(c+104,"top d_cache io_to_axi_awlen", false,-1, 7,0);
        tracep->declBit(c+105,"top d_cache io_to_axi_awvalid", false,-1);
        tracep->declQuad(c+106,"top d_cache io_to_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+108,"top d_cache io_to_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+109,"top d_cache io_to_axi_wvalid", false,-1);
        tracep->declBit(c+110,"top d_cache io_to_axi_bready", false,-1);
        tracep->declQuad(c+111,"top d_cache io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+113,"top d_cache io_from_axi_rlast", false,-1);
        tracep->declBit(c+114,"top d_cache io_from_axi_rvalid", false,-1);
        tracep->declBit(c+115,"top d_cache io_from_axi_wready", false,-1);
        tracep->declBit(c+116,"top d_cache io_from_axi_bvalid", false,-1);
        tracep->declBit(c+594,"top d_cache cacheLine_MPORT_1_en", false,-1);
        tracep->declBus(c+595,"top d_cache cacheLine_MPORT_1_addr", false,-1, 5,0);
        tracep->declArray(c+596,"top d_cache cacheLine_MPORT_1_data", false,-1, 255,0);
        tracep->declBit(c+604,"top d_cache cacheLine_write_back_data_MPORT_en", false,-1);
        tracep->declBus(c+605,"top d_cache cacheLine_write_back_data_MPORT_addr", false,-1, 5,0);
        tracep->declArray(c+606,"top d_cache cacheLine_write_back_data_MPORT_data", false,-1, 255,0);
        tracep->declBit(c+614,"top d_cache cacheLine_io_to_lsu_rdata_MPORT_en", false,-1);
        tracep->declBus(c+595,"top d_cache cacheLine_io_to_lsu_rdata_MPORT_addr", false,-1, 5,0);
        tracep->declArray(c+596,"top d_cache cacheLine_io_to_lsu_rdata_MPORT_data", false,-1, 255,0);
        tracep->declArray(c+615,"top d_cache cacheLine_MPORT_data", false,-1, 255,0);
        tracep->declBus(c+595,"top d_cache cacheLine_MPORT_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top d_cache cacheLine_MPORT_mask", false,-1);
        tracep->declBit(c+594,"top d_cache cacheLine_MPORT_en", false,-1);
        tracep->declArray(c+623,"top d_cache cacheLine_MPORT_3_data", false,-1, 255,0);
        tracep->declBus(c+631,"top d_cache cacheLine_MPORT_3_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top d_cache cacheLine_MPORT_3_mask", false,-1);
        tracep->declBit(c+632,"top d_cache cacheLine_MPORT_3_en", false,-1);
        tracep->declArray(c+633,"top d_cache cacheLine_MPORT_6_data", false,-1, 255,0);
        tracep->declBus(c+605,"top d_cache cacheLine_MPORT_6_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top d_cache cacheLine_MPORT_6_mask", false,-1);
        tracep->declBit(c+641,"top d_cache cacheLine_MPORT_6_en", false,-1);
        tracep->declBit(c+731,"top d_cache validMem_valid_0_MPORT_en", false,-1);
        tracep->declBus(c+642,"top d_cache validMem_valid_0_MPORT_addr", false,-1, 5,0);
        tracep->declBit(c+643,"top d_cache validMem_valid_0_MPORT_data", false,-1);
        tracep->declBit(c+731,"top d_cache validMem_valid_1_MPORT_en", false,-1);
        tracep->declBus(c+644,"top d_cache validMem_valid_1_MPORT_addr", false,-1, 5,0);
        tracep->declBit(c+645,"top d_cache validMem_valid_1_MPORT_data", false,-1);
        tracep->declBit(c+731,"top d_cache validMem_valid_2_MPORT_en", false,-1);
        tracep->declBus(c+646,"top d_cache validMem_valid_2_MPORT_addr", false,-1, 5,0);
        tracep->declBit(c+647,"top d_cache validMem_valid_2_MPORT_data", false,-1);
        tracep->declBit(c+731,"top d_cache validMem_valid_3_MPORT_en", false,-1);
        tracep->declBus(c+648,"top d_cache validMem_valid_3_MPORT_addr", false,-1, 5,0);
        tracep->declBit(c+649,"top d_cache validMem_valid_3_MPORT_data", false,-1);
        tracep->declBit(c+731,"top d_cache validMem_MPORT_5_data", false,-1);
        tracep->declBus(c+631,"top d_cache validMem_MPORT_5_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top d_cache validMem_MPORT_5_mask", false,-1);
        tracep->declBit(c+632,"top d_cache validMem_MPORT_5_en", false,-1);
        tracep->declBit(c+731,"top d_cache validMem_MPORT_8_data", false,-1);
        tracep->declBus(c+605,"top d_cache validMem_MPORT_8_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top d_cache validMem_MPORT_8_mask", false,-1);
        tracep->declBit(c+641,"top d_cache validMem_MPORT_8_en", false,-1);
        tracep->declBit(c+731,"top d_cache tagMem_tagMatch_0_MPORT_en", false,-1);
        tracep->declBus(c+642,"top d_cache tagMem_tagMatch_0_MPORT_addr", false,-1, 5,0);
        tracep->declBus(c+650,"top d_cache tagMem_tagMatch_0_MPORT_data", false,-1, 31,0);
        tracep->declBit(c+731,"top d_cache tagMem_tagMatch_1_MPORT_en", false,-1);
        tracep->declBus(c+644,"top d_cache tagMem_tagMatch_1_MPORT_addr", false,-1, 5,0);
        tracep->declBus(c+651,"top d_cache tagMem_tagMatch_1_MPORT_data", false,-1, 31,0);
        tracep->declBit(c+731,"top d_cache tagMem_tagMatch_2_MPORT_en", false,-1);
        tracep->declBus(c+646,"top d_cache tagMem_tagMatch_2_MPORT_addr", false,-1, 5,0);
        tracep->declBus(c+652,"top d_cache tagMem_tagMatch_2_MPORT_data", false,-1, 31,0);
        tracep->declBit(c+731,"top d_cache tagMem_tagMatch_3_MPORT_en", false,-1);
        tracep->declBus(c+648,"top d_cache tagMem_tagMatch_3_MPORT_addr", false,-1, 5,0);
        tracep->declBus(c+653,"top d_cache tagMem_tagMatch_3_MPORT_data", false,-1, 31,0);
        tracep->declBit(c+604,"top d_cache tagMem_write_back_addr_MPORT_en", false,-1);
        tracep->declBus(c+605,"top d_cache tagMem_write_back_addr_MPORT_addr", false,-1, 5,0);
        tracep->declBus(c+654,"top d_cache tagMem_write_back_addr_MPORT_data", false,-1, 31,0);
        tracep->declBus(c+655,"top d_cache tagMem_MPORT_4_data", false,-1, 31,0);
        tracep->declBus(c+631,"top d_cache tagMem_MPORT_4_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top d_cache tagMem_MPORT_4_mask", false,-1);
        tracep->declBit(c+632,"top d_cache tagMem_MPORT_4_en", false,-1);
        tracep->declBus(c+655,"top d_cache tagMem_MPORT_7_data", false,-1, 31,0);
        tracep->declBus(c+605,"top d_cache tagMem_MPORT_7_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top d_cache tagMem_MPORT_7_mask", false,-1);
        tracep->declBit(c+641,"top d_cache tagMem_MPORT_7_en", false,-1);
        tracep->declBit(c+641,"top d_cache dirtyMem_MPORT_9_en", false,-1);
        tracep->declBus(c+605,"top d_cache dirtyMem_MPORT_9_addr", false,-1, 5,0);
        tracep->declBit(c+656,"top d_cache dirtyMem_MPORT_9_data", false,-1);
        tracep->declBit(c+731,"top d_cache dirtyMem_MPORT_2_data", false,-1);
        tracep->declBus(c+595,"top d_cache dirtyMem_MPORT_2_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top d_cache dirtyMem_MPORT_2_mask", false,-1);
        tracep->declBit(c+594,"top d_cache dirtyMem_MPORT_2_en", false,-1);
        tracep->declBit(c+765,"top d_cache dirtyMem_MPORT_10_data", false,-1);
        tracep->declBus(c+605,"top d_cache dirtyMem_MPORT_10_addr", false,-1, 5,0);
        tracep->declBit(c+731,"top d_cache dirtyMem_MPORT_10_mask", false,-1);
        tracep->declBit(c+604,"top d_cache dirtyMem_MPORT_10_en", false,-1);
        tracep->declBus(c+657,"top d_cache offset", false,-1, 4,0);
        tracep->declBus(c+658,"top d_cache index", false,-1, 3,0);
        tracep->declBus(c+659,"top d_cache tag", false,-1, 22,0);
        tracep->declBit(c+643,"top d_cache valid_0", false,-1);
        tracep->declBit(c+645,"top d_cache valid_1", false,-1);
        tracep->declBit(c+647,"top d_cache valid_2", false,-1);
        tracep->declBit(c+649,"top d_cache valid_3", false,-1);
        tracep->declBit(c+660,"top d_cache allvalid", false,-1);
        tracep->declBus(c+661,"top d_cache foundUnvalidIndex", false,-1, 1,0);
        tracep->declBus(c+662,"top d_cache unvalidIndex", false,-1, 8,0);
        tracep->declBit(c+663,"top d_cache tagMatch_0", false,-1);
        tracep->declBit(c+664,"top d_cache tagMatch_1", false,-1);
        tracep->declBit(c+665,"top d_cache tagMatch_2", false,-1);
        tracep->declBit(c+666,"top d_cache tagMatch_3", false,-1);
        tracep->declBit(c+667,"top d_cache anyMatch", false,-1);
        tracep->declBus(c+668,"top d_cache foundtagIndex", false,-1, 1,0);
        tracep->declBus(c+669,"top d_cache tagIndex", false,-1, 8,0);
        tracep->declArray(c+670,"top d_cache write_back_data", false,-1, 255,0);
        tracep->declBus(c+678,"top d_cache write_back_addr", false,-1, 31,0);
        tracep->declQuad(c+679,"top d_cache receive_data_0", false,-1, 63,0);
        tracep->declQuad(c+681,"top d_cache receive_data_1", false,-1, 63,0);
        tracep->declQuad(c+683,"top d_cache receive_data_2", false,-1, 63,0);
        tracep->declQuad(c+685,"top d_cache receive_data_3", false,-1, 63,0);
        tracep->declBus(c+687,"top d_cache receive_num", false,-1, 2,0);
        tracep->declBus(c+688,"top d_cache quene_0", false,-1, 7,0);
        tracep->declBus(c+689,"top d_cache quene_1", false,-1, 7,0);
        tracep->declBus(c+690,"top d_cache quene_2", false,-1, 7,0);
        tracep->declBus(c+691,"top d_cache quene_3", false,-1, 7,0);
        tracep->declBus(c+692,"top d_cache quene_4", false,-1, 7,0);
        tracep->declBus(c+693,"top d_cache quene_5", false,-1, 7,0);
        tracep->declBus(c+694,"top d_cache quene_6", false,-1, 7,0);
        tracep->declBus(c+695,"top d_cache quene_7", false,-1, 7,0);
        tracep->declBus(c+696,"top d_cache quene_8", false,-1, 7,0);
        tracep->declBus(c+697,"top d_cache quene_9", false,-1, 7,0);
        tracep->declBus(c+698,"top d_cache quene_10", false,-1, 7,0);
        tracep->declBus(c+699,"top d_cache quene_11", false,-1, 7,0);
        tracep->declBus(c+700,"top d_cache quene_12", false,-1, 7,0);
        tracep->declBus(c+701,"top d_cache quene_13", false,-1, 7,0);
        tracep->declBus(c+702,"top d_cache quene_14", false,-1, 7,0);
        tracep->declBus(c+703,"top d_cache quene_15", false,-1, 7,0);
        tracep->declBus(c+704,"top d_cache replace_way", false,-1, 1,0);
        tracep->declBus(c+705,"top d_cache shift_bit", false,-1, 7,0);
        tracep->declQuad(c+706,"top d_cache wmask", false,-1, 63,0);
        tracep->declBus(c+708,"top d_cache state", false,-1, 3,0);
        tracep->declArray(c+709,"top d_cache lo", false,-1, 127,0);
        tracep->declArray(c+713,"top d_cache hi", false,-1, 127,0);
        tracep->declBus(c+717,"top d_cache replaceIndex", false,-1, 31,0);
        tracep->declBit(c+725,"top axi clock", false,-1);
        tracep->declBit(c+726,"top axi reset", false,-1);
        tracep->declBus(c+123,"top axi io_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+124,"top axi io_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+125,"top axi io_axi_in_arvalid", false,-1);
        tracep->declBit(c+126,"top axi io_axi_in_rready", false,-1);
        tracep->declBus(c+127,"top axi io_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+128,"top axi io_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+129,"top axi io_axi_in_awvalid", false,-1);
        tracep->declQuad(c+130,"top axi io_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+132,"top axi io_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+133,"top axi io_axi_in_wvalid", false,-1);
        tracep->declBit(c+134,"top axi io_axi_in_bready", false,-1);
        tracep->declQuad(c+117,"top axi io_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+119,"top axi io_axi_out_rlast", false,-1);
        tracep->declBit(c+120,"top axi io_axi_out_rvalid", false,-1);
        tracep->declBit(c+121,"top axi io_axi_out_wready", false,-1);
        tracep->declBit(c+122,"top axi io_axi_out_bvalid", false,-1);
        tracep->declQuad(c+718,"top axi Mem_modle_Raddr", false,-1, 63,0);
        tracep->declQuad(c+117,"top axi Mem_modle_Rdata", false,-1, 63,0);
        tracep->declQuad(c+720,"top axi Mem_modle_Waddr", false,-1, 63,0);
        tracep->declQuad(c+130,"top axi Mem_modle_Wdata", false,-1, 63,0);
        tracep->declBus(c+132,"top axi Mem_modle_Wmask", false,-1, 7,0);
        tracep->declBit(c+121,"top axi Mem_modle_Write_en", false,-1);
        tracep->declBit(c+120,"top axi Mem_modle_Read_en", false,-1);
        tracep->declBit(c+121,"top axi axi_wready", false,-1);
        tracep->declBit(c+122,"top axi axi_bvalid", false,-1);
        tracep->declBit(c+120,"top axi axi_rvalid", false,-1);
        tracep->declBus(c+722,"top axi arlen", false,-1, 7,0);
        tracep->declBus(c+723,"top axi awlen", false,-1, 7,0);
        tracep->declQuad(c+718,"top axi araddr", false,-1, 63,0);
        tracep->declQuad(c+720,"top axi awaddr", false,-1, 63,0);
        tracep->declBus(c+724,"top axi state", false,-1, 2,0);
        tracep->declQuad(c+718,"top axi Mem_modle Raddr", false,-1, 63,0);
        tracep->declQuad(c+720,"top axi Mem_modle Waddr", false,-1, 63,0);
        tracep->declQuad(c+130,"top axi Mem_modle Wdata", false,-1, 63,0);
        tracep->declBus(c+132,"top axi Mem_modle Wmask", false,-1, 7,0);
        tracep->declBit(c+121,"top axi Mem_modle Write_en", false,-1);
        tracep->declBit(c+120,"top axi Mem_modle Read_en", false,-1);
        tracep->declQuad(c+117,"top axi Mem_modle Rdata", false,-1, 63,0);
        tracep->declBus(c+135,"top dpi flag", false,-1, 31,0);
        tracep->declBus(c+136,"top dpi ecall_flag", false,-1, 31,0);
        tracep->declQuad(c+137,"top dpi pc", false,-1, 63,0);
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

extern const VlWide<10>/*319:0*/ Vtop__ConstPool__CONST_bc9d891d_0;

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp271;
    VlWide<4>/*127:0*/ __Vtemp272;
    VlWide<4>/*127:0*/ __Vtemp279;
    VlWide<4>/*127:0*/ __Vtemp280;
    VlWide<4>/*127:0*/ __Vtemp281;
    VlWide<3>/*95:0*/ __Vtemp285;
    VlWide<3>/*95:0*/ __Vtemp286;
    VlWide<3>/*95:0*/ __Vtemp290;
    VlWide<3>/*95:0*/ __Vtemp294;
    VlWide<3>/*95:0*/ __Vtemp301;
    VlWide<4>/*127:0*/ __Vtemp302;
    VlWide<3>/*95:0*/ __Vtemp303;
    VlWide<4>/*127:0*/ __Vtemp304;
    VlWide<4>/*127:0*/ __Vtemp305;
    VlWide<4>/*127:0*/ __Vtemp311;
    VlWide<4>/*127:0*/ __Vtemp312;
    VlWide<4>/*127:0*/ __Vtemp313;
    VlWide<8>/*255:0*/ __Vtemp314;
    VlWide<8>/*255:0*/ __Vtemp315;
    VlWide<10>/*319:0*/ __Vtemp316;
    VlWide<10>/*319:0*/ __Vtemp317;
    VlWide<10>/*319:0*/ __Vtemp321;
    VlWide<10>/*319:0*/ __Vtemp322;
    VlWide<8>/*255:0*/ __Vtemp327;
    VlWide<8>/*255:0*/ __Vtemp329;
    VlWide<8>/*255:0*/ __Vtemp330;
    VlWide<4>/*127:0*/ __Vtemp331;
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
        __Vtemp271[0U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))))][0U];
        __Vtemp271[1U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))))][1U];
        __Vtemp271[2U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))))][2U];
        __Vtemp271[3U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))))][3U];
        VL_SHIFTR_WWI(128,128,7, __Vtemp272, __Vtemp271, 
                      (0x78U & (vlSelf->top__DOT__i_cache__DOT__addr 
                                << 3U)));
        tracep->fullQData(oldp+22,((((QData)((IData)(
                                                     ((1U 
                                                       == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                       ? 
                                                      __Vtemp272[1U]
                                                       : 0U))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((1U 
                                                                   == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                                   ? 
                                                                  __Vtemp272[0U]
                                                                   : 0U))))),64);
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
        tracep->fullBit(oldp+52,(vlSelf->top__DOT__EXU_io_es_fwd_ready));
        tracep->fullBit(oldp+53,(vlSelf->top__DOT__LSU_io_ms_fwd_ready));
        tracep->fullBit(oldp+54,(vlSelf->top__DOT__EXU__DOT__es_rf_we));
        tracep->fullBit(oldp+55,(vlSelf->top__DOT__LSU_io_ms_rf_we));
        tracep->fullBit(oldp+56,(vlSelf->top__DOT__WBU__DOT__ws_rf_we));
        tracep->fullBit(oldp+57,(vlSelf->top__DOT__EXU__DOT__es_valid));
        tracep->fullBit(oldp+58,(vlSelf->top__DOT__LSU__DOT__ms_valid));
        tracep->fullBit(oldp+59,(vlSelf->top__DOT__WBU__DOT__ws_valid));
        tracep->fullCData(oldp+60,(vlSelf->top__DOT__EXU__DOT__es_rd),5);
        tracep->fullCData(oldp+61,(vlSelf->top__DOT__LSU__DOT__ms_rf_dst),5);
        tracep->fullBit(oldp+62,(vlSelf->top__DOT__LSU__DOT__ms_allowin));
        tracep->fullBit(oldp+63,(vlSelf->top__DOT__EXU_io_es_to_ms_valid));
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__EXU__DOT__es_pc),64);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__EXU__DOT__store_data),64);
        tracep->fullBit(oldp+68,(vlSelf->top__DOT__EXU__DOT__st_we));
        tracep->fullCData(oldp+69,(vlSelf->top__DOT__EXU__DOT__st_wstrb),8);
        tracep->fullBit(oldp+70,(vlSelf->top__DOT__EXU__DOT__ld_we));
        tracep->fullCData(oldp+71,(vlSelf->top__DOT__EXU__DOT__load_type),3);
        tracep->fullQData(oldp+72,(vlSelf->top__DOT__LSU__DOT__ms_pc),64);
        tracep->fullQData(oldp+74,(((0U != (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                     ? vlSelf->top__DOT__LSU__DOT__rdata
                                     : vlSelf->top__DOT__LSU__DOT__ms_res)),64);
        tracep->fullBit(oldp+76,(vlSelf->top__DOT__LSU_io_ms_to_ws_valid));
        tracep->fullBit(oldp+77,(vlSelf->top__DOT__LSU__DOT__ms_rf_we));
        tracep->fullQData(oldp+78,((((QData)((IData)(
                                                     vlSelf->top__DOT__d_cache__DOT___GEN_592[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__d_cache__DOT___GEN_592[0U])))),64);
        tracep->fullBit(oldp+80,(((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT__anyMatch)
                                   : ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                      & ((3U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                         & ((~ ((4U 
                                                 == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                | (8U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state)))) 
                                            & ((6U 
                                                != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                               & ((7U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                    & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3)) 
                                                   & (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid))))))))));
        tracep->fullBit(oldp+81,(((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                  & ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__anyMatch)
                                      : ((3U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                         & (((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                             | (8U 
                                                == (IData)(vlSelf->top__DOT__d_cache__DOT__state)))
                                             ? (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid)
                                             : ((6U 
                                                 != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                & ((7U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid)
                                                    : 
                                                   (((0U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                     & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3)) 
                                                    & (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid))))))))));
        tracep->fullIData(oldp+82,((IData)(vlSelf->top__DOT__LSU__DOT__maddr)),32);
        tracep->fullBit(oldp+83,(vlSelf->top__DOT__LSU_io_axi_out_arvalid));
        tracep->fullBit(oldp+84,(vlSelf->top__DOT__LSU_io_axi_out_awvalid));
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__LSU__DOT__store_data),64);
        tracep->fullCData(oldp+87,(vlSelf->top__DOT__LSU__DOT__wstrb),8);
        tracep->fullBit(oldp+88,(vlSelf->top__DOT__LSU__DOT__wen));
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__WBU__DOT__ws_pc),64);
        tracep->fullIData(oldp+91,((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_574)),32);
        tracep->fullCData(oldp+92,(vlSelf->top__DOT__i_cache_io_to_axi_arvalid),8);
        tracep->fullBit(oldp+93,(vlSelf->top__DOT__i_cache_io_to_axi_arvalid));
        tracep->fullBit(oldp+94,(vlSelf->top__DOT__i_cache_io_to_axi_rready));
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata),64);
        tracep->fullBit(oldp+97,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast));
        tracep->fullBit(oldp+98,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid));
        tracep->fullIData(oldp+99,((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_574)),32);
        tracep->fullCData(oldp+100,(vlSelf->top__DOT__d_cache_io_to_axi_arlen),8);
        tracep->fullBit(oldp+101,(vlSelf->top__DOT__d_cache_io_to_axi_arvalid));
        tracep->fullBit(oldp+102,(vlSelf->top__DOT__d_cache_io_to_axi_rready));
        tracep->fullIData(oldp+103,(vlSelf->top__DOT__d_cache_io_to_axi_awaddr),32);
        tracep->fullCData(oldp+104,(vlSelf->top__DOT__d_cache_io_to_axi_awlen),8);
        tracep->fullBit(oldp+105,(vlSelf->top__DOT__d_cache_io_to_axi_awvalid));
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__d_cache_io_to_axi_wdata),64);
        tracep->fullCData(oldp+108,(vlSelf->top__DOT__d_cache_io_to_axi_wstrb),8);
        tracep->fullBit(oldp+109,(vlSelf->top__DOT__d_cache_io_to_axi_wvalid));
        tracep->fullBit(oldp+110,(vlSelf->top__DOT__d_cache_io_to_axi_bready));
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata),64);
        tracep->fullBit(oldp+113,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rlast));
        tracep->fullBit(oldp+114,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid));
        tracep->fullBit(oldp+115,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                    ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                        ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                        : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid) 
                                           & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))
                                    : ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                       & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                           ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                           : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                              & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))))));
        tracep->fullBit(oldp+116,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid));
        tracep->fullQData(oldp+117,(vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata),64);
        tracep->fullBit(oldp+119,(vlSelf->top__DOT__axi_io_axi_out_rlast));
        tracep->fullBit(oldp+120,(vlSelf->top__DOT__axi__DOT__axi_rvalid));
        tracep->fullBit(oldp+121,(vlSelf->top__DOT__axi__DOT__axi_wready));
        tracep->fullBit(oldp+122,(vlSelf->top__DOT__axi__DOT__axi_bvalid));
        tracep->fullIData(oldp+123,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                      ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_574)
                                          : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_574)
                                              : ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_574)
                                                  : 0U)))
                                      : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_574)
                                          : ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_574)
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_574)
                                                  : 0U))))),32);
        tracep->fullCData(oldp+124,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                      ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                          ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                                          : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                              ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                                              : ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                  ? (IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                  : 0U)))
                                      : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                          ? (IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                          : ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                              ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                                                  : 0U))))),8);
        tracep->fullBit(oldp+125,(vlSelf->top__DOT__arbiter_io_axi_out_arvalid));
        tracep->fullBit(oldp+126,(vlSelf->top__DOT__arbiter_io_axi_out_rready));
        tracep->fullIData(oldp+127,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullCData(oldp+128,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullBit(oldp+129,(vlSelf->top__DOT__arbiter_io_axi_out_awvalid));
        tracep->fullQData(oldp+130,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullCData(oldp+132,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullBit(oldp+133,(vlSelf->top__DOT__arbiter_io_axi_out_wvalid));
        tracep->fullBit(oldp+134,(vlSelf->top__DOT__arbiter_io_axi_out_bready));
        tracep->fullIData(oldp+135,((2U == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))),32);
        tracep->fullIData(oldp+136,((0x3dU == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))),32);
        tracep->fullQData(oldp+137,(((IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)
                                      ? vlSelf->top__DOT__WBU__DOT__ws_pc
                                      : ((IData)(vlSelf->top__DOT__LSU__DOT__ms_valid)
                                          ? vlSelf->top__DOT__LSU__DOT__ms_pc
                                          : ((IData)(vlSelf->top__DOT__EXU__DOT__es_valid)
                                              ? vlSelf->top__DOT__EXU__DOT__es_pc
                                              : ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)
                                                  ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                                  : vlSelf->top__DOT__IFU__DOT__fs_pc))))),64);
        tracep->fullBit(oldp+139,(vlSelf->top__DOT__diff_step));
        tracep->fullQData(oldp+140,(vlSelf->top__DOT__Register__DOT__Reg[0]),64);
        tracep->fullQData(oldp+142,(vlSelf->top__DOT__Register__DOT__Reg[1]),64);
        tracep->fullQData(oldp+144,(vlSelf->top__DOT__Register__DOT__Reg[2]),64);
        tracep->fullQData(oldp+146,(vlSelf->top__DOT__Register__DOT__Reg[3]),64);
        tracep->fullQData(oldp+148,(vlSelf->top__DOT__Register__DOT__Reg[4]),64);
        tracep->fullQData(oldp+150,(vlSelf->top__DOT__Register__DOT__Reg[5]),64);
        tracep->fullQData(oldp+152,(vlSelf->top__DOT__Register__DOT__Reg[6]),64);
        tracep->fullQData(oldp+154,(vlSelf->top__DOT__Register__DOT__Reg[7]),64);
        tracep->fullQData(oldp+156,(vlSelf->top__DOT__Register__DOT__Reg[8]),64);
        tracep->fullQData(oldp+158,(vlSelf->top__DOT__Register__DOT__Reg[9]),64);
        tracep->fullQData(oldp+160,(vlSelf->top__DOT__Register__DOT__Reg[10]),64);
        tracep->fullQData(oldp+162,(vlSelf->top__DOT__Register__DOT__Reg[11]),64);
        tracep->fullQData(oldp+164,(vlSelf->top__DOT__Register__DOT__Reg[12]),64);
        tracep->fullQData(oldp+166,(vlSelf->top__DOT__Register__DOT__Reg[13]),64);
        tracep->fullQData(oldp+168,(vlSelf->top__DOT__Register__DOT__Reg[14]),64);
        tracep->fullQData(oldp+170,(vlSelf->top__DOT__Register__DOT__Reg[15]),64);
        tracep->fullQData(oldp+172,(vlSelf->top__DOT__Register__DOT__Reg[16]),64);
        tracep->fullQData(oldp+174,(vlSelf->top__DOT__Register__DOT__Reg[17]),64);
        tracep->fullQData(oldp+176,(vlSelf->top__DOT__Register__DOT__Reg[18]),64);
        tracep->fullQData(oldp+178,(vlSelf->top__DOT__Register__DOT__Reg[19]),64);
        tracep->fullQData(oldp+180,(vlSelf->top__DOT__Register__DOT__Reg[20]),64);
        tracep->fullQData(oldp+182,(vlSelf->top__DOT__Register__DOT__Reg[21]),64);
        tracep->fullQData(oldp+184,(vlSelf->top__DOT__Register__DOT__Reg[22]),64);
        tracep->fullQData(oldp+186,(vlSelf->top__DOT__Register__DOT__Reg[23]),64);
        tracep->fullQData(oldp+188,(vlSelf->top__DOT__Register__DOT__Reg[24]),64);
        tracep->fullQData(oldp+190,(vlSelf->top__DOT__Register__DOT__Reg[25]),64);
        tracep->fullQData(oldp+192,(vlSelf->top__DOT__Register__DOT__Reg[26]),64);
        tracep->fullQData(oldp+194,(vlSelf->top__DOT__Register__DOT__Reg[27]),64);
        tracep->fullQData(oldp+196,(vlSelf->top__DOT__Register__DOT__Reg[28]),64);
        tracep->fullQData(oldp+198,(vlSelf->top__DOT__Register__DOT__Reg[29]),64);
        tracep->fullQData(oldp+200,(vlSelf->top__DOT__Register__DOT__Reg[30]),64);
        tracep->fullQData(oldp+202,(vlSelf->top__DOT__Register__DOT__Reg[31]),64);
        tracep->fullQData(oldp+204,(vlSelf->top__DOT__Register__DOT__Reg
                                    [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+206,(vlSelf->top__DOT__Register__DOT__Reg
                                    [vlSelf->top__DOT__IDU_io_raddr2]),64);
        tracep->fullQData(oldp+208,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0U]),64);
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__Register__DOT__Reg
                                    [1U]),64);
        tracep->fullQData(oldp+212,(vlSelf->top__DOT__Register__DOT__Reg
                                    [2U]),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__Register__DOT__Reg
                                    [3U]),64);
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__Register__DOT__Reg
                                    [4U]),64);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__Register__DOT__Reg
                                    [5U]),64);
        tracep->fullQData(oldp+220,(vlSelf->top__DOT__Register__DOT__Reg
                                    [6U]),64);
        tracep->fullQData(oldp+222,(vlSelf->top__DOT__Register__DOT__Reg
                                    [7U]),64);
        tracep->fullQData(oldp+224,(vlSelf->top__DOT__Register__DOT__Reg
                                    [8U]),64);
        tracep->fullQData(oldp+226,(vlSelf->top__DOT__Register__DOT__Reg
                                    [9U]),64);
        tracep->fullQData(oldp+228,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xaU]),64);
        tracep->fullQData(oldp+230,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xbU]),64);
        tracep->fullQData(oldp+232,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xcU]),64);
        tracep->fullQData(oldp+234,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xdU]),64);
        tracep->fullQData(oldp+236,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xeU]),64);
        tracep->fullQData(oldp+238,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xfU]),64);
        tracep->fullQData(oldp+240,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x10U]),64);
        tracep->fullQData(oldp+242,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x11U]),64);
        tracep->fullQData(oldp+244,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x12U]),64);
        tracep->fullQData(oldp+246,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x13U]),64);
        tracep->fullQData(oldp+248,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x14U]),64);
        tracep->fullQData(oldp+250,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x15U]),64);
        tracep->fullQData(oldp+252,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x16U]),64);
        tracep->fullQData(oldp+254,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x17U]),64);
        tracep->fullQData(oldp+256,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x18U]),64);
        tracep->fullQData(oldp+258,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x19U]),64);
        tracep->fullQData(oldp+260,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1aU]),64);
        tracep->fullQData(oldp+262,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1bU]),64);
        tracep->fullQData(oldp+264,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1cU]),64);
        tracep->fullQData(oldp+266,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1dU]),64);
        tracep->fullQData(oldp+268,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1eU]),64);
        tracep->fullQData(oldp+270,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1fU]),64);
        tracep->fullBit(oldp+272,((((IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we) 
                                    & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)) 
                                   & (0U != (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_dst)))));
        tracep->fullQData(oldp+273,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0]),64);
        tracep->fullQData(oldp+275,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[1]),64);
        tracep->fullQData(oldp+277,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[2]),64);
        tracep->fullQData(oldp+279,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[3]),64);
        tracep->fullQData(oldp+281,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[4]),64);
        tracep->fullQData(oldp+283,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[5]),64);
        tracep->fullQData(oldp+285,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[6]),64);
        tracep->fullQData(oldp+287,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[7]),64);
        tracep->fullQData(oldp+289,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[8]),64);
        tracep->fullQData(oldp+291,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[9]),64);
        tracep->fullQData(oldp+293,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[10]),64);
        tracep->fullQData(oldp+295,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[11]),64);
        tracep->fullQData(oldp+297,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[12]),64);
        tracep->fullQData(oldp+299,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[13]),64);
        tracep->fullQData(oldp+301,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[14]),64);
        tracep->fullQData(oldp+303,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[15]),64);
        tracep->fullQData(oldp+305,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[16]),64);
        tracep->fullQData(oldp+307,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[17]),64);
        tracep->fullQData(oldp+309,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[18]),64);
        tracep->fullQData(oldp+311,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[19]),64);
        tracep->fullQData(oldp+313,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[20]),64);
        tracep->fullQData(oldp+315,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[21]),64);
        tracep->fullQData(oldp+317,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[22]),64);
        tracep->fullQData(oldp+319,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[23]),64);
        tracep->fullQData(oldp+321,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[24]),64);
        tracep->fullQData(oldp+323,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[25]),64);
        tracep->fullQData(oldp+325,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[26]),64);
        tracep->fullQData(oldp+327,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[27]),64);
        tracep->fullQData(oldp+329,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[28]),64);
        tracep->fullQData(oldp+331,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[29]),64);
        tracep->fullQData(oldp+333,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[30]),64);
        tracep->fullQData(oldp+335,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[31]),64);
        tracep->fullQData(oldp+337,(vlSelf->top__DOT__IFU__DOT__br_target),64);
        tracep->fullQData(oldp+339,(vlSelf->top__DOT__IFU__DOT__fs_pc_next),64);
        tracep->fullBit(oldp+341,(vlSelf->top__DOT__IFU__DOT__cache_init));
        tracep->fullQData(oldp+342,((4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc)),64);
        tracep->fullQData(oldp+344,(((IData)(vlSelf->top__DOT__IDU_io_br_taken)
                                      ? ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)
                                          ? vlSelf->top__DOT__IDU_io_br_target
                                          : vlSelf->top__DOT__IFU__DOT__br_target)
                                      : (4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc))),64);
        tracep->fullBit(oldp+346,(((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
                                   & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
        tracep->fullBit(oldp+347,((((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
                                    >> 1U) & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
        tracep->fullCData(oldp+348,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                      ? 1U : ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                               ? (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)
                                               : 0U))),2);
        tracep->fullQData(oldp+349,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
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
        tracep->fullQData(oldp+351,(((IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2)
                                      ? (((QData)((IData)(
                                                          vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])))
                                      : vlSelf->top__DOT__IDU__DOT___rdata2_T_1)),64);
        tracep->fullCData(oldp+353,(((2U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                      ? 0U : ((0x3eU 
                                               == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))
                                               ? 1U
                                               : (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)))),2);
        tracep->fullQData(oldp+354,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data),64);
        tracep->fullIData(oldp+356,(vlSelf->top__DOT__IDU__DOT__inst),32);
        tracep->fullBit(oldp+357,(vlSelf->top__DOT__IDU__DOT__br_taken_cancel));
        tracep->fullBit(oldp+358,(vlSelf->top__DOT__IDU__DOT__src1_is_pc));
        tracep->fullIData(oldp+359,(vlSelf->top__DOT__IDU__DOT___inst_type_T_188),32);
        tracep->fullCData(oldp+360,(vlSelf->top__DOT__IDU__DOT__csr_write),2);
        tracep->fullBit(oldp+361,(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1));
        tracep->fullBit(oldp+362,(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1));
        tracep->fullBit(oldp+363,(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs1));
        tracep->fullBit(oldp+364,(vlSelf->top__DOT__IDU__DOT__src2_is_imm));
        tracep->fullCData(oldp+365,(vlSelf->top__DOT__IDU__DOT__rs2),5);
        tracep->fullBit(oldp+366,(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2));
        tracep->fullBit(oldp+367,(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs2));
        tracep->fullBit(oldp+368,(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs2));
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
        VL_EXTEND_WQ(127,64, __Vtemp279, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
        VL_SHIFTL_WWI(127,127,6, __Vtemp280, __Vtemp279, 
                      (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
        __Vtemp281[0U] = __Vtemp280[0U];
        __Vtemp281[1U] = __Vtemp280[1U];
        __Vtemp281[2U] = __Vtemp280[2U];
        __Vtemp281[3U] = (0x7fffffffU & __Vtemp280[3U]);
        tracep->fullWData(oldp+427,(__Vtemp281),127);
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
        VL_EXTEND_WQ(65,64, __Vtemp285, (~ (((QData)((IData)(
                                                             vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
        VL_EXTEND_WQ(65,64, __Vtemp286, (~ (((QData)((IData)(
                                                             vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
        VL_EXTEND_WQ(65,64, __Vtemp290, ((2U == (7U 
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
        __Vtemp294[1U] = ((4U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
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
                               : __Vtemp290[1U]));
        __Vtemp301[2U] = ((7U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                           ? 0U : (1U & ((6U == (7U 
                                                 & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                          ? __Vtemp285[2U]
                                          : ((5U == 
                                              (7U & 
                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                              ? __Vtemp286[2U]
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
                                                  __Vtemp290[2U]))))));
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
                                                        __Vtemp285[1U]
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (7U 
                                                           & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                          ? 
                                                         __Vtemp286[1U]
                                                          : 
                                                         __Vtemp294[1U]))))) 
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
                                                                    __Vtemp285[0U]
                                                                     : 
                                                                    ((5U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                                      ? 
                                                                     __Vtemp286[0U]
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
                                                                       __Vtemp290[0U]))))))))),64);
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
        __Vtemp302[0U] = (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32);
        __Vtemp302[1U] = (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                  >> 0x20U));
        __Vtemp302[2U] = (IData)(((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                 >> 0x3fU)))
                                   ? 0xffffffffffffffffULL
                                   : 0ULL));
        __Vtemp302[3U] = (IData)((((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                  >> 0x3fU)))
                                    ? 0xffffffffffffffffULL
                                    : 0ULL) >> 0x20U));
        tracep->fullWData(oldp+470,(__Vtemp302),128);
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
        VL_EXTEND_WQ(65,64, __Vtemp303, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                          ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)
                                              ? (1ULL 
                                                 + 
                                                 (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s))
                                              : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s)
                                          : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                              ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                              : vlSelf->top__DOT__EXU__DOT__src2_value)));
        tracep->fullWData(oldp+491,(__Vtemp303),65);
        tracep->fullWData(oldp+494,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand),128);
        tracep->fullBit(oldp+498,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start));
        tracep->fullQData(oldp+499,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient),64);
        tracep->fullIData(oldp+501,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num),32);
        VL_EXTEND_WQ(128,64, __Vtemp304, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                           ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)
                                               ? (1ULL 
                                                  + 
                                                  (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s))
                                               : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s)
                                           : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                               ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                               : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)));
        tracep->fullWData(oldp+502,(__Vtemp304),128);
        tracep->fullWData(oldp+506,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res),65);
        __Vtemp305[0U] = 0U;
        __Vtemp305[1U] = (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                          << 0x1fU);
        __Vtemp305[2U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                           >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                     << 0x1fU));
        __Vtemp305[3U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                           >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                     << 0x1fU));
        tracep->fullWData(oldp+509,(__Vtemp305),128);
        if ((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])) {
            __Vtemp311[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U];
            __Vtemp311[1U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U];
            __Vtemp311[2U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U];
            __Vtemp311[3U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U];
        } else {
            __Vtemp311[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U];
            __Vtemp311[1U] = ((0x7fffffffU & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U]) 
                              | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                                 << 0x1fU));
            __Vtemp311[2U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                               >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                         << 0x1fU));
            __Vtemp311[3U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                               >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                         << 0x1fU));
        }
        tracep->fullWData(oldp+513,(__Vtemp311),128);
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
                                                    >> 4U))))),6);
        __Vtemp312[0U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))))][0U];
        __Vtemp312[1U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))))][1U];
        __Vtemp312[2U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))))][2U];
        __Vtemp312[3U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))))][3U];
        tracep->fullWData(oldp+529,(__Vtemp312),128);
        __Vtemp313[0U] = (IData)(vlSelf->top__DOT__i_cache__DOT__receive_data_0);
        __Vtemp313[1U] = (IData)((vlSelf->top__DOT__i_cache__DOT__receive_data_0 
                                  >> 0x20U));
        __Vtemp313[2U] = (IData)(vlSelf->top__DOT__i_cache__DOT__receive_data_1);
        __Vtemp313[3U] = (IData)((vlSelf->top__DOT__i_cache__DOT__receive_data_1 
                                  >> 0x20U));
        tracep->fullWData(oldp+533,(__Vtemp313),128);
        tracep->fullCData(oldp+537,((0x3fU & (IData)(vlSelf->top__DOT__i_cache__DOT__unvalidIndex))),6);
        tracep->fullBit(oldp+538,(((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                   & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_368))));
        tracep->fullCData(oldp+539,((0x3fU & (IData)(vlSelf->top__DOT__i_cache__DOT___replaceIndex_T_2))),6);
        tracep->fullBit(oldp+540,(((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                   & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_392))));
        tracep->fullCData(oldp+541,((0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                             >> 4U))),6);
        tracep->fullBit(oldp+542,(vlSelf->top__DOT__i_cache__DOT__validMem_valid_0_MPORT_data));
        tracep->fullCData(oldp+543,((0x3fU & ((IData)(0x10U) 
                                              + (0xfU 
                                                 & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                    >> 4U))))),6);
        tracep->fullBit(oldp+544,(vlSelf->top__DOT__i_cache__DOT__validMem_valid_1_MPORT_data));
        tracep->fullCData(oldp+545,((0x3fU & ((IData)(0x20U) 
                                              + (0xfU 
                                                 & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                    >> 4U))))),6);
        tracep->fullBit(oldp+546,(vlSelf->top__DOT__i_cache__DOT__validMem_valid_2_MPORT_data));
        tracep->fullCData(oldp+547,((0x3fU & ((IData)(0x30U) 
                                              + (0xfU 
                                                 & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                    >> 4U))))),6);
        tracep->fullBit(oldp+548,(vlSelf->top__DOT__i_cache__DOT__validMem_valid_3_MPORT_data));
        tracep->fullBit(oldp+549,(((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                   & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))));
        tracep->fullIData(oldp+550,(vlSelf->top__DOT__i_cache__DOT__tagMem
                                    [(0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                              >> 4U))]),32);
        tracep->fullIData(oldp+551,(vlSelf->top__DOT__i_cache__DOT__tagMem
                                    [(0x3fU & ((IData)(0x10U) 
                                               + (0xfU 
                                                  & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                     >> 4U))))]),32);
        tracep->fullIData(oldp+552,(vlSelf->top__DOT__i_cache__DOT__tagMem
                                    [(0x3fU & ((IData)(0x20U) 
                                               + (0xfU 
                                                  & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                     >> 4U))))]),32);
        tracep->fullIData(oldp+553,(vlSelf->top__DOT__i_cache__DOT__tagMem
                                    [(0x3fU & ((IData)(0x30U) 
                                               + (0xfU 
                                                  & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                     >> 4U))))]),32);
        tracep->fullIData(oldp+554,((vlSelf->top__DOT__i_cache__DOT__addr 
                                     >> 8U)),32);
        tracep->fullIData(oldp+555,(vlSelf->top__DOT__i_cache__DOT__addr),32);
        tracep->fullCData(oldp+556,((0xfU & vlSelf->top__DOT__i_cache__DOT__addr)),4);
        tracep->fullCData(oldp+557,((0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                             >> 4U))),4);
        tracep->fullIData(oldp+558,((vlSelf->top__DOT__i_cache__DOT__addr 
                                     >> 8U)),24);
        tracep->fullCData(oldp+559,((0x78U & (vlSelf->top__DOT__i_cache__DOT__addr 
                                              << 3U))),7);
        tracep->fullBit(oldp+560,(vlSelf->top__DOT__i_cache__DOT__allvalid));
        tracep->fullCData(oldp+561,(vlSelf->top__DOT__i_cache__DOT__foundUnvalidIndex),2);
        tracep->fullSData(oldp+562,(vlSelf->top__DOT__i_cache__DOT__unvalidIndex),9);
        tracep->fullBit(oldp+563,(vlSelf->top__DOT__i_cache__DOT__tagMatch_0));
        tracep->fullBit(oldp+564,(vlSelf->top__DOT__i_cache__DOT__tagMatch_1));
        tracep->fullBit(oldp+565,(vlSelf->top__DOT__i_cache__DOT__tagMatch_2));
        tracep->fullBit(oldp+566,(vlSelf->top__DOT__i_cache__DOT__tagMatch_3));
        tracep->fullBit(oldp+567,(vlSelf->top__DOT__i_cache__DOT__anyMatch));
        tracep->fullCData(oldp+568,(((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                                      ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                               ? 1U
                                               : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U))))),2);
        tracep->fullSData(oldp+569,((0x1ffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
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
                                                     >> 4U))))),9);
        tracep->fullQData(oldp+570,(vlSelf->top__DOT__i_cache__DOT__receive_data_0),64);
        tracep->fullQData(oldp+572,(vlSelf->top__DOT__i_cache__DOT__receive_data_1),64);
        tracep->fullCData(oldp+574,(vlSelf->top__DOT__i_cache__DOT__receive_num),3);
        tracep->fullCData(oldp+575,(vlSelf->top__DOT__i_cache__DOT__quene_0),8);
        tracep->fullCData(oldp+576,(vlSelf->top__DOT__i_cache__DOT__quene_1),8);
        tracep->fullCData(oldp+577,(vlSelf->top__DOT__i_cache__DOT__quene_2),8);
        tracep->fullCData(oldp+578,(vlSelf->top__DOT__i_cache__DOT__quene_3),8);
        tracep->fullCData(oldp+579,(vlSelf->top__DOT__i_cache__DOT__quene_4),8);
        tracep->fullCData(oldp+580,(vlSelf->top__DOT__i_cache__DOT__quene_5),8);
        tracep->fullCData(oldp+581,(vlSelf->top__DOT__i_cache__DOT__quene_6),8);
        tracep->fullCData(oldp+582,(vlSelf->top__DOT__i_cache__DOT__quene_7),8);
        tracep->fullCData(oldp+583,(vlSelf->top__DOT__i_cache__DOT__quene_8),8);
        tracep->fullCData(oldp+584,(vlSelf->top__DOT__i_cache__DOT__quene_9),8);
        tracep->fullCData(oldp+585,(vlSelf->top__DOT__i_cache__DOT__quene_10),8);
        tracep->fullCData(oldp+586,(vlSelf->top__DOT__i_cache__DOT__quene_11),8);
        tracep->fullCData(oldp+587,(vlSelf->top__DOT__i_cache__DOT__quene_12),8);
        tracep->fullCData(oldp+588,(vlSelf->top__DOT__i_cache__DOT__quene_13),8);
        tracep->fullCData(oldp+589,(vlSelf->top__DOT__i_cache__DOT__quene_14),8);
        tracep->fullCData(oldp+590,(vlSelf->top__DOT__i_cache__DOT__quene_15),8);
        tracep->fullCData(oldp+591,((3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_15) 
                                           >> 6U))),2);
        tracep->fullCData(oldp+592,(vlSelf->top__DOT__i_cache__DOT__state),3);
        tracep->fullIData(oldp+593,(vlSelf->top__DOT__i_cache__DOT___replaceIndex_T_2),32);
        tracep->fullBit(oldp+594,(((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                   & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_329))));
        tracep->fullCData(oldp+595,((0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))),6);
        __Vtemp314[0U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0U];
        __Vtemp314[1U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][1U];
        __Vtemp314[2U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][2U];
        __Vtemp314[3U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][3U];
        __Vtemp314[4U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][4U];
        __Vtemp314[5U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][5U];
        __Vtemp314[6U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][6U];
        __Vtemp314[7U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][7U];
        tracep->fullWData(oldp+596,(__Vtemp314),256);
        tracep->fullBit(oldp+604,(((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                   & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_373))));
        tracep->fullCData(oldp+605,((0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))),6);
        __Vtemp315[0U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0U];
        __Vtemp315[1U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][1U];
        __Vtemp315[2U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][2U];
        __Vtemp315[3U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][3U];
        __Vtemp315[4U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][4U];
        __Vtemp315[5U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][5U];
        __Vtemp315[6U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][6U];
        __Vtemp315[7U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][7U];
        tracep->fullWData(oldp+606,(__Vtemp315),256);
        tracep->fullBit(oldp+614,((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))));
        VL_EXTEND_WQ(319,64, __Vtemp316, (vlSelf->top__DOT__LSU__DOT__store_data 
                                          & vlSelf->top__DOT__d_cache__DOT__wmask));
        VL_SHIFTL_WWI(319,319,8, __Vtemp317, __Vtemp316, 
                      (0xf8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                << 3U)));
        VL_EXTEND_WQ(319,64, __Vtemp321, vlSelf->top__DOT__d_cache__DOT__wmask);
        VL_SHIFTL_WWI(319,319,8, __Vtemp322, __Vtemp321, 
                      (0xf8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                << 3U)));
        __Vtemp327[0U] = ((Vtop__ConstPool__CONST_bc9d891d_0[0U] 
                           & __Vtemp317[0U]) | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                                [(0x3fU 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0U] 
                                                & (~ 
                                                   (Vtop__ConstPool__CONST_bc9d891d_0[0U] 
                                                    & __Vtemp322[0U]))));
        __Vtemp327[1U] = ((Vtop__ConstPool__CONST_bc9d891d_0[1U] 
                           & __Vtemp317[1U]) | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                                [(0x3fU 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][1U] 
                                                & (~ 
                                                   (Vtop__ConstPool__CONST_bc9d891d_0[1U] 
                                                    & __Vtemp322[1U]))));
        __Vtemp327[2U] = ((Vtop__ConstPool__CONST_bc9d891d_0[2U] 
                           & __Vtemp317[2U]) | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                                [(0x3fU 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][2U] 
                                                & (~ 
                                                   (Vtop__ConstPool__CONST_bc9d891d_0[2U] 
                                                    & __Vtemp322[2U]))));
        __Vtemp327[3U] = ((Vtop__ConstPool__CONST_bc9d891d_0[3U] 
                           & __Vtemp317[3U]) | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                                [(0x3fU 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][3U] 
                                                & (~ 
                                                   (Vtop__ConstPool__CONST_bc9d891d_0[3U] 
                                                    & __Vtemp322[3U]))));
        __Vtemp327[4U] = ((Vtop__ConstPool__CONST_bc9d891d_0[4U] 
                           & __Vtemp317[4U]) | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                                [(0x3fU 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][4U] 
                                                & (~ 
                                                   (Vtop__ConstPool__CONST_bc9d891d_0[4U] 
                                                    & __Vtemp322[4U]))));
        __Vtemp327[5U] = ((Vtop__ConstPool__CONST_bc9d891d_0[5U] 
                           & __Vtemp317[5U]) | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                                [(0x3fU 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][5U] 
                                                & (~ 
                                                   (Vtop__ConstPool__CONST_bc9d891d_0[5U] 
                                                    & __Vtemp322[5U]))));
        __Vtemp327[6U] = ((Vtop__ConstPool__CONST_bc9d891d_0[6U] 
                           & __Vtemp317[6U]) | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                                [(0x3fU 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][6U] 
                                                & (~ 
                                                   (Vtop__ConstPool__CONST_bc9d891d_0[6U] 
                                                    & __Vtemp322[6U]))));
        __Vtemp327[7U] = ((Vtop__ConstPool__CONST_bc9d891d_0[7U] 
                           & __Vtemp317[7U]) | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                                [(0x3fU 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][7U] 
                                                & (~ 
                                                   (Vtop__ConstPool__CONST_bc9d891d_0[7U] 
                                                    & __Vtemp322[7U]))));
        tracep->fullWData(oldp+615,(__Vtemp327),256);
        __Vtemp329[0U] = vlSelf->top__DOT__d_cache__DOT__lo[0U];
        __Vtemp329[1U] = vlSelf->top__DOT__d_cache__DOT__lo[1U];
        __Vtemp329[2U] = vlSelf->top__DOT__d_cache__DOT__lo[2U];
        __Vtemp329[3U] = vlSelf->top__DOT__d_cache__DOT__lo[3U];
        __Vtemp329[4U] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_2);
        __Vtemp329[5U] = (IData)((vlSelf->top__DOT__d_cache__DOT__receive_data_2 
                                  >> 0x20U));
        __Vtemp329[6U] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_3);
        __Vtemp329[7U] = (IData)((vlSelf->top__DOT__d_cache__DOT__receive_data_3 
                                  >> 0x20U));
        tracep->fullWData(oldp+623,(__Vtemp329),256);
        tracep->fullCData(oldp+631,((0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__unvalidIndex))),6);
        tracep->fullBit(oldp+632,(((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                   & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_340))));
        VL_EXTEND_WW(256,128, __Vtemp330, vlSelf->top__DOT__d_cache__DOT__lo);
        tracep->fullWData(oldp+633,(__Vtemp330),256);
        tracep->fullBit(oldp+641,(((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                   & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_364))));
        tracep->fullCData(oldp+642,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__LSU__DOT__maddr 
                                                     >> 5U)))),6);
        tracep->fullBit(oldp+643,(vlSelf->top__DOT__d_cache__DOT__validMem_valid_0_MPORT_data));
        tracep->fullCData(oldp+644,((0x3fU & ((IData)(0x10U) 
                                              + (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 5U)))))),6);
        tracep->fullBit(oldp+645,(vlSelf->top__DOT__d_cache__DOT__validMem_valid_1_MPORT_data));
        tracep->fullCData(oldp+646,((0x3fU & ((IData)(0x20U) 
                                              + (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 5U)))))),6);
        tracep->fullBit(oldp+647,(vlSelf->top__DOT__d_cache__DOT__validMem_valid_2_MPORT_data));
        tracep->fullCData(oldp+648,((0x3fU & ((IData)(0x30U) 
                                              + (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 5U)))))),6);
        tracep->fullBit(oldp+649,(vlSelf->top__DOT__d_cache__DOT__validMem_valid_3_MPORT_data));
        tracep->fullIData(oldp+650,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                    [(0xfU & (IData)(
                                                     (vlSelf->top__DOT__LSU__DOT__maddr 
                                                      >> 5U)))]),32);
        tracep->fullIData(oldp+651,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                    [(0x3fU & ((IData)(0x10U) 
                                               + (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 5U)))))]),32);
        tracep->fullIData(oldp+652,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                    [(0x3fU & ((IData)(0x20U) 
                                               + (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 5U)))))]),32);
        tracep->fullIData(oldp+653,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                    [(0x3fU & ((IData)(0x30U) 
                                               + (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 5U)))))]),32);
        tracep->fullIData(oldp+654,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                    [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))]),32);
        tracep->fullIData(oldp+655,((0x7fffffU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 9U)))),32);
        tracep->fullBit(oldp+656,(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data));
        tracep->fullCData(oldp+657,((0x1fU & (IData)(vlSelf->top__DOT__LSU__DOT__maddr))),5);
        tracep->fullCData(oldp+658,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__LSU__DOT__maddr 
                                                     >> 5U)))),4);
        tracep->fullIData(oldp+659,((0x7fffffU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 9U)))),23);
        tracep->fullBit(oldp+660,(vlSelf->top__DOT__d_cache__DOT__allvalid));
        tracep->fullCData(oldp+661,(vlSelf->top__DOT__d_cache__DOT__foundUnvalidIndex),2);
        tracep->fullSData(oldp+662,(vlSelf->top__DOT__d_cache__DOT__unvalidIndex),9);
        tracep->fullBit(oldp+663,(vlSelf->top__DOT__d_cache__DOT__tagMatch_0));
        tracep->fullBit(oldp+664,(vlSelf->top__DOT__d_cache__DOT__tagMatch_1));
        tracep->fullBit(oldp+665,(vlSelf->top__DOT__d_cache__DOT__tagMatch_2));
        tracep->fullBit(oldp+666,(vlSelf->top__DOT__d_cache__DOT__tagMatch_3));
        tracep->fullBit(oldp+667,(vlSelf->top__DOT__d_cache__DOT__anyMatch));
        tracep->fullCData(oldp+668,(((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_0)
                                      ? 0U : ((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_1)
                                               ? 1U
                                               : ((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_2)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U))))),2);
        tracep->fullSData(oldp+669,(vlSelf->top__DOT__d_cache__DOT__tagIndex),9);
        tracep->fullWData(oldp+670,(vlSelf->top__DOT__d_cache__DOT__write_back_data),256);
        tracep->fullIData(oldp+678,(vlSelf->top__DOT__d_cache__DOT__write_back_addr),32);
        tracep->fullQData(oldp+679,(vlSelf->top__DOT__d_cache__DOT__receive_data_0),64);
        tracep->fullQData(oldp+681,(vlSelf->top__DOT__d_cache__DOT__receive_data_1),64);
        tracep->fullQData(oldp+683,(vlSelf->top__DOT__d_cache__DOT__receive_data_2),64);
        tracep->fullQData(oldp+685,(vlSelf->top__DOT__d_cache__DOT__receive_data_3),64);
        tracep->fullCData(oldp+687,(vlSelf->top__DOT__d_cache__DOT__receive_num),3);
        tracep->fullCData(oldp+688,(vlSelf->top__DOT__d_cache__DOT__quene_0),8);
        tracep->fullCData(oldp+689,(vlSelf->top__DOT__d_cache__DOT__quene_1),8);
        tracep->fullCData(oldp+690,(vlSelf->top__DOT__d_cache__DOT__quene_2),8);
        tracep->fullCData(oldp+691,(vlSelf->top__DOT__d_cache__DOT__quene_3),8);
        tracep->fullCData(oldp+692,(vlSelf->top__DOT__d_cache__DOT__quene_4),8);
        tracep->fullCData(oldp+693,(vlSelf->top__DOT__d_cache__DOT__quene_5),8);
        tracep->fullCData(oldp+694,(vlSelf->top__DOT__d_cache__DOT__quene_6),8);
        tracep->fullCData(oldp+695,(vlSelf->top__DOT__d_cache__DOT__quene_7),8);
        tracep->fullCData(oldp+696,(vlSelf->top__DOT__d_cache__DOT__quene_8),8);
        tracep->fullCData(oldp+697,(vlSelf->top__DOT__d_cache__DOT__quene_9),8);
        tracep->fullCData(oldp+698,(vlSelf->top__DOT__d_cache__DOT__quene_10),8);
        tracep->fullCData(oldp+699,(vlSelf->top__DOT__d_cache__DOT__quene_11),8);
        tracep->fullCData(oldp+700,(vlSelf->top__DOT__d_cache__DOT__quene_12),8);
        tracep->fullCData(oldp+701,(vlSelf->top__DOT__d_cache__DOT__quene_13),8);
        tracep->fullCData(oldp+702,(vlSelf->top__DOT__d_cache__DOT__quene_14),8);
        tracep->fullCData(oldp+703,(vlSelf->top__DOT__d_cache__DOT__quene_15),8);
        tracep->fullCData(oldp+704,((3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_15) 
                                           >> 6U))),2);
        tracep->fullCData(oldp+705,((0xf8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                              << 3U))),8);
        tracep->fullQData(oldp+706,(vlSelf->top__DOT__d_cache__DOT__wmask),64);
        tracep->fullCData(oldp+708,(vlSelf->top__DOT__d_cache__DOT__state),4);
        tracep->fullWData(oldp+709,(vlSelf->top__DOT__d_cache__DOT__lo),128);
        __Vtemp331[0U] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_2);
        __Vtemp331[1U] = (IData)((vlSelf->top__DOT__d_cache__DOT__receive_data_2 
                                  >> 0x20U));
        __Vtemp331[2U] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_3);
        __Vtemp331[3U] = (IData)((vlSelf->top__DOT__d_cache__DOT__receive_data_3 
                                  >> 0x20U));
        tracep->fullWData(oldp+713,(__Vtemp331),128);
        tracep->fullIData(oldp+717,(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2),32);
        tracep->fullQData(oldp+718,(vlSelf->top__DOT__axi__DOT__araddr),64);
        tracep->fullQData(oldp+720,(vlSelf->top__DOT__axi__DOT__awaddr),64);
        tracep->fullCData(oldp+722,(vlSelf->top__DOT__axi__DOT__arlen),8);
        tracep->fullCData(oldp+723,(vlSelf->top__DOT__axi__DOT__awlen),8);
        tracep->fullCData(oldp+724,(vlSelf->top__DOT__axi__DOT__state),3);
        tracep->fullBit(oldp+725,(vlSelf->clock));
        tracep->fullBit(oldp+726,(vlSelf->reset));
        tracep->fullIData(oldp+727,(vlSelf->io_inst),32);
        tracep->fullQData(oldp+728,(vlSelf->io_pc),64);
        tracep->fullBit(oldp+730,(vlSelf->io_step));
        tracep->fullBit(oldp+731,(1U));
        tracep->fullCData(oldp+732,(0U),5);
        tracep->fullCData(oldp+733,(1U),5);
        tracep->fullCData(oldp+734,(2U),5);
        tracep->fullCData(oldp+735,(3U),5);
        tracep->fullCData(oldp+736,(4U),5);
        tracep->fullCData(oldp+737,(5U),5);
        tracep->fullCData(oldp+738,(6U),5);
        tracep->fullCData(oldp+739,(7U),5);
        tracep->fullCData(oldp+740,(8U),5);
        tracep->fullCData(oldp+741,(9U),5);
        tracep->fullCData(oldp+742,(0xaU),5);
        tracep->fullCData(oldp+743,(0xbU),5);
        tracep->fullCData(oldp+744,(0xcU),5);
        tracep->fullCData(oldp+745,(0xdU),5);
        tracep->fullCData(oldp+746,(0xeU),5);
        tracep->fullCData(oldp+747,(0xfU),5);
        tracep->fullCData(oldp+748,(0x10U),5);
        tracep->fullCData(oldp+749,(0x11U),5);
        tracep->fullCData(oldp+750,(0x12U),5);
        tracep->fullCData(oldp+751,(0x13U),5);
        tracep->fullCData(oldp+752,(0x14U),5);
        tracep->fullCData(oldp+753,(0x15U),5);
        tracep->fullCData(oldp+754,(0x16U),5);
        tracep->fullCData(oldp+755,(0x17U),5);
        tracep->fullCData(oldp+756,(0x18U),5);
        tracep->fullCData(oldp+757,(0x19U),5);
        tracep->fullCData(oldp+758,(0x1aU),5);
        tracep->fullCData(oldp+759,(0x1bU),5);
        tracep->fullCData(oldp+760,(0x1cU),5);
        tracep->fullCData(oldp+761,(0x1dU),5);
        tracep->fullCData(oldp+762,(0x1eU),5);
        tracep->fullCData(oldp+763,(0x1fU),5);
        tracep->fullCData(oldp+764,(3U),2);
        tracep->fullBit(oldp+765,(0U));
        tracep->fullCData(oldp+766,(0U),6);
        tracep->fullCData(oldp+767,(1U),6);
        tracep->fullCData(oldp+768,(2U),6);
        tracep->fullCData(oldp+769,(3U),6);
        tracep->fullCData(oldp+770,(4U),6);
        tracep->fullCData(oldp+771,(5U),6);
        tracep->fullCData(oldp+772,(6U),6);
        tracep->fullCData(oldp+773,(7U),6);
        tracep->fullCData(oldp+774,(8U),6);
        tracep->fullCData(oldp+775,(9U),6);
        tracep->fullCData(oldp+776,(0xaU),6);
        tracep->fullCData(oldp+777,(0xbU),6);
        tracep->fullCData(oldp+778,(0xcU),6);
        tracep->fullCData(oldp+779,(0xdU),6);
        tracep->fullCData(oldp+780,(0xeU),6);
        tracep->fullCData(oldp+781,(0xfU),6);
        tracep->fullCData(oldp+782,(0x10U),6);
        tracep->fullCData(oldp+783,(0x11U),6);
        tracep->fullCData(oldp+784,(0x12U),6);
        tracep->fullCData(oldp+785,(0x13U),6);
        tracep->fullCData(oldp+786,(0x14U),6);
        tracep->fullCData(oldp+787,(0x15U),6);
        tracep->fullCData(oldp+788,(0x16U),6);
        tracep->fullCData(oldp+789,(0x17U),6);
        tracep->fullCData(oldp+790,(0x18U),6);
        tracep->fullCData(oldp+791,(0x19U),6);
        tracep->fullCData(oldp+792,(0x1aU),6);
        tracep->fullCData(oldp+793,(0x1bU),6);
        tracep->fullCData(oldp+794,(0x1cU),6);
        tracep->fullCData(oldp+795,(0x1dU),6);
        tracep->fullCData(oldp+796,(0x1eU),6);
        tracep->fullCData(oldp+797,(0x1fU),6);
        tracep->fullCData(oldp+798,(0x20U),6);
        tracep->fullCData(oldp+799,(0x21U),6);
        tracep->fullCData(oldp+800,(0x22U),6);
        tracep->fullCData(oldp+801,(0x23U),6);
        tracep->fullCData(oldp+802,(0x24U),6);
        tracep->fullCData(oldp+803,(0x25U),6);
        tracep->fullCData(oldp+804,(0x26U),6);
        tracep->fullCData(oldp+805,(0x27U),6);
        tracep->fullCData(oldp+806,(0x28U),6);
        tracep->fullCData(oldp+807,(0x29U),6);
        tracep->fullCData(oldp+808,(0x2aU),6);
        tracep->fullCData(oldp+809,(0x2bU),6);
        tracep->fullCData(oldp+810,(0x2cU),6);
        tracep->fullCData(oldp+811,(0x2dU),6);
        tracep->fullCData(oldp+812,(0x2eU),6);
        tracep->fullCData(oldp+813,(0x2fU),6);
        tracep->fullCData(oldp+814,(0x30U),6);
        tracep->fullCData(oldp+815,(0x31U),6);
        tracep->fullCData(oldp+816,(0x32U),6);
        tracep->fullCData(oldp+817,(0x33U),6);
        tracep->fullCData(oldp+818,(0x34U),6);
        tracep->fullCData(oldp+819,(0x35U),6);
        tracep->fullCData(oldp+820,(0x36U),6);
        tracep->fullCData(oldp+821,(0x37U),6);
        tracep->fullCData(oldp+822,(0x38U),6);
        tracep->fullCData(oldp+823,(0x39U),6);
        tracep->fullCData(oldp+824,(0x3aU),6);
        tracep->fullCData(oldp+825,(0x3bU),6);
        tracep->fullCData(oldp+826,(0x3cU),6);
        tracep->fullCData(oldp+827,(0x3dU),6);
        tracep->fullCData(oldp+828,(0x3eU),6);
        tracep->fullCData(oldp+829,(0x3fU),6);
    }
}
