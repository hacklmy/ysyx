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
        tracep->declBit(c+1769,"clock", false,-1);
        tracep->declBit(c+1770,"reset", false,-1);
        tracep->declBus(c+1771,"io_inst", false,-1, 31,0);
        tracep->declQuad(c+1772,"io_pc", false,-1, 63,0);
        tracep->declBit(c+1774,"io_step", false,-1);
        tracep->declBit(c+1769,"top clock", false,-1);
        tracep->declBit(c+1770,"top reset", false,-1);
        tracep->declBus(c+1771,"top io_inst", false,-1, 31,0);
        tracep->declQuad(c+1772,"top io_pc", false,-1, 63,0);
        tracep->declBit(c+1774,"top io_step", false,-1);
        tracep->declBit(c+1769,"top Register_clock", false,-1);
        tracep->declBus(c+1,"top Register_io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top Register_io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top Register_io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top Register_io_rdata2", false,-1, 63,0);
        tracep->declBit(c+7,"top Register_io_we", false,-1);
        tracep->declBus(c+8,"top Register_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top Register_io_wdata", false,-1, 63,0);
        tracep->declBit(c+1769,"top IFU_clock", false,-1);
        tracep->declBit(c+1770,"top IFU_reset", false,-1);
        tracep->declBit(c+11,"top IFU_io_ds_allowin", false,-1);
        tracep->declBit(c+12,"top IFU_io_br_taken", false,-1);
        tracep->declQuad(c+13,"top IFU_io_br_target", false,-1, 63,0);
        tracep->declBit(c+15,"top IFU_io_br_taken_cancel", false,-1);
        tracep->declQuad(c+16,"top IFU_io_to_ds_pc", false,-1, 63,0);
        tracep->declBit(c+18,"top IFU_io_fs_to_ds_valid", false,-1);
        tracep->declBus(c+19,"top IFU_io_inst", false,-1, 31,0);
        tracep->declQuad(c+20,"top IFU_io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+22,"top IFU_io_axi_in_rlast", false,-1);
        tracep->declBit(c+23,"top IFU_io_axi_in_rvalid", false,-1);
        tracep->declBus(c+24,"top IFU_io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+25,"top IFU_io_axi_out_arvalid", false,-1);
        tracep->declBit(c+26,"top IFU_io_axi_out_rready", false,-1);
        tracep->declBit(c+1769,"top IDU_clock", false,-1);
        tracep->declBit(c+1770,"top IDU_reset", false,-1);
        tracep->declQuad(c+16,"top IDU_io_pc", false,-1, 63,0);
        tracep->declBit(c+18,"top IDU_io_fs_to_ds_valid", false,-1);
        tracep->declBit(c+27,"top IDU_io_ds_to_es_valid", false,-1);
        tracep->declBit(c+28,"top IDU_io_es_allowin", false,-1);
        tracep->declBus(c+19,"top IDU_io_from_fs_inst", false,-1, 31,0);
        tracep->declBit(c+12,"top IDU_io_br_taken", false,-1);
        tracep->declQuad(c+13,"top IDU_io_br_target", false,-1, 63,0);
        tracep->declBit(c+15,"top IDU_io_br_taken_cancel", false,-1);
        tracep->declBit(c+11,"top IDU_io_ds_allowin", false,-1);
        tracep->declBus(c+1,"top IDU_io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top IDU_io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top IDU_io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top IDU_io_rdata2", false,-1, 63,0);
        tracep->declQuad(c+29,"top IDU_io_to_es_pc", false,-1, 63,0);
        tracep->declBus(c+31,"top IDU_io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+32,"top IDU_io_src1", false,-1, 63,0);
        tracep->declQuad(c+34,"top IDU_io_src2", false,-1, 63,0);
        tracep->declBus(c+36,"top IDU_io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+37,"top IDU_io_store_data", false,-1, 63,0);
        tracep->declBit(c+39,"top IDU_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+40,"top IDU_io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+41,"top IDU_io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+42,"top IDU_io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBus(c+43,"top IDU_io_load_type", false,-1, 2,0);
        tracep->declBit(c+44,"top IDU_io_es_rf_we", false,-1);
        tracep->declBit(c+45,"top IDU_io_ms_rf_we", false,-1);
        tracep->declBit(c+46,"top IDU_io_ws_rf_we", false,-1);
        tracep->declBit(c+47,"top IDU_io_es_valid", false,-1);
        tracep->declBit(c+48,"top IDU_io_ms_valid", false,-1);
        tracep->declBit(c+49,"top IDU_io_ws_valid", false,-1);
        tracep->declBus(c+50,"top IDU_io_es_rf_dst", false,-1, 4,0);
        tracep->declBus(c+51,"top IDU_io_ms_rf_dst", false,-1, 4,0);
        tracep->declBus(c+8,"top IDU_io_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+52,"top IDU_io_ds_valid", false,-1);
        tracep->declBit(c+1769,"top EXU_clock", false,-1);
        tracep->declBit(c+1770,"top EXU_reset", false,-1);
        tracep->declQuad(c+29,"top EXU_io_pc", false,-1, 63,0);
        tracep->declBit(c+27,"top EXU_io_ds_to_es_valid", false,-1);
        tracep->declBit(c+53,"top EXU_io_ms_allowin", false,-1);
        tracep->declBit(c+28,"top EXU_io_es_allowin", false,-1);
        tracep->declBus(c+31,"top EXU_io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+32,"top EXU_io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+34,"top EXU_io_src2_value", false,-1, 63,0);
        tracep->declBus(c+36,"top EXU_io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+37,"top EXU_io_store_data", false,-1, 63,0);
        tracep->declBit(c+54,"top EXU_io_es_to_ms_valid", false,-1);
        tracep->declBus(c+43,"top EXU_io_load_type", false,-1, 2,0);
        tracep->declQuad(c+55,"top EXU_io_to_ms_pc", false,-1, 63,0);
        tracep->declQuad(c+57,"top EXU_io_to_ms_alures", false,-1, 63,0);
        tracep->declQuad(c+59,"top EXU_io_to_ms_store_data", false,-1, 63,0);
        tracep->declBit(c+61,"top EXU_io_to_ms_wen", false,-1);
        tracep->declBus(c+62,"top EXU_io_to_ms_wstrb", false,-1, 7,0);
        tracep->declBit(c+63,"top EXU_io_to_ms_ren", false,-1);
        tracep->declQuad(c+57,"top EXU_io_to_ms_maddr", false,-1, 63,0);
        tracep->declBus(c+50,"top EXU_io_to_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+44,"top EXU_io_to_ms_rf_we", false,-1);
        tracep->declBus(c+64,"top EXU_io_to_ms_load_type", false,-1, 2,0);
        tracep->declBit(c+39,"top EXU_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+40,"top EXU_io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+41,"top EXU_io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+42,"top EXU_io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBit(c+47,"top EXU_io_es_valid", false,-1);
        tracep->declBit(c+44,"top EXU_io_es_rf_we", false,-1);
        tracep->declBus(c+50,"top EXU_io_es_rf_dst", false,-1, 4,0);
        tracep->declBit(c+1769,"top LSU_clock", false,-1);
        tracep->declBit(c+1770,"top LSU_reset", false,-1);
        tracep->declQuad(c+55,"top LSU_io_pc", false,-1, 63,0);
        tracep->declBit(c+54,"top LSU_io_es_to_ms_valid", false,-1);
        tracep->declBit(c+53,"top LSU_io_ms_allowin", false,-1);
        tracep->declBit(c+44,"top LSU_io_rf_we", false,-1);
        tracep->declBus(c+50,"top LSU_io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+57,"top LSU_io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+59,"top LSU_io_store_data", false,-1, 63,0);
        tracep->declBus(c+64,"top LSU_io_load_type", false,-1, 2,0);
        tracep->declBit(c+61,"top LSU_io_wen", false,-1);
        tracep->declBus(c+62,"top LSU_io_wstrb", false,-1, 7,0);
        tracep->declBit(c+63,"top LSU_io_ren", false,-1);
        tracep->declQuad(c+57,"top LSU_io_maddr", false,-1, 63,0);
        tracep->declQuad(c+65,"top LSU_io_to_ws_pc", false,-1, 63,0);
        tracep->declQuad(c+67,"top LSU_io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+69,"top LSU_io_ms_to_ws_valid", false,-1);
        tracep->declBit(c+70,"top LSU_io_to_ws_rf_we", false,-1);
        tracep->declBus(c+51,"top LSU_io_to_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+48,"top LSU_io_ms_valid", false,-1);
        tracep->declBit(c+45,"top LSU_io_ms_rf_we", false,-1);
        tracep->declBus(c+51,"top LSU_io_ms_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+71,"top LSU_io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+73,"top LSU_io_axi_in_rvalid", false,-1);
        tracep->declBit(c+74,"top LSU_io_axi_in_wready", false,-1);
        tracep->declBus(c+75,"top LSU_io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+76,"top LSU_io_axi_out_arvalid", false,-1);
        tracep->declBus(c+75,"top LSU_io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBit(c+77,"top LSU_io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+78,"top LSU_io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+80,"top LSU_io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+81,"top LSU_io_axi_out_wvalid", false,-1);
        tracep->declBit(c+1769,"top WBU_clock", false,-1);
        tracep->declBit(c+1770,"top WBU_reset", false,-1);
        tracep->declQuad(c+65,"top WBU_io_pc", false,-1, 63,0);
        tracep->declBit(c+69,"top WBU_io_ms_to_ws_valid", false,-1);
        tracep->declQuad(c+67,"top WBU_io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+70,"top WBU_io_rf_we", false,-1);
        tracep->declBus(c+51,"top WBU_io_rf_dst", false,-1, 4,0);
        tracep->declBit(c+7,"top WBU_io_we", false,-1);
        tracep->declBus(c+8,"top WBU_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU_io_wdata", false,-1, 63,0);
        tracep->declBit(c+49,"top WBU_io_ws_valid", false,-1);
        tracep->declBit(c+46,"top WBU_io_ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU_io_ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+82,"top WBU_io_ws_pc", false,-1, 63,0);
        tracep->declBit(c+1769,"top arbiter_clock", false,-1);
        tracep->declBit(c+1770,"top arbiter_reset", false,-1);
        tracep->declBus(c+84,"top arbiter_io_ifu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+85,"top arbiter_io_ifu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+86,"top arbiter_io_ifu_axi_in_arvalid", false,-1);
        tracep->declBit(c+87,"top arbiter_io_ifu_axi_in_rready", false,-1);
        tracep->declQuad(c+88,"top arbiter_io_ifu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+90,"top arbiter_io_ifu_axi_out_rlast", false,-1);
        tracep->declBit(c+91,"top arbiter_io_ifu_axi_out_rvalid", false,-1);
        tracep->declBus(c+92,"top arbiter_io_lsu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+93,"top arbiter_io_lsu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+94,"top arbiter_io_lsu_axi_in_arvalid", false,-1);
        tracep->declBit(c+95,"top arbiter_io_lsu_axi_in_rready", false,-1);
        tracep->declBus(c+96,"top arbiter_io_lsu_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+97,"top arbiter_io_lsu_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+98,"top arbiter_io_lsu_axi_in_awvalid", false,-1);
        tracep->declQuad(c+99,"top arbiter_io_lsu_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+101,"top arbiter_io_lsu_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+102,"top arbiter_io_lsu_axi_in_wvalid", false,-1);
        tracep->declBit(c+103,"top arbiter_io_lsu_axi_in_bready", false,-1);
        tracep->declQuad(c+104,"top arbiter_io_lsu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+106,"top arbiter_io_lsu_axi_out_rlast", false,-1);
        tracep->declBit(c+107,"top arbiter_io_lsu_axi_out_rvalid", false,-1);
        tracep->declBit(c+108,"top arbiter_io_lsu_axi_out_wready", false,-1);
        tracep->declBit(c+109,"top arbiter_io_lsu_axi_out_bvalid", false,-1);
        tracep->declQuad(c+110,"top arbiter_io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+112,"top arbiter_io_axi_in_rlast", false,-1);
        tracep->declBit(c+113,"top arbiter_io_axi_in_rvalid", false,-1);
        tracep->declBit(c+114,"top arbiter_io_axi_in_wready", false,-1);
        tracep->declBit(c+115,"top arbiter_io_axi_in_bvalid", false,-1);
        tracep->declBus(c+116,"top arbiter_io_axi_out_araddr", false,-1, 31,0);
        tracep->declBus(c+117,"top arbiter_io_axi_out_arlen", false,-1, 7,0);
        tracep->declBit(c+118,"top arbiter_io_axi_out_arvalid", false,-1);
        tracep->declBit(c+119,"top arbiter_io_axi_out_rready", false,-1);
        tracep->declBus(c+120,"top arbiter_io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBus(c+121,"top arbiter_io_axi_out_awlen", false,-1, 7,0);
        tracep->declBit(c+122,"top arbiter_io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+123,"top arbiter_io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+125,"top arbiter_io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+126,"top arbiter_io_axi_out_wvalid", false,-1);
        tracep->declBit(c+127,"top arbiter_io_axi_out_bready", false,-1);
        tracep->declBit(c+1769,"top i_cache_clock", false,-1);
        tracep->declBit(c+1770,"top i_cache_reset", false,-1);
        tracep->declBus(c+24,"top i_cache_io_from_ifu_araddr", false,-1, 31,0);
        tracep->declBit(c+25,"top i_cache_io_from_ifu_arvalid", false,-1);
        tracep->declBit(c+26,"top i_cache_io_from_ifu_rready", false,-1);
        tracep->declQuad(c+20,"top i_cache_io_to_ifu_rdata", false,-1, 63,0);
        tracep->declBit(c+22,"top i_cache_io_to_ifu_rlast", false,-1);
        tracep->declBit(c+23,"top i_cache_io_to_ifu_rvalid", false,-1);
        tracep->declBus(c+84,"top i_cache_io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+85,"top i_cache_io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+86,"top i_cache_io_to_axi_arvalid", false,-1);
        tracep->declBit(c+87,"top i_cache_io_to_axi_rready", false,-1);
        tracep->declQuad(c+88,"top i_cache_io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+90,"top i_cache_io_from_axi_rlast", false,-1);
        tracep->declBit(c+91,"top i_cache_io_from_axi_rvalid", false,-1);
        tracep->declBit(c+1769,"top d_cache_clock", false,-1);
        tracep->declBit(c+1770,"top d_cache_reset", false,-1);
        tracep->declBus(c+75,"top d_cache_io_from_lsu_araddr", false,-1, 31,0);
        tracep->declBit(c+76,"top d_cache_io_from_lsu_arvalid", false,-1);
        tracep->declBus(c+75,"top d_cache_io_from_lsu_awaddr", false,-1, 31,0);
        tracep->declBit(c+77,"top d_cache_io_from_lsu_awvalid", false,-1);
        tracep->declQuad(c+78,"top d_cache_io_from_lsu_wdata", false,-1, 63,0);
        tracep->declBus(c+80,"top d_cache_io_from_lsu_wstrb", false,-1, 7,0);
        tracep->declBit(c+81,"top d_cache_io_from_lsu_wvalid", false,-1);
        tracep->declQuad(c+71,"top d_cache_io_to_lsu_rdata", false,-1, 63,0);
        tracep->declBit(c+73,"top d_cache_io_to_lsu_rvalid", false,-1);
        tracep->declBit(c+74,"top d_cache_io_to_lsu_wready", false,-1);
        tracep->declBus(c+92,"top d_cache_io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+93,"top d_cache_io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+94,"top d_cache_io_to_axi_arvalid", false,-1);
        tracep->declBit(c+95,"top d_cache_io_to_axi_rready", false,-1);
        tracep->declBus(c+96,"top d_cache_io_to_axi_awaddr", false,-1, 31,0);
        tracep->declBus(c+97,"top d_cache_io_to_axi_awlen", false,-1, 7,0);
        tracep->declBit(c+98,"top d_cache_io_to_axi_awvalid", false,-1);
        tracep->declQuad(c+99,"top d_cache_io_to_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+101,"top d_cache_io_to_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+102,"top d_cache_io_to_axi_wvalid", false,-1);
        tracep->declBit(c+103,"top d_cache_io_to_axi_bready", false,-1);
        tracep->declQuad(c+104,"top d_cache_io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+106,"top d_cache_io_from_axi_rlast", false,-1);
        tracep->declBit(c+107,"top d_cache_io_from_axi_rvalid", false,-1);
        tracep->declBit(c+108,"top d_cache_io_from_axi_wready", false,-1);
        tracep->declBit(c+109,"top d_cache_io_from_axi_bvalid", false,-1);
        tracep->declBit(c+1769,"top axi_clock", false,-1);
        tracep->declBit(c+1770,"top axi_reset", false,-1);
        tracep->declBus(c+116,"top axi_io_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+117,"top axi_io_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+118,"top axi_io_axi_in_arvalid", false,-1);
        tracep->declBit(c+119,"top axi_io_axi_in_rready", false,-1);
        tracep->declBus(c+120,"top axi_io_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+121,"top axi_io_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+122,"top axi_io_axi_in_awvalid", false,-1);
        tracep->declQuad(c+123,"top axi_io_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+125,"top axi_io_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+126,"top axi_io_axi_in_wvalid", false,-1);
        tracep->declBit(c+127,"top axi_io_axi_in_bready", false,-1);
        tracep->declQuad(c+110,"top axi_io_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+112,"top axi_io_axi_out_rlast", false,-1);
        tracep->declBit(c+113,"top axi_io_axi_out_rvalid", false,-1);
        tracep->declBit(c+114,"top axi_io_axi_out_wready", false,-1);
        tracep->declBit(c+115,"top axi_io_axi_out_bvalid", false,-1);
        tracep->declBus(c+128,"top dpi_flag", false,-1, 31,0);
        tracep->declBus(c+129,"top dpi_ecall_flag", false,-1, 31,0);
        tracep->declQuad(c+130,"top dpi_pc", false,-1, 63,0);
        tracep->declBit(c+132,"top diff_step", false,-1);
        tracep->declBit(c+1769,"top Register clock", false,-1);
        tracep->declBus(c+1,"top Register io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top Register io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top Register io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top Register io_rdata2", false,-1, 63,0);
        tracep->declBit(c+7,"top Register io_we", false,-1);
        tracep->declBus(c+8,"top Register io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top Register io_wdata", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+133+i*2,"top Register Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+1775,"top Register Reg_io_rdata1_MPORT_en", false,-1);
        tracep->declBus(c+1,"top Register Reg_io_rdata1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+197,"top Register Reg_io_rdata1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_io_rdata2_MPORT_en", false,-1);
        tracep->declBus(c+2,"top Register Reg_io_rdata2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+199,"top Register Reg_io_rdata2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_0_MPORT_en", false,-1);
        tracep->declBus(c+1776,"top Register Reg_reg_trace_io_input_reg_0_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+201,"top Register Reg_reg_trace_io_input_reg_0_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_1_MPORT_en", false,-1);
        tracep->declBus(c+1777,"top Register Reg_reg_trace_io_input_reg_1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+203,"top Register Reg_reg_trace_io_input_reg_1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_2_MPORT_en", false,-1);
        tracep->declBus(c+1778,"top Register Reg_reg_trace_io_input_reg_2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+205,"top Register Reg_reg_trace_io_input_reg_2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_3_MPORT_en", false,-1);
        tracep->declBus(c+1779,"top Register Reg_reg_trace_io_input_reg_3_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+207,"top Register Reg_reg_trace_io_input_reg_3_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_4_MPORT_en", false,-1);
        tracep->declBus(c+1780,"top Register Reg_reg_trace_io_input_reg_4_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+209,"top Register Reg_reg_trace_io_input_reg_4_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_5_MPORT_en", false,-1);
        tracep->declBus(c+1781,"top Register Reg_reg_trace_io_input_reg_5_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+211,"top Register Reg_reg_trace_io_input_reg_5_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_6_MPORT_en", false,-1);
        tracep->declBus(c+1782,"top Register Reg_reg_trace_io_input_reg_6_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+213,"top Register Reg_reg_trace_io_input_reg_6_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_7_MPORT_en", false,-1);
        tracep->declBus(c+1783,"top Register Reg_reg_trace_io_input_reg_7_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+215,"top Register Reg_reg_trace_io_input_reg_7_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_8_MPORT_en", false,-1);
        tracep->declBus(c+1784,"top Register Reg_reg_trace_io_input_reg_8_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+217,"top Register Reg_reg_trace_io_input_reg_8_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_9_MPORT_en", false,-1);
        tracep->declBus(c+1785,"top Register Reg_reg_trace_io_input_reg_9_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+219,"top Register Reg_reg_trace_io_input_reg_9_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_10_MPORT_en", false,-1);
        tracep->declBus(c+1786,"top Register Reg_reg_trace_io_input_reg_10_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+221,"top Register Reg_reg_trace_io_input_reg_10_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_11_MPORT_en", false,-1);
        tracep->declBus(c+1787,"top Register Reg_reg_trace_io_input_reg_11_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+223,"top Register Reg_reg_trace_io_input_reg_11_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_12_MPORT_en", false,-1);
        tracep->declBus(c+1788,"top Register Reg_reg_trace_io_input_reg_12_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+225,"top Register Reg_reg_trace_io_input_reg_12_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_13_MPORT_en", false,-1);
        tracep->declBus(c+1789,"top Register Reg_reg_trace_io_input_reg_13_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+227,"top Register Reg_reg_trace_io_input_reg_13_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_14_MPORT_en", false,-1);
        tracep->declBus(c+1790,"top Register Reg_reg_trace_io_input_reg_14_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+229,"top Register Reg_reg_trace_io_input_reg_14_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_15_MPORT_en", false,-1);
        tracep->declBus(c+1791,"top Register Reg_reg_trace_io_input_reg_15_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+231,"top Register Reg_reg_trace_io_input_reg_15_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_16_MPORT_en", false,-1);
        tracep->declBus(c+1792,"top Register Reg_reg_trace_io_input_reg_16_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+233,"top Register Reg_reg_trace_io_input_reg_16_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_17_MPORT_en", false,-1);
        tracep->declBus(c+1793,"top Register Reg_reg_trace_io_input_reg_17_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+235,"top Register Reg_reg_trace_io_input_reg_17_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_18_MPORT_en", false,-1);
        tracep->declBus(c+1794,"top Register Reg_reg_trace_io_input_reg_18_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+237,"top Register Reg_reg_trace_io_input_reg_18_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_19_MPORT_en", false,-1);
        tracep->declBus(c+1795,"top Register Reg_reg_trace_io_input_reg_19_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+239,"top Register Reg_reg_trace_io_input_reg_19_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_20_MPORT_en", false,-1);
        tracep->declBus(c+1796,"top Register Reg_reg_trace_io_input_reg_20_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+241,"top Register Reg_reg_trace_io_input_reg_20_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_21_MPORT_en", false,-1);
        tracep->declBus(c+1797,"top Register Reg_reg_trace_io_input_reg_21_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+243,"top Register Reg_reg_trace_io_input_reg_21_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_22_MPORT_en", false,-1);
        tracep->declBus(c+1798,"top Register Reg_reg_trace_io_input_reg_22_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+245,"top Register Reg_reg_trace_io_input_reg_22_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_23_MPORT_en", false,-1);
        tracep->declBus(c+1799,"top Register Reg_reg_trace_io_input_reg_23_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+247,"top Register Reg_reg_trace_io_input_reg_23_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_24_MPORT_en", false,-1);
        tracep->declBus(c+1800,"top Register Reg_reg_trace_io_input_reg_24_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+249,"top Register Reg_reg_trace_io_input_reg_24_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_25_MPORT_en", false,-1);
        tracep->declBus(c+1801,"top Register Reg_reg_trace_io_input_reg_25_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+251,"top Register Reg_reg_trace_io_input_reg_25_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_26_MPORT_en", false,-1);
        tracep->declBus(c+1802,"top Register Reg_reg_trace_io_input_reg_26_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+253,"top Register Reg_reg_trace_io_input_reg_26_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_27_MPORT_en", false,-1);
        tracep->declBus(c+1803,"top Register Reg_reg_trace_io_input_reg_27_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+255,"top Register Reg_reg_trace_io_input_reg_27_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_28_MPORT_en", false,-1);
        tracep->declBus(c+1804,"top Register Reg_reg_trace_io_input_reg_28_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+257,"top Register Reg_reg_trace_io_input_reg_28_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_29_MPORT_en", false,-1);
        tracep->declBus(c+1805,"top Register Reg_reg_trace_io_input_reg_29_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+259,"top Register Reg_reg_trace_io_input_reg_29_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_30_MPORT_en", false,-1);
        tracep->declBus(c+1806,"top Register Reg_reg_trace_io_input_reg_30_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+261,"top Register Reg_reg_trace_io_input_reg_30_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1775,"top Register Reg_reg_trace_io_input_reg_31_MPORT_en", false,-1);
        tracep->declBus(c+1807,"top Register Reg_reg_trace_io_input_reg_31_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+263,"top Register Reg_reg_trace_io_input_reg_31_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+9,"top Register Reg_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+8,"top Register Reg_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+1775,"top Register Reg_MPORT_mask", false,-1);
        tracep->declBit(c+265,"top Register Reg_MPORT_en", false,-1);
        tracep->declQuad(c+201,"top Register reg_trace_input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+203,"top Register reg_trace_input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+205,"top Register reg_trace_input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+207,"top Register reg_trace_input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+209,"top Register reg_trace_input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+211,"top Register reg_trace_input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+213,"top Register reg_trace_input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+215,"top Register reg_trace_input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+217,"top Register reg_trace_input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+219,"top Register reg_trace_input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+221,"top Register reg_trace_input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+223,"top Register reg_trace_input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+225,"top Register reg_trace_input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+227,"top Register reg_trace_input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+229,"top Register reg_trace_input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+231,"top Register reg_trace_input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+233,"top Register reg_trace_input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+235,"top Register reg_trace_input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+237,"top Register reg_trace_input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+239,"top Register reg_trace_input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+241,"top Register reg_trace_input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+243,"top Register reg_trace_input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+245,"top Register reg_trace_input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+247,"top Register reg_trace_input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+249,"top Register reg_trace_input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+251,"top Register reg_trace_input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+253,"top Register reg_trace_input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+255,"top Register reg_trace_input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+257,"top Register reg_trace_input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+259,"top Register reg_trace_input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+261,"top Register reg_trace_input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+263,"top Register reg_trace_input_reg_31", false,-1, 63,0);
        tracep->declQuad(c+201,"top Register reg_trace input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+203,"top Register reg_trace input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+205,"top Register reg_trace input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+207,"top Register reg_trace input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+209,"top Register reg_trace input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+211,"top Register reg_trace input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+213,"top Register reg_trace input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+215,"top Register reg_trace input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+217,"top Register reg_trace input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+219,"top Register reg_trace input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+221,"top Register reg_trace input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+223,"top Register reg_trace input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+225,"top Register reg_trace input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+227,"top Register reg_trace input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+229,"top Register reg_trace input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+231,"top Register reg_trace input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+233,"top Register reg_trace input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+235,"top Register reg_trace input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+237,"top Register reg_trace input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+239,"top Register reg_trace input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+241,"top Register reg_trace input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+243,"top Register reg_trace input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+245,"top Register reg_trace input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+247,"top Register reg_trace input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+249,"top Register reg_trace input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+251,"top Register reg_trace input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+253,"top Register reg_trace input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+255,"top Register reg_trace input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+257,"top Register reg_trace input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+259,"top Register reg_trace input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+261,"top Register reg_trace input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+263,"top Register reg_trace input_reg_31", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+266+i*2,"top Register reg_trace traceregs", true,(i+0), 63,0);}}
        tracep->declBit(c+1769,"top IFU clock", false,-1);
        tracep->declBit(c+1770,"top IFU reset", false,-1);
        tracep->declBit(c+11,"top IFU io_ds_allowin", false,-1);
        tracep->declBit(c+12,"top IFU io_br_taken", false,-1);
        tracep->declQuad(c+13,"top IFU io_br_target", false,-1, 63,0);
        tracep->declBit(c+15,"top IFU io_br_taken_cancel", false,-1);
        tracep->declQuad(c+16,"top IFU io_to_ds_pc", false,-1, 63,0);
        tracep->declBit(c+18,"top IFU io_fs_to_ds_valid", false,-1);
        tracep->declBus(c+19,"top IFU io_inst", false,-1, 31,0);
        tracep->declQuad(c+20,"top IFU io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+22,"top IFU io_axi_in_rlast", false,-1);
        tracep->declBit(c+23,"top IFU io_axi_in_rvalid", false,-1);
        tracep->declBus(c+24,"top IFU io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+25,"top IFU io_axi_out_arvalid", false,-1);
        tracep->declBit(c+26,"top IFU io_axi_out_rready", false,-1);
        tracep->declBit(c+25,"top IFU fs_valid", false,-1);
        tracep->declBit(c+330,"top IFU fs_ready_go", false,-1);
        tracep->declQuad(c+16,"top IFU fs_pc", false,-1, 63,0);
        tracep->declBus(c+19,"top IFU fs_inst", false,-1, 31,0);
        tracep->declBit(c+331,"top IFU fs_to_ds_valid", false,-1);
        tracep->declQuad(c+332,"top IFU seq_pc", false,-1, 63,0);
        tracep->declBit(c+334,"top IFU fs_allowin", false,-1);
        tracep->declBit(c+26,"top IFU inst_ready", false,-1);
        tracep->declBit(c+1769,"top IDU clock", false,-1);
        tracep->declBit(c+1770,"top IDU reset", false,-1);
        tracep->declQuad(c+16,"top IDU io_pc", false,-1, 63,0);
        tracep->declBit(c+18,"top IDU io_fs_to_ds_valid", false,-1);
        tracep->declBit(c+27,"top IDU io_ds_to_es_valid", false,-1);
        tracep->declBit(c+28,"top IDU io_es_allowin", false,-1);
        tracep->declBus(c+19,"top IDU io_from_fs_inst", false,-1, 31,0);
        tracep->declBit(c+12,"top IDU io_br_taken", false,-1);
        tracep->declQuad(c+13,"top IDU io_br_target", false,-1, 63,0);
        tracep->declBit(c+15,"top IDU io_br_taken_cancel", false,-1);
        tracep->declBit(c+11,"top IDU io_ds_allowin", false,-1);
        tracep->declBus(c+1,"top IDU io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top IDU io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top IDU io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top IDU io_rdata2", false,-1, 63,0);
        tracep->declQuad(c+29,"top IDU io_to_es_pc", false,-1, 63,0);
        tracep->declBus(c+31,"top IDU io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+32,"top IDU io_src1", false,-1, 63,0);
        tracep->declQuad(c+34,"top IDU io_src2", false,-1, 63,0);
        tracep->declBus(c+36,"top IDU io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+37,"top IDU io_store_data", false,-1, 63,0);
        tracep->declBit(c+39,"top IDU io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+40,"top IDU io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+41,"top IDU io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+42,"top IDU io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBus(c+43,"top IDU io_load_type", false,-1, 2,0);
        tracep->declBit(c+44,"top IDU io_es_rf_we", false,-1);
        tracep->declBit(c+45,"top IDU io_ms_rf_we", false,-1);
        tracep->declBit(c+46,"top IDU io_ws_rf_we", false,-1);
        tracep->declBit(c+47,"top IDU io_es_valid", false,-1);
        tracep->declBit(c+48,"top IDU io_ms_valid", false,-1);
        tracep->declBit(c+49,"top IDU io_ws_valid", false,-1);
        tracep->declBus(c+50,"top IDU io_es_rf_dst", false,-1, 4,0);
        tracep->declBus(c+51,"top IDU io_ms_rf_dst", false,-1, 4,0);
        tracep->declBus(c+8,"top IDU io_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+52,"top IDU io_ds_valid", false,-1);
        tracep->declBit(c+1769,"top IDU csr_reg_clock", false,-1);
        tracep->declBit(c+335,"top IDU csr_reg_io_wen1", false,-1);
        tracep->declBit(c+336,"top IDU csr_reg_io_wen2", false,-1);
        tracep->declBus(c+337,"top IDU csr_reg_io_waddr1", false,-1, 1,0);
        tracep->declQuad(c+338,"top IDU csr_reg_io_wdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top IDU csr_reg_io_wdata2", false,-1, 63,0);
        tracep->declBus(c+340,"top IDU csr_reg_io_raddr", false,-1, 1,0);
        tracep->declQuad(c+341,"top IDU csr_reg_io_rdata", false,-1, 63,0);
        tracep->declBit(c+52,"top IDU ds_valid", false,-1);
        tracep->declQuad(c+29,"top IDU ds_pc", false,-1, 63,0);
        tracep->declBus(c+343,"top IDU inst", false,-1, 31,0);
        tracep->declBit(c+344,"top IDU br_taken", false,-1);
        tracep->declBit(c+345,"top IDU src1_is_pc", false,-1);
        tracep->declBus(c+346,"top IDU inst_type", false,-1, 31,0);
        tracep->declBus(c+347,"top IDU csr_write", false,-1, 1,0);
        tracep->declBus(c+1,"top IDU rs1", false,-1, 4,0);
        tracep->declBit(c+348,"top IDU src2_is_imm", false,-1);
        tracep->declBus(c+349,"top IDU rs2", false,-1, 4,0);
        tracep->declBit(c+350,"top IDU conflict", false,-1);
        tracep->declBit(c+351,"top IDU ds_ready_go", false,-1);
        tracep->declBit(c+352,"top IDU br_taken_cancel", false,-1);
        tracep->declBit(c+11,"top IDU ds_allowin", false,-1);
        tracep->declBus(c+36,"top IDU rd", false,-1, 4,0);
        tracep->declBus(c+353,"top IDU imm_imm", false,-1, 11,0);
        tracep->declBus(c+354,"top IDU imm_imm_1", false,-1, 19,0);
        tracep->declBus(c+355,"top IDU imm_imm_2", false,-1, 19,0);
        tracep->declBus(c+356,"top IDU imm_imm_3", false,-1, 11,0);
        tracep->declBus(c+357,"top IDU imm_imm_4", false,-1, 11,0);
        tracep->declQuad(c+358,"top IDU imm", false,-1, 63,0);
        tracep->declBus(c+42,"top IDU Wmask", false,-1, 7,0);
        tracep->declBus(c+360,"top IDU csr_index", false,-1, 1,0);
        tracep->declQuad(c+361,"top IDU csr_wdata", false,-1, 63,0);
        tracep->declBus(c+31,"top IDU ALUop", false,-1, 31,0);
        tracep->declQuad(c+363,"top IDU src1", false,-1, 63,0);
        tracep->declQuad(c+34,"top IDU src2", false,-1, 63,0);
        tracep->declBit(c+1769,"top IDU csr_reg clock", false,-1);
        tracep->declBit(c+335,"top IDU csr_reg io_wen1", false,-1);
        tracep->declBit(c+336,"top IDU csr_reg io_wen2", false,-1);
        tracep->declBus(c+337,"top IDU csr_reg io_waddr1", false,-1, 1,0);
        tracep->declQuad(c+338,"top IDU csr_reg io_wdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top IDU csr_reg io_wdata2", false,-1, 63,0);
        tracep->declBus(c+340,"top IDU csr_reg io_raddr", false,-1, 1,0);
        tracep->declQuad(c+341,"top IDU csr_reg io_rdata", false,-1, 63,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+365+i*2,"top IDU csr_reg CSR_Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+1775,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_en", false,-1);
        tracep->declBus(c+340,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+341,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+338,"top IDU csr_reg CSR_Reg_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+337,"top IDU csr_reg CSR_Reg_MPORT_addr", false,-1, 1,0);
        tracep->declBit(c+1775,"top IDU csr_reg CSR_Reg_MPORT_mask", false,-1);
        tracep->declBit(c+335,"top IDU csr_reg CSR_Reg_MPORT_en", false,-1);
        tracep->declQuad(c+5,"top IDU csr_reg CSR_Reg_MPORT_1_data", false,-1, 63,0);
        tracep->declBus(c+1808,"top IDU csr_reg CSR_Reg_MPORT_1_addr", false,-1, 1,0);
        tracep->declBit(c+1775,"top IDU csr_reg CSR_Reg_MPORT_1_mask", false,-1);
        tracep->declBit(c+336,"top IDU csr_reg CSR_Reg_MPORT_1_en", false,-1);
        tracep->declBit(c+1769,"top EXU clock", false,-1);
        tracep->declBit(c+1770,"top EXU reset", false,-1);
        tracep->declQuad(c+29,"top EXU io_pc", false,-1, 63,0);
        tracep->declBit(c+27,"top EXU io_ds_to_es_valid", false,-1);
        tracep->declBit(c+53,"top EXU io_ms_allowin", false,-1);
        tracep->declBit(c+28,"top EXU io_es_allowin", false,-1);
        tracep->declBus(c+31,"top EXU io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+32,"top EXU io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+34,"top EXU io_src2_value", false,-1, 63,0);
        tracep->declBus(c+36,"top EXU io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+37,"top EXU io_store_data", false,-1, 63,0);
        tracep->declBit(c+54,"top EXU io_es_to_ms_valid", false,-1);
        tracep->declBus(c+43,"top EXU io_load_type", false,-1, 2,0);
        tracep->declQuad(c+55,"top EXU io_to_ms_pc", false,-1, 63,0);
        tracep->declQuad(c+57,"top EXU io_to_ms_alures", false,-1, 63,0);
        tracep->declQuad(c+59,"top EXU io_to_ms_store_data", false,-1, 63,0);
        tracep->declBit(c+61,"top EXU io_to_ms_wen", false,-1);
        tracep->declBus(c+62,"top EXU io_to_ms_wstrb", false,-1, 7,0);
        tracep->declBit(c+63,"top EXU io_to_ms_ren", false,-1);
        tracep->declQuad(c+57,"top EXU io_to_ms_maddr", false,-1, 63,0);
        tracep->declBus(c+50,"top EXU io_to_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+44,"top EXU io_to_ms_rf_we", false,-1);
        tracep->declBus(c+64,"top EXU io_to_ms_load_type", false,-1, 2,0);
        tracep->declBit(c+39,"top EXU io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+40,"top EXU io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+41,"top EXU io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+42,"top EXU io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBit(c+47,"top EXU io_es_valid", false,-1);
        tracep->declBit(c+44,"top EXU io_es_rf_we", false,-1);
        tracep->declBus(c+50,"top EXU io_es_rf_dst", false,-1, 4,0);
        tracep->declBit(c+1769,"top EXU ALU_clock", false,-1);
        tracep->declBit(c+1770,"top EXU ALU_reset", false,-1);
        tracep->declQuad(c+373,"top EXU ALU_io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+375,"top EXU ALU_io_src2_value", false,-1, 63,0);
        tracep->declBus(c+377,"top EXU ALU_io_ALUop", false,-1, 31,0);
        tracep->declBit(c+47,"top EXU ALU_io_src_valid", false,-1);
        tracep->declBit(c+378,"top EXU ALU_io_alu_busy", false,-1);
        tracep->declQuad(c+57,"top EXU ALU_io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+55,"top EXU es_pc", false,-1, 63,0);
        tracep->declBit(c+47,"top EXU es_valid", false,-1);
        tracep->declBus(c+50,"top EXU es_rd", false,-1, 4,0);
        tracep->declBit(c+44,"top EXU es_rf_we", false,-1);
        tracep->declQuad(c+379,"top EXU src1_value", false,-1, 63,0);
        tracep->declQuad(c+375,"top EXU src2_value", false,-1, 63,0);
        tracep->declQuad(c+59,"top EXU store_data", false,-1, 63,0);
        tracep->declBus(c+62,"top EXU st_wstrb", false,-1, 7,0);
        tracep->declBit(c+61,"top EXU st_we", false,-1);
        tracep->declBit(c+63,"top EXU ld_we", false,-1);
        tracep->declBus(c+377,"top EXU ALUop", false,-1, 31,0);
        tracep->declBus(c+64,"top EXU load_type", false,-1, 2,0);
        tracep->declBit(c+381,"top EXU es_ready_go", false,-1);
        tracep->declBit(c+28,"top EXU es_allowin", false,-1);
        tracep->declBit(c+1769,"top EXU ALU clock", false,-1);
        tracep->declBit(c+1770,"top EXU ALU reset", false,-1);
        tracep->declQuad(c+373,"top EXU ALU io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+375,"top EXU ALU io_src2_value", false,-1, 63,0);
        tracep->declBus(c+377,"top EXU ALU io_ALUop", false,-1, 31,0);
        tracep->declBit(c+47,"top EXU ALU io_src_valid", false,-1);
        tracep->declBit(c+378,"top EXU ALU io_alu_busy", false,-1);
        tracep->declQuad(c+57,"top EXU ALU io_alu_res", false,-1, 63,0);
        tracep->declBit(c+1769,"top EXU ALU Mul_clock", false,-1);
        tracep->declBit(c+1770,"top EXU ALU Mul_reset", false,-1);
        tracep->declBit(c+382,"top EXU ALU Mul_io_mul_valid", false,-1);
        tracep->declBit(c+383,"top EXU ALU Mul_io_mulw", false,-1);
        tracep->declQuad(c+373,"top EXU ALU Mul_io_multiplicand", false,-1, 63,0);
        tracep->declQuad(c+375,"top EXU ALU Mul_io_multiplier", false,-1, 63,0);
        tracep->declBit(c+384,"top EXU ALU Mul_io_out_valid", false,-1);
        tracep->declBus(c+385,"top EXU ALU Mul_io_result_hi", false,-1, 31,0);
        tracep->declBus(c+386,"top EXU ALU Mul_io_result_lo", false,-1, 31,0);
        tracep->declBit(c+1769,"top EXU ALU Div_clock", false,-1);
        tracep->declBit(c+1770,"top EXU ALU Div_reset", false,-1);
        tracep->declQuad(c+373,"top EXU ALU Div_io_dividend", false,-1, 63,0);
        tracep->declQuad(c+375,"top EXU ALU Div_io_divisor", false,-1, 63,0);
        tracep->declBit(c+387,"top EXU ALU Div_io_div_valid", false,-1);
        tracep->declBit(c+388,"top EXU ALU Div_io_divw", false,-1);
        tracep->declBit(c+389,"top EXU ALU Div_io_div_signed", false,-1);
        tracep->declBit(c+390,"top EXU ALU Div_io_out_valid", false,-1);
        tracep->declQuad(c+391,"top EXU ALU Div_io_quotient", false,-1, 63,0);
        tracep->declQuad(c+393,"top EXU ALU Div_io_remainder", false,-1, 63,0);
        tracep->declBit(c+395,"top EXU ALU mul_valid", false,-1);
        tracep->declBit(c+396,"top EXU ALU div_valid", false,-1);
        tracep->declQuad(c+397,"top EXU ALU add_res", false,-1, 63,0);
        tracep->declQuad(c+399,"top EXU ALU sub_res", false,-1, 63,0);
        tracep->declQuad(c+401,"top EXU ALU sra_res", false,-1, 63,0);
        tracep->declQuad(c+403,"top EXU ALU srl_res", false,-1, 63,0);
        tracep->declArray(c+405,"top EXU ALU sll_res", false,-1, 126,0);
        tracep->declBus(c+409,"top EXU ALU sraw_res", false,-1, 31,0);
        tracep->declBus(c+410,"top EXU ALU srlw_res", false,-1, 31,0);
        tracep->declQuad(c+411,"top EXU ALU sllw_res", false,-1, 62,0);
        tracep->declQuad(c+413,"top EXU ALU or_res", false,-1, 63,0);
        tracep->declQuad(c+415,"top EXU ALU xor_res", false,-1, 63,0);
        tracep->declQuad(c+417,"top EXU ALU and_res", false,-1, 63,0);
        tracep->declQuad(c+419,"top EXU ALU mlu_res", false,-1, 63,0);
        tracep->declBus(c+421,"top EXU ALU divw_res", false,-1, 31,0);
        tracep->declBus(c+422,"top EXU ALU remw_res", false,-1, 31,0);
        tracep->declArray(c+423,"top EXU ALU alu_res", false,-1, 126,0);
        tracep->declBit(c+1769,"top EXU ALU Mul clock", false,-1);
        tracep->declBit(c+1770,"top EXU ALU Mul reset", false,-1);
        tracep->declBit(c+382,"top EXU ALU Mul io_mul_valid", false,-1);
        tracep->declBit(c+383,"top EXU ALU Mul io_mulw", false,-1);
        tracep->declQuad(c+373,"top EXU ALU Mul io_multiplicand", false,-1, 63,0);
        tracep->declQuad(c+375,"top EXU ALU Mul io_multiplier", false,-1, 63,0);
        tracep->declBit(c+384,"top EXU ALU Mul io_out_valid", false,-1);
        tracep->declBus(c+385,"top EXU ALU Mul io_result_hi", false,-1, 31,0);
        tracep->declBus(c+386,"top EXU ALU Mul io_result_lo", false,-1, 31,0);
        tracep->declBus(c+427,"top EXU ALU Mul booth_partial_io_y", false,-1, 2,0);
        tracep->declQuad(c+428,"top EXU ALU Mul booth_partial_io_x", false,-1, 63,0);
        tracep->declBit(c+430,"top EXU ALU Mul booth_partial_io_c", false,-1);
        tracep->declQuad(c+431,"top EXU ALU Mul booth_partial_io_p", false,-1, 63,0);
        tracep->declBit(c+433,"top EXU ALU Mul sign", false,-1);
        tracep->declQuad(c+434,"top EXU ALU Mul res", false,-1, 63,0);
        tracep->declBus(c+436,"top EXU ALU Mul state", false,-1, 1,0);
        tracep->declArray(c+437,"top EXU ALU Mul src1", false,-1, 127,0);
        tracep->declArray(c+441,"top EXU ALU Mul src2", false,-1, 64,0);
        tracep->declQuad(c+444,"top EXU ALU Mul src1_32", false,-1, 63,0);
        tracep->declQuad(c+446,"top EXU ALU Mul src2_32", false,-1, 63,0);
        tracep->declArray(c+448,"top EXU ALU Mul real_cand", false,-1, 127,0);
        tracep->declQuad(c+452,"top EXU ALU Mul real_er", false,-1, 63,0);
        tracep->declBus(c+427,"top EXU ALU Mul booth_partial io_y", false,-1, 2,0);
        tracep->declQuad(c+428,"top EXU ALU Mul booth_partial io_x", false,-1, 63,0);
        tracep->declBit(c+430,"top EXU ALU Mul booth_partial io_c", false,-1);
        tracep->declQuad(c+431,"top EXU ALU Mul booth_partial io_p", false,-1, 63,0);
        tracep->declBit(c+1769,"top EXU ALU Div clock", false,-1);
        tracep->declBit(c+1770,"top EXU ALU Div reset", false,-1);
        tracep->declQuad(c+373,"top EXU ALU Div io_dividend", false,-1, 63,0);
        tracep->declQuad(c+375,"top EXU ALU Div io_divisor", false,-1, 63,0);
        tracep->declBit(c+387,"top EXU ALU Div io_div_valid", false,-1);
        tracep->declBit(c+388,"top EXU ALU Div io_divw", false,-1);
        tracep->declBit(c+389,"top EXU ALU Div io_div_signed", false,-1);
        tracep->declBit(c+390,"top EXU ALU Div io_out_valid", false,-1);
        tracep->declQuad(c+391,"top EXU ALU Div io_quotient", false,-1, 63,0);
        tracep->declQuad(c+393,"top EXU ALU Div io_remainder", false,-1, 63,0);
        tracep->declBit(c+454,"top EXU ALU Div dend_neg", false,-1);
        tracep->declBit(c+455,"top EXU ALU Div sor_neg", false,-1);
        tracep->declBit(c+456,"top EXU ALU Div quotient_neg", false,-1);
        tracep->declQuad(c+457,"top EXU ALU Div src1_32_s", false,-1, 63,0);
        tracep->declQuad(c+459,"top EXU ALU Div src2_32_s", false,-1, 63,0);
        tracep->declQuad(c+461,"top EXU ALU Div src1_32", false,-1, 63,0);
        tracep->declQuad(c+463,"top EXU ALU Div src2_32", false,-1, 63,0);
        tracep->declQuad(c+465,"top EXU ALU Div real_cand", false,-1, 63,0);
        tracep->declQuad(c+467,"top EXU ALU Div real_er", false,-1, 63,0);
        tracep->declArray(c+469,"top EXU ALU Div src2", false,-1, 64,0);
        tracep->declArray(c+472,"top EXU ALU Div div_cand", false,-1, 127,0);
        tracep->declBit(c+476,"top EXU ALU Div div_start", false,-1);
        tracep->declQuad(c+477,"top EXU ALU Div quotient", false,-1, 63,0);
        tracep->declBus(c+479,"top EXU ALU Div step_num", false,-1, 31,0);
        tracep->declArray(c+480,"top EXU ALU Div src1", false,-1, 127,0);
        tracep->declArray(c+484,"top EXU ALU Div sub_res", false,-1, 64,0);
        tracep->declArray(c+487,"top EXU ALU Div update_cand", false,-1, 127,0);
        tracep->declArray(c+491,"top EXU ALU Div new_cand", false,-1, 127,0);
        tracep->declBit(c+1769,"top LSU clock", false,-1);
        tracep->declBit(c+1770,"top LSU reset", false,-1);
        tracep->declQuad(c+55,"top LSU io_pc", false,-1, 63,0);
        tracep->declBit(c+54,"top LSU io_es_to_ms_valid", false,-1);
        tracep->declBit(c+53,"top LSU io_ms_allowin", false,-1);
        tracep->declBit(c+44,"top LSU io_rf_we", false,-1);
        tracep->declBus(c+50,"top LSU io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+57,"top LSU io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+59,"top LSU io_store_data", false,-1, 63,0);
        tracep->declBus(c+64,"top LSU io_load_type", false,-1, 2,0);
        tracep->declBit(c+61,"top LSU io_wen", false,-1);
        tracep->declBus(c+62,"top LSU io_wstrb", false,-1, 7,0);
        tracep->declBit(c+63,"top LSU io_ren", false,-1);
        tracep->declQuad(c+57,"top LSU io_maddr", false,-1, 63,0);
        tracep->declQuad(c+65,"top LSU io_to_ws_pc", false,-1, 63,0);
        tracep->declQuad(c+67,"top LSU io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+69,"top LSU io_ms_to_ws_valid", false,-1);
        tracep->declBit(c+70,"top LSU io_to_ws_rf_we", false,-1);
        tracep->declBus(c+51,"top LSU io_to_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+48,"top LSU io_ms_valid", false,-1);
        tracep->declBit(c+45,"top LSU io_ms_rf_we", false,-1);
        tracep->declBus(c+51,"top LSU io_ms_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+71,"top LSU io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+73,"top LSU io_axi_in_rvalid", false,-1);
        tracep->declBit(c+74,"top LSU io_axi_in_wready", false,-1);
        tracep->declBus(c+75,"top LSU io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+76,"top LSU io_axi_out_arvalid", false,-1);
        tracep->declBus(c+75,"top LSU io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBit(c+77,"top LSU io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+78,"top LSU io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+80,"top LSU io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+81,"top LSU io_axi_out_wvalid", false,-1);
        tracep->declBit(c+48,"top LSU ms_valid", false,-1);
        tracep->declQuad(c+65,"top LSU ms_pc", false,-1, 63,0);
        tracep->declBit(c+495,"top LSU ms_ready_go", false,-1);
        tracep->declBit(c+70,"top LSU ms_rf_we", false,-1);
        tracep->declBus(c+51,"top LSU ms_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+496,"top LSU ms_res", false,-1, 63,0);
        tracep->declQuad(c+78,"top LSU store_data", false,-1, 63,0);
        tracep->declBit(c+81,"top LSU wen", false,-1);
        tracep->declBus(c+80,"top LSU wstrb", false,-1, 7,0);
        tracep->declBit(c+498,"top LSU ren", false,-1);
        tracep->declQuad(c+499,"top LSU maddr", false,-1, 63,0);
        tracep->declBus(c+501,"top LSU load_type", false,-1, 2,0);
        tracep->declBit(c+53,"top LSU ms_allowin", false,-1);
        tracep->declQuad(c+502,"top LSU mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+504,"top LSU rdata", false,-1, 63,0);
        tracep->declBit(c+1769,"top WBU clock", false,-1);
        tracep->declBit(c+1770,"top WBU reset", false,-1);
        tracep->declQuad(c+65,"top WBU io_pc", false,-1, 63,0);
        tracep->declBit(c+69,"top WBU io_ms_to_ws_valid", false,-1);
        tracep->declQuad(c+67,"top WBU io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+70,"top WBU io_rf_we", false,-1);
        tracep->declBus(c+51,"top WBU io_rf_dst", false,-1, 4,0);
        tracep->declBit(c+7,"top WBU io_we", false,-1);
        tracep->declBus(c+8,"top WBU io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU io_wdata", false,-1, 63,0);
        tracep->declBit(c+49,"top WBU io_ws_valid", false,-1);
        tracep->declBit(c+46,"top WBU io_ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU io_ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+82,"top WBU io_ws_pc", false,-1, 63,0);
        tracep->declBit(c+49,"top WBU ws_valid", false,-1);
        tracep->declQuad(c+82,"top WBU ws_pc", false,-1, 63,0);
        tracep->declBit(c+46,"top WBU ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU ws_res", false,-1, 63,0);
        tracep->declBit(c+1769,"top arbiter clock", false,-1);
        tracep->declBit(c+1770,"top arbiter reset", false,-1);
        tracep->declBus(c+84,"top arbiter io_ifu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+85,"top arbiter io_ifu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+86,"top arbiter io_ifu_axi_in_arvalid", false,-1);
        tracep->declBit(c+87,"top arbiter io_ifu_axi_in_rready", false,-1);
        tracep->declQuad(c+88,"top arbiter io_ifu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+90,"top arbiter io_ifu_axi_out_rlast", false,-1);
        tracep->declBit(c+91,"top arbiter io_ifu_axi_out_rvalid", false,-1);
        tracep->declBus(c+92,"top arbiter io_lsu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+93,"top arbiter io_lsu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+94,"top arbiter io_lsu_axi_in_arvalid", false,-1);
        tracep->declBit(c+95,"top arbiter io_lsu_axi_in_rready", false,-1);
        tracep->declBus(c+96,"top arbiter io_lsu_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+97,"top arbiter io_lsu_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+98,"top arbiter io_lsu_axi_in_awvalid", false,-1);
        tracep->declQuad(c+99,"top arbiter io_lsu_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+101,"top arbiter io_lsu_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+102,"top arbiter io_lsu_axi_in_wvalid", false,-1);
        tracep->declBit(c+103,"top arbiter io_lsu_axi_in_bready", false,-1);
        tracep->declQuad(c+104,"top arbiter io_lsu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+106,"top arbiter io_lsu_axi_out_rlast", false,-1);
        tracep->declBit(c+107,"top arbiter io_lsu_axi_out_rvalid", false,-1);
        tracep->declBit(c+108,"top arbiter io_lsu_axi_out_wready", false,-1);
        tracep->declBit(c+109,"top arbiter io_lsu_axi_out_bvalid", false,-1);
        tracep->declQuad(c+110,"top arbiter io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+112,"top arbiter io_axi_in_rlast", false,-1);
        tracep->declBit(c+113,"top arbiter io_axi_in_rvalid", false,-1);
        tracep->declBit(c+114,"top arbiter io_axi_in_wready", false,-1);
        tracep->declBit(c+115,"top arbiter io_axi_in_bvalid", false,-1);
        tracep->declBus(c+116,"top arbiter io_axi_out_araddr", false,-1, 31,0);
        tracep->declBus(c+117,"top arbiter io_axi_out_arlen", false,-1, 7,0);
        tracep->declBit(c+118,"top arbiter io_axi_out_arvalid", false,-1);
        tracep->declBit(c+119,"top arbiter io_axi_out_rready", false,-1);
        tracep->declBus(c+120,"top arbiter io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBus(c+121,"top arbiter io_axi_out_awlen", false,-1, 7,0);
        tracep->declBit(c+122,"top arbiter io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+123,"top arbiter io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+125,"top arbiter io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+126,"top arbiter io_axi_out_wvalid", false,-1);
        tracep->declBit(c+127,"top arbiter io_axi_out_bready", false,-1);
        tracep->declBus(c+506,"top arbiter state", false,-1, 1,0);
        tracep->declBit(c+1769,"top i_cache clock", false,-1);
        tracep->declBit(c+1770,"top i_cache reset", false,-1);
        tracep->declBus(c+24,"top i_cache io_from_ifu_araddr", false,-1, 31,0);
        tracep->declBit(c+25,"top i_cache io_from_ifu_arvalid", false,-1);
        tracep->declBit(c+26,"top i_cache io_from_ifu_rready", false,-1);
        tracep->declQuad(c+20,"top i_cache io_to_ifu_rdata", false,-1, 63,0);
        tracep->declBit(c+22,"top i_cache io_to_ifu_rlast", false,-1);
        tracep->declBit(c+23,"top i_cache io_to_ifu_rvalid", false,-1);
        tracep->declBus(c+84,"top i_cache io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+85,"top i_cache io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+86,"top i_cache io_to_axi_arvalid", false,-1);
        tracep->declBit(c+87,"top i_cache io_to_axi_rready", false,-1);
        tracep->declQuad(c+88,"top i_cache io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+90,"top i_cache io_from_axi_rlast", false,-1);
        tracep->declBit(c+91,"top i_cache io_from_axi_rvalid", false,-1);
        tracep->declArray(c+507,"top i_cache ram_0_0", false,-1, 511,0);
        tracep->declArray(c+523,"top i_cache ram_0_1", false,-1, 511,0);
        tracep->declArray(c+539,"top i_cache ram_0_2", false,-1, 511,0);
        tracep->declArray(c+555,"top i_cache ram_0_3", false,-1, 511,0);
        tracep->declArray(c+571,"top i_cache ram_0_4", false,-1, 511,0);
        tracep->declArray(c+587,"top i_cache ram_0_5", false,-1, 511,0);
        tracep->declArray(c+603,"top i_cache ram_0_6", false,-1, 511,0);
        tracep->declArray(c+619,"top i_cache ram_0_7", false,-1, 511,0);
        tracep->declArray(c+635,"top i_cache ram_0_8", false,-1, 511,0);
        tracep->declArray(c+651,"top i_cache ram_0_9", false,-1, 511,0);
        tracep->declArray(c+667,"top i_cache ram_0_10", false,-1, 511,0);
        tracep->declArray(c+683,"top i_cache ram_0_11", false,-1, 511,0);
        tracep->declArray(c+699,"top i_cache ram_0_12", false,-1, 511,0);
        tracep->declArray(c+715,"top i_cache ram_0_13", false,-1, 511,0);
        tracep->declArray(c+731,"top i_cache ram_0_14", false,-1, 511,0);
        tracep->declArray(c+747,"top i_cache ram_0_15", false,-1, 511,0);
        tracep->declArray(c+763,"top i_cache ram_1_0", false,-1, 511,0);
        tracep->declArray(c+779,"top i_cache ram_1_1", false,-1, 511,0);
        tracep->declArray(c+795,"top i_cache ram_1_2", false,-1, 511,0);
        tracep->declArray(c+811,"top i_cache ram_1_3", false,-1, 511,0);
        tracep->declArray(c+827,"top i_cache ram_1_4", false,-1, 511,0);
        tracep->declArray(c+843,"top i_cache ram_1_5", false,-1, 511,0);
        tracep->declArray(c+859,"top i_cache ram_1_6", false,-1, 511,0);
        tracep->declArray(c+875,"top i_cache ram_1_7", false,-1, 511,0);
        tracep->declArray(c+891,"top i_cache ram_1_8", false,-1, 511,0);
        tracep->declArray(c+907,"top i_cache ram_1_9", false,-1, 511,0);
        tracep->declArray(c+923,"top i_cache ram_1_10", false,-1, 511,0);
        tracep->declArray(c+939,"top i_cache ram_1_11", false,-1, 511,0);
        tracep->declArray(c+955,"top i_cache ram_1_12", false,-1, 511,0);
        tracep->declArray(c+971,"top i_cache ram_1_13", false,-1, 511,0);
        tracep->declArray(c+987,"top i_cache ram_1_14", false,-1, 511,0);
        tracep->declArray(c+1003,"top i_cache ram_1_15", false,-1, 511,0);
        tracep->declBus(c+1019,"top i_cache tag_0_0", false,-1, 31,0);
        tracep->declBus(c+1020,"top i_cache tag_0_1", false,-1, 31,0);
        tracep->declBus(c+1021,"top i_cache tag_0_2", false,-1, 31,0);
        tracep->declBus(c+1022,"top i_cache tag_0_3", false,-1, 31,0);
        tracep->declBus(c+1023,"top i_cache tag_0_4", false,-1, 31,0);
        tracep->declBus(c+1024,"top i_cache tag_0_5", false,-1, 31,0);
        tracep->declBus(c+1025,"top i_cache tag_0_6", false,-1, 31,0);
        tracep->declBus(c+1026,"top i_cache tag_0_7", false,-1, 31,0);
        tracep->declBus(c+1027,"top i_cache tag_0_8", false,-1, 31,0);
        tracep->declBus(c+1028,"top i_cache tag_0_9", false,-1, 31,0);
        tracep->declBus(c+1029,"top i_cache tag_0_10", false,-1, 31,0);
        tracep->declBus(c+1030,"top i_cache tag_0_11", false,-1, 31,0);
        tracep->declBus(c+1031,"top i_cache tag_0_12", false,-1, 31,0);
        tracep->declBus(c+1032,"top i_cache tag_0_13", false,-1, 31,0);
        tracep->declBus(c+1033,"top i_cache tag_0_14", false,-1, 31,0);
        tracep->declBus(c+1034,"top i_cache tag_0_15", false,-1, 31,0);
        tracep->declBus(c+1035,"top i_cache tag_1_0", false,-1, 31,0);
        tracep->declBus(c+1036,"top i_cache tag_1_1", false,-1, 31,0);
        tracep->declBus(c+1037,"top i_cache tag_1_2", false,-1, 31,0);
        tracep->declBus(c+1038,"top i_cache tag_1_3", false,-1, 31,0);
        tracep->declBus(c+1039,"top i_cache tag_1_4", false,-1, 31,0);
        tracep->declBus(c+1040,"top i_cache tag_1_5", false,-1, 31,0);
        tracep->declBus(c+1041,"top i_cache tag_1_6", false,-1, 31,0);
        tracep->declBus(c+1042,"top i_cache tag_1_7", false,-1, 31,0);
        tracep->declBus(c+1043,"top i_cache tag_1_8", false,-1, 31,0);
        tracep->declBus(c+1044,"top i_cache tag_1_9", false,-1, 31,0);
        tracep->declBus(c+1045,"top i_cache tag_1_10", false,-1, 31,0);
        tracep->declBus(c+1046,"top i_cache tag_1_11", false,-1, 31,0);
        tracep->declBus(c+1047,"top i_cache tag_1_12", false,-1, 31,0);
        tracep->declBus(c+1048,"top i_cache tag_1_13", false,-1, 31,0);
        tracep->declBus(c+1049,"top i_cache tag_1_14", false,-1, 31,0);
        tracep->declBus(c+1050,"top i_cache tag_1_15", false,-1, 31,0);
        tracep->declBit(c+1051,"top i_cache valid_0_0", false,-1);
        tracep->declBit(c+1052,"top i_cache valid_0_1", false,-1);
        tracep->declBit(c+1053,"top i_cache valid_0_2", false,-1);
        tracep->declBit(c+1054,"top i_cache valid_0_3", false,-1);
        tracep->declBit(c+1055,"top i_cache valid_0_4", false,-1);
        tracep->declBit(c+1056,"top i_cache valid_0_5", false,-1);
        tracep->declBit(c+1057,"top i_cache valid_0_6", false,-1);
        tracep->declBit(c+1058,"top i_cache valid_0_7", false,-1);
        tracep->declBit(c+1059,"top i_cache valid_0_8", false,-1);
        tracep->declBit(c+1060,"top i_cache valid_0_9", false,-1);
        tracep->declBit(c+1061,"top i_cache valid_0_10", false,-1);
        tracep->declBit(c+1062,"top i_cache valid_0_11", false,-1);
        tracep->declBit(c+1063,"top i_cache valid_0_12", false,-1);
        tracep->declBit(c+1064,"top i_cache valid_0_13", false,-1);
        tracep->declBit(c+1065,"top i_cache valid_0_14", false,-1);
        tracep->declBit(c+1066,"top i_cache valid_0_15", false,-1);
        tracep->declBit(c+1067,"top i_cache valid_1_0", false,-1);
        tracep->declBit(c+1068,"top i_cache valid_1_1", false,-1);
        tracep->declBit(c+1069,"top i_cache valid_1_2", false,-1);
        tracep->declBit(c+1070,"top i_cache valid_1_3", false,-1);
        tracep->declBit(c+1071,"top i_cache valid_1_4", false,-1);
        tracep->declBit(c+1072,"top i_cache valid_1_5", false,-1);
        tracep->declBit(c+1073,"top i_cache valid_1_6", false,-1);
        tracep->declBit(c+1074,"top i_cache valid_1_7", false,-1);
        tracep->declBit(c+1075,"top i_cache valid_1_8", false,-1);
        tracep->declBit(c+1076,"top i_cache valid_1_9", false,-1);
        tracep->declBit(c+1077,"top i_cache valid_1_10", false,-1);
        tracep->declBit(c+1078,"top i_cache valid_1_11", false,-1);
        tracep->declBit(c+1079,"top i_cache valid_1_12", false,-1);
        tracep->declBit(c+1080,"top i_cache valid_1_13", false,-1);
        tracep->declBit(c+1081,"top i_cache valid_1_14", false,-1);
        tracep->declBit(c+1082,"top i_cache valid_1_15", false,-1);
        tracep->declBit(c+1083,"top i_cache way0_hit", false,-1);
        tracep->declBit(c+1084,"top i_cache way1_hit", false,-1);
        tracep->declBus(c+1085,"top i_cache unuse_way", false,-1, 1,0);
        tracep->declQuad(c+1086,"top i_cache receive_data_0", false,-1, 63,0);
        tracep->declQuad(c+1088,"top i_cache receive_data_1", false,-1, 63,0);
        tracep->declQuad(c+1090,"top i_cache receive_data_2", false,-1, 63,0);
        tracep->declQuad(c+1092,"top i_cache receive_data_3", false,-1, 63,0);
        tracep->declQuad(c+1094,"top i_cache receive_data_4", false,-1, 63,0);
        tracep->declQuad(c+1096,"top i_cache receive_data_5", false,-1, 63,0);
        tracep->declQuad(c+1098,"top i_cache receive_data_6", false,-1, 63,0);
        tracep->declQuad(c+1100,"top i_cache receive_data_7", false,-1, 63,0);
        tracep->declBus(c+1102,"top i_cache receive_num", false,-1, 2,0);
        tracep->declBit(c+1103,"top i_cache quene", false,-1);
        tracep->declBus(c+1104,"top i_cache offset", false,-1, 5,0);
        tracep->declBus(c+1105,"top i_cache index", false,-1, 3,0);
        tracep->declBus(c+1106,"top i_cache tag", false,-1, 21,0);
        tracep->declBus(c+1107,"top i_cache shift_bit", false,-1, 8,0);
        tracep->declBus(c+1108,"top i_cache state", false,-1, 2,0);
        tracep->declBit(c+1769,"top d_cache clock", false,-1);
        tracep->declBit(c+1770,"top d_cache reset", false,-1);
        tracep->declBus(c+75,"top d_cache io_from_lsu_araddr", false,-1, 31,0);
        tracep->declBit(c+76,"top d_cache io_from_lsu_arvalid", false,-1);
        tracep->declBus(c+75,"top d_cache io_from_lsu_awaddr", false,-1, 31,0);
        tracep->declBit(c+77,"top d_cache io_from_lsu_awvalid", false,-1);
        tracep->declQuad(c+78,"top d_cache io_from_lsu_wdata", false,-1, 63,0);
        tracep->declBus(c+80,"top d_cache io_from_lsu_wstrb", false,-1, 7,0);
        tracep->declBit(c+81,"top d_cache io_from_lsu_wvalid", false,-1);
        tracep->declQuad(c+71,"top d_cache io_to_lsu_rdata", false,-1, 63,0);
        tracep->declBit(c+73,"top d_cache io_to_lsu_rvalid", false,-1);
        tracep->declBit(c+74,"top d_cache io_to_lsu_wready", false,-1);
        tracep->declBus(c+92,"top d_cache io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+93,"top d_cache io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+94,"top d_cache io_to_axi_arvalid", false,-1);
        tracep->declBit(c+95,"top d_cache io_to_axi_rready", false,-1);
        tracep->declBus(c+96,"top d_cache io_to_axi_awaddr", false,-1, 31,0);
        tracep->declBus(c+97,"top d_cache io_to_axi_awlen", false,-1, 7,0);
        tracep->declBit(c+98,"top d_cache io_to_axi_awvalid", false,-1);
        tracep->declQuad(c+99,"top d_cache io_to_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+101,"top d_cache io_to_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+102,"top d_cache io_to_axi_wvalid", false,-1);
        tracep->declBit(c+103,"top d_cache io_to_axi_bready", false,-1);
        tracep->declQuad(c+104,"top d_cache io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+106,"top d_cache io_from_axi_rlast", false,-1);
        tracep->declBit(c+107,"top d_cache io_from_axi_rvalid", false,-1);
        tracep->declBit(c+108,"top d_cache io_from_axi_wready", false,-1);
        tracep->declBit(c+109,"top d_cache io_from_axi_bvalid", false,-1);
        tracep->declArray(c+1109,"top d_cache ram_0_0", false,-1, 511,0);
        tracep->declArray(c+1125,"top d_cache ram_0_1", false,-1, 511,0);
        tracep->declArray(c+1141,"top d_cache ram_0_2", false,-1, 511,0);
        tracep->declArray(c+1157,"top d_cache ram_0_3", false,-1, 511,0);
        tracep->declArray(c+1173,"top d_cache ram_0_4", false,-1, 511,0);
        tracep->declArray(c+1189,"top d_cache ram_0_5", false,-1, 511,0);
        tracep->declArray(c+1205,"top d_cache ram_0_6", false,-1, 511,0);
        tracep->declArray(c+1221,"top d_cache ram_0_7", false,-1, 511,0);
        tracep->declArray(c+1237,"top d_cache ram_0_8", false,-1, 511,0);
        tracep->declArray(c+1253,"top d_cache ram_0_9", false,-1, 511,0);
        tracep->declArray(c+1269,"top d_cache ram_0_10", false,-1, 511,0);
        tracep->declArray(c+1285,"top d_cache ram_0_11", false,-1, 511,0);
        tracep->declArray(c+1301,"top d_cache ram_0_12", false,-1, 511,0);
        tracep->declArray(c+1317,"top d_cache ram_0_13", false,-1, 511,0);
        tracep->declArray(c+1333,"top d_cache ram_0_14", false,-1, 511,0);
        tracep->declArray(c+1349,"top d_cache ram_0_15", false,-1, 511,0);
        tracep->declArray(c+1365,"top d_cache ram_1_0", false,-1, 511,0);
        tracep->declArray(c+1381,"top d_cache ram_1_1", false,-1, 511,0);
        tracep->declArray(c+1397,"top d_cache ram_1_2", false,-1, 511,0);
        tracep->declArray(c+1413,"top d_cache ram_1_3", false,-1, 511,0);
        tracep->declArray(c+1429,"top d_cache ram_1_4", false,-1, 511,0);
        tracep->declArray(c+1445,"top d_cache ram_1_5", false,-1, 511,0);
        tracep->declArray(c+1461,"top d_cache ram_1_6", false,-1, 511,0);
        tracep->declArray(c+1477,"top d_cache ram_1_7", false,-1, 511,0);
        tracep->declArray(c+1493,"top d_cache ram_1_8", false,-1, 511,0);
        tracep->declArray(c+1509,"top d_cache ram_1_9", false,-1, 511,0);
        tracep->declArray(c+1525,"top d_cache ram_1_10", false,-1, 511,0);
        tracep->declArray(c+1541,"top d_cache ram_1_11", false,-1, 511,0);
        tracep->declArray(c+1557,"top d_cache ram_1_12", false,-1, 511,0);
        tracep->declArray(c+1573,"top d_cache ram_1_13", false,-1, 511,0);
        tracep->declArray(c+1589,"top d_cache ram_1_14", false,-1, 511,0);
        tracep->declArray(c+1605,"top d_cache ram_1_15", false,-1, 511,0);
        tracep->declBus(c+1621,"top d_cache tag_0_0", false,-1, 31,0);
        tracep->declBus(c+1622,"top d_cache tag_0_1", false,-1, 31,0);
        tracep->declBus(c+1623,"top d_cache tag_0_2", false,-1, 31,0);
        tracep->declBus(c+1624,"top d_cache tag_0_3", false,-1, 31,0);
        tracep->declBus(c+1625,"top d_cache tag_0_4", false,-1, 31,0);
        tracep->declBus(c+1626,"top d_cache tag_0_5", false,-1, 31,0);
        tracep->declBus(c+1627,"top d_cache tag_0_6", false,-1, 31,0);
        tracep->declBus(c+1628,"top d_cache tag_0_7", false,-1, 31,0);
        tracep->declBus(c+1629,"top d_cache tag_0_8", false,-1, 31,0);
        tracep->declBus(c+1630,"top d_cache tag_0_9", false,-1, 31,0);
        tracep->declBus(c+1631,"top d_cache tag_0_10", false,-1, 31,0);
        tracep->declBus(c+1632,"top d_cache tag_0_11", false,-1, 31,0);
        tracep->declBus(c+1633,"top d_cache tag_0_12", false,-1, 31,0);
        tracep->declBus(c+1634,"top d_cache tag_0_13", false,-1, 31,0);
        tracep->declBus(c+1635,"top d_cache tag_0_14", false,-1, 31,0);
        tracep->declBus(c+1636,"top d_cache tag_0_15", false,-1, 31,0);
        tracep->declBus(c+1637,"top d_cache tag_1_0", false,-1, 31,0);
        tracep->declBus(c+1638,"top d_cache tag_1_1", false,-1, 31,0);
        tracep->declBus(c+1639,"top d_cache tag_1_2", false,-1, 31,0);
        tracep->declBus(c+1640,"top d_cache tag_1_3", false,-1, 31,0);
        tracep->declBus(c+1641,"top d_cache tag_1_4", false,-1, 31,0);
        tracep->declBus(c+1642,"top d_cache tag_1_5", false,-1, 31,0);
        tracep->declBus(c+1643,"top d_cache tag_1_6", false,-1, 31,0);
        tracep->declBus(c+1644,"top d_cache tag_1_7", false,-1, 31,0);
        tracep->declBus(c+1645,"top d_cache tag_1_8", false,-1, 31,0);
        tracep->declBus(c+1646,"top d_cache tag_1_9", false,-1, 31,0);
        tracep->declBus(c+1647,"top d_cache tag_1_10", false,-1, 31,0);
        tracep->declBus(c+1648,"top d_cache tag_1_11", false,-1, 31,0);
        tracep->declBus(c+1649,"top d_cache tag_1_12", false,-1, 31,0);
        tracep->declBus(c+1650,"top d_cache tag_1_13", false,-1, 31,0);
        tracep->declBus(c+1651,"top d_cache tag_1_14", false,-1, 31,0);
        tracep->declBus(c+1652,"top d_cache tag_1_15", false,-1, 31,0);
        tracep->declBit(c+1653,"top d_cache valid_0_0", false,-1);
        tracep->declBit(c+1654,"top d_cache valid_0_1", false,-1);
        tracep->declBit(c+1655,"top d_cache valid_0_2", false,-1);
        tracep->declBit(c+1656,"top d_cache valid_0_3", false,-1);
        tracep->declBit(c+1657,"top d_cache valid_0_4", false,-1);
        tracep->declBit(c+1658,"top d_cache valid_0_5", false,-1);
        tracep->declBit(c+1659,"top d_cache valid_0_6", false,-1);
        tracep->declBit(c+1660,"top d_cache valid_0_7", false,-1);
        tracep->declBit(c+1661,"top d_cache valid_0_8", false,-1);
        tracep->declBit(c+1662,"top d_cache valid_0_9", false,-1);
        tracep->declBit(c+1663,"top d_cache valid_0_10", false,-1);
        tracep->declBit(c+1664,"top d_cache valid_0_11", false,-1);
        tracep->declBit(c+1665,"top d_cache valid_0_12", false,-1);
        tracep->declBit(c+1666,"top d_cache valid_0_13", false,-1);
        tracep->declBit(c+1667,"top d_cache valid_0_14", false,-1);
        tracep->declBit(c+1668,"top d_cache valid_0_15", false,-1);
        tracep->declBit(c+1669,"top d_cache valid_1_0", false,-1);
        tracep->declBit(c+1670,"top d_cache valid_1_1", false,-1);
        tracep->declBit(c+1671,"top d_cache valid_1_2", false,-1);
        tracep->declBit(c+1672,"top d_cache valid_1_3", false,-1);
        tracep->declBit(c+1673,"top d_cache valid_1_4", false,-1);
        tracep->declBit(c+1674,"top d_cache valid_1_5", false,-1);
        tracep->declBit(c+1675,"top d_cache valid_1_6", false,-1);
        tracep->declBit(c+1676,"top d_cache valid_1_7", false,-1);
        tracep->declBit(c+1677,"top d_cache valid_1_8", false,-1);
        tracep->declBit(c+1678,"top d_cache valid_1_9", false,-1);
        tracep->declBit(c+1679,"top d_cache valid_1_10", false,-1);
        tracep->declBit(c+1680,"top d_cache valid_1_11", false,-1);
        tracep->declBit(c+1681,"top d_cache valid_1_12", false,-1);
        tracep->declBit(c+1682,"top d_cache valid_1_13", false,-1);
        tracep->declBit(c+1683,"top d_cache valid_1_14", false,-1);
        tracep->declBit(c+1684,"top d_cache valid_1_15", false,-1);
        tracep->declBit(c+1685,"top d_cache dirty_0_0", false,-1);
        tracep->declBit(c+1686,"top d_cache dirty_0_1", false,-1);
        tracep->declBit(c+1687,"top d_cache dirty_0_2", false,-1);
        tracep->declBit(c+1688,"top d_cache dirty_0_3", false,-1);
        tracep->declBit(c+1689,"top d_cache dirty_0_4", false,-1);
        tracep->declBit(c+1690,"top d_cache dirty_0_5", false,-1);
        tracep->declBit(c+1691,"top d_cache dirty_0_6", false,-1);
        tracep->declBit(c+1692,"top d_cache dirty_0_7", false,-1);
        tracep->declBit(c+1693,"top d_cache dirty_0_8", false,-1);
        tracep->declBit(c+1694,"top d_cache dirty_0_9", false,-1);
        tracep->declBit(c+1695,"top d_cache dirty_0_10", false,-1);
        tracep->declBit(c+1696,"top d_cache dirty_0_11", false,-1);
        tracep->declBit(c+1697,"top d_cache dirty_0_12", false,-1);
        tracep->declBit(c+1698,"top d_cache dirty_0_13", false,-1);
        tracep->declBit(c+1699,"top d_cache dirty_0_14", false,-1);
        tracep->declBit(c+1700,"top d_cache dirty_0_15", false,-1);
        tracep->declBit(c+1701,"top d_cache dirty_1_0", false,-1);
        tracep->declBit(c+1702,"top d_cache dirty_1_1", false,-1);
        tracep->declBit(c+1703,"top d_cache dirty_1_2", false,-1);
        tracep->declBit(c+1704,"top d_cache dirty_1_3", false,-1);
        tracep->declBit(c+1705,"top d_cache dirty_1_4", false,-1);
        tracep->declBit(c+1706,"top d_cache dirty_1_5", false,-1);
        tracep->declBit(c+1707,"top d_cache dirty_1_6", false,-1);
        tracep->declBit(c+1708,"top d_cache dirty_1_7", false,-1);
        tracep->declBit(c+1709,"top d_cache dirty_1_8", false,-1);
        tracep->declBit(c+1710,"top d_cache dirty_1_9", false,-1);
        tracep->declBit(c+1711,"top d_cache dirty_1_10", false,-1);
        tracep->declBit(c+1712,"top d_cache dirty_1_11", false,-1);
        tracep->declBit(c+1713,"top d_cache dirty_1_12", false,-1);
        tracep->declBit(c+1714,"top d_cache dirty_1_13", false,-1);
        tracep->declBit(c+1715,"top d_cache dirty_1_14", false,-1);
        tracep->declBit(c+1716,"top d_cache dirty_1_15", false,-1);
        tracep->declBit(c+1717,"top d_cache way0_hit", false,-1);
        tracep->declBit(c+1718,"top d_cache way1_hit", false,-1);
        tracep->declArray(c+1719,"top d_cache write_back_data", false,-1, 511,0);
        tracep->declBus(c+1735,"top d_cache write_back_addr", false,-1, 31,0);
        tracep->declBus(c+1736,"top d_cache unuse_way", false,-1, 1,0);
        tracep->declQuad(c+1737,"top d_cache receive_data_0", false,-1, 63,0);
        tracep->declQuad(c+1739,"top d_cache receive_data_1", false,-1, 63,0);
        tracep->declQuad(c+1741,"top d_cache receive_data_2", false,-1, 63,0);
        tracep->declQuad(c+1743,"top d_cache receive_data_3", false,-1, 63,0);
        tracep->declQuad(c+1745,"top d_cache receive_data_4", false,-1, 63,0);
        tracep->declQuad(c+1747,"top d_cache receive_data_5", false,-1, 63,0);
        tracep->declQuad(c+1749,"top d_cache receive_data_6", false,-1, 63,0);
        tracep->declQuad(c+1751,"top d_cache receive_data_7", false,-1, 63,0);
        tracep->declBus(c+1753,"top d_cache receive_num", false,-1, 2,0);
        tracep->declBit(c+1754,"top d_cache quene", false,-1);
        tracep->declBus(c+1755,"top d_cache offset", false,-1, 5,0);
        tracep->declBus(c+1756,"top d_cache index", false,-1, 3,0);
        tracep->declBus(c+1757,"top d_cache tag", false,-1, 21,0);
        tracep->declBus(c+1758,"top d_cache shift_bit", false,-1, 8,0);
        tracep->declQuad(c+1759,"top d_cache wmask", false,-1, 63,0);
        tracep->declBus(c+1761,"top d_cache state", false,-1, 2,0);
        tracep->declBit(c+1769,"top axi clock", false,-1);
        tracep->declBit(c+1770,"top axi reset", false,-1);
        tracep->declBus(c+116,"top axi io_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+117,"top axi io_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+118,"top axi io_axi_in_arvalid", false,-1);
        tracep->declBit(c+119,"top axi io_axi_in_rready", false,-1);
        tracep->declBus(c+120,"top axi io_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+121,"top axi io_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+122,"top axi io_axi_in_awvalid", false,-1);
        tracep->declQuad(c+123,"top axi io_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+125,"top axi io_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+126,"top axi io_axi_in_wvalid", false,-1);
        tracep->declBit(c+127,"top axi io_axi_in_bready", false,-1);
        tracep->declQuad(c+110,"top axi io_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+112,"top axi io_axi_out_rlast", false,-1);
        tracep->declBit(c+113,"top axi io_axi_out_rvalid", false,-1);
        tracep->declBit(c+114,"top axi io_axi_out_wready", false,-1);
        tracep->declBit(c+115,"top axi io_axi_out_bvalid", false,-1);
        tracep->declQuad(c+1762,"top axi Mem_modle_Raddr", false,-1, 63,0);
        tracep->declQuad(c+110,"top axi Mem_modle_Rdata", false,-1, 63,0);
        tracep->declQuad(c+1764,"top axi Mem_modle_Waddr", false,-1, 63,0);
        tracep->declQuad(c+123,"top axi Mem_modle_Wdata", false,-1, 63,0);
        tracep->declBus(c+125,"top axi Mem_modle_Wmask", false,-1, 7,0);
        tracep->declBit(c+114,"top axi Mem_modle_Write_en", false,-1);
        tracep->declBit(c+113,"top axi Mem_modle_Read_en", false,-1);
        tracep->declBit(c+114,"top axi axi_wready", false,-1);
        tracep->declBit(c+115,"top axi axi_bvalid", false,-1);
        tracep->declBit(c+113,"top axi axi_rvalid", false,-1);
        tracep->declBus(c+1766,"top axi arlen", false,-1, 7,0);
        tracep->declBus(c+1767,"top axi awlen", false,-1, 7,0);
        tracep->declQuad(c+1762,"top axi araddr", false,-1, 63,0);
        tracep->declQuad(c+1764,"top axi awaddr", false,-1, 63,0);
        tracep->declBus(c+1768,"top axi state", false,-1, 2,0);
        tracep->declQuad(c+1762,"top axi Mem_modle Raddr", false,-1, 63,0);
        tracep->declQuad(c+1764,"top axi Mem_modle Waddr", false,-1, 63,0);
        tracep->declQuad(c+123,"top axi Mem_modle Wdata", false,-1, 63,0);
        tracep->declBus(c+125,"top axi Mem_modle Wmask", false,-1, 7,0);
        tracep->declBit(c+114,"top axi Mem_modle Write_en", false,-1);
        tracep->declBit(c+113,"top axi Mem_modle Read_en", false,-1);
        tracep->declQuad(c+110,"top axi Mem_modle Rdata", false,-1, 63,0);
        tracep->declBus(c+128,"top dpi flag", false,-1, 31,0);
        tracep->declBus(c+129,"top dpi ecall_flag", false,-1, 31,0);
        tracep->declQuad(c+130,"top dpi pc", false,-1, 63,0);
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
    VlWide<16>/*511:0*/ __Vtemp2290;
    VlWide<16>/*511:0*/ __Vtemp2291;
    VlWide<16>/*511:0*/ __Vtemp2295;
    VlWide<16>/*511:0*/ __Vtemp2296;
    VlWide<16>/*511:0*/ __Vtemp2301;
    VlWide<16>/*511:0*/ __Vtemp2302;
    VlWide<4>/*127:0*/ __Vtemp2308;
    VlWide<4>/*127:0*/ __Vtemp2309;
    VlWide<4>/*127:0*/ __Vtemp2310;
    VlWide<3>/*95:0*/ __Vtemp2313;
    VlWide<3>/*95:0*/ __Vtemp2314;
    VlWide<3>/*95:0*/ __Vtemp2318;
    VlWide<3>/*95:0*/ __Vtemp2322;
    VlWide<3>/*95:0*/ __Vtemp2329;
    VlWide<4>/*127:0*/ __Vtemp2330;
    VlWide<3>/*95:0*/ __Vtemp2331;
    VlWide<4>/*127:0*/ __Vtemp2332;
    VlWide<4>/*127:0*/ __Vtemp2333;
    VlWide<4>/*127:0*/ __Vtemp2339;
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
        tracep->fullBit(oldp+11,(vlSelf->top__DOT__IDU__DOT__ds_allowin));
        tracep->fullBit(oldp+12,(((IData)(vlSelf->top__DOT__IDU__DOT__br_taken) 
                                  & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
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
        tracep->fullBit(oldp+15,(((IData)(vlSelf->top__DOT__IDU__DOT__br_taken_cancel) 
                                  & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
        tracep->fullQData(oldp+16,(vlSelf->top__DOT__IFU__DOT__fs_pc),64);
        tracep->fullBit(oldp+18,(vlSelf->top__DOT__IFU__DOT__fs_to_ds_valid));
        tracep->fullIData(oldp+19,(vlSelf->top__DOT__IFU__DOT__fs_inst),32);
        if ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__IFU__DOT__fs_pc 
                                      >> 6U))))) {
            __Vtemp2290[0U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0U];
            __Vtemp2290[1U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[1U];
            __Vtemp2290[2U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[2U];
            __Vtemp2290[3U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[3U];
            __Vtemp2290[4U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[4U];
            __Vtemp2290[5U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[5U];
            __Vtemp2290[6U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[6U];
            __Vtemp2290[7U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[7U];
            __Vtemp2290[8U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[8U];
            __Vtemp2290[9U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[9U];
            __Vtemp2290[0xaU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xaU];
            __Vtemp2290[0xbU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xbU];
            __Vtemp2290[0xcU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xcU];
            __Vtemp2290[0xdU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xdU];
            __Vtemp2290[0xeU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xeU];
            __Vtemp2290[0xfU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xfU];
        } else {
            __Vtemp2290[0U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1009[0U]);
            __Vtemp2290[1U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[1U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1009[1U]);
            __Vtemp2290[2U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[2U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1009[2U]);
            __Vtemp2290[3U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[3U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1009[3U]);
            __Vtemp2290[4U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[4U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1009[4U]);
            __Vtemp2290[5U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[5U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1009[5U]);
            __Vtemp2290[6U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[6U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1009[6U]);
            __Vtemp2290[7U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[7U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1009[7U]);
            __Vtemp2290[8U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[8U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1009[8U]);
            __Vtemp2290[9U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[9U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1009[9U]);
            __Vtemp2290[0xaU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xaU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1009[0xaU]);
            __Vtemp2290[0xbU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xbU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1009[0xbU]);
            __Vtemp2290[0xcU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xcU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1009[0xcU]);
            __Vtemp2290[0xdU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xdU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1009[0xdU]);
            __Vtemp2290[0xeU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xeU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1009[0xeU]);
            __Vtemp2290[0xfU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xfU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1009[0xfU]);
        }
        VL_SHIFTR_WWI(512,512,9, __Vtemp2291, __Vtemp2290, 
                      (0x1f8U & ((IData)(vlSelf->top__DOT__IFU__DOT__fs_pc) 
                                 << 3U)));
        if ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__IFU__DOT__fs_pc 
                                      >> 6U))))) {
            __Vtemp2295[0U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0U];
            __Vtemp2295[1U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[1U];
            __Vtemp2295[2U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[2U];
            __Vtemp2295[3U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[3U];
            __Vtemp2295[4U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[4U];
            __Vtemp2295[5U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[5U];
            __Vtemp2295[6U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[6U];
            __Vtemp2295[7U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[7U];
            __Vtemp2295[8U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[8U];
            __Vtemp2295[9U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[9U];
            __Vtemp2295[0xaU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xaU];
            __Vtemp2295[0xbU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xbU];
            __Vtemp2295[0xcU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xcU];
            __Vtemp2295[0xdU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xdU];
            __Vtemp2295[0xeU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xeU];
            __Vtemp2295[0xfU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xfU];
        } else {
            __Vtemp2295[0U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1025[0U]);
            __Vtemp2295[1U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[1U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1025[1U]);
            __Vtemp2295[2U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[2U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1025[2U]);
            __Vtemp2295[3U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[3U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1025[3U]);
            __Vtemp2295[4U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[4U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1025[4U]);
            __Vtemp2295[5U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[5U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1025[5U]);
            __Vtemp2295[6U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[6U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1025[6U]);
            __Vtemp2295[7U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[7U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1025[7U]);
            __Vtemp2295[8U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[8U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1025[8U]);
            __Vtemp2295[9U] = ((0xeU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[9U]
                                : vlSelf->top__DOT__i_cache__DOT___GEN_1025[9U]);
            __Vtemp2295[0xaU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xaU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1025[0xaU]);
            __Vtemp2295[0xbU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xbU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1025[0xbU]);
            __Vtemp2295[0xcU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xcU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1025[0xcU]);
            __Vtemp2295[0xdU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xdU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1025[0xdU]);
            __Vtemp2295[0xeU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xeU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1025[0xeU]);
            __Vtemp2295[0xfU] = ((0xeU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 6U))))
                                  ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xfU]
                                  : vlSelf->top__DOT__i_cache__DOT___GEN_1025[0xfU]);
        }
        VL_SHIFTR_WWI(512,512,9, __Vtemp2296, __Vtemp2295, 
                      (0x1f8U & ((IData)(vlSelf->top__DOT__IFU__DOT__fs_pc) 
                                 << 3U)));
        tracep->fullQData(oldp+20,((((QData)((IData)(
                                                     ((1U 
                                                       == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__i_cache__DOT__way0_hit)
                                                        ? 
                                                       __Vtemp2291[1U]
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__i_cache__DOT__way1_hit)
                                                         ? 
                                                        __Vtemp2296[1U]
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
                                                                   __Vtemp2291[0U]
                                                                    : 
                                                                   ((IData)(vlSelf->top__DOT__i_cache__DOT__way1_hit)
                                                                     ? 
                                                                    __Vtemp2296[0U]
                                                                     : 
                                                                    Vtop__ConstPool__CONST_93e1b771_0[0U]))
                                                                   : 
                                                                  Vtop__ConstPool__CONST_93e1b771_0[0U]))))),64);
        tracep->fullBit(oldp+22,(((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                  & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1034))));
        tracep->fullBit(oldp+23,(vlSelf->top__DOT__i_cache_io_to_ifu_rvalid));
        tracep->fullIData(oldp+24,((IData)(vlSelf->top__DOT__IFU__DOT__fs_pc)),32);
        tracep->fullBit(oldp+25,(vlSelf->top__DOT__IFU__DOT__fs_valid));
        tracep->fullBit(oldp+26,(vlSelf->top__DOT__IFU__DOT__inst_ready));
        tracep->fullBit(oldp+27,(vlSelf->top__DOT__IDU_io_ds_to_es_valid));
        tracep->fullBit(oldp+28,(vlSelf->top__DOT__EXU_io_es_allowin));
        tracep->fullQData(oldp+29,(vlSelf->top__DOT__IDU__DOT__ds_pc),64);
        tracep->fullIData(oldp+31,(vlSelf->top__DOT__IDU__DOT___ALUop_T_176),32);
        tracep->fullQData(oldp+32,(((1U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                     ? vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data
                                     : vlSelf->top__DOT__IDU__DOT__src1)),64);
        tracep->fullQData(oldp+34,(((IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)
                                     ? vlSelf->top__DOT__IDU__DOT__imm
                                     : vlSelf->top__DOT__Register_io_rdata2)),64);
        tracep->fullCData(oldp+36,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                             >> 7U))),5);
        tracep->fullQData(oldp+37,(((0x3023U == (0x707fU 
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
        tracep->fullBit(oldp+39,(((0x100073U != vlSelf->top__DOT__IDU__DOT__inst) 
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
                                                                   & (0x30200073U 
                                                                      != vlSelf->top__DOT__IDU__DOT__inst)))))))))))))));
        tracep->fullBit(oldp+40,((0x44U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))));
        tracep->fullBit(oldp+41,(((0x3003U == (0x707fU 
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
        tracep->fullCData(oldp+42,(((0x3023U == (0x707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                     ? 0xffU : (IData)(vlSelf->top__DOT__IDU__DOT___Wmask_T_10))),8);
        tracep->fullCData(oldp+43,(((0x2003U == (0x707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                     ? 0U : ((0x3003U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                              ? 1U : 
                                             ((0x4003U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                               ? 2U
                                               : ((0x6003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 3U
                                                   : 
                                                  ((0x1003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst))
                                                     ? 5U
                                                     : 
                                                    ((0x5003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__IDU__DOT__inst))
                                                      ? 6U
                                                      : 0U)))))))),3);
        tracep->fullBit(oldp+44,(vlSelf->top__DOT__EXU__DOT__es_rf_we));
        tracep->fullBit(oldp+45,(vlSelf->top__DOT__LSU_io_ms_rf_we));
        tracep->fullBit(oldp+46,(vlSelf->top__DOT__WBU__DOT__ws_rf_we));
        tracep->fullBit(oldp+47,(vlSelf->top__DOT__EXU__DOT__es_valid));
        tracep->fullBit(oldp+48,(vlSelf->top__DOT__LSU__DOT__ms_valid));
        tracep->fullBit(oldp+49,(vlSelf->top__DOT__WBU__DOT__ws_valid));
        tracep->fullCData(oldp+50,(vlSelf->top__DOT__EXU__DOT__es_rd),5);
        tracep->fullCData(oldp+51,(vlSelf->top__DOT__LSU__DOT__ms_rf_dst),5);
        tracep->fullBit(oldp+52,(vlSelf->top__DOT__IDU__DOT__ds_valid));
        tracep->fullBit(oldp+53,(vlSelf->top__DOT__LSU_io_ms_allowin));
        tracep->fullBit(oldp+54,(vlSelf->top__DOT__EXU_io_es_to_ms_valid));
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__EXU__DOT__es_pc),64);
        tracep->fullQData(oldp+57,((((QData)((IData)(
                                                     vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])))),64);
        tracep->fullQData(oldp+59,(vlSelf->top__DOT__EXU__DOT__store_data),64);
        tracep->fullBit(oldp+61,(vlSelf->top__DOT__EXU__DOT__st_we));
        tracep->fullCData(oldp+62,(vlSelf->top__DOT__EXU__DOT__st_wstrb),8);
        tracep->fullBit(oldp+63,(vlSelf->top__DOT__EXU__DOT__ld_we));
        tracep->fullCData(oldp+64,(vlSelf->top__DOT__EXU__DOT__load_type),3);
        tracep->fullQData(oldp+65,(vlSelf->top__DOT__LSU__DOT__ms_pc),64);
        tracep->fullQData(oldp+67,(((IData)(vlSelf->top__DOT__LSU__DOT__ren)
                                     ? ((6U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata))))
                                         : ((5U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
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
                                             : ((4U 
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
                                                ((3U 
                                                  == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                  ? (QData)((IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata))))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                    ? vlSelf->top__DOT__LSU__DOT__mem_rdata
                                                    : 
                                                   ((0U 
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
        tracep->fullBit(oldp+69,(vlSelf->top__DOT__LSU_io_ms_to_ws_valid));
        tracep->fullBit(oldp+70,(vlSelf->top__DOT__LSU__DOT__ms_rf_we));
        VL_SHIFTR_WWI(512,512,9, __Vtemp2301, vlSelf->top__DOT__d_cache__DOT___GEN_90, 
                      (0x1f8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                 << 3U)));
        VL_SHIFTR_WWI(512,512,9, __Vtemp2302, vlSelf->top__DOT__d_cache__DOT___GEN_138, 
                      (0x1f8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                 << 3U)));
        tracep->fullQData(oldp+71,((((QData)((IData)(
                                                     ((1U 
                                                       == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                        ? 
                                                       __Vtemp2301[1U]
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                         ? 
                                                        __Vtemp2302[1U]
                                                         : 
                                                        Vtop__ConstPool__CONST_93e1b771_0[1U]))
                                                       : 
                                                      Vtop__ConstPool__CONST_93e1b771_0[1U]))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((1U 
                                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                                   ? 
                                                                  ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                                    ? 
                                                                   __Vtemp2301[0U]
                                                                    : 
                                                                   ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                                     ? 
                                                                    __Vtemp2302[0U]
                                                                     : 
                                                                    Vtop__ConstPool__CONST_93e1b771_0[0U]))
                                                                   : 
                                                                  Vtop__ConstPool__CONST_93e1b771_0[0U]))))),64);
        tracep->fullBit(oldp+73,(vlSelf->top__DOT__d_cache_io_to_lsu_rvalid));
        tracep->fullBit(oldp+74,(vlSelf->top__DOT__d_cache_io_to_lsu_wready));
        tracep->fullIData(oldp+75,((IData)(vlSelf->top__DOT__LSU__DOT__maddr)),32);
        tracep->fullBit(oldp+76,(((IData)(vlSelf->top__DOT__LSU__DOT__ren) 
                                  & (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid))));
        tracep->fullBit(oldp+77,(vlSelf->top__DOT__LSU_io_axi_out_awvalid));
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__LSU__DOT__store_data),64);
        tracep->fullCData(oldp+80,(vlSelf->top__DOT__LSU__DOT__wstrb),8);
        tracep->fullBit(oldp+81,(vlSelf->top__DOT__LSU__DOT__wen));
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__WBU__DOT__ws_pc),64);
        tracep->fullIData(oldp+84,((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1043)),32);
        tracep->fullCData(oldp+85,(vlSelf->top__DOT__i_cache__DOT___GEN_1044),8);
        tracep->fullBit(oldp+86,(vlSelf->top__DOT__i_cache_io_to_axi_arvalid));
        tracep->fullBit(oldp+87,(vlSelf->top__DOT__i_cache_io_to_axi_rready));
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata),64);
        tracep->fullBit(oldp+90,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast));
        tracep->fullBit(oldp+91,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid));
        tracep->fullIData(oldp+92,((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2086)),32);
        tracep->fullCData(oldp+93,(vlSelf->top__DOT__d_cache__DOT___GEN_2087),8);
        tracep->fullBit(oldp+94,(vlSelf->top__DOT__d_cache_io_to_axi_arvalid));
        tracep->fullBit(oldp+95,(vlSelf->top__DOT__d_cache_io_to_axi_rready));
        tracep->fullIData(oldp+96,(vlSelf->top__DOT__d_cache_io_to_axi_awaddr),32);
        tracep->fullCData(oldp+97,(vlSelf->top__DOT__d_cache_io_to_axi_awlen),8);
        tracep->fullBit(oldp+98,(vlSelf->top__DOT__d_cache_io_to_axi_awvalid));
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__d_cache_io_to_axi_wdata),64);
        tracep->fullCData(oldp+101,(vlSelf->top__DOT__d_cache_io_to_axi_wstrb),8);
        tracep->fullBit(oldp+102,(vlSelf->top__DOT__d_cache_io_to_axi_wvalid));
        tracep->fullBit(oldp+103,(vlSelf->top__DOT__d_cache_io_to_axi_bready));
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata),64);
        tracep->fullBit(oldp+106,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rlast));
        tracep->fullBit(oldp+107,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid));
        tracep->fullBit(oldp+108,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_wready));
        tracep->fullBit(oldp+109,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid));
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata),64);
        tracep->fullBit(oldp+112,(vlSelf->top__DOT__axi_io_axi_out_rlast));
        tracep->fullBit(oldp+113,(vlSelf->top__DOT__axi__DOT__axi_rvalid));
        tracep->fullBit(oldp+114,(vlSelf->top__DOT__axi__DOT__axi_wready));
        tracep->fullBit(oldp+115,(vlSelf->top__DOT__axi__DOT__axi_bvalid));
        tracep->fullIData(oldp+116,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                      ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2086)
                                          : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2086)
                                              : ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1043)
                                                  : 0U)))
                                      : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1043)
                                          : ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2086)
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2086)
                                                  : 0U))))),32);
        tracep->fullCData(oldp+117,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                      ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2087)
                                          : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2087)
                                              : ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1044)
                                                  : 0U)))
                                      : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1044)
                                          : ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2087)
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2087)
                                                  : 0U))))),8);
        tracep->fullBit(oldp+118,(vlSelf->top__DOT__arbiter_io_axi_out_arvalid));
        tracep->fullBit(oldp+119,(vlSelf->top__DOT__arbiter_io_axi_out_rready));
        tracep->fullIData(oldp+120,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullCData(oldp+121,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullBit(oldp+122,(vlSelf->top__DOT__arbiter_io_axi_out_awvalid));
        tracep->fullQData(oldp+123,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullCData(oldp+125,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullBit(oldp+126,(vlSelf->top__DOT__arbiter_io_axi_out_wvalid));
        tracep->fullBit(oldp+127,(vlSelf->top__DOT__arbiter_io_axi_out_bready));
        tracep->fullIData(oldp+128,((2U == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))),32);
        tracep->fullIData(oldp+129,((0x3dU == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))),32);
        tracep->fullQData(oldp+130,(((IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)
                                      ? vlSelf->top__DOT__WBU__DOT__ws_pc
                                      : ((IData)(vlSelf->top__DOT__LSU__DOT__ms_valid)
                                          ? vlSelf->top__DOT__LSU__DOT__ms_pc
                                          : ((IData)(vlSelf->top__DOT__EXU__DOT__es_valid)
                                              ? vlSelf->top__DOT__EXU__DOT__es_pc
                                              : ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)
                                                  ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                                  : vlSelf->top__DOT__IFU__DOT__fs_pc))))),64);
        tracep->fullBit(oldp+132,(vlSelf->top__DOT__diff_step));
        tracep->fullQData(oldp+133,(vlSelf->top__DOT__Register__DOT__Reg[0]),64);
        tracep->fullQData(oldp+135,(vlSelf->top__DOT__Register__DOT__Reg[1]),64);
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__Register__DOT__Reg[2]),64);
        tracep->fullQData(oldp+139,(vlSelf->top__DOT__Register__DOT__Reg[3]),64);
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__Register__DOT__Reg[4]),64);
        tracep->fullQData(oldp+143,(vlSelf->top__DOT__Register__DOT__Reg[5]),64);
        tracep->fullQData(oldp+145,(vlSelf->top__DOT__Register__DOT__Reg[6]),64);
        tracep->fullQData(oldp+147,(vlSelf->top__DOT__Register__DOT__Reg[7]),64);
        tracep->fullQData(oldp+149,(vlSelf->top__DOT__Register__DOT__Reg[8]),64);
        tracep->fullQData(oldp+151,(vlSelf->top__DOT__Register__DOT__Reg[9]),64);
        tracep->fullQData(oldp+153,(vlSelf->top__DOT__Register__DOT__Reg[10]),64);
        tracep->fullQData(oldp+155,(vlSelf->top__DOT__Register__DOT__Reg[11]),64);
        tracep->fullQData(oldp+157,(vlSelf->top__DOT__Register__DOT__Reg[12]),64);
        tracep->fullQData(oldp+159,(vlSelf->top__DOT__Register__DOT__Reg[13]),64);
        tracep->fullQData(oldp+161,(vlSelf->top__DOT__Register__DOT__Reg[14]),64);
        tracep->fullQData(oldp+163,(vlSelf->top__DOT__Register__DOT__Reg[15]),64);
        tracep->fullQData(oldp+165,(vlSelf->top__DOT__Register__DOT__Reg[16]),64);
        tracep->fullQData(oldp+167,(vlSelf->top__DOT__Register__DOT__Reg[17]),64);
        tracep->fullQData(oldp+169,(vlSelf->top__DOT__Register__DOT__Reg[18]),64);
        tracep->fullQData(oldp+171,(vlSelf->top__DOT__Register__DOT__Reg[19]),64);
        tracep->fullQData(oldp+173,(vlSelf->top__DOT__Register__DOT__Reg[20]),64);
        tracep->fullQData(oldp+175,(vlSelf->top__DOT__Register__DOT__Reg[21]),64);
        tracep->fullQData(oldp+177,(vlSelf->top__DOT__Register__DOT__Reg[22]),64);
        tracep->fullQData(oldp+179,(vlSelf->top__DOT__Register__DOT__Reg[23]),64);
        tracep->fullQData(oldp+181,(vlSelf->top__DOT__Register__DOT__Reg[24]),64);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT__Register__DOT__Reg[25]),64);
        tracep->fullQData(oldp+185,(vlSelf->top__DOT__Register__DOT__Reg[26]),64);
        tracep->fullQData(oldp+187,(vlSelf->top__DOT__Register__DOT__Reg[27]),64);
        tracep->fullQData(oldp+189,(vlSelf->top__DOT__Register__DOT__Reg[28]),64);
        tracep->fullQData(oldp+191,(vlSelf->top__DOT__Register__DOT__Reg[29]),64);
        tracep->fullQData(oldp+193,(vlSelf->top__DOT__Register__DOT__Reg[30]),64);
        tracep->fullQData(oldp+195,(vlSelf->top__DOT__Register__DOT__Reg[31]),64);
        tracep->fullQData(oldp+197,(vlSelf->top__DOT__Register__DOT__Reg
                                    [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+199,(vlSelf->top__DOT__Register__DOT__Reg
                                    [vlSelf->top__DOT__IDU_io_raddr2]),64);
        tracep->fullQData(oldp+201,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0U]),64);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__Register__DOT__Reg
                                    [1U]),64);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__Register__DOT__Reg
                                    [2U]),64);
        tracep->fullQData(oldp+207,(vlSelf->top__DOT__Register__DOT__Reg
                                    [3U]),64);
        tracep->fullQData(oldp+209,(vlSelf->top__DOT__Register__DOT__Reg
                                    [4U]),64);
        tracep->fullQData(oldp+211,(vlSelf->top__DOT__Register__DOT__Reg
                                    [5U]),64);
        tracep->fullQData(oldp+213,(vlSelf->top__DOT__Register__DOT__Reg
                                    [6U]),64);
        tracep->fullQData(oldp+215,(vlSelf->top__DOT__Register__DOT__Reg
                                    [7U]),64);
        tracep->fullQData(oldp+217,(vlSelf->top__DOT__Register__DOT__Reg
                                    [8U]),64);
        tracep->fullQData(oldp+219,(vlSelf->top__DOT__Register__DOT__Reg
                                    [9U]),64);
        tracep->fullQData(oldp+221,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xaU]),64);
        tracep->fullQData(oldp+223,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xbU]),64);
        tracep->fullQData(oldp+225,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xcU]),64);
        tracep->fullQData(oldp+227,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xdU]),64);
        tracep->fullQData(oldp+229,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xeU]),64);
        tracep->fullQData(oldp+231,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xfU]),64);
        tracep->fullQData(oldp+233,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x10U]),64);
        tracep->fullQData(oldp+235,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x11U]),64);
        tracep->fullQData(oldp+237,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x12U]),64);
        tracep->fullQData(oldp+239,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x13U]),64);
        tracep->fullQData(oldp+241,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x14U]),64);
        tracep->fullQData(oldp+243,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x15U]),64);
        tracep->fullQData(oldp+245,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x16U]),64);
        tracep->fullQData(oldp+247,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x17U]),64);
        tracep->fullQData(oldp+249,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x18U]),64);
        tracep->fullQData(oldp+251,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x19U]),64);
        tracep->fullQData(oldp+253,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1aU]),64);
        tracep->fullQData(oldp+255,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1bU]),64);
        tracep->fullQData(oldp+257,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1cU]),64);
        tracep->fullQData(oldp+259,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1dU]),64);
        tracep->fullQData(oldp+261,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1eU]),64);
        tracep->fullQData(oldp+263,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1fU]),64);
        tracep->fullBit(oldp+265,((((IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we) 
                                    & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)) 
                                   & (0U != (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_dst)))));
        tracep->fullQData(oldp+266,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0]),64);
        tracep->fullQData(oldp+268,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[1]),64);
        tracep->fullQData(oldp+270,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[2]),64);
        tracep->fullQData(oldp+272,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[3]),64);
        tracep->fullQData(oldp+274,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[4]),64);
        tracep->fullQData(oldp+276,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[5]),64);
        tracep->fullQData(oldp+278,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[6]),64);
        tracep->fullQData(oldp+280,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[7]),64);
        tracep->fullQData(oldp+282,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[8]),64);
        tracep->fullQData(oldp+284,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[9]),64);
        tracep->fullQData(oldp+286,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[10]),64);
        tracep->fullQData(oldp+288,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[11]),64);
        tracep->fullQData(oldp+290,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[12]),64);
        tracep->fullQData(oldp+292,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[13]),64);
        tracep->fullQData(oldp+294,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[14]),64);
        tracep->fullQData(oldp+296,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[15]),64);
        tracep->fullQData(oldp+298,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[16]),64);
        tracep->fullQData(oldp+300,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[17]),64);
        tracep->fullQData(oldp+302,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[18]),64);
        tracep->fullQData(oldp+304,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[19]),64);
        tracep->fullQData(oldp+306,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[20]),64);
        tracep->fullQData(oldp+308,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[21]),64);
        tracep->fullQData(oldp+310,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[22]),64);
        tracep->fullQData(oldp+312,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[23]),64);
        tracep->fullQData(oldp+314,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[24]),64);
        tracep->fullQData(oldp+316,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[25]),64);
        tracep->fullQData(oldp+318,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[26]),64);
        tracep->fullQData(oldp+320,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[27]),64);
        tracep->fullQData(oldp+322,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[28]),64);
        tracep->fullQData(oldp+324,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[29]),64);
        tracep->fullQData(oldp+326,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[30]),64);
        tracep->fullQData(oldp+328,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[31]),64);
        tracep->fullBit(oldp+330,(vlSelf->top__DOT__IFU__DOT__fs_ready_go));
        tracep->fullBit(oldp+331,(((IData)(vlSelf->top__DOT__IFU__DOT__fs_valid) 
                                   & (IData)(vlSelf->top__DOT__IFU__DOT__fs_ready_go))));
        tracep->fullQData(oldp+332,((4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc)),64);
        tracep->fullBit(oldp+334,(vlSelf->top__DOT__IFU__DOT__fs_allowin));
        tracep->fullBit(oldp+335,(((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
                                   & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
        tracep->fullBit(oldp+336,((((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
                                    >> 1U) & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
        tracep->fullCData(oldp+337,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                      ? 1U : ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                               ? (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)
                                               : 0U))),2);
        tracep->fullQData(oldp+338,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
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
        tracep->fullCData(oldp+340,(((2U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                      ? 0U : ((0x3eU 
                                               == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))
                                               ? 1U
                                               : (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)))),2);
        tracep->fullQData(oldp+341,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data),64);
        tracep->fullIData(oldp+343,(vlSelf->top__DOT__IDU__DOT__inst),32);
        tracep->fullBit(oldp+344,(vlSelf->top__DOT__IDU__DOT__br_taken));
        tracep->fullBit(oldp+345,(vlSelf->top__DOT__IDU__DOT__src1_is_pc));
        tracep->fullIData(oldp+346,(vlSelf->top__DOT__IDU__DOT___inst_type_T_188),32);
        tracep->fullCData(oldp+347,(vlSelf->top__DOT__IDU__DOT__csr_write),2);
        tracep->fullBit(oldp+348,(vlSelf->top__DOT__IDU__DOT__src2_is_imm));
        tracep->fullCData(oldp+349,(vlSelf->top__DOT__IDU__DOT__rs2),5);
        tracep->fullBit(oldp+350,(vlSelf->top__DOT__IDU__DOT__conflict));
        tracep->fullBit(oldp+351,((1U & (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict)))));
        tracep->fullBit(oldp+352,(vlSelf->top__DOT__IDU__DOT__br_taken_cancel));
        tracep->fullSData(oldp+353,((vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0x14U)),12);
        tracep->fullIData(oldp+354,(((0x80000U & (vlSelf->top__DOT__IDU__DOT__inst 
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
        tracep->fullIData(oldp+355,((vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+356,(((0xfe0U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 7U)))),12);
        tracep->fullSData(oldp+357,(((0x800U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x14U)) 
                                     | ((0x400U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                   << 3U)) 
                                        | ((0x3f0U 
                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0x15U)) 
                                           | (0xfU 
                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 8U)))))),12);
        tracep->fullQData(oldp+358,(vlSelf->top__DOT__IDU__DOT__imm),64);
        tracep->fullCData(oldp+360,(vlSelf->top__DOT__IDU__DOT__csr_index),2);
        tracep->fullQData(oldp+361,(((0x1073U == (0x707fU 
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
        tracep->fullQData(oldp+363,(vlSelf->top__DOT__IDU__DOT__src1),64);
        tracep->fullQData(oldp+365,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[0]),64);
        tracep->fullQData(oldp+367,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[1]),64);
        tracep->fullQData(oldp+369,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[2]),64);
        tracep->fullQData(oldp+371,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[3]),64);
        tracep->fullQData(oldp+373,(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value),64);
        tracep->fullQData(oldp+375,(vlSelf->top__DOT__EXU__DOT__src2_value),64);
        tracep->fullIData(oldp+377,(vlSelf->top__DOT__EXU__DOT__ALUop),32);
        tracep->fullBit(oldp+378,(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy));
        tracep->fullQData(oldp+379,(vlSelf->top__DOT__EXU__DOT__src1_value),64);
        tracep->fullBit(oldp+381,((1U & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy)))));
        tracep->fullBit(oldp+382,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_mul_valid));
        tracep->fullBit(oldp+383,((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)));
        tracep->fullBit(oldp+384,(((0U != (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state)) 
                                   & ((1U != (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state)) 
                                      & (2U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))))));
        tracep->fullIData(oldp+385,(((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
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
        tracep->fullIData(oldp+386,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_result_lo),32);
        tracep->fullBit(oldp+387,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_valid));
        tracep->fullBit(oldp+388,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw));
        tracep->fullBit(oldp+389,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed));
        tracep->fullBit(oldp+390,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start) 
                                   & VL_GTES_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num))));
        tracep->fullQData(oldp+391,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_quotient),64);
        tracep->fullQData(oldp+393,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder),64);
        tracep->fullBit(oldp+395,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__mul_valid));
        tracep->fullBit(oldp+396,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__div_valid));
        tracep->fullQData(oldp+397,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res),64);
        tracep->fullQData(oldp+399,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sub_res),64);
        tracep->fullQData(oldp+401,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sra_res),64);
        tracep->fullQData(oldp+403,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),64);
        VL_EXTEND_WQ(127,64, __Vtemp2308, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
        VL_SHIFTL_WWI(127,127,6, __Vtemp2309, __Vtemp2308, 
                      (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
        __Vtemp2310[0U] = __Vtemp2309[0U];
        __Vtemp2310[1U] = __Vtemp2309[1U];
        __Vtemp2310[2U] = __Vtemp2309[2U];
        __Vtemp2310[3U] = (0x7fffffffU & __Vtemp2309[3U]);
        tracep->fullWData(oldp+405,(__Vtemp2310),127);
        tracep->fullIData(oldp+409,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value), 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),32);
        tracep->fullIData(oldp+410,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__srlw_res),32);
        tracep->fullQData(oldp+411,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sllw_res),63);
        tracep->fullQData(oldp+413,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     | vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+415,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     ^ vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+417,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     & vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+419,((((QData)((IData)(
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
        tracep->fullIData(oldp+421,((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_quotient)),32);
        tracep->fullIData(oldp+422,((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder)),32);
        tracep->fullWData(oldp+423,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res),127);
        tracep->fullCData(oldp+427,((7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])),3);
        tracep->fullQData(oldp+428,((((QData)((IData)(
                                                      vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))),64);
        tracep->fullBit(oldp+430,(((6U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])) 
                                   | ((5U == (7U & 
                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])) 
                                      | (4U == (7U 
                                                & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))))));
        VL_EXTEND_WQ(65,64, __Vtemp2313, (~ (((QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
        VL_EXTEND_WQ(65,64, __Vtemp2314, (~ (((QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
        VL_EXTEND_WQ(65,64, __Vtemp2318, ((2U == (7U 
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
        __Vtemp2322[1U] = ((4U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
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
                                : __Vtemp2318[1U]));
        __Vtemp2329[2U] = ((7U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                            ? 0U : (1U & ((6U == (7U 
                                                  & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                           ? __Vtemp2313[2U]
                                           : ((5U == 
                                               (7U 
                                                & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                               ? __Vtemp2314[2U]
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
                                                   __Vtemp2318[2U]))))));
        tracep->fullQData(oldp+431,((((QData)((IData)(
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
                                                        __Vtemp2313[1U]
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (7U 
                                                           & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                          ? 
                                                         __Vtemp2314[1U]
                                                          : 
                                                         __Vtemp2322[1U]))))) 
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
                                                                    __Vtemp2313[0U]
                                                                     : 
                                                                    ((5U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                                      ? 
                                                                     __Vtemp2314[0U]
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
                                                                       __Vtemp2318[0U]))))))))),64);
        tracep->fullBit(oldp+433,((1U & ((IData)((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                                  >> 0x3fU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__EXU__DOT__src2_value 
                                                    >> 0x3fU))))));
        tracep->fullQData(oldp+434,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__res),64);
        tracep->fullCData(oldp+436,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state),2);
        tracep->fullWData(oldp+437,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1),128);
        tracep->fullWData(oldp+441,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2),65);
        tracep->fullQData(oldp+444,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32),64);
        tracep->fullQData(oldp+446,(((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)
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
        __Vtemp2330[0U] = (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32);
        __Vtemp2330[1U] = (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                   >> 0x20U));
        __Vtemp2330[2U] = (IData)(((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                  >> 0x3fU)))
                                    ? 0xffffffffffffffffULL
                                    : 0ULL));
        __Vtemp2330[3U] = (IData)((((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                   >> 0x3fU)))
                                     ? 0xffffffffffffffffULL
                                     : 0ULL) >> 0x20U));
        tracep->fullWData(oldp+448,(__Vtemp2330),128);
        tracep->fullQData(oldp+452,((((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)
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
        tracep->fullBit(oldp+454,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg));
        tracep->fullBit(oldp+455,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg));
        tracep->fullBit(oldp+456,((((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg) 
                                    & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg))) 
                                   | ((~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)) 
                                      & (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)))));
        tracep->fullQData(oldp+457,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s),64);
        tracep->fullQData(oldp+459,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s),64);
        tracep->fullQData(oldp+461,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                      ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                      : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)),64);
        tracep->fullQData(oldp+463,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                      ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                      : vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+465,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                      ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)
                                          ? (1ULL + 
                                             (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s))
                                          : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s)
                                      : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                          ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                          : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))),64);
        tracep->fullQData(oldp+467,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                      ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)
                                          ? (1ULL + 
                                             (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s))
                                          : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s)
                                      : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                          ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                          : vlSelf->top__DOT__EXU__DOT__src2_value))),64);
        VL_EXTEND_WQ(65,64, __Vtemp2331, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                           ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)
                                               ? (1ULL 
                                                  + 
                                                  (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s))
                                               : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s)
                                           : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                               ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                               : vlSelf->top__DOT__EXU__DOT__src2_value)));
        tracep->fullWData(oldp+469,(__Vtemp2331),65);
        tracep->fullWData(oldp+472,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand),128);
        tracep->fullBit(oldp+476,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start));
        tracep->fullQData(oldp+477,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient),64);
        tracep->fullIData(oldp+479,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num),32);
        VL_EXTEND_WQ(128,64, __Vtemp2332, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                            ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)
                                                ? (1ULL 
                                                   + 
                                                   (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s))
                                                : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s)
                                            : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                                ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                                : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)));
        tracep->fullWData(oldp+480,(__Vtemp2332),128);
        tracep->fullWData(oldp+484,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res),65);
        __Vtemp2333[0U] = 0U;
        __Vtemp2333[1U] = (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                           << 0x1fU);
        __Vtemp2333[2U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                            >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                      << 0x1fU));
        __Vtemp2333[3U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                            >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                      << 0x1fU));
        tracep->fullWData(oldp+487,(__Vtemp2333),128);
        if ((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])) {
            __Vtemp2339[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U];
            __Vtemp2339[1U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U];
            __Vtemp2339[2U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U];
            __Vtemp2339[3U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U];
        } else {
            __Vtemp2339[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U];
            __Vtemp2339[1U] = ((0x7fffffffU & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U]) 
                               | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                                  << 0x1fU));
            __Vtemp2339[2U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                                >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                          << 0x1fU));
            __Vtemp2339[3U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                          << 0x1fU));
        }
        tracep->fullWData(oldp+491,(__Vtemp2339),128);
        tracep->fullBit(oldp+495,(vlSelf->top__DOT__LSU__DOT__ms_ready_go));
        tracep->fullQData(oldp+496,(vlSelf->top__DOT__LSU__DOT__ms_res),64);
        tracep->fullBit(oldp+498,(vlSelf->top__DOT__LSU__DOT__ren));
        tracep->fullQData(oldp+499,(vlSelf->top__DOT__LSU__DOT__maddr),64);
        tracep->fullCData(oldp+501,(vlSelf->top__DOT__LSU__DOT__load_type),3);
        tracep->fullQData(oldp+502,(vlSelf->top__DOT__LSU__DOT__mem_rdata),64);
        tracep->fullQData(oldp+504,(((6U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata))))
                                      : ((5U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
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
                                          : ((4U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
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
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                  ? (QData)((IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata))))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                    ? vlSelf->top__DOT__LSU__DOT__mem_rdata
                                                    : 
                                                   ((0U 
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
        tracep->fullCData(oldp+506,(vlSelf->top__DOT__arbiter__DOT__state),2);
        tracep->fullWData(oldp+507,(vlSelf->top__DOT__i_cache__DOT__ram_0_0),512);
        tracep->fullWData(oldp+523,(vlSelf->top__DOT__i_cache__DOT__ram_0_1),512);
        tracep->fullWData(oldp+539,(vlSelf->top__DOT__i_cache__DOT__ram_0_2),512);
        tracep->fullWData(oldp+555,(vlSelf->top__DOT__i_cache__DOT__ram_0_3),512);
        tracep->fullWData(oldp+571,(vlSelf->top__DOT__i_cache__DOT__ram_0_4),512);
        tracep->fullWData(oldp+587,(vlSelf->top__DOT__i_cache__DOT__ram_0_5),512);
        tracep->fullWData(oldp+603,(vlSelf->top__DOT__i_cache__DOT__ram_0_6),512);
        tracep->fullWData(oldp+619,(vlSelf->top__DOT__i_cache__DOT__ram_0_7),512);
        tracep->fullWData(oldp+635,(vlSelf->top__DOT__i_cache__DOT__ram_0_8),512);
        tracep->fullWData(oldp+651,(vlSelf->top__DOT__i_cache__DOT__ram_0_9),512);
        tracep->fullWData(oldp+667,(vlSelf->top__DOT__i_cache__DOT__ram_0_10),512);
        tracep->fullWData(oldp+683,(vlSelf->top__DOT__i_cache__DOT__ram_0_11),512);
        tracep->fullWData(oldp+699,(vlSelf->top__DOT__i_cache__DOT__ram_0_12),512);
        tracep->fullWData(oldp+715,(vlSelf->top__DOT__i_cache__DOT__ram_0_13),512);
        tracep->fullWData(oldp+731,(vlSelf->top__DOT__i_cache__DOT__ram_0_14),512);
        tracep->fullWData(oldp+747,(vlSelf->top__DOT__i_cache__DOT__ram_0_15),512);
        tracep->fullWData(oldp+763,(vlSelf->top__DOT__i_cache__DOT__ram_1_0),512);
        tracep->fullWData(oldp+779,(vlSelf->top__DOT__i_cache__DOT__ram_1_1),512);
        tracep->fullWData(oldp+795,(vlSelf->top__DOT__i_cache__DOT__ram_1_2),512);
        tracep->fullWData(oldp+811,(vlSelf->top__DOT__i_cache__DOT__ram_1_3),512);
        tracep->fullWData(oldp+827,(vlSelf->top__DOT__i_cache__DOT__ram_1_4),512);
        tracep->fullWData(oldp+843,(vlSelf->top__DOT__i_cache__DOT__ram_1_5),512);
        tracep->fullWData(oldp+859,(vlSelf->top__DOT__i_cache__DOT__ram_1_6),512);
        tracep->fullWData(oldp+875,(vlSelf->top__DOT__i_cache__DOT__ram_1_7),512);
        tracep->fullWData(oldp+891,(vlSelf->top__DOT__i_cache__DOT__ram_1_8),512);
        tracep->fullWData(oldp+907,(vlSelf->top__DOT__i_cache__DOT__ram_1_9),512);
        tracep->fullWData(oldp+923,(vlSelf->top__DOT__i_cache__DOT__ram_1_10),512);
        tracep->fullWData(oldp+939,(vlSelf->top__DOT__i_cache__DOT__ram_1_11),512);
        tracep->fullWData(oldp+955,(vlSelf->top__DOT__i_cache__DOT__ram_1_12),512);
        tracep->fullWData(oldp+971,(vlSelf->top__DOT__i_cache__DOT__ram_1_13),512);
        tracep->fullWData(oldp+987,(vlSelf->top__DOT__i_cache__DOT__ram_1_14),512);
        tracep->fullWData(oldp+1003,(vlSelf->top__DOT__i_cache__DOT__ram_1_15),512);
        tracep->fullIData(oldp+1019,(vlSelf->top__DOT__i_cache__DOT__tag_0_0),32);
        tracep->fullIData(oldp+1020,(vlSelf->top__DOT__i_cache__DOT__tag_0_1),32);
        tracep->fullIData(oldp+1021,(vlSelf->top__DOT__i_cache__DOT__tag_0_2),32);
        tracep->fullIData(oldp+1022,(vlSelf->top__DOT__i_cache__DOT__tag_0_3),32);
        tracep->fullIData(oldp+1023,(vlSelf->top__DOT__i_cache__DOT__tag_0_4),32);
        tracep->fullIData(oldp+1024,(vlSelf->top__DOT__i_cache__DOT__tag_0_5),32);
        tracep->fullIData(oldp+1025,(vlSelf->top__DOT__i_cache__DOT__tag_0_6),32);
        tracep->fullIData(oldp+1026,(vlSelf->top__DOT__i_cache__DOT__tag_0_7),32);
        tracep->fullIData(oldp+1027,(vlSelf->top__DOT__i_cache__DOT__tag_0_8),32);
        tracep->fullIData(oldp+1028,(vlSelf->top__DOT__i_cache__DOT__tag_0_9),32);
        tracep->fullIData(oldp+1029,(vlSelf->top__DOT__i_cache__DOT__tag_0_10),32);
        tracep->fullIData(oldp+1030,(vlSelf->top__DOT__i_cache__DOT__tag_0_11),32);
        tracep->fullIData(oldp+1031,(vlSelf->top__DOT__i_cache__DOT__tag_0_12),32);
        tracep->fullIData(oldp+1032,(vlSelf->top__DOT__i_cache__DOT__tag_0_13),32);
        tracep->fullIData(oldp+1033,(vlSelf->top__DOT__i_cache__DOT__tag_0_14),32);
        tracep->fullIData(oldp+1034,(vlSelf->top__DOT__i_cache__DOT__tag_0_15),32);
        tracep->fullIData(oldp+1035,(vlSelf->top__DOT__i_cache__DOT__tag_1_0),32);
        tracep->fullIData(oldp+1036,(vlSelf->top__DOT__i_cache__DOT__tag_1_1),32);
        tracep->fullIData(oldp+1037,(vlSelf->top__DOT__i_cache__DOT__tag_1_2),32);
        tracep->fullIData(oldp+1038,(vlSelf->top__DOT__i_cache__DOT__tag_1_3),32);
        tracep->fullIData(oldp+1039,(vlSelf->top__DOT__i_cache__DOT__tag_1_4),32);
        tracep->fullIData(oldp+1040,(vlSelf->top__DOT__i_cache__DOT__tag_1_5),32);
        tracep->fullIData(oldp+1041,(vlSelf->top__DOT__i_cache__DOT__tag_1_6),32);
        tracep->fullIData(oldp+1042,(vlSelf->top__DOT__i_cache__DOT__tag_1_7),32);
        tracep->fullIData(oldp+1043,(vlSelf->top__DOT__i_cache__DOT__tag_1_8),32);
        tracep->fullIData(oldp+1044,(vlSelf->top__DOT__i_cache__DOT__tag_1_9),32);
        tracep->fullIData(oldp+1045,(vlSelf->top__DOT__i_cache__DOT__tag_1_10),32);
        tracep->fullIData(oldp+1046,(vlSelf->top__DOT__i_cache__DOT__tag_1_11),32);
        tracep->fullIData(oldp+1047,(vlSelf->top__DOT__i_cache__DOT__tag_1_12),32);
        tracep->fullIData(oldp+1048,(vlSelf->top__DOT__i_cache__DOT__tag_1_13),32);
        tracep->fullIData(oldp+1049,(vlSelf->top__DOT__i_cache__DOT__tag_1_14),32);
        tracep->fullIData(oldp+1050,(vlSelf->top__DOT__i_cache__DOT__tag_1_15),32);
        tracep->fullBit(oldp+1051,(vlSelf->top__DOT__i_cache__DOT__valid_0_0));
        tracep->fullBit(oldp+1052,(vlSelf->top__DOT__i_cache__DOT__valid_0_1));
        tracep->fullBit(oldp+1053,(vlSelf->top__DOT__i_cache__DOT__valid_0_2));
        tracep->fullBit(oldp+1054,(vlSelf->top__DOT__i_cache__DOT__valid_0_3));
        tracep->fullBit(oldp+1055,(vlSelf->top__DOT__i_cache__DOT__valid_0_4));
        tracep->fullBit(oldp+1056,(vlSelf->top__DOT__i_cache__DOT__valid_0_5));
        tracep->fullBit(oldp+1057,(vlSelf->top__DOT__i_cache__DOT__valid_0_6));
        tracep->fullBit(oldp+1058,(vlSelf->top__DOT__i_cache__DOT__valid_0_7));
        tracep->fullBit(oldp+1059,(vlSelf->top__DOT__i_cache__DOT__valid_0_8));
        tracep->fullBit(oldp+1060,(vlSelf->top__DOT__i_cache__DOT__valid_0_9));
        tracep->fullBit(oldp+1061,(vlSelf->top__DOT__i_cache__DOT__valid_0_10));
        tracep->fullBit(oldp+1062,(vlSelf->top__DOT__i_cache__DOT__valid_0_11));
        tracep->fullBit(oldp+1063,(vlSelf->top__DOT__i_cache__DOT__valid_0_12));
        tracep->fullBit(oldp+1064,(vlSelf->top__DOT__i_cache__DOT__valid_0_13));
        tracep->fullBit(oldp+1065,(vlSelf->top__DOT__i_cache__DOT__valid_0_14));
        tracep->fullBit(oldp+1066,(vlSelf->top__DOT__i_cache__DOT__valid_0_15));
        tracep->fullBit(oldp+1067,(vlSelf->top__DOT__i_cache__DOT__valid_1_0));
        tracep->fullBit(oldp+1068,(vlSelf->top__DOT__i_cache__DOT__valid_1_1));
        tracep->fullBit(oldp+1069,(vlSelf->top__DOT__i_cache__DOT__valid_1_2));
        tracep->fullBit(oldp+1070,(vlSelf->top__DOT__i_cache__DOT__valid_1_3));
        tracep->fullBit(oldp+1071,(vlSelf->top__DOT__i_cache__DOT__valid_1_4));
        tracep->fullBit(oldp+1072,(vlSelf->top__DOT__i_cache__DOT__valid_1_5));
        tracep->fullBit(oldp+1073,(vlSelf->top__DOT__i_cache__DOT__valid_1_6));
        tracep->fullBit(oldp+1074,(vlSelf->top__DOT__i_cache__DOT__valid_1_7));
        tracep->fullBit(oldp+1075,(vlSelf->top__DOT__i_cache__DOT__valid_1_8));
        tracep->fullBit(oldp+1076,(vlSelf->top__DOT__i_cache__DOT__valid_1_9));
        tracep->fullBit(oldp+1077,(vlSelf->top__DOT__i_cache__DOT__valid_1_10));
        tracep->fullBit(oldp+1078,(vlSelf->top__DOT__i_cache__DOT__valid_1_11));
        tracep->fullBit(oldp+1079,(vlSelf->top__DOT__i_cache__DOT__valid_1_12));
        tracep->fullBit(oldp+1080,(vlSelf->top__DOT__i_cache__DOT__valid_1_13));
        tracep->fullBit(oldp+1081,(vlSelf->top__DOT__i_cache__DOT__valid_1_14));
        tracep->fullBit(oldp+1082,(vlSelf->top__DOT__i_cache__DOT__valid_1_15));
        tracep->fullBit(oldp+1083,(vlSelf->top__DOT__i_cache__DOT__way0_hit));
        tracep->fullBit(oldp+1084,(vlSelf->top__DOT__i_cache__DOT__way1_hit));
        tracep->fullCData(oldp+1085,(vlSelf->top__DOT__i_cache__DOT__unuse_way),2);
        tracep->fullQData(oldp+1086,(vlSelf->top__DOT__i_cache__DOT__receive_data_0),64);
        tracep->fullQData(oldp+1088,(vlSelf->top__DOT__i_cache__DOT__receive_data_1),64);
        tracep->fullQData(oldp+1090,(vlSelf->top__DOT__i_cache__DOT__receive_data_2),64);
        tracep->fullQData(oldp+1092,(vlSelf->top__DOT__i_cache__DOT__receive_data_3),64);
        tracep->fullQData(oldp+1094,(vlSelf->top__DOT__i_cache__DOT__receive_data_4),64);
        tracep->fullQData(oldp+1096,(vlSelf->top__DOT__i_cache__DOT__receive_data_5),64);
        tracep->fullQData(oldp+1098,(vlSelf->top__DOT__i_cache__DOT__receive_data_6),64);
        tracep->fullQData(oldp+1100,(vlSelf->top__DOT__i_cache__DOT__receive_data_7),64);
        tracep->fullCData(oldp+1102,(vlSelf->top__DOT__i_cache__DOT__receive_num),3);
        tracep->fullBit(oldp+1103,(vlSelf->top__DOT__i_cache__DOT__quene));
        tracep->fullCData(oldp+1104,((0x3fU & (IData)(vlSelf->top__DOT__IFU__DOT__fs_pc))),6);
        tracep->fullCData(oldp+1105,((0xfU & (IData)(
                                                     (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                      >> 6U)))),4);
        tracep->fullIData(oldp+1106,((0x3fffffU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 0xaU)))),22);
        tracep->fullSData(oldp+1107,((0x1f8U & ((IData)(vlSelf->top__DOT__IFU__DOT__fs_pc) 
                                                << 3U))),9);
        tracep->fullCData(oldp+1108,(vlSelf->top__DOT__i_cache__DOT__state),3);
        tracep->fullWData(oldp+1109,(vlSelf->top__DOT__d_cache__DOT__ram_0_0),512);
        tracep->fullWData(oldp+1125,(vlSelf->top__DOT__d_cache__DOT__ram_0_1),512);
        tracep->fullWData(oldp+1141,(vlSelf->top__DOT__d_cache__DOT__ram_0_2),512);
        tracep->fullWData(oldp+1157,(vlSelf->top__DOT__d_cache__DOT__ram_0_3),512);
        tracep->fullWData(oldp+1173,(vlSelf->top__DOT__d_cache__DOT__ram_0_4),512);
        tracep->fullWData(oldp+1189,(vlSelf->top__DOT__d_cache__DOT__ram_0_5),512);
        tracep->fullWData(oldp+1205,(vlSelf->top__DOT__d_cache__DOT__ram_0_6),512);
        tracep->fullWData(oldp+1221,(vlSelf->top__DOT__d_cache__DOT__ram_0_7),512);
        tracep->fullWData(oldp+1237,(vlSelf->top__DOT__d_cache__DOT__ram_0_8),512);
        tracep->fullWData(oldp+1253,(vlSelf->top__DOT__d_cache__DOT__ram_0_9),512);
        tracep->fullWData(oldp+1269,(vlSelf->top__DOT__d_cache__DOT__ram_0_10),512);
        tracep->fullWData(oldp+1285,(vlSelf->top__DOT__d_cache__DOT__ram_0_11),512);
        tracep->fullWData(oldp+1301,(vlSelf->top__DOT__d_cache__DOT__ram_0_12),512);
        tracep->fullWData(oldp+1317,(vlSelf->top__DOT__d_cache__DOT__ram_0_13),512);
        tracep->fullWData(oldp+1333,(vlSelf->top__DOT__d_cache__DOT__ram_0_14),512);
        tracep->fullWData(oldp+1349,(vlSelf->top__DOT__d_cache__DOT__ram_0_15),512);
        tracep->fullWData(oldp+1365,(vlSelf->top__DOT__d_cache__DOT__ram_1_0),512);
        tracep->fullWData(oldp+1381,(vlSelf->top__DOT__d_cache__DOT__ram_1_1),512);
        tracep->fullWData(oldp+1397,(vlSelf->top__DOT__d_cache__DOT__ram_1_2),512);
        tracep->fullWData(oldp+1413,(vlSelf->top__DOT__d_cache__DOT__ram_1_3),512);
        tracep->fullWData(oldp+1429,(vlSelf->top__DOT__d_cache__DOT__ram_1_4),512);
        tracep->fullWData(oldp+1445,(vlSelf->top__DOT__d_cache__DOT__ram_1_5),512);
        tracep->fullWData(oldp+1461,(vlSelf->top__DOT__d_cache__DOT__ram_1_6),512);
        tracep->fullWData(oldp+1477,(vlSelf->top__DOT__d_cache__DOT__ram_1_7),512);
        tracep->fullWData(oldp+1493,(vlSelf->top__DOT__d_cache__DOT__ram_1_8),512);
        tracep->fullWData(oldp+1509,(vlSelf->top__DOT__d_cache__DOT__ram_1_9),512);
        tracep->fullWData(oldp+1525,(vlSelf->top__DOT__d_cache__DOT__ram_1_10),512);
        tracep->fullWData(oldp+1541,(vlSelf->top__DOT__d_cache__DOT__ram_1_11),512);
        tracep->fullWData(oldp+1557,(vlSelf->top__DOT__d_cache__DOT__ram_1_12),512);
        tracep->fullWData(oldp+1573,(vlSelf->top__DOT__d_cache__DOT__ram_1_13),512);
        tracep->fullWData(oldp+1589,(vlSelf->top__DOT__d_cache__DOT__ram_1_14),512);
        tracep->fullWData(oldp+1605,(vlSelf->top__DOT__d_cache__DOT__ram_1_15),512);
        tracep->fullIData(oldp+1621,(vlSelf->top__DOT__d_cache__DOT__tag_0_0),32);
        tracep->fullIData(oldp+1622,(vlSelf->top__DOT__d_cache__DOT__tag_0_1),32);
        tracep->fullIData(oldp+1623,(vlSelf->top__DOT__d_cache__DOT__tag_0_2),32);
        tracep->fullIData(oldp+1624,(vlSelf->top__DOT__d_cache__DOT__tag_0_3),32);
        tracep->fullIData(oldp+1625,(vlSelf->top__DOT__d_cache__DOT__tag_0_4),32);
        tracep->fullIData(oldp+1626,(vlSelf->top__DOT__d_cache__DOT__tag_0_5),32);
        tracep->fullIData(oldp+1627,(vlSelf->top__DOT__d_cache__DOT__tag_0_6),32);
        tracep->fullIData(oldp+1628,(vlSelf->top__DOT__d_cache__DOT__tag_0_7),32);
        tracep->fullIData(oldp+1629,(vlSelf->top__DOT__d_cache__DOT__tag_0_8),32);
        tracep->fullIData(oldp+1630,(vlSelf->top__DOT__d_cache__DOT__tag_0_9),32);
        tracep->fullIData(oldp+1631,(vlSelf->top__DOT__d_cache__DOT__tag_0_10),32);
        tracep->fullIData(oldp+1632,(vlSelf->top__DOT__d_cache__DOT__tag_0_11),32);
        tracep->fullIData(oldp+1633,(vlSelf->top__DOT__d_cache__DOT__tag_0_12),32);
        tracep->fullIData(oldp+1634,(vlSelf->top__DOT__d_cache__DOT__tag_0_13),32);
        tracep->fullIData(oldp+1635,(vlSelf->top__DOT__d_cache__DOT__tag_0_14),32);
        tracep->fullIData(oldp+1636,(vlSelf->top__DOT__d_cache__DOT__tag_0_15),32);
        tracep->fullIData(oldp+1637,(vlSelf->top__DOT__d_cache__DOT__tag_1_0),32);
        tracep->fullIData(oldp+1638,(vlSelf->top__DOT__d_cache__DOT__tag_1_1),32);
        tracep->fullIData(oldp+1639,(vlSelf->top__DOT__d_cache__DOT__tag_1_2),32);
        tracep->fullIData(oldp+1640,(vlSelf->top__DOT__d_cache__DOT__tag_1_3),32);
        tracep->fullIData(oldp+1641,(vlSelf->top__DOT__d_cache__DOT__tag_1_4),32);
        tracep->fullIData(oldp+1642,(vlSelf->top__DOT__d_cache__DOT__tag_1_5),32);
        tracep->fullIData(oldp+1643,(vlSelf->top__DOT__d_cache__DOT__tag_1_6),32);
        tracep->fullIData(oldp+1644,(vlSelf->top__DOT__d_cache__DOT__tag_1_7),32);
        tracep->fullIData(oldp+1645,(vlSelf->top__DOT__d_cache__DOT__tag_1_8),32);
        tracep->fullIData(oldp+1646,(vlSelf->top__DOT__d_cache__DOT__tag_1_9),32);
        tracep->fullIData(oldp+1647,(vlSelf->top__DOT__d_cache__DOT__tag_1_10),32);
        tracep->fullIData(oldp+1648,(vlSelf->top__DOT__d_cache__DOT__tag_1_11),32);
        tracep->fullIData(oldp+1649,(vlSelf->top__DOT__d_cache__DOT__tag_1_12),32);
        tracep->fullIData(oldp+1650,(vlSelf->top__DOT__d_cache__DOT__tag_1_13),32);
        tracep->fullIData(oldp+1651,(vlSelf->top__DOT__d_cache__DOT__tag_1_14),32);
        tracep->fullIData(oldp+1652,(vlSelf->top__DOT__d_cache__DOT__tag_1_15),32);
        tracep->fullBit(oldp+1653,(vlSelf->top__DOT__d_cache__DOT__valid_0_0));
        tracep->fullBit(oldp+1654,(vlSelf->top__DOT__d_cache__DOT__valid_0_1));
        tracep->fullBit(oldp+1655,(vlSelf->top__DOT__d_cache__DOT__valid_0_2));
        tracep->fullBit(oldp+1656,(vlSelf->top__DOT__d_cache__DOT__valid_0_3));
        tracep->fullBit(oldp+1657,(vlSelf->top__DOT__d_cache__DOT__valid_0_4));
        tracep->fullBit(oldp+1658,(vlSelf->top__DOT__d_cache__DOT__valid_0_5));
        tracep->fullBit(oldp+1659,(vlSelf->top__DOT__d_cache__DOT__valid_0_6));
        tracep->fullBit(oldp+1660,(vlSelf->top__DOT__d_cache__DOT__valid_0_7));
        tracep->fullBit(oldp+1661,(vlSelf->top__DOT__d_cache__DOT__valid_0_8));
        tracep->fullBit(oldp+1662,(vlSelf->top__DOT__d_cache__DOT__valid_0_9));
        tracep->fullBit(oldp+1663,(vlSelf->top__DOT__d_cache__DOT__valid_0_10));
        tracep->fullBit(oldp+1664,(vlSelf->top__DOT__d_cache__DOT__valid_0_11));
        tracep->fullBit(oldp+1665,(vlSelf->top__DOT__d_cache__DOT__valid_0_12));
        tracep->fullBit(oldp+1666,(vlSelf->top__DOT__d_cache__DOT__valid_0_13));
        tracep->fullBit(oldp+1667,(vlSelf->top__DOT__d_cache__DOT__valid_0_14));
        tracep->fullBit(oldp+1668,(vlSelf->top__DOT__d_cache__DOT__valid_0_15));
        tracep->fullBit(oldp+1669,(vlSelf->top__DOT__d_cache__DOT__valid_1_0));
        tracep->fullBit(oldp+1670,(vlSelf->top__DOT__d_cache__DOT__valid_1_1));
        tracep->fullBit(oldp+1671,(vlSelf->top__DOT__d_cache__DOT__valid_1_2));
        tracep->fullBit(oldp+1672,(vlSelf->top__DOT__d_cache__DOT__valid_1_3));
        tracep->fullBit(oldp+1673,(vlSelf->top__DOT__d_cache__DOT__valid_1_4));
        tracep->fullBit(oldp+1674,(vlSelf->top__DOT__d_cache__DOT__valid_1_5));
        tracep->fullBit(oldp+1675,(vlSelf->top__DOT__d_cache__DOT__valid_1_6));
        tracep->fullBit(oldp+1676,(vlSelf->top__DOT__d_cache__DOT__valid_1_7));
        tracep->fullBit(oldp+1677,(vlSelf->top__DOT__d_cache__DOT__valid_1_8));
        tracep->fullBit(oldp+1678,(vlSelf->top__DOT__d_cache__DOT__valid_1_9));
        tracep->fullBit(oldp+1679,(vlSelf->top__DOT__d_cache__DOT__valid_1_10));
        tracep->fullBit(oldp+1680,(vlSelf->top__DOT__d_cache__DOT__valid_1_11));
        tracep->fullBit(oldp+1681,(vlSelf->top__DOT__d_cache__DOT__valid_1_12));
        tracep->fullBit(oldp+1682,(vlSelf->top__DOT__d_cache__DOT__valid_1_13));
        tracep->fullBit(oldp+1683,(vlSelf->top__DOT__d_cache__DOT__valid_1_14));
        tracep->fullBit(oldp+1684,(vlSelf->top__DOT__d_cache__DOT__valid_1_15));
        tracep->fullBit(oldp+1685,(vlSelf->top__DOT__d_cache__DOT__dirty_0_0));
        tracep->fullBit(oldp+1686,(vlSelf->top__DOT__d_cache__DOT__dirty_0_1));
        tracep->fullBit(oldp+1687,(vlSelf->top__DOT__d_cache__DOT__dirty_0_2));
        tracep->fullBit(oldp+1688,(vlSelf->top__DOT__d_cache__DOT__dirty_0_3));
        tracep->fullBit(oldp+1689,(vlSelf->top__DOT__d_cache__DOT__dirty_0_4));
        tracep->fullBit(oldp+1690,(vlSelf->top__DOT__d_cache__DOT__dirty_0_5));
        tracep->fullBit(oldp+1691,(vlSelf->top__DOT__d_cache__DOT__dirty_0_6));
        tracep->fullBit(oldp+1692,(vlSelf->top__DOT__d_cache__DOT__dirty_0_7));
        tracep->fullBit(oldp+1693,(vlSelf->top__DOT__d_cache__DOT__dirty_0_8));
        tracep->fullBit(oldp+1694,(vlSelf->top__DOT__d_cache__DOT__dirty_0_9));
        tracep->fullBit(oldp+1695,(vlSelf->top__DOT__d_cache__DOT__dirty_0_10));
        tracep->fullBit(oldp+1696,(vlSelf->top__DOT__d_cache__DOT__dirty_0_11));
        tracep->fullBit(oldp+1697,(vlSelf->top__DOT__d_cache__DOT__dirty_0_12));
        tracep->fullBit(oldp+1698,(vlSelf->top__DOT__d_cache__DOT__dirty_0_13));
        tracep->fullBit(oldp+1699,(vlSelf->top__DOT__d_cache__DOT__dirty_0_14));
        tracep->fullBit(oldp+1700,(vlSelf->top__DOT__d_cache__DOT__dirty_0_15));
        tracep->fullBit(oldp+1701,(vlSelf->top__DOT__d_cache__DOT__dirty_1_0));
        tracep->fullBit(oldp+1702,(vlSelf->top__DOT__d_cache__DOT__dirty_1_1));
        tracep->fullBit(oldp+1703,(vlSelf->top__DOT__d_cache__DOT__dirty_1_2));
        tracep->fullBit(oldp+1704,(vlSelf->top__DOT__d_cache__DOT__dirty_1_3));
        tracep->fullBit(oldp+1705,(vlSelf->top__DOT__d_cache__DOT__dirty_1_4));
        tracep->fullBit(oldp+1706,(vlSelf->top__DOT__d_cache__DOT__dirty_1_5));
        tracep->fullBit(oldp+1707,(vlSelf->top__DOT__d_cache__DOT__dirty_1_6));
        tracep->fullBit(oldp+1708,(vlSelf->top__DOT__d_cache__DOT__dirty_1_7));
        tracep->fullBit(oldp+1709,(vlSelf->top__DOT__d_cache__DOT__dirty_1_8));
        tracep->fullBit(oldp+1710,(vlSelf->top__DOT__d_cache__DOT__dirty_1_9));
        tracep->fullBit(oldp+1711,(vlSelf->top__DOT__d_cache__DOT__dirty_1_10));
        tracep->fullBit(oldp+1712,(vlSelf->top__DOT__d_cache__DOT__dirty_1_11));
        tracep->fullBit(oldp+1713,(vlSelf->top__DOT__d_cache__DOT__dirty_1_12));
        tracep->fullBit(oldp+1714,(vlSelf->top__DOT__d_cache__DOT__dirty_1_13));
        tracep->fullBit(oldp+1715,(vlSelf->top__DOT__d_cache__DOT__dirty_1_14));
        tracep->fullBit(oldp+1716,(vlSelf->top__DOT__d_cache__DOT__dirty_1_15));
        tracep->fullBit(oldp+1717,(vlSelf->top__DOT__d_cache__DOT__way0_hit));
        tracep->fullBit(oldp+1718,(vlSelf->top__DOT__d_cache__DOT__way1_hit));
        tracep->fullWData(oldp+1719,(vlSelf->top__DOT__d_cache__DOT__write_back_data),512);
        tracep->fullIData(oldp+1735,(vlSelf->top__DOT__d_cache__DOT__write_back_addr),32);
        tracep->fullCData(oldp+1736,(vlSelf->top__DOT__d_cache__DOT__unuse_way),2);
        tracep->fullQData(oldp+1737,(vlSelf->top__DOT__d_cache__DOT__receive_data_0),64);
        tracep->fullQData(oldp+1739,(vlSelf->top__DOT__d_cache__DOT__receive_data_1),64);
        tracep->fullQData(oldp+1741,(vlSelf->top__DOT__d_cache__DOT__receive_data_2),64);
        tracep->fullQData(oldp+1743,(vlSelf->top__DOT__d_cache__DOT__receive_data_3),64);
        tracep->fullQData(oldp+1745,(vlSelf->top__DOT__d_cache__DOT__receive_data_4),64);
        tracep->fullQData(oldp+1747,(vlSelf->top__DOT__d_cache__DOT__receive_data_5),64);
        tracep->fullQData(oldp+1749,(vlSelf->top__DOT__d_cache__DOT__receive_data_6),64);
        tracep->fullQData(oldp+1751,(vlSelf->top__DOT__d_cache__DOT__receive_data_7),64);
        tracep->fullCData(oldp+1753,(vlSelf->top__DOT__d_cache__DOT__receive_num),3);
        tracep->fullBit(oldp+1754,(vlSelf->top__DOT__d_cache__DOT__quene));
        tracep->fullCData(oldp+1755,((0x3fU & (IData)(vlSelf->top__DOT__LSU__DOT__maddr))),6);
        tracep->fullCData(oldp+1756,((0xfU & (IData)(
                                                     (vlSelf->top__DOT__LSU__DOT__maddr 
                                                      >> 6U)))),4);
        tracep->fullIData(oldp+1757,((0x3fffffU & (IData)(
                                                          (vlSelf->top__DOT__LSU__DOT__maddr 
                                                           >> 0xaU)))),22);
        tracep->fullSData(oldp+1758,((0x1f8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                                << 3U))),9);
        tracep->fullQData(oldp+1759,(vlSelf->top__DOT__d_cache__DOT__wmask),64);
        tracep->fullCData(oldp+1761,(vlSelf->top__DOT__d_cache__DOT__state),3);
        tracep->fullQData(oldp+1762,(vlSelf->top__DOT__axi__DOT__araddr),64);
        tracep->fullQData(oldp+1764,(vlSelf->top__DOT__axi__DOT__awaddr),64);
        tracep->fullCData(oldp+1766,(vlSelf->top__DOT__axi__DOT__arlen),8);
        tracep->fullCData(oldp+1767,(vlSelf->top__DOT__axi__DOT__awlen),8);
        tracep->fullCData(oldp+1768,(vlSelf->top__DOT__axi__DOT__state),3);
        tracep->fullBit(oldp+1769,(vlSelf->clock));
        tracep->fullBit(oldp+1770,(vlSelf->reset));
        tracep->fullIData(oldp+1771,(vlSelf->io_inst),32);
        tracep->fullQData(oldp+1772,(vlSelf->io_pc),64);
        tracep->fullBit(oldp+1774,(vlSelf->io_step));
        tracep->fullBit(oldp+1775,(1U));
        tracep->fullCData(oldp+1776,(0U),5);
        tracep->fullCData(oldp+1777,(1U),5);
        tracep->fullCData(oldp+1778,(2U),5);
        tracep->fullCData(oldp+1779,(3U),5);
        tracep->fullCData(oldp+1780,(4U),5);
        tracep->fullCData(oldp+1781,(5U),5);
        tracep->fullCData(oldp+1782,(6U),5);
        tracep->fullCData(oldp+1783,(7U),5);
        tracep->fullCData(oldp+1784,(8U),5);
        tracep->fullCData(oldp+1785,(9U),5);
        tracep->fullCData(oldp+1786,(0xaU),5);
        tracep->fullCData(oldp+1787,(0xbU),5);
        tracep->fullCData(oldp+1788,(0xcU),5);
        tracep->fullCData(oldp+1789,(0xdU),5);
        tracep->fullCData(oldp+1790,(0xeU),5);
        tracep->fullCData(oldp+1791,(0xfU),5);
        tracep->fullCData(oldp+1792,(0x10U),5);
        tracep->fullCData(oldp+1793,(0x11U),5);
        tracep->fullCData(oldp+1794,(0x12U),5);
        tracep->fullCData(oldp+1795,(0x13U),5);
        tracep->fullCData(oldp+1796,(0x14U),5);
        tracep->fullCData(oldp+1797,(0x15U),5);
        tracep->fullCData(oldp+1798,(0x16U),5);
        tracep->fullCData(oldp+1799,(0x17U),5);
        tracep->fullCData(oldp+1800,(0x18U),5);
        tracep->fullCData(oldp+1801,(0x19U),5);
        tracep->fullCData(oldp+1802,(0x1aU),5);
        tracep->fullCData(oldp+1803,(0x1bU),5);
        tracep->fullCData(oldp+1804,(0x1cU),5);
        tracep->fullCData(oldp+1805,(0x1dU),5);
        tracep->fullCData(oldp+1806,(0x1eU),5);
        tracep->fullCData(oldp+1807,(0x1fU),5);
        tracep->fullCData(oldp+1808,(3U),2);
    }
}
