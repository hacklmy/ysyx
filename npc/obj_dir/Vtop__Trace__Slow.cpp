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
        tracep->declBit(c+1403,"clock", false,-1);
        tracep->declBit(c+1404,"reset", false,-1);
        tracep->declBus(c+1405,"io_inst", false,-1, 31,0);
        tracep->declQuad(c+1406,"io_pc", false,-1, 63,0);
        tracep->declBit(c+1408,"io_step", false,-1);
        tracep->declBit(c+1403,"top clock", false,-1);
        tracep->declBit(c+1404,"top reset", false,-1);
        tracep->declBus(c+1405,"top io_inst", false,-1, 31,0);
        tracep->declQuad(c+1406,"top io_pc", false,-1, 63,0);
        tracep->declBit(c+1408,"top io_step", false,-1);
        tracep->declBit(c+1403,"top Register_clock", false,-1);
        tracep->declBus(c+1,"top Register_io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top Register_io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top Register_io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top Register_io_rdata2", false,-1, 63,0);
        tracep->declBit(c+7,"top Register_io_we", false,-1);
        tracep->declBus(c+8,"top Register_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top Register_io_wdata", false,-1, 63,0);
        tracep->declBit(c+1403,"top IFU_clock", false,-1);
        tracep->declBit(c+1404,"top IFU_reset", false,-1);
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
        tracep->declBit(c+1403,"top IDU_clock", false,-1);
        tracep->declBit(c+1404,"top IDU_reset", false,-1);
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
        tracep->declBit(c+1403,"top EXU_clock", false,-1);
        tracep->declBit(c+1404,"top EXU_reset", false,-1);
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
        tracep->declBit(c+1403,"top LSU_clock", false,-1);
        tracep->declBit(c+1404,"top LSU_reset", false,-1);
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
        tracep->declBit(c+1403,"top WBU_clock", false,-1);
        tracep->declBit(c+1404,"top WBU_reset", false,-1);
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
        tracep->declBit(c+1403,"top arbiter_clock", false,-1);
        tracep->declBit(c+1404,"top arbiter_reset", false,-1);
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
        tracep->declBit(c+1403,"top i_cache_clock", false,-1);
        tracep->declBit(c+1404,"top i_cache_reset", false,-1);
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
        tracep->declBit(c+1403,"top d_cache_clock", false,-1);
        tracep->declBit(c+1404,"top d_cache_reset", false,-1);
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
        tracep->declBit(c+1403,"top axi_clock", false,-1);
        tracep->declBit(c+1404,"top axi_reset", false,-1);
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
        tracep->declBit(c+1403,"top Register clock", false,-1);
        tracep->declBus(c+1,"top Register io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top Register io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top Register io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top Register io_rdata2", false,-1, 63,0);
        tracep->declBit(c+7,"top Register io_we", false,-1);
        tracep->declBus(c+8,"top Register io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top Register io_wdata", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+138+i*2,"top Register Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+1409,"top Register Reg_io_rdata1_MPORT_en", false,-1);
        tracep->declBus(c+1,"top Register Reg_io_rdata1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+202,"top Register Reg_io_rdata1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_io_rdata2_MPORT_en", false,-1);
        tracep->declBus(c+2,"top Register Reg_io_rdata2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+204,"top Register Reg_io_rdata2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_0_MPORT_en", false,-1);
        tracep->declBus(c+1410,"top Register Reg_reg_trace_io_input_reg_0_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+206,"top Register Reg_reg_trace_io_input_reg_0_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_1_MPORT_en", false,-1);
        tracep->declBus(c+1411,"top Register Reg_reg_trace_io_input_reg_1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+208,"top Register Reg_reg_trace_io_input_reg_1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_2_MPORT_en", false,-1);
        tracep->declBus(c+1412,"top Register Reg_reg_trace_io_input_reg_2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+210,"top Register Reg_reg_trace_io_input_reg_2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_3_MPORT_en", false,-1);
        tracep->declBus(c+1413,"top Register Reg_reg_trace_io_input_reg_3_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+212,"top Register Reg_reg_trace_io_input_reg_3_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_4_MPORT_en", false,-1);
        tracep->declBus(c+1414,"top Register Reg_reg_trace_io_input_reg_4_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+214,"top Register Reg_reg_trace_io_input_reg_4_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_5_MPORT_en", false,-1);
        tracep->declBus(c+1415,"top Register Reg_reg_trace_io_input_reg_5_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+216,"top Register Reg_reg_trace_io_input_reg_5_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_6_MPORT_en", false,-1);
        tracep->declBus(c+1416,"top Register Reg_reg_trace_io_input_reg_6_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+218,"top Register Reg_reg_trace_io_input_reg_6_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_7_MPORT_en", false,-1);
        tracep->declBus(c+1417,"top Register Reg_reg_trace_io_input_reg_7_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+220,"top Register Reg_reg_trace_io_input_reg_7_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_8_MPORT_en", false,-1);
        tracep->declBus(c+1418,"top Register Reg_reg_trace_io_input_reg_8_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+222,"top Register Reg_reg_trace_io_input_reg_8_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_9_MPORT_en", false,-1);
        tracep->declBus(c+1419,"top Register Reg_reg_trace_io_input_reg_9_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+224,"top Register Reg_reg_trace_io_input_reg_9_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_10_MPORT_en", false,-1);
        tracep->declBus(c+1420,"top Register Reg_reg_trace_io_input_reg_10_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+226,"top Register Reg_reg_trace_io_input_reg_10_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_11_MPORT_en", false,-1);
        tracep->declBus(c+1421,"top Register Reg_reg_trace_io_input_reg_11_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+228,"top Register Reg_reg_trace_io_input_reg_11_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_12_MPORT_en", false,-1);
        tracep->declBus(c+1422,"top Register Reg_reg_trace_io_input_reg_12_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+230,"top Register Reg_reg_trace_io_input_reg_12_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_13_MPORT_en", false,-1);
        tracep->declBus(c+1423,"top Register Reg_reg_trace_io_input_reg_13_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+232,"top Register Reg_reg_trace_io_input_reg_13_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_14_MPORT_en", false,-1);
        tracep->declBus(c+1424,"top Register Reg_reg_trace_io_input_reg_14_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+234,"top Register Reg_reg_trace_io_input_reg_14_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_15_MPORT_en", false,-1);
        tracep->declBus(c+1425,"top Register Reg_reg_trace_io_input_reg_15_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+236,"top Register Reg_reg_trace_io_input_reg_15_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_16_MPORT_en", false,-1);
        tracep->declBus(c+1426,"top Register Reg_reg_trace_io_input_reg_16_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+238,"top Register Reg_reg_trace_io_input_reg_16_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_17_MPORT_en", false,-1);
        tracep->declBus(c+1427,"top Register Reg_reg_trace_io_input_reg_17_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+240,"top Register Reg_reg_trace_io_input_reg_17_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_18_MPORT_en", false,-1);
        tracep->declBus(c+1428,"top Register Reg_reg_trace_io_input_reg_18_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+242,"top Register Reg_reg_trace_io_input_reg_18_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_19_MPORT_en", false,-1);
        tracep->declBus(c+1429,"top Register Reg_reg_trace_io_input_reg_19_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+244,"top Register Reg_reg_trace_io_input_reg_19_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_20_MPORT_en", false,-1);
        tracep->declBus(c+1430,"top Register Reg_reg_trace_io_input_reg_20_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+246,"top Register Reg_reg_trace_io_input_reg_20_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_21_MPORT_en", false,-1);
        tracep->declBus(c+1431,"top Register Reg_reg_trace_io_input_reg_21_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+248,"top Register Reg_reg_trace_io_input_reg_21_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_22_MPORT_en", false,-1);
        tracep->declBus(c+1432,"top Register Reg_reg_trace_io_input_reg_22_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+250,"top Register Reg_reg_trace_io_input_reg_22_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_23_MPORT_en", false,-1);
        tracep->declBus(c+1433,"top Register Reg_reg_trace_io_input_reg_23_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+252,"top Register Reg_reg_trace_io_input_reg_23_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_24_MPORT_en", false,-1);
        tracep->declBus(c+1434,"top Register Reg_reg_trace_io_input_reg_24_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+254,"top Register Reg_reg_trace_io_input_reg_24_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_25_MPORT_en", false,-1);
        tracep->declBus(c+1435,"top Register Reg_reg_trace_io_input_reg_25_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+256,"top Register Reg_reg_trace_io_input_reg_25_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_26_MPORT_en", false,-1);
        tracep->declBus(c+1436,"top Register Reg_reg_trace_io_input_reg_26_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+258,"top Register Reg_reg_trace_io_input_reg_26_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_27_MPORT_en", false,-1);
        tracep->declBus(c+1437,"top Register Reg_reg_trace_io_input_reg_27_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+260,"top Register Reg_reg_trace_io_input_reg_27_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_28_MPORT_en", false,-1);
        tracep->declBus(c+1438,"top Register Reg_reg_trace_io_input_reg_28_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+262,"top Register Reg_reg_trace_io_input_reg_28_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_29_MPORT_en", false,-1);
        tracep->declBus(c+1439,"top Register Reg_reg_trace_io_input_reg_29_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+264,"top Register Reg_reg_trace_io_input_reg_29_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_30_MPORT_en", false,-1);
        tracep->declBus(c+1440,"top Register Reg_reg_trace_io_input_reg_30_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+266,"top Register Reg_reg_trace_io_input_reg_30_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1409,"top Register Reg_reg_trace_io_input_reg_31_MPORT_en", false,-1);
        tracep->declBus(c+1441,"top Register Reg_reg_trace_io_input_reg_31_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+268,"top Register Reg_reg_trace_io_input_reg_31_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+9,"top Register Reg_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+8,"top Register Reg_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+1409,"top Register Reg_MPORT_mask", false,-1);
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
        tracep->declBit(c+1403,"top IFU clock", false,-1);
        tracep->declBit(c+1404,"top IFU reset", false,-1);
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
        tracep->declBit(c+26,"top IFU fs_allowin", false,-1);
        tracep->declBit(c+1403,"top IDU clock", false,-1);
        tracep->declBit(c+1404,"top IDU reset", false,-1);
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
        tracep->declBit(c+1403,"top IDU csr_reg_clock", false,-1);
        tracep->declBit(c+344,"top IDU csr_reg_io_wen1", false,-1);
        tracep->declBit(c+345,"top IDU csr_reg_io_wen2", false,-1);
        tracep->declBus(c+346,"top IDU csr_reg_io_waddr1", false,-1, 1,0);
        tracep->declQuad(c+347,"top IDU csr_reg_io_wdata1", false,-1, 63,0);
        tracep->declQuad(c+349,"top IDU csr_reg_io_wdata2", false,-1, 63,0);
        tracep->declBus(c+351,"top IDU csr_reg_io_raddr", false,-1, 1,0);
        tracep->declQuad(c+352,"top IDU csr_reg_io_rdata", false,-1, 63,0);
        tracep->declBit(c+13,"top IDU ds_valid", false,-1);
        tracep->declQuad(c+32,"top IDU ds_pc", false,-1, 63,0);
        tracep->declBus(c+354,"top IDU inst", false,-1, 31,0);
        tracep->declBit(c+355,"top IDU br_taken_cancel", false,-1);
        tracep->declBit(c+356,"top IDU src1_is_pc", false,-1);
        tracep->declBus(c+357,"top IDU inst_type", false,-1, 31,0);
        tracep->declBus(c+358,"top IDU csr_write", false,-1, 1,0);
        tracep->declBus(c+1,"top IDU rs1", false,-1, 4,0);
        tracep->declBit(c+359,"top IDU conflict_es_rs1", false,-1);
        tracep->declBit(c+360,"top IDU conflict_ms_rs1", false,-1);
        tracep->declBit(c+361,"top IDU conflict_ws_rs1", false,-1);
        tracep->declBit(c+362,"top IDU src2_is_imm", false,-1);
        tracep->declBus(c+363,"top IDU rs2", false,-1, 4,0);
        tracep->declBit(c+364,"top IDU conflict_es_rs2", false,-1);
        tracep->declBit(c+365,"top IDU conflict_ms_rs2", false,-1);
        tracep->declBit(c+366,"top IDU conflict_ws_rs2", false,-1);
        tracep->declBit(c+367,"top IDU ds_ready_go", false,-1);
        tracep->declBit(c+368,"top IDU ds_allowin", false,-1);
        tracep->declQuad(c+369,"top IDU rdata1", false,-1, 63,0);
        tracep->declQuad(c+371,"top IDU rdata2", false,-1, 63,0);
        tracep->declBit(c+373,"top IDU br_taken", false,-1);
        tracep->declBus(c+39,"top IDU rd", false,-1, 4,0);
        tracep->declBit(c+27,"top IDU fence", false,-1);
        tracep->declBus(c+374,"top IDU imm_imm", false,-1, 11,0);
        tracep->declBus(c+375,"top IDU imm_imm_1", false,-1, 19,0);
        tracep->declBus(c+376,"top IDU imm_imm_2", false,-1, 19,0);
        tracep->declBus(c+377,"top IDU imm_imm_3", false,-1, 11,0);
        tracep->declBus(c+378,"top IDU imm_imm_4", false,-1, 11,0);
        tracep->declQuad(c+379,"top IDU imm", false,-1, 63,0);
        tracep->declBus(c+381,"top IDU csr_index", false,-1, 1,0);
        tracep->declQuad(c+382,"top IDU csr_wdata", false,-1, 63,0);
        tracep->declBus(c+34,"top IDU ALUop", false,-1, 31,0);
        tracep->declQuad(c+384,"top IDU src1", false,-1, 63,0);
        tracep->declQuad(c+37,"top IDU src2", false,-1, 63,0);
        tracep->declBit(c+1403,"top IDU csr_reg clock", false,-1);
        tracep->declBit(c+344,"top IDU csr_reg io_wen1", false,-1);
        tracep->declBit(c+345,"top IDU csr_reg io_wen2", false,-1);
        tracep->declBus(c+346,"top IDU csr_reg io_waddr1", false,-1, 1,0);
        tracep->declQuad(c+347,"top IDU csr_reg io_wdata1", false,-1, 63,0);
        tracep->declQuad(c+349,"top IDU csr_reg io_wdata2", false,-1, 63,0);
        tracep->declBus(c+351,"top IDU csr_reg io_raddr", false,-1, 1,0);
        tracep->declQuad(c+352,"top IDU csr_reg io_rdata", false,-1, 63,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+386+i*2,"top IDU csr_reg CSR_Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+1409,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_en", false,-1);
        tracep->declBus(c+351,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+352,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+347,"top IDU csr_reg CSR_Reg_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+346,"top IDU csr_reg CSR_Reg_MPORT_addr", false,-1, 1,0);
        tracep->declBit(c+1409,"top IDU csr_reg CSR_Reg_MPORT_mask", false,-1);
        tracep->declBit(c+344,"top IDU csr_reg CSR_Reg_MPORT_en", false,-1);
        tracep->declQuad(c+349,"top IDU csr_reg CSR_Reg_MPORT_1_data", false,-1, 63,0);
        tracep->declBus(c+1442,"top IDU csr_reg CSR_Reg_MPORT_1_addr", false,-1, 1,0);
        tracep->declBit(c+1409,"top IDU csr_reg CSR_Reg_MPORT_1_mask", false,-1);
        tracep->declBit(c+345,"top IDU csr_reg CSR_Reg_MPORT_1_en", false,-1);
        tracep->declBit(c+1403,"top EXU clock", false,-1);
        tracep->declBit(c+1404,"top EXU reset", false,-1);
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
        tracep->declBit(c+1403,"top EXU ALU_clock", false,-1);
        tracep->declBit(c+1404,"top EXU ALU_reset", false,-1);
        tracep->declQuad(c+394,"top EXU ALU_io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+396,"top EXU ALU_io_src2_value", false,-1, 63,0);
        tracep->declBus(c+398,"top EXU ALU_io_ALUop", false,-1, 31,0);
        tracep->declBit(c+57,"top EXU ALU_io_src_valid", false,-1);
        tracep->declBit(c+399,"top EXU ALU_io_alu_busy", false,-1);
        tracep->declQuad(c+48,"top EXU ALU_io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+63,"top EXU es_pc", false,-1, 63,0);
        tracep->declBit(c+57,"top EXU es_valid", false,-1);
        tracep->declBus(c+60,"top EXU es_rd", false,-1, 4,0);
        tracep->declBit(c+54,"top EXU es_rf_we", false,-1);
        tracep->declQuad(c+400,"top EXU src1_value", false,-1, 63,0);
        tracep->declQuad(c+396,"top EXU src2_value", false,-1, 63,0);
        tracep->declQuad(c+65,"top EXU store_data", false,-1, 63,0);
        tracep->declBus(c+68,"top EXU st_wstrb", false,-1, 7,0);
        tracep->declBit(c+67,"top EXU st_we", false,-1);
        tracep->declBit(c+69,"top EXU ld_we", false,-1);
        tracep->declBus(c+398,"top EXU ALUop", false,-1, 31,0);
        tracep->declBus(c+70,"top EXU load_type", false,-1, 2,0);
        tracep->declBit(c+402,"top EXU es_ready_go", false,-1);
        tracep->declBit(c+31,"top EXU es_allowin", false,-1);
        tracep->declQuad(c+48,"top EXU alu_res", false,-1, 63,0);
        tracep->declBit(c+1403,"top EXU ALU clock", false,-1);
        tracep->declBit(c+1404,"top EXU ALU reset", false,-1);
        tracep->declQuad(c+394,"top EXU ALU io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+396,"top EXU ALU io_src2_value", false,-1, 63,0);
        tracep->declBus(c+398,"top EXU ALU io_ALUop", false,-1, 31,0);
        tracep->declBit(c+57,"top EXU ALU io_src_valid", false,-1);
        tracep->declBit(c+399,"top EXU ALU io_alu_busy", false,-1);
        tracep->declQuad(c+48,"top EXU ALU io_alu_res", false,-1, 63,0);
        tracep->declBit(c+1403,"top EXU ALU Mul_clock", false,-1);
        tracep->declBit(c+1404,"top EXU ALU Mul_reset", false,-1);
        tracep->declBit(c+403,"top EXU ALU Mul_io_mul_valid", false,-1);
        tracep->declBit(c+404,"top EXU ALU Mul_io_mulw", false,-1);
        tracep->declQuad(c+394,"top EXU ALU Mul_io_multiplicand", false,-1, 63,0);
        tracep->declQuad(c+396,"top EXU ALU Mul_io_multiplier", false,-1, 63,0);
        tracep->declBit(c+405,"top EXU ALU Mul_io_out_valid", false,-1);
        tracep->declBus(c+406,"top EXU ALU Mul_io_result_hi", false,-1, 31,0);
        tracep->declBus(c+407,"top EXU ALU Mul_io_result_lo", false,-1, 31,0);
        tracep->declBit(c+1403,"top EXU ALU Div_clock", false,-1);
        tracep->declBit(c+1404,"top EXU ALU Div_reset", false,-1);
        tracep->declQuad(c+394,"top EXU ALU Div_io_dividend", false,-1, 63,0);
        tracep->declQuad(c+396,"top EXU ALU Div_io_divisor", false,-1, 63,0);
        tracep->declBit(c+408,"top EXU ALU Div_io_div_valid", false,-1);
        tracep->declBit(c+409,"top EXU ALU Div_io_divw", false,-1);
        tracep->declBit(c+410,"top EXU ALU Div_io_div_signed", false,-1);
        tracep->declBit(c+411,"top EXU ALU Div_io_out_valid", false,-1);
        tracep->declQuad(c+412,"top EXU ALU Div_io_quotient", false,-1, 63,0);
        tracep->declQuad(c+414,"top EXU ALU Div_io_remainder", false,-1, 63,0);
        tracep->declBit(c+416,"top EXU ALU mul_valid", false,-1);
        tracep->declBit(c+417,"top EXU ALU div_valid", false,-1);
        tracep->declQuad(c+418,"top EXU ALU add_res", false,-1, 63,0);
        tracep->declQuad(c+420,"top EXU ALU sub_res", false,-1, 63,0);
        tracep->declQuad(c+422,"top EXU ALU sra_res", false,-1, 63,0);
        tracep->declQuad(c+424,"top EXU ALU srl_res", false,-1, 63,0);
        tracep->declArray(c+426,"top EXU ALU sll_res", false,-1, 126,0);
        tracep->declBus(c+430,"top EXU ALU sraw_res", false,-1, 31,0);
        tracep->declBus(c+431,"top EXU ALU srlw_res", false,-1, 31,0);
        tracep->declQuad(c+432,"top EXU ALU sllw_res", false,-1, 62,0);
        tracep->declQuad(c+434,"top EXU ALU or_res", false,-1, 63,0);
        tracep->declQuad(c+436,"top EXU ALU xor_res", false,-1, 63,0);
        tracep->declQuad(c+438,"top EXU ALU and_res", false,-1, 63,0);
        tracep->declQuad(c+440,"top EXU ALU mlu_res", false,-1, 63,0);
        tracep->declBus(c+442,"top EXU ALU divw_res", false,-1, 31,0);
        tracep->declBus(c+443,"top EXU ALU remw_res", false,-1, 31,0);
        tracep->declArray(c+444,"top EXU ALU alu_res", false,-1, 126,0);
        tracep->declBit(c+1403,"top EXU ALU Mul clock", false,-1);
        tracep->declBit(c+1404,"top EXU ALU Mul reset", false,-1);
        tracep->declBit(c+403,"top EXU ALU Mul io_mul_valid", false,-1);
        tracep->declBit(c+404,"top EXU ALU Mul io_mulw", false,-1);
        tracep->declQuad(c+394,"top EXU ALU Mul io_multiplicand", false,-1, 63,0);
        tracep->declQuad(c+396,"top EXU ALU Mul io_multiplier", false,-1, 63,0);
        tracep->declBit(c+405,"top EXU ALU Mul io_out_valid", false,-1);
        tracep->declBus(c+406,"top EXU ALU Mul io_result_hi", false,-1, 31,0);
        tracep->declBus(c+407,"top EXU ALU Mul io_result_lo", false,-1, 31,0);
        tracep->declBus(c+448,"top EXU ALU Mul booth_partial_io_y", false,-1, 2,0);
        tracep->declQuad(c+449,"top EXU ALU Mul booth_partial_io_x", false,-1, 63,0);
        tracep->declBit(c+451,"top EXU ALU Mul booth_partial_io_c", false,-1);
        tracep->declQuad(c+452,"top EXU ALU Mul booth_partial_io_p", false,-1, 63,0);
        tracep->declBit(c+454,"top EXU ALU Mul sign", false,-1);
        tracep->declQuad(c+455,"top EXU ALU Mul res", false,-1, 63,0);
        tracep->declBus(c+457,"top EXU ALU Mul state", false,-1, 1,0);
        tracep->declArray(c+458,"top EXU ALU Mul src1", false,-1, 127,0);
        tracep->declArray(c+462,"top EXU ALU Mul src2", false,-1, 64,0);
        tracep->declQuad(c+465,"top EXU ALU Mul src1_32", false,-1, 63,0);
        tracep->declQuad(c+467,"top EXU ALU Mul src2_32", false,-1, 63,0);
        tracep->declArray(c+469,"top EXU ALU Mul real_cand", false,-1, 127,0);
        tracep->declQuad(c+473,"top EXU ALU Mul real_er", false,-1, 63,0);
        tracep->declBus(c+448,"top EXU ALU Mul booth_partial io_y", false,-1, 2,0);
        tracep->declQuad(c+449,"top EXU ALU Mul booth_partial io_x", false,-1, 63,0);
        tracep->declBit(c+451,"top EXU ALU Mul booth_partial io_c", false,-1);
        tracep->declQuad(c+452,"top EXU ALU Mul booth_partial io_p", false,-1, 63,0);
        tracep->declBit(c+1403,"top EXU ALU Div clock", false,-1);
        tracep->declBit(c+1404,"top EXU ALU Div reset", false,-1);
        tracep->declQuad(c+394,"top EXU ALU Div io_dividend", false,-1, 63,0);
        tracep->declQuad(c+396,"top EXU ALU Div io_divisor", false,-1, 63,0);
        tracep->declBit(c+408,"top EXU ALU Div io_div_valid", false,-1);
        tracep->declBit(c+409,"top EXU ALU Div io_divw", false,-1);
        tracep->declBit(c+410,"top EXU ALU Div io_div_signed", false,-1);
        tracep->declBit(c+411,"top EXU ALU Div io_out_valid", false,-1);
        tracep->declQuad(c+412,"top EXU ALU Div io_quotient", false,-1, 63,0);
        tracep->declQuad(c+414,"top EXU ALU Div io_remainder", false,-1, 63,0);
        tracep->declBit(c+475,"top EXU ALU Div dend_neg", false,-1);
        tracep->declBit(c+476,"top EXU ALU Div sor_neg", false,-1);
        tracep->declBit(c+477,"top EXU ALU Div quotient_neg", false,-1);
        tracep->declQuad(c+478,"top EXU ALU Div src1_32_s", false,-1, 63,0);
        tracep->declQuad(c+480,"top EXU ALU Div src2_32_s", false,-1, 63,0);
        tracep->declQuad(c+482,"top EXU ALU Div src1_32", false,-1, 63,0);
        tracep->declQuad(c+484,"top EXU ALU Div src2_32", false,-1, 63,0);
        tracep->declQuad(c+486,"top EXU ALU Div real_cand", false,-1, 63,0);
        tracep->declQuad(c+488,"top EXU ALU Div real_er", false,-1, 63,0);
        tracep->declArray(c+490,"top EXU ALU Div src2", false,-1, 64,0);
        tracep->declArray(c+493,"top EXU ALU Div div_cand", false,-1, 127,0);
        tracep->declBit(c+497,"top EXU ALU Div div_start", false,-1);
        tracep->declQuad(c+498,"top EXU ALU Div quotient", false,-1, 63,0);
        tracep->declBus(c+500,"top EXU ALU Div step_num", false,-1, 31,0);
        tracep->declArray(c+501,"top EXU ALU Div src1", false,-1, 127,0);
        tracep->declArray(c+505,"top EXU ALU Div sub_res", false,-1, 64,0);
        tracep->declArray(c+508,"top EXU ALU Div update_cand", false,-1, 127,0);
        tracep->declArray(c+512,"top EXU ALU Div new_cand", false,-1, 127,0);
        tracep->declBit(c+1403,"top LSU clock", false,-1);
        tracep->declBit(c+1404,"top LSU reset", false,-1);
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
        tracep->declQuad(c+516,"top LSU ms_res", false,-1, 63,0);
        tracep->declQuad(c+83,"top LSU store_data", false,-1, 63,0);
        tracep->declBit(c+86,"top LSU wen", false,-1);
        tracep->declBus(c+85,"top LSU wstrb", false,-1, 7,0);
        tracep->declBit(c+518,"top LSU ren", false,-1);
        tracep->declQuad(c+519,"top LSU maddr", false,-1, 63,0);
        tracep->declBus(c+521,"top LSU load_type", false,-1, 2,0);
        tracep->declBit(c+522,"top LSU ms_ready_go", false,-1);
        tracep->declBit(c+62,"top LSU ms_allowin", false,-1);
        tracep->declQuad(c+523,"top LSU rdata", false,-1, 63,0);
        tracep->declBit(c+1403,"top WBU clock", false,-1);
        tracep->declBit(c+1404,"top WBU reset", false,-1);
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
        tracep->declBit(c+1403,"top arbiter clock", false,-1);
        tracep->declBit(c+1404,"top arbiter reset", false,-1);
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
        tracep->declBus(c+525,"top arbiter state", false,-1, 1,0);
        tracep->declBit(c+1403,"top i_cache clock", false,-1);
        tracep->declBit(c+1404,"top i_cache reset", false,-1);
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
        tracep->declArray(c+526,"top i_cache ram_0_0", false,-1, 127,0);
        tracep->declArray(c+530,"top i_cache ram_0_1", false,-1, 127,0);
        tracep->declArray(c+534,"top i_cache ram_0_2", false,-1, 127,0);
        tracep->declArray(c+538,"top i_cache ram_0_3", false,-1, 127,0);
        tracep->declArray(c+542,"top i_cache ram_0_4", false,-1, 127,0);
        tracep->declArray(c+546,"top i_cache ram_0_5", false,-1, 127,0);
        tracep->declArray(c+550,"top i_cache ram_0_6", false,-1, 127,0);
        tracep->declArray(c+554,"top i_cache ram_0_7", false,-1, 127,0);
        tracep->declArray(c+558,"top i_cache ram_0_8", false,-1, 127,0);
        tracep->declArray(c+562,"top i_cache ram_0_9", false,-1, 127,0);
        tracep->declArray(c+566,"top i_cache ram_0_10", false,-1, 127,0);
        tracep->declArray(c+570,"top i_cache ram_0_11", false,-1, 127,0);
        tracep->declArray(c+574,"top i_cache ram_0_12", false,-1, 127,0);
        tracep->declArray(c+578,"top i_cache ram_0_13", false,-1, 127,0);
        tracep->declArray(c+582,"top i_cache ram_0_14", false,-1, 127,0);
        tracep->declArray(c+586,"top i_cache ram_0_15", false,-1, 127,0);
        tracep->declArray(c+590,"top i_cache ram_1_0", false,-1, 127,0);
        tracep->declArray(c+594,"top i_cache ram_1_1", false,-1, 127,0);
        tracep->declArray(c+598,"top i_cache ram_1_2", false,-1, 127,0);
        tracep->declArray(c+602,"top i_cache ram_1_3", false,-1, 127,0);
        tracep->declArray(c+606,"top i_cache ram_1_4", false,-1, 127,0);
        tracep->declArray(c+610,"top i_cache ram_1_5", false,-1, 127,0);
        tracep->declArray(c+614,"top i_cache ram_1_6", false,-1, 127,0);
        tracep->declArray(c+618,"top i_cache ram_1_7", false,-1, 127,0);
        tracep->declArray(c+622,"top i_cache ram_1_8", false,-1, 127,0);
        tracep->declArray(c+626,"top i_cache ram_1_9", false,-1, 127,0);
        tracep->declArray(c+630,"top i_cache ram_1_10", false,-1, 127,0);
        tracep->declArray(c+634,"top i_cache ram_1_11", false,-1, 127,0);
        tracep->declArray(c+638,"top i_cache ram_1_12", false,-1, 127,0);
        tracep->declArray(c+642,"top i_cache ram_1_13", false,-1, 127,0);
        tracep->declArray(c+646,"top i_cache ram_1_14", false,-1, 127,0);
        tracep->declArray(c+650,"top i_cache ram_1_15", false,-1, 127,0);
        tracep->declArray(c+654,"top i_cache ram_2_0", false,-1, 127,0);
        tracep->declArray(c+658,"top i_cache ram_2_1", false,-1, 127,0);
        tracep->declArray(c+662,"top i_cache ram_2_2", false,-1, 127,0);
        tracep->declArray(c+666,"top i_cache ram_2_3", false,-1, 127,0);
        tracep->declArray(c+670,"top i_cache ram_2_4", false,-1, 127,0);
        tracep->declArray(c+674,"top i_cache ram_2_5", false,-1, 127,0);
        tracep->declArray(c+678,"top i_cache ram_2_6", false,-1, 127,0);
        tracep->declArray(c+682,"top i_cache ram_2_7", false,-1, 127,0);
        tracep->declArray(c+686,"top i_cache ram_2_8", false,-1, 127,0);
        tracep->declArray(c+690,"top i_cache ram_2_9", false,-1, 127,0);
        tracep->declArray(c+694,"top i_cache ram_2_10", false,-1, 127,0);
        tracep->declArray(c+698,"top i_cache ram_2_11", false,-1, 127,0);
        tracep->declArray(c+702,"top i_cache ram_2_12", false,-1, 127,0);
        tracep->declArray(c+706,"top i_cache ram_2_13", false,-1, 127,0);
        tracep->declArray(c+710,"top i_cache ram_2_14", false,-1, 127,0);
        tracep->declArray(c+714,"top i_cache ram_2_15", false,-1, 127,0);
        tracep->declArray(c+718,"top i_cache ram_3_0", false,-1, 127,0);
        tracep->declArray(c+722,"top i_cache ram_3_1", false,-1, 127,0);
        tracep->declArray(c+726,"top i_cache ram_3_2", false,-1, 127,0);
        tracep->declArray(c+730,"top i_cache ram_3_3", false,-1, 127,0);
        tracep->declArray(c+734,"top i_cache ram_3_4", false,-1, 127,0);
        tracep->declArray(c+738,"top i_cache ram_3_5", false,-1, 127,0);
        tracep->declArray(c+742,"top i_cache ram_3_6", false,-1, 127,0);
        tracep->declArray(c+746,"top i_cache ram_3_7", false,-1, 127,0);
        tracep->declArray(c+750,"top i_cache ram_3_8", false,-1, 127,0);
        tracep->declArray(c+754,"top i_cache ram_3_9", false,-1, 127,0);
        tracep->declArray(c+758,"top i_cache ram_3_10", false,-1, 127,0);
        tracep->declArray(c+762,"top i_cache ram_3_11", false,-1, 127,0);
        tracep->declArray(c+766,"top i_cache ram_3_12", false,-1, 127,0);
        tracep->declArray(c+770,"top i_cache ram_3_13", false,-1, 127,0);
        tracep->declArray(c+774,"top i_cache ram_3_14", false,-1, 127,0);
        tracep->declArray(c+778,"top i_cache ram_3_15", false,-1, 127,0);
        tracep->declBus(c+782,"top i_cache tag_0_0", false,-1, 31,0);
        tracep->declBus(c+783,"top i_cache tag_0_1", false,-1, 31,0);
        tracep->declBus(c+784,"top i_cache tag_0_2", false,-1, 31,0);
        tracep->declBus(c+785,"top i_cache tag_0_3", false,-1, 31,0);
        tracep->declBus(c+786,"top i_cache tag_0_4", false,-1, 31,0);
        tracep->declBus(c+787,"top i_cache tag_0_5", false,-1, 31,0);
        tracep->declBus(c+788,"top i_cache tag_0_6", false,-1, 31,0);
        tracep->declBus(c+789,"top i_cache tag_0_7", false,-1, 31,0);
        tracep->declBus(c+790,"top i_cache tag_0_8", false,-1, 31,0);
        tracep->declBus(c+791,"top i_cache tag_0_9", false,-1, 31,0);
        tracep->declBus(c+792,"top i_cache tag_0_10", false,-1, 31,0);
        tracep->declBus(c+793,"top i_cache tag_0_11", false,-1, 31,0);
        tracep->declBus(c+794,"top i_cache tag_0_12", false,-1, 31,0);
        tracep->declBus(c+795,"top i_cache tag_0_13", false,-1, 31,0);
        tracep->declBus(c+796,"top i_cache tag_0_14", false,-1, 31,0);
        tracep->declBus(c+797,"top i_cache tag_0_15", false,-1, 31,0);
        tracep->declBus(c+798,"top i_cache tag_1_0", false,-1, 31,0);
        tracep->declBus(c+799,"top i_cache tag_1_1", false,-1, 31,0);
        tracep->declBus(c+800,"top i_cache tag_1_2", false,-1, 31,0);
        tracep->declBus(c+801,"top i_cache tag_1_3", false,-1, 31,0);
        tracep->declBus(c+802,"top i_cache tag_1_4", false,-1, 31,0);
        tracep->declBus(c+803,"top i_cache tag_1_5", false,-1, 31,0);
        tracep->declBus(c+804,"top i_cache tag_1_6", false,-1, 31,0);
        tracep->declBus(c+805,"top i_cache tag_1_7", false,-1, 31,0);
        tracep->declBus(c+806,"top i_cache tag_1_8", false,-1, 31,0);
        tracep->declBus(c+807,"top i_cache tag_1_9", false,-1, 31,0);
        tracep->declBus(c+808,"top i_cache tag_1_10", false,-1, 31,0);
        tracep->declBus(c+809,"top i_cache tag_1_11", false,-1, 31,0);
        tracep->declBus(c+810,"top i_cache tag_1_12", false,-1, 31,0);
        tracep->declBus(c+811,"top i_cache tag_1_13", false,-1, 31,0);
        tracep->declBus(c+812,"top i_cache tag_1_14", false,-1, 31,0);
        tracep->declBus(c+813,"top i_cache tag_1_15", false,-1, 31,0);
        tracep->declBus(c+814,"top i_cache tag_2_0", false,-1, 31,0);
        tracep->declBus(c+815,"top i_cache tag_2_1", false,-1, 31,0);
        tracep->declBus(c+816,"top i_cache tag_2_2", false,-1, 31,0);
        tracep->declBus(c+817,"top i_cache tag_2_3", false,-1, 31,0);
        tracep->declBus(c+818,"top i_cache tag_2_4", false,-1, 31,0);
        tracep->declBus(c+819,"top i_cache tag_2_5", false,-1, 31,0);
        tracep->declBus(c+820,"top i_cache tag_2_6", false,-1, 31,0);
        tracep->declBus(c+821,"top i_cache tag_2_7", false,-1, 31,0);
        tracep->declBus(c+822,"top i_cache tag_2_8", false,-1, 31,0);
        tracep->declBus(c+823,"top i_cache tag_2_9", false,-1, 31,0);
        tracep->declBus(c+824,"top i_cache tag_2_10", false,-1, 31,0);
        tracep->declBus(c+825,"top i_cache tag_2_11", false,-1, 31,0);
        tracep->declBus(c+826,"top i_cache tag_2_12", false,-1, 31,0);
        tracep->declBus(c+827,"top i_cache tag_2_13", false,-1, 31,0);
        tracep->declBus(c+828,"top i_cache tag_2_14", false,-1, 31,0);
        tracep->declBus(c+829,"top i_cache tag_2_15", false,-1, 31,0);
        tracep->declBus(c+830,"top i_cache tag_3_0", false,-1, 31,0);
        tracep->declBus(c+831,"top i_cache tag_3_1", false,-1, 31,0);
        tracep->declBus(c+832,"top i_cache tag_3_2", false,-1, 31,0);
        tracep->declBus(c+833,"top i_cache tag_3_3", false,-1, 31,0);
        tracep->declBus(c+834,"top i_cache tag_3_4", false,-1, 31,0);
        tracep->declBus(c+835,"top i_cache tag_3_5", false,-1, 31,0);
        tracep->declBus(c+836,"top i_cache tag_3_6", false,-1, 31,0);
        tracep->declBus(c+837,"top i_cache tag_3_7", false,-1, 31,0);
        tracep->declBus(c+838,"top i_cache tag_3_8", false,-1, 31,0);
        tracep->declBus(c+839,"top i_cache tag_3_9", false,-1, 31,0);
        tracep->declBus(c+840,"top i_cache tag_3_10", false,-1, 31,0);
        tracep->declBus(c+841,"top i_cache tag_3_11", false,-1, 31,0);
        tracep->declBus(c+842,"top i_cache tag_3_12", false,-1, 31,0);
        tracep->declBus(c+843,"top i_cache tag_3_13", false,-1, 31,0);
        tracep->declBus(c+844,"top i_cache tag_3_14", false,-1, 31,0);
        tracep->declBus(c+845,"top i_cache tag_3_15", false,-1, 31,0);
        tracep->declBit(c+846,"top i_cache valid_0_0", false,-1);
        tracep->declBit(c+847,"top i_cache valid_0_1", false,-1);
        tracep->declBit(c+848,"top i_cache valid_0_2", false,-1);
        tracep->declBit(c+849,"top i_cache valid_0_3", false,-1);
        tracep->declBit(c+850,"top i_cache valid_0_4", false,-1);
        tracep->declBit(c+851,"top i_cache valid_0_5", false,-1);
        tracep->declBit(c+852,"top i_cache valid_0_6", false,-1);
        tracep->declBit(c+853,"top i_cache valid_0_7", false,-1);
        tracep->declBit(c+854,"top i_cache valid_0_8", false,-1);
        tracep->declBit(c+855,"top i_cache valid_0_9", false,-1);
        tracep->declBit(c+856,"top i_cache valid_0_10", false,-1);
        tracep->declBit(c+857,"top i_cache valid_0_11", false,-1);
        tracep->declBit(c+858,"top i_cache valid_0_12", false,-1);
        tracep->declBit(c+859,"top i_cache valid_0_13", false,-1);
        tracep->declBit(c+860,"top i_cache valid_0_14", false,-1);
        tracep->declBit(c+861,"top i_cache valid_0_15", false,-1);
        tracep->declBit(c+862,"top i_cache valid_1_0", false,-1);
        tracep->declBit(c+863,"top i_cache valid_1_1", false,-1);
        tracep->declBit(c+864,"top i_cache valid_1_2", false,-1);
        tracep->declBit(c+865,"top i_cache valid_1_3", false,-1);
        tracep->declBit(c+866,"top i_cache valid_1_4", false,-1);
        tracep->declBit(c+867,"top i_cache valid_1_5", false,-1);
        tracep->declBit(c+868,"top i_cache valid_1_6", false,-1);
        tracep->declBit(c+869,"top i_cache valid_1_7", false,-1);
        tracep->declBit(c+870,"top i_cache valid_1_8", false,-1);
        tracep->declBit(c+871,"top i_cache valid_1_9", false,-1);
        tracep->declBit(c+872,"top i_cache valid_1_10", false,-1);
        tracep->declBit(c+873,"top i_cache valid_1_11", false,-1);
        tracep->declBit(c+874,"top i_cache valid_1_12", false,-1);
        tracep->declBit(c+875,"top i_cache valid_1_13", false,-1);
        tracep->declBit(c+876,"top i_cache valid_1_14", false,-1);
        tracep->declBit(c+877,"top i_cache valid_1_15", false,-1);
        tracep->declBit(c+878,"top i_cache valid_2_0", false,-1);
        tracep->declBit(c+879,"top i_cache valid_2_1", false,-1);
        tracep->declBit(c+880,"top i_cache valid_2_2", false,-1);
        tracep->declBit(c+881,"top i_cache valid_2_3", false,-1);
        tracep->declBit(c+882,"top i_cache valid_2_4", false,-1);
        tracep->declBit(c+883,"top i_cache valid_2_5", false,-1);
        tracep->declBit(c+884,"top i_cache valid_2_6", false,-1);
        tracep->declBit(c+885,"top i_cache valid_2_7", false,-1);
        tracep->declBit(c+886,"top i_cache valid_2_8", false,-1);
        tracep->declBit(c+887,"top i_cache valid_2_9", false,-1);
        tracep->declBit(c+888,"top i_cache valid_2_10", false,-1);
        tracep->declBit(c+889,"top i_cache valid_2_11", false,-1);
        tracep->declBit(c+890,"top i_cache valid_2_12", false,-1);
        tracep->declBit(c+891,"top i_cache valid_2_13", false,-1);
        tracep->declBit(c+892,"top i_cache valid_2_14", false,-1);
        tracep->declBit(c+893,"top i_cache valid_2_15", false,-1);
        tracep->declBit(c+894,"top i_cache valid_3_0", false,-1);
        tracep->declBit(c+895,"top i_cache valid_3_1", false,-1);
        tracep->declBit(c+896,"top i_cache valid_3_2", false,-1);
        tracep->declBit(c+897,"top i_cache valid_3_3", false,-1);
        tracep->declBit(c+898,"top i_cache valid_3_4", false,-1);
        tracep->declBit(c+899,"top i_cache valid_3_5", false,-1);
        tracep->declBit(c+900,"top i_cache valid_3_6", false,-1);
        tracep->declBit(c+901,"top i_cache valid_3_7", false,-1);
        tracep->declBit(c+902,"top i_cache valid_3_8", false,-1);
        tracep->declBit(c+903,"top i_cache valid_3_9", false,-1);
        tracep->declBit(c+904,"top i_cache valid_3_10", false,-1);
        tracep->declBit(c+905,"top i_cache valid_3_11", false,-1);
        tracep->declBit(c+906,"top i_cache valid_3_12", false,-1);
        tracep->declBit(c+907,"top i_cache valid_3_13", false,-1);
        tracep->declBit(c+908,"top i_cache valid_3_14", false,-1);
        tracep->declBit(c+909,"top i_cache valid_3_15", false,-1);
        tracep->declBus(c+910,"top i_cache addr", false,-1, 31,0);
        tracep->declQuad(c+911,"top i_cache receive_data_0", false,-1, 63,0);
        tracep->declQuad(c+913,"top i_cache receive_data_1", false,-1, 63,0);
        tracep->declBus(c+915,"top i_cache receive_num", false,-1, 2,0);
        tracep->declBus(c+916,"top i_cache quene_0", false,-1, 7,0);
        tracep->declBus(c+917,"top i_cache quene_1", false,-1, 7,0);
        tracep->declBus(c+918,"top i_cache quene_2", false,-1, 7,0);
        tracep->declBus(c+919,"top i_cache quene_3", false,-1, 7,0);
        tracep->declBus(c+920,"top i_cache quene_4", false,-1, 7,0);
        tracep->declBus(c+921,"top i_cache quene_5", false,-1, 7,0);
        tracep->declBus(c+922,"top i_cache quene_6", false,-1, 7,0);
        tracep->declBus(c+923,"top i_cache quene_7", false,-1, 7,0);
        tracep->declBus(c+924,"top i_cache quene_8", false,-1, 7,0);
        tracep->declBus(c+925,"top i_cache quene_9", false,-1, 7,0);
        tracep->declBus(c+926,"top i_cache quene_10", false,-1, 7,0);
        tracep->declBus(c+927,"top i_cache quene_11", false,-1, 7,0);
        tracep->declBus(c+928,"top i_cache quene_12", false,-1, 7,0);
        tracep->declBus(c+929,"top i_cache quene_13", false,-1, 7,0);
        tracep->declBus(c+930,"top i_cache quene_14", false,-1, 7,0);
        tracep->declBus(c+931,"top i_cache quene_15", false,-1, 7,0);
        tracep->declBus(c+932,"top i_cache offset", false,-1, 3,0);
        tracep->declBus(c+933,"top i_cache index", false,-1, 3,0);
        tracep->declBus(c+934,"top i_cache tag", false,-1, 23,0);
        tracep->declBus(c+935,"top i_cache shift_bit", false,-1, 6,0);
        tracep->declBit(c+936,"top i_cache way0_hit", false,-1);
        tracep->declBit(c+937,"top i_cache way1_hit", false,-1);
        tracep->declBit(c+938,"top i_cache way2_hit", false,-1);
        tracep->declBit(c+939,"top i_cache way3_hit", false,-1);
        tracep->declBus(c+940,"top i_cache unuse_way", false,-1, 2,0);
        tracep->declBus(c+941,"top i_cache state", false,-1, 2,0);
        tracep->declBit(c+1403,"top d_cache clock", false,-1);
        tracep->declBit(c+1404,"top d_cache reset", false,-1);
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
        tracep->declArray(c+942,"top d_cache ram_0_0", false,-1, 127,0);
        tracep->declArray(c+946,"top d_cache ram_0_1", false,-1, 127,0);
        tracep->declArray(c+950,"top d_cache ram_0_2", false,-1, 127,0);
        tracep->declArray(c+954,"top d_cache ram_0_3", false,-1, 127,0);
        tracep->declArray(c+958,"top d_cache ram_0_4", false,-1, 127,0);
        tracep->declArray(c+962,"top d_cache ram_0_5", false,-1, 127,0);
        tracep->declArray(c+966,"top d_cache ram_0_6", false,-1, 127,0);
        tracep->declArray(c+970,"top d_cache ram_0_7", false,-1, 127,0);
        tracep->declArray(c+974,"top d_cache ram_0_8", false,-1, 127,0);
        tracep->declArray(c+978,"top d_cache ram_0_9", false,-1, 127,0);
        tracep->declArray(c+982,"top d_cache ram_0_10", false,-1, 127,0);
        tracep->declArray(c+986,"top d_cache ram_0_11", false,-1, 127,0);
        tracep->declArray(c+990,"top d_cache ram_0_12", false,-1, 127,0);
        tracep->declArray(c+994,"top d_cache ram_0_13", false,-1, 127,0);
        tracep->declArray(c+998,"top d_cache ram_0_14", false,-1, 127,0);
        tracep->declArray(c+1002,"top d_cache ram_0_15", false,-1, 127,0);
        tracep->declArray(c+1006,"top d_cache ram_1_0", false,-1, 127,0);
        tracep->declArray(c+1010,"top d_cache ram_1_1", false,-1, 127,0);
        tracep->declArray(c+1014,"top d_cache ram_1_2", false,-1, 127,0);
        tracep->declArray(c+1018,"top d_cache ram_1_3", false,-1, 127,0);
        tracep->declArray(c+1022,"top d_cache ram_1_4", false,-1, 127,0);
        tracep->declArray(c+1026,"top d_cache ram_1_5", false,-1, 127,0);
        tracep->declArray(c+1030,"top d_cache ram_1_6", false,-1, 127,0);
        tracep->declArray(c+1034,"top d_cache ram_1_7", false,-1, 127,0);
        tracep->declArray(c+1038,"top d_cache ram_1_8", false,-1, 127,0);
        tracep->declArray(c+1042,"top d_cache ram_1_9", false,-1, 127,0);
        tracep->declArray(c+1046,"top d_cache ram_1_10", false,-1, 127,0);
        tracep->declArray(c+1050,"top d_cache ram_1_11", false,-1, 127,0);
        tracep->declArray(c+1054,"top d_cache ram_1_12", false,-1, 127,0);
        tracep->declArray(c+1058,"top d_cache ram_1_13", false,-1, 127,0);
        tracep->declArray(c+1062,"top d_cache ram_1_14", false,-1, 127,0);
        tracep->declArray(c+1066,"top d_cache ram_1_15", false,-1, 127,0);
        tracep->declArray(c+1070,"top d_cache ram_2_0", false,-1, 127,0);
        tracep->declArray(c+1074,"top d_cache ram_2_1", false,-1, 127,0);
        tracep->declArray(c+1078,"top d_cache ram_2_2", false,-1, 127,0);
        tracep->declArray(c+1082,"top d_cache ram_2_3", false,-1, 127,0);
        tracep->declArray(c+1086,"top d_cache ram_2_4", false,-1, 127,0);
        tracep->declArray(c+1090,"top d_cache ram_2_5", false,-1, 127,0);
        tracep->declArray(c+1094,"top d_cache ram_2_6", false,-1, 127,0);
        tracep->declArray(c+1098,"top d_cache ram_2_7", false,-1, 127,0);
        tracep->declArray(c+1102,"top d_cache ram_2_8", false,-1, 127,0);
        tracep->declArray(c+1106,"top d_cache ram_2_9", false,-1, 127,0);
        tracep->declArray(c+1110,"top d_cache ram_2_10", false,-1, 127,0);
        tracep->declArray(c+1114,"top d_cache ram_2_11", false,-1, 127,0);
        tracep->declArray(c+1118,"top d_cache ram_2_12", false,-1, 127,0);
        tracep->declArray(c+1122,"top d_cache ram_2_13", false,-1, 127,0);
        tracep->declArray(c+1126,"top d_cache ram_2_14", false,-1, 127,0);
        tracep->declArray(c+1130,"top d_cache ram_2_15", false,-1, 127,0);
        tracep->declArray(c+1134,"top d_cache ram_3_0", false,-1, 127,0);
        tracep->declArray(c+1138,"top d_cache ram_3_1", false,-1, 127,0);
        tracep->declArray(c+1142,"top d_cache ram_3_2", false,-1, 127,0);
        tracep->declArray(c+1146,"top d_cache ram_3_3", false,-1, 127,0);
        tracep->declArray(c+1150,"top d_cache ram_3_4", false,-1, 127,0);
        tracep->declArray(c+1154,"top d_cache ram_3_5", false,-1, 127,0);
        tracep->declArray(c+1158,"top d_cache ram_3_6", false,-1, 127,0);
        tracep->declArray(c+1162,"top d_cache ram_3_7", false,-1, 127,0);
        tracep->declArray(c+1166,"top d_cache ram_3_8", false,-1, 127,0);
        tracep->declArray(c+1170,"top d_cache ram_3_9", false,-1, 127,0);
        tracep->declArray(c+1174,"top d_cache ram_3_10", false,-1, 127,0);
        tracep->declArray(c+1178,"top d_cache ram_3_11", false,-1, 127,0);
        tracep->declArray(c+1182,"top d_cache ram_3_12", false,-1, 127,0);
        tracep->declArray(c+1186,"top d_cache ram_3_13", false,-1, 127,0);
        tracep->declArray(c+1190,"top d_cache ram_3_14", false,-1, 127,0);
        tracep->declArray(c+1194,"top d_cache ram_3_15", false,-1, 127,0);
        tracep->declBus(c+1198,"top d_cache tag_0_0", false,-1, 31,0);
        tracep->declBus(c+1199,"top d_cache tag_0_1", false,-1, 31,0);
        tracep->declBus(c+1200,"top d_cache tag_0_2", false,-1, 31,0);
        tracep->declBus(c+1201,"top d_cache tag_0_3", false,-1, 31,0);
        tracep->declBus(c+1202,"top d_cache tag_0_4", false,-1, 31,0);
        tracep->declBus(c+1203,"top d_cache tag_0_5", false,-1, 31,0);
        tracep->declBus(c+1204,"top d_cache tag_0_6", false,-1, 31,0);
        tracep->declBus(c+1205,"top d_cache tag_0_7", false,-1, 31,0);
        tracep->declBus(c+1206,"top d_cache tag_0_8", false,-1, 31,0);
        tracep->declBus(c+1207,"top d_cache tag_0_9", false,-1, 31,0);
        tracep->declBus(c+1208,"top d_cache tag_0_10", false,-1, 31,0);
        tracep->declBus(c+1209,"top d_cache tag_0_11", false,-1, 31,0);
        tracep->declBus(c+1210,"top d_cache tag_0_12", false,-1, 31,0);
        tracep->declBus(c+1211,"top d_cache tag_0_13", false,-1, 31,0);
        tracep->declBus(c+1212,"top d_cache tag_0_14", false,-1, 31,0);
        tracep->declBus(c+1213,"top d_cache tag_0_15", false,-1, 31,0);
        tracep->declBus(c+1214,"top d_cache tag_1_0", false,-1, 31,0);
        tracep->declBus(c+1215,"top d_cache tag_1_1", false,-1, 31,0);
        tracep->declBus(c+1216,"top d_cache tag_1_2", false,-1, 31,0);
        tracep->declBus(c+1217,"top d_cache tag_1_3", false,-1, 31,0);
        tracep->declBus(c+1218,"top d_cache tag_1_4", false,-1, 31,0);
        tracep->declBus(c+1219,"top d_cache tag_1_5", false,-1, 31,0);
        tracep->declBus(c+1220,"top d_cache tag_1_6", false,-1, 31,0);
        tracep->declBus(c+1221,"top d_cache tag_1_7", false,-1, 31,0);
        tracep->declBus(c+1222,"top d_cache tag_1_8", false,-1, 31,0);
        tracep->declBus(c+1223,"top d_cache tag_1_9", false,-1, 31,0);
        tracep->declBus(c+1224,"top d_cache tag_1_10", false,-1, 31,0);
        tracep->declBus(c+1225,"top d_cache tag_1_11", false,-1, 31,0);
        tracep->declBus(c+1226,"top d_cache tag_1_12", false,-1, 31,0);
        tracep->declBus(c+1227,"top d_cache tag_1_13", false,-1, 31,0);
        tracep->declBus(c+1228,"top d_cache tag_1_14", false,-1, 31,0);
        tracep->declBus(c+1229,"top d_cache tag_1_15", false,-1, 31,0);
        tracep->declBus(c+1230,"top d_cache tag_2_0", false,-1, 31,0);
        tracep->declBus(c+1231,"top d_cache tag_2_1", false,-1, 31,0);
        tracep->declBus(c+1232,"top d_cache tag_2_2", false,-1, 31,0);
        tracep->declBus(c+1233,"top d_cache tag_2_3", false,-1, 31,0);
        tracep->declBus(c+1234,"top d_cache tag_2_4", false,-1, 31,0);
        tracep->declBus(c+1235,"top d_cache tag_2_5", false,-1, 31,0);
        tracep->declBus(c+1236,"top d_cache tag_2_6", false,-1, 31,0);
        tracep->declBus(c+1237,"top d_cache tag_2_7", false,-1, 31,0);
        tracep->declBus(c+1238,"top d_cache tag_2_8", false,-1, 31,0);
        tracep->declBus(c+1239,"top d_cache tag_2_9", false,-1, 31,0);
        tracep->declBus(c+1240,"top d_cache tag_2_10", false,-1, 31,0);
        tracep->declBus(c+1241,"top d_cache tag_2_11", false,-1, 31,0);
        tracep->declBus(c+1242,"top d_cache tag_2_12", false,-1, 31,0);
        tracep->declBus(c+1243,"top d_cache tag_2_13", false,-1, 31,0);
        tracep->declBus(c+1244,"top d_cache tag_2_14", false,-1, 31,0);
        tracep->declBus(c+1245,"top d_cache tag_2_15", false,-1, 31,0);
        tracep->declBus(c+1246,"top d_cache tag_3_0", false,-1, 31,0);
        tracep->declBus(c+1247,"top d_cache tag_3_1", false,-1, 31,0);
        tracep->declBus(c+1248,"top d_cache tag_3_2", false,-1, 31,0);
        tracep->declBus(c+1249,"top d_cache tag_3_3", false,-1, 31,0);
        tracep->declBus(c+1250,"top d_cache tag_3_4", false,-1, 31,0);
        tracep->declBus(c+1251,"top d_cache tag_3_5", false,-1, 31,0);
        tracep->declBus(c+1252,"top d_cache tag_3_6", false,-1, 31,0);
        tracep->declBus(c+1253,"top d_cache tag_3_7", false,-1, 31,0);
        tracep->declBus(c+1254,"top d_cache tag_3_8", false,-1, 31,0);
        tracep->declBus(c+1255,"top d_cache tag_3_9", false,-1, 31,0);
        tracep->declBus(c+1256,"top d_cache tag_3_10", false,-1, 31,0);
        tracep->declBus(c+1257,"top d_cache tag_3_11", false,-1, 31,0);
        tracep->declBus(c+1258,"top d_cache tag_3_12", false,-1, 31,0);
        tracep->declBus(c+1259,"top d_cache tag_3_13", false,-1, 31,0);
        tracep->declBus(c+1260,"top d_cache tag_3_14", false,-1, 31,0);
        tracep->declBus(c+1261,"top d_cache tag_3_15", false,-1, 31,0);
        tracep->declBit(c+1262,"top d_cache valid_0_0", false,-1);
        tracep->declBit(c+1263,"top d_cache valid_0_1", false,-1);
        tracep->declBit(c+1264,"top d_cache valid_0_2", false,-1);
        tracep->declBit(c+1265,"top d_cache valid_0_3", false,-1);
        tracep->declBit(c+1266,"top d_cache valid_0_4", false,-1);
        tracep->declBit(c+1267,"top d_cache valid_0_5", false,-1);
        tracep->declBit(c+1268,"top d_cache valid_0_6", false,-1);
        tracep->declBit(c+1269,"top d_cache valid_0_7", false,-1);
        tracep->declBit(c+1270,"top d_cache valid_0_8", false,-1);
        tracep->declBit(c+1271,"top d_cache valid_0_9", false,-1);
        tracep->declBit(c+1272,"top d_cache valid_0_10", false,-1);
        tracep->declBit(c+1273,"top d_cache valid_0_11", false,-1);
        tracep->declBit(c+1274,"top d_cache valid_0_12", false,-1);
        tracep->declBit(c+1275,"top d_cache valid_0_13", false,-1);
        tracep->declBit(c+1276,"top d_cache valid_0_14", false,-1);
        tracep->declBit(c+1277,"top d_cache valid_0_15", false,-1);
        tracep->declBit(c+1278,"top d_cache valid_1_0", false,-1);
        tracep->declBit(c+1279,"top d_cache valid_1_1", false,-1);
        tracep->declBit(c+1280,"top d_cache valid_1_2", false,-1);
        tracep->declBit(c+1281,"top d_cache valid_1_3", false,-1);
        tracep->declBit(c+1282,"top d_cache valid_1_4", false,-1);
        tracep->declBit(c+1283,"top d_cache valid_1_5", false,-1);
        tracep->declBit(c+1284,"top d_cache valid_1_6", false,-1);
        tracep->declBit(c+1285,"top d_cache valid_1_7", false,-1);
        tracep->declBit(c+1286,"top d_cache valid_1_8", false,-1);
        tracep->declBit(c+1287,"top d_cache valid_1_9", false,-1);
        tracep->declBit(c+1288,"top d_cache valid_1_10", false,-1);
        tracep->declBit(c+1289,"top d_cache valid_1_11", false,-1);
        tracep->declBit(c+1290,"top d_cache valid_1_12", false,-1);
        tracep->declBit(c+1291,"top d_cache valid_1_13", false,-1);
        tracep->declBit(c+1292,"top d_cache valid_1_14", false,-1);
        tracep->declBit(c+1293,"top d_cache valid_1_15", false,-1);
        tracep->declBit(c+1294,"top d_cache valid_2_0", false,-1);
        tracep->declBit(c+1295,"top d_cache valid_2_1", false,-1);
        tracep->declBit(c+1296,"top d_cache valid_2_2", false,-1);
        tracep->declBit(c+1297,"top d_cache valid_2_3", false,-1);
        tracep->declBit(c+1298,"top d_cache valid_2_4", false,-1);
        tracep->declBit(c+1299,"top d_cache valid_2_5", false,-1);
        tracep->declBit(c+1300,"top d_cache valid_2_6", false,-1);
        tracep->declBit(c+1301,"top d_cache valid_2_7", false,-1);
        tracep->declBit(c+1302,"top d_cache valid_2_8", false,-1);
        tracep->declBit(c+1303,"top d_cache valid_2_9", false,-1);
        tracep->declBit(c+1304,"top d_cache valid_2_10", false,-1);
        tracep->declBit(c+1305,"top d_cache valid_2_11", false,-1);
        tracep->declBit(c+1306,"top d_cache valid_2_12", false,-1);
        tracep->declBit(c+1307,"top d_cache valid_2_13", false,-1);
        tracep->declBit(c+1308,"top d_cache valid_2_14", false,-1);
        tracep->declBit(c+1309,"top d_cache valid_2_15", false,-1);
        tracep->declBit(c+1310,"top d_cache valid_3_0", false,-1);
        tracep->declBit(c+1311,"top d_cache valid_3_1", false,-1);
        tracep->declBit(c+1312,"top d_cache valid_3_2", false,-1);
        tracep->declBit(c+1313,"top d_cache valid_3_3", false,-1);
        tracep->declBit(c+1314,"top d_cache valid_3_4", false,-1);
        tracep->declBit(c+1315,"top d_cache valid_3_5", false,-1);
        tracep->declBit(c+1316,"top d_cache valid_3_6", false,-1);
        tracep->declBit(c+1317,"top d_cache valid_3_7", false,-1);
        tracep->declBit(c+1318,"top d_cache valid_3_8", false,-1);
        tracep->declBit(c+1319,"top d_cache valid_3_9", false,-1);
        tracep->declBit(c+1320,"top d_cache valid_3_10", false,-1);
        tracep->declBit(c+1321,"top d_cache valid_3_11", false,-1);
        tracep->declBit(c+1322,"top d_cache valid_3_12", false,-1);
        tracep->declBit(c+1323,"top d_cache valid_3_13", false,-1);
        tracep->declBit(c+1324,"top d_cache valid_3_14", false,-1);
        tracep->declBit(c+1325,"top d_cache valid_3_15", false,-1);
        tracep->declBit(c+1326,"top d_cache dirty_0_0", false,-1);
        tracep->declBit(c+1327,"top d_cache dirty_0_1", false,-1);
        tracep->declBit(c+1328,"top d_cache dirty_0_2", false,-1);
        tracep->declBit(c+1329,"top d_cache dirty_0_3", false,-1);
        tracep->declBit(c+1330,"top d_cache dirty_0_4", false,-1);
        tracep->declBit(c+1331,"top d_cache dirty_0_5", false,-1);
        tracep->declBit(c+1332,"top d_cache dirty_0_6", false,-1);
        tracep->declBit(c+1333,"top d_cache dirty_0_7", false,-1);
        tracep->declBit(c+1334,"top d_cache dirty_0_8", false,-1);
        tracep->declBit(c+1335,"top d_cache dirty_0_9", false,-1);
        tracep->declBit(c+1336,"top d_cache dirty_0_10", false,-1);
        tracep->declBit(c+1337,"top d_cache dirty_0_11", false,-1);
        tracep->declBit(c+1338,"top d_cache dirty_0_12", false,-1);
        tracep->declBit(c+1339,"top d_cache dirty_0_13", false,-1);
        tracep->declBit(c+1340,"top d_cache dirty_0_14", false,-1);
        tracep->declBit(c+1341,"top d_cache dirty_0_15", false,-1);
        tracep->declBit(c+1342,"top d_cache dirty_3_0", false,-1);
        tracep->declBit(c+1343,"top d_cache dirty_3_1", false,-1);
        tracep->declBit(c+1344,"top d_cache dirty_3_2", false,-1);
        tracep->declBit(c+1345,"top d_cache dirty_3_3", false,-1);
        tracep->declBit(c+1346,"top d_cache dirty_3_4", false,-1);
        tracep->declBit(c+1347,"top d_cache dirty_3_5", false,-1);
        tracep->declBit(c+1348,"top d_cache dirty_3_6", false,-1);
        tracep->declBit(c+1349,"top d_cache dirty_3_7", false,-1);
        tracep->declBit(c+1350,"top d_cache dirty_3_8", false,-1);
        tracep->declBit(c+1351,"top d_cache dirty_3_9", false,-1);
        tracep->declBit(c+1352,"top d_cache dirty_3_10", false,-1);
        tracep->declBit(c+1353,"top d_cache dirty_3_11", false,-1);
        tracep->declBit(c+1354,"top d_cache dirty_3_12", false,-1);
        tracep->declBit(c+1355,"top d_cache dirty_3_13", false,-1);
        tracep->declBit(c+1356,"top d_cache dirty_3_14", false,-1);
        tracep->declBit(c+1357,"top d_cache dirty_3_15", false,-1);
        tracep->declArray(c+1358,"top d_cache write_back_data", false,-1, 127,0);
        tracep->declBus(c+1362,"top d_cache write_back_addr", false,-1, 31,0);
        tracep->declQuad(c+1363,"top d_cache receive_data_0", false,-1, 63,0);
        tracep->declQuad(c+1365,"top d_cache receive_data_1", false,-1, 63,0);
        tracep->declBus(c+1367,"top d_cache receive_num", false,-1, 2,0);
        tracep->declBus(c+1368,"top d_cache quene_0", false,-1, 7,0);
        tracep->declBus(c+1369,"top d_cache quene_1", false,-1, 7,0);
        tracep->declBus(c+1370,"top d_cache quene_2", false,-1, 7,0);
        tracep->declBus(c+1371,"top d_cache quene_3", false,-1, 7,0);
        tracep->declBus(c+1372,"top d_cache quene_4", false,-1, 7,0);
        tracep->declBus(c+1373,"top d_cache quene_5", false,-1, 7,0);
        tracep->declBus(c+1374,"top d_cache quene_6", false,-1, 7,0);
        tracep->declBus(c+1375,"top d_cache quene_7", false,-1, 7,0);
        tracep->declBus(c+1376,"top d_cache quene_8", false,-1, 7,0);
        tracep->declBus(c+1377,"top d_cache quene_9", false,-1, 7,0);
        tracep->declBus(c+1378,"top d_cache quene_10", false,-1, 7,0);
        tracep->declBus(c+1379,"top d_cache quene_11", false,-1, 7,0);
        tracep->declBus(c+1380,"top d_cache quene_12", false,-1, 7,0);
        tracep->declBus(c+1381,"top d_cache quene_13", false,-1, 7,0);
        tracep->declBus(c+1382,"top d_cache quene_14", false,-1, 7,0);
        tracep->declBus(c+1383,"top d_cache quene_15", false,-1, 7,0);
        tracep->declBus(c+1384,"top d_cache offset", false,-1, 3,0);
        tracep->declBus(c+1385,"top d_cache index", false,-1, 3,0);
        tracep->declBus(c+1386,"top d_cache tag", false,-1, 23,0);
        tracep->declBus(c+1387,"top d_cache shift_bit", false,-1, 6,0);
        tracep->declQuad(c+1388,"top d_cache wmask", false,-1, 63,0);
        tracep->declBit(c+1390,"top d_cache way0_hit", false,-1);
        tracep->declBit(c+1391,"top d_cache way1_hit", false,-1);
        tracep->declBit(c+1392,"top d_cache way2_hit", false,-1);
        tracep->declBit(c+1393,"top d_cache way3_hit", false,-1);
        tracep->declBus(c+1394,"top d_cache unuse_way", false,-1, 2,0);
        tracep->declBus(c+1395,"top d_cache state", false,-1, 3,0);
        tracep->declBit(c+1403,"top axi clock", false,-1);
        tracep->declBit(c+1404,"top axi reset", false,-1);
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
        tracep->declQuad(c+1396,"top axi Mem_modle_Raddr", false,-1, 63,0);
        tracep->declQuad(c+115,"top axi Mem_modle_Rdata", false,-1, 63,0);
        tracep->declQuad(c+1398,"top axi Mem_modle_Waddr", false,-1, 63,0);
        tracep->declQuad(c+128,"top axi Mem_modle_Wdata", false,-1, 63,0);
        tracep->declBus(c+130,"top axi Mem_modle_Wmask", false,-1, 7,0);
        tracep->declBit(c+119,"top axi Mem_modle_Write_en", false,-1);
        tracep->declBit(c+118,"top axi Mem_modle_Read_en", false,-1);
        tracep->declBit(c+119,"top axi axi_wready", false,-1);
        tracep->declBit(c+120,"top axi axi_bvalid", false,-1);
        tracep->declBit(c+118,"top axi axi_rvalid", false,-1);
        tracep->declBus(c+1400,"top axi arlen", false,-1, 7,0);
        tracep->declBus(c+1401,"top axi awlen", false,-1, 7,0);
        tracep->declQuad(c+1396,"top axi araddr", false,-1, 63,0);
        tracep->declQuad(c+1398,"top axi awaddr", false,-1, 63,0);
        tracep->declBus(c+1402,"top axi state", false,-1, 2,0);
        tracep->declQuad(c+1396,"top axi Mem_modle Raddr", false,-1, 63,0);
        tracep->declQuad(c+1398,"top axi Mem_modle Waddr", false,-1, 63,0);
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

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp6392;
    VlWide<4>/*127:0*/ __Vtemp6393;
    VlWide<4>/*127:0*/ __Vtemp6394;
    VlWide<3>/*95:0*/ __Vtemp6397;
    VlWide<3>/*95:0*/ __Vtemp6398;
    VlWide<3>/*95:0*/ __Vtemp6402;
    VlWide<3>/*95:0*/ __Vtemp6406;
    VlWide<3>/*95:0*/ __Vtemp6413;
    VlWide<4>/*127:0*/ __Vtemp6414;
    VlWide<3>/*95:0*/ __Vtemp6415;
    VlWide<4>/*127:0*/ __Vtemp6416;
    VlWide<4>/*127:0*/ __Vtemp6417;
    VlWide<4>/*127:0*/ __Vtemp6423;
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
        tracep->fullQData(oldp+22,((((QData)((IData)(
                                                     ((1U 
                                                       == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                       ? 
                                                      vlSelf->top__DOT__i_cache__DOT___io_to_ifu_rdata_T_6[1U]
                                                       : 0U))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((1U 
                                                                   == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                                   ? 
                                                                  vlSelf->top__DOT__i_cache__DOT___io_to_ifu_rdata_T_6[0U]
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
                                                     vlSelf->top__DOT__d_cache__DOT___GEN_4916[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__d_cache__DOT___GEN_4916[0U])))),64);
        tracep->fullBit(oldp+78,(((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___T_9)
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
                                                    & (IData)(vlSelf->top__DOT__d_cache__DOT___T_5)) 
                                                   & (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid))))))))));
        tracep->fullBit(oldp+79,(((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                  & ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___T_9)
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
                                                     & (IData)(vlSelf->top__DOT__d_cache__DOT___T_5)) 
                                                    & (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid))))))))));
        tracep->fullIData(oldp+80,((IData)(vlSelf->top__DOT__LSU__DOT__maddr)),32);
        tracep->fullBit(oldp+81,(vlSelf->top__DOT__LSU_io_axi_out_arvalid));
        tracep->fullBit(oldp+82,(vlSelf->top__DOT__LSU_io_axi_out_awvalid));
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__LSU__DOT__store_data),64);
        tracep->fullCData(oldp+85,(vlSelf->top__DOT__LSU__DOT__wstrb),8);
        tracep->fullBit(oldp+86,(vlSelf->top__DOT__LSU__DOT__wen));
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__WBU__DOT__ws_pc),64);
        tracep->fullIData(oldp+89,((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_2932)),32);
        tracep->fullCData(oldp+90,(vlSelf->top__DOT__i_cache_io_to_axi_arvalid),8);
        tracep->fullBit(oldp+91,(vlSelf->top__DOT__i_cache_io_to_axi_arvalid));
        tracep->fullBit(oldp+92,(vlSelf->top__DOT__i_cache_io_to_axi_rready));
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata),64);
        tracep->fullBit(oldp+95,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast));
        tracep->fullBit(oldp+96,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid));
        tracep->fullIData(oldp+97,((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_4901)),32);
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
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_4901)
                                          : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_4901)
                                              : ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_2932)
                                                  : 0U)))
                                      : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_2932)
                                          : ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_4901)
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_4901)
                                                  : 0U))))),32);
        tracep->fullCData(oldp+122,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullBit(oldp+344,(((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
                                   & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
        tracep->fullBit(oldp+345,((((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
                                    >> 1U) & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
        tracep->fullCData(oldp+346,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                      ? 1U : ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                               ? (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)
                                               : 0U))),2);
        tracep->fullQData(oldp+347,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
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
        tracep->fullQData(oldp+349,(((IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2)
                                      ? (((QData)((IData)(
                                                          vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])))
                                      : vlSelf->top__DOT__IDU__DOT___rdata2_T_1)),64);
        tracep->fullCData(oldp+351,(((2U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                      ? 0U : ((0x3eU 
                                               == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))
                                               ? 1U
                                               : (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)))),2);
        tracep->fullQData(oldp+352,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data),64);
        tracep->fullIData(oldp+354,(vlSelf->top__DOT__IDU__DOT__inst),32);
        tracep->fullBit(oldp+355,(vlSelf->top__DOT__IDU__DOT__br_taken_cancel));
        tracep->fullBit(oldp+356,(vlSelf->top__DOT__IDU__DOT__src1_is_pc));
        tracep->fullIData(oldp+357,(vlSelf->top__DOT__IDU__DOT___inst_type_T_188),32);
        tracep->fullCData(oldp+358,(vlSelf->top__DOT__IDU__DOT__csr_write),2);
        tracep->fullBit(oldp+359,(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1));
        tracep->fullBit(oldp+360,(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1));
        tracep->fullBit(oldp+361,(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs1));
        tracep->fullBit(oldp+362,(vlSelf->top__DOT__IDU__DOT__src2_is_imm));
        tracep->fullCData(oldp+363,(vlSelf->top__DOT__IDU__DOT__rs2),5);
        tracep->fullBit(oldp+364,(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2));
        tracep->fullBit(oldp+365,(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs2));
        tracep->fullBit(oldp+366,(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs2));
        tracep->fullBit(oldp+367,(vlSelf->top__DOT__IDU__DOT__ds_ready_go));
        tracep->fullBit(oldp+368,(vlSelf->top__DOT__IDU__DOT__ds_allowin));
        tracep->fullQData(oldp+369,(vlSelf->top__DOT__IDU__DOT__rdata1),64);
        tracep->fullQData(oldp+371,(vlSelf->top__DOT__IDU__DOT__rdata2),64);
        tracep->fullBit(oldp+373,(vlSelf->top__DOT__IDU__DOT__br_taken));
        tracep->fullSData(oldp+374,((vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0x14U)),12);
        tracep->fullIData(oldp+375,(((0x80000U & (vlSelf->top__DOT__IDU__DOT__inst 
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
        tracep->fullIData(oldp+376,((vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+377,(((0xfe0U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 7U)))),12);
        tracep->fullSData(oldp+378,(((0x800U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x14U)) 
                                     | ((0x400U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                   << 3U)) 
                                        | ((0x3f0U 
                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0x15U)) 
                                           | (0xfU 
                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 8U)))))),12);
        tracep->fullQData(oldp+379,(vlSelf->top__DOT__IDU__DOT__imm),64);
        tracep->fullCData(oldp+381,(vlSelf->top__DOT__IDU__DOT__csr_index),2);
        tracep->fullQData(oldp+382,(((0x1073U == (0x707fU 
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
        tracep->fullQData(oldp+384,(vlSelf->top__DOT__IDU__DOT__src1),64);
        tracep->fullQData(oldp+386,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[0]),64);
        tracep->fullQData(oldp+388,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[1]),64);
        tracep->fullQData(oldp+390,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[2]),64);
        tracep->fullQData(oldp+392,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[3]),64);
        tracep->fullQData(oldp+394,(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value),64);
        tracep->fullQData(oldp+396,(vlSelf->top__DOT__EXU__DOT__src2_value),64);
        tracep->fullIData(oldp+398,(vlSelf->top__DOT__EXU__DOT__ALUop),32);
        tracep->fullBit(oldp+399,(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy));
        tracep->fullQData(oldp+400,(vlSelf->top__DOT__EXU__DOT__src1_value),64);
        tracep->fullBit(oldp+402,((1U & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy)))));
        tracep->fullBit(oldp+403,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_mul_valid));
        tracep->fullBit(oldp+404,((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)));
        tracep->fullBit(oldp+405,(((0U != (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state)) 
                                   & ((1U != (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state)) 
                                      & (2U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))))));
        tracep->fullIData(oldp+406,(((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
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
        tracep->fullIData(oldp+407,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_result_lo),32);
        tracep->fullBit(oldp+408,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_valid));
        tracep->fullBit(oldp+409,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw));
        tracep->fullBit(oldp+410,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed));
        tracep->fullBit(oldp+411,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start) 
                                   & VL_GTES_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num))));
        tracep->fullQData(oldp+412,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_quotient),64);
        tracep->fullQData(oldp+414,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder),64);
        tracep->fullBit(oldp+416,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__mul_valid));
        tracep->fullBit(oldp+417,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__div_valid));
        tracep->fullQData(oldp+418,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res),64);
        tracep->fullQData(oldp+420,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sub_res),64);
        tracep->fullQData(oldp+422,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sra_res),64);
        tracep->fullQData(oldp+424,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),64);
        VL_EXTEND_WQ(127,64, __Vtemp6392, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
        VL_SHIFTL_WWI(127,127,6, __Vtemp6393, __Vtemp6392, 
                      (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
        __Vtemp6394[0U] = __Vtemp6393[0U];
        __Vtemp6394[1U] = __Vtemp6393[1U];
        __Vtemp6394[2U] = __Vtemp6393[2U];
        __Vtemp6394[3U] = (0x7fffffffU & __Vtemp6393[3U]);
        tracep->fullWData(oldp+426,(__Vtemp6394),127);
        tracep->fullIData(oldp+430,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value), 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),32);
        tracep->fullIData(oldp+431,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__srlw_res),32);
        tracep->fullQData(oldp+432,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sllw_res),63);
        tracep->fullQData(oldp+434,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     | vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+436,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     ^ vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+438,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     & vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+440,((((QData)((IData)(
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
        tracep->fullIData(oldp+442,((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_quotient)),32);
        tracep->fullIData(oldp+443,((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder)),32);
        tracep->fullWData(oldp+444,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res),127);
        tracep->fullCData(oldp+448,((7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])),3);
        tracep->fullQData(oldp+449,((((QData)((IData)(
                                                      vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))),64);
        tracep->fullBit(oldp+451,(((6U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])) 
                                   | ((5U == (7U & 
                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])) 
                                      | (4U == (7U 
                                                & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))))));
        VL_EXTEND_WQ(65,64, __Vtemp6397, (~ (((QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
        VL_EXTEND_WQ(65,64, __Vtemp6398, (~ (((QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
        VL_EXTEND_WQ(65,64, __Vtemp6402, ((2U == (7U 
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
        __Vtemp6406[1U] = ((4U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
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
                                : __Vtemp6402[1U]));
        __Vtemp6413[2U] = ((7U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                            ? 0U : (1U & ((6U == (7U 
                                                  & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                           ? __Vtemp6397[2U]
                                           : ((5U == 
                                               (7U 
                                                & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                               ? __Vtemp6398[2U]
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
                                                   __Vtemp6402[2U]))))));
        tracep->fullQData(oldp+452,((((QData)((IData)(
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
                                                        __Vtemp6397[1U]
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (7U 
                                                           & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                          ? 
                                                         __Vtemp6398[1U]
                                                          : 
                                                         __Vtemp6406[1U]))))) 
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
                                                                    __Vtemp6397[0U]
                                                                     : 
                                                                    ((5U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                                      ? 
                                                                     __Vtemp6398[0U]
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
                                                                       __Vtemp6402[0U]))))))))),64);
        tracep->fullBit(oldp+454,((1U & ((IData)((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                                  >> 0x3fU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__EXU__DOT__src2_value 
                                                    >> 0x3fU))))));
        tracep->fullQData(oldp+455,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__res),64);
        tracep->fullCData(oldp+457,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state),2);
        tracep->fullWData(oldp+458,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1),128);
        tracep->fullWData(oldp+462,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2),65);
        tracep->fullQData(oldp+465,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32),64);
        tracep->fullQData(oldp+467,(((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)
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
        __Vtemp6414[0U] = (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32);
        __Vtemp6414[1U] = (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                   >> 0x20U));
        __Vtemp6414[2U] = (IData)(((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                  >> 0x3fU)))
                                    ? 0xffffffffffffffffULL
                                    : 0ULL));
        __Vtemp6414[3U] = (IData)((((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                   >> 0x3fU)))
                                     ? 0xffffffffffffffffULL
                                     : 0ULL) >> 0x20U));
        tracep->fullWData(oldp+469,(__Vtemp6414),128);
        tracep->fullQData(oldp+473,((((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)
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
        tracep->fullBit(oldp+475,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg));
        tracep->fullBit(oldp+476,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg));
        tracep->fullBit(oldp+477,((((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg) 
                                    & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg))) 
                                   | ((~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)) 
                                      & (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)))));
        tracep->fullQData(oldp+478,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s),64);
        tracep->fullQData(oldp+480,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s),64);
        tracep->fullQData(oldp+482,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                      ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                      : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)),64);
        tracep->fullQData(oldp+484,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                      ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                      : vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+486,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                      ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)
                                          ? (1ULL + 
                                             (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s))
                                          : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s)
                                      : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                          ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                          : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))),64);
        tracep->fullQData(oldp+488,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                      ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)
                                          ? (1ULL + 
                                             (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s))
                                          : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s)
                                      : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                          ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                          : vlSelf->top__DOT__EXU__DOT__src2_value))),64);
        VL_EXTEND_WQ(65,64, __Vtemp6415, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                           ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)
                                               ? (1ULL 
                                                  + 
                                                  (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s))
                                               : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s)
                                           : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                               ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                               : vlSelf->top__DOT__EXU__DOT__src2_value)));
        tracep->fullWData(oldp+490,(__Vtemp6415),65);
        tracep->fullWData(oldp+493,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand),128);
        tracep->fullBit(oldp+497,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start));
        tracep->fullQData(oldp+498,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient),64);
        tracep->fullIData(oldp+500,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num),32);
        VL_EXTEND_WQ(128,64, __Vtemp6416, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                            ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)
                                                ? (1ULL 
                                                   + 
                                                   (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s))
                                                : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s)
                                            : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                                ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                                : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)));
        tracep->fullWData(oldp+501,(__Vtemp6416),128);
        tracep->fullWData(oldp+505,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res),65);
        __Vtemp6417[0U] = 0U;
        __Vtemp6417[1U] = (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                           << 0x1fU);
        __Vtemp6417[2U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                            >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                      << 0x1fU));
        __Vtemp6417[3U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                            >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                      << 0x1fU));
        tracep->fullWData(oldp+508,(__Vtemp6417),128);
        if ((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])) {
            __Vtemp6423[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U];
            __Vtemp6423[1U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U];
            __Vtemp6423[2U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U];
            __Vtemp6423[3U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U];
        } else {
            __Vtemp6423[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U];
            __Vtemp6423[1U] = ((0x7fffffffU & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U]) 
                               | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                                  << 0x1fU));
            __Vtemp6423[2U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                                >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                          << 0x1fU));
            __Vtemp6423[3U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                          << 0x1fU));
        }
        tracep->fullWData(oldp+512,(__Vtemp6423),128);
        tracep->fullQData(oldp+516,(vlSelf->top__DOT__LSU__DOT__ms_res),64);
        tracep->fullBit(oldp+518,(vlSelf->top__DOT__LSU__DOT__ren));
        tracep->fullQData(oldp+519,(vlSelf->top__DOT__LSU__DOT__maddr),64);
        tracep->fullCData(oldp+521,(vlSelf->top__DOT__LSU__DOT__load_type),3);
        tracep->fullBit(oldp+522,(vlSelf->top__DOT__LSU__DOT__ms_ready_go));
        tracep->fullQData(oldp+523,(vlSelf->top__DOT__LSU__DOT__rdata),64);
        tracep->fullCData(oldp+525,(vlSelf->top__DOT__arbiter__DOT__state),2);
        tracep->fullWData(oldp+526,(vlSelf->top__DOT__i_cache__DOT__ram_0_0),128);
        tracep->fullWData(oldp+530,(vlSelf->top__DOT__i_cache__DOT__ram_0_1),128);
        tracep->fullWData(oldp+534,(vlSelf->top__DOT__i_cache__DOT__ram_0_2),128);
        tracep->fullWData(oldp+538,(vlSelf->top__DOT__i_cache__DOT__ram_0_3),128);
        tracep->fullWData(oldp+542,(vlSelf->top__DOT__i_cache__DOT__ram_0_4),128);
        tracep->fullWData(oldp+546,(vlSelf->top__DOT__i_cache__DOT__ram_0_5),128);
        tracep->fullWData(oldp+550,(vlSelf->top__DOT__i_cache__DOT__ram_0_6),128);
        tracep->fullWData(oldp+554,(vlSelf->top__DOT__i_cache__DOT__ram_0_7),128);
        tracep->fullWData(oldp+558,(vlSelf->top__DOT__i_cache__DOT__ram_0_8),128);
        tracep->fullWData(oldp+562,(vlSelf->top__DOT__i_cache__DOT__ram_0_9),128);
        tracep->fullWData(oldp+566,(vlSelf->top__DOT__i_cache__DOT__ram_0_10),128);
        tracep->fullWData(oldp+570,(vlSelf->top__DOT__i_cache__DOT__ram_0_11),128);
        tracep->fullWData(oldp+574,(vlSelf->top__DOT__i_cache__DOT__ram_0_12),128);
        tracep->fullWData(oldp+578,(vlSelf->top__DOT__i_cache__DOT__ram_0_13),128);
        tracep->fullWData(oldp+582,(vlSelf->top__DOT__i_cache__DOT__ram_0_14),128);
        tracep->fullWData(oldp+586,(vlSelf->top__DOT__i_cache__DOT__ram_0_15),128);
        tracep->fullWData(oldp+590,(vlSelf->top__DOT__i_cache__DOT__ram_1_0),128);
        tracep->fullWData(oldp+594,(vlSelf->top__DOT__i_cache__DOT__ram_1_1),128);
        tracep->fullWData(oldp+598,(vlSelf->top__DOT__i_cache__DOT__ram_1_2),128);
        tracep->fullWData(oldp+602,(vlSelf->top__DOT__i_cache__DOT__ram_1_3),128);
        tracep->fullWData(oldp+606,(vlSelf->top__DOT__i_cache__DOT__ram_1_4),128);
        tracep->fullWData(oldp+610,(vlSelf->top__DOT__i_cache__DOT__ram_1_5),128);
        tracep->fullWData(oldp+614,(vlSelf->top__DOT__i_cache__DOT__ram_1_6),128);
        tracep->fullWData(oldp+618,(vlSelf->top__DOT__i_cache__DOT__ram_1_7),128);
        tracep->fullWData(oldp+622,(vlSelf->top__DOT__i_cache__DOT__ram_1_8),128);
        tracep->fullWData(oldp+626,(vlSelf->top__DOT__i_cache__DOT__ram_1_9),128);
        tracep->fullWData(oldp+630,(vlSelf->top__DOT__i_cache__DOT__ram_1_10),128);
        tracep->fullWData(oldp+634,(vlSelf->top__DOT__i_cache__DOT__ram_1_11),128);
        tracep->fullWData(oldp+638,(vlSelf->top__DOT__i_cache__DOT__ram_1_12),128);
        tracep->fullWData(oldp+642,(vlSelf->top__DOT__i_cache__DOT__ram_1_13),128);
        tracep->fullWData(oldp+646,(vlSelf->top__DOT__i_cache__DOT__ram_1_14),128);
        tracep->fullWData(oldp+650,(vlSelf->top__DOT__i_cache__DOT__ram_1_15),128);
        tracep->fullWData(oldp+654,(vlSelf->top__DOT__i_cache__DOT__ram_2_0),128);
        tracep->fullWData(oldp+658,(vlSelf->top__DOT__i_cache__DOT__ram_2_1),128);
        tracep->fullWData(oldp+662,(vlSelf->top__DOT__i_cache__DOT__ram_2_2),128);
        tracep->fullWData(oldp+666,(vlSelf->top__DOT__i_cache__DOT__ram_2_3),128);
        tracep->fullWData(oldp+670,(vlSelf->top__DOT__i_cache__DOT__ram_2_4),128);
        tracep->fullWData(oldp+674,(vlSelf->top__DOT__i_cache__DOT__ram_2_5),128);
        tracep->fullWData(oldp+678,(vlSelf->top__DOT__i_cache__DOT__ram_2_6),128);
        tracep->fullWData(oldp+682,(vlSelf->top__DOT__i_cache__DOT__ram_2_7),128);
        tracep->fullWData(oldp+686,(vlSelf->top__DOT__i_cache__DOT__ram_2_8),128);
        tracep->fullWData(oldp+690,(vlSelf->top__DOT__i_cache__DOT__ram_2_9),128);
        tracep->fullWData(oldp+694,(vlSelf->top__DOT__i_cache__DOT__ram_2_10),128);
        tracep->fullWData(oldp+698,(vlSelf->top__DOT__i_cache__DOT__ram_2_11),128);
        tracep->fullWData(oldp+702,(vlSelf->top__DOT__i_cache__DOT__ram_2_12),128);
        tracep->fullWData(oldp+706,(vlSelf->top__DOT__i_cache__DOT__ram_2_13),128);
        tracep->fullWData(oldp+710,(vlSelf->top__DOT__i_cache__DOT__ram_2_14),128);
        tracep->fullWData(oldp+714,(vlSelf->top__DOT__i_cache__DOT__ram_2_15),128);
        tracep->fullWData(oldp+718,(vlSelf->top__DOT__i_cache__DOT__ram_3_0),128);
        tracep->fullWData(oldp+722,(vlSelf->top__DOT__i_cache__DOT__ram_3_1),128);
        tracep->fullWData(oldp+726,(vlSelf->top__DOT__i_cache__DOT__ram_3_2),128);
        tracep->fullWData(oldp+730,(vlSelf->top__DOT__i_cache__DOT__ram_3_3),128);
        tracep->fullWData(oldp+734,(vlSelf->top__DOT__i_cache__DOT__ram_3_4),128);
        tracep->fullWData(oldp+738,(vlSelf->top__DOT__i_cache__DOT__ram_3_5),128);
        tracep->fullWData(oldp+742,(vlSelf->top__DOT__i_cache__DOT__ram_3_6),128);
        tracep->fullWData(oldp+746,(vlSelf->top__DOT__i_cache__DOT__ram_3_7),128);
        tracep->fullWData(oldp+750,(vlSelf->top__DOT__i_cache__DOT__ram_3_8),128);
        tracep->fullWData(oldp+754,(vlSelf->top__DOT__i_cache__DOT__ram_3_9),128);
        tracep->fullWData(oldp+758,(vlSelf->top__DOT__i_cache__DOT__ram_3_10),128);
        tracep->fullWData(oldp+762,(vlSelf->top__DOT__i_cache__DOT__ram_3_11),128);
        tracep->fullWData(oldp+766,(vlSelf->top__DOT__i_cache__DOT__ram_3_12),128);
        tracep->fullWData(oldp+770,(vlSelf->top__DOT__i_cache__DOT__ram_3_13),128);
        tracep->fullWData(oldp+774,(vlSelf->top__DOT__i_cache__DOT__ram_3_14),128);
        tracep->fullWData(oldp+778,(vlSelf->top__DOT__i_cache__DOT__ram_3_15),128);
        tracep->fullIData(oldp+782,(vlSelf->top__DOT__i_cache__DOT__tag_0_0),32);
        tracep->fullIData(oldp+783,(vlSelf->top__DOT__i_cache__DOT__tag_0_1),32);
        tracep->fullIData(oldp+784,(vlSelf->top__DOT__i_cache__DOT__tag_0_2),32);
        tracep->fullIData(oldp+785,(vlSelf->top__DOT__i_cache__DOT__tag_0_3),32);
        tracep->fullIData(oldp+786,(vlSelf->top__DOT__i_cache__DOT__tag_0_4),32);
        tracep->fullIData(oldp+787,(vlSelf->top__DOT__i_cache__DOT__tag_0_5),32);
        tracep->fullIData(oldp+788,(vlSelf->top__DOT__i_cache__DOT__tag_0_6),32);
        tracep->fullIData(oldp+789,(vlSelf->top__DOT__i_cache__DOT__tag_0_7),32);
        tracep->fullIData(oldp+790,(vlSelf->top__DOT__i_cache__DOT__tag_0_8),32);
        tracep->fullIData(oldp+791,(vlSelf->top__DOT__i_cache__DOT__tag_0_9),32);
        tracep->fullIData(oldp+792,(vlSelf->top__DOT__i_cache__DOT__tag_0_10),32);
        tracep->fullIData(oldp+793,(vlSelf->top__DOT__i_cache__DOT__tag_0_11),32);
        tracep->fullIData(oldp+794,(vlSelf->top__DOT__i_cache__DOT__tag_0_12),32);
        tracep->fullIData(oldp+795,(vlSelf->top__DOT__i_cache__DOT__tag_0_13),32);
        tracep->fullIData(oldp+796,(vlSelf->top__DOT__i_cache__DOT__tag_0_14),32);
        tracep->fullIData(oldp+797,(vlSelf->top__DOT__i_cache__DOT__tag_0_15),32);
        tracep->fullIData(oldp+798,(vlSelf->top__DOT__i_cache__DOT__tag_1_0),32);
        tracep->fullIData(oldp+799,(vlSelf->top__DOT__i_cache__DOT__tag_1_1),32);
        tracep->fullIData(oldp+800,(vlSelf->top__DOT__i_cache__DOT__tag_1_2),32);
        tracep->fullIData(oldp+801,(vlSelf->top__DOT__i_cache__DOT__tag_1_3),32);
        tracep->fullIData(oldp+802,(vlSelf->top__DOT__i_cache__DOT__tag_1_4),32);
        tracep->fullIData(oldp+803,(vlSelf->top__DOT__i_cache__DOT__tag_1_5),32);
        tracep->fullIData(oldp+804,(vlSelf->top__DOT__i_cache__DOT__tag_1_6),32);
        tracep->fullIData(oldp+805,(vlSelf->top__DOT__i_cache__DOT__tag_1_7),32);
        tracep->fullIData(oldp+806,(vlSelf->top__DOT__i_cache__DOT__tag_1_8),32);
        tracep->fullIData(oldp+807,(vlSelf->top__DOT__i_cache__DOT__tag_1_9),32);
        tracep->fullIData(oldp+808,(vlSelf->top__DOT__i_cache__DOT__tag_1_10),32);
        tracep->fullIData(oldp+809,(vlSelf->top__DOT__i_cache__DOT__tag_1_11),32);
        tracep->fullIData(oldp+810,(vlSelf->top__DOT__i_cache__DOT__tag_1_12),32);
        tracep->fullIData(oldp+811,(vlSelf->top__DOT__i_cache__DOT__tag_1_13),32);
        tracep->fullIData(oldp+812,(vlSelf->top__DOT__i_cache__DOT__tag_1_14),32);
        tracep->fullIData(oldp+813,(vlSelf->top__DOT__i_cache__DOT__tag_1_15),32);
        tracep->fullIData(oldp+814,(vlSelf->top__DOT__i_cache__DOT__tag_2_0),32);
        tracep->fullIData(oldp+815,(vlSelf->top__DOT__i_cache__DOT__tag_2_1),32);
        tracep->fullIData(oldp+816,(vlSelf->top__DOT__i_cache__DOT__tag_2_2),32);
        tracep->fullIData(oldp+817,(vlSelf->top__DOT__i_cache__DOT__tag_2_3),32);
        tracep->fullIData(oldp+818,(vlSelf->top__DOT__i_cache__DOT__tag_2_4),32);
        tracep->fullIData(oldp+819,(vlSelf->top__DOT__i_cache__DOT__tag_2_5),32);
        tracep->fullIData(oldp+820,(vlSelf->top__DOT__i_cache__DOT__tag_2_6),32);
        tracep->fullIData(oldp+821,(vlSelf->top__DOT__i_cache__DOT__tag_2_7),32);
        tracep->fullIData(oldp+822,(vlSelf->top__DOT__i_cache__DOT__tag_2_8),32);
        tracep->fullIData(oldp+823,(vlSelf->top__DOT__i_cache__DOT__tag_2_9),32);
        tracep->fullIData(oldp+824,(vlSelf->top__DOT__i_cache__DOT__tag_2_10),32);
        tracep->fullIData(oldp+825,(vlSelf->top__DOT__i_cache__DOT__tag_2_11),32);
        tracep->fullIData(oldp+826,(vlSelf->top__DOT__i_cache__DOT__tag_2_12),32);
        tracep->fullIData(oldp+827,(vlSelf->top__DOT__i_cache__DOT__tag_2_13),32);
        tracep->fullIData(oldp+828,(vlSelf->top__DOT__i_cache__DOT__tag_2_14),32);
        tracep->fullIData(oldp+829,(vlSelf->top__DOT__i_cache__DOT__tag_2_15),32);
        tracep->fullIData(oldp+830,(vlSelf->top__DOT__i_cache__DOT__tag_3_0),32);
        tracep->fullIData(oldp+831,(vlSelf->top__DOT__i_cache__DOT__tag_3_1),32);
        tracep->fullIData(oldp+832,(vlSelf->top__DOT__i_cache__DOT__tag_3_2),32);
        tracep->fullIData(oldp+833,(vlSelf->top__DOT__i_cache__DOT__tag_3_3),32);
        tracep->fullIData(oldp+834,(vlSelf->top__DOT__i_cache__DOT__tag_3_4),32);
        tracep->fullIData(oldp+835,(vlSelf->top__DOT__i_cache__DOT__tag_3_5),32);
        tracep->fullIData(oldp+836,(vlSelf->top__DOT__i_cache__DOT__tag_3_6),32);
        tracep->fullIData(oldp+837,(vlSelf->top__DOT__i_cache__DOT__tag_3_7),32);
        tracep->fullIData(oldp+838,(vlSelf->top__DOT__i_cache__DOT__tag_3_8),32);
        tracep->fullIData(oldp+839,(vlSelf->top__DOT__i_cache__DOT__tag_3_9),32);
        tracep->fullIData(oldp+840,(vlSelf->top__DOT__i_cache__DOT__tag_3_10),32);
        tracep->fullIData(oldp+841,(vlSelf->top__DOT__i_cache__DOT__tag_3_11),32);
        tracep->fullIData(oldp+842,(vlSelf->top__DOT__i_cache__DOT__tag_3_12),32);
        tracep->fullIData(oldp+843,(vlSelf->top__DOT__i_cache__DOT__tag_3_13),32);
        tracep->fullIData(oldp+844,(vlSelf->top__DOT__i_cache__DOT__tag_3_14),32);
        tracep->fullIData(oldp+845,(vlSelf->top__DOT__i_cache__DOT__tag_3_15),32);
        tracep->fullBit(oldp+846,(vlSelf->top__DOT__i_cache__DOT__valid_0_0));
        tracep->fullBit(oldp+847,(vlSelf->top__DOT__i_cache__DOT__valid_0_1));
        tracep->fullBit(oldp+848,(vlSelf->top__DOT__i_cache__DOT__valid_0_2));
        tracep->fullBit(oldp+849,(vlSelf->top__DOT__i_cache__DOT__valid_0_3));
        tracep->fullBit(oldp+850,(vlSelf->top__DOT__i_cache__DOT__valid_0_4));
        tracep->fullBit(oldp+851,(vlSelf->top__DOT__i_cache__DOT__valid_0_5));
        tracep->fullBit(oldp+852,(vlSelf->top__DOT__i_cache__DOT__valid_0_6));
        tracep->fullBit(oldp+853,(vlSelf->top__DOT__i_cache__DOT__valid_0_7));
        tracep->fullBit(oldp+854,(vlSelf->top__DOT__i_cache__DOT__valid_0_8));
        tracep->fullBit(oldp+855,(vlSelf->top__DOT__i_cache__DOT__valid_0_9));
        tracep->fullBit(oldp+856,(vlSelf->top__DOT__i_cache__DOT__valid_0_10));
        tracep->fullBit(oldp+857,(vlSelf->top__DOT__i_cache__DOT__valid_0_11));
        tracep->fullBit(oldp+858,(vlSelf->top__DOT__i_cache__DOT__valid_0_12));
        tracep->fullBit(oldp+859,(vlSelf->top__DOT__i_cache__DOT__valid_0_13));
        tracep->fullBit(oldp+860,(vlSelf->top__DOT__i_cache__DOT__valid_0_14));
        tracep->fullBit(oldp+861,(vlSelf->top__DOT__i_cache__DOT__valid_0_15));
        tracep->fullBit(oldp+862,(vlSelf->top__DOT__i_cache__DOT__valid_1_0));
        tracep->fullBit(oldp+863,(vlSelf->top__DOT__i_cache__DOT__valid_1_1));
        tracep->fullBit(oldp+864,(vlSelf->top__DOT__i_cache__DOT__valid_1_2));
        tracep->fullBit(oldp+865,(vlSelf->top__DOT__i_cache__DOT__valid_1_3));
        tracep->fullBit(oldp+866,(vlSelf->top__DOT__i_cache__DOT__valid_1_4));
        tracep->fullBit(oldp+867,(vlSelf->top__DOT__i_cache__DOT__valid_1_5));
        tracep->fullBit(oldp+868,(vlSelf->top__DOT__i_cache__DOT__valid_1_6));
        tracep->fullBit(oldp+869,(vlSelf->top__DOT__i_cache__DOT__valid_1_7));
        tracep->fullBit(oldp+870,(vlSelf->top__DOT__i_cache__DOT__valid_1_8));
        tracep->fullBit(oldp+871,(vlSelf->top__DOT__i_cache__DOT__valid_1_9));
        tracep->fullBit(oldp+872,(vlSelf->top__DOT__i_cache__DOT__valid_1_10));
        tracep->fullBit(oldp+873,(vlSelf->top__DOT__i_cache__DOT__valid_1_11));
        tracep->fullBit(oldp+874,(vlSelf->top__DOT__i_cache__DOT__valid_1_12));
        tracep->fullBit(oldp+875,(vlSelf->top__DOT__i_cache__DOT__valid_1_13));
        tracep->fullBit(oldp+876,(vlSelf->top__DOT__i_cache__DOT__valid_1_14));
        tracep->fullBit(oldp+877,(vlSelf->top__DOT__i_cache__DOT__valid_1_15));
        tracep->fullBit(oldp+878,(vlSelf->top__DOT__i_cache__DOT__valid_2_0));
        tracep->fullBit(oldp+879,(vlSelf->top__DOT__i_cache__DOT__valid_2_1));
        tracep->fullBit(oldp+880,(vlSelf->top__DOT__i_cache__DOT__valid_2_2));
        tracep->fullBit(oldp+881,(vlSelf->top__DOT__i_cache__DOT__valid_2_3));
        tracep->fullBit(oldp+882,(vlSelf->top__DOT__i_cache__DOT__valid_2_4));
        tracep->fullBit(oldp+883,(vlSelf->top__DOT__i_cache__DOT__valid_2_5));
        tracep->fullBit(oldp+884,(vlSelf->top__DOT__i_cache__DOT__valid_2_6));
        tracep->fullBit(oldp+885,(vlSelf->top__DOT__i_cache__DOT__valid_2_7));
        tracep->fullBit(oldp+886,(vlSelf->top__DOT__i_cache__DOT__valid_2_8));
        tracep->fullBit(oldp+887,(vlSelf->top__DOT__i_cache__DOT__valid_2_9));
        tracep->fullBit(oldp+888,(vlSelf->top__DOT__i_cache__DOT__valid_2_10));
        tracep->fullBit(oldp+889,(vlSelf->top__DOT__i_cache__DOT__valid_2_11));
        tracep->fullBit(oldp+890,(vlSelf->top__DOT__i_cache__DOT__valid_2_12));
        tracep->fullBit(oldp+891,(vlSelf->top__DOT__i_cache__DOT__valid_2_13));
        tracep->fullBit(oldp+892,(vlSelf->top__DOT__i_cache__DOT__valid_2_14));
        tracep->fullBit(oldp+893,(vlSelf->top__DOT__i_cache__DOT__valid_2_15));
        tracep->fullBit(oldp+894,(vlSelf->top__DOT__i_cache__DOT__valid_3_0));
        tracep->fullBit(oldp+895,(vlSelf->top__DOT__i_cache__DOT__valid_3_1));
        tracep->fullBit(oldp+896,(vlSelf->top__DOT__i_cache__DOT__valid_3_2));
        tracep->fullBit(oldp+897,(vlSelf->top__DOT__i_cache__DOT__valid_3_3));
        tracep->fullBit(oldp+898,(vlSelf->top__DOT__i_cache__DOT__valid_3_4));
        tracep->fullBit(oldp+899,(vlSelf->top__DOT__i_cache__DOT__valid_3_5));
        tracep->fullBit(oldp+900,(vlSelf->top__DOT__i_cache__DOT__valid_3_6));
        tracep->fullBit(oldp+901,(vlSelf->top__DOT__i_cache__DOT__valid_3_7));
        tracep->fullBit(oldp+902,(vlSelf->top__DOT__i_cache__DOT__valid_3_8));
        tracep->fullBit(oldp+903,(vlSelf->top__DOT__i_cache__DOT__valid_3_9));
        tracep->fullBit(oldp+904,(vlSelf->top__DOT__i_cache__DOT__valid_3_10));
        tracep->fullBit(oldp+905,(vlSelf->top__DOT__i_cache__DOT__valid_3_11));
        tracep->fullBit(oldp+906,(vlSelf->top__DOT__i_cache__DOT__valid_3_12));
        tracep->fullBit(oldp+907,(vlSelf->top__DOT__i_cache__DOT__valid_3_13));
        tracep->fullBit(oldp+908,(vlSelf->top__DOT__i_cache__DOT__valid_3_14));
        tracep->fullBit(oldp+909,(vlSelf->top__DOT__i_cache__DOT__valid_3_15));
        tracep->fullIData(oldp+910,(vlSelf->top__DOT__i_cache__DOT__addr),32);
        tracep->fullQData(oldp+911,(vlSelf->top__DOT__i_cache__DOT__receive_data_0),64);
        tracep->fullQData(oldp+913,(vlSelf->top__DOT__i_cache__DOT__receive_data_1),64);
        tracep->fullCData(oldp+915,(vlSelf->top__DOT__i_cache__DOT__receive_num),3);
        tracep->fullCData(oldp+916,(vlSelf->top__DOT__i_cache__DOT__quene_0),8);
        tracep->fullCData(oldp+917,(vlSelf->top__DOT__i_cache__DOT__quene_1),8);
        tracep->fullCData(oldp+918,(vlSelf->top__DOT__i_cache__DOT__quene_2),8);
        tracep->fullCData(oldp+919,(vlSelf->top__DOT__i_cache__DOT__quene_3),8);
        tracep->fullCData(oldp+920,(vlSelf->top__DOT__i_cache__DOT__quene_4),8);
        tracep->fullCData(oldp+921,(vlSelf->top__DOT__i_cache__DOT__quene_5),8);
        tracep->fullCData(oldp+922,(vlSelf->top__DOT__i_cache__DOT__quene_6),8);
        tracep->fullCData(oldp+923,(vlSelf->top__DOT__i_cache__DOT__quene_7),8);
        tracep->fullCData(oldp+924,(vlSelf->top__DOT__i_cache__DOT__quene_8),8);
        tracep->fullCData(oldp+925,(vlSelf->top__DOT__i_cache__DOT__quene_9),8);
        tracep->fullCData(oldp+926,(vlSelf->top__DOT__i_cache__DOT__quene_10),8);
        tracep->fullCData(oldp+927,(vlSelf->top__DOT__i_cache__DOT__quene_11),8);
        tracep->fullCData(oldp+928,(vlSelf->top__DOT__i_cache__DOT__quene_12),8);
        tracep->fullCData(oldp+929,(vlSelf->top__DOT__i_cache__DOT__quene_13),8);
        tracep->fullCData(oldp+930,(vlSelf->top__DOT__i_cache__DOT__quene_14),8);
        tracep->fullCData(oldp+931,(vlSelf->top__DOT__i_cache__DOT__quene_15),8);
        tracep->fullCData(oldp+932,((0xfU & vlSelf->top__DOT__i_cache__DOT__addr)),4);
        tracep->fullCData(oldp+933,((0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                             >> 4U))),4);
        tracep->fullIData(oldp+934,((vlSelf->top__DOT__i_cache__DOT__addr 
                                     >> 8U)),24);
        tracep->fullCData(oldp+935,((0x78U & (vlSelf->top__DOT__i_cache__DOT__addr 
                                              << 3U))),7);
        tracep->fullBit(oldp+936,(vlSelf->top__DOT__i_cache__DOT__way0_hit));
        tracep->fullBit(oldp+937,(vlSelf->top__DOT__i_cache__DOT__way1_hit));
        tracep->fullBit(oldp+938,(vlSelf->top__DOT__i_cache__DOT__way2_hit));
        tracep->fullBit(oldp+939,(vlSelf->top__DOT__i_cache__DOT__way3_hit));
        tracep->fullCData(oldp+940,(vlSelf->top__DOT__i_cache__DOT__unuse_way),3);
        tracep->fullCData(oldp+941,(vlSelf->top__DOT__i_cache__DOT__state),3);
        tracep->fullWData(oldp+942,(vlSelf->top__DOT__d_cache__DOT__ram_0_0),128);
        tracep->fullWData(oldp+946,(vlSelf->top__DOT__d_cache__DOT__ram_0_1),128);
        tracep->fullWData(oldp+950,(vlSelf->top__DOT__d_cache__DOT__ram_0_2),128);
        tracep->fullWData(oldp+954,(vlSelf->top__DOT__d_cache__DOT__ram_0_3),128);
        tracep->fullWData(oldp+958,(vlSelf->top__DOT__d_cache__DOT__ram_0_4),128);
        tracep->fullWData(oldp+962,(vlSelf->top__DOT__d_cache__DOT__ram_0_5),128);
        tracep->fullWData(oldp+966,(vlSelf->top__DOT__d_cache__DOT__ram_0_6),128);
        tracep->fullWData(oldp+970,(vlSelf->top__DOT__d_cache__DOT__ram_0_7),128);
        tracep->fullWData(oldp+974,(vlSelf->top__DOT__d_cache__DOT__ram_0_8),128);
        tracep->fullWData(oldp+978,(vlSelf->top__DOT__d_cache__DOT__ram_0_9),128);
        tracep->fullWData(oldp+982,(vlSelf->top__DOT__d_cache__DOT__ram_0_10),128);
        tracep->fullWData(oldp+986,(vlSelf->top__DOT__d_cache__DOT__ram_0_11),128);
        tracep->fullWData(oldp+990,(vlSelf->top__DOT__d_cache__DOT__ram_0_12),128);
        tracep->fullWData(oldp+994,(vlSelf->top__DOT__d_cache__DOT__ram_0_13),128);
        tracep->fullWData(oldp+998,(vlSelf->top__DOT__d_cache__DOT__ram_0_14),128);
        tracep->fullWData(oldp+1002,(vlSelf->top__DOT__d_cache__DOT__ram_0_15),128);
        tracep->fullWData(oldp+1006,(vlSelf->top__DOT__d_cache__DOT__ram_1_0),128);
        tracep->fullWData(oldp+1010,(vlSelf->top__DOT__d_cache__DOT__ram_1_1),128);
        tracep->fullWData(oldp+1014,(vlSelf->top__DOT__d_cache__DOT__ram_1_2),128);
        tracep->fullWData(oldp+1018,(vlSelf->top__DOT__d_cache__DOT__ram_1_3),128);
        tracep->fullWData(oldp+1022,(vlSelf->top__DOT__d_cache__DOT__ram_1_4),128);
        tracep->fullWData(oldp+1026,(vlSelf->top__DOT__d_cache__DOT__ram_1_5),128);
        tracep->fullWData(oldp+1030,(vlSelf->top__DOT__d_cache__DOT__ram_1_6),128);
        tracep->fullWData(oldp+1034,(vlSelf->top__DOT__d_cache__DOT__ram_1_7),128);
        tracep->fullWData(oldp+1038,(vlSelf->top__DOT__d_cache__DOT__ram_1_8),128);
        tracep->fullWData(oldp+1042,(vlSelf->top__DOT__d_cache__DOT__ram_1_9),128);
        tracep->fullWData(oldp+1046,(vlSelf->top__DOT__d_cache__DOT__ram_1_10),128);
        tracep->fullWData(oldp+1050,(vlSelf->top__DOT__d_cache__DOT__ram_1_11),128);
        tracep->fullWData(oldp+1054,(vlSelf->top__DOT__d_cache__DOT__ram_1_12),128);
        tracep->fullWData(oldp+1058,(vlSelf->top__DOT__d_cache__DOT__ram_1_13),128);
        tracep->fullWData(oldp+1062,(vlSelf->top__DOT__d_cache__DOT__ram_1_14),128);
        tracep->fullWData(oldp+1066,(vlSelf->top__DOT__d_cache__DOT__ram_1_15),128);
        tracep->fullWData(oldp+1070,(vlSelf->top__DOT__d_cache__DOT__ram_2_0),128);
        tracep->fullWData(oldp+1074,(vlSelf->top__DOT__d_cache__DOT__ram_2_1),128);
        tracep->fullWData(oldp+1078,(vlSelf->top__DOT__d_cache__DOT__ram_2_2),128);
        tracep->fullWData(oldp+1082,(vlSelf->top__DOT__d_cache__DOT__ram_2_3),128);
        tracep->fullWData(oldp+1086,(vlSelf->top__DOT__d_cache__DOT__ram_2_4),128);
        tracep->fullWData(oldp+1090,(vlSelf->top__DOT__d_cache__DOT__ram_2_5),128);
        tracep->fullWData(oldp+1094,(vlSelf->top__DOT__d_cache__DOT__ram_2_6),128);
        tracep->fullWData(oldp+1098,(vlSelf->top__DOT__d_cache__DOT__ram_2_7),128);
        tracep->fullWData(oldp+1102,(vlSelf->top__DOT__d_cache__DOT__ram_2_8),128);
        tracep->fullWData(oldp+1106,(vlSelf->top__DOT__d_cache__DOT__ram_2_9),128);
        tracep->fullWData(oldp+1110,(vlSelf->top__DOT__d_cache__DOT__ram_2_10),128);
        tracep->fullWData(oldp+1114,(vlSelf->top__DOT__d_cache__DOT__ram_2_11),128);
        tracep->fullWData(oldp+1118,(vlSelf->top__DOT__d_cache__DOT__ram_2_12),128);
        tracep->fullWData(oldp+1122,(vlSelf->top__DOT__d_cache__DOT__ram_2_13),128);
        tracep->fullWData(oldp+1126,(vlSelf->top__DOT__d_cache__DOT__ram_2_14),128);
        tracep->fullWData(oldp+1130,(vlSelf->top__DOT__d_cache__DOT__ram_2_15),128);
        tracep->fullWData(oldp+1134,(vlSelf->top__DOT__d_cache__DOT__ram_3_0),128);
        tracep->fullWData(oldp+1138,(vlSelf->top__DOT__d_cache__DOT__ram_3_1),128);
        tracep->fullWData(oldp+1142,(vlSelf->top__DOT__d_cache__DOT__ram_3_2),128);
        tracep->fullWData(oldp+1146,(vlSelf->top__DOT__d_cache__DOT__ram_3_3),128);
        tracep->fullWData(oldp+1150,(vlSelf->top__DOT__d_cache__DOT__ram_3_4),128);
        tracep->fullWData(oldp+1154,(vlSelf->top__DOT__d_cache__DOT__ram_3_5),128);
        tracep->fullWData(oldp+1158,(vlSelf->top__DOT__d_cache__DOT__ram_3_6),128);
        tracep->fullWData(oldp+1162,(vlSelf->top__DOT__d_cache__DOT__ram_3_7),128);
        tracep->fullWData(oldp+1166,(vlSelf->top__DOT__d_cache__DOT__ram_3_8),128);
        tracep->fullWData(oldp+1170,(vlSelf->top__DOT__d_cache__DOT__ram_3_9),128);
        tracep->fullWData(oldp+1174,(vlSelf->top__DOT__d_cache__DOT__ram_3_10),128);
        tracep->fullWData(oldp+1178,(vlSelf->top__DOT__d_cache__DOT__ram_3_11),128);
        tracep->fullWData(oldp+1182,(vlSelf->top__DOT__d_cache__DOT__ram_3_12),128);
        tracep->fullWData(oldp+1186,(vlSelf->top__DOT__d_cache__DOT__ram_3_13),128);
        tracep->fullWData(oldp+1190,(vlSelf->top__DOT__d_cache__DOT__ram_3_14),128);
        tracep->fullWData(oldp+1194,(vlSelf->top__DOT__d_cache__DOT__ram_3_15),128);
        tracep->fullIData(oldp+1198,(vlSelf->top__DOT__d_cache__DOT__tag_0_0),32);
        tracep->fullIData(oldp+1199,(vlSelf->top__DOT__d_cache__DOT__tag_0_1),32);
        tracep->fullIData(oldp+1200,(vlSelf->top__DOT__d_cache__DOT__tag_0_2),32);
        tracep->fullIData(oldp+1201,(vlSelf->top__DOT__d_cache__DOT__tag_0_3),32);
        tracep->fullIData(oldp+1202,(vlSelf->top__DOT__d_cache__DOT__tag_0_4),32);
        tracep->fullIData(oldp+1203,(vlSelf->top__DOT__d_cache__DOT__tag_0_5),32);
        tracep->fullIData(oldp+1204,(vlSelf->top__DOT__d_cache__DOT__tag_0_6),32);
        tracep->fullIData(oldp+1205,(vlSelf->top__DOT__d_cache__DOT__tag_0_7),32);
        tracep->fullIData(oldp+1206,(vlSelf->top__DOT__d_cache__DOT__tag_0_8),32);
        tracep->fullIData(oldp+1207,(vlSelf->top__DOT__d_cache__DOT__tag_0_9),32);
        tracep->fullIData(oldp+1208,(vlSelf->top__DOT__d_cache__DOT__tag_0_10),32);
        tracep->fullIData(oldp+1209,(vlSelf->top__DOT__d_cache__DOT__tag_0_11),32);
        tracep->fullIData(oldp+1210,(vlSelf->top__DOT__d_cache__DOT__tag_0_12),32);
        tracep->fullIData(oldp+1211,(vlSelf->top__DOT__d_cache__DOT__tag_0_13),32);
        tracep->fullIData(oldp+1212,(vlSelf->top__DOT__d_cache__DOT__tag_0_14),32);
        tracep->fullIData(oldp+1213,(vlSelf->top__DOT__d_cache__DOT__tag_0_15),32);
        tracep->fullIData(oldp+1214,(vlSelf->top__DOT__d_cache__DOT__tag_1_0),32);
        tracep->fullIData(oldp+1215,(vlSelf->top__DOT__d_cache__DOT__tag_1_1),32);
        tracep->fullIData(oldp+1216,(vlSelf->top__DOT__d_cache__DOT__tag_1_2),32);
        tracep->fullIData(oldp+1217,(vlSelf->top__DOT__d_cache__DOT__tag_1_3),32);
        tracep->fullIData(oldp+1218,(vlSelf->top__DOT__d_cache__DOT__tag_1_4),32);
        tracep->fullIData(oldp+1219,(vlSelf->top__DOT__d_cache__DOT__tag_1_5),32);
        tracep->fullIData(oldp+1220,(vlSelf->top__DOT__d_cache__DOT__tag_1_6),32);
        tracep->fullIData(oldp+1221,(vlSelf->top__DOT__d_cache__DOT__tag_1_7),32);
        tracep->fullIData(oldp+1222,(vlSelf->top__DOT__d_cache__DOT__tag_1_8),32);
        tracep->fullIData(oldp+1223,(vlSelf->top__DOT__d_cache__DOT__tag_1_9),32);
        tracep->fullIData(oldp+1224,(vlSelf->top__DOT__d_cache__DOT__tag_1_10),32);
        tracep->fullIData(oldp+1225,(vlSelf->top__DOT__d_cache__DOT__tag_1_11),32);
        tracep->fullIData(oldp+1226,(vlSelf->top__DOT__d_cache__DOT__tag_1_12),32);
        tracep->fullIData(oldp+1227,(vlSelf->top__DOT__d_cache__DOT__tag_1_13),32);
        tracep->fullIData(oldp+1228,(vlSelf->top__DOT__d_cache__DOT__tag_1_14),32);
        tracep->fullIData(oldp+1229,(vlSelf->top__DOT__d_cache__DOT__tag_1_15),32);
        tracep->fullIData(oldp+1230,(vlSelf->top__DOT__d_cache__DOT__tag_2_0),32);
        tracep->fullIData(oldp+1231,(vlSelf->top__DOT__d_cache__DOT__tag_2_1),32);
        tracep->fullIData(oldp+1232,(vlSelf->top__DOT__d_cache__DOT__tag_2_2),32);
        tracep->fullIData(oldp+1233,(vlSelf->top__DOT__d_cache__DOT__tag_2_3),32);
        tracep->fullIData(oldp+1234,(vlSelf->top__DOT__d_cache__DOT__tag_2_4),32);
        tracep->fullIData(oldp+1235,(vlSelf->top__DOT__d_cache__DOT__tag_2_5),32);
        tracep->fullIData(oldp+1236,(vlSelf->top__DOT__d_cache__DOT__tag_2_6),32);
        tracep->fullIData(oldp+1237,(vlSelf->top__DOT__d_cache__DOT__tag_2_7),32);
        tracep->fullIData(oldp+1238,(vlSelf->top__DOT__d_cache__DOT__tag_2_8),32);
        tracep->fullIData(oldp+1239,(vlSelf->top__DOT__d_cache__DOT__tag_2_9),32);
        tracep->fullIData(oldp+1240,(vlSelf->top__DOT__d_cache__DOT__tag_2_10),32);
        tracep->fullIData(oldp+1241,(vlSelf->top__DOT__d_cache__DOT__tag_2_11),32);
        tracep->fullIData(oldp+1242,(vlSelf->top__DOT__d_cache__DOT__tag_2_12),32);
        tracep->fullIData(oldp+1243,(vlSelf->top__DOT__d_cache__DOT__tag_2_13),32);
        tracep->fullIData(oldp+1244,(vlSelf->top__DOT__d_cache__DOT__tag_2_14),32);
        tracep->fullIData(oldp+1245,(vlSelf->top__DOT__d_cache__DOT__tag_2_15),32);
        tracep->fullIData(oldp+1246,(vlSelf->top__DOT__d_cache__DOT__tag_3_0),32);
        tracep->fullIData(oldp+1247,(vlSelf->top__DOT__d_cache__DOT__tag_3_1),32);
        tracep->fullIData(oldp+1248,(vlSelf->top__DOT__d_cache__DOT__tag_3_2),32);
        tracep->fullIData(oldp+1249,(vlSelf->top__DOT__d_cache__DOT__tag_3_3),32);
        tracep->fullIData(oldp+1250,(vlSelf->top__DOT__d_cache__DOT__tag_3_4),32);
        tracep->fullIData(oldp+1251,(vlSelf->top__DOT__d_cache__DOT__tag_3_5),32);
        tracep->fullIData(oldp+1252,(vlSelf->top__DOT__d_cache__DOT__tag_3_6),32);
        tracep->fullIData(oldp+1253,(vlSelf->top__DOT__d_cache__DOT__tag_3_7),32);
        tracep->fullIData(oldp+1254,(vlSelf->top__DOT__d_cache__DOT__tag_3_8),32);
        tracep->fullIData(oldp+1255,(vlSelf->top__DOT__d_cache__DOT__tag_3_9),32);
        tracep->fullIData(oldp+1256,(vlSelf->top__DOT__d_cache__DOT__tag_3_10),32);
        tracep->fullIData(oldp+1257,(vlSelf->top__DOT__d_cache__DOT__tag_3_11),32);
        tracep->fullIData(oldp+1258,(vlSelf->top__DOT__d_cache__DOT__tag_3_12),32);
        tracep->fullIData(oldp+1259,(vlSelf->top__DOT__d_cache__DOT__tag_3_13),32);
        tracep->fullIData(oldp+1260,(vlSelf->top__DOT__d_cache__DOT__tag_3_14),32);
        tracep->fullIData(oldp+1261,(vlSelf->top__DOT__d_cache__DOT__tag_3_15),32);
        tracep->fullBit(oldp+1262,(vlSelf->top__DOT__d_cache__DOT__valid_0_0));
        tracep->fullBit(oldp+1263,(vlSelf->top__DOT__d_cache__DOT__valid_0_1));
        tracep->fullBit(oldp+1264,(vlSelf->top__DOT__d_cache__DOT__valid_0_2));
        tracep->fullBit(oldp+1265,(vlSelf->top__DOT__d_cache__DOT__valid_0_3));
        tracep->fullBit(oldp+1266,(vlSelf->top__DOT__d_cache__DOT__valid_0_4));
        tracep->fullBit(oldp+1267,(vlSelf->top__DOT__d_cache__DOT__valid_0_5));
        tracep->fullBit(oldp+1268,(vlSelf->top__DOT__d_cache__DOT__valid_0_6));
        tracep->fullBit(oldp+1269,(vlSelf->top__DOT__d_cache__DOT__valid_0_7));
        tracep->fullBit(oldp+1270,(vlSelf->top__DOT__d_cache__DOT__valid_0_8));
        tracep->fullBit(oldp+1271,(vlSelf->top__DOT__d_cache__DOT__valid_0_9));
        tracep->fullBit(oldp+1272,(vlSelf->top__DOT__d_cache__DOT__valid_0_10));
        tracep->fullBit(oldp+1273,(vlSelf->top__DOT__d_cache__DOT__valid_0_11));
        tracep->fullBit(oldp+1274,(vlSelf->top__DOT__d_cache__DOT__valid_0_12));
        tracep->fullBit(oldp+1275,(vlSelf->top__DOT__d_cache__DOT__valid_0_13));
        tracep->fullBit(oldp+1276,(vlSelf->top__DOT__d_cache__DOT__valid_0_14));
        tracep->fullBit(oldp+1277,(vlSelf->top__DOT__d_cache__DOT__valid_0_15));
        tracep->fullBit(oldp+1278,(vlSelf->top__DOT__d_cache__DOT__valid_1_0));
        tracep->fullBit(oldp+1279,(vlSelf->top__DOT__d_cache__DOT__valid_1_1));
        tracep->fullBit(oldp+1280,(vlSelf->top__DOT__d_cache__DOT__valid_1_2));
        tracep->fullBit(oldp+1281,(vlSelf->top__DOT__d_cache__DOT__valid_1_3));
        tracep->fullBit(oldp+1282,(vlSelf->top__DOT__d_cache__DOT__valid_1_4));
        tracep->fullBit(oldp+1283,(vlSelf->top__DOT__d_cache__DOT__valid_1_5));
        tracep->fullBit(oldp+1284,(vlSelf->top__DOT__d_cache__DOT__valid_1_6));
        tracep->fullBit(oldp+1285,(vlSelf->top__DOT__d_cache__DOT__valid_1_7));
        tracep->fullBit(oldp+1286,(vlSelf->top__DOT__d_cache__DOT__valid_1_8));
        tracep->fullBit(oldp+1287,(vlSelf->top__DOT__d_cache__DOT__valid_1_9));
        tracep->fullBit(oldp+1288,(vlSelf->top__DOT__d_cache__DOT__valid_1_10));
        tracep->fullBit(oldp+1289,(vlSelf->top__DOT__d_cache__DOT__valid_1_11));
        tracep->fullBit(oldp+1290,(vlSelf->top__DOT__d_cache__DOT__valid_1_12));
        tracep->fullBit(oldp+1291,(vlSelf->top__DOT__d_cache__DOT__valid_1_13));
        tracep->fullBit(oldp+1292,(vlSelf->top__DOT__d_cache__DOT__valid_1_14));
        tracep->fullBit(oldp+1293,(vlSelf->top__DOT__d_cache__DOT__valid_1_15));
        tracep->fullBit(oldp+1294,(vlSelf->top__DOT__d_cache__DOT__valid_2_0));
        tracep->fullBit(oldp+1295,(vlSelf->top__DOT__d_cache__DOT__valid_2_1));
        tracep->fullBit(oldp+1296,(vlSelf->top__DOT__d_cache__DOT__valid_2_2));
        tracep->fullBit(oldp+1297,(vlSelf->top__DOT__d_cache__DOT__valid_2_3));
        tracep->fullBit(oldp+1298,(vlSelf->top__DOT__d_cache__DOT__valid_2_4));
        tracep->fullBit(oldp+1299,(vlSelf->top__DOT__d_cache__DOT__valid_2_5));
        tracep->fullBit(oldp+1300,(vlSelf->top__DOT__d_cache__DOT__valid_2_6));
        tracep->fullBit(oldp+1301,(vlSelf->top__DOT__d_cache__DOT__valid_2_7));
        tracep->fullBit(oldp+1302,(vlSelf->top__DOT__d_cache__DOT__valid_2_8));
        tracep->fullBit(oldp+1303,(vlSelf->top__DOT__d_cache__DOT__valid_2_9));
        tracep->fullBit(oldp+1304,(vlSelf->top__DOT__d_cache__DOT__valid_2_10));
        tracep->fullBit(oldp+1305,(vlSelf->top__DOT__d_cache__DOT__valid_2_11));
        tracep->fullBit(oldp+1306,(vlSelf->top__DOT__d_cache__DOT__valid_2_12));
        tracep->fullBit(oldp+1307,(vlSelf->top__DOT__d_cache__DOT__valid_2_13));
        tracep->fullBit(oldp+1308,(vlSelf->top__DOT__d_cache__DOT__valid_2_14));
        tracep->fullBit(oldp+1309,(vlSelf->top__DOT__d_cache__DOT__valid_2_15));
        tracep->fullBit(oldp+1310,(vlSelf->top__DOT__d_cache__DOT__valid_3_0));
        tracep->fullBit(oldp+1311,(vlSelf->top__DOT__d_cache__DOT__valid_3_1));
        tracep->fullBit(oldp+1312,(vlSelf->top__DOT__d_cache__DOT__valid_3_2));
        tracep->fullBit(oldp+1313,(vlSelf->top__DOT__d_cache__DOT__valid_3_3));
        tracep->fullBit(oldp+1314,(vlSelf->top__DOT__d_cache__DOT__valid_3_4));
        tracep->fullBit(oldp+1315,(vlSelf->top__DOT__d_cache__DOT__valid_3_5));
        tracep->fullBit(oldp+1316,(vlSelf->top__DOT__d_cache__DOT__valid_3_6));
        tracep->fullBit(oldp+1317,(vlSelf->top__DOT__d_cache__DOT__valid_3_7));
        tracep->fullBit(oldp+1318,(vlSelf->top__DOT__d_cache__DOT__valid_3_8));
        tracep->fullBit(oldp+1319,(vlSelf->top__DOT__d_cache__DOT__valid_3_9));
        tracep->fullBit(oldp+1320,(vlSelf->top__DOT__d_cache__DOT__valid_3_10));
        tracep->fullBit(oldp+1321,(vlSelf->top__DOT__d_cache__DOT__valid_3_11));
        tracep->fullBit(oldp+1322,(vlSelf->top__DOT__d_cache__DOT__valid_3_12));
        tracep->fullBit(oldp+1323,(vlSelf->top__DOT__d_cache__DOT__valid_3_13));
        tracep->fullBit(oldp+1324,(vlSelf->top__DOT__d_cache__DOT__valid_3_14));
        tracep->fullBit(oldp+1325,(vlSelf->top__DOT__d_cache__DOT__valid_3_15));
        tracep->fullBit(oldp+1326,(vlSelf->top__DOT__d_cache__DOT__dirty_0_0));
        tracep->fullBit(oldp+1327,(vlSelf->top__DOT__d_cache__DOT__dirty_0_1));
        tracep->fullBit(oldp+1328,(vlSelf->top__DOT__d_cache__DOT__dirty_0_2));
        tracep->fullBit(oldp+1329,(vlSelf->top__DOT__d_cache__DOT__dirty_0_3));
        tracep->fullBit(oldp+1330,(vlSelf->top__DOT__d_cache__DOT__dirty_0_4));
        tracep->fullBit(oldp+1331,(vlSelf->top__DOT__d_cache__DOT__dirty_0_5));
        tracep->fullBit(oldp+1332,(vlSelf->top__DOT__d_cache__DOT__dirty_0_6));
        tracep->fullBit(oldp+1333,(vlSelf->top__DOT__d_cache__DOT__dirty_0_7));
        tracep->fullBit(oldp+1334,(vlSelf->top__DOT__d_cache__DOT__dirty_0_8));
        tracep->fullBit(oldp+1335,(vlSelf->top__DOT__d_cache__DOT__dirty_0_9));
        tracep->fullBit(oldp+1336,(vlSelf->top__DOT__d_cache__DOT__dirty_0_10));
        tracep->fullBit(oldp+1337,(vlSelf->top__DOT__d_cache__DOT__dirty_0_11));
        tracep->fullBit(oldp+1338,(vlSelf->top__DOT__d_cache__DOT__dirty_0_12));
        tracep->fullBit(oldp+1339,(vlSelf->top__DOT__d_cache__DOT__dirty_0_13));
        tracep->fullBit(oldp+1340,(vlSelf->top__DOT__d_cache__DOT__dirty_0_14));
        tracep->fullBit(oldp+1341,(vlSelf->top__DOT__d_cache__DOT__dirty_0_15));
        tracep->fullBit(oldp+1342,(vlSelf->top__DOT__d_cache__DOT__dirty_3_0));
        tracep->fullBit(oldp+1343,(vlSelf->top__DOT__d_cache__DOT__dirty_3_1));
        tracep->fullBit(oldp+1344,(vlSelf->top__DOT__d_cache__DOT__dirty_3_2));
        tracep->fullBit(oldp+1345,(vlSelf->top__DOT__d_cache__DOT__dirty_3_3));
        tracep->fullBit(oldp+1346,(vlSelf->top__DOT__d_cache__DOT__dirty_3_4));
        tracep->fullBit(oldp+1347,(vlSelf->top__DOT__d_cache__DOT__dirty_3_5));
        tracep->fullBit(oldp+1348,(vlSelf->top__DOT__d_cache__DOT__dirty_3_6));
        tracep->fullBit(oldp+1349,(vlSelf->top__DOT__d_cache__DOT__dirty_3_7));
        tracep->fullBit(oldp+1350,(vlSelf->top__DOT__d_cache__DOT__dirty_3_8));
        tracep->fullBit(oldp+1351,(vlSelf->top__DOT__d_cache__DOT__dirty_3_9));
        tracep->fullBit(oldp+1352,(vlSelf->top__DOT__d_cache__DOT__dirty_3_10));
        tracep->fullBit(oldp+1353,(vlSelf->top__DOT__d_cache__DOT__dirty_3_11));
        tracep->fullBit(oldp+1354,(vlSelf->top__DOT__d_cache__DOT__dirty_3_12));
        tracep->fullBit(oldp+1355,(vlSelf->top__DOT__d_cache__DOT__dirty_3_13));
        tracep->fullBit(oldp+1356,(vlSelf->top__DOT__d_cache__DOT__dirty_3_14));
        tracep->fullBit(oldp+1357,(vlSelf->top__DOT__d_cache__DOT__dirty_3_15));
        tracep->fullWData(oldp+1358,(vlSelf->top__DOT__d_cache__DOT__write_back_data),128);
        tracep->fullIData(oldp+1362,(vlSelf->top__DOT__d_cache__DOT__write_back_addr),32);
        tracep->fullQData(oldp+1363,(vlSelf->top__DOT__d_cache__DOT__receive_data_0),64);
        tracep->fullQData(oldp+1365,(vlSelf->top__DOT__d_cache__DOT__receive_data_1),64);
        tracep->fullCData(oldp+1367,(vlSelf->top__DOT__d_cache__DOT__receive_num),3);
        tracep->fullCData(oldp+1368,(vlSelf->top__DOT__d_cache__DOT__quene_0),8);
        tracep->fullCData(oldp+1369,(vlSelf->top__DOT__d_cache__DOT__quene_1),8);
        tracep->fullCData(oldp+1370,(vlSelf->top__DOT__d_cache__DOT__quene_2),8);
        tracep->fullCData(oldp+1371,(vlSelf->top__DOT__d_cache__DOT__quene_3),8);
        tracep->fullCData(oldp+1372,(vlSelf->top__DOT__d_cache__DOT__quene_4),8);
        tracep->fullCData(oldp+1373,(vlSelf->top__DOT__d_cache__DOT__quene_5),8);
        tracep->fullCData(oldp+1374,(vlSelf->top__DOT__d_cache__DOT__quene_6),8);
        tracep->fullCData(oldp+1375,(vlSelf->top__DOT__d_cache__DOT__quene_7),8);
        tracep->fullCData(oldp+1376,(vlSelf->top__DOT__d_cache__DOT__quene_8),8);
        tracep->fullCData(oldp+1377,(vlSelf->top__DOT__d_cache__DOT__quene_9),8);
        tracep->fullCData(oldp+1378,(vlSelf->top__DOT__d_cache__DOT__quene_10),8);
        tracep->fullCData(oldp+1379,(vlSelf->top__DOT__d_cache__DOT__quene_11),8);
        tracep->fullCData(oldp+1380,(vlSelf->top__DOT__d_cache__DOT__quene_12),8);
        tracep->fullCData(oldp+1381,(vlSelf->top__DOT__d_cache__DOT__quene_13),8);
        tracep->fullCData(oldp+1382,(vlSelf->top__DOT__d_cache__DOT__quene_14),8);
        tracep->fullCData(oldp+1383,(vlSelf->top__DOT__d_cache__DOT__quene_15),8);
        tracep->fullCData(oldp+1384,((0xfU & (IData)(vlSelf->top__DOT__LSU__DOT__maddr))),4);
        tracep->fullCData(oldp+1385,((0xfU & (IData)(
                                                     (vlSelf->top__DOT__LSU__DOT__maddr 
                                                      >> 4U)))),4);
        tracep->fullIData(oldp+1386,((0xffffffU & (IData)(
                                                          (vlSelf->top__DOT__LSU__DOT__maddr 
                                                           >> 8U)))),24);
        tracep->fullCData(oldp+1387,((0x78U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                               << 3U))),7);
        tracep->fullQData(oldp+1388,(vlSelf->top__DOT__d_cache__DOT__wmask),64);
        tracep->fullBit(oldp+1390,(vlSelf->top__DOT__d_cache__DOT__way0_hit));
        tracep->fullBit(oldp+1391,(vlSelf->top__DOT__d_cache__DOT__way1_hit));
        tracep->fullBit(oldp+1392,(vlSelf->top__DOT__d_cache__DOT__way2_hit));
        tracep->fullBit(oldp+1393,(vlSelf->top__DOT__d_cache__DOT__way3_hit));
        tracep->fullCData(oldp+1394,(vlSelf->top__DOT__d_cache__DOT__unuse_way),3);
        tracep->fullCData(oldp+1395,(vlSelf->top__DOT__d_cache__DOT__state),4);
        tracep->fullQData(oldp+1396,(vlSelf->top__DOT__axi__DOT__araddr),64);
        tracep->fullQData(oldp+1398,(vlSelf->top__DOT__axi__DOT__awaddr),64);
        tracep->fullCData(oldp+1400,(vlSelf->top__DOT__axi__DOT__arlen),8);
        tracep->fullCData(oldp+1401,(vlSelf->top__DOT__axi__DOT__awlen),8);
        tracep->fullCData(oldp+1402,(vlSelf->top__DOT__axi__DOT__state),3);
        tracep->fullBit(oldp+1403,(vlSelf->clock));
        tracep->fullBit(oldp+1404,(vlSelf->reset));
        tracep->fullIData(oldp+1405,(vlSelf->io_inst),32);
        tracep->fullQData(oldp+1406,(vlSelf->io_pc),64);
        tracep->fullBit(oldp+1408,(vlSelf->io_step));
        tracep->fullBit(oldp+1409,(1U));
        tracep->fullCData(oldp+1410,(0U),5);
        tracep->fullCData(oldp+1411,(1U),5);
        tracep->fullCData(oldp+1412,(2U),5);
        tracep->fullCData(oldp+1413,(3U),5);
        tracep->fullCData(oldp+1414,(4U),5);
        tracep->fullCData(oldp+1415,(5U),5);
        tracep->fullCData(oldp+1416,(6U),5);
        tracep->fullCData(oldp+1417,(7U),5);
        tracep->fullCData(oldp+1418,(8U),5);
        tracep->fullCData(oldp+1419,(9U),5);
        tracep->fullCData(oldp+1420,(0xaU),5);
        tracep->fullCData(oldp+1421,(0xbU),5);
        tracep->fullCData(oldp+1422,(0xcU),5);
        tracep->fullCData(oldp+1423,(0xdU),5);
        tracep->fullCData(oldp+1424,(0xeU),5);
        tracep->fullCData(oldp+1425,(0xfU),5);
        tracep->fullCData(oldp+1426,(0x10U),5);
        tracep->fullCData(oldp+1427,(0x11U),5);
        tracep->fullCData(oldp+1428,(0x12U),5);
        tracep->fullCData(oldp+1429,(0x13U),5);
        tracep->fullCData(oldp+1430,(0x14U),5);
        tracep->fullCData(oldp+1431,(0x15U),5);
        tracep->fullCData(oldp+1432,(0x16U),5);
        tracep->fullCData(oldp+1433,(0x17U),5);
        tracep->fullCData(oldp+1434,(0x18U),5);
        tracep->fullCData(oldp+1435,(0x19U),5);
        tracep->fullCData(oldp+1436,(0x1aU),5);
        tracep->fullCData(oldp+1437,(0x1bU),5);
        tracep->fullCData(oldp+1438,(0x1cU),5);
        tracep->fullCData(oldp+1439,(0x1dU),5);
        tracep->fullCData(oldp+1440,(0x1eU),5);
        tracep->fullCData(oldp+1441,(0x1fU),5);
        tracep->fullCData(oldp+1442,(3U),2);
    }
}
