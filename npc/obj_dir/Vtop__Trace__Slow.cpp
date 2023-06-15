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
        tracep->declBit(c+1820,"clock", false,-1);
        tracep->declBit(c+1821,"reset", false,-1);
        tracep->declBus(c+1822,"io_inst", false,-1, 31,0);
        tracep->declQuad(c+1823,"io_pc", false,-1, 63,0);
        tracep->declBit(c+1825,"io_step", false,-1);
        tracep->declBit(c+1820,"top clock", false,-1);
        tracep->declBit(c+1821,"top reset", false,-1);
        tracep->declBus(c+1822,"top io_inst", false,-1, 31,0);
        tracep->declQuad(c+1823,"top io_pc", false,-1, 63,0);
        tracep->declBit(c+1825,"top io_step", false,-1);
        tracep->declBit(c+1820,"top Register_clock", false,-1);
        tracep->declBus(c+1,"top Register_io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top Register_io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top Register_io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top Register_io_rdata2", false,-1, 63,0);
        tracep->declBit(c+7,"top Register_io_we", false,-1);
        tracep->declBus(c+8,"top Register_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top Register_io_wdata", false,-1, 63,0);
        tracep->declBit(c+1820,"top IFU_clock", false,-1);
        tracep->declBit(c+1821,"top IFU_reset", false,-1);
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
        tracep->declBit(c+1820,"top IDU_clock", false,-1);
        tracep->declBit(c+1821,"top IDU_reset", false,-1);
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
        tracep->declBit(c+46,"top IDU_io_es_ld", false,-1);
        tracep->declQuad(c+47,"top IDU_io_es_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+49,"top IDU_io_ms_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+9,"top IDU_io_ws_fwd_res", false,-1, 63,0);
        tracep->declBit(c+51,"top IDU_io_es_fwd_ready", false,-1);
        tracep->declBit(c+52,"top IDU_io_ms_fwd_ready", false,-1);
        tracep->declBit(c+53,"top IDU_io_es_rf_we", false,-1);
        tracep->declBit(c+54,"top IDU_io_ms_rf_we", false,-1);
        tracep->declBit(c+55,"top IDU_io_ws_rf_we", false,-1);
        tracep->declBit(c+56,"top IDU_io_es_valid", false,-1);
        tracep->declBit(c+57,"top IDU_io_ms_valid", false,-1);
        tracep->declBit(c+58,"top IDU_io_ws_valid", false,-1);
        tracep->declBus(c+59,"top IDU_io_es_rf_dst", false,-1, 4,0);
        tracep->declBus(c+60,"top IDU_io_ms_rf_dst", false,-1, 4,0);
        tracep->declBus(c+8,"top IDU_io_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+61,"top IDU_io_ds_valid", false,-1);
        tracep->declBit(c+1820,"top EXU_clock", false,-1);
        tracep->declBit(c+1821,"top EXU_reset", false,-1);
        tracep->declQuad(c+31,"top EXU_io_pc", false,-1, 63,0);
        tracep->declBit(c+29,"top EXU_io_ds_to_es_valid", false,-1);
        tracep->declBit(c+62,"top EXU_io_ms_allowin", false,-1);
        tracep->declBit(c+30,"top EXU_io_es_allowin", false,-1);
        tracep->declBus(c+33,"top EXU_io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+34,"top EXU_io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+36,"top EXU_io_src2_value", false,-1, 63,0);
        tracep->declBus(c+38,"top EXU_io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+39,"top EXU_io_store_data", false,-1, 63,0);
        tracep->declBit(c+63,"top EXU_io_es_to_ms_valid", false,-1);
        tracep->declBus(c+45,"top EXU_io_load_type", false,-1, 2,0);
        tracep->declQuad(c+64,"top EXU_io_to_ms_pc", false,-1, 63,0);
        tracep->declQuad(c+47,"top EXU_io_to_ms_alures", false,-1, 63,0);
        tracep->declQuad(c+66,"top EXU_io_to_ms_store_data", false,-1, 63,0);
        tracep->declBit(c+68,"top EXU_io_to_ms_wen", false,-1);
        tracep->declBus(c+69,"top EXU_io_to_ms_wstrb", false,-1, 7,0);
        tracep->declBit(c+70,"top EXU_io_to_ms_ren", false,-1);
        tracep->declQuad(c+47,"top EXU_io_to_ms_maddr", false,-1, 63,0);
        tracep->declBus(c+59,"top EXU_io_to_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+53,"top EXU_io_to_ms_rf_we", false,-1);
        tracep->declBus(c+71,"top EXU_io_to_ms_load_type", false,-1, 2,0);
        tracep->declBit(c+41,"top EXU_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+42,"top EXU_io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+43,"top EXU_io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+44,"top EXU_io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBit(c+56,"top EXU_io_es_valid", false,-1);
        tracep->declBit(c+53,"top EXU_io_es_rf_we", false,-1);
        tracep->declBus(c+59,"top EXU_io_es_rf_dst", false,-1, 4,0);
        tracep->declBit(c+51,"top EXU_io_es_fwd_ready", false,-1);
        tracep->declQuad(c+47,"top EXU_io_es_fwd_res", false,-1, 63,0);
        tracep->declBit(c+46,"top EXU_io_es_ld", false,-1);
        tracep->declBit(c+1820,"top LSU_clock", false,-1);
        tracep->declBit(c+1821,"top LSU_reset", false,-1);
        tracep->declQuad(c+64,"top LSU_io_pc", false,-1, 63,0);
        tracep->declBit(c+63,"top LSU_io_es_to_ms_valid", false,-1);
        tracep->declBit(c+62,"top LSU_io_ms_allowin", false,-1);
        tracep->declBit(c+53,"top LSU_io_rf_we", false,-1);
        tracep->declBus(c+59,"top LSU_io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+47,"top LSU_io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+66,"top LSU_io_store_data", false,-1, 63,0);
        tracep->declBus(c+71,"top LSU_io_load_type", false,-1, 2,0);
        tracep->declBit(c+68,"top LSU_io_wen", false,-1);
        tracep->declBus(c+69,"top LSU_io_wstrb", false,-1, 7,0);
        tracep->declBit(c+70,"top LSU_io_ren", false,-1);
        tracep->declQuad(c+47,"top LSU_io_maddr", false,-1, 63,0);
        tracep->declQuad(c+72,"top LSU_io_to_ws_pc", false,-1, 63,0);
        tracep->declQuad(c+74,"top LSU_io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+76,"top LSU_io_ms_to_ws_valid", false,-1);
        tracep->declBit(c+77,"top LSU_io_to_ws_rf_we", false,-1);
        tracep->declBus(c+60,"top LSU_io_to_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+57,"top LSU_io_ms_valid", false,-1);
        tracep->declBit(c+54,"top LSU_io_ms_rf_we", false,-1);
        tracep->declBus(c+60,"top LSU_io_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+52,"top LSU_io_ms_fwd_ready", false,-1);
        tracep->declQuad(c+49,"top LSU_io_ms_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+78,"top LSU_io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+80,"top LSU_io_axi_in_rvalid", false,-1);
        tracep->declBit(c+81,"top LSU_io_axi_in_wready", false,-1);
        tracep->declBus(c+82,"top LSU_io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+83,"top LSU_io_axi_out_arvalid", false,-1);
        tracep->declBus(c+82,"top LSU_io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBit(c+84,"top LSU_io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+85,"top LSU_io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+87,"top LSU_io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+88,"top LSU_io_axi_out_wvalid", false,-1);
        tracep->declBit(c+1820,"top WBU_clock", false,-1);
        tracep->declBit(c+1821,"top WBU_reset", false,-1);
        tracep->declQuad(c+72,"top WBU_io_pc", false,-1, 63,0);
        tracep->declBit(c+76,"top WBU_io_ms_to_ws_valid", false,-1);
        tracep->declQuad(c+74,"top WBU_io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+77,"top WBU_io_rf_we", false,-1);
        tracep->declBus(c+60,"top WBU_io_rf_dst", false,-1, 4,0);
        tracep->declBit(c+7,"top WBU_io_we", false,-1);
        tracep->declBus(c+8,"top WBU_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU_io_wdata", false,-1, 63,0);
        tracep->declBit(c+58,"top WBU_io_ws_valid", false,-1);
        tracep->declBit(c+55,"top WBU_io_ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU_io_ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU_io_ws_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+89,"top WBU_io_ws_pc", false,-1, 63,0);
        tracep->declBit(c+1820,"top arbiter_clock", false,-1);
        tracep->declBit(c+1821,"top arbiter_reset", false,-1);
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
        tracep->declBit(c+1820,"top i_cache_clock", false,-1);
        tracep->declBit(c+1821,"top i_cache_reset", false,-1);
        tracep->declBus(c+23,"top i_cache_io_from_ifu_araddr", false,-1, 31,0);
        tracep->declBit(c+24,"top i_cache_io_from_ifu_arvalid", false,-1);
        tracep->declBit(c+25,"top i_cache_io_from_ifu_rready", false,-1);
        tracep->declQuad(c+19,"top i_cache_io_to_ifu_rdata", false,-1, 63,0);
        tracep->declBit(c+21,"top i_cache_io_to_ifu_rlast", false,-1);
        tracep->declBit(c+22,"top i_cache_io_to_ifu_rvalid", false,-1);
        tracep->declBus(c+91,"top i_cache_io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+92,"top i_cache_io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+93,"top i_cache_io_to_axi_arvalid", false,-1);
        tracep->declBit(c+94,"top i_cache_io_to_axi_rready", false,-1);
        tracep->declQuad(c+95,"top i_cache_io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+97,"top i_cache_io_from_axi_rlast", false,-1);
        tracep->declBit(c+98,"top i_cache_io_from_axi_rvalid", false,-1);
        tracep->declBit(c+28,"top i_cache_io_cache_init", false,-1);
        tracep->declBit(c+27,"top i_cache_io_clear_cache", false,-1);
        tracep->declBit(c+1820,"top d_cache_clock", false,-1);
        tracep->declBit(c+1821,"top d_cache_reset", false,-1);
        tracep->declBus(c+82,"top d_cache_io_from_lsu_araddr", false,-1, 31,0);
        tracep->declBit(c+83,"top d_cache_io_from_lsu_arvalid", false,-1);
        tracep->declBus(c+82,"top d_cache_io_from_lsu_awaddr", false,-1, 31,0);
        tracep->declBit(c+84,"top d_cache_io_from_lsu_awvalid", false,-1);
        tracep->declQuad(c+85,"top d_cache_io_from_lsu_wdata", false,-1, 63,0);
        tracep->declBus(c+87,"top d_cache_io_from_lsu_wstrb", false,-1, 7,0);
        tracep->declBit(c+88,"top d_cache_io_from_lsu_wvalid", false,-1);
        tracep->declQuad(c+78,"top d_cache_io_to_lsu_rdata", false,-1, 63,0);
        tracep->declBit(c+80,"top d_cache_io_to_lsu_rvalid", false,-1);
        tracep->declBit(c+81,"top d_cache_io_to_lsu_wready", false,-1);
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
        tracep->declBit(c+1820,"top axi_clock", false,-1);
        tracep->declBit(c+1821,"top axi_reset", false,-1);
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
        tracep->declBit(c+1820,"top Register clock", false,-1);
        tracep->declBus(c+1,"top Register io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top Register io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top Register io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top Register io_rdata2", false,-1, 63,0);
        tracep->declBit(c+7,"top Register io_we", false,-1);
        tracep->declBus(c+8,"top Register io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top Register io_wdata", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+140+i*2,"top Register Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+1826,"top Register Reg_io_rdata1_MPORT_en", false,-1);
        tracep->declBus(c+1,"top Register Reg_io_rdata1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+204,"top Register Reg_io_rdata1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_io_rdata2_MPORT_en", false,-1);
        tracep->declBus(c+2,"top Register Reg_io_rdata2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+206,"top Register Reg_io_rdata2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_0_MPORT_en", false,-1);
        tracep->declBus(c+1827,"top Register Reg_reg_trace_io_input_reg_0_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+208,"top Register Reg_reg_trace_io_input_reg_0_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_1_MPORT_en", false,-1);
        tracep->declBus(c+1828,"top Register Reg_reg_trace_io_input_reg_1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+210,"top Register Reg_reg_trace_io_input_reg_1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_2_MPORT_en", false,-1);
        tracep->declBus(c+1829,"top Register Reg_reg_trace_io_input_reg_2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+212,"top Register Reg_reg_trace_io_input_reg_2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_3_MPORT_en", false,-1);
        tracep->declBus(c+1830,"top Register Reg_reg_trace_io_input_reg_3_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+214,"top Register Reg_reg_trace_io_input_reg_3_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_4_MPORT_en", false,-1);
        tracep->declBus(c+1831,"top Register Reg_reg_trace_io_input_reg_4_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+216,"top Register Reg_reg_trace_io_input_reg_4_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_5_MPORT_en", false,-1);
        tracep->declBus(c+1832,"top Register Reg_reg_trace_io_input_reg_5_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+218,"top Register Reg_reg_trace_io_input_reg_5_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_6_MPORT_en", false,-1);
        tracep->declBus(c+1833,"top Register Reg_reg_trace_io_input_reg_6_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+220,"top Register Reg_reg_trace_io_input_reg_6_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_7_MPORT_en", false,-1);
        tracep->declBus(c+1834,"top Register Reg_reg_trace_io_input_reg_7_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+222,"top Register Reg_reg_trace_io_input_reg_7_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_8_MPORT_en", false,-1);
        tracep->declBus(c+1835,"top Register Reg_reg_trace_io_input_reg_8_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+224,"top Register Reg_reg_trace_io_input_reg_8_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_9_MPORT_en", false,-1);
        tracep->declBus(c+1836,"top Register Reg_reg_trace_io_input_reg_9_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+226,"top Register Reg_reg_trace_io_input_reg_9_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_10_MPORT_en", false,-1);
        tracep->declBus(c+1837,"top Register Reg_reg_trace_io_input_reg_10_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+228,"top Register Reg_reg_trace_io_input_reg_10_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_11_MPORT_en", false,-1);
        tracep->declBus(c+1838,"top Register Reg_reg_trace_io_input_reg_11_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+230,"top Register Reg_reg_trace_io_input_reg_11_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_12_MPORT_en", false,-1);
        tracep->declBus(c+1839,"top Register Reg_reg_trace_io_input_reg_12_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+232,"top Register Reg_reg_trace_io_input_reg_12_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_13_MPORT_en", false,-1);
        tracep->declBus(c+1840,"top Register Reg_reg_trace_io_input_reg_13_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+234,"top Register Reg_reg_trace_io_input_reg_13_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_14_MPORT_en", false,-1);
        tracep->declBus(c+1841,"top Register Reg_reg_trace_io_input_reg_14_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+236,"top Register Reg_reg_trace_io_input_reg_14_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_15_MPORT_en", false,-1);
        tracep->declBus(c+1842,"top Register Reg_reg_trace_io_input_reg_15_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+238,"top Register Reg_reg_trace_io_input_reg_15_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_16_MPORT_en", false,-1);
        tracep->declBus(c+1843,"top Register Reg_reg_trace_io_input_reg_16_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+240,"top Register Reg_reg_trace_io_input_reg_16_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_17_MPORT_en", false,-1);
        tracep->declBus(c+1844,"top Register Reg_reg_trace_io_input_reg_17_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+242,"top Register Reg_reg_trace_io_input_reg_17_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_18_MPORT_en", false,-1);
        tracep->declBus(c+1845,"top Register Reg_reg_trace_io_input_reg_18_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+244,"top Register Reg_reg_trace_io_input_reg_18_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_19_MPORT_en", false,-1);
        tracep->declBus(c+1846,"top Register Reg_reg_trace_io_input_reg_19_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+246,"top Register Reg_reg_trace_io_input_reg_19_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_20_MPORT_en", false,-1);
        tracep->declBus(c+1847,"top Register Reg_reg_trace_io_input_reg_20_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+248,"top Register Reg_reg_trace_io_input_reg_20_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_21_MPORT_en", false,-1);
        tracep->declBus(c+1848,"top Register Reg_reg_trace_io_input_reg_21_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+250,"top Register Reg_reg_trace_io_input_reg_21_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_22_MPORT_en", false,-1);
        tracep->declBus(c+1849,"top Register Reg_reg_trace_io_input_reg_22_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+252,"top Register Reg_reg_trace_io_input_reg_22_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_23_MPORT_en", false,-1);
        tracep->declBus(c+1850,"top Register Reg_reg_trace_io_input_reg_23_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+254,"top Register Reg_reg_trace_io_input_reg_23_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_24_MPORT_en", false,-1);
        tracep->declBus(c+1851,"top Register Reg_reg_trace_io_input_reg_24_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+256,"top Register Reg_reg_trace_io_input_reg_24_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_25_MPORT_en", false,-1);
        tracep->declBus(c+1852,"top Register Reg_reg_trace_io_input_reg_25_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+258,"top Register Reg_reg_trace_io_input_reg_25_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_26_MPORT_en", false,-1);
        tracep->declBus(c+1853,"top Register Reg_reg_trace_io_input_reg_26_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+260,"top Register Reg_reg_trace_io_input_reg_26_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_27_MPORT_en", false,-1);
        tracep->declBus(c+1854,"top Register Reg_reg_trace_io_input_reg_27_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+262,"top Register Reg_reg_trace_io_input_reg_27_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_28_MPORT_en", false,-1);
        tracep->declBus(c+1855,"top Register Reg_reg_trace_io_input_reg_28_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+264,"top Register Reg_reg_trace_io_input_reg_28_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_29_MPORT_en", false,-1);
        tracep->declBus(c+1856,"top Register Reg_reg_trace_io_input_reg_29_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+266,"top Register Reg_reg_trace_io_input_reg_29_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_30_MPORT_en", false,-1);
        tracep->declBus(c+1857,"top Register Reg_reg_trace_io_input_reg_30_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+268,"top Register Reg_reg_trace_io_input_reg_30_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1826,"top Register Reg_reg_trace_io_input_reg_31_MPORT_en", false,-1);
        tracep->declBus(c+1858,"top Register Reg_reg_trace_io_input_reg_31_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+270,"top Register Reg_reg_trace_io_input_reg_31_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+9,"top Register Reg_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+8,"top Register Reg_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+1826,"top Register Reg_MPORT_mask", false,-1);
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
        tracep->declBit(c+1820,"top IFU clock", false,-1);
        tracep->declBit(c+1821,"top IFU reset", false,-1);
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
        tracep->declBit(c+337,"top IFU fs_valid", false,-1);
        tracep->declBit(c+338,"top IFU fs_ready_go", false,-1);
        tracep->declBit(c+339,"top IFU cache_init", false,-1);
        tracep->declBit(c+340,"top IFU fs_to_ds_valid", false,-1);
        tracep->declQuad(c+15,"top IFU fs_pc", false,-1, 63,0);
        tracep->declBus(c+18,"top IFU fs_inst", false,-1, 31,0);
        tracep->declQuad(c+341,"top IFU seq_pc", false,-1, 63,0);
        tracep->declBit(c+343,"top IFU fs_allowin", false,-1);
        tracep->declBit(c+25,"top IFU inst_ready", false,-1);
        tracep->declBit(c+1820,"top IDU clock", false,-1);
        tracep->declBit(c+1821,"top IDU reset", false,-1);
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
        tracep->declBit(c+46,"top IDU io_es_ld", false,-1);
        tracep->declQuad(c+47,"top IDU io_es_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+49,"top IDU io_ms_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+9,"top IDU io_ws_fwd_res", false,-1, 63,0);
        tracep->declBit(c+51,"top IDU io_es_fwd_ready", false,-1);
        tracep->declBit(c+52,"top IDU io_ms_fwd_ready", false,-1);
        tracep->declBit(c+53,"top IDU io_es_rf_we", false,-1);
        tracep->declBit(c+54,"top IDU io_ms_rf_we", false,-1);
        tracep->declBit(c+55,"top IDU io_ws_rf_we", false,-1);
        tracep->declBit(c+56,"top IDU io_es_valid", false,-1);
        tracep->declBit(c+57,"top IDU io_ms_valid", false,-1);
        tracep->declBit(c+58,"top IDU io_ws_valid", false,-1);
        tracep->declBus(c+59,"top IDU io_es_rf_dst", false,-1, 4,0);
        tracep->declBus(c+60,"top IDU io_ms_rf_dst", false,-1, 4,0);
        tracep->declBus(c+8,"top IDU io_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+61,"top IDU io_ds_valid", false,-1);
        tracep->declBit(c+1820,"top IDU csr_reg_clock", false,-1);
        tracep->declBit(c+344,"top IDU csr_reg_io_wen1", false,-1);
        tracep->declBit(c+345,"top IDU csr_reg_io_wen2", false,-1);
        tracep->declBus(c+346,"top IDU csr_reg_io_waddr1", false,-1, 1,0);
        tracep->declQuad(c+347,"top IDU csr_reg_io_wdata1", false,-1, 63,0);
        tracep->declQuad(c+349,"top IDU csr_reg_io_wdata2", false,-1, 63,0);
        tracep->declBus(c+351,"top IDU csr_reg_io_raddr", false,-1, 1,0);
        tracep->declQuad(c+352,"top IDU csr_reg_io_rdata", false,-1, 63,0);
        tracep->declBit(c+61,"top IDU ds_valid", false,-1);
        tracep->declQuad(c+31,"top IDU ds_pc", false,-1, 63,0);
        tracep->declBus(c+354,"top IDU inst", false,-1, 31,0);
        tracep->declBit(c+355,"top IDU br_taken_cancel", false,-1);
        tracep->declBit(c+356,"top IDU src1_is_pc", false,-1);
        tracep->declBus(c+357,"top IDU inst_type", false,-1, 31,0);
        tracep->declBus(c+358,"top IDU csr_write", false,-1, 1,0);
        tracep->declBus(c+1,"top IDU rs1", false,-1, 4,0);
        tracep->declBit(c+359,"top IDU conflict_es_rs1", false,-1);
        tracep->declBit(c+360,"top IDU src2_is_imm", false,-1);
        tracep->declBus(c+361,"top IDU rs2", false,-1, 4,0);
        tracep->declBit(c+362,"top IDU conflict_es_rs2", false,-1);
        tracep->declBit(c+363,"top IDU conflict_ms_rs1", false,-1);
        tracep->declBit(c+364,"top IDU conflict_ms_rs2", false,-1);
        tracep->declBit(c+365,"top IDU conflict_ws_rs1", false,-1);
        tracep->declBit(c+366,"top IDU conflict_ws_rs2", false,-1);
        tracep->declBus(c+33,"top IDU ALUop", false,-1, 31,0);
        tracep->declBit(c+367,"top IDU ds_ready_go", false,-1);
        tracep->declBit(c+368,"top IDU ds_allowin", false,-1);
        tracep->declQuad(c+369,"top IDU rdata1", false,-1, 63,0);
        tracep->declQuad(c+371,"top IDU rdata2", false,-1, 63,0);
        tracep->declBit(c+373,"top IDU br_taken", false,-1);
        tracep->declBus(c+38,"top IDU rd", false,-1, 4,0);
        tracep->declBit(c+26,"top IDU fence", false,-1);
        tracep->declBus(c+374,"top IDU imm_imm", false,-1, 11,0);
        tracep->declBus(c+375,"top IDU imm_imm_1", false,-1, 19,0);
        tracep->declBus(c+376,"top IDU imm_imm_2", false,-1, 19,0);
        tracep->declBus(c+377,"top IDU imm_imm_3", false,-1, 11,0);
        tracep->declBus(c+378,"top IDU imm_imm_4", false,-1, 11,0);
        tracep->declQuad(c+379,"top IDU imm", false,-1, 63,0);
        tracep->declBus(c+381,"top IDU csr_index", false,-1, 1,0);
        tracep->declQuad(c+382,"top IDU csr_wdata", false,-1, 63,0);
        tracep->declQuad(c+384,"top IDU src1", false,-1, 63,0);
        tracep->declQuad(c+36,"top IDU src2", false,-1, 63,0);
        tracep->declBit(c+1820,"top IDU csr_reg clock", false,-1);
        tracep->declBit(c+344,"top IDU csr_reg io_wen1", false,-1);
        tracep->declBit(c+345,"top IDU csr_reg io_wen2", false,-1);
        tracep->declBus(c+346,"top IDU csr_reg io_waddr1", false,-1, 1,0);
        tracep->declQuad(c+347,"top IDU csr_reg io_wdata1", false,-1, 63,0);
        tracep->declQuad(c+349,"top IDU csr_reg io_wdata2", false,-1, 63,0);
        tracep->declBus(c+351,"top IDU csr_reg io_raddr", false,-1, 1,0);
        tracep->declQuad(c+352,"top IDU csr_reg io_rdata", false,-1, 63,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+386+i*2,"top IDU csr_reg CSR_Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+1826,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_en", false,-1);
        tracep->declBus(c+351,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+352,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+347,"top IDU csr_reg CSR_Reg_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+346,"top IDU csr_reg CSR_Reg_MPORT_addr", false,-1, 1,0);
        tracep->declBit(c+1826,"top IDU csr_reg CSR_Reg_MPORT_mask", false,-1);
        tracep->declBit(c+344,"top IDU csr_reg CSR_Reg_MPORT_en", false,-1);
        tracep->declQuad(c+349,"top IDU csr_reg CSR_Reg_MPORT_1_data", false,-1, 63,0);
        tracep->declBus(c+1859,"top IDU csr_reg CSR_Reg_MPORT_1_addr", false,-1, 1,0);
        tracep->declBit(c+1826,"top IDU csr_reg CSR_Reg_MPORT_1_mask", false,-1);
        tracep->declBit(c+345,"top IDU csr_reg CSR_Reg_MPORT_1_en", false,-1);
        tracep->declBit(c+1820,"top EXU clock", false,-1);
        tracep->declBit(c+1821,"top EXU reset", false,-1);
        tracep->declQuad(c+31,"top EXU io_pc", false,-1, 63,0);
        tracep->declBit(c+29,"top EXU io_ds_to_es_valid", false,-1);
        tracep->declBit(c+62,"top EXU io_ms_allowin", false,-1);
        tracep->declBit(c+30,"top EXU io_es_allowin", false,-1);
        tracep->declBus(c+33,"top EXU io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+34,"top EXU io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+36,"top EXU io_src2_value", false,-1, 63,0);
        tracep->declBus(c+38,"top EXU io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+39,"top EXU io_store_data", false,-1, 63,0);
        tracep->declBit(c+63,"top EXU io_es_to_ms_valid", false,-1);
        tracep->declBus(c+45,"top EXU io_load_type", false,-1, 2,0);
        tracep->declQuad(c+64,"top EXU io_to_ms_pc", false,-1, 63,0);
        tracep->declQuad(c+47,"top EXU io_to_ms_alures", false,-1, 63,0);
        tracep->declQuad(c+66,"top EXU io_to_ms_store_data", false,-1, 63,0);
        tracep->declBit(c+68,"top EXU io_to_ms_wen", false,-1);
        tracep->declBus(c+69,"top EXU io_to_ms_wstrb", false,-1, 7,0);
        tracep->declBit(c+70,"top EXU io_to_ms_ren", false,-1);
        tracep->declQuad(c+47,"top EXU io_to_ms_maddr", false,-1, 63,0);
        tracep->declBus(c+59,"top EXU io_to_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+53,"top EXU io_to_ms_rf_we", false,-1);
        tracep->declBus(c+71,"top EXU io_to_ms_load_type", false,-1, 2,0);
        tracep->declBit(c+41,"top EXU io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+42,"top EXU io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+43,"top EXU io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+44,"top EXU io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBit(c+56,"top EXU io_es_valid", false,-1);
        tracep->declBit(c+53,"top EXU io_es_rf_we", false,-1);
        tracep->declBus(c+59,"top EXU io_es_rf_dst", false,-1, 4,0);
        tracep->declBit(c+51,"top EXU io_es_fwd_ready", false,-1);
        tracep->declQuad(c+47,"top EXU io_es_fwd_res", false,-1, 63,0);
        tracep->declBit(c+46,"top EXU io_es_ld", false,-1);
        tracep->declBit(c+1820,"top EXU ALU_clock", false,-1);
        tracep->declBit(c+1821,"top EXU ALU_reset", false,-1);
        tracep->declQuad(c+394,"top EXU ALU_io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+396,"top EXU ALU_io_src2_value", false,-1, 63,0);
        tracep->declBus(c+398,"top EXU ALU_io_ALUop", false,-1, 31,0);
        tracep->declBit(c+56,"top EXU ALU_io_src_valid", false,-1);
        tracep->declBit(c+399,"top EXU ALU_io_alu_busy", false,-1);
        tracep->declQuad(c+47,"top EXU ALU_io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+64,"top EXU es_pc", false,-1, 63,0);
        tracep->declBit(c+56,"top EXU es_valid", false,-1);
        tracep->declBus(c+59,"top EXU es_rd", false,-1, 4,0);
        tracep->declBit(c+53,"top EXU es_rf_we", false,-1);
        tracep->declQuad(c+400,"top EXU src1_value", false,-1, 63,0);
        tracep->declQuad(c+396,"top EXU src2_value", false,-1, 63,0);
        tracep->declQuad(c+66,"top EXU store_data", false,-1, 63,0);
        tracep->declBus(c+69,"top EXU st_wstrb", false,-1, 7,0);
        tracep->declBit(c+68,"top EXU st_we", false,-1);
        tracep->declBit(c+70,"top EXU ld_we", false,-1);
        tracep->declBus(c+398,"top EXU ALUop", false,-1, 31,0);
        tracep->declBus(c+71,"top EXU load_type", false,-1, 2,0);
        tracep->declBit(c+402,"top EXU es_ready_go", false,-1);
        tracep->declBit(c+30,"top EXU es_allowin", false,-1);
        tracep->declBit(c+1820,"top EXU ALU clock", false,-1);
        tracep->declBit(c+1821,"top EXU ALU reset", false,-1);
        tracep->declQuad(c+394,"top EXU ALU io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+396,"top EXU ALU io_src2_value", false,-1, 63,0);
        tracep->declBus(c+398,"top EXU ALU io_ALUop", false,-1, 31,0);
        tracep->declBit(c+56,"top EXU ALU io_src_valid", false,-1);
        tracep->declBit(c+399,"top EXU ALU io_alu_busy", false,-1);
        tracep->declQuad(c+47,"top EXU ALU io_alu_res", false,-1, 63,0);
        tracep->declBit(c+1820,"top EXU ALU Mul_clock", false,-1);
        tracep->declBit(c+1821,"top EXU ALU Mul_reset", false,-1);
        tracep->declBit(c+403,"top EXU ALU Mul_io_mul_valid", false,-1);
        tracep->declBit(c+404,"top EXU ALU Mul_io_mulw", false,-1);
        tracep->declQuad(c+394,"top EXU ALU Mul_io_multiplicand", false,-1, 63,0);
        tracep->declQuad(c+396,"top EXU ALU Mul_io_multiplier", false,-1, 63,0);
        tracep->declBit(c+405,"top EXU ALU Mul_io_out_valid", false,-1);
        tracep->declBus(c+406,"top EXU ALU Mul_io_result_hi", false,-1, 31,0);
        tracep->declBus(c+407,"top EXU ALU Mul_io_result_lo", false,-1, 31,0);
        tracep->declBit(c+1820,"top EXU ALU Div_clock", false,-1);
        tracep->declBit(c+1821,"top EXU ALU Div_reset", false,-1);
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
        tracep->declBit(c+1820,"top EXU ALU Mul clock", false,-1);
        tracep->declBit(c+1821,"top EXU ALU Mul reset", false,-1);
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
        tracep->declBit(c+1820,"top EXU ALU Div clock", false,-1);
        tracep->declBit(c+1821,"top EXU ALU Div reset", false,-1);
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
        tracep->declBit(c+1820,"top LSU clock", false,-1);
        tracep->declBit(c+1821,"top LSU reset", false,-1);
        tracep->declQuad(c+64,"top LSU io_pc", false,-1, 63,0);
        tracep->declBit(c+63,"top LSU io_es_to_ms_valid", false,-1);
        tracep->declBit(c+62,"top LSU io_ms_allowin", false,-1);
        tracep->declBit(c+53,"top LSU io_rf_we", false,-1);
        tracep->declBus(c+59,"top LSU io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+47,"top LSU io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+66,"top LSU io_store_data", false,-1, 63,0);
        tracep->declBus(c+71,"top LSU io_load_type", false,-1, 2,0);
        tracep->declBit(c+68,"top LSU io_wen", false,-1);
        tracep->declBus(c+69,"top LSU io_wstrb", false,-1, 7,0);
        tracep->declBit(c+70,"top LSU io_ren", false,-1);
        tracep->declQuad(c+47,"top LSU io_maddr", false,-1, 63,0);
        tracep->declQuad(c+72,"top LSU io_to_ws_pc", false,-1, 63,0);
        tracep->declQuad(c+74,"top LSU io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+76,"top LSU io_ms_to_ws_valid", false,-1);
        tracep->declBit(c+77,"top LSU io_to_ws_rf_we", false,-1);
        tracep->declBus(c+60,"top LSU io_to_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+57,"top LSU io_ms_valid", false,-1);
        tracep->declBit(c+54,"top LSU io_ms_rf_we", false,-1);
        tracep->declBus(c+60,"top LSU io_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+52,"top LSU io_ms_fwd_ready", false,-1);
        tracep->declQuad(c+49,"top LSU io_ms_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+78,"top LSU io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+80,"top LSU io_axi_in_rvalid", false,-1);
        tracep->declBit(c+81,"top LSU io_axi_in_wready", false,-1);
        tracep->declBus(c+82,"top LSU io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+83,"top LSU io_axi_out_arvalid", false,-1);
        tracep->declBus(c+82,"top LSU io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBit(c+84,"top LSU io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+85,"top LSU io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+87,"top LSU io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+88,"top LSU io_axi_out_wvalid", false,-1);
        tracep->declBit(c+57,"top LSU ms_valid", false,-1);
        tracep->declQuad(c+72,"top LSU ms_pc", false,-1, 63,0);
        tracep->declBit(c+516,"top LSU ms_ready_go", false,-1);
        tracep->declBit(c+77,"top LSU ms_rf_we", false,-1);
        tracep->declBus(c+60,"top LSU ms_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+517,"top LSU ms_res", false,-1, 63,0);
        tracep->declQuad(c+85,"top LSU store_data", false,-1, 63,0);
        tracep->declBit(c+88,"top LSU wen", false,-1);
        tracep->declBus(c+87,"top LSU wstrb", false,-1, 7,0);
        tracep->declBit(c+519,"top LSU ren", false,-1);
        tracep->declQuad(c+520,"top LSU maddr", false,-1, 63,0);
        tracep->declBus(c+522,"top LSU load_type", false,-1, 2,0);
        tracep->declBit(c+62,"top LSU ms_allowin", false,-1);
        tracep->declQuad(c+523,"top LSU mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+525,"top LSU rdata", false,-1, 63,0);
        tracep->declBit(c+1820,"top WBU clock", false,-1);
        tracep->declBit(c+1821,"top WBU reset", false,-1);
        tracep->declQuad(c+72,"top WBU io_pc", false,-1, 63,0);
        tracep->declBit(c+76,"top WBU io_ms_to_ws_valid", false,-1);
        tracep->declQuad(c+74,"top WBU io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+77,"top WBU io_rf_we", false,-1);
        tracep->declBus(c+60,"top WBU io_rf_dst", false,-1, 4,0);
        tracep->declBit(c+7,"top WBU io_we", false,-1);
        tracep->declBus(c+8,"top WBU io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU io_wdata", false,-1, 63,0);
        tracep->declBit(c+58,"top WBU io_ws_valid", false,-1);
        tracep->declBit(c+55,"top WBU io_ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU io_ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU io_ws_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+89,"top WBU io_ws_pc", false,-1, 63,0);
        tracep->declBit(c+58,"top WBU ws_valid", false,-1);
        tracep->declQuad(c+89,"top WBU ws_pc", false,-1, 63,0);
        tracep->declBit(c+55,"top WBU ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU ws_res", false,-1, 63,0);
        tracep->declBit(c+1820,"top arbiter clock", false,-1);
        tracep->declBit(c+1821,"top arbiter reset", false,-1);
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
        tracep->declBus(c+527,"top arbiter state", false,-1, 1,0);
        tracep->declBit(c+1820,"top i_cache clock", false,-1);
        tracep->declBit(c+1821,"top i_cache reset", false,-1);
        tracep->declBus(c+23,"top i_cache io_from_ifu_araddr", false,-1, 31,0);
        tracep->declBit(c+24,"top i_cache io_from_ifu_arvalid", false,-1);
        tracep->declBit(c+25,"top i_cache io_from_ifu_rready", false,-1);
        tracep->declQuad(c+19,"top i_cache io_to_ifu_rdata", false,-1, 63,0);
        tracep->declBit(c+21,"top i_cache io_to_ifu_rlast", false,-1);
        tracep->declBit(c+22,"top i_cache io_to_ifu_rvalid", false,-1);
        tracep->declBus(c+91,"top i_cache io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+92,"top i_cache io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+93,"top i_cache io_to_axi_arvalid", false,-1);
        tracep->declBit(c+94,"top i_cache io_to_axi_rready", false,-1);
        tracep->declQuad(c+95,"top i_cache io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+97,"top i_cache io_from_axi_rlast", false,-1);
        tracep->declBit(c+98,"top i_cache io_from_axi_rvalid", false,-1);
        tracep->declBit(c+28,"top i_cache io_cache_init", false,-1);
        tracep->declBit(c+27,"top i_cache io_clear_cache", false,-1);
        tracep->declArray(c+528,"top i_cache ram_0_0", false,-1, 511,0);
        tracep->declArray(c+544,"top i_cache ram_0_1", false,-1, 511,0);
        tracep->declArray(c+560,"top i_cache ram_0_2", false,-1, 511,0);
        tracep->declArray(c+576,"top i_cache ram_0_3", false,-1, 511,0);
        tracep->declArray(c+592,"top i_cache ram_0_4", false,-1, 511,0);
        tracep->declArray(c+608,"top i_cache ram_0_5", false,-1, 511,0);
        tracep->declArray(c+624,"top i_cache ram_0_6", false,-1, 511,0);
        tracep->declArray(c+640,"top i_cache ram_0_7", false,-1, 511,0);
        tracep->declArray(c+656,"top i_cache ram_0_8", false,-1, 511,0);
        tracep->declArray(c+672,"top i_cache ram_0_9", false,-1, 511,0);
        tracep->declArray(c+688,"top i_cache ram_0_10", false,-1, 511,0);
        tracep->declArray(c+704,"top i_cache ram_0_11", false,-1, 511,0);
        tracep->declArray(c+720,"top i_cache ram_0_12", false,-1, 511,0);
        tracep->declArray(c+736,"top i_cache ram_0_13", false,-1, 511,0);
        tracep->declArray(c+752,"top i_cache ram_0_14", false,-1, 511,0);
        tracep->declArray(c+768,"top i_cache ram_0_15", false,-1, 511,0);
        tracep->declArray(c+784,"top i_cache ram_1_0", false,-1, 511,0);
        tracep->declArray(c+800,"top i_cache ram_1_1", false,-1, 511,0);
        tracep->declArray(c+816,"top i_cache ram_1_2", false,-1, 511,0);
        tracep->declArray(c+832,"top i_cache ram_1_3", false,-1, 511,0);
        tracep->declArray(c+848,"top i_cache ram_1_4", false,-1, 511,0);
        tracep->declArray(c+864,"top i_cache ram_1_5", false,-1, 511,0);
        tracep->declArray(c+880,"top i_cache ram_1_6", false,-1, 511,0);
        tracep->declArray(c+896,"top i_cache ram_1_7", false,-1, 511,0);
        tracep->declArray(c+912,"top i_cache ram_1_8", false,-1, 511,0);
        tracep->declArray(c+928,"top i_cache ram_1_9", false,-1, 511,0);
        tracep->declArray(c+944,"top i_cache ram_1_10", false,-1, 511,0);
        tracep->declArray(c+960,"top i_cache ram_1_11", false,-1, 511,0);
        tracep->declArray(c+976,"top i_cache ram_1_12", false,-1, 511,0);
        tracep->declArray(c+992,"top i_cache ram_1_13", false,-1, 511,0);
        tracep->declArray(c+1008,"top i_cache ram_1_14", false,-1, 511,0);
        tracep->declArray(c+1024,"top i_cache ram_1_15", false,-1, 511,0);
        tracep->declBus(c+1040,"top i_cache tag_0_0", false,-1, 31,0);
        tracep->declBus(c+1041,"top i_cache tag_0_1", false,-1, 31,0);
        tracep->declBus(c+1042,"top i_cache tag_0_2", false,-1, 31,0);
        tracep->declBus(c+1043,"top i_cache tag_0_3", false,-1, 31,0);
        tracep->declBus(c+1044,"top i_cache tag_0_4", false,-1, 31,0);
        tracep->declBus(c+1045,"top i_cache tag_0_5", false,-1, 31,0);
        tracep->declBus(c+1046,"top i_cache tag_0_6", false,-1, 31,0);
        tracep->declBus(c+1047,"top i_cache tag_0_7", false,-1, 31,0);
        tracep->declBus(c+1048,"top i_cache tag_0_8", false,-1, 31,0);
        tracep->declBus(c+1049,"top i_cache tag_0_9", false,-1, 31,0);
        tracep->declBus(c+1050,"top i_cache tag_0_10", false,-1, 31,0);
        tracep->declBus(c+1051,"top i_cache tag_0_11", false,-1, 31,0);
        tracep->declBus(c+1052,"top i_cache tag_0_12", false,-1, 31,0);
        tracep->declBus(c+1053,"top i_cache tag_0_13", false,-1, 31,0);
        tracep->declBus(c+1054,"top i_cache tag_0_14", false,-1, 31,0);
        tracep->declBus(c+1055,"top i_cache tag_0_15", false,-1, 31,0);
        tracep->declBus(c+1056,"top i_cache tag_1_0", false,-1, 31,0);
        tracep->declBus(c+1057,"top i_cache tag_1_1", false,-1, 31,0);
        tracep->declBus(c+1058,"top i_cache tag_1_2", false,-1, 31,0);
        tracep->declBus(c+1059,"top i_cache tag_1_3", false,-1, 31,0);
        tracep->declBus(c+1060,"top i_cache tag_1_4", false,-1, 31,0);
        tracep->declBus(c+1061,"top i_cache tag_1_5", false,-1, 31,0);
        tracep->declBus(c+1062,"top i_cache tag_1_6", false,-1, 31,0);
        tracep->declBus(c+1063,"top i_cache tag_1_7", false,-1, 31,0);
        tracep->declBus(c+1064,"top i_cache tag_1_8", false,-1, 31,0);
        tracep->declBus(c+1065,"top i_cache tag_1_9", false,-1, 31,0);
        tracep->declBus(c+1066,"top i_cache tag_1_10", false,-1, 31,0);
        tracep->declBus(c+1067,"top i_cache tag_1_11", false,-1, 31,0);
        tracep->declBus(c+1068,"top i_cache tag_1_12", false,-1, 31,0);
        tracep->declBus(c+1069,"top i_cache tag_1_13", false,-1, 31,0);
        tracep->declBus(c+1070,"top i_cache tag_1_14", false,-1, 31,0);
        tracep->declBus(c+1071,"top i_cache tag_1_15", false,-1, 31,0);
        tracep->declBit(c+1072,"top i_cache valid_0_0", false,-1);
        tracep->declBit(c+1073,"top i_cache valid_0_1", false,-1);
        tracep->declBit(c+1074,"top i_cache valid_0_2", false,-1);
        tracep->declBit(c+1075,"top i_cache valid_0_3", false,-1);
        tracep->declBit(c+1076,"top i_cache valid_0_4", false,-1);
        tracep->declBit(c+1077,"top i_cache valid_0_5", false,-1);
        tracep->declBit(c+1078,"top i_cache valid_0_6", false,-1);
        tracep->declBit(c+1079,"top i_cache valid_0_7", false,-1);
        tracep->declBit(c+1080,"top i_cache valid_0_8", false,-1);
        tracep->declBit(c+1081,"top i_cache valid_0_9", false,-1);
        tracep->declBit(c+1082,"top i_cache valid_0_10", false,-1);
        tracep->declBit(c+1083,"top i_cache valid_0_11", false,-1);
        tracep->declBit(c+1084,"top i_cache valid_0_12", false,-1);
        tracep->declBit(c+1085,"top i_cache valid_0_13", false,-1);
        tracep->declBit(c+1086,"top i_cache valid_0_14", false,-1);
        tracep->declBit(c+1087,"top i_cache valid_0_15", false,-1);
        tracep->declBit(c+1088,"top i_cache valid_1_0", false,-1);
        tracep->declBit(c+1089,"top i_cache valid_1_1", false,-1);
        tracep->declBit(c+1090,"top i_cache valid_1_2", false,-1);
        tracep->declBit(c+1091,"top i_cache valid_1_3", false,-1);
        tracep->declBit(c+1092,"top i_cache valid_1_4", false,-1);
        tracep->declBit(c+1093,"top i_cache valid_1_5", false,-1);
        tracep->declBit(c+1094,"top i_cache valid_1_6", false,-1);
        tracep->declBit(c+1095,"top i_cache valid_1_7", false,-1);
        tracep->declBit(c+1096,"top i_cache valid_1_8", false,-1);
        tracep->declBit(c+1097,"top i_cache valid_1_9", false,-1);
        tracep->declBit(c+1098,"top i_cache valid_1_10", false,-1);
        tracep->declBit(c+1099,"top i_cache valid_1_11", false,-1);
        tracep->declBit(c+1100,"top i_cache valid_1_12", false,-1);
        tracep->declBit(c+1101,"top i_cache valid_1_13", false,-1);
        tracep->declBit(c+1102,"top i_cache valid_1_14", false,-1);
        tracep->declBit(c+1103,"top i_cache valid_1_15", false,-1);
        tracep->declQuad(c+1104,"top i_cache receive_data_0", false,-1, 63,0);
        tracep->declQuad(c+1106,"top i_cache receive_data_1", false,-1, 63,0);
        tracep->declQuad(c+1108,"top i_cache receive_data_2", false,-1, 63,0);
        tracep->declQuad(c+1110,"top i_cache receive_data_3", false,-1, 63,0);
        tracep->declQuad(c+1112,"top i_cache receive_data_4", false,-1, 63,0);
        tracep->declQuad(c+1114,"top i_cache receive_data_5", false,-1, 63,0);
        tracep->declQuad(c+1116,"top i_cache receive_data_6", false,-1, 63,0);
        tracep->declQuad(c+1118,"top i_cache receive_data_7", false,-1, 63,0);
        tracep->declBus(c+1120,"top i_cache receive_num", false,-1, 2,0);
        tracep->declBus(c+1121,"top i_cache quene_0", false,-1, 1,0);
        tracep->declBus(c+1122,"top i_cache quene_1", false,-1, 1,0);
        tracep->declBus(c+1123,"top i_cache quene_2", false,-1, 1,0);
        tracep->declBus(c+1124,"top i_cache quene_3", false,-1, 1,0);
        tracep->declBus(c+1125,"top i_cache quene_4", false,-1, 1,0);
        tracep->declBus(c+1126,"top i_cache quene_5", false,-1, 1,0);
        tracep->declBus(c+1127,"top i_cache quene_6", false,-1, 1,0);
        tracep->declBus(c+1128,"top i_cache quene_7", false,-1, 1,0);
        tracep->declBus(c+1129,"top i_cache quene_8", false,-1, 1,0);
        tracep->declBus(c+1130,"top i_cache quene_9", false,-1, 1,0);
        tracep->declBus(c+1131,"top i_cache quene_10", false,-1, 1,0);
        tracep->declBus(c+1132,"top i_cache quene_11", false,-1, 1,0);
        tracep->declBus(c+1133,"top i_cache quene_12", false,-1, 1,0);
        tracep->declBus(c+1134,"top i_cache quene_13", false,-1, 1,0);
        tracep->declBus(c+1135,"top i_cache quene_14", false,-1, 1,0);
        tracep->declBus(c+1136,"top i_cache quene_15", false,-1, 1,0);
        tracep->declBus(c+1137,"top i_cache offset", false,-1, 5,0);
        tracep->declBus(c+1138,"top i_cache index", false,-1, 3,0);
        tracep->declBus(c+1139,"top i_cache tag", false,-1, 21,0);
        tracep->declBus(c+1140,"top i_cache shift_bit", false,-1, 8,0);
        tracep->declBit(c+1141,"top i_cache way0_hit", false,-1);
        tracep->declBit(c+1142,"top i_cache way1_hit", false,-1);
        tracep->declBus(c+1143,"top i_cache unuse_way", false,-1, 1,0);
        tracep->declBus(c+1144,"top i_cache state", false,-1, 2,0);
        tracep->declBit(c+1820,"top d_cache clock", false,-1);
        tracep->declBit(c+1821,"top d_cache reset", false,-1);
        tracep->declBus(c+82,"top d_cache io_from_lsu_araddr", false,-1, 31,0);
        tracep->declBit(c+83,"top d_cache io_from_lsu_arvalid", false,-1);
        tracep->declBus(c+82,"top d_cache io_from_lsu_awaddr", false,-1, 31,0);
        tracep->declBit(c+84,"top d_cache io_from_lsu_awvalid", false,-1);
        tracep->declQuad(c+85,"top d_cache io_from_lsu_wdata", false,-1, 63,0);
        tracep->declBus(c+87,"top d_cache io_from_lsu_wstrb", false,-1, 7,0);
        tracep->declBit(c+88,"top d_cache io_from_lsu_wvalid", false,-1);
        tracep->declQuad(c+78,"top d_cache io_to_lsu_rdata", false,-1, 63,0);
        tracep->declBit(c+80,"top d_cache io_to_lsu_rvalid", false,-1);
        tracep->declBit(c+81,"top d_cache io_to_lsu_wready", false,-1);
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
        tracep->declArray(c+1145,"top d_cache ram_0_0", false,-1, 511,0);
        tracep->declArray(c+1161,"top d_cache ram_0_1", false,-1, 511,0);
        tracep->declArray(c+1177,"top d_cache ram_0_2", false,-1, 511,0);
        tracep->declArray(c+1193,"top d_cache ram_0_3", false,-1, 511,0);
        tracep->declArray(c+1209,"top d_cache ram_0_4", false,-1, 511,0);
        tracep->declArray(c+1225,"top d_cache ram_0_5", false,-1, 511,0);
        tracep->declArray(c+1241,"top d_cache ram_0_6", false,-1, 511,0);
        tracep->declArray(c+1257,"top d_cache ram_0_7", false,-1, 511,0);
        tracep->declArray(c+1273,"top d_cache ram_0_8", false,-1, 511,0);
        tracep->declArray(c+1289,"top d_cache ram_0_9", false,-1, 511,0);
        tracep->declArray(c+1305,"top d_cache ram_0_10", false,-1, 511,0);
        tracep->declArray(c+1321,"top d_cache ram_0_11", false,-1, 511,0);
        tracep->declArray(c+1337,"top d_cache ram_0_12", false,-1, 511,0);
        tracep->declArray(c+1353,"top d_cache ram_0_13", false,-1, 511,0);
        tracep->declArray(c+1369,"top d_cache ram_0_14", false,-1, 511,0);
        tracep->declArray(c+1385,"top d_cache ram_0_15", false,-1, 511,0);
        tracep->declArray(c+1401,"top d_cache ram_1_0", false,-1, 511,0);
        tracep->declArray(c+1417,"top d_cache ram_1_1", false,-1, 511,0);
        tracep->declArray(c+1433,"top d_cache ram_1_2", false,-1, 511,0);
        tracep->declArray(c+1449,"top d_cache ram_1_3", false,-1, 511,0);
        tracep->declArray(c+1465,"top d_cache ram_1_4", false,-1, 511,0);
        tracep->declArray(c+1481,"top d_cache ram_1_5", false,-1, 511,0);
        tracep->declArray(c+1497,"top d_cache ram_1_6", false,-1, 511,0);
        tracep->declArray(c+1513,"top d_cache ram_1_7", false,-1, 511,0);
        tracep->declArray(c+1529,"top d_cache ram_1_8", false,-1, 511,0);
        tracep->declArray(c+1545,"top d_cache ram_1_9", false,-1, 511,0);
        tracep->declArray(c+1561,"top d_cache ram_1_10", false,-1, 511,0);
        tracep->declArray(c+1577,"top d_cache ram_1_11", false,-1, 511,0);
        tracep->declArray(c+1593,"top d_cache ram_1_12", false,-1, 511,0);
        tracep->declArray(c+1609,"top d_cache ram_1_13", false,-1, 511,0);
        tracep->declArray(c+1625,"top d_cache ram_1_14", false,-1, 511,0);
        tracep->declArray(c+1641,"top d_cache ram_1_15", false,-1, 511,0);
        tracep->declBus(c+1657,"top d_cache tag_0_0", false,-1, 31,0);
        tracep->declBus(c+1658,"top d_cache tag_0_1", false,-1, 31,0);
        tracep->declBus(c+1659,"top d_cache tag_0_2", false,-1, 31,0);
        tracep->declBus(c+1660,"top d_cache tag_0_3", false,-1, 31,0);
        tracep->declBus(c+1661,"top d_cache tag_0_4", false,-1, 31,0);
        tracep->declBus(c+1662,"top d_cache tag_0_5", false,-1, 31,0);
        tracep->declBus(c+1663,"top d_cache tag_0_6", false,-1, 31,0);
        tracep->declBus(c+1664,"top d_cache tag_0_7", false,-1, 31,0);
        tracep->declBus(c+1665,"top d_cache tag_0_8", false,-1, 31,0);
        tracep->declBus(c+1666,"top d_cache tag_0_9", false,-1, 31,0);
        tracep->declBus(c+1667,"top d_cache tag_0_10", false,-1, 31,0);
        tracep->declBus(c+1668,"top d_cache tag_0_11", false,-1, 31,0);
        tracep->declBus(c+1669,"top d_cache tag_0_12", false,-1, 31,0);
        tracep->declBus(c+1670,"top d_cache tag_0_13", false,-1, 31,0);
        tracep->declBus(c+1671,"top d_cache tag_0_14", false,-1, 31,0);
        tracep->declBus(c+1672,"top d_cache tag_0_15", false,-1, 31,0);
        tracep->declBus(c+1673,"top d_cache tag_1_0", false,-1, 31,0);
        tracep->declBus(c+1674,"top d_cache tag_1_1", false,-1, 31,0);
        tracep->declBus(c+1675,"top d_cache tag_1_2", false,-1, 31,0);
        tracep->declBus(c+1676,"top d_cache tag_1_3", false,-1, 31,0);
        tracep->declBus(c+1677,"top d_cache tag_1_4", false,-1, 31,0);
        tracep->declBus(c+1678,"top d_cache tag_1_5", false,-1, 31,0);
        tracep->declBus(c+1679,"top d_cache tag_1_6", false,-1, 31,0);
        tracep->declBus(c+1680,"top d_cache tag_1_7", false,-1, 31,0);
        tracep->declBus(c+1681,"top d_cache tag_1_8", false,-1, 31,0);
        tracep->declBus(c+1682,"top d_cache tag_1_9", false,-1, 31,0);
        tracep->declBus(c+1683,"top d_cache tag_1_10", false,-1, 31,0);
        tracep->declBus(c+1684,"top d_cache tag_1_11", false,-1, 31,0);
        tracep->declBus(c+1685,"top d_cache tag_1_12", false,-1, 31,0);
        tracep->declBus(c+1686,"top d_cache tag_1_13", false,-1, 31,0);
        tracep->declBus(c+1687,"top d_cache tag_1_14", false,-1, 31,0);
        tracep->declBus(c+1688,"top d_cache tag_1_15", false,-1, 31,0);
        tracep->declBit(c+1689,"top d_cache valid_0_0", false,-1);
        tracep->declBit(c+1690,"top d_cache valid_0_1", false,-1);
        tracep->declBit(c+1691,"top d_cache valid_0_2", false,-1);
        tracep->declBit(c+1692,"top d_cache valid_0_3", false,-1);
        tracep->declBit(c+1693,"top d_cache valid_0_4", false,-1);
        tracep->declBit(c+1694,"top d_cache valid_0_5", false,-1);
        tracep->declBit(c+1695,"top d_cache valid_0_6", false,-1);
        tracep->declBit(c+1696,"top d_cache valid_0_7", false,-1);
        tracep->declBit(c+1697,"top d_cache valid_0_8", false,-1);
        tracep->declBit(c+1698,"top d_cache valid_0_9", false,-1);
        tracep->declBit(c+1699,"top d_cache valid_0_10", false,-1);
        tracep->declBit(c+1700,"top d_cache valid_0_11", false,-1);
        tracep->declBit(c+1701,"top d_cache valid_0_12", false,-1);
        tracep->declBit(c+1702,"top d_cache valid_0_13", false,-1);
        tracep->declBit(c+1703,"top d_cache valid_0_14", false,-1);
        tracep->declBit(c+1704,"top d_cache valid_0_15", false,-1);
        tracep->declBit(c+1705,"top d_cache valid_1_0", false,-1);
        tracep->declBit(c+1706,"top d_cache valid_1_1", false,-1);
        tracep->declBit(c+1707,"top d_cache valid_1_2", false,-1);
        tracep->declBit(c+1708,"top d_cache valid_1_3", false,-1);
        tracep->declBit(c+1709,"top d_cache valid_1_4", false,-1);
        tracep->declBit(c+1710,"top d_cache valid_1_5", false,-1);
        tracep->declBit(c+1711,"top d_cache valid_1_6", false,-1);
        tracep->declBit(c+1712,"top d_cache valid_1_7", false,-1);
        tracep->declBit(c+1713,"top d_cache valid_1_8", false,-1);
        tracep->declBit(c+1714,"top d_cache valid_1_9", false,-1);
        tracep->declBit(c+1715,"top d_cache valid_1_10", false,-1);
        tracep->declBit(c+1716,"top d_cache valid_1_11", false,-1);
        tracep->declBit(c+1717,"top d_cache valid_1_12", false,-1);
        tracep->declBit(c+1718,"top d_cache valid_1_13", false,-1);
        tracep->declBit(c+1719,"top d_cache valid_1_14", false,-1);
        tracep->declBit(c+1720,"top d_cache valid_1_15", false,-1);
        tracep->declBit(c+1721,"top d_cache dirty_0_0", false,-1);
        tracep->declBit(c+1722,"top d_cache dirty_0_1", false,-1);
        tracep->declBit(c+1723,"top d_cache dirty_0_2", false,-1);
        tracep->declBit(c+1724,"top d_cache dirty_0_3", false,-1);
        tracep->declBit(c+1725,"top d_cache dirty_0_4", false,-1);
        tracep->declBit(c+1726,"top d_cache dirty_0_5", false,-1);
        tracep->declBit(c+1727,"top d_cache dirty_0_6", false,-1);
        tracep->declBit(c+1728,"top d_cache dirty_0_7", false,-1);
        tracep->declBit(c+1729,"top d_cache dirty_0_8", false,-1);
        tracep->declBit(c+1730,"top d_cache dirty_0_9", false,-1);
        tracep->declBit(c+1731,"top d_cache dirty_0_10", false,-1);
        tracep->declBit(c+1732,"top d_cache dirty_0_11", false,-1);
        tracep->declBit(c+1733,"top d_cache dirty_0_12", false,-1);
        tracep->declBit(c+1734,"top d_cache dirty_0_13", false,-1);
        tracep->declBit(c+1735,"top d_cache dirty_0_14", false,-1);
        tracep->declBit(c+1736,"top d_cache dirty_0_15", false,-1);
        tracep->declBit(c+1737,"top d_cache dirty_1_0", false,-1);
        tracep->declBit(c+1738,"top d_cache dirty_1_1", false,-1);
        tracep->declBit(c+1739,"top d_cache dirty_1_2", false,-1);
        tracep->declBit(c+1740,"top d_cache dirty_1_3", false,-1);
        tracep->declBit(c+1741,"top d_cache dirty_1_4", false,-1);
        tracep->declBit(c+1742,"top d_cache dirty_1_5", false,-1);
        tracep->declBit(c+1743,"top d_cache dirty_1_6", false,-1);
        tracep->declBit(c+1744,"top d_cache dirty_1_7", false,-1);
        tracep->declBit(c+1745,"top d_cache dirty_1_8", false,-1);
        tracep->declBit(c+1746,"top d_cache dirty_1_9", false,-1);
        tracep->declBit(c+1747,"top d_cache dirty_1_10", false,-1);
        tracep->declBit(c+1748,"top d_cache dirty_1_11", false,-1);
        tracep->declBit(c+1749,"top d_cache dirty_1_12", false,-1);
        tracep->declBit(c+1750,"top d_cache dirty_1_13", false,-1);
        tracep->declBit(c+1751,"top d_cache dirty_1_14", false,-1);
        tracep->declBit(c+1752,"top d_cache dirty_1_15", false,-1);
        tracep->declArray(c+1753,"top d_cache write_back_data", false,-1, 511,0);
        tracep->declBus(c+1769,"top d_cache write_back_addr", false,-1, 31,0);
        tracep->declQuad(c+1770,"top d_cache receive_data_0", false,-1, 63,0);
        tracep->declQuad(c+1772,"top d_cache receive_data_1", false,-1, 63,0);
        tracep->declQuad(c+1774,"top d_cache receive_data_2", false,-1, 63,0);
        tracep->declQuad(c+1776,"top d_cache receive_data_3", false,-1, 63,0);
        tracep->declQuad(c+1778,"top d_cache receive_data_4", false,-1, 63,0);
        tracep->declQuad(c+1780,"top d_cache receive_data_5", false,-1, 63,0);
        tracep->declQuad(c+1782,"top d_cache receive_data_6", false,-1, 63,0);
        tracep->declQuad(c+1784,"top d_cache receive_data_7", false,-1, 63,0);
        tracep->declBus(c+1786,"top d_cache receive_num", false,-1, 2,0);
        tracep->declBus(c+1787,"top d_cache quene_0", false,-1, 1,0);
        tracep->declBus(c+1788,"top d_cache quene_1", false,-1, 1,0);
        tracep->declBus(c+1789,"top d_cache quene_2", false,-1, 1,0);
        tracep->declBus(c+1790,"top d_cache quene_3", false,-1, 1,0);
        tracep->declBus(c+1791,"top d_cache quene_4", false,-1, 1,0);
        tracep->declBus(c+1792,"top d_cache quene_5", false,-1, 1,0);
        tracep->declBus(c+1793,"top d_cache quene_6", false,-1, 1,0);
        tracep->declBus(c+1794,"top d_cache quene_7", false,-1, 1,0);
        tracep->declBus(c+1795,"top d_cache quene_8", false,-1, 1,0);
        tracep->declBus(c+1796,"top d_cache quene_9", false,-1, 1,0);
        tracep->declBus(c+1797,"top d_cache quene_10", false,-1, 1,0);
        tracep->declBus(c+1798,"top d_cache quene_11", false,-1, 1,0);
        tracep->declBus(c+1799,"top d_cache quene_12", false,-1, 1,0);
        tracep->declBus(c+1800,"top d_cache quene_13", false,-1, 1,0);
        tracep->declBus(c+1801,"top d_cache quene_14", false,-1, 1,0);
        tracep->declBus(c+1802,"top d_cache quene_15", false,-1, 1,0);
        tracep->declBus(c+1803,"top d_cache offset", false,-1, 5,0);
        tracep->declBus(c+1804,"top d_cache index", false,-1, 3,0);
        tracep->declBus(c+1805,"top d_cache tag", false,-1, 21,0);
        tracep->declBus(c+1806,"top d_cache shift_bit", false,-1, 8,0);
        tracep->declQuad(c+1807,"top d_cache wmask", false,-1, 63,0);
        tracep->declBit(c+1809,"top d_cache way0_hit", false,-1);
        tracep->declBit(c+1810,"top d_cache way1_hit", false,-1);
        tracep->declBus(c+1811,"top d_cache unuse_way", false,-1, 1,0);
        tracep->declBus(c+1812,"top d_cache state", false,-1, 3,0);
        tracep->declBit(c+1820,"top axi clock", false,-1);
        tracep->declBit(c+1821,"top axi reset", false,-1);
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
        tracep->declQuad(c+1813,"top axi Mem_modle_Raddr", false,-1, 63,0);
        tracep->declQuad(c+117,"top axi Mem_modle_Rdata", false,-1, 63,0);
        tracep->declQuad(c+1815,"top axi Mem_modle_Waddr", false,-1, 63,0);
        tracep->declQuad(c+130,"top axi Mem_modle_Wdata", false,-1, 63,0);
        tracep->declBus(c+132,"top axi Mem_modle_Wmask", false,-1, 7,0);
        tracep->declBit(c+121,"top axi Mem_modle_Write_en", false,-1);
        tracep->declBit(c+120,"top axi Mem_modle_Read_en", false,-1);
        tracep->declBit(c+121,"top axi axi_wready", false,-1);
        tracep->declBit(c+122,"top axi axi_bvalid", false,-1);
        tracep->declBit(c+120,"top axi axi_rvalid", false,-1);
        tracep->declBus(c+1817,"top axi arlen", false,-1, 7,0);
        tracep->declBus(c+1818,"top axi awlen", false,-1, 7,0);
        tracep->declQuad(c+1813,"top axi araddr", false,-1, 63,0);
        tracep->declQuad(c+1815,"top axi awaddr", false,-1, 63,0);
        tracep->declBus(c+1819,"top axi state", false,-1, 2,0);
        tracep->declQuad(c+1813,"top axi Mem_modle Raddr", false,-1, 63,0);
        tracep->declQuad(c+1815,"top axi Mem_modle Waddr", false,-1, 63,0);
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
                                     : vlSelf->top__DOT__IDU__DOT___br_taken_T_1)),64);
        tracep->fullCData(oldp+38,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                             >> 7U))),5);
        tracep->fullQData(oldp+39,(((0x3023U == (0x707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                     ? vlSelf->top__DOT__IDU__DOT___br_taken_T_1
                                     : (QData)((IData)(
                                                       ((0x1023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__IDU__DOT__inst))
                                                         ? 
                                                        (0xffffU 
                                                         & (IData)(vlSelf->top__DOT__IDU__DOT___br_taken_T_1))
                                                         : 
                                                        ((0x23U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__IDU__DOT__inst))
                                                          ? 
                                                         (0xffU 
                                                          & (IData)(vlSelf->top__DOT__IDU__DOT___br_taken_T_1))
                                                          : 
                                                         ((0x2023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__IDU__DOT__inst))
                                                           ? (IData)(vlSelf->top__DOT__IDU__DOT___br_taken_T_1)
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
        tracep->fullBit(oldp+46,(((IData)(vlSelf->top__DOT__EXU__DOT__ld_we) 
                                  & (IData)(vlSelf->top__DOT__EXU__DOT__es_valid))));
        tracep->fullQData(oldp+47,((((QData)((IData)(
                                                     vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])))),64);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__LSU_io_ms_fwd_res),64);
        tracep->fullBit(oldp+51,(((IData)(vlSelf->top__DOT__EXU__DOT__es_valid) 
                                  & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy)))));
        tracep->fullBit(oldp+52,(((IData)(vlSelf->top__DOT__LSU__DOT__ms_valid) 
                                  & (IData)(vlSelf->top__DOT__LSU__DOT__ms_ready_go))));
        tracep->fullBit(oldp+53,(vlSelf->top__DOT__EXU__DOT__es_rf_we));
        tracep->fullBit(oldp+54,(vlSelf->top__DOT__LSU_io_ms_rf_we));
        tracep->fullBit(oldp+55,(vlSelf->top__DOT__WBU__DOT__ws_rf_we));
        tracep->fullBit(oldp+56,(vlSelf->top__DOT__EXU__DOT__es_valid));
        tracep->fullBit(oldp+57,(vlSelf->top__DOT__LSU__DOT__ms_valid));
        tracep->fullBit(oldp+58,(vlSelf->top__DOT__WBU__DOT__ws_valid));
        tracep->fullCData(oldp+59,(vlSelf->top__DOT__EXU__DOT__es_rd),5);
        tracep->fullCData(oldp+60,(vlSelf->top__DOT__LSU__DOT__ms_rf_dst),5);
        tracep->fullBit(oldp+61,(vlSelf->top__DOT__IDU__DOT__ds_valid));
        tracep->fullBit(oldp+62,(vlSelf->top__DOT__LSU_io_ms_allowin));
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
        tracep->fullQData(oldp+78,((((QData)((IData)(
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
        tracep->fullBit(oldp+80,(vlSelf->top__DOT__d_cache_io_to_lsu_rvalid));
        tracep->fullBit(oldp+81,(vlSelf->top__DOT__d_cache_io_to_lsu_wready));
        tracep->fullIData(oldp+82,((IData)(vlSelf->top__DOT__LSU__DOT__maddr)),32);
        tracep->fullBit(oldp+83,(vlSelf->top__DOT__LSU_io_axi_out_arvalid));
        tracep->fullBit(oldp+84,(vlSelf->top__DOT__LSU_io_axi_out_awvalid));
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__LSU__DOT__store_data),64);
        tracep->fullCData(oldp+87,(vlSelf->top__DOT__LSU__DOT__wstrb),8);
        tracep->fullBit(oldp+88,(vlSelf->top__DOT__LSU__DOT__wen));
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__WBU__DOT__ws_pc),64);
        tracep->fullIData(oldp+91,((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1257)),32);
        tracep->fullCData(oldp+92,(vlSelf->top__DOT__i_cache__DOT___GEN_1258),8);
        tracep->fullBit(oldp+93,(vlSelf->top__DOT__i_cache_io_to_axi_arvalid));
        tracep->fullBit(oldp+94,(vlSelf->top__DOT__i_cache_io_to_axi_rready));
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata),64);
        tracep->fullBit(oldp+97,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast));
        tracep->fullBit(oldp+98,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid));
        tracep->fullIData(oldp+99,((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2409)),32);
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
        tracep->fullBit(oldp+115,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_wready));
        tracep->fullBit(oldp+116,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid));
        tracep->fullQData(oldp+117,(vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata),64);
        tracep->fullBit(oldp+119,(vlSelf->top__DOT__axi_io_axi_out_rlast));
        tracep->fullBit(oldp+120,(vlSelf->top__DOT__axi__DOT__axi_rvalid));
        tracep->fullBit(oldp+121,(vlSelf->top__DOT__axi__DOT__axi_wready));
        tracep->fullBit(oldp+122,(vlSelf->top__DOT__axi__DOT__axi_bvalid));
        tracep->fullIData(oldp+123,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullCData(oldp+124,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullBit(oldp+337,(vlSelf->top__DOT__IFU__DOT__fs_valid));
        tracep->fullBit(oldp+338,(vlSelf->top__DOT__IFU__DOT__fs_ready_go));
        tracep->fullBit(oldp+339,(vlSelf->top__DOT__IFU__DOT__cache_init));
        tracep->fullBit(oldp+340,(vlSelf->top__DOT__IFU__DOT__fs_to_ds_valid));
        tracep->fullQData(oldp+341,((4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc)),64);
        tracep->fullBit(oldp+343,(vlSelf->top__DOT__IFU__DOT__fs_allowin));
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
                                              ? vlSelf->top__DOT__IDU__DOT___br_taken_T
                                              : ((0x2073U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                                  ? 
                                                 (vlSelf->top__DOT__IDU__DOT___br_taken_T 
                                                  | vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data)
                                                  : 
                                                 ((0x3073U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 
                                                  (vlSelf->top__DOT__IDU__DOT___br_taken_T 
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
        tracep->fullBit(oldp+360,(vlSelf->top__DOT__IDU__DOT__src2_is_imm));
        tracep->fullCData(oldp+361,(vlSelf->top__DOT__IDU__DOT__rs2),5);
        tracep->fullBit(oldp+362,(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2));
        tracep->fullBit(oldp+363,(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1));
        tracep->fullBit(oldp+364,(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs2));
        tracep->fullBit(oldp+365,(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs1));
        tracep->fullBit(oldp+366,(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs2));
        tracep->fullBit(oldp+367,(vlSelf->top__DOT__IDU__DOT__ds_ready_go));
        tracep->fullBit(oldp+368,(vlSelf->top__DOT__IDU__DOT__ds_allowin));
        tracep->fullQData(oldp+369,(vlSelf->top__DOT__IDU__DOT___br_taken_T),64);
        tracep->fullQData(oldp+371,(vlSelf->top__DOT__IDU__DOT___br_taken_T_1),64);
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
                                      ? vlSelf->top__DOT__IDU__DOT___br_taken_T
                                      : ((0x2073U == 
                                          (0x707fU 
                                           & vlSelf->top__DOT__IDU__DOT__inst))
                                          ? (vlSelf->top__DOT__IDU__DOT___br_taken_T 
                                             | vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data)
                                          : ((0x3073U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                              ? (vlSelf->top__DOT__IDU__DOT___br_taken_T 
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
        VL_EXTEND_WQ(127,64, __Vtemp2439, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
        VL_SHIFTL_WWI(127,127,6, __Vtemp2440, __Vtemp2439, 
                      (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
        __Vtemp2441[0U] = __Vtemp2440[0U];
        __Vtemp2441[1U] = __Vtemp2440[1U];
        __Vtemp2441[2U] = __Vtemp2440[2U];
        __Vtemp2441[3U] = (0x7fffffffU & __Vtemp2440[3U]);
        tracep->fullWData(oldp+426,(__Vtemp2441),127);
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
        tracep->fullWData(oldp+469,(__Vtemp2461),128);
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
        VL_EXTEND_WQ(65,64, __Vtemp2462, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                           ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)
                                               ? (1ULL 
                                                  + 
                                                  (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s))
                                               : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s)
                                           : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                               ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                               : vlSelf->top__DOT__EXU__DOT__src2_value)));
        tracep->fullWData(oldp+490,(__Vtemp2462),65);
        tracep->fullWData(oldp+493,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand),128);
        tracep->fullBit(oldp+497,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start));
        tracep->fullQData(oldp+498,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient),64);
        tracep->fullIData(oldp+500,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num),32);
        VL_EXTEND_WQ(128,64, __Vtemp2463, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                            ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)
                                                ? (1ULL 
                                                   + 
                                                   (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s))
                                                : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s)
                                            : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                                ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                                : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)));
        tracep->fullWData(oldp+501,(__Vtemp2463),128);
        tracep->fullWData(oldp+505,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res),65);
        __Vtemp2464[0U] = 0U;
        __Vtemp2464[1U] = (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                           << 0x1fU);
        __Vtemp2464[2U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                            >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                      << 0x1fU));
        __Vtemp2464[3U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                            >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                      << 0x1fU));
        tracep->fullWData(oldp+508,(__Vtemp2464),128);
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
        tracep->fullWData(oldp+512,(__Vtemp2470),128);
        tracep->fullBit(oldp+516,(vlSelf->top__DOT__LSU__DOT__ms_ready_go));
        tracep->fullQData(oldp+517,(vlSelf->top__DOT__LSU__DOT__ms_res),64);
        tracep->fullBit(oldp+519,(vlSelf->top__DOT__LSU__DOT__ren));
        tracep->fullQData(oldp+520,(vlSelf->top__DOT__LSU__DOT__maddr),64);
        tracep->fullCData(oldp+522,(vlSelf->top__DOT__LSU__DOT__load_type),3);
        tracep->fullQData(oldp+523,(vlSelf->top__DOT__LSU__DOT__mem_rdata),64);
        tracep->fullQData(oldp+525,(vlSelf->top__DOT__LSU__DOT__rdata),64);
        tracep->fullCData(oldp+527,(vlSelf->top__DOT__arbiter__DOT__state),2);
        tracep->fullWData(oldp+528,(vlSelf->top__DOT__i_cache__DOT__ram_0_0),512);
        tracep->fullWData(oldp+544,(vlSelf->top__DOT__i_cache__DOT__ram_0_1),512);
        tracep->fullWData(oldp+560,(vlSelf->top__DOT__i_cache__DOT__ram_0_2),512);
        tracep->fullWData(oldp+576,(vlSelf->top__DOT__i_cache__DOT__ram_0_3),512);
        tracep->fullWData(oldp+592,(vlSelf->top__DOT__i_cache__DOT__ram_0_4),512);
        tracep->fullWData(oldp+608,(vlSelf->top__DOT__i_cache__DOT__ram_0_5),512);
        tracep->fullWData(oldp+624,(vlSelf->top__DOT__i_cache__DOT__ram_0_6),512);
        tracep->fullWData(oldp+640,(vlSelf->top__DOT__i_cache__DOT__ram_0_7),512);
        tracep->fullWData(oldp+656,(vlSelf->top__DOT__i_cache__DOT__ram_0_8),512);
        tracep->fullWData(oldp+672,(vlSelf->top__DOT__i_cache__DOT__ram_0_9),512);
        tracep->fullWData(oldp+688,(vlSelf->top__DOT__i_cache__DOT__ram_0_10),512);
        tracep->fullWData(oldp+704,(vlSelf->top__DOT__i_cache__DOT__ram_0_11),512);
        tracep->fullWData(oldp+720,(vlSelf->top__DOT__i_cache__DOT__ram_0_12),512);
        tracep->fullWData(oldp+736,(vlSelf->top__DOT__i_cache__DOT__ram_0_13),512);
        tracep->fullWData(oldp+752,(vlSelf->top__DOT__i_cache__DOT__ram_0_14),512);
        tracep->fullWData(oldp+768,(vlSelf->top__DOT__i_cache__DOT__ram_0_15),512);
        tracep->fullWData(oldp+784,(vlSelf->top__DOT__i_cache__DOT__ram_1_0),512);
        tracep->fullWData(oldp+800,(vlSelf->top__DOT__i_cache__DOT__ram_1_1),512);
        tracep->fullWData(oldp+816,(vlSelf->top__DOT__i_cache__DOT__ram_1_2),512);
        tracep->fullWData(oldp+832,(vlSelf->top__DOT__i_cache__DOT__ram_1_3),512);
        tracep->fullWData(oldp+848,(vlSelf->top__DOT__i_cache__DOT__ram_1_4),512);
        tracep->fullWData(oldp+864,(vlSelf->top__DOT__i_cache__DOT__ram_1_5),512);
        tracep->fullWData(oldp+880,(vlSelf->top__DOT__i_cache__DOT__ram_1_6),512);
        tracep->fullWData(oldp+896,(vlSelf->top__DOT__i_cache__DOT__ram_1_7),512);
        tracep->fullWData(oldp+912,(vlSelf->top__DOT__i_cache__DOT__ram_1_8),512);
        tracep->fullWData(oldp+928,(vlSelf->top__DOT__i_cache__DOT__ram_1_9),512);
        tracep->fullWData(oldp+944,(vlSelf->top__DOT__i_cache__DOT__ram_1_10),512);
        tracep->fullWData(oldp+960,(vlSelf->top__DOT__i_cache__DOT__ram_1_11),512);
        tracep->fullWData(oldp+976,(vlSelf->top__DOT__i_cache__DOT__ram_1_12),512);
        tracep->fullWData(oldp+992,(vlSelf->top__DOT__i_cache__DOT__ram_1_13),512);
        tracep->fullWData(oldp+1008,(vlSelf->top__DOT__i_cache__DOT__ram_1_14),512);
        tracep->fullWData(oldp+1024,(vlSelf->top__DOT__i_cache__DOT__ram_1_15),512);
        tracep->fullIData(oldp+1040,(vlSelf->top__DOT__i_cache__DOT__tag_0_0),32);
        tracep->fullIData(oldp+1041,(vlSelf->top__DOT__i_cache__DOT__tag_0_1),32);
        tracep->fullIData(oldp+1042,(vlSelf->top__DOT__i_cache__DOT__tag_0_2),32);
        tracep->fullIData(oldp+1043,(vlSelf->top__DOT__i_cache__DOT__tag_0_3),32);
        tracep->fullIData(oldp+1044,(vlSelf->top__DOT__i_cache__DOT__tag_0_4),32);
        tracep->fullIData(oldp+1045,(vlSelf->top__DOT__i_cache__DOT__tag_0_5),32);
        tracep->fullIData(oldp+1046,(vlSelf->top__DOT__i_cache__DOT__tag_0_6),32);
        tracep->fullIData(oldp+1047,(vlSelf->top__DOT__i_cache__DOT__tag_0_7),32);
        tracep->fullIData(oldp+1048,(vlSelf->top__DOT__i_cache__DOT__tag_0_8),32);
        tracep->fullIData(oldp+1049,(vlSelf->top__DOT__i_cache__DOT__tag_0_9),32);
        tracep->fullIData(oldp+1050,(vlSelf->top__DOT__i_cache__DOT__tag_0_10),32);
        tracep->fullIData(oldp+1051,(vlSelf->top__DOT__i_cache__DOT__tag_0_11),32);
        tracep->fullIData(oldp+1052,(vlSelf->top__DOT__i_cache__DOT__tag_0_12),32);
        tracep->fullIData(oldp+1053,(vlSelf->top__DOT__i_cache__DOT__tag_0_13),32);
        tracep->fullIData(oldp+1054,(vlSelf->top__DOT__i_cache__DOT__tag_0_14),32);
        tracep->fullIData(oldp+1055,(vlSelf->top__DOT__i_cache__DOT__tag_0_15),32);
        tracep->fullIData(oldp+1056,(vlSelf->top__DOT__i_cache__DOT__tag_1_0),32);
        tracep->fullIData(oldp+1057,(vlSelf->top__DOT__i_cache__DOT__tag_1_1),32);
        tracep->fullIData(oldp+1058,(vlSelf->top__DOT__i_cache__DOT__tag_1_2),32);
        tracep->fullIData(oldp+1059,(vlSelf->top__DOT__i_cache__DOT__tag_1_3),32);
        tracep->fullIData(oldp+1060,(vlSelf->top__DOT__i_cache__DOT__tag_1_4),32);
        tracep->fullIData(oldp+1061,(vlSelf->top__DOT__i_cache__DOT__tag_1_5),32);
        tracep->fullIData(oldp+1062,(vlSelf->top__DOT__i_cache__DOT__tag_1_6),32);
        tracep->fullIData(oldp+1063,(vlSelf->top__DOT__i_cache__DOT__tag_1_7),32);
        tracep->fullIData(oldp+1064,(vlSelf->top__DOT__i_cache__DOT__tag_1_8),32);
        tracep->fullIData(oldp+1065,(vlSelf->top__DOT__i_cache__DOT__tag_1_9),32);
        tracep->fullIData(oldp+1066,(vlSelf->top__DOT__i_cache__DOT__tag_1_10),32);
        tracep->fullIData(oldp+1067,(vlSelf->top__DOT__i_cache__DOT__tag_1_11),32);
        tracep->fullIData(oldp+1068,(vlSelf->top__DOT__i_cache__DOT__tag_1_12),32);
        tracep->fullIData(oldp+1069,(vlSelf->top__DOT__i_cache__DOT__tag_1_13),32);
        tracep->fullIData(oldp+1070,(vlSelf->top__DOT__i_cache__DOT__tag_1_14),32);
        tracep->fullIData(oldp+1071,(vlSelf->top__DOT__i_cache__DOT__tag_1_15),32);
        tracep->fullBit(oldp+1072,(vlSelf->top__DOT__i_cache__DOT__valid_0_0));
        tracep->fullBit(oldp+1073,(vlSelf->top__DOT__i_cache__DOT__valid_0_1));
        tracep->fullBit(oldp+1074,(vlSelf->top__DOT__i_cache__DOT__valid_0_2));
        tracep->fullBit(oldp+1075,(vlSelf->top__DOT__i_cache__DOT__valid_0_3));
        tracep->fullBit(oldp+1076,(vlSelf->top__DOT__i_cache__DOT__valid_0_4));
        tracep->fullBit(oldp+1077,(vlSelf->top__DOT__i_cache__DOT__valid_0_5));
        tracep->fullBit(oldp+1078,(vlSelf->top__DOT__i_cache__DOT__valid_0_6));
        tracep->fullBit(oldp+1079,(vlSelf->top__DOT__i_cache__DOT__valid_0_7));
        tracep->fullBit(oldp+1080,(vlSelf->top__DOT__i_cache__DOT__valid_0_8));
        tracep->fullBit(oldp+1081,(vlSelf->top__DOT__i_cache__DOT__valid_0_9));
        tracep->fullBit(oldp+1082,(vlSelf->top__DOT__i_cache__DOT__valid_0_10));
        tracep->fullBit(oldp+1083,(vlSelf->top__DOT__i_cache__DOT__valid_0_11));
        tracep->fullBit(oldp+1084,(vlSelf->top__DOT__i_cache__DOT__valid_0_12));
        tracep->fullBit(oldp+1085,(vlSelf->top__DOT__i_cache__DOT__valid_0_13));
        tracep->fullBit(oldp+1086,(vlSelf->top__DOT__i_cache__DOT__valid_0_14));
        tracep->fullBit(oldp+1087,(vlSelf->top__DOT__i_cache__DOT__valid_0_15));
        tracep->fullBit(oldp+1088,(vlSelf->top__DOT__i_cache__DOT__valid_1_0));
        tracep->fullBit(oldp+1089,(vlSelf->top__DOT__i_cache__DOT__valid_1_1));
        tracep->fullBit(oldp+1090,(vlSelf->top__DOT__i_cache__DOT__valid_1_2));
        tracep->fullBit(oldp+1091,(vlSelf->top__DOT__i_cache__DOT__valid_1_3));
        tracep->fullBit(oldp+1092,(vlSelf->top__DOT__i_cache__DOT__valid_1_4));
        tracep->fullBit(oldp+1093,(vlSelf->top__DOT__i_cache__DOT__valid_1_5));
        tracep->fullBit(oldp+1094,(vlSelf->top__DOT__i_cache__DOT__valid_1_6));
        tracep->fullBit(oldp+1095,(vlSelf->top__DOT__i_cache__DOT__valid_1_7));
        tracep->fullBit(oldp+1096,(vlSelf->top__DOT__i_cache__DOT__valid_1_8));
        tracep->fullBit(oldp+1097,(vlSelf->top__DOT__i_cache__DOT__valid_1_9));
        tracep->fullBit(oldp+1098,(vlSelf->top__DOT__i_cache__DOT__valid_1_10));
        tracep->fullBit(oldp+1099,(vlSelf->top__DOT__i_cache__DOT__valid_1_11));
        tracep->fullBit(oldp+1100,(vlSelf->top__DOT__i_cache__DOT__valid_1_12));
        tracep->fullBit(oldp+1101,(vlSelf->top__DOT__i_cache__DOT__valid_1_13));
        tracep->fullBit(oldp+1102,(vlSelf->top__DOT__i_cache__DOT__valid_1_14));
        tracep->fullBit(oldp+1103,(vlSelf->top__DOT__i_cache__DOT__valid_1_15));
        tracep->fullQData(oldp+1104,(vlSelf->top__DOT__i_cache__DOT__receive_data_0),64);
        tracep->fullQData(oldp+1106,(vlSelf->top__DOT__i_cache__DOT__receive_data_1),64);
        tracep->fullQData(oldp+1108,(vlSelf->top__DOT__i_cache__DOT__receive_data_2),64);
        tracep->fullQData(oldp+1110,(vlSelf->top__DOT__i_cache__DOT__receive_data_3),64);
        tracep->fullQData(oldp+1112,(vlSelf->top__DOT__i_cache__DOT__receive_data_4),64);
        tracep->fullQData(oldp+1114,(vlSelf->top__DOT__i_cache__DOT__receive_data_5),64);
        tracep->fullQData(oldp+1116,(vlSelf->top__DOT__i_cache__DOT__receive_data_6),64);
        tracep->fullQData(oldp+1118,(vlSelf->top__DOT__i_cache__DOT__receive_data_7),64);
        tracep->fullCData(oldp+1120,(vlSelf->top__DOT__i_cache__DOT__receive_num),3);
        tracep->fullCData(oldp+1121,(vlSelf->top__DOT__i_cache__DOT__quene_0),2);
        tracep->fullCData(oldp+1122,(vlSelf->top__DOT__i_cache__DOT__quene_1),2);
        tracep->fullCData(oldp+1123,(vlSelf->top__DOT__i_cache__DOT__quene_2),2);
        tracep->fullCData(oldp+1124,(vlSelf->top__DOT__i_cache__DOT__quene_3),2);
        tracep->fullCData(oldp+1125,(vlSelf->top__DOT__i_cache__DOT__quene_4),2);
        tracep->fullCData(oldp+1126,(vlSelf->top__DOT__i_cache__DOT__quene_5),2);
        tracep->fullCData(oldp+1127,(vlSelf->top__DOT__i_cache__DOT__quene_6),2);
        tracep->fullCData(oldp+1128,(vlSelf->top__DOT__i_cache__DOT__quene_7),2);
        tracep->fullCData(oldp+1129,(vlSelf->top__DOT__i_cache__DOT__quene_8),2);
        tracep->fullCData(oldp+1130,(vlSelf->top__DOT__i_cache__DOT__quene_9),2);
        tracep->fullCData(oldp+1131,(vlSelf->top__DOT__i_cache__DOT__quene_10),2);
        tracep->fullCData(oldp+1132,(vlSelf->top__DOT__i_cache__DOT__quene_11),2);
        tracep->fullCData(oldp+1133,(vlSelf->top__DOT__i_cache__DOT__quene_12),2);
        tracep->fullCData(oldp+1134,(vlSelf->top__DOT__i_cache__DOT__quene_13),2);
        tracep->fullCData(oldp+1135,(vlSelf->top__DOT__i_cache__DOT__quene_14),2);
        tracep->fullCData(oldp+1136,(vlSelf->top__DOT__i_cache__DOT__quene_15),2);
        tracep->fullCData(oldp+1137,((0x3fU & (IData)(vlSelf->top__DOT__IFU__DOT__fs_pc))),6);
        tracep->fullCData(oldp+1138,((0xfU & (IData)(
                                                     (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                      >> 6U)))),4);
        tracep->fullIData(oldp+1139,((0x3fffffU & (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                           >> 0xaU)))),22);
        tracep->fullSData(oldp+1140,((0x1f8U & ((IData)(vlSelf->top__DOT__IFU__DOT__fs_pc) 
                                                << 3U))),9);
        tracep->fullBit(oldp+1141,(vlSelf->top__DOT__i_cache__DOT__way0_hit));
        tracep->fullBit(oldp+1142,(vlSelf->top__DOT__i_cache__DOT__way1_hit));
        tracep->fullCData(oldp+1143,(vlSelf->top__DOT__i_cache__DOT__unuse_way),2);
        tracep->fullCData(oldp+1144,(vlSelf->top__DOT__i_cache__DOT__state),3);
        tracep->fullWData(oldp+1145,(vlSelf->top__DOT__d_cache__DOT__ram_0_0),512);
        tracep->fullWData(oldp+1161,(vlSelf->top__DOT__d_cache__DOT__ram_0_1),512);
        tracep->fullWData(oldp+1177,(vlSelf->top__DOT__d_cache__DOT__ram_0_2),512);
        tracep->fullWData(oldp+1193,(vlSelf->top__DOT__d_cache__DOT__ram_0_3),512);
        tracep->fullWData(oldp+1209,(vlSelf->top__DOT__d_cache__DOT__ram_0_4),512);
        tracep->fullWData(oldp+1225,(vlSelf->top__DOT__d_cache__DOT__ram_0_5),512);
        tracep->fullWData(oldp+1241,(vlSelf->top__DOT__d_cache__DOT__ram_0_6),512);
        tracep->fullWData(oldp+1257,(vlSelf->top__DOT__d_cache__DOT__ram_0_7),512);
        tracep->fullWData(oldp+1273,(vlSelf->top__DOT__d_cache__DOT__ram_0_8),512);
        tracep->fullWData(oldp+1289,(vlSelf->top__DOT__d_cache__DOT__ram_0_9),512);
        tracep->fullWData(oldp+1305,(vlSelf->top__DOT__d_cache__DOT__ram_0_10),512);
        tracep->fullWData(oldp+1321,(vlSelf->top__DOT__d_cache__DOT__ram_0_11),512);
        tracep->fullWData(oldp+1337,(vlSelf->top__DOT__d_cache__DOT__ram_0_12),512);
        tracep->fullWData(oldp+1353,(vlSelf->top__DOT__d_cache__DOT__ram_0_13),512);
        tracep->fullWData(oldp+1369,(vlSelf->top__DOT__d_cache__DOT__ram_0_14),512);
        tracep->fullWData(oldp+1385,(vlSelf->top__DOT__d_cache__DOT__ram_0_15),512);
        tracep->fullWData(oldp+1401,(vlSelf->top__DOT__d_cache__DOT__ram_1_0),512);
        tracep->fullWData(oldp+1417,(vlSelf->top__DOT__d_cache__DOT__ram_1_1),512);
        tracep->fullWData(oldp+1433,(vlSelf->top__DOT__d_cache__DOT__ram_1_2),512);
        tracep->fullWData(oldp+1449,(vlSelf->top__DOT__d_cache__DOT__ram_1_3),512);
        tracep->fullWData(oldp+1465,(vlSelf->top__DOT__d_cache__DOT__ram_1_4),512);
        tracep->fullWData(oldp+1481,(vlSelf->top__DOT__d_cache__DOT__ram_1_5),512);
        tracep->fullWData(oldp+1497,(vlSelf->top__DOT__d_cache__DOT__ram_1_6),512);
        tracep->fullWData(oldp+1513,(vlSelf->top__DOT__d_cache__DOT__ram_1_7),512);
        tracep->fullWData(oldp+1529,(vlSelf->top__DOT__d_cache__DOT__ram_1_8),512);
        tracep->fullWData(oldp+1545,(vlSelf->top__DOT__d_cache__DOT__ram_1_9),512);
        tracep->fullWData(oldp+1561,(vlSelf->top__DOT__d_cache__DOT__ram_1_10),512);
        tracep->fullWData(oldp+1577,(vlSelf->top__DOT__d_cache__DOT__ram_1_11),512);
        tracep->fullWData(oldp+1593,(vlSelf->top__DOT__d_cache__DOT__ram_1_12),512);
        tracep->fullWData(oldp+1609,(vlSelf->top__DOT__d_cache__DOT__ram_1_13),512);
        tracep->fullWData(oldp+1625,(vlSelf->top__DOT__d_cache__DOT__ram_1_14),512);
        tracep->fullWData(oldp+1641,(vlSelf->top__DOT__d_cache__DOT__ram_1_15),512);
        tracep->fullIData(oldp+1657,(vlSelf->top__DOT__d_cache__DOT__tag_0_0),32);
        tracep->fullIData(oldp+1658,(vlSelf->top__DOT__d_cache__DOT__tag_0_1),32);
        tracep->fullIData(oldp+1659,(vlSelf->top__DOT__d_cache__DOT__tag_0_2),32);
        tracep->fullIData(oldp+1660,(vlSelf->top__DOT__d_cache__DOT__tag_0_3),32);
        tracep->fullIData(oldp+1661,(vlSelf->top__DOT__d_cache__DOT__tag_0_4),32);
        tracep->fullIData(oldp+1662,(vlSelf->top__DOT__d_cache__DOT__tag_0_5),32);
        tracep->fullIData(oldp+1663,(vlSelf->top__DOT__d_cache__DOT__tag_0_6),32);
        tracep->fullIData(oldp+1664,(vlSelf->top__DOT__d_cache__DOT__tag_0_7),32);
        tracep->fullIData(oldp+1665,(vlSelf->top__DOT__d_cache__DOT__tag_0_8),32);
        tracep->fullIData(oldp+1666,(vlSelf->top__DOT__d_cache__DOT__tag_0_9),32);
        tracep->fullIData(oldp+1667,(vlSelf->top__DOT__d_cache__DOT__tag_0_10),32);
        tracep->fullIData(oldp+1668,(vlSelf->top__DOT__d_cache__DOT__tag_0_11),32);
        tracep->fullIData(oldp+1669,(vlSelf->top__DOT__d_cache__DOT__tag_0_12),32);
        tracep->fullIData(oldp+1670,(vlSelf->top__DOT__d_cache__DOT__tag_0_13),32);
        tracep->fullIData(oldp+1671,(vlSelf->top__DOT__d_cache__DOT__tag_0_14),32);
        tracep->fullIData(oldp+1672,(vlSelf->top__DOT__d_cache__DOT__tag_0_15),32);
        tracep->fullIData(oldp+1673,(vlSelf->top__DOT__d_cache__DOT__tag_1_0),32);
        tracep->fullIData(oldp+1674,(vlSelf->top__DOT__d_cache__DOT__tag_1_1),32);
        tracep->fullIData(oldp+1675,(vlSelf->top__DOT__d_cache__DOT__tag_1_2),32);
        tracep->fullIData(oldp+1676,(vlSelf->top__DOT__d_cache__DOT__tag_1_3),32);
        tracep->fullIData(oldp+1677,(vlSelf->top__DOT__d_cache__DOT__tag_1_4),32);
        tracep->fullIData(oldp+1678,(vlSelf->top__DOT__d_cache__DOT__tag_1_5),32);
        tracep->fullIData(oldp+1679,(vlSelf->top__DOT__d_cache__DOT__tag_1_6),32);
        tracep->fullIData(oldp+1680,(vlSelf->top__DOT__d_cache__DOT__tag_1_7),32);
        tracep->fullIData(oldp+1681,(vlSelf->top__DOT__d_cache__DOT__tag_1_8),32);
        tracep->fullIData(oldp+1682,(vlSelf->top__DOT__d_cache__DOT__tag_1_9),32);
        tracep->fullIData(oldp+1683,(vlSelf->top__DOT__d_cache__DOT__tag_1_10),32);
        tracep->fullIData(oldp+1684,(vlSelf->top__DOT__d_cache__DOT__tag_1_11),32);
        tracep->fullIData(oldp+1685,(vlSelf->top__DOT__d_cache__DOT__tag_1_12),32);
        tracep->fullIData(oldp+1686,(vlSelf->top__DOT__d_cache__DOT__tag_1_13),32);
        tracep->fullIData(oldp+1687,(vlSelf->top__DOT__d_cache__DOT__tag_1_14),32);
        tracep->fullIData(oldp+1688,(vlSelf->top__DOT__d_cache__DOT__tag_1_15),32);
        tracep->fullBit(oldp+1689,(vlSelf->top__DOT__d_cache__DOT__valid_0_0));
        tracep->fullBit(oldp+1690,(vlSelf->top__DOT__d_cache__DOT__valid_0_1));
        tracep->fullBit(oldp+1691,(vlSelf->top__DOT__d_cache__DOT__valid_0_2));
        tracep->fullBit(oldp+1692,(vlSelf->top__DOT__d_cache__DOT__valid_0_3));
        tracep->fullBit(oldp+1693,(vlSelf->top__DOT__d_cache__DOT__valid_0_4));
        tracep->fullBit(oldp+1694,(vlSelf->top__DOT__d_cache__DOT__valid_0_5));
        tracep->fullBit(oldp+1695,(vlSelf->top__DOT__d_cache__DOT__valid_0_6));
        tracep->fullBit(oldp+1696,(vlSelf->top__DOT__d_cache__DOT__valid_0_7));
        tracep->fullBit(oldp+1697,(vlSelf->top__DOT__d_cache__DOT__valid_0_8));
        tracep->fullBit(oldp+1698,(vlSelf->top__DOT__d_cache__DOT__valid_0_9));
        tracep->fullBit(oldp+1699,(vlSelf->top__DOT__d_cache__DOT__valid_0_10));
        tracep->fullBit(oldp+1700,(vlSelf->top__DOT__d_cache__DOT__valid_0_11));
        tracep->fullBit(oldp+1701,(vlSelf->top__DOT__d_cache__DOT__valid_0_12));
        tracep->fullBit(oldp+1702,(vlSelf->top__DOT__d_cache__DOT__valid_0_13));
        tracep->fullBit(oldp+1703,(vlSelf->top__DOT__d_cache__DOT__valid_0_14));
        tracep->fullBit(oldp+1704,(vlSelf->top__DOT__d_cache__DOT__valid_0_15));
        tracep->fullBit(oldp+1705,(vlSelf->top__DOT__d_cache__DOT__valid_1_0));
        tracep->fullBit(oldp+1706,(vlSelf->top__DOT__d_cache__DOT__valid_1_1));
        tracep->fullBit(oldp+1707,(vlSelf->top__DOT__d_cache__DOT__valid_1_2));
        tracep->fullBit(oldp+1708,(vlSelf->top__DOT__d_cache__DOT__valid_1_3));
        tracep->fullBit(oldp+1709,(vlSelf->top__DOT__d_cache__DOT__valid_1_4));
        tracep->fullBit(oldp+1710,(vlSelf->top__DOT__d_cache__DOT__valid_1_5));
        tracep->fullBit(oldp+1711,(vlSelf->top__DOT__d_cache__DOT__valid_1_6));
        tracep->fullBit(oldp+1712,(vlSelf->top__DOT__d_cache__DOT__valid_1_7));
        tracep->fullBit(oldp+1713,(vlSelf->top__DOT__d_cache__DOT__valid_1_8));
        tracep->fullBit(oldp+1714,(vlSelf->top__DOT__d_cache__DOT__valid_1_9));
        tracep->fullBit(oldp+1715,(vlSelf->top__DOT__d_cache__DOT__valid_1_10));
        tracep->fullBit(oldp+1716,(vlSelf->top__DOT__d_cache__DOT__valid_1_11));
        tracep->fullBit(oldp+1717,(vlSelf->top__DOT__d_cache__DOT__valid_1_12));
        tracep->fullBit(oldp+1718,(vlSelf->top__DOT__d_cache__DOT__valid_1_13));
        tracep->fullBit(oldp+1719,(vlSelf->top__DOT__d_cache__DOT__valid_1_14));
        tracep->fullBit(oldp+1720,(vlSelf->top__DOT__d_cache__DOT__valid_1_15));
        tracep->fullBit(oldp+1721,(vlSelf->top__DOT__d_cache__DOT__dirty_0_0));
        tracep->fullBit(oldp+1722,(vlSelf->top__DOT__d_cache__DOT__dirty_0_1));
        tracep->fullBit(oldp+1723,(vlSelf->top__DOT__d_cache__DOT__dirty_0_2));
        tracep->fullBit(oldp+1724,(vlSelf->top__DOT__d_cache__DOT__dirty_0_3));
        tracep->fullBit(oldp+1725,(vlSelf->top__DOT__d_cache__DOT__dirty_0_4));
        tracep->fullBit(oldp+1726,(vlSelf->top__DOT__d_cache__DOT__dirty_0_5));
        tracep->fullBit(oldp+1727,(vlSelf->top__DOT__d_cache__DOT__dirty_0_6));
        tracep->fullBit(oldp+1728,(vlSelf->top__DOT__d_cache__DOT__dirty_0_7));
        tracep->fullBit(oldp+1729,(vlSelf->top__DOT__d_cache__DOT__dirty_0_8));
        tracep->fullBit(oldp+1730,(vlSelf->top__DOT__d_cache__DOT__dirty_0_9));
        tracep->fullBit(oldp+1731,(vlSelf->top__DOT__d_cache__DOT__dirty_0_10));
        tracep->fullBit(oldp+1732,(vlSelf->top__DOT__d_cache__DOT__dirty_0_11));
        tracep->fullBit(oldp+1733,(vlSelf->top__DOT__d_cache__DOT__dirty_0_12));
        tracep->fullBit(oldp+1734,(vlSelf->top__DOT__d_cache__DOT__dirty_0_13));
        tracep->fullBit(oldp+1735,(vlSelf->top__DOT__d_cache__DOT__dirty_0_14));
        tracep->fullBit(oldp+1736,(vlSelf->top__DOT__d_cache__DOT__dirty_0_15));
        tracep->fullBit(oldp+1737,(vlSelf->top__DOT__d_cache__DOT__dirty_1_0));
        tracep->fullBit(oldp+1738,(vlSelf->top__DOT__d_cache__DOT__dirty_1_1));
        tracep->fullBit(oldp+1739,(vlSelf->top__DOT__d_cache__DOT__dirty_1_2));
        tracep->fullBit(oldp+1740,(vlSelf->top__DOT__d_cache__DOT__dirty_1_3));
        tracep->fullBit(oldp+1741,(vlSelf->top__DOT__d_cache__DOT__dirty_1_4));
        tracep->fullBit(oldp+1742,(vlSelf->top__DOT__d_cache__DOT__dirty_1_5));
        tracep->fullBit(oldp+1743,(vlSelf->top__DOT__d_cache__DOT__dirty_1_6));
        tracep->fullBit(oldp+1744,(vlSelf->top__DOT__d_cache__DOT__dirty_1_7));
        tracep->fullBit(oldp+1745,(vlSelf->top__DOT__d_cache__DOT__dirty_1_8));
        tracep->fullBit(oldp+1746,(vlSelf->top__DOT__d_cache__DOT__dirty_1_9));
        tracep->fullBit(oldp+1747,(vlSelf->top__DOT__d_cache__DOT__dirty_1_10));
        tracep->fullBit(oldp+1748,(vlSelf->top__DOT__d_cache__DOT__dirty_1_11));
        tracep->fullBit(oldp+1749,(vlSelf->top__DOT__d_cache__DOT__dirty_1_12));
        tracep->fullBit(oldp+1750,(vlSelf->top__DOT__d_cache__DOT__dirty_1_13));
        tracep->fullBit(oldp+1751,(vlSelf->top__DOT__d_cache__DOT__dirty_1_14));
        tracep->fullBit(oldp+1752,(vlSelf->top__DOT__d_cache__DOT__dirty_1_15));
        tracep->fullWData(oldp+1753,(vlSelf->top__DOT__d_cache__DOT__write_back_data),512);
        tracep->fullIData(oldp+1769,(vlSelf->top__DOT__d_cache__DOT__write_back_addr),32);
        tracep->fullQData(oldp+1770,(vlSelf->top__DOT__d_cache__DOT__receive_data_0),64);
        tracep->fullQData(oldp+1772,(vlSelf->top__DOT__d_cache__DOT__receive_data_1),64);
        tracep->fullQData(oldp+1774,(vlSelf->top__DOT__d_cache__DOT__receive_data_2),64);
        tracep->fullQData(oldp+1776,(vlSelf->top__DOT__d_cache__DOT__receive_data_3),64);
        tracep->fullQData(oldp+1778,(vlSelf->top__DOT__d_cache__DOT__receive_data_4),64);
        tracep->fullQData(oldp+1780,(vlSelf->top__DOT__d_cache__DOT__receive_data_5),64);
        tracep->fullQData(oldp+1782,(vlSelf->top__DOT__d_cache__DOT__receive_data_6),64);
        tracep->fullQData(oldp+1784,(vlSelf->top__DOT__d_cache__DOT__receive_data_7),64);
        tracep->fullCData(oldp+1786,(vlSelf->top__DOT__d_cache__DOT__receive_num),3);
        tracep->fullCData(oldp+1787,(vlSelf->top__DOT__d_cache__DOT__quene_0),2);
        tracep->fullCData(oldp+1788,(vlSelf->top__DOT__d_cache__DOT__quene_1),2);
        tracep->fullCData(oldp+1789,(vlSelf->top__DOT__d_cache__DOT__quene_2),2);
        tracep->fullCData(oldp+1790,(vlSelf->top__DOT__d_cache__DOT__quene_3),2);
        tracep->fullCData(oldp+1791,(vlSelf->top__DOT__d_cache__DOT__quene_4),2);
        tracep->fullCData(oldp+1792,(vlSelf->top__DOT__d_cache__DOT__quene_5),2);
        tracep->fullCData(oldp+1793,(vlSelf->top__DOT__d_cache__DOT__quene_6),2);
        tracep->fullCData(oldp+1794,(vlSelf->top__DOT__d_cache__DOT__quene_7),2);
        tracep->fullCData(oldp+1795,(vlSelf->top__DOT__d_cache__DOT__quene_8),2);
        tracep->fullCData(oldp+1796,(vlSelf->top__DOT__d_cache__DOT__quene_9),2);
        tracep->fullCData(oldp+1797,(vlSelf->top__DOT__d_cache__DOT__quene_10),2);
        tracep->fullCData(oldp+1798,(vlSelf->top__DOT__d_cache__DOT__quene_11),2);
        tracep->fullCData(oldp+1799,(vlSelf->top__DOT__d_cache__DOT__quene_12),2);
        tracep->fullCData(oldp+1800,(vlSelf->top__DOT__d_cache__DOT__quene_13),2);
        tracep->fullCData(oldp+1801,(vlSelf->top__DOT__d_cache__DOT__quene_14),2);
        tracep->fullCData(oldp+1802,(vlSelf->top__DOT__d_cache__DOT__quene_15),2);
        tracep->fullCData(oldp+1803,((0x3fU & (IData)(vlSelf->top__DOT__LSU__DOT__maddr))),6);
        tracep->fullCData(oldp+1804,((0xfU & (IData)(
                                                     (vlSelf->top__DOT__LSU__DOT__maddr 
                                                      >> 6U)))),4);
        tracep->fullIData(oldp+1805,((0x3fffffU & (IData)(
                                                          (vlSelf->top__DOT__LSU__DOT__maddr 
                                                           >> 0xaU)))),22);
        tracep->fullSData(oldp+1806,((0x1f8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                                << 3U))),9);
        tracep->fullQData(oldp+1807,(vlSelf->top__DOT__d_cache__DOT__wmask),64);
        tracep->fullBit(oldp+1809,(vlSelf->top__DOT__d_cache__DOT__way0_hit));
        tracep->fullBit(oldp+1810,(vlSelf->top__DOT__d_cache__DOT__way1_hit));
        tracep->fullCData(oldp+1811,(vlSelf->top__DOT__d_cache__DOT__unuse_way),2);
        tracep->fullCData(oldp+1812,(vlSelf->top__DOT__d_cache__DOT__state),4);
        tracep->fullQData(oldp+1813,(vlSelf->top__DOT__axi__DOT__araddr),64);
        tracep->fullQData(oldp+1815,(vlSelf->top__DOT__axi__DOT__awaddr),64);
        tracep->fullCData(oldp+1817,(vlSelf->top__DOT__axi__DOT__arlen),8);
        tracep->fullCData(oldp+1818,(vlSelf->top__DOT__axi__DOT__awlen),8);
        tracep->fullCData(oldp+1819,(vlSelf->top__DOT__axi__DOT__state),3);
        tracep->fullBit(oldp+1820,(vlSelf->clock));
        tracep->fullBit(oldp+1821,(vlSelf->reset));
        tracep->fullIData(oldp+1822,(vlSelf->io_inst),32);
        tracep->fullQData(oldp+1823,(vlSelf->io_pc),64);
        tracep->fullBit(oldp+1825,(vlSelf->io_step));
        tracep->fullBit(oldp+1826,(1U));
        tracep->fullCData(oldp+1827,(0U),5);
        tracep->fullCData(oldp+1828,(1U),5);
        tracep->fullCData(oldp+1829,(2U),5);
        tracep->fullCData(oldp+1830,(3U),5);
        tracep->fullCData(oldp+1831,(4U),5);
        tracep->fullCData(oldp+1832,(5U),5);
        tracep->fullCData(oldp+1833,(6U),5);
        tracep->fullCData(oldp+1834,(7U),5);
        tracep->fullCData(oldp+1835,(8U),5);
        tracep->fullCData(oldp+1836,(9U),5);
        tracep->fullCData(oldp+1837,(0xaU),5);
        tracep->fullCData(oldp+1838,(0xbU),5);
        tracep->fullCData(oldp+1839,(0xcU),5);
        tracep->fullCData(oldp+1840,(0xdU),5);
        tracep->fullCData(oldp+1841,(0xeU),5);
        tracep->fullCData(oldp+1842,(0xfU),5);
        tracep->fullCData(oldp+1843,(0x10U),5);
        tracep->fullCData(oldp+1844,(0x11U),5);
        tracep->fullCData(oldp+1845,(0x12U),5);
        tracep->fullCData(oldp+1846,(0x13U),5);
        tracep->fullCData(oldp+1847,(0x14U),5);
        tracep->fullCData(oldp+1848,(0x15U),5);
        tracep->fullCData(oldp+1849,(0x16U),5);
        tracep->fullCData(oldp+1850,(0x17U),5);
        tracep->fullCData(oldp+1851,(0x18U),5);
        tracep->fullCData(oldp+1852,(0x19U),5);
        tracep->fullCData(oldp+1853,(0x1aU),5);
        tracep->fullCData(oldp+1854,(0x1bU),5);
        tracep->fullCData(oldp+1855,(0x1cU),5);
        tracep->fullCData(oldp+1856,(0x1dU),5);
        tracep->fullCData(oldp+1857,(0x1eU),5);
        tracep->fullCData(oldp+1858,(0x1fU),5);
        tracep->fullCData(oldp+1859,(3U),2);
    }
}
