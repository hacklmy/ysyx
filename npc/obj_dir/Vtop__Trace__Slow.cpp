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
        tracep->declBit(c+673,"clock", false,-1);
        tracep->declBit(c+674,"reset", false,-1);
        tracep->declBus(c+675,"io_inst", false,-1, 31,0);
        tracep->declQuad(c+676,"io_pc", false,-1, 63,0);
        tracep->declBit(c+678,"io_step", false,-1);
        tracep->declBit(c+679,"io_skip", false,-1);
        tracep->declBit(c+673,"top clock", false,-1);
        tracep->declBit(c+674,"top reset", false,-1);
        tracep->declBus(c+675,"top io_inst", false,-1, 31,0);
        tracep->declQuad(c+676,"top io_pc", false,-1, 63,0);
        tracep->declBit(c+678,"top io_step", false,-1);
        tracep->declBit(c+679,"top io_skip", false,-1);
        tracep->declBit(c+673,"top Register_clock", false,-1);
        tracep->declBus(c+1,"top Register_io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top Register_io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top Register_io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top Register_io_rdata2", false,-1, 63,0);
        tracep->declBit(c+7,"top Register_io_we", false,-1);
        tracep->declBus(c+8,"top Register_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top Register_io_wdata", false,-1, 63,0);
        tracep->declBit(c+673,"top IFU_clock", false,-1);
        tracep->declBit(c+674,"top IFU_reset", false,-1);
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
        tracep->declBit(c+673,"top IDU_clock", false,-1);
        tracep->declBit(c+674,"top IDU_reset", false,-1);
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
        tracep->declBit(c+673,"top EXU_clock", false,-1);
        tracep->declBit(c+674,"top EXU_reset", false,-1);
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
        tracep->declBit(c+673,"top LSU_clock", false,-1);
        tracep->declBit(c+674,"top LSU_reset", false,-1);
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
        tracep->declBit(c+76,"top LSU_io_to_ws_device", false,-1);
        tracep->declBit(c+58,"top LSU_io_ms_valid", false,-1);
        tracep->declBit(c+55,"top LSU_io_ms_rf_we", false,-1);
        tracep->declBus(c+61,"top LSU_io_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+53,"top LSU_io_ms_fwd_ready", false,-1);
        tracep->declQuad(c+50,"top LSU_io_ms_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+77,"top LSU_io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+79,"top LSU_io_axi_in_rvalid", false,-1);
        tracep->declBit(c+80,"top LSU_io_axi_in_bvalid", false,-1);
        tracep->declBus(c+81,"top LSU_io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+82,"top LSU_io_axi_out_arvalid", false,-1);
        tracep->declBus(c+81,"top LSU_io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBit(c+83,"top LSU_io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+84,"top LSU_io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+86,"top LSU_io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+87,"top LSU_io_axi_out_wvalid", false,-1);
        tracep->declBit(c+673,"top WBU_clock", false,-1);
        tracep->declBit(c+674,"top WBU_reset", false,-1);
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
        tracep->declQuad(c+88,"top WBU_io_ws_pc", false,-1, 63,0);
        tracep->declBit(c+76,"top WBU_io_device_access", false,-1);
        tracep->declBit(c+90,"top WBU_io_skip", false,-1);
        tracep->declBit(c+673,"top arbiter_clock", false,-1);
        tracep->declBit(c+674,"top arbiter_reset", false,-1);
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
        tracep->declBit(c+673,"top i_cache_clock", false,-1);
        tracep->declBit(c+674,"top i_cache_reset", false,-1);
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
        tracep->declBit(c+673,"top d_cache_clock", false,-1);
        tracep->declBit(c+674,"top d_cache_reset", false,-1);
        tracep->declBus(c+81,"top d_cache_io_from_lsu_araddr", false,-1, 31,0);
        tracep->declBit(c+82,"top d_cache_io_from_lsu_arvalid", false,-1);
        tracep->declBus(c+81,"top d_cache_io_from_lsu_awaddr", false,-1, 31,0);
        tracep->declBit(c+83,"top d_cache_io_from_lsu_awvalid", false,-1);
        tracep->declQuad(c+84,"top d_cache_io_from_lsu_wdata", false,-1, 63,0);
        tracep->declBus(c+86,"top d_cache_io_from_lsu_wstrb", false,-1, 7,0);
        tracep->declBit(c+87,"top d_cache_io_from_lsu_wvalid", false,-1);
        tracep->declQuad(c+77,"top d_cache_io_to_lsu_rdata", false,-1, 63,0);
        tracep->declBit(c+79,"top d_cache_io_to_lsu_rvalid", false,-1);
        tracep->declBit(c+80,"top d_cache_io_to_lsu_bvalid", false,-1);
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
        tracep->declBit(c+673,"top axi_clock", false,-1);
        tracep->declBit(c+674,"top axi_reset", false,-1);
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
        tracep->declBit(c+140,"top skip", false,-1);
        tracep->declBit(c+673,"top Register clock", false,-1);
        tracep->declBus(c+1,"top Register io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top Register io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top Register io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top Register io_rdata2", false,-1, 63,0);
        tracep->declBit(c+7,"top Register io_we", false,-1);
        tracep->declBus(c+8,"top Register io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top Register io_wdata", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+141+i*2,"top Register Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+680,"top Register Reg_io_rdata1_MPORT_en", false,-1);
        tracep->declBus(c+1,"top Register Reg_io_rdata1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+205,"top Register Reg_io_rdata1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_io_rdata2_MPORT_en", false,-1);
        tracep->declBus(c+2,"top Register Reg_io_rdata2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+207,"top Register Reg_io_rdata2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_0_MPORT_en", false,-1);
        tracep->declBus(c+681,"top Register Reg_reg_trace_io_input_reg_0_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+209,"top Register Reg_reg_trace_io_input_reg_0_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_1_MPORT_en", false,-1);
        tracep->declBus(c+682,"top Register Reg_reg_trace_io_input_reg_1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+211,"top Register Reg_reg_trace_io_input_reg_1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_2_MPORT_en", false,-1);
        tracep->declBus(c+683,"top Register Reg_reg_trace_io_input_reg_2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+213,"top Register Reg_reg_trace_io_input_reg_2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_3_MPORT_en", false,-1);
        tracep->declBus(c+684,"top Register Reg_reg_trace_io_input_reg_3_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+215,"top Register Reg_reg_trace_io_input_reg_3_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_4_MPORT_en", false,-1);
        tracep->declBus(c+685,"top Register Reg_reg_trace_io_input_reg_4_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+217,"top Register Reg_reg_trace_io_input_reg_4_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_5_MPORT_en", false,-1);
        tracep->declBus(c+686,"top Register Reg_reg_trace_io_input_reg_5_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+219,"top Register Reg_reg_trace_io_input_reg_5_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_6_MPORT_en", false,-1);
        tracep->declBus(c+687,"top Register Reg_reg_trace_io_input_reg_6_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+221,"top Register Reg_reg_trace_io_input_reg_6_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_7_MPORT_en", false,-1);
        tracep->declBus(c+688,"top Register Reg_reg_trace_io_input_reg_7_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+223,"top Register Reg_reg_trace_io_input_reg_7_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_8_MPORT_en", false,-1);
        tracep->declBus(c+689,"top Register Reg_reg_trace_io_input_reg_8_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+225,"top Register Reg_reg_trace_io_input_reg_8_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_9_MPORT_en", false,-1);
        tracep->declBus(c+690,"top Register Reg_reg_trace_io_input_reg_9_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+227,"top Register Reg_reg_trace_io_input_reg_9_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_10_MPORT_en", false,-1);
        tracep->declBus(c+691,"top Register Reg_reg_trace_io_input_reg_10_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+229,"top Register Reg_reg_trace_io_input_reg_10_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_11_MPORT_en", false,-1);
        tracep->declBus(c+692,"top Register Reg_reg_trace_io_input_reg_11_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+231,"top Register Reg_reg_trace_io_input_reg_11_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_12_MPORT_en", false,-1);
        tracep->declBus(c+693,"top Register Reg_reg_trace_io_input_reg_12_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+233,"top Register Reg_reg_trace_io_input_reg_12_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_13_MPORT_en", false,-1);
        tracep->declBus(c+694,"top Register Reg_reg_trace_io_input_reg_13_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+235,"top Register Reg_reg_trace_io_input_reg_13_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_14_MPORT_en", false,-1);
        tracep->declBus(c+695,"top Register Reg_reg_trace_io_input_reg_14_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+237,"top Register Reg_reg_trace_io_input_reg_14_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_15_MPORT_en", false,-1);
        tracep->declBus(c+696,"top Register Reg_reg_trace_io_input_reg_15_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+239,"top Register Reg_reg_trace_io_input_reg_15_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_16_MPORT_en", false,-1);
        tracep->declBus(c+697,"top Register Reg_reg_trace_io_input_reg_16_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+241,"top Register Reg_reg_trace_io_input_reg_16_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_17_MPORT_en", false,-1);
        tracep->declBus(c+698,"top Register Reg_reg_trace_io_input_reg_17_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+243,"top Register Reg_reg_trace_io_input_reg_17_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_18_MPORT_en", false,-1);
        tracep->declBus(c+699,"top Register Reg_reg_trace_io_input_reg_18_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+245,"top Register Reg_reg_trace_io_input_reg_18_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_19_MPORT_en", false,-1);
        tracep->declBus(c+700,"top Register Reg_reg_trace_io_input_reg_19_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+247,"top Register Reg_reg_trace_io_input_reg_19_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_20_MPORT_en", false,-1);
        tracep->declBus(c+701,"top Register Reg_reg_trace_io_input_reg_20_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+249,"top Register Reg_reg_trace_io_input_reg_20_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_21_MPORT_en", false,-1);
        tracep->declBus(c+702,"top Register Reg_reg_trace_io_input_reg_21_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+251,"top Register Reg_reg_trace_io_input_reg_21_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_22_MPORT_en", false,-1);
        tracep->declBus(c+703,"top Register Reg_reg_trace_io_input_reg_22_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+253,"top Register Reg_reg_trace_io_input_reg_22_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_23_MPORT_en", false,-1);
        tracep->declBus(c+704,"top Register Reg_reg_trace_io_input_reg_23_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+255,"top Register Reg_reg_trace_io_input_reg_23_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_24_MPORT_en", false,-1);
        tracep->declBus(c+705,"top Register Reg_reg_trace_io_input_reg_24_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+257,"top Register Reg_reg_trace_io_input_reg_24_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_25_MPORT_en", false,-1);
        tracep->declBus(c+706,"top Register Reg_reg_trace_io_input_reg_25_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+259,"top Register Reg_reg_trace_io_input_reg_25_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_26_MPORT_en", false,-1);
        tracep->declBus(c+707,"top Register Reg_reg_trace_io_input_reg_26_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+261,"top Register Reg_reg_trace_io_input_reg_26_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_27_MPORT_en", false,-1);
        tracep->declBus(c+708,"top Register Reg_reg_trace_io_input_reg_27_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+263,"top Register Reg_reg_trace_io_input_reg_27_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_28_MPORT_en", false,-1);
        tracep->declBus(c+709,"top Register Reg_reg_trace_io_input_reg_28_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+265,"top Register Reg_reg_trace_io_input_reg_28_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_29_MPORT_en", false,-1);
        tracep->declBus(c+710,"top Register Reg_reg_trace_io_input_reg_29_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+267,"top Register Reg_reg_trace_io_input_reg_29_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_30_MPORT_en", false,-1);
        tracep->declBus(c+711,"top Register Reg_reg_trace_io_input_reg_30_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+269,"top Register Reg_reg_trace_io_input_reg_30_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+680,"top Register Reg_reg_trace_io_input_reg_31_MPORT_en", false,-1);
        tracep->declBus(c+712,"top Register Reg_reg_trace_io_input_reg_31_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+271,"top Register Reg_reg_trace_io_input_reg_31_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+9,"top Register Reg_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+8,"top Register Reg_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+680,"top Register Reg_MPORT_mask", false,-1);
        tracep->declBit(c+273,"top Register Reg_MPORT_en", false,-1);
        tracep->declQuad(c+209,"top Register reg_trace_input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+211,"top Register reg_trace_input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+213,"top Register reg_trace_input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+215,"top Register reg_trace_input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+217,"top Register reg_trace_input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+219,"top Register reg_trace_input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+221,"top Register reg_trace_input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+223,"top Register reg_trace_input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+225,"top Register reg_trace_input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+227,"top Register reg_trace_input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+229,"top Register reg_trace_input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+231,"top Register reg_trace_input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+233,"top Register reg_trace_input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+235,"top Register reg_trace_input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+237,"top Register reg_trace_input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+239,"top Register reg_trace_input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+241,"top Register reg_trace_input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+243,"top Register reg_trace_input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+245,"top Register reg_trace_input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+247,"top Register reg_trace_input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+249,"top Register reg_trace_input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+251,"top Register reg_trace_input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+253,"top Register reg_trace_input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+255,"top Register reg_trace_input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+257,"top Register reg_trace_input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+259,"top Register reg_trace_input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+261,"top Register reg_trace_input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+263,"top Register reg_trace_input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+265,"top Register reg_trace_input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+267,"top Register reg_trace_input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+269,"top Register reg_trace_input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+271,"top Register reg_trace_input_reg_31", false,-1, 63,0);
        tracep->declQuad(c+209,"top Register reg_trace input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+211,"top Register reg_trace input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+213,"top Register reg_trace input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+215,"top Register reg_trace input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+217,"top Register reg_trace input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+219,"top Register reg_trace input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+221,"top Register reg_trace input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+223,"top Register reg_trace input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+225,"top Register reg_trace input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+227,"top Register reg_trace input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+229,"top Register reg_trace input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+231,"top Register reg_trace input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+233,"top Register reg_trace input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+235,"top Register reg_trace input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+237,"top Register reg_trace input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+239,"top Register reg_trace input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+241,"top Register reg_trace input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+243,"top Register reg_trace input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+245,"top Register reg_trace input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+247,"top Register reg_trace input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+249,"top Register reg_trace input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+251,"top Register reg_trace input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+253,"top Register reg_trace input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+255,"top Register reg_trace input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+257,"top Register reg_trace input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+259,"top Register reg_trace input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+261,"top Register reg_trace input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+263,"top Register reg_trace input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+265,"top Register reg_trace input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+267,"top Register reg_trace input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+269,"top Register reg_trace input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+271,"top Register reg_trace input_reg_31", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+274+i*2,"top Register reg_trace traceregs", true,(i+0), 63,0);}}
        tracep->declBit(c+673,"top IFU clock", false,-1);
        tracep->declBit(c+674,"top IFU reset", false,-1);
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
        tracep->declQuad(c+338,"top IFU br_target", false,-1, 63,0);
        tracep->declBit(c+19,"top IFU fs_valid", false,-1);
        tracep->declQuad(c+340,"top IFU fs_pc_next", false,-1, 63,0);
        tracep->declBit(c+342,"top IFU cache_init", false,-1);
        tracep->declQuad(c+17,"top IFU fs_pc", false,-1, 63,0);
        tracep->declBus(c+20,"top IFU fs_inst", false,-1, 31,0);
        tracep->declQuad(c+343,"top IFU seq_pc", false,-1, 63,0);
        tracep->declQuad(c+345,"top IFU pc_next", false,-1, 63,0);
        tracep->declBit(c+26,"top IFU fs_allowin", false,-1);
        tracep->declBit(c+673,"top IDU clock", false,-1);
        tracep->declBit(c+674,"top IDU reset", false,-1);
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
        tracep->declBit(c+673,"top IDU csr_reg_clock", false,-1);
        tracep->declBit(c+347,"top IDU csr_reg_io_wen1", false,-1);
        tracep->declBit(c+348,"top IDU csr_reg_io_wen2", false,-1);
        tracep->declBus(c+349,"top IDU csr_reg_io_waddr1", false,-1, 1,0);
        tracep->declQuad(c+350,"top IDU csr_reg_io_wdata1", false,-1, 63,0);
        tracep->declQuad(c+352,"top IDU csr_reg_io_wdata2", false,-1, 63,0);
        tracep->declBus(c+354,"top IDU csr_reg_io_raddr", false,-1, 1,0);
        tracep->declQuad(c+355,"top IDU csr_reg_io_rdata", false,-1, 63,0);
        tracep->declBit(c+13,"top IDU ds_valid", false,-1);
        tracep->declQuad(c+32,"top IDU ds_pc", false,-1, 63,0);
        tracep->declBus(c+357,"top IDU inst", false,-1, 31,0);
        tracep->declBit(c+358,"top IDU br_taken_cancel", false,-1);
        tracep->declBit(c+359,"top IDU ctrl_bus_4", false,-1);
        tracep->declBus(c+360,"top IDU ctrl_bus_1", false,-1, 6,0);
        tracep->declBus(c+361,"top IDU inst_type", false,-1, 31,0);
        tracep->declBus(c+362,"top IDU opcode", false,-1, 6,0);
        tracep->declBus(c+363,"top IDU ctrl_bus_0", false,-1, 6,0);
        tracep->declBus(c+34,"top IDU ALUop", false,-1, 31,0);
        tracep->declBus(c+364,"top IDU funct3", false,-1, 2,0);
        tracep->declBus(c+365,"top IDU csr_write", false,-1, 1,0);
        tracep->declBus(c+1,"top IDU rs1", false,-1, 4,0);
        tracep->declBit(c+366,"top IDU conflict_es_rs1", false,-1);
        tracep->declBit(c+367,"top IDU conflict_ms_rs1", false,-1);
        tracep->declBit(c+368,"top IDU conflict_ws_rs1", false,-1);
        tracep->declBit(c+369,"top IDU ctrl_bus_3", false,-1);
        tracep->declBus(c+370,"top IDU rs2", false,-1, 4,0);
        tracep->declBit(c+371,"top IDU conflict_es_rs2", false,-1);
        tracep->declBit(c+372,"top IDU conflict_ms_rs2", false,-1);
        tracep->declBit(c+373,"top IDU conflict_ws_rs2", false,-1);
        tracep->declBit(c+12,"top IDU ds_ready_go", false,-1);
        tracep->declBit(c+374,"top IDU ds_allowin", false,-1);
        tracep->declQuad(c+375,"top IDU rdata1", false,-1, 63,0);
        tracep->declQuad(c+377,"top IDU rdata2", false,-1, 63,0);
        tracep->declBit(c+379,"top IDU bne_res", false,-1);
        tracep->declBit(c+380,"top IDU beq_res", false,-1);
        tracep->declBit(c+381,"top IDU bge_res", false,-1);
        tracep->declBit(c+382,"top IDU blt_res", false,-1);
        tracep->declBit(c+383,"top IDU bltu_res", false,-1);
        tracep->declBit(c+384,"top IDU bgeu_res", false,-1);
        tracep->declBit(c+385,"top IDU ctrl_bus_6", false,-1);
        tracep->declBit(c+44,"top IDU ctrl_bus_5", false,-1);
        tracep->declBus(c+39,"top IDU rd", false,-1, 4,0);
        tracep->declBus(c+386,"top IDU imm_imm", false,-1, 11,0);
        tracep->declBus(c+387,"top IDU imm_imm_1", false,-1, 19,0);
        tracep->declBus(c+388,"top IDU imm_imm_2", false,-1, 19,0);
        tracep->declBus(c+389,"top IDU imm_imm_3", false,-1, 11,0);
        tracep->declBus(c+390,"top IDU imm_imm_4", false,-1, 11,0);
        tracep->declQuad(c+391,"top IDU imm", false,-1, 63,0);
        tracep->declBus(c+393,"top IDU csr_index", false,-1, 1,0);
        tracep->declQuad(c+394,"top IDU csr_wdata", false,-1, 63,0);
        tracep->declQuad(c+396,"top IDU src1", false,-1, 63,0);
        tracep->declQuad(c+37,"top IDU src2", false,-1, 63,0);
        tracep->declBit(c+673,"top IDU csr_reg clock", false,-1);
        tracep->declBit(c+347,"top IDU csr_reg io_wen1", false,-1);
        tracep->declBit(c+348,"top IDU csr_reg io_wen2", false,-1);
        tracep->declBus(c+349,"top IDU csr_reg io_waddr1", false,-1, 1,0);
        tracep->declQuad(c+350,"top IDU csr_reg io_wdata1", false,-1, 63,0);
        tracep->declQuad(c+352,"top IDU csr_reg io_wdata2", false,-1, 63,0);
        tracep->declBus(c+354,"top IDU csr_reg io_raddr", false,-1, 1,0);
        tracep->declQuad(c+355,"top IDU csr_reg io_rdata", false,-1, 63,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+398+i*2,"top IDU csr_reg CSR_Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+680,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_en", false,-1);
        tracep->declBus(c+354,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+355,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+350,"top IDU csr_reg CSR_Reg_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+349,"top IDU csr_reg CSR_Reg_MPORT_addr", false,-1, 1,0);
        tracep->declBit(c+680,"top IDU csr_reg CSR_Reg_MPORT_mask", false,-1);
        tracep->declBit(c+347,"top IDU csr_reg CSR_Reg_MPORT_en", false,-1);
        tracep->declQuad(c+352,"top IDU csr_reg CSR_Reg_MPORT_1_data", false,-1, 63,0);
        tracep->declBus(c+713,"top IDU csr_reg CSR_Reg_MPORT_1_addr", false,-1, 1,0);
        tracep->declBit(c+680,"top IDU csr_reg CSR_Reg_MPORT_1_mask", false,-1);
        tracep->declBit(c+348,"top IDU csr_reg CSR_Reg_MPORT_1_en", false,-1);
        tracep->declBit(c+673,"top EXU clock", false,-1);
        tracep->declBit(c+674,"top EXU reset", false,-1);
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
        tracep->declBit(c+673,"top EXU ALU_clock", false,-1);
        tracep->declBit(c+674,"top EXU ALU_reset", false,-1);
        tracep->declQuad(c+406,"top EXU ALU_io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+408,"top EXU ALU_io_src2_value", false,-1, 63,0);
        tracep->declBus(c+410,"top EXU ALU_io_ALUop", false,-1, 31,0);
        tracep->declBit(c+57,"top EXU ALU_io_src_valid", false,-1);
        tracep->declBit(c+411,"top EXU ALU_io_alu_busy", false,-1);
        tracep->declBit(c+62,"top EXU ALU_io_res_ready", false,-1);
        tracep->declQuad(c+48,"top EXU ALU_io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+63,"top EXU es_pc", false,-1, 63,0);
        tracep->declBit(c+57,"top EXU es_valid", false,-1);
        tracep->declBus(c+60,"top EXU es_rd", false,-1, 4,0);
        tracep->declBit(c+54,"top EXU es_rf_we", false,-1);
        tracep->declQuad(c+412,"top EXU src1_value", false,-1, 63,0);
        tracep->declQuad(c+408,"top EXU src2_value", false,-1, 63,0);
        tracep->declQuad(c+65,"top EXU store_data", false,-1, 63,0);
        tracep->declBus(c+68,"top EXU st_wstrb", false,-1, 7,0);
        tracep->declBit(c+67,"top EXU st_we", false,-1);
        tracep->declBit(c+69,"top EXU ld_we", false,-1);
        tracep->declBus(c+410,"top EXU ALUop", false,-1, 31,0);
        tracep->declBus(c+70,"top EXU load_type", false,-1, 2,0);
        tracep->declBit(c+414,"top EXU es_ready_go", false,-1);
        tracep->declBit(c+31,"top EXU es_allowin", false,-1);
        tracep->declBit(c+673,"top EXU ALU clock", false,-1);
        tracep->declBit(c+674,"top EXU ALU reset", false,-1);
        tracep->declQuad(c+406,"top EXU ALU io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+408,"top EXU ALU io_src2_value", false,-1, 63,0);
        tracep->declBus(c+410,"top EXU ALU io_ALUop", false,-1, 31,0);
        tracep->declBit(c+57,"top EXU ALU io_src_valid", false,-1);
        tracep->declBit(c+411,"top EXU ALU io_alu_busy", false,-1);
        tracep->declBit(c+62,"top EXU ALU io_res_ready", false,-1);
        tracep->declQuad(c+48,"top EXU ALU io_alu_res", false,-1, 63,0);
        tracep->declBit(c+673,"top EXU ALU Mul_clock", false,-1);
        tracep->declBit(c+674,"top EXU ALU Mul_reset", false,-1);
        tracep->declBit(c+415,"top EXU ALU Mul_io_mul_valid", false,-1);
        tracep->declBit(c+416,"top EXU ALU Mul_io_mulw", false,-1);
        tracep->declQuad(c+406,"top EXU ALU Mul_io_multiplicand", false,-1, 63,0);
        tracep->declQuad(c+408,"top EXU ALU Mul_io_multiplier", false,-1, 63,0);
        tracep->declBit(c+417,"top EXU ALU Mul_io_out_valid", false,-1);
        tracep->declBit(c+62,"top EXU ALU Mul_io_out_ready", false,-1);
        tracep->declBus(c+418,"top EXU ALU Mul_io_result_hi", false,-1, 31,0);
        tracep->declBus(c+419,"top EXU ALU Mul_io_result_lo", false,-1, 31,0);
        tracep->declBit(c+673,"top EXU ALU Div_clock", false,-1);
        tracep->declBit(c+674,"top EXU ALU Div_reset", false,-1);
        tracep->declQuad(c+406,"top EXU ALU Div_io_dividend", false,-1, 63,0);
        tracep->declQuad(c+408,"top EXU ALU Div_io_divisor", false,-1, 63,0);
        tracep->declBit(c+420,"top EXU ALU Div_io_div_valid", false,-1);
        tracep->declBit(c+421,"top EXU ALU Div_io_divw", false,-1);
        tracep->declBit(c+422,"top EXU ALU Div_io_div_signed", false,-1);
        tracep->declBit(c+423,"top EXU ALU Div_io_out_valid", false,-1);
        tracep->declQuad(c+424,"top EXU ALU Div_io_quotient", false,-1, 63,0);
        tracep->declQuad(c+426,"top EXU ALU Div_io_remainder", false,-1, 63,0);
        tracep->declBit(c+428,"top EXU ALU mul_valid", false,-1);
        tracep->declBit(c+429,"top EXU ALU div_valid", false,-1);
        tracep->declQuad(c+430,"top EXU ALU add_res", false,-1, 63,0);
        tracep->declQuad(c+432,"top EXU ALU sub_res", false,-1, 63,0);
        tracep->declQuad(c+434,"top EXU ALU sra_res", false,-1, 63,0);
        tracep->declQuad(c+436,"top EXU ALU srl_res", false,-1, 63,0);
        tracep->declArray(c+438,"top EXU ALU sll_res", false,-1, 126,0);
        tracep->declBus(c+442,"top EXU ALU sraw_res", false,-1, 31,0);
        tracep->declBus(c+443,"top EXU ALU srlw_res", false,-1, 31,0);
        tracep->declQuad(c+444,"top EXU ALU sllw_res", false,-1, 62,0);
        tracep->declQuad(c+446,"top EXU ALU or_res", false,-1, 63,0);
        tracep->declQuad(c+448,"top EXU ALU xor_res", false,-1, 63,0);
        tracep->declQuad(c+450,"top EXU ALU and_res", false,-1, 63,0);
        tracep->declQuad(c+452,"top EXU ALU mlu_res", false,-1, 63,0);
        tracep->declBus(c+454,"top EXU ALU divw_res", false,-1, 31,0);
        tracep->declBus(c+455,"top EXU ALU remw_res", false,-1, 31,0);
        tracep->declArray(c+456,"top EXU ALU alu_res", false,-1, 126,0);
        tracep->declBit(c+673,"top EXU ALU Mul clock", false,-1);
        tracep->declBit(c+674,"top EXU ALU Mul reset", false,-1);
        tracep->declBit(c+415,"top EXU ALU Mul io_mul_valid", false,-1);
        tracep->declBit(c+416,"top EXU ALU Mul io_mulw", false,-1);
        tracep->declQuad(c+406,"top EXU ALU Mul io_multiplicand", false,-1, 63,0);
        tracep->declQuad(c+408,"top EXU ALU Mul io_multiplier", false,-1, 63,0);
        tracep->declBit(c+417,"top EXU ALU Mul io_out_valid", false,-1);
        tracep->declBit(c+62,"top EXU ALU Mul io_out_ready", false,-1);
        tracep->declBus(c+418,"top EXU ALU Mul io_result_hi", false,-1, 31,0);
        tracep->declBus(c+419,"top EXU ALU Mul io_result_lo", false,-1, 31,0);
        tracep->declBus(c+460,"top EXU ALU Mul booth_partial_io_y", false,-1, 2,0);
        tracep->declQuad(c+461,"top EXU ALU Mul booth_partial_io_x", false,-1, 63,0);
        tracep->declBit(c+463,"top EXU ALU Mul booth_partial_io_c", false,-1);
        tracep->declQuad(c+464,"top EXU ALU Mul booth_partial_io_p", false,-1, 63,0);
        tracep->declBit(c+466,"top EXU ALU Mul sign", false,-1);
        tracep->declQuad(c+467,"top EXU ALU Mul res", false,-1, 63,0);
        tracep->declBus(c+469,"top EXU ALU Mul state", false,-1, 1,0);
        tracep->declArray(c+470,"top EXU ALU Mul src1", false,-1, 127,0);
        tracep->declArray(c+474,"top EXU ALU Mul src2", false,-1, 64,0);
        tracep->declQuad(c+477,"top EXU ALU Mul src1_32", false,-1, 63,0);
        tracep->declQuad(c+479,"top EXU ALU Mul src2_32", false,-1, 63,0);
        tracep->declArray(c+481,"top EXU ALU Mul real_cand", false,-1, 127,0);
        tracep->declQuad(c+485,"top EXU ALU Mul real_er", false,-1, 63,0);
        tracep->declBus(c+460,"top EXU ALU Mul booth_partial io_y", false,-1, 2,0);
        tracep->declQuad(c+461,"top EXU ALU Mul booth_partial io_x", false,-1, 63,0);
        tracep->declBit(c+463,"top EXU ALU Mul booth_partial io_c", false,-1);
        tracep->declQuad(c+464,"top EXU ALU Mul booth_partial io_p", false,-1, 63,0);
        tracep->declBit(c+673,"top EXU ALU Div clock", false,-1);
        tracep->declBit(c+674,"top EXU ALU Div reset", false,-1);
        tracep->declQuad(c+406,"top EXU ALU Div io_dividend", false,-1, 63,0);
        tracep->declQuad(c+408,"top EXU ALU Div io_divisor", false,-1, 63,0);
        tracep->declBit(c+420,"top EXU ALU Div io_div_valid", false,-1);
        tracep->declBit(c+421,"top EXU ALU Div io_divw", false,-1);
        tracep->declBit(c+422,"top EXU ALU Div io_div_signed", false,-1);
        tracep->declBit(c+423,"top EXU ALU Div io_out_valid", false,-1);
        tracep->declQuad(c+424,"top EXU ALU Div io_quotient", false,-1, 63,0);
        tracep->declQuad(c+426,"top EXU ALU Div io_remainder", false,-1, 63,0);
        tracep->declBit(c+487,"top EXU ALU Div dend_neg", false,-1);
        tracep->declBit(c+488,"top EXU ALU Div sor_neg", false,-1);
        tracep->declBit(c+489,"top EXU ALU Div quotient_neg", false,-1);
        tracep->declQuad(c+490,"top EXU ALU Div src1_32_s", false,-1, 63,0);
        tracep->declQuad(c+492,"top EXU ALU Div src2_32_s", false,-1, 63,0);
        tracep->declQuad(c+494,"top EXU ALU Div src1_32", false,-1, 63,0);
        tracep->declQuad(c+496,"top EXU ALU Div src2_32", false,-1, 63,0);
        tracep->declQuad(c+498,"top EXU ALU Div real_cand", false,-1, 63,0);
        tracep->declQuad(c+500,"top EXU ALU Div real_er", false,-1, 63,0);
        tracep->declArray(c+502,"top EXU ALU Div src2", false,-1, 64,0);
        tracep->declArray(c+505,"top EXU ALU Div div_cand", false,-1, 127,0);
        tracep->declBit(c+509,"top EXU ALU Div div_start", false,-1);
        tracep->declQuad(c+510,"top EXU ALU Div quotient", false,-1, 63,0);
        tracep->declBus(c+512,"top EXU ALU Div step_num", false,-1, 31,0);
        tracep->declArray(c+513,"top EXU ALU Div src1", false,-1, 127,0);
        tracep->declArray(c+517,"top EXU ALU Div sub_res", false,-1, 64,0);
        tracep->declArray(c+520,"top EXU ALU Div update_cand", false,-1, 127,0);
        tracep->declArray(c+524,"top EXU ALU Div new_cand", false,-1, 127,0);
        tracep->declBit(c+673,"top LSU clock", false,-1);
        tracep->declBit(c+674,"top LSU reset", false,-1);
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
        tracep->declBit(c+76,"top LSU io_to_ws_device", false,-1);
        tracep->declBit(c+58,"top LSU io_ms_valid", false,-1);
        tracep->declBit(c+55,"top LSU io_ms_rf_we", false,-1);
        tracep->declBus(c+61,"top LSU io_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+53,"top LSU io_ms_fwd_ready", false,-1);
        tracep->declQuad(c+50,"top LSU io_ms_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+77,"top LSU io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+79,"top LSU io_axi_in_rvalid", false,-1);
        tracep->declBit(c+80,"top LSU io_axi_in_bvalid", false,-1);
        tracep->declBus(c+81,"top LSU io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+82,"top LSU io_axi_out_arvalid", false,-1);
        tracep->declBus(c+81,"top LSU io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBit(c+83,"top LSU io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+84,"top LSU io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+86,"top LSU io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+87,"top LSU io_axi_out_wvalid", false,-1);
        tracep->declBit(c+58,"top LSU ms_valid", false,-1);
        tracep->declQuad(c+71,"top LSU ms_pc", false,-1, 63,0);
        tracep->declBit(c+75,"top LSU ms_rf_we", false,-1);
        tracep->declBus(c+61,"top LSU ms_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+528,"top LSU ms_res", false,-1, 63,0);
        tracep->declQuad(c+84,"top LSU store_data", false,-1, 63,0);
        tracep->declBit(c+87,"top LSU wen", false,-1);
        tracep->declBus(c+86,"top LSU wstrb", false,-1, 7,0);
        tracep->declBit(c+530,"top LSU ren", false,-1);
        tracep->declQuad(c+531,"top LSU maddr", false,-1, 63,0);
        tracep->declBus(c+533,"top LSU load_type", false,-1, 2,0);
        tracep->declBit(c+534,"top LSU ms_ready_go", false,-1);
        tracep->declBit(c+62,"top LSU ms_allowin", false,-1);
        tracep->declQuad(c+535,"top LSU rdata", false,-1, 63,0);
        tracep->declBit(c+673,"top WBU clock", false,-1);
        tracep->declBit(c+674,"top WBU reset", false,-1);
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
        tracep->declQuad(c+88,"top WBU io_ws_pc", false,-1, 63,0);
        tracep->declBit(c+76,"top WBU io_device_access", false,-1);
        tracep->declBit(c+90,"top WBU io_skip", false,-1);
        tracep->declBit(c+59,"top WBU ws_valid", false,-1);
        tracep->declQuad(c+88,"top WBU ws_pc", false,-1, 63,0);
        tracep->declBit(c+56,"top WBU ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU ws_res", false,-1, 63,0);
        tracep->declBit(c+537,"top WBU device_access", false,-1);
        tracep->declBit(c+673,"top arbiter clock", false,-1);
        tracep->declBit(c+674,"top arbiter reset", false,-1);
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
        tracep->declBus(c+538,"top arbiter state", false,-1, 1,0);
        tracep->declBit(c+673,"top i_cache clock", false,-1);
        tracep->declBit(c+674,"top i_cache reset", false,-1);
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
        tracep->declBit(c+539,"top i_cache cacheLine_io_to_ifu_rdata_MPORT_en", false,-1);
        tracep->declBus(c+540,"top i_cache cacheLine_io_to_ifu_rdata_MPORT_addr", false,-1, 7,0);
        tracep->declArray(c+541,"top i_cache cacheLine_io_to_ifu_rdata_MPORT_data", false,-1, 127,0);
        tracep->declArray(c+545,"top i_cache cacheLine_MPORT_data", false,-1, 127,0);
        tracep->declBus(c+549,"top i_cache cacheLine_MPORT_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache cacheLine_MPORT_mask", false,-1);
        tracep->declBit(c+550,"top i_cache cacheLine_MPORT_en", false,-1);
        tracep->declArray(c+545,"top i_cache cacheLine_MPORT_5_data", false,-1, 127,0);
        tracep->declBus(c+551,"top i_cache cacheLine_MPORT_5_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache cacheLine_MPORT_5_mask", false,-1);
        tracep->declBit(c+552,"top i_cache cacheLine_MPORT_5_en", false,-1);
        tracep->declBit(c+680,"top i_cache validMem_valid_0_MPORT_en", false,-1);
        tracep->declBus(c+553,"top i_cache validMem_valid_0_MPORT_addr", false,-1, 7,0);
        tracep->declBit(c+554,"top i_cache validMem_valid_0_MPORT_data", false,-1);
        tracep->declBit(c+680,"top i_cache validMem_valid_1_MPORT_en", false,-1);
        tracep->declBus(c+555,"top i_cache validMem_valid_1_MPORT_addr", false,-1, 7,0);
        tracep->declBit(c+556,"top i_cache validMem_valid_1_MPORT_data", false,-1);
        tracep->declBit(c+680,"top i_cache validMem_valid_2_MPORT_en", false,-1);
        tracep->declBus(c+557,"top i_cache validMem_valid_2_MPORT_addr", false,-1, 7,0);
        tracep->declBit(c+558,"top i_cache validMem_valid_2_MPORT_data", false,-1);
        tracep->declBit(c+680,"top i_cache validMem_valid_3_MPORT_en", false,-1);
        tracep->declBus(c+559,"top i_cache validMem_valid_3_MPORT_addr", false,-1, 7,0);
        tracep->declBit(c+560,"top i_cache validMem_valid_3_MPORT_data", false,-1);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_2_data", false,-1);
        tracep->declBus(c+549,"top i_cache validMem_MPORT_2_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_2_mask", false,-1);
        tracep->declBit(c+550,"top i_cache validMem_MPORT_2_en", false,-1);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_7_data", false,-1);
        tracep->declBus(c+551,"top i_cache validMem_MPORT_7_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_7_mask", false,-1);
        tracep->declBit(c+552,"top i_cache validMem_MPORT_7_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_10_data", false,-1);
        tracep->declBus(c+715,"top i_cache validMem_MPORT_10_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_10_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_10_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_11_data", false,-1);
        tracep->declBus(c+716,"top i_cache validMem_MPORT_11_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_11_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_11_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_12_data", false,-1);
        tracep->declBus(c+717,"top i_cache validMem_MPORT_12_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_12_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_12_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_13_data", false,-1);
        tracep->declBus(c+718,"top i_cache validMem_MPORT_13_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_13_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_13_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_14_data", false,-1);
        tracep->declBus(c+719,"top i_cache validMem_MPORT_14_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_14_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_14_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_15_data", false,-1);
        tracep->declBus(c+720,"top i_cache validMem_MPORT_15_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_15_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_15_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_16_data", false,-1);
        tracep->declBus(c+721,"top i_cache validMem_MPORT_16_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_16_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_16_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_17_data", false,-1);
        tracep->declBus(c+722,"top i_cache validMem_MPORT_17_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_17_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_17_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_18_data", false,-1);
        tracep->declBus(c+723,"top i_cache validMem_MPORT_18_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_18_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_18_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_19_data", false,-1);
        tracep->declBus(c+724,"top i_cache validMem_MPORT_19_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_19_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_19_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_20_data", false,-1);
        tracep->declBus(c+725,"top i_cache validMem_MPORT_20_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_20_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_20_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_21_data", false,-1);
        tracep->declBus(c+726,"top i_cache validMem_MPORT_21_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_21_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_21_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_22_data", false,-1);
        tracep->declBus(c+727,"top i_cache validMem_MPORT_22_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_22_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_22_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_23_data", false,-1);
        tracep->declBus(c+728,"top i_cache validMem_MPORT_23_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_23_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_23_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_24_data", false,-1);
        tracep->declBus(c+729,"top i_cache validMem_MPORT_24_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_24_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_24_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_25_data", false,-1);
        tracep->declBus(c+730,"top i_cache validMem_MPORT_25_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_25_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_25_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_26_data", false,-1);
        tracep->declBus(c+731,"top i_cache validMem_MPORT_26_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_26_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_26_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_27_data", false,-1);
        tracep->declBus(c+732,"top i_cache validMem_MPORT_27_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_27_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_27_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_28_data", false,-1);
        tracep->declBus(c+733,"top i_cache validMem_MPORT_28_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_28_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_28_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_29_data", false,-1);
        tracep->declBus(c+734,"top i_cache validMem_MPORT_29_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_29_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_29_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_30_data", false,-1);
        tracep->declBus(c+735,"top i_cache validMem_MPORT_30_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_30_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_30_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_31_data", false,-1);
        tracep->declBus(c+736,"top i_cache validMem_MPORT_31_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_31_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_31_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_32_data", false,-1);
        tracep->declBus(c+737,"top i_cache validMem_MPORT_32_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_32_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_32_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_33_data", false,-1);
        tracep->declBus(c+738,"top i_cache validMem_MPORT_33_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_33_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_33_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_34_data", false,-1);
        tracep->declBus(c+739,"top i_cache validMem_MPORT_34_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_34_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_34_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_35_data", false,-1);
        tracep->declBus(c+740,"top i_cache validMem_MPORT_35_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_35_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_35_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_36_data", false,-1);
        tracep->declBus(c+741,"top i_cache validMem_MPORT_36_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_36_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_36_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_37_data", false,-1);
        tracep->declBus(c+742,"top i_cache validMem_MPORT_37_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_37_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_37_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_38_data", false,-1);
        tracep->declBus(c+743,"top i_cache validMem_MPORT_38_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_38_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_38_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_39_data", false,-1);
        tracep->declBus(c+744,"top i_cache validMem_MPORT_39_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_39_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_39_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_40_data", false,-1);
        tracep->declBus(c+745,"top i_cache validMem_MPORT_40_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_40_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_40_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_41_data", false,-1);
        tracep->declBus(c+746,"top i_cache validMem_MPORT_41_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_41_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_41_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_42_data", false,-1);
        tracep->declBus(c+747,"top i_cache validMem_MPORT_42_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_42_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_42_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_43_data", false,-1);
        tracep->declBus(c+748,"top i_cache validMem_MPORT_43_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_43_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_43_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_44_data", false,-1);
        tracep->declBus(c+749,"top i_cache validMem_MPORT_44_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_44_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_44_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_45_data", false,-1);
        tracep->declBus(c+750,"top i_cache validMem_MPORT_45_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_45_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_45_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_46_data", false,-1);
        tracep->declBus(c+751,"top i_cache validMem_MPORT_46_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_46_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_46_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_47_data", false,-1);
        tracep->declBus(c+752,"top i_cache validMem_MPORT_47_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_47_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_47_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_48_data", false,-1);
        tracep->declBus(c+753,"top i_cache validMem_MPORT_48_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_48_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_48_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_49_data", false,-1);
        tracep->declBus(c+754,"top i_cache validMem_MPORT_49_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_49_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_49_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_50_data", false,-1);
        tracep->declBus(c+755,"top i_cache validMem_MPORT_50_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_50_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_50_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_51_data", false,-1);
        tracep->declBus(c+756,"top i_cache validMem_MPORT_51_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_51_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_51_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_52_data", false,-1);
        tracep->declBus(c+757,"top i_cache validMem_MPORT_52_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_52_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_52_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_53_data", false,-1);
        tracep->declBus(c+758,"top i_cache validMem_MPORT_53_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_53_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_53_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_54_data", false,-1);
        tracep->declBus(c+759,"top i_cache validMem_MPORT_54_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_54_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_54_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_55_data", false,-1);
        tracep->declBus(c+760,"top i_cache validMem_MPORT_55_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_55_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_55_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_56_data", false,-1);
        tracep->declBus(c+761,"top i_cache validMem_MPORT_56_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_56_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_56_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_57_data", false,-1);
        tracep->declBus(c+762,"top i_cache validMem_MPORT_57_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_57_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_57_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_58_data", false,-1);
        tracep->declBus(c+763,"top i_cache validMem_MPORT_58_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_58_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_58_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_59_data", false,-1);
        tracep->declBus(c+764,"top i_cache validMem_MPORT_59_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_59_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_59_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_60_data", false,-1);
        tracep->declBus(c+765,"top i_cache validMem_MPORT_60_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_60_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_60_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_61_data", false,-1);
        tracep->declBus(c+766,"top i_cache validMem_MPORT_61_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_61_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_61_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_62_data", false,-1);
        tracep->declBus(c+767,"top i_cache validMem_MPORT_62_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_62_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_62_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_63_data", false,-1);
        tracep->declBus(c+768,"top i_cache validMem_MPORT_63_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_63_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_63_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_64_data", false,-1);
        tracep->declBus(c+769,"top i_cache validMem_MPORT_64_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_64_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_64_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_65_data", false,-1);
        tracep->declBus(c+770,"top i_cache validMem_MPORT_65_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_65_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_65_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_66_data", false,-1);
        tracep->declBus(c+771,"top i_cache validMem_MPORT_66_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_66_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_66_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_67_data", false,-1);
        tracep->declBus(c+772,"top i_cache validMem_MPORT_67_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_67_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_67_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_68_data", false,-1);
        tracep->declBus(c+773,"top i_cache validMem_MPORT_68_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_68_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_68_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_69_data", false,-1);
        tracep->declBus(c+774,"top i_cache validMem_MPORT_69_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_69_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_69_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_70_data", false,-1);
        tracep->declBus(c+775,"top i_cache validMem_MPORT_70_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_70_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_70_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_71_data", false,-1);
        tracep->declBus(c+776,"top i_cache validMem_MPORT_71_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_71_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_71_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_72_data", false,-1);
        tracep->declBus(c+777,"top i_cache validMem_MPORT_72_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_72_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_72_en", false,-1);
        tracep->declBit(c+714,"top i_cache validMem_MPORT_73_data", false,-1);
        tracep->declBus(c+778,"top i_cache validMem_MPORT_73_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache validMem_MPORT_73_mask", false,-1);
        tracep->declBit(c+561,"top i_cache validMem_MPORT_73_en", false,-1);
        tracep->declBit(c+680,"top i_cache tagMem_tagMatch_0_MPORT_en", false,-1);
        tracep->declBus(c+553,"top i_cache tagMem_tagMatch_0_MPORT_addr", false,-1, 7,0);
        tracep->declBus(c+562,"top i_cache tagMem_tagMatch_0_MPORT_data", false,-1, 31,0);
        tracep->declBit(c+680,"top i_cache tagMem_tagMatch_1_MPORT_en", false,-1);
        tracep->declBus(c+555,"top i_cache tagMem_tagMatch_1_MPORT_addr", false,-1, 7,0);
        tracep->declBus(c+563,"top i_cache tagMem_tagMatch_1_MPORT_data", false,-1, 31,0);
        tracep->declBit(c+680,"top i_cache tagMem_tagMatch_2_MPORT_en", false,-1);
        tracep->declBus(c+557,"top i_cache tagMem_tagMatch_2_MPORT_addr", false,-1, 7,0);
        tracep->declBus(c+564,"top i_cache tagMem_tagMatch_2_MPORT_data", false,-1, 31,0);
        tracep->declBit(c+680,"top i_cache tagMem_tagMatch_3_MPORT_en", false,-1);
        tracep->declBus(c+559,"top i_cache tagMem_tagMatch_3_MPORT_addr", false,-1, 7,0);
        tracep->declBus(c+565,"top i_cache tagMem_tagMatch_3_MPORT_data", false,-1, 31,0);
        tracep->declBus(c+566,"top i_cache tagMem_MPORT_1_data", false,-1, 31,0);
        tracep->declBus(c+549,"top i_cache tagMem_MPORT_1_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache tagMem_MPORT_1_mask", false,-1);
        tracep->declBit(c+550,"top i_cache tagMem_MPORT_1_en", false,-1);
        tracep->declBus(c+566,"top i_cache tagMem_MPORT_6_data", false,-1, 31,0);
        tracep->declBus(c+551,"top i_cache tagMem_MPORT_6_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top i_cache tagMem_MPORT_6_mask", false,-1);
        tracep->declBit(c+552,"top i_cache tagMem_MPORT_6_en", false,-1);
        tracep->declBit(c+680,"top i_cache quene_replace_way_MPORT_en", false,-1);
        tracep->declBus(c+567,"top i_cache quene_replace_way_MPORT_addr", false,-1, 5,0);
        tracep->declBus(c+568,"top i_cache quene_replace_way_MPORT_data", false,-1, 7,0);
        tracep->declBit(c+550,"top i_cache quene_MPORT_4_en", false,-1);
        tracep->declBus(c+567,"top i_cache quene_MPORT_4_addr", false,-1, 5,0);
        tracep->declBus(c+569,"top i_cache quene_MPORT_4_data", false,-1, 7,0);
        tracep->declBit(c+552,"top i_cache quene_MPORT_9_en", false,-1);
        tracep->declBus(c+567,"top i_cache quene_MPORT_9_addr", false,-1, 5,0);
        tracep->declBus(c+569,"top i_cache quene_MPORT_9_data", false,-1, 7,0);
        tracep->declBus(c+570,"top i_cache quene_MPORT_3_data", false,-1, 7,0);
        tracep->declBus(c+567,"top i_cache quene_MPORT_3_addr", false,-1, 5,0);
        tracep->declBit(c+680,"top i_cache quene_MPORT_3_mask", false,-1);
        tracep->declBit(c+550,"top i_cache quene_MPORT_3_en", false,-1);
        tracep->declBus(c+571,"top i_cache quene_MPORT_8_data", false,-1, 7,0);
        tracep->declBus(c+567,"top i_cache quene_MPORT_8_addr", false,-1, 5,0);
        tracep->declBit(c+680,"top i_cache quene_MPORT_8_mask", false,-1);
        tracep->declBit(c+552,"top i_cache quene_MPORT_8_en", false,-1);
        tracep->declBus(c+572,"top i_cache addr", false,-1, 31,0);
        tracep->declBus(c+573,"top i_cache offset", false,-1, 3,0);
        tracep->declBus(c+567,"top i_cache index", false,-1, 5,0);
        tracep->declBus(c+574,"top i_cache tag", false,-1, 21,0);
        tracep->declBus(c+575,"top i_cache shift_bit", false,-1, 6,0);
        tracep->declBit(c+554,"top i_cache valid_0", false,-1);
        tracep->declBit(c+556,"top i_cache valid_1", false,-1);
        tracep->declBit(c+558,"top i_cache valid_2", false,-1);
        tracep->declBit(c+560,"top i_cache valid_3", false,-1);
        tracep->declBit(c+576,"top i_cache allvalid", false,-1);
        tracep->declBus(c+577,"top i_cache foundUnvalidIndex", false,-1, 1,0);
        tracep->declBus(c+578,"top i_cache unvalidIndex", false,-1, 8,0);
        tracep->declBit(c+579,"top i_cache tagMatch_0", false,-1);
        tracep->declBit(c+580,"top i_cache tagMatch_1", false,-1);
        tracep->declBit(c+581,"top i_cache tagMatch_2", false,-1);
        tracep->declBit(c+582,"top i_cache tagMatch_3", false,-1);
        tracep->declBit(c+583,"top i_cache anyMatch", false,-1);
        tracep->declBus(c+584,"top i_cache foundtagIndex", false,-1, 1,0);
        tracep->declBus(c+585,"top i_cache tagIndex", false,-1, 8,0);
        tracep->declQuad(c+586,"top i_cache receive_data_0", false,-1, 63,0);
        tracep->declQuad(c+588,"top i_cache receive_data_1", false,-1, 63,0);
        tracep->declBus(c+590,"top i_cache receive_num", false,-1, 2,0);
        tracep->declBus(c+591,"top i_cache replace_way", false,-1, 1,0);
        tracep->declBus(c+592,"top i_cache state", false,-1, 2,0);
        tracep->declBus(c+593,"top i_cache replaceIndex", false,-1, 31,0);
        tracep->declBit(c+673,"top d_cache clock", false,-1);
        tracep->declBit(c+674,"top d_cache reset", false,-1);
        tracep->declBus(c+81,"top d_cache io_from_lsu_araddr", false,-1, 31,0);
        tracep->declBit(c+82,"top d_cache io_from_lsu_arvalid", false,-1);
        tracep->declBus(c+81,"top d_cache io_from_lsu_awaddr", false,-1, 31,0);
        tracep->declBit(c+83,"top d_cache io_from_lsu_awvalid", false,-1);
        tracep->declQuad(c+84,"top d_cache io_from_lsu_wdata", false,-1, 63,0);
        tracep->declBus(c+86,"top d_cache io_from_lsu_wstrb", false,-1, 7,0);
        tracep->declBit(c+87,"top d_cache io_from_lsu_wvalid", false,-1);
        tracep->declQuad(c+77,"top d_cache io_to_lsu_rdata", false,-1, 63,0);
        tracep->declBit(c+79,"top d_cache io_to_lsu_rvalid", false,-1);
        tracep->declBit(c+80,"top d_cache io_to_lsu_bvalid", false,-1);
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
        tracep->declBus(c+595,"top d_cache cacheLine_MPORT_1_addr", false,-1, 7,0);
        tracep->declArray(c+596,"top d_cache cacheLine_MPORT_1_data", false,-1, 127,0);
        tracep->declBit(c+600,"top d_cache cacheLine_write_back_data_MPORT_en", false,-1);
        tracep->declBus(c+601,"top d_cache cacheLine_write_back_data_MPORT_addr", false,-1, 7,0);
        tracep->declArray(c+602,"top d_cache cacheLine_write_back_data_MPORT_data", false,-1, 127,0);
        tracep->declBit(c+606,"top d_cache cacheLine_io_to_lsu_rdata_MPORT_en", false,-1);
        tracep->declBus(c+595,"top d_cache cacheLine_io_to_lsu_rdata_MPORT_addr", false,-1, 7,0);
        tracep->declArray(c+596,"top d_cache cacheLine_io_to_lsu_rdata_MPORT_data", false,-1, 127,0);
        tracep->declArray(c+607,"top d_cache cacheLine_MPORT_data", false,-1, 127,0);
        tracep->declBus(c+595,"top d_cache cacheLine_MPORT_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top d_cache cacheLine_MPORT_mask", false,-1);
        tracep->declBit(c+594,"top d_cache cacheLine_MPORT_en", false,-1);
        tracep->declArray(c+611,"top d_cache cacheLine_MPORT_3_data", false,-1, 127,0);
        tracep->declBus(c+615,"top d_cache cacheLine_MPORT_3_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top d_cache cacheLine_MPORT_3_mask", false,-1);
        tracep->declBit(c+616,"top d_cache cacheLine_MPORT_3_en", false,-1);
        tracep->declArray(c+611,"top d_cache cacheLine_MPORT_8_data", false,-1, 127,0);
        tracep->declBus(c+601,"top d_cache cacheLine_MPORT_8_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top d_cache cacheLine_MPORT_8_mask", false,-1);
        tracep->declBit(c+617,"top d_cache cacheLine_MPORT_8_en", false,-1);
        tracep->declBit(c+680,"top d_cache validMem_valid_0_MPORT_en", false,-1);
        tracep->declBus(c+618,"top d_cache validMem_valid_0_MPORT_addr", false,-1, 7,0);
        tracep->declBit(c+619,"top d_cache validMem_valid_0_MPORT_data", false,-1);
        tracep->declBit(c+680,"top d_cache validMem_valid_1_MPORT_en", false,-1);
        tracep->declBus(c+620,"top d_cache validMem_valid_1_MPORT_addr", false,-1, 7,0);
        tracep->declBit(c+621,"top d_cache validMem_valid_1_MPORT_data", false,-1);
        tracep->declBit(c+680,"top d_cache validMem_valid_2_MPORT_en", false,-1);
        tracep->declBus(c+622,"top d_cache validMem_valid_2_MPORT_addr", false,-1, 7,0);
        tracep->declBit(c+623,"top d_cache validMem_valid_2_MPORT_data", false,-1);
        tracep->declBit(c+680,"top d_cache validMem_valid_3_MPORT_en", false,-1);
        tracep->declBus(c+624,"top d_cache validMem_valid_3_MPORT_addr", false,-1, 7,0);
        tracep->declBit(c+625,"top d_cache validMem_valid_3_MPORT_data", false,-1);
        tracep->declBit(c+680,"top d_cache validMem_MPORT_5_data", false,-1);
        tracep->declBus(c+615,"top d_cache validMem_MPORT_5_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top d_cache validMem_MPORT_5_mask", false,-1);
        tracep->declBit(c+616,"top d_cache validMem_MPORT_5_en", false,-1);
        tracep->declBit(c+680,"top d_cache validMem_MPORT_10_data", false,-1);
        tracep->declBus(c+601,"top d_cache validMem_MPORT_10_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top d_cache validMem_MPORT_10_mask", false,-1);
        tracep->declBit(c+617,"top d_cache validMem_MPORT_10_en", false,-1);
        tracep->declBit(c+680,"top d_cache tagMem_tagMatch_0_MPORT_en", false,-1);
        tracep->declBus(c+618,"top d_cache tagMem_tagMatch_0_MPORT_addr", false,-1, 7,0);
        tracep->declBus(c+626,"top d_cache tagMem_tagMatch_0_MPORT_data", false,-1, 31,0);
        tracep->declBit(c+680,"top d_cache tagMem_tagMatch_1_MPORT_en", false,-1);
        tracep->declBus(c+620,"top d_cache tagMem_tagMatch_1_MPORT_addr", false,-1, 7,0);
        tracep->declBus(c+627,"top d_cache tagMem_tagMatch_1_MPORT_data", false,-1, 31,0);
        tracep->declBit(c+680,"top d_cache tagMem_tagMatch_2_MPORT_en", false,-1);
        tracep->declBus(c+622,"top d_cache tagMem_tagMatch_2_MPORT_addr", false,-1, 7,0);
        tracep->declBus(c+628,"top d_cache tagMem_tagMatch_2_MPORT_data", false,-1, 31,0);
        tracep->declBit(c+680,"top d_cache tagMem_tagMatch_3_MPORT_en", false,-1);
        tracep->declBus(c+624,"top d_cache tagMem_tagMatch_3_MPORT_addr", false,-1, 7,0);
        tracep->declBus(c+629,"top d_cache tagMem_tagMatch_3_MPORT_data", false,-1, 31,0);
        tracep->declBit(c+600,"top d_cache tagMem_write_back_addr_MPORT_en", false,-1);
        tracep->declBus(c+601,"top d_cache tagMem_write_back_addr_MPORT_addr", false,-1, 7,0);
        tracep->declBus(c+630,"top d_cache tagMem_write_back_addr_MPORT_data", false,-1, 31,0);
        tracep->declBus(c+631,"top d_cache tagMem_MPORT_4_data", false,-1, 31,0);
        tracep->declBus(c+615,"top d_cache tagMem_MPORT_4_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top d_cache tagMem_MPORT_4_mask", false,-1);
        tracep->declBit(c+616,"top d_cache tagMem_MPORT_4_en", false,-1);
        tracep->declBus(c+631,"top d_cache tagMem_MPORT_9_data", false,-1, 31,0);
        tracep->declBus(c+601,"top d_cache tagMem_MPORT_9_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top d_cache tagMem_MPORT_9_mask", false,-1);
        tracep->declBit(c+617,"top d_cache tagMem_MPORT_9_en", false,-1);
        tracep->declBit(c+617,"top d_cache dirtyMem_MPORT_13_en", false,-1);
        tracep->declBus(c+601,"top d_cache dirtyMem_MPORT_13_addr", false,-1, 7,0);
        tracep->declBit(c+632,"top d_cache dirtyMem_MPORT_13_data", false,-1);
        tracep->declBit(c+680,"top d_cache dirtyMem_MPORT_2_data", false,-1);
        tracep->declBus(c+595,"top d_cache dirtyMem_MPORT_2_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top d_cache dirtyMem_MPORT_2_mask", false,-1);
        tracep->declBit(c+594,"top d_cache dirtyMem_MPORT_2_en", false,-1);
        tracep->declBit(c+714,"top d_cache dirtyMem_MPORT_14_data", false,-1);
        tracep->declBus(c+601,"top d_cache dirtyMem_MPORT_14_addr", false,-1, 7,0);
        tracep->declBit(c+680,"top d_cache dirtyMem_MPORT_14_mask", false,-1);
        tracep->declBit(c+600,"top d_cache dirtyMem_MPORT_14_en", false,-1);
        tracep->declBit(c+680,"top d_cache quene_replace_way_MPORT_en", false,-1);
        tracep->declBus(c+633,"top d_cache quene_replace_way_MPORT_addr", false,-1, 5,0);
        tracep->declBus(c+634,"top d_cache quene_replace_way_MPORT_data", false,-1, 7,0);
        tracep->declBit(c+616,"top d_cache quene_MPORT_7_en", false,-1);
        tracep->declBus(c+633,"top d_cache quene_MPORT_7_addr", false,-1, 5,0);
        tracep->declBus(c+635,"top d_cache quene_MPORT_7_data", false,-1, 7,0);
        tracep->declBit(c+617,"top d_cache quene_MPORT_12_en", false,-1);
        tracep->declBus(c+633,"top d_cache quene_MPORT_12_addr", false,-1, 5,0);
        tracep->declBus(c+635,"top d_cache quene_MPORT_12_data", false,-1, 7,0);
        tracep->declBus(c+636,"top d_cache quene_MPORT_6_data", false,-1, 7,0);
        tracep->declBus(c+633,"top d_cache quene_MPORT_6_addr", false,-1, 5,0);
        tracep->declBit(c+680,"top d_cache quene_MPORT_6_mask", false,-1);
        tracep->declBit(c+616,"top d_cache quene_MPORT_6_en", false,-1);
        tracep->declBus(c+637,"top d_cache quene_MPORT_11_data", false,-1, 7,0);
        tracep->declBus(c+633,"top d_cache quene_MPORT_11_addr", false,-1, 5,0);
        tracep->declBit(c+680,"top d_cache quene_MPORT_11_mask", false,-1);
        tracep->declBit(c+617,"top d_cache quene_MPORT_11_en", false,-1);
        tracep->declBus(c+638,"top d_cache offset", false,-1, 3,0);
        tracep->declBus(c+633,"top d_cache index", false,-1, 5,0);
        tracep->declBus(c+639,"top d_cache tag", false,-1, 21,0);
        tracep->declBit(c+619,"top d_cache valid_0", false,-1);
        tracep->declBit(c+621,"top d_cache valid_1", false,-1);
        tracep->declBit(c+623,"top d_cache valid_2", false,-1);
        tracep->declBit(c+625,"top d_cache valid_3", false,-1);
        tracep->declBit(c+640,"top d_cache allvalid", false,-1);
        tracep->declBus(c+641,"top d_cache foundUnvalidIndex", false,-1, 1,0);
        tracep->declBus(c+642,"top d_cache unvalidIndex", false,-1, 8,0);
        tracep->declBit(c+643,"top d_cache tagMatch_0", false,-1);
        tracep->declBit(c+644,"top d_cache tagMatch_1", false,-1);
        tracep->declBit(c+645,"top d_cache tagMatch_2", false,-1);
        tracep->declBit(c+646,"top d_cache tagMatch_3", false,-1);
        tracep->declBit(c+647,"top d_cache anyMatch", false,-1);
        tracep->declBus(c+648,"top d_cache foundtagIndex", false,-1, 1,0);
        tracep->declBus(c+649,"top d_cache tagIndex", false,-1, 8,0);
        tracep->declArray(c+650,"top d_cache write_back_data", false,-1, 127,0);
        tracep->declBus(c+654,"top d_cache write_back_addr", false,-1, 31,0);
        tracep->declQuad(c+655,"top d_cache receive_data_0", false,-1, 63,0);
        tracep->declQuad(c+657,"top d_cache receive_data_1", false,-1, 63,0);
        tracep->declBus(c+659,"top d_cache receive_num", false,-1, 2,0);
        tracep->declBus(c+660,"top d_cache replace_way", false,-1, 1,0);
        tracep->declBus(c+661,"top d_cache shift_bit", false,-1, 6,0);
        tracep->declQuad(c+662,"top d_cache wmask", false,-1, 63,0);
        tracep->declBus(c+664,"top d_cache state", false,-1, 2,0);
        tracep->declBus(c+665,"top d_cache replaceIndex", false,-1, 31,0);
        tracep->declBit(c+673,"top axi clock", false,-1);
        tracep->declBit(c+674,"top axi reset", false,-1);
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
        tracep->declQuad(c+666,"top axi Mem_modle_Raddr", false,-1, 63,0);
        tracep->declQuad(c+117,"top axi Mem_modle_Rdata", false,-1, 63,0);
        tracep->declQuad(c+668,"top axi Mem_modle_Waddr", false,-1, 63,0);
        tracep->declQuad(c+130,"top axi Mem_modle_Wdata", false,-1, 63,0);
        tracep->declBus(c+132,"top axi Mem_modle_Wmask", false,-1, 7,0);
        tracep->declBit(c+121,"top axi Mem_modle_Write_en", false,-1);
        tracep->declBit(c+120,"top axi Mem_modle_Read_en", false,-1);
        tracep->declBit(c+121,"top axi axi_wready", false,-1);
        tracep->declBit(c+122,"top axi axi_bvalid", false,-1);
        tracep->declBit(c+120,"top axi axi_rvalid", false,-1);
        tracep->declBus(c+670,"top axi arlen", false,-1, 7,0);
        tracep->declBus(c+671,"top axi awlen", false,-1, 7,0);
        tracep->declQuad(c+666,"top axi araddr", false,-1, 63,0);
        tracep->declQuad(c+668,"top axi awaddr", false,-1, 63,0);
        tracep->declBus(c+672,"top axi state", false,-1, 2,0);
        tracep->declQuad(c+666,"top axi Mem_modle Raddr", false,-1, 63,0);
        tracep->declQuad(c+668,"top axi Mem_modle Waddr", false,-1, 63,0);
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

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp268;
    VlWide<4>/*127:0*/ __Vtemp269;
    VlWide<4>/*127:0*/ __Vtemp276;
    VlWide<4>/*127:0*/ __Vtemp277;
    VlWide<4>/*127:0*/ __Vtemp278;
    VlWide<3>/*95:0*/ __Vtemp282;
    VlWide<3>/*95:0*/ __Vtemp283;
    VlWide<3>/*95:0*/ __Vtemp287;
    VlWide<3>/*95:0*/ __Vtemp291;
    VlWide<3>/*95:0*/ __Vtemp298;
    VlWide<4>/*127:0*/ __Vtemp299;
    VlWide<3>/*95:0*/ __Vtemp300;
    VlWide<4>/*127:0*/ __Vtemp301;
    VlWide<4>/*127:0*/ __Vtemp302;
    VlWide<4>/*127:0*/ __Vtemp308;
    VlWide<4>/*127:0*/ __Vtemp309;
    VlWide<4>/*127:0*/ __Vtemp310;
    VlWide<4>/*127:0*/ __Vtemp311;
    VlWide<4>/*127:0*/ __Vtemp312;
    VlWide<6>/*191:0*/ __Vtemp314;
    VlWide<6>/*191:0*/ __Vtemp315;
    VlWide<6>/*191:0*/ __Vtemp320;
    VlWide<6>/*191:0*/ __Vtemp321;
    VlWide<4>/*127:0*/ __Vtemp326;
    VlWide<4>/*127:0*/ __Vtemp327;
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
        __Vtemp268[0U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                           >> 4U))))][0U];
        __Vtemp268[1U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                           >> 4U))))][1U];
        __Vtemp268[2U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                           >> 4U))))][2U];
        __Vtemp268[3U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                           >> 4U))))][3U];
        VL_SHIFTR_WWI(128,128,7, __Vtemp269, __Vtemp268, 
                      (0x78U & (vlSelf->top__DOT__i_cache__DOT__addr 
                                << 3U)));
        tracep->fullQData(oldp+22,((((QData)((IData)(
                                                     ((1U 
                                                       == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                       ? 
                                                      __Vtemp269[1U]
                                                       : 0U))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((1U 
                                                                   == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                                   ? 
                                                                  __Vtemp269[0U]
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
        tracep->fullBit(oldp+31,(vlSelf->top__DOT__EXU_io_es_allowin));
        tracep->fullQData(oldp+32,(vlSelf->top__DOT__IDU__DOT__ds_pc),64);
        tracep->fullIData(oldp+34,(vlSelf->top__DOT__IDU__DOT__ctrl_bus_0),32);
        tracep->fullQData(oldp+35,(((1U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                     ? vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data
                                     : vlSelf->top__DOT__IDU__DOT__src1)),64);
        tracep->fullQData(oldp+37,(((IData)(vlSelf->top__DOT__IDU__DOT__ctrl_bus_3)
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
        tracep->fullBit(oldp+42,(((0x13U == (0x707fU 
                                             & vlSelf->top__DOT__IDU__DOT__inst)) 
                                  | ((0x67U == (0x707fU 
                                                & vlSelf->top__DOT__IDU__DOT__inst)) 
                                     | ((0x3013U == 
                                         (0x707fU & vlSelf->top__DOT__IDU__DOT__inst)) 
                                        | ((0x1bU == 
                                            (0x707fU 
                                             & vlSelf->top__DOT__IDU__DOT__inst)) 
                                           | ((0x40005013U 
                                               == (0xfc00707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst)) 
                                              | ((0x4013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                 | ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                    | ((0x1013U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                       | ((0x5013U 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                          | ((0x101bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                             | ((0x4000501bU 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                                | ((0x501bU 
                                                                    == 
                                                                    (0xfe00707fU 
                                                                     & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                                   | ((0x6013U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                                      | ((0x2013U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                                         | (IData)(vlSelf->top__DOT__IDU__DOT___ctrl_bus_T_303)))))))))))))))));
        tracep->fullBit(oldp+43,((0x44U == (IData)(vlSelf->top__DOT__IDU__DOT__ctrl_bus_1))));
        tracep->fullBit(oldp+44,(((0x13U != (0x707fU 
                                             & vlSelf->top__DOT__IDU__DOT__inst)) 
                                  & (IData)(vlSelf->top__DOT__IDU__DOT___ctrl_bus_T_505))));
        tracep->fullCData(oldp+45,(((2U == (7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                  >> 0xcU)))
                                     ? 0xfU : ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->top__DOT__IDU__DOT__inst 
                                                    >> 0xcU)))
                                                ? 1U
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__IDU__DOT__inst 
                                                        >> 0xcU)))
                                                    ? 3U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->top__DOT__IDU__DOT__inst 
                                                         >> 0xcU)))
                                                     ? 0xffU
                                                     : 0U))))),8);
        tracep->fullCData(oldp+46,((((0x13U != (0x707fU 
                                                & vlSelf->top__DOT__IDU__DOT__inst)) 
                                     & (IData)(vlSelf->top__DOT__IDU__DOT___ctrl_bus_T_505))
                                     ? (7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                              >> 0xcU))
                                     : 7U)),3);
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
        tracep->fullBit(oldp+62,(vlSelf->top__DOT__LSU_io_ms_allowin));
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__EXU__DOT__es_pc),64);
        tracep->fullQData(oldp+65,(vlSelf->top__DOT__EXU__DOT__store_data),64);
        tracep->fullBit(oldp+67,(vlSelf->top__DOT__EXU__DOT__st_we));
        tracep->fullCData(oldp+68,(vlSelf->top__DOT__EXU__DOT__st_wstrb),8);
        tracep->fullBit(oldp+69,(vlSelf->top__DOT__EXU__DOT__ld_we));
        tracep->fullCData(oldp+70,(vlSelf->top__DOT__EXU__DOT__load_type),3);
        tracep->fullQData(oldp+71,(vlSelf->top__DOT__LSU__DOT__ms_pc),64);
        tracep->fullQData(oldp+73,(((7U != (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                     ? vlSelf->top__DOT__LSU__DOT__rdata
                                     : vlSelf->top__DOT__LSU__DOT__ms_res)),64);
        tracep->fullBit(oldp+75,(vlSelf->top__DOT__LSU__DOT__ms_rf_we));
        tracep->fullBit(oldp+76,(((0xa0000000ULL <= vlSelf->top__DOT__LSU__DOT__maddr) 
                                  & ((IData)(vlSelf->top__DOT__LSU__DOT__ren) 
                                     | (IData)(vlSelf->top__DOT__LSU__DOT__wen)))));
        tracep->fullQData(oldp+77,((((QData)((IData)(
                                                     vlSelf->top__DOT__d_cache__DOT___GEN_421[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__d_cache__DOT___GEN_421[0U])))),64);
        tracep->fullBit(oldp+79,(((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
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
        tracep->fullBit(oldp+80,(((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
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
        tracep->fullIData(oldp+81,((IData)(vlSelf->top__DOT__LSU__DOT__maddr)),32);
        tracep->fullBit(oldp+82,(vlSelf->top__DOT__LSU_io_axi_out_arvalid));
        tracep->fullBit(oldp+83,(vlSelf->top__DOT__LSU_io_axi_out_awvalid));
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__LSU__DOT__store_data),64);
        tracep->fullCData(oldp+86,(vlSelf->top__DOT__LSU__DOT__wstrb),8);
        tracep->fullBit(oldp+87,(vlSelf->top__DOT__LSU__DOT__wen));
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__WBU__DOT__ws_pc),64);
        tracep->fullBit(oldp+90,(((IData)(vlSelf->top__DOT__WBU__DOT__device_access) 
                                  & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid))));
        tracep->fullIData(oldp+91,((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_466)),32);
        tracep->fullCData(oldp+92,(vlSelf->top__DOT__i_cache_io_to_axi_arvalid),8);
        tracep->fullBit(oldp+93,(vlSelf->top__DOT__i_cache_io_to_axi_arvalid));
        tracep->fullBit(oldp+94,(vlSelf->top__DOT__i_cache_io_to_axi_rready));
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata),64);
        tracep->fullBit(oldp+97,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast));
        tracep->fullBit(oldp+98,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid));
        tracep->fullIData(oldp+99,((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_403)),32);
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
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_403)
                                          : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_403)
                                              : ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_466)
                                                  : 0U)))
                                      : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_466)
                                          : ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_403)
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_403)
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
        tracep->fullIData(oldp+135,((2U == (IData)(vlSelf->top__DOT__IDU__DOT__ctrl_bus_0))),32);
        tracep->fullIData(oldp+136,((0x3dU == (IData)(vlSelf->top__DOT__IDU__DOT__ctrl_bus_0))),32);
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
        tracep->fullBit(oldp+140,(vlSelf->top__DOT__skip));
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__Register__DOT__Reg[0]),64);
        tracep->fullQData(oldp+143,(vlSelf->top__DOT__Register__DOT__Reg[1]),64);
        tracep->fullQData(oldp+145,(vlSelf->top__DOT__Register__DOT__Reg[2]),64);
        tracep->fullQData(oldp+147,(vlSelf->top__DOT__Register__DOT__Reg[3]),64);
        tracep->fullQData(oldp+149,(vlSelf->top__DOT__Register__DOT__Reg[4]),64);
        tracep->fullQData(oldp+151,(vlSelf->top__DOT__Register__DOT__Reg[5]),64);
        tracep->fullQData(oldp+153,(vlSelf->top__DOT__Register__DOT__Reg[6]),64);
        tracep->fullQData(oldp+155,(vlSelf->top__DOT__Register__DOT__Reg[7]),64);
        tracep->fullQData(oldp+157,(vlSelf->top__DOT__Register__DOT__Reg[8]),64);
        tracep->fullQData(oldp+159,(vlSelf->top__DOT__Register__DOT__Reg[9]),64);
        tracep->fullQData(oldp+161,(vlSelf->top__DOT__Register__DOT__Reg[10]),64);
        tracep->fullQData(oldp+163,(vlSelf->top__DOT__Register__DOT__Reg[11]),64);
        tracep->fullQData(oldp+165,(vlSelf->top__DOT__Register__DOT__Reg[12]),64);
        tracep->fullQData(oldp+167,(vlSelf->top__DOT__Register__DOT__Reg[13]),64);
        tracep->fullQData(oldp+169,(vlSelf->top__DOT__Register__DOT__Reg[14]),64);
        tracep->fullQData(oldp+171,(vlSelf->top__DOT__Register__DOT__Reg[15]),64);
        tracep->fullQData(oldp+173,(vlSelf->top__DOT__Register__DOT__Reg[16]),64);
        tracep->fullQData(oldp+175,(vlSelf->top__DOT__Register__DOT__Reg[17]),64);
        tracep->fullQData(oldp+177,(vlSelf->top__DOT__Register__DOT__Reg[18]),64);
        tracep->fullQData(oldp+179,(vlSelf->top__DOT__Register__DOT__Reg[19]),64);
        tracep->fullQData(oldp+181,(vlSelf->top__DOT__Register__DOT__Reg[20]),64);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT__Register__DOT__Reg[21]),64);
        tracep->fullQData(oldp+185,(vlSelf->top__DOT__Register__DOT__Reg[22]),64);
        tracep->fullQData(oldp+187,(vlSelf->top__DOT__Register__DOT__Reg[23]),64);
        tracep->fullQData(oldp+189,(vlSelf->top__DOT__Register__DOT__Reg[24]),64);
        tracep->fullQData(oldp+191,(vlSelf->top__DOT__Register__DOT__Reg[25]),64);
        tracep->fullQData(oldp+193,(vlSelf->top__DOT__Register__DOT__Reg[26]),64);
        tracep->fullQData(oldp+195,(vlSelf->top__DOT__Register__DOT__Reg[27]),64);
        tracep->fullQData(oldp+197,(vlSelf->top__DOT__Register__DOT__Reg[28]),64);
        tracep->fullQData(oldp+199,(vlSelf->top__DOT__Register__DOT__Reg[29]),64);
        tracep->fullQData(oldp+201,(vlSelf->top__DOT__Register__DOT__Reg[30]),64);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__Register__DOT__Reg[31]),64);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__Register__DOT__Reg
                                    [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+207,(vlSelf->top__DOT__Register__DOT__Reg
                                    [vlSelf->top__DOT__IDU_io_raddr2]),64);
        tracep->fullQData(oldp+209,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0U]),64);
        tracep->fullQData(oldp+211,(vlSelf->top__DOT__Register__DOT__Reg
                                    [1U]),64);
        tracep->fullQData(oldp+213,(vlSelf->top__DOT__Register__DOT__Reg
                                    [2U]),64);
        tracep->fullQData(oldp+215,(vlSelf->top__DOT__Register__DOT__Reg
                                    [3U]),64);
        tracep->fullQData(oldp+217,(vlSelf->top__DOT__Register__DOT__Reg
                                    [4U]),64);
        tracep->fullQData(oldp+219,(vlSelf->top__DOT__Register__DOT__Reg
                                    [5U]),64);
        tracep->fullQData(oldp+221,(vlSelf->top__DOT__Register__DOT__Reg
                                    [6U]),64);
        tracep->fullQData(oldp+223,(vlSelf->top__DOT__Register__DOT__Reg
                                    [7U]),64);
        tracep->fullQData(oldp+225,(vlSelf->top__DOT__Register__DOT__Reg
                                    [8U]),64);
        tracep->fullQData(oldp+227,(vlSelf->top__DOT__Register__DOT__Reg
                                    [9U]),64);
        tracep->fullQData(oldp+229,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xaU]),64);
        tracep->fullQData(oldp+231,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xbU]),64);
        tracep->fullQData(oldp+233,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xcU]),64);
        tracep->fullQData(oldp+235,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xdU]),64);
        tracep->fullQData(oldp+237,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xeU]),64);
        tracep->fullQData(oldp+239,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xfU]),64);
        tracep->fullQData(oldp+241,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x10U]),64);
        tracep->fullQData(oldp+243,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x11U]),64);
        tracep->fullQData(oldp+245,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x12U]),64);
        tracep->fullQData(oldp+247,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x13U]),64);
        tracep->fullQData(oldp+249,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x14U]),64);
        tracep->fullQData(oldp+251,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x15U]),64);
        tracep->fullQData(oldp+253,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x16U]),64);
        tracep->fullQData(oldp+255,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x17U]),64);
        tracep->fullQData(oldp+257,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x18U]),64);
        tracep->fullQData(oldp+259,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x19U]),64);
        tracep->fullQData(oldp+261,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1aU]),64);
        tracep->fullQData(oldp+263,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1bU]),64);
        tracep->fullQData(oldp+265,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1cU]),64);
        tracep->fullQData(oldp+267,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1dU]),64);
        tracep->fullQData(oldp+269,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1eU]),64);
        tracep->fullQData(oldp+271,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1fU]),64);
        tracep->fullBit(oldp+273,((((IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we) 
                                    & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)) 
                                   & (0U != (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_dst)))));
        tracep->fullQData(oldp+274,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0]),64);
        tracep->fullQData(oldp+276,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[1]),64);
        tracep->fullQData(oldp+278,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[2]),64);
        tracep->fullQData(oldp+280,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[3]),64);
        tracep->fullQData(oldp+282,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[4]),64);
        tracep->fullQData(oldp+284,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[5]),64);
        tracep->fullQData(oldp+286,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[6]),64);
        tracep->fullQData(oldp+288,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[7]),64);
        tracep->fullQData(oldp+290,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[8]),64);
        tracep->fullQData(oldp+292,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[9]),64);
        tracep->fullQData(oldp+294,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[10]),64);
        tracep->fullQData(oldp+296,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[11]),64);
        tracep->fullQData(oldp+298,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[12]),64);
        tracep->fullQData(oldp+300,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[13]),64);
        tracep->fullQData(oldp+302,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[14]),64);
        tracep->fullQData(oldp+304,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[15]),64);
        tracep->fullQData(oldp+306,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[16]),64);
        tracep->fullQData(oldp+308,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[17]),64);
        tracep->fullQData(oldp+310,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[18]),64);
        tracep->fullQData(oldp+312,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[19]),64);
        tracep->fullQData(oldp+314,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[20]),64);
        tracep->fullQData(oldp+316,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[21]),64);
        tracep->fullQData(oldp+318,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[22]),64);
        tracep->fullQData(oldp+320,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[23]),64);
        tracep->fullQData(oldp+322,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[24]),64);
        tracep->fullQData(oldp+324,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[25]),64);
        tracep->fullQData(oldp+326,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[26]),64);
        tracep->fullQData(oldp+328,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[27]),64);
        tracep->fullQData(oldp+330,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[28]),64);
        tracep->fullQData(oldp+332,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[29]),64);
        tracep->fullQData(oldp+334,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[30]),64);
        tracep->fullQData(oldp+336,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[31]),64);
        tracep->fullQData(oldp+338,(vlSelf->top__DOT__IFU__DOT__br_target),64);
        tracep->fullQData(oldp+340,(vlSelf->top__DOT__IFU__DOT__fs_pc_next),64);
        tracep->fullBit(oldp+342,(vlSelf->top__DOT__IFU__DOT__cache_init));
        tracep->fullQData(oldp+343,((4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc)),64);
        tracep->fullQData(oldp+345,(((IData)(vlSelf->top__DOT__IDU_io_br_taken)
                                      ? ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)
                                          ? vlSelf->top__DOT__IDU_io_br_target
                                          : vlSelf->top__DOT__IFU__DOT__br_target)
                                      : (4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc))),64);
        tracep->fullBit(oldp+347,(((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
                                   & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
        tracep->fullBit(oldp+348,((((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
                                    >> 1U) & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
        tracep->fullCData(oldp+349,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                      ? 1U : ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                               ? (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)
                                               : 0U))),2);
        tracep->fullQData(oldp+350,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                      ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                      : ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                          ? ((3U == 
                                              (7U & 
                                               (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0xcU)))
                                              ? (vlSelf->top__DOT__IDU__DOT__rdata1 
                                                 & (~ vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data))
                                              : ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->top__DOT__IDU__DOT__inst 
                                                      >> 0xcU)))
                                                  ? 
                                                 (vlSelf->top__DOT__IDU__DOT__rdata1 
                                                  | vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data)
                                                  : 
                                                 ((5U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__IDU__DOT__inst 
                                                       >> 0xcU)))
                                                   ? vlSelf->top__DOT__IDU__DOT__rdata1
                                                   : 0ULL)))
                                          : 0ULL))),64);
        tracep->fullQData(oldp+352,(((IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2)
                                      ? (((QData)((IData)(
                                                          vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])))
                                      : vlSelf->top__DOT__IDU__DOT___rdata2_T_1)),64);
        tracep->fullCData(oldp+354,(((2U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                      ? 0U : ((0x3eU 
                                               == (IData)(vlSelf->top__DOT__IDU__DOT__ctrl_bus_0))
                                               ? 1U
                                               : (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)))),2);
        tracep->fullQData(oldp+355,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data),64);
        tracep->fullIData(oldp+357,(vlSelf->top__DOT__IDU__DOT__inst),32);
        tracep->fullBit(oldp+358,(vlSelf->top__DOT__IDU__DOT__br_taken_cancel));
        tracep->fullBit(oldp+359,(vlSelf->top__DOT__IDU__DOT__ctrl_bus_4));
        tracep->fullCData(oldp+360,(vlSelf->top__DOT__IDU__DOT__ctrl_bus_1),7);
        tracep->fullIData(oldp+361,(vlSelf->top__DOT__IDU__DOT__ctrl_bus_1),32);
        tracep->fullCData(oldp+362,((0x7fU & vlSelf->top__DOT__IDU__DOT__inst)),7);
        tracep->fullCData(oldp+363,(vlSelf->top__DOT__IDU__DOT__ctrl_bus_0),7);
        tracep->fullCData(oldp+364,((7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+365,(vlSelf->top__DOT__IDU__DOT__csr_write),2);
        tracep->fullBit(oldp+366,(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1));
        tracep->fullBit(oldp+367,(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1));
        tracep->fullBit(oldp+368,(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs1));
        tracep->fullBit(oldp+369,(vlSelf->top__DOT__IDU__DOT__ctrl_bus_3));
        tracep->fullCData(oldp+370,(vlSelf->top__DOT__IDU__DOT__rs2),5);
        tracep->fullBit(oldp+371,(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2));
        tracep->fullBit(oldp+372,(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs2));
        tracep->fullBit(oldp+373,(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs2));
        tracep->fullBit(oldp+374,(vlSelf->top__DOT__IDU__DOT__ds_allowin));
        tracep->fullQData(oldp+375,(vlSelf->top__DOT__IDU__DOT__rdata1),64);
        tracep->fullQData(oldp+377,(vlSelf->top__DOT__IDU__DOT__rdata2),64);
        tracep->fullBit(oldp+379,((vlSelf->top__DOT__IDU__DOT___bne_res_T 
                                   != vlSelf->top__DOT__IDU__DOT___bne_res_T_1)));
        tracep->fullBit(oldp+380,((vlSelf->top__DOT__IDU__DOT___bne_res_T 
                                   == vlSelf->top__DOT__IDU__DOT___bne_res_T_1)));
        tracep->fullBit(oldp+381,(VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__IDU__DOT___bne_res_T, vlSelf->top__DOT__IDU__DOT___bne_res_T_1)));
        tracep->fullBit(oldp+382,(VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__IDU__DOT___bne_res_T, vlSelf->top__DOT__IDU__DOT___bne_res_T_1)));
        tracep->fullBit(oldp+383,((vlSelf->top__DOT__IDU__DOT__rdata1 
                                   < vlSelf->top__DOT__IDU__DOT__rdata2)));
        tracep->fullBit(oldp+384,((vlSelf->top__DOT__IDU__DOT__rdata1 
                                   >= vlSelf->top__DOT__IDU__DOT__rdata2)));
        tracep->fullBit(oldp+385,(vlSelf->top__DOT__IDU__DOT__ctrl_bus_6));
        tracep->fullSData(oldp+386,((vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0x14U)),12);
        tracep->fullIData(oldp+387,(((0x80000U & (vlSelf->top__DOT__IDU__DOT__inst 
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
        tracep->fullIData(oldp+388,((vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+389,(((0xfe0U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 7U)))),12);
        tracep->fullSData(oldp+390,(((0x800U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x14U)) 
                                     | ((0x400U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                   << 3U)) 
                                        | ((0x3f0U 
                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0x15U)) 
                                           | (0xfU 
                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 8U)))))),12);
        tracep->fullQData(oldp+391,(vlSelf->top__DOT__IDU__DOT__imm),64);
        tracep->fullCData(oldp+393,(vlSelf->top__DOT__IDU__DOT__csr_index),2);
        tracep->fullQData(oldp+394,(((3U == (7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                   >> 0xcU)))
                                      ? (vlSelf->top__DOT__IDU__DOT__rdata1 
                                         & (~ vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data))
                                      : ((2U == (7U 
                                                 & (vlSelf->top__DOT__IDU__DOT__inst 
                                                    >> 0xcU)))
                                          ? (vlSelf->top__DOT__IDU__DOT__rdata1 
                                             | vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data)
                                          : ((5U == 
                                              (7U & 
                                               (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0xcU)))
                                              ? vlSelf->top__DOT__IDU__DOT__rdata1
                                              : 0ULL)))),64);
        tracep->fullQData(oldp+396,(vlSelf->top__DOT__IDU__DOT__src1),64);
        tracep->fullQData(oldp+398,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[0]),64);
        tracep->fullQData(oldp+400,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[1]),64);
        tracep->fullQData(oldp+402,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[2]),64);
        tracep->fullQData(oldp+404,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[3]),64);
        tracep->fullQData(oldp+406,(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value),64);
        tracep->fullQData(oldp+408,(vlSelf->top__DOT__EXU__DOT__src2_value),64);
        tracep->fullIData(oldp+410,(vlSelf->top__DOT__EXU__DOT__ALUop),32);
        tracep->fullBit(oldp+411,(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy));
        tracep->fullQData(oldp+412,(vlSelf->top__DOT__EXU__DOT__src1_value),64);
        tracep->fullBit(oldp+414,((1U & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy)))));
        tracep->fullBit(oldp+415,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_mul_valid));
        tracep->fullBit(oldp+416,((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)));
        tracep->fullBit(oldp+417,(((0U != (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state)) 
                                   & ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state)) 
                                      & (0U == ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))))));
        tracep->fullIData(oldp+418,(((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
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
        tracep->fullIData(oldp+419,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_result_lo),32);
        tracep->fullBit(oldp+420,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_valid));
        tracep->fullBit(oldp+421,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw));
        tracep->fullBit(oldp+422,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed));
        tracep->fullBit(oldp+423,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start) 
                                   & VL_GTES_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num))));
        tracep->fullQData(oldp+424,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_quotient),64);
        tracep->fullQData(oldp+426,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder),64);
        tracep->fullBit(oldp+428,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__mul_valid));
        tracep->fullBit(oldp+429,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__div_valid));
        tracep->fullQData(oldp+430,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res),64);
        tracep->fullQData(oldp+432,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sub_res),64);
        tracep->fullQData(oldp+434,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sra_res),64);
        tracep->fullQData(oldp+436,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),64);
        VL_EXTEND_WQ(127,64, __Vtemp276, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
        VL_SHIFTL_WWI(127,127,6, __Vtemp277, __Vtemp276, 
                      (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
        __Vtemp278[0U] = __Vtemp277[0U];
        __Vtemp278[1U] = __Vtemp277[1U];
        __Vtemp278[2U] = __Vtemp277[2U];
        __Vtemp278[3U] = (0x7fffffffU & __Vtemp277[3U]);
        tracep->fullWData(oldp+438,(__Vtemp278),127);
        tracep->fullIData(oldp+442,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value), 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),32);
        tracep->fullIData(oldp+443,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__srlw_res),32);
        tracep->fullQData(oldp+444,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sllw_res),63);
        tracep->fullQData(oldp+446,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     | vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+448,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     ^ vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+450,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     & vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+452,((((QData)((IData)(
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
        tracep->fullIData(oldp+454,((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_quotient)),32);
        tracep->fullIData(oldp+455,((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder)),32);
        tracep->fullWData(oldp+456,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res),127);
        tracep->fullCData(oldp+460,((7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])),3);
        tracep->fullQData(oldp+461,((((QData)((IData)(
                                                      vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))),64);
        tracep->fullBit(oldp+463,(((6U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])) 
                                   | ((5U == (7U & 
                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])) 
                                      | (4U == (7U 
                                                & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))))));
        VL_EXTEND_WQ(65,64, __Vtemp282, (~ (((QData)((IData)(
                                                             vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
        VL_EXTEND_WQ(65,64, __Vtemp283, (~ (((QData)((IData)(
                                                             vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
        VL_EXTEND_WQ(65,64, __Vtemp287, ((2U == (7U 
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
        __Vtemp291[1U] = ((4U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
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
                               : __Vtemp287[1U]));
        __Vtemp298[2U] = ((7U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                           ? 0U : (1U & ((6U == (7U 
                                                 & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                          ? __Vtemp282[2U]
                                          : ((5U == 
                                              (7U & 
                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                              ? __Vtemp283[2U]
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
                                                  __Vtemp287[2U]))))));
        tracep->fullQData(oldp+464,((((QData)((IData)(
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
                                                        __Vtemp282[1U]
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (7U 
                                                           & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                          ? 
                                                         __Vtemp283[1U]
                                                          : 
                                                         __Vtemp291[1U]))))) 
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
                                                                    __Vtemp282[0U]
                                                                     : 
                                                                    ((5U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                                      ? 
                                                                     __Vtemp283[0U]
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
                                                                       __Vtemp287[0U]))))))))),64);
        tracep->fullBit(oldp+466,((1U & ((IData)((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                                  >> 0x3fU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__EXU__DOT__src2_value 
                                                    >> 0x3fU))))));
        tracep->fullQData(oldp+467,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__res),64);
        tracep->fullCData(oldp+469,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state),2);
        tracep->fullWData(oldp+470,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1),128);
        tracep->fullWData(oldp+474,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2),65);
        tracep->fullQData(oldp+477,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32),64);
        tracep->fullQData(oldp+479,(((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)
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
        __Vtemp299[0U] = (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32);
        __Vtemp299[1U] = (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                  >> 0x20U));
        __Vtemp299[2U] = (IData)(((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                 >> 0x3fU)))
                                   ? 0xffffffffffffffffULL
                                   : 0ULL));
        __Vtemp299[3U] = (IData)((((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                  >> 0x3fU)))
                                    ? 0xffffffffffffffffULL
                                    : 0ULL) >> 0x20U));
        tracep->fullWData(oldp+481,(__Vtemp299),128);
        tracep->fullQData(oldp+485,((((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)
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
        tracep->fullBit(oldp+487,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg));
        tracep->fullBit(oldp+488,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg));
        tracep->fullBit(oldp+489,((((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg) 
                                    & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg))) 
                                   | ((~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)) 
                                      & (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)))));
        tracep->fullQData(oldp+490,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s),64);
        tracep->fullQData(oldp+492,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s),64);
        tracep->fullQData(oldp+494,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                      ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                      : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)),64);
        tracep->fullQData(oldp+496,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                      ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                      : vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+498,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                      ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)
                                          ? (1ULL + 
                                             (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s))
                                          : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s)
                                      : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                          ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                          : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))),64);
        tracep->fullQData(oldp+500,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                      ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)
                                          ? (1ULL + 
                                             (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s))
                                          : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s)
                                      : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                          ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                          : vlSelf->top__DOT__EXU__DOT__src2_value))),64);
        VL_EXTEND_WQ(65,64, __Vtemp300, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                          ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)
                                              ? (1ULL 
                                                 + 
                                                 (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s))
                                              : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s)
                                          : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                              ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                              : vlSelf->top__DOT__EXU__DOT__src2_value)));
        tracep->fullWData(oldp+502,(__Vtemp300),65);
        tracep->fullWData(oldp+505,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand),128);
        tracep->fullBit(oldp+509,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start));
        tracep->fullQData(oldp+510,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient),64);
        tracep->fullIData(oldp+512,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num),32);
        VL_EXTEND_WQ(128,64, __Vtemp301, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                           ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)
                                               ? (1ULL 
                                                  + 
                                                  (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s))
                                               : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s)
                                           : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                               ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                               : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)));
        tracep->fullWData(oldp+513,(__Vtemp301),128);
        tracep->fullWData(oldp+517,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res),65);
        __Vtemp302[0U] = 0U;
        __Vtemp302[1U] = (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                          << 0x1fU);
        __Vtemp302[2U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                           >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                     << 0x1fU));
        __Vtemp302[3U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                           >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                     << 0x1fU));
        tracep->fullWData(oldp+520,(__Vtemp302),128);
        if ((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])) {
            __Vtemp308[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U];
            __Vtemp308[1U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U];
            __Vtemp308[2U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U];
            __Vtemp308[3U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U];
        } else {
            __Vtemp308[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U];
            __Vtemp308[1U] = ((0x7fffffffU & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U]) 
                              | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                                 << 0x1fU));
            __Vtemp308[2U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                               >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                         << 0x1fU));
            __Vtemp308[3U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                               >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                         << 0x1fU));
        }
        tracep->fullWData(oldp+524,(__Vtemp308),128);
        tracep->fullQData(oldp+528,(vlSelf->top__DOT__LSU__DOT__ms_res),64);
        tracep->fullBit(oldp+530,(vlSelf->top__DOT__LSU__DOT__ren));
        tracep->fullQData(oldp+531,(vlSelf->top__DOT__LSU__DOT__maddr),64);
        tracep->fullCData(oldp+533,(vlSelf->top__DOT__LSU__DOT__load_type),3);
        tracep->fullBit(oldp+534,(vlSelf->top__DOT__LSU__DOT__ms_ready_go));
        tracep->fullQData(oldp+535,(vlSelf->top__DOT__LSU__DOT__rdata),64);
        tracep->fullBit(oldp+537,(vlSelf->top__DOT__WBU__DOT__device_access));
        tracep->fullCData(oldp+538,(vlSelf->top__DOT__arbiter__DOT__state),2);
        tracep->fullBit(oldp+539,((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__state))));
        tracep->fullCData(oldp+540,((0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
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
                                               << 6U) 
                                              + (0x3fU 
                                                 & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                    >> 4U))))),8);
        __Vtemp309[0U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                           >> 4U))))][0U];
        __Vtemp309[1U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                           >> 4U))))][1U];
        __Vtemp309[2U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                           >> 4U))))][2U];
        __Vtemp309[3U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                           >> 4U))))][3U];
        tracep->fullWData(oldp+541,(__Vtemp309),128);
        __Vtemp310[0U] = (IData)(vlSelf->top__DOT__i_cache__DOT__receive_data_0);
        __Vtemp310[1U] = (IData)((vlSelf->top__DOT__i_cache__DOT__receive_data_0 
                                  >> 0x20U));
        __Vtemp310[2U] = (IData)(vlSelf->top__DOT__i_cache__DOT__receive_data_1);
        __Vtemp310[3U] = (IData)((vlSelf->top__DOT__i_cache__DOT__receive_data_1 
                                  >> 0x20U));
        tracep->fullWData(oldp+545,(__Vtemp310),128);
        tracep->fullCData(oldp+549,((0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__unvalidIndex))),8);
        tracep->fullBit(oldp+550,(((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                   & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_284))));
        tracep->fullCData(oldp+551,((0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT___replaceIndex_T_2))),8);
        tracep->fullBit(oldp+552,(((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                   & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_294))));
        tracep->fullCData(oldp+553,((0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                              >> 4U))),8);
        tracep->fullBit(oldp+554,(vlSelf->top__DOT__i_cache__DOT__validMem_valid_0_MPORT_data));
        tracep->fullCData(oldp+555,((0xffU & ((IData)(0x40U) 
                                              + (0x3fU 
                                                 & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                    >> 4U))))),8);
        tracep->fullBit(oldp+556,(vlSelf->top__DOT__i_cache__DOT__validMem_valid_1_MPORT_data));
        tracep->fullCData(oldp+557,((0xffU & ((IData)(0x80U) 
                                              + (0x3fU 
                                                 & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                    >> 4U))))),8);
        tracep->fullBit(oldp+558,(vlSelf->top__DOT__i_cache__DOT__validMem_valid_2_MPORT_data));
        tracep->fullCData(oldp+559,((0xffU & ((IData)(0xc0U) 
                                              + (0x3fU 
                                                 & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                    >> 4U))))),8);
        tracep->fullBit(oldp+560,(vlSelf->top__DOT__i_cache__DOT__validMem_valid_3_MPORT_data));
        tracep->fullBit(oldp+561,(((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                   & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))));
        tracep->fullIData(oldp+562,(vlSelf->top__DOT__i_cache__DOT__tagMem
                                    [(0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                               >> 4U))]),32);
        tracep->fullIData(oldp+563,(vlSelf->top__DOT__i_cache__DOT__tagMem
                                    [(0xffU & ((IData)(0x40U) 
                                               + (0x3fU 
                                                  & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                     >> 4U))))]),32);
        tracep->fullIData(oldp+564,(vlSelf->top__DOT__i_cache__DOT__tagMem
                                    [(0xffU & ((IData)(0x80U) 
                                               + (0x3fU 
                                                  & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                     >> 4U))))]),32);
        tracep->fullIData(oldp+565,(vlSelf->top__DOT__i_cache__DOT__tagMem
                                    [(0xffU & ((IData)(0xc0U) 
                                               + (0x3fU 
                                                  & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                     >> 4U))))]),32);
        tracep->fullIData(oldp+566,((vlSelf->top__DOT__i_cache__DOT__addr 
                                     >> 0xaU)),32);
        tracep->fullCData(oldp+567,((0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                              >> 4U))),6);
        tracep->fullCData(oldp+568,(vlSelf->top__DOT__i_cache__DOT__quene_replace_way_MPORT_data),8);
        tracep->fullCData(oldp+569,(vlSelf->top__DOT__i_cache__DOT__quene
                                    [(0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                               >> 4U))]),8);
        tracep->fullCData(oldp+570,((0xffU & ((vlSelf->top__DOT__i_cache__DOT__quene
                                               [(0x3fU 
                                                 & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                    >> 4U))] 
                                               << 2U) 
                                              | (IData)(vlSelf->top__DOT__i_cache__DOT__foundUnvalidIndex)))),8);
        tracep->fullCData(oldp+571,((0xffU & ((vlSelf->top__DOT__i_cache__DOT__quene
                                               [(0x3fU 
                                                 & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                    >> 4U))] 
                                               << 2U) 
                                              | (3U 
                                                 & ((IData)(vlSelf->top__DOT__i_cache__DOT__quene_replace_way_MPORT_data) 
                                                    >> 6U))))),8);
        tracep->fullIData(oldp+572,(vlSelf->top__DOT__i_cache__DOT__addr),32);
        tracep->fullCData(oldp+573,((0xfU & vlSelf->top__DOT__i_cache__DOT__addr)),4);
        tracep->fullIData(oldp+574,((vlSelf->top__DOT__i_cache__DOT__addr 
                                     >> 0xaU)),22);
        tracep->fullCData(oldp+575,((0x78U & (vlSelf->top__DOT__i_cache__DOT__addr 
                                              << 3U))),7);
        tracep->fullBit(oldp+576,(vlSelf->top__DOT__i_cache__DOT__allvalid));
        tracep->fullCData(oldp+577,(vlSelf->top__DOT__i_cache__DOT__foundUnvalidIndex),2);
        tracep->fullSData(oldp+578,(vlSelf->top__DOT__i_cache__DOT__unvalidIndex),9);
        tracep->fullBit(oldp+579,(vlSelf->top__DOT__i_cache__DOT__tagMatch_0));
        tracep->fullBit(oldp+580,(vlSelf->top__DOT__i_cache__DOT__tagMatch_1));
        tracep->fullBit(oldp+581,(vlSelf->top__DOT__i_cache__DOT__tagMatch_2));
        tracep->fullBit(oldp+582,(vlSelf->top__DOT__i_cache__DOT__tagMatch_3));
        tracep->fullBit(oldp+583,(vlSelf->top__DOT__i_cache__DOT__anyMatch));
        tracep->fullCData(oldp+584,(((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                                      ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                               ? 1U
                                               : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U))))),2);
        tracep->fullSData(oldp+585,((0x1ffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
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
                                                << 6U) 
                                               + (0x3fU 
                                                  & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                     >> 4U))))),9);
        tracep->fullQData(oldp+586,(vlSelf->top__DOT__i_cache__DOT__receive_data_0),64);
        tracep->fullQData(oldp+588,(vlSelf->top__DOT__i_cache__DOT__receive_data_1),64);
        tracep->fullCData(oldp+590,(vlSelf->top__DOT__i_cache__DOT__receive_num),3);
        tracep->fullCData(oldp+591,((3U & ((IData)(vlSelf->top__DOT__i_cache__DOT__quene_replace_way_MPORT_data) 
                                           >> 6U))),2);
        tracep->fullCData(oldp+592,(vlSelf->top__DOT__i_cache__DOT__state),3);
        tracep->fullIData(oldp+593,(vlSelf->top__DOT__i_cache__DOT___replaceIndex_T_2),32);
        tracep->fullBit(oldp+594,(((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                   & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_209))));
        tracep->fullCData(oldp+595,((0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))),8);
        __Vtemp311[0U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0U];
        __Vtemp311[1U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][1U];
        __Vtemp311[2U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][2U];
        __Vtemp311[3U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][3U];
        tracep->fullWData(oldp+596,(__Vtemp311),128);
        tracep->fullBit(oldp+600,(((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                   & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_239))));
        tracep->fullCData(oldp+601,((0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))),8);
        __Vtemp312[0U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0U];
        __Vtemp312[1U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][1U];
        __Vtemp312[2U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][2U];
        __Vtemp312[3U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
            [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][3U];
        tracep->fullWData(oldp+602,(__Vtemp312),128);
        tracep->fullBit(oldp+606,((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))));
        VL_EXTEND_WQ(191,64, __Vtemp314, (vlSelf->top__DOT__LSU__DOT__store_data 
                                          & vlSelf->top__DOT__d_cache__DOT__wmask));
        VL_SHIFTL_WWI(191,191,7, __Vtemp315, __Vtemp314, 
                      (0x78U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                << 3U)));
        VL_EXTEND_WQ(191,64, __Vtemp320, vlSelf->top__DOT__d_cache__DOT__wmask);
        VL_SHIFTL_WWI(191,191,7, __Vtemp321, __Vtemp320, 
                      (0x78U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                << 3U)));
        __Vtemp326[0U] = (__Vtemp315[0U] | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                            [(0xffU 
                                              & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0U] 
                                            & (~ __Vtemp321[0U])));
        __Vtemp326[1U] = (__Vtemp315[1U] | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                            [(0xffU 
                                              & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][1U] 
                                            & (~ __Vtemp321[1U])));
        __Vtemp326[2U] = (__Vtemp315[2U] | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                            [(0xffU 
                                              & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][2U] 
                                            & (~ __Vtemp321[2U])));
        __Vtemp326[3U] = (__Vtemp315[3U] | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                            [(0xffU 
                                              & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][3U] 
                                            & (~ __Vtemp321[3U])));
        tracep->fullWData(oldp+607,(__Vtemp326),128);
        __Vtemp327[0U] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_0);
        __Vtemp327[1U] = (IData)((vlSelf->top__DOT__d_cache__DOT__receive_data_0 
                                  >> 0x20U));
        __Vtemp327[2U] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_1);
        __Vtemp327[3U] = (IData)((vlSelf->top__DOT__d_cache__DOT__receive_data_1 
                                  >> 0x20U));
        tracep->fullWData(oldp+611,(__Vtemp327),128);
        tracep->fullCData(oldp+615,((0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__unvalidIndex))),8);
        tracep->fullBit(oldp+616,(((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                   & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_218))));
        tracep->fullBit(oldp+617,(((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                   & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_228))));
        tracep->fullCData(oldp+618,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__LSU__DOT__maddr 
                                                      >> 4U)))),8);
        tracep->fullBit(oldp+619,(vlSelf->top__DOT__d_cache__DOT__validMem_valid_0_MPORT_data));
        tracep->fullCData(oldp+620,((0xffU & ((IData)(0x40U) 
                                              + (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 4U)))))),8);
        tracep->fullBit(oldp+621,(vlSelf->top__DOT__d_cache__DOT__validMem_valid_1_MPORT_data));
        tracep->fullCData(oldp+622,((0xffU & ((IData)(0x80U) 
                                              + (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 4U)))))),8);
        tracep->fullBit(oldp+623,(vlSelf->top__DOT__d_cache__DOT__validMem_valid_2_MPORT_data));
        tracep->fullCData(oldp+624,((0xffU & ((IData)(0xc0U) 
                                              + (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 4U)))))),8);
        tracep->fullBit(oldp+625,(vlSelf->top__DOT__d_cache__DOT__validMem_valid_3_MPORT_data));
        tracep->fullIData(oldp+626,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__LSU__DOT__maddr 
                                                       >> 4U)))]),32);
        tracep->fullIData(oldp+627,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                    [(0xffU & ((IData)(0x40U) 
                                               + (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))))]),32);
        tracep->fullIData(oldp+628,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                    [(0xffU & ((IData)(0x80U) 
                                               + (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))))]),32);
        tracep->fullIData(oldp+629,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                    [(0xffU & ((IData)(0xc0U) 
                                               + (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))))]),32);
        tracep->fullIData(oldp+630,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                    [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))]),32);
        tracep->fullIData(oldp+631,((0x3fffffU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 0xaU)))),32);
        tracep->fullBit(oldp+632,(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_13_data));
        tracep->fullCData(oldp+633,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__LSU__DOT__maddr 
                                                      >> 4U)))),6);
        tracep->fullCData(oldp+634,(vlSelf->top__DOT__d_cache__DOT__quene_replace_way_MPORT_data),8);
        tracep->fullCData(oldp+635,(vlSelf->top__DOT__d_cache__DOT__quene
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__LSU__DOT__maddr 
                                                       >> 4U)))]),8);
        tracep->fullCData(oldp+636,((0xffU & ((vlSelf->top__DOT__d_cache__DOT__quene
                                               [(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 4U)))] 
                                               << 2U) 
                                              | (IData)(vlSelf->top__DOT__d_cache__DOT__foundUnvalidIndex)))),8);
        tracep->fullCData(oldp+637,((0xffU & ((vlSelf->top__DOT__d_cache__DOT__quene
                                               [(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 4U)))] 
                                               << 2U) 
                                              | (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT__quene_replace_way_MPORT_data) 
                                                    >> 6U))))),8);
        tracep->fullCData(oldp+638,((0xfU & (IData)(vlSelf->top__DOT__LSU__DOT__maddr))),4);
        tracep->fullIData(oldp+639,((0x3fffffU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 0xaU)))),22);
        tracep->fullBit(oldp+640,(vlSelf->top__DOT__d_cache__DOT__allvalid));
        tracep->fullCData(oldp+641,(vlSelf->top__DOT__d_cache__DOT__foundUnvalidIndex),2);
        tracep->fullSData(oldp+642,(vlSelf->top__DOT__d_cache__DOT__unvalidIndex),9);
        tracep->fullBit(oldp+643,(vlSelf->top__DOT__d_cache__DOT__tagMatch_0));
        tracep->fullBit(oldp+644,(vlSelf->top__DOT__d_cache__DOT__tagMatch_1));
        tracep->fullBit(oldp+645,(vlSelf->top__DOT__d_cache__DOT__tagMatch_2));
        tracep->fullBit(oldp+646,(vlSelf->top__DOT__d_cache__DOT__tagMatch_3));
        tracep->fullBit(oldp+647,(vlSelf->top__DOT__d_cache__DOT__anyMatch));
        tracep->fullCData(oldp+648,(((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_0)
                                      ? 0U : ((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_1)
                                               ? 1U
                                               : ((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_2)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U))))),2);
        tracep->fullSData(oldp+649,(vlSelf->top__DOT__d_cache__DOT__tagIndex),9);
        tracep->fullWData(oldp+650,(vlSelf->top__DOT__d_cache__DOT__write_back_data),128);
        tracep->fullIData(oldp+654,(vlSelf->top__DOT__d_cache__DOT__write_back_addr),32);
        tracep->fullQData(oldp+655,(vlSelf->top__DOT__d_cache__DOT__receive_data_0),64);
        tracep->fullQData(oldp+657,(vlSelf->top__DOT__d_cache__DOT__receive_data_1),64);
        tracep->fullCData(oldp+659,(vlSelf->top__DOT__d_cache__DOT__receive_num),3);
        tracep->fullCData(oldp+660,((3U & ((IData)(vlSelf->top__DOT__d_cache__DOT__quene_replace_way_MPORT_data) 
                                           >> 6U))),2);
        tracep->fullCData(oldp+661,((0x78U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                              << 3U))),7);
        tracep->fullQData(oldp+662,(vlSelf->top__DOT__d_cache__DOT__wmask),64);
        tracep->fullCData(oldp+664,(vlSelf->top__DOT__d_cache__DOT__state),3);
        tracep->fullIData(oldp+665,(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2),32);
        tracep->fullQData(oldp+666,(vlSelf->top__DOT__axi__DOT__araddr),64);
        tracep->fullQData(oldp+668,(vlSelf->top__DOT__axi__DOT__awaddr),64);
        tracep->fullCData(oldp+670,(vlSelf->top__DOT__axi__DOT__arlen),8);
        tracep->fullCData(oldp+671,(vlSelf->top__DOT__axi__DOT__awlen),8);
        tracep->fullCData(oldp+672,(vlSelf->top__DOT__axi__DOT__state),3);
        tracep->fullBit(oldp+673,(vlSelf->clock));
        tracep->fullBit(oldp+674,(vlSelf->reset));
        tracep->fullIData(oldp+675,(vlSelf->io_inst),32);
        tracep->fullQData(oldp+676,(vlSelf->io_pc),64);
        tracep->fullBit(oldp+678,(vlSelf->io_step));
        tracep->fullBit(oldp+679,(vlSelf->io_skip));
        tracep->fullBit(oldp+680,(1U));
        tracep->fullCData(oldp+681,(0U),5);
        tracep->fullCData(oldp+682,(1U),5);
        tracep->fullCData(oldp+683,(2U),5);
        tracep->fullCData(oldp+684,(3U),5);
        tracep->fullCData(oldp+685,(4U),5);
        tracep->fullCData(oldp+686,(5U),5);
        tracep->fullCData(oldp+687,(6U),5);
        tracep->fullCData(oldp+688,(7U),5);
        tracep->fullCData(oldp+689,(8U),5);
        tracep->fullCData(oldp+690,(9U),5);
        tracep->fullCData(oldp+691,(0xaU),5);
        tracep->fullCData(oldp+692,(0xbU),5);
        tracep->fullCData(oldp+693,(0xcU),5);
        tracep->fullCData(oldp+694,(0xdU),5);
        tracep->fullCData(oldp+695,(0xeU),5);
        tracep->fullCData(oldp+696,(0xfU),5);
        tracep->fullCData(oldp+697,(0x10U),5);
        tracep->fullCData(oldp+698,(0x11U),5);
        tracep->fullCData(oldp+699,(0x12U),5);
        tracep->fullCData(oldp+700,(0x13U),5);
        tracep->fullCData(oldp+701,(0x14U),5);
        tracep->fullCData(oldp+702,(0x15U),5);
        tracep->fullCData(oldp+703,(0x16U),5);
        tracep->fullCData(oldp+704,(0x17U),5);
        tracep->fullCData(oldp+705,(0x18U),5);
        tracep->fullCData(oldp+706,(0x19U),5);
        tracep->fullCData(oldp+707,(0x1aU),5);
        tracep->fullCData(oldp+708,(0x1bU),5);
        tracep->fullCData(oldp+709,(0x1cU),5);
        tracep->fullCData(oldp+710,(0x1dU),5);
        tracep->fullCData(oldp+711,(0x1eU),5);
        tracep->fullCData(oldp+712,(0x1fU),5);
        tracep->fullCData(oldp+713,(3U),2);
        tracep->fullBit(oldp+714,(0U));
        tracep->fullCData(oldp+715,(0U),8);
        tracep->fullCData(oldp+716,(1U),8);
        tracep->fullCData(oldp+717,(2U),8);
        tracep->fullCData(oldp+718,(3U),8);
        tracep->fullCData(oldp+719,(4U),8);
        tracep->fullCData(oldp+720,(5U),8);
        tracep->fullCData(oldp+721,(6U),8);
        tracep->fullCData(oldp+722,(7U),8);
        tracep->fullCData(oldp+723,(8U),8);
        tracep->fullCData(oldp+724,(9U),8);
        tracep->fullCData(oldp+725,(0xaU),8);
        tracep->fullCData(oldp+726,(0xbU),8);
        tracep->fullCData(oldp+727,(0xcU),8);
        tracep->fullCData(oldp+728,(0xdU),8);
        tracep->fullCData(oldp+729,(0xeU),8);
        tracep->fullCData(oldp+730,(0xfU),8);
        tracep->fullCData(oldp+731,(0x10U),8);
        tracep->fullCData(oldp+732,(0x11U),8);
        tracep->fullCData(oldp+733,(0x12U),8);
        tracep->fullCData(oldp+734,(0x13U),8);
        tracep->fullCData(oldp+735,(0x14U),8);
        tracep->fullCData(oldp+736,(0x15U),8);
        tracep->fullCData(oldp+737,(0x16U),8);
        tracep->fullCData(oldp+738,(0x17U),8);
        tracep->fullCData(oldp+739,(0x18U),8);
        tracep->fullCData(oldp+740,(0x19U),8);
        tracep->fullCData(oldp+741,(0x1aU),8);
        tracep->fullCData(oldp+742,(0x1bU),8);
        tracep->fullCData(oldp+743,(0x1cU),8);
        tracep->fullCData(oldp+744,(0x1dU),8);
        tracep->fullCData(oldp+745,(0x1eU),8);
        tracep->fullCData(oldp+746,(0x1fU),8);
        tracep->fullCData(oldp+747,(0x20U),8);
        tracep->fullCData(oldp+748,(0x21U),8);
        tracep->fullCData(oldp+749,(0x22U),8);
        tracep->fullCData(oldp+750,(0x23U),8);
        tracep->fullCData(oldp+751,(0x24U),8);
        tracep->fullCData(oldp+752,(0x25U),8);
        tracep->fullCData(oldp+753,(0x26U),8);
        tracep->fullCData(oldp+754,(0x27U),8);
        tracep->fullCData(oldp+755,(0x28U),8);
        tracep->fullCData(oldp+756,(0x29U),8);
        tracep->fullCData(oldp+757,(0x2aU),8);
        tracep->fullCData(oldp+758,(0x2bU),8);
        tracep->fullCData(oldp+759,(0x2cU),8);
        tracep->fullCData(oldp+760,(0x2dU),8);
        tracep->fullCData(oldp+761,(0x2eU),8);
        tracep->fullCData(oldp+762,(0x2fU),8);
        tracep->fullCData(oldp+763,(0x30U),8);
        tracep->fullCData(oldp+764,(0x31U),8);
        tracep->fullCData(oldp+765,(0x32U),8);
        tracep->fullCData(oldp+766,(0x33U),8);
        tracep->fullCData(oldp+767,(0x34U),8);
        tracep->fullCData(oldp+768,(0x35U),8);
        tracep->fullCData(oldp+769,(0x36U),8);
        tracep->fullCData(oldp+770,(0x37U),8);
        tracep->fullCData(oldp+771,(0x38U),8);
        tracep->fullCData(oldp+772,(0x39U),8);
        tracep->fullCData(oldp+773,(0x3aU),8);
        tracep->fullCData(oldp+774,(0x3bU),8);
        tracep->fullCData(oldp+775,(0x3cU),8);
        tracep->fullCData(oldp+776,(0x3dU),8);
        tracep->fullCData(oldp+777,(0x3eU),8);
        tracep->fullCData(oldp+778,(0x3fU),8);
    }
}
