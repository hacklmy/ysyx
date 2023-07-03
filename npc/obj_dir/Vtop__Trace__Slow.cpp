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
        tracep->declBit(c+1135,"clock", false,-1);
        tracep->declBit(c+1136,"reset", false,-1);
        tracep->declBus(c+1137,"io_inst", false,-1, 31,0);
        tracep->declQuad(c+1138,"io_pc", false,-1, 63,0);
        tracep->declBit(c+1140,"io_step", false,-1);
        tracep->declBit(c+1135,"top clock", false,-1);
        tracep->declBit(c+1136,"top reset", false,-1);
        tracep->declBus(c+1137,"top io_inst", false,-1, 31,0);
        tracep->declQuad(c+1138,"top io_pc", false,-1, 63,0);
        tracep->declBit(c+1140,"top io_step", false,-1);
        tracep->declBit(c+1135,"top Register_clock", false,-1);
        tracep->declBus(c+1,"top Register_io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top Register_io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top Register_io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top Register_io_rdata2", false,-1, 63,0);
        tracep->declBit(c+7,"top Register_io_we", false,-1);
        tracep->declBus(c+8,"top Register_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top Register_io_wdata", false,-1, 63,0);
        tracep->declBit(c+1135,"top IFU_clock", false,-1);
        tracep->declBit(c+1136,"top IFU_reset", false,-1);
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
        tracep->declBit(c+1135,"top IDU_clock", false,-1);
        tracep->declBit(c+1136,"top IDU_reset", false,-1);
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
        tracep->declBit(c+52,"top IDU_io_es_valid", false,-1);
        tracep->declBit(c+57,"top IDU_io_ms_valid", false,-1);
        tracep->declBit(c+58,"top IDU_io_ws_valid", false,-1);
        tracep->declBus(c+59,"top IDU_io_es_rf_dst", false,-1, 4,0);
        tracep->declBus(c+60,"top IDU_io_ms_rf_dst", false,-1, 4,0);
        tracep->declBus(c+8,"top IDU_io_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+13,"top IDU_io_ds_valid", false,-1);
        tracep->declBit(c+1135,"top EXU_clock", false,-1);
        tracep->declBit(c+1136,"top EXU_reset", false,-1);
        tracep->declQuad(c+32,"top EXU_io_pc", false,-1, 63,0);
        tracep->declBit(c+30,"top EXU_io_ds_to_es_valid", false,-1);
        tracep->declBit(c+61,"top EXU_io_ms_allowin", false,-1);
        tracep->declBit(c+31,"top EXU_io_es_allowin", false,-1);
        tracep->declBus(c+34,"top EXU_io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+35,"top EXU_io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+37,"top EXU_io_src2_value", false,-1, 63,0);
        tracep->declBus(c+39,"top EXU_io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+40,"top EXU_io_store_data", false,-1, 63,0);
        tracep->declBit(c+52,"top EXU_io_es_to_ms_valid", false,-1);
        tracep->declBus(c+46,"top EXU_io_load_type", false,-1, 2,0);
        tracep->declQuad(c+62,"top EXU_io_to_ms_pc", false,-1, 63,0);
        tracep->declQuad(c+48,"top EXU_io_to_ms_alures", false,-1, 63,0);
        tracep->declQuad(c+64,"top EXU_io_to_ms_store_data", false,-1, 63,0);
        tracep->declBit(c+66,"top EXU_io_to_ms_wen", false,-1);
        tracep->declBus(c+67,"top EXU_io_to_ms_wstrb", false,-1, 7,0);
        tracep->declBit(c+68,"top EXU_io_to_ms_ren", false,-1);
        tracep->declQuad(c+48,"top EXU_io_to_ms_maddr", false,-1, 63,0);
        tracep->declBus(c+59,"top EXU_io_to_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+54,"top EXU_io_to_ms_rf_we", false,-1);
        tracep->declBus(c+69,"top EXU_io_to_ms_load_type", false,-1, 2,0);
        tracep->declBit(c+42,"top EXU_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+43,"top EXU_io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+44,"top EXU_io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+45,"top EXU_io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBit(c+52,"top EXU_io_es_valid", false,-1);
        tracep->declBit(c+54,"top EXU_io_es_rf_we", false,-1);
        tracep->declBus(c+59,"top EXU_io_es_rf_dst", false,-1, 4,0);
        tracep->declBit(c+52,"top EXU_io_es_fwd_ready", false,-1);
        tracep->declQuad(c+48,"top EXU_io_es_fwd_res", false,-1, 63,0);
        tracep->declBit(c+47,"top EXU_io_es_ld", false,-1);
        tracep->declBit(c+1135,"top LSU_clock", false,-1);
        tracep->declBit(c+1136,"top LSU_reset", false,-1);
        tracep->declQuad(c+62,"top LSU_io_pc", false,-1, 63,0);
        tracep->declBit(c+52,"top LSU_io_es_to_ms_valid", false,-1);
        tracep->declBit(c+61,"top LSU_io_ms_allowin", false,-1);
        tracep->declBit(c+54,"top LSU_io_rf_we", false,-1);
        tracep->declBus(c+59,"top LSU_io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+48,"top LSU_io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+64,"top LSU_io_store_data", false,-1, 63,0);
        tracep->declBus(c+69,"top LSU_io_load_type", false,-1, 2,0);
        tracep->declBit(c+66,"top LSU_io_wen", false,-1);
        tracep->declBus(c+67,"top LSU_io_wstrb", false,-1, 7,0);
        tracep->declBit(c+68,"top LSU_io_ren", false,-1);
        tracep->declQuad(c+48,"top LSU_io_maddr", false,-1, 63,0);
        tracep->declQuad(c+70,"top LSU_io_to_ws_pc", false,-1, 63,0);
        tracep->declQuad(c+72,"top LSU_io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+53,"top LSU_io_ms_to_ws_valid", false,-1);
        tracep->declBit(c+74,"top LSU_io_to_ws_rf_we", false,-1);
        tracep->declBus(c+60,"top LSU_io_to_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+57,"top LSU_io_ms_valid", false,-1);
        tracep->declBit(c+55,"top LSU_io_ms_rf_we", false,-1);
        tracep->declBus(c+60,"top LSU_io_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+53,"top LSU_io_ms_fwd_ready", false,-1);
        tracep->declQuad(c+50,"top LSU_io_ms_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+75,"top LSU_io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+77,"top LSU_io_axi_in_rvalid", false,-1);
        tracep->declBit(c+78,"top LSU_io_axi_in_bvalid", false,-1);
        tracep->declBus(c+79,"top LSU_io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+80,"top LSU_io_axi_out_arvalid", false,-1);
        tracep->declBus(c+79,"top LSU_io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBit(c+81,"top LSU_io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+82,"top LSU_io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+84,"top LSU_io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+85,"top LSU_io_axi_out_wvalid", false,-1);
        tracep->declBit(c+1135,"top WBU_clock", false,-1);
        tracep->declBit(c+1136,"top WBU_reset", false,-1);
        tracep->declQuad(c+70,"top WBU_io_pc", false,-1, 63,0);
        tracep->declBit(c+53,"top WBU_io_ms_to_ws_valid", false,-1);
        tracep->declQuad(c+72,"top WBU_io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+74,"top WBU_io_rf_we", false,-1);
        tracep->declBus(c+60,"top WBU_io_rf_dst", false,-1, 4,0);
        tracep->declBit(c+7,"top WBU_io_we", false,-1);
        tracep->declBus(c+8,"top WBU_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU_io_wdata", false,-1, 63,0);
        tracep->declBit(c+58,"top WBU_io_ws_valid", false,-1);
        tracep->declBit(c+56,"top WBU_io_ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU_io_ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU_io_ws_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+86,"top WBU_io_ws_pc", false,-1, 63,0);
        tracep->declBit(c+1135,"top arbiter_clock", false,-1);
        tracep->declBit(c+1136,"top arbiter_reset", false,-1);
        tracep->declBus(c+88,"top arbiter_io_ifu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+89,"top arbiter_io_ifu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+90,"top arbiter_io_ifu_axi_in_arvalid", false,-1);
        tracep->declBit(c+91,"top arbiter_io_ifu_axi_in_rready", false,-1);
        tracep->declQuad(c+92,"top arbiter_io_ifu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+94,"top arbiter_io_ifu_axi_out_rlast", false,-1);
        tracep->declBit(c+95,"top arbiter_io_ifu_axi_out_rvalid", false,-1);
        tracep->declBus(c+96,"top arbiter_io_lsu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+97,"top arbiter_io_lsu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+98,"top arbiter_io_lsu_axi_in_arvalid", false,-1);
        tracep->declBit(c+99,"top arbiter_io_lsu_axi_in_rready", false,-1);
        tracep->declBus(c+100,"top arbiter_io_lsu_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+101,"top arbiter_io_lsu_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+102,"top arbiter_io_lsu_axi_in_awvalid", false,-1);
        tracep->declQuad(c+103,"top arbiter_io_lsu_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+105,"top arbiter_io_lsu_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+106,"top arbiter_io_lsu_axi_in_wvalid", false,-1);
        tracep->declBit(c+107,"top arbiter_io_lsu_axi_in_bready", false,-1);
        tracep->declQuad(c+108,"top arbiter_io_lsu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+110,"top arbiter_io_lsu_axi_out_rlast", false,-1);
        tracep->declBit(c+111,"top arbiter_io_lsu_axi_out_rvalid", false,-1);
        tracep->declBit(c+112,"top arbiter_io_lsu_axi_out_wready", false,-1);
        tracep->declBit(c+113,"top arbiter_io_lsu_axi_out_bvalid", false,-1);
        tracep->declQuad(c+114,"top arbiter_io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+116,"top arbiter_io_axi_in_rlast", false,-1);
        tracep->declBit(c+117,"top arbiter_io_axi_in_rvalid", false,-1);
        tracep->declBit(c+118,"top arbiter_io_axi_in_wready", false,-1);
        tracep->declBit(c+119,"top arbiter_io_axi_in_bvalid", false,-1);
        tracep->declBus(c+120,"top arbiter_io_axi_out_araddr", false,-1, 31,0);
        tracep->declBus(c+121,"top arbiter_io_axi_out_arlen", false,-1, 7,0);
        tracep->declBit(c+122,"top arbiter_io_axi_out_arvalid", false,-1);
        tracep->declBit(c+123,"top arbiter_io_axi_out_rready", false,-1);
        tracep->declBus(c+124,"top arbiter_io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBus(c+125,"top arbiter_io_axi_out_awlen", false,-1, 7,0);
        tracep->declBit(c+126,"top arbiter_io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+127,"top arbiter_io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+129,"top arbiter_io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+130,"top arbiter_io_axi_out_wvalid", false,-1);
        tracep->declBit(c+131,"top arbiter_io_axi_out_bready", false,-1);
        tracep->declBit(c+1135,"top i_cache_clock", false,-1);
        tracep->declBit(c+1136,"top i_cache_reset", false,-1);
        tracep->declBus(c+25,"top i_cache_io_from_ifu_araddr", false,-1, 31,0);
        tracep->declBit(c+12,"top i_cache_io_from_ifu_arvalid", false,-1);
        tracep->declBit(c+26,"top i_cache_io_from_ifu_rready", false,-1);
        tracep->declBit(c+21,"top i_cache_io_to_ifu_arready", false,-1);
        tracep->declQuad(c+22,"top i_cache_io_to_ifu_rdata", false,-1, 63,0);
        tracep->declBit(c+24,"top i_cache_io_to_ifu_rvalid", false,-1);
        tracep->declBus(c+88,"top i_cache_io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+89,"top i_cache_io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+90,"top i_cache_io_to_axi_arvalid", false,-1);
        tracep->declBit(c+91,"top i_cache_io_to_axi_rready", false,-1);
        tracep->declQuad(c+92,"top i_cache_io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+94,"top i_cache_io_from_axi_rlast", false,-1);
        tracep->declBit(c+95,"top i_cache_io_from_axi_rvalid", false,-1);
        tracep->declBit(c+29,"top i_cache_io_cache_init", false,-1);
        tracep->declBit(c+28,"top i_cache_io_clear_cache", false,-1);
        tracep->declBit(c+1135,"top d_cache_clock", false,-1);
        tracep->declBit(c+1136,"top d_cache_reset", false,-1);
        tracep->declBus(c+79,"top d_cache_io_from_lsu_araddr", false,-1, 31,0);
        tracep->declBit(c+80,"top d_cache_io_from_lsu_arvalid", false,-1);
        tracep->declBus(c+79,"top d_cache_io_from_lsu_awaddr", false,-1, 31,0);
        tracep->declBit(c+81,"top d_cache_io_from_lsu_awvalid", false,-1);
        tracep->declQuad(c+82,"top d_cache_io_from_lsu_wdata", false,-1, 63,0);
        tracep->declBus(c+84,"top d_cache_io_from_lsu_wstrb", false,-1, 7,0);
        tracep->declBit(c+85,"top d_cache_io_from_lsu_wvalid", false,-1);
        tracep->declQuad(c+75,"top d_cache_io_to_lsu_rdata", false,-1, 63,0);
        tracep->declBit(c+77,"top d_cache_io_to_lsu_rvalid", false,-1);
        tracep->declBit(c+78,"top d_cache_io_to_lsu_bvalid", false,-1);
        tracep->declBus(c+96,"top d_cache_io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+97,"top d_cache_io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+98,"top d_cache_io_to_axi_arvalid", false,-1);
        tracep->declBit(c+99,"top d_cache_io_to_axi_rready", false,-1);
        tracep->declBus(c+100,"top d_cache_io_to_axi_awaddr", false,-1, 31,0);
        tracep->declBus(c+101,"top d_cache_io_to_axi_awlen", false,-1, 7,0);
        tracep->declBit(c+102,"top d_cache_io_to_axi_awvalid", false,-1);
        tracep->declQuad(c+103,"top d_cache_io_to_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+105,"top d_cache_io_to_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+106,"top d_cache_io_to_axi_wvalid", false,-1);
        tracep->declBit(c+107,"top d_cache_io_to_axi_bready", false,-1);
        tracep->declQuad(c+108,"top d_cache_io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+110,"top d_cache_io_from_axi_rlast", false,-1);
        tracep->declBit(c+111,"top d_cache_io_from_axi_rvalid", false,-1);
        tracep->declBit(c+112,"top d_cache_io_from_axi_wready", false,-1);
        tracep->declBit(c+113,"top d_cache_io_from_axi_bvalid", false,-1);
        tracep->declBit(c+1135,"top axi_clock", false,-1);
        tracep->declBit(c+1136,"top axi_reset", false,-1);
        tracep->declBus(c+120,"top axi_io_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+121,"top axi_io_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+122,"top axi_io_axi_in_arvalid", false,-1);
        tracep->declBit(c+123,"top axi_io_axi_in_rready", false,-1);
        tracep->declBus(c+124,"top axi_io_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+125,"top axi_io_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+126,"top axi_io_axi_in_awvalid", false,-1);
        tracep->declQuad(c+127,"top axi_io_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+129,"top axi_io_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+130,"top axi_io_axi_in_wvalid", false,-1);
        tracep->declBit(c+131,"top axi_io_axi_in_bready", false,-1);
        tracep->declQuad(c+114,"top axi_io_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+116,"top axi_io_axi_out_rlast", false,-1);
        tracep->declBit(c+117,"top axi_io_axi_out_rvalid", false,-1);
        tracep->declBit(c+118,"top axi_io_axi_out_wready", false,-1);
        tracep->declBit(c+119,"top axi_io_axi_out_bvalid", false,-1);
        tracep->declBus(c+132,"top dpi_flag", false,-1, 31,0);
        tracep->declBus(c+133,"top dpi_ecall_flag", false,-1, 31,0);
        tracep->declQuad(c+134,"top dpi_pc", false,-1, 63,0);
        tracep->declBit(c+136,"top diff_step", false,-1);
        tracep->declBit(c+1135,"top Register clock", false,-1);
        tracep->declBus(c+1,"top Register io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top Register io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top Register io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top Register io_rdata2", false,-1, 63,0);
        tracep->declBit(c+7,"top Register io_we", false,-1);
        tracep->declBus(c+8,"top Register io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top Register io_wdata", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+137+i*2,"top Register Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+1141,"top Register Reg_io_rdata1_MPORT_en", false,-1);
        tracep->declBus(c+1,"top Register Reg_io_rdata1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+201,"top Register Reg_io_rdata1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_io_rdata2_MPORT_en", false,-1);
        tracep->declBus(c+2,"top Register Reg_io_rdata2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+203,"top Register Reg_io_rdata2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_0_MPORT_en", false,-1);
        tracep->declBus(c+1142,"top Register Reg_reg_trace_io_input_reg_0_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+205,"top Register Reg_reg_trace_io_input_reg_0_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_1_MPORT_en", false,-1);
        tracep->declBus(c+1143,"top Register Reg_reg_trace_io_input_reg_1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+207,"top Register Reg_reg_trace_io_input_reg_1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_2_MPORT_en", false,-1);
        tracep->declBus(c+1144,"top Register Reg_reg_trace_io_input_reg_2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+209,"top Register Reg_reg_trace_io_input_reg_2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_3_MPORT_en", false,-1);
        tracep->declBus(c+1145,"top Register Reg_reg_trace_io_input_reg_3_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+211,"top Register Reg_reg_trace_io_input_reg_3_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_4_MPORT_en", false,-1);
        tracep->declBus(c+1146,"top Register Reg_reg_trace_io_input_reg_4_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+213,"top Register Reg_reg_trace_io_input_reg_4_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_5_MPORT_en", false,-1);
        tracep->declBus(c+1147,"top Register Reg_reg_trace_io_input_reg_5_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+215,"top Register Reg_reg_trace_io_input_reg_5_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_6_MPORT_en", false,-1);
        tracep->declBus(c+1148,"top Register Reg_reg_trace_io_input_reg_6_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+217,"top Register Reg_reg_trace_io_input_reg_6_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_7_MPORT_en", false,-1);
        tracep->declBus(c+1149,"top Register Reg_reg_trace_io_input_reg_7_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+219,"top Register Reg_reg_trace_io_input_reg_7_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_8_MPORT_en", false,-1);
        tracep->declBus(c+1150,"top Register Reg_reg_trace_io_input_reg_8_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+221,"top Register Reg_reg_trace_io_input_reg_8_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_9_MPORT_en", false,-1);
        tracep->declBus(c+1151,"top Register Reg_reg_trace_io_input_reg_9_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+223,"top Register Reg_reg_trace_io_input_reg_9_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_10_MPORT_en", false,-1);
        tracep->declBus(c+1152,"top Register Reg_reg_trace_io_input_reg_10_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+225,"top Register Reg_reg_trace_io_input_reg_10_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_11_MPORT_en", false,-1);
        tracep->declBus(c+1153,"top Register Reg_reg_trace_io_input_reg_11_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+227,"top Register Reg_reg_trace_io_input_reg_11_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_12_MPORT_en", false,-1);
        tracep->declBus(c+1154,"top Register Reg_reg_trace_io_input_reg_12_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+229,"top Register Reg_reg_trace_io_input_reg_12_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_13_MPORT_en", false,-1);
        tracep->declBus(c+1155,"top Register Reg_reg_trace_io_input_reg_13_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+231,"top Register Reg_reg_trace_io_input_reg_13_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_14_MPORT_en", false,-1);
        tracep->declBus(c+1156,"top Register Reg_reg_trace_io_input_reg_14_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+233,"top Register Reg_reg_trace_io_input_reg_14_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_15_MPORT_en", false,-1);
        tracep->declBus(c+1157,"top Register Reg_reg_trace_io_input_reg_15_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+235,"top Register Reg_reg_trace_io_input_reg_15_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_16_MPORT_en", false,-1);
        tracep->declBus(c+1158,"top Register Reg_reg_trace_io_input_reg_16_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+237,"top Register Reg_reg_trace_io_input_reg_16_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_17_MPORT_en", false,-1);
        tracep->declBus(c+1159,"top Register Reg_reg_trace_io_input_reg_17_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+239,"top Register Reg_reg_trace_io_input_reg_17_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_18_MPORT_en", false,-1);
        tracep->declBus(c+1160,"top Register Reg_reg_trace_io_input_reg_18_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+241,"top Register Reg_reg_trace_io_input_reg_18_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_19_MPORT_en", false,-1);
        tracep->declBus(c+1161,"top Register Reg_reg_trace_io_input_reg_19_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+243,"top Register Reg_reg_trace_io_input_reg_19_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_20_MPORT_en", false,-1);
        tracep->declBus(c+1162,"top Register Reg_reg_trace_io_input_reg_20_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+245,"top Register Reg_reg_trace_io_input_reg_20_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_21_MPORT_en", false,-1);
        tracep->declBus(c+1163,"top Register Reg_reg_trace_io_input_reg_21_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+247,"top Register Reg_reg_trace_io_input_reg_21_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_22_MPORT_en", false,-1);
        tracep->declBus(c+1164,"top Register Reg_reg_trace_io_input_reg_22_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+249,"top Register Reg_reg_trace_io_input_reg_22_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_23_MPORT_en", false,-1);
        tracep->declBus(c+1165,"top Register Reg_reg_trace_io_input_reg_23_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+251,"top Register Reg_reg_trace_io_input_reg_23_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_24_MPORT_en", false,-1);
        tracep->declBus(c+1166,"top Register Reg_reg_trace_io_input_reg_24_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+253,"top Register Reg_reg_trace_io_input_reg_24_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_25_MPORT_en", false,-1);
        tracep->declBus(c+1167,"top Register Reg_reg_trace_io_input_reg_25_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+255,"top Register Reg_reg_trace_io_input_reg_25_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_26_MPORT_en", false,-1);
        tracep->declBus(c+1168,"top Register Reg_reg_trace_io_input_reg_26_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+257,"top Register Reg_reg_trace_io_input_reg_26_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_27_MPORT_en", false,-1);
        tracep->declBus(c+1169,"top Register Reg_reg_trace_io_input_reg_27_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+259,"top Register Reg_reg_trace_io_input_reg_27_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_28_MPORT_en", false,-1);
        tracep->declBus(c+1170,"top Register Reg_reg_trace_io_input_reg_28_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+261,"top Register Reg_reg_trace_io_input_reg_28_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_29_MPORT_en", false,-1);
        tracep->declBus(c+1171,"top Register Reg_reg_trace_io_input_reg_29_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+263,"top Register Reg_reg_trace_io_input_reg_29_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_30_MPORT_en", false,-1);
        tracep->declBus(c+1172,"top Register Reg_reg_trace_io_input_reg_30_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+265,"top Register Reg_reg_trace_io_input_reg_30_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1141,"top Register Reg_reg_trace_io_input_reg_31_MPORT_en", false,-1);
        tracep->declBus(c+1173,"top Register Reg_reg_trace_io_input_reg_31_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+267,"top Register Reg_reg_trace_io_input_reg_31_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+9,"top Register Reg_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+8,"top Register Reg_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+1141,"top Register Reg_MPORT_mask", false,-1);
        tracep->declBit(c+269,"top Register Reg_MPORT_en", false,-1);
        tracep->declQuad(c+205,"top Register reg_trace_input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+207,"top Register reg_trace_input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+209,"top Register reg_trace_input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+211,"top Register reg_trace_input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+213,"top Register reg_trace_input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+215,"top Register reg_trace_input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+217,"top Register reg_trace_input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+219,"top Register reg_trace_input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+221,"top Register reg_trace_input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+223,"top Register reg_trace_input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+225,"top Register reg_trace_input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+227,"top Register reg_trace_input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+229,"top Register reg_trace_input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+231,"top Register reg_trace_input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+233,"top Register reg_trace_input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+235,"top Register reg_trace_input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+237,"top Register reg_trace_input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+239,"top Register reg_trace_input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+241,"top Register reg_trace_input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+243,"top Register reg_trace_input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+245,"top Register reg_trace_input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+247,"top Register reg_trace_input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+249,"top Register reg_trace_input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+251,"top Register reg_trace_input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+253,"top Register reg_trace_input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+255,"top Register reg_trace_input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+257,"top Register reg_trace_input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+259,"top Register reg_trace_input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+261,"top Register reg_trace_input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+263,"top Register reg_trace_input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+265,"top Register reg_trace_input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+267,"top Register reg_trace_input_reg_31", false,-1, 63,0);
        tracep->declQuad(c+205,"top Register reg_trace input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+207,"top Register reg_trace input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+209,"top Register reg_trace input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+211,"top Register reg_trace input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+213,"top Register reg_trace input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+215,"top Register reg_trace input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+217,"top Register reg_trace input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+219,"top Register reg_trace input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+221,"top Register reg_trace input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+223,"top Register reg_trace input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+225,"top Register reg_trace input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+227,"top Register reg_trace input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+229,"top Register reg_trace input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+231,"top Register reg_trace input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+233,"top Register reg_trace input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+235,"top Register reg_trace input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+237,"top Register reg_trace input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+239,"top Register reg_trace input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+241,"top Register reg_trace input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+243,"top Register reg_trace input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+245,"top Register reg_trace input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+247,"top Register reg_trace input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+249,"top Register reg_trace input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+251,"top Register reg_trace input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+253,"top Register reg_trace input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+255,"top Register reg_trace input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+257,"top Register reg_trace input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+259,"top Register reg_trace input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+261,"top Register reg_trace input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+263,"top Register reg_trace input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+265,"top Register reg_trace input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+267,"top Register reg_trace input_reg_31", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+270+i*2,"top Register reg_trace traceregs", true,(i+0), 63,0);}}
        tracep->declBit(c+1135,"top IFU clock", false,-1);
        tracep->declBit(c+1136,"top IFU reset", false,-1);
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
        tracep->declQuad(c+334,"top IFU br_target", false,-1, 63,0);
        tracep->declBit(c+19,"top IFU fs_valid", false,-1);
        tracep->declQuad(c+336,"top IFU fs_pc_next", false,-1, 63,0);
        tracep->declBit(c+338,"top IFU cache_init", false,-1);
        tracep->declQuad(c+17,"top IFU fs_pc", false,-1, 63,0);
        tracep->declBus(c+20,"top IFU fs_inst", false,-1, 31,0);
        tracep->declQuad(c+339,"top IFU seq_pc", false,-1, 63,0);
        tracep->declQuad(c+341,"top IFU pc_next", false,-1, 63,0);
        tracep->declBit(c+26,"top IFU fs_allowin", false,-1);
        tracep->declBit(c+1135,"top IDU clock", false,-1);
        tracep->declBit(c+1136,"top IDU reset", false,-1);
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
        tracep->declBit(c+52,"top IDU io_es_valid", false,-1);
        tracep->declBit(c+57,"top IDU io_ms_valid", false,-1);
        tracep->declBit(c+58,"top IDU io_ws_valid", false,-1);
        tracep->declBus(c+59,"top IDU io_es_rf_dst", false,-1, 4,0);
        tracep->declBus(c+60,"top IDU io_ms_rf_dst", false,-1, 4,0);
        tracep->declBus(c+8,"top IDU io_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+13,"top IDU io_ds_valid", false,-1);
        tracep->declBit(c+1135,"top IDU csr_reg_clock", false,-1);
        tracep->declBit(c+343,"top IDU csr_reg_io_wen1", false,-1);
        tracep->declBit(c+344,"top IDU csr_reg_io_wen2", false,-1);
        tracep->declBus(c+345,"top IDU csr_reg_io_waddr1", false,-1, 1,0);
        tracep->declQuad(c+346,"top IDU csr_reg_io_wdata1", false,-1, 63,0);
        tracep->declQuad(c+348,"top IDU csr_reg_io_wdata2", false,-1, 63,0);
        tracep->declBus(c+350,"top IDU csr_reg_io_raddr", false,-1, 1,0);
        tracep->declQuad(c+351,"top IDU csr_reg_io_rdata", false,-1, 63,0);
        tracep->declBit(c+13,"top IDU ds_valid", false,-1);
        tracep->declQuad(c+32,"top IDU ds_pc", false,-1, 63,0);
        tracep->declBus(c+353,"top IDU inst", false,-1, 31,0);
        tracep->declBit(c+354,"top IDU br_taken_cancel", false,-1);
        tracep->declBit(c+355,"top IDU src1_is_pc", false,-1);
        tracep->declBus(c+356,"top IDU inst_type", false,-1, 31,0);
        tracep->declBus(c+357,"top IDU csr_write", false,-1, 1,0);
        tracep->declBus(c+1,"top IDU rs1", false,-1, 4,0);
        tracep->declBit(c+358,"top IDU conflict_es_rs1", false,-1);
        tracep->declBit(c+359,"top IDU conflict_ms_rs1", false,-1);
        tracep->declBit(c+360,"top IDU conflict_ws_rs1", false,-1);
        tracep->declBit(c+361,"top IDU src2_is_imm", false,-1);
        tracep->declBus(c+362,"top IDU rs2", false,-1, 4,0);
        tracep->declBit(c+363,"top IDU conflict_es_rs2", false,-1);
        tracep->declBit(c+364,"top IDU conflict_ms_rs2", false,-1);
        tracep->declBit(c+365,"top IDU conflict_ws_rs2", false,-1);
        tracep->declBit(c+366,"top IDU ds_ready_go", false,-1);
        tracep->declBit(c+367,"top IDU ds_allowin", false,-1);
        tracep->declQuad(c+368,"top IDU rdata1", false,-1, 63,0);
        tracep->declQuad(c+370,"top IDU rdata2", false,-1, 63,0);
        tracep->declBit(c+372,"top IDU br_taken", false,-1);
        tracep->declBus(c+39,"top IDU rd", false,-1, 4,0);
        tracep->declBit(c+27,"top IDU fence", false,-1);
        tracep->declBus(c+373,"top IDU imm_imm", false,-1, 11,0);
        tracep->declBus(c+374,"top IDU imm_imm_1", false,-1, 19,0);
        tracep->declBus(c+375,"top IDU imm_imm_2", false,-1, 19,0);
        tracep->declBus(c+376,"top IDU imm_imm_3", false,-1, 11,0);
        tracep->declBus(c+377,"top IDU imm_imm_4", false,-1, 11,0);
        tracep->declQuad(c+378,"top IDU imm", false,-1, 63,0);
        tracep->declBus(c+380,"top IDU csr_index", false,-1, 1,0);
        tracep->declQuad(c+381,"top IDU csr_wdata", false,-1, 63,0);
        tracep->declBus(c+34,"top IDU ALUop", false,-1, 31,0);
        tracep->declQuad(c+383,"top IDU src1", false,-1, 63,0);
        tracep->declQuad(c+37,"top IDU src2", false,-1, 63,0);
        tracep->declBit(c+1135,"top IDU csr_reg clock", false,-1);
        tracep->declBit(c+343,"top IDU csr_reg io_wen1", false,-1);
        tracep->declBit(c+344,"top IDU csr_reg io_wen2", false,-1);
        tracep->declBus(c+345,"top IDU csr_reg io_waddr1", false,-1, 1,0);
        tracep->declQuad(c+346,"top IDU csr_reg io_wdata1", false,-1, 63,0);
        tracep->declQuad(c+348,"top IDU csr_reg io_wdata2", false,-1, 63,0);
        tracep->declBus(c+350,"top IDU csr_reg io_raddr", false,-1, 1,0);
        tracep->declQuad(c+351,"top IDU csr_reg io_rdata", false,-1, 63,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+385+i*2,"top IDU csr_reg CSR_Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+1141,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_en", false,-1);
        tracep->declBus(c+350,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+351,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+346,"top IDU csr_reg CSR_Reg_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+345,"top IDU csr_reg CSR_Reg_MPORT_addr", false,-1, 1,0);
        tracep->declBit(c+1141,"top IDU csr_reg CSR_Reg_MPORT_mask", false,-1);
        tracep->declBit(c+343,"top IDU csr_reg CSR_Reg_MPORT_en", false,-1);
        tracep->declQuad(c+348,"top IDU csr_reg CSR_Reg_MPORT_1_data", false,-1, 63,0);
        tracep->declBus(c+1174,"top IDU csr_reg CSR_Reg_MPORT_1_addr", false,-1, 1,0);
        tracep->declBit(c+1141,"top IDU csr_reg CSR_Reg_MPORT_1_mask", false,-1);
        tracep->declBit(c+344,"top IDU csr_reg CSR_Reg_MPORT_1_en", false,-1);
        tracep->declBit(c+1135,"top EXU clock", false,-1);
        tracep->declBit(c+1136,"top EXU reset", false,-1);
        tracep->declQuad(c+32,"top EXU io_pc", false,-1, 63,0);
        tracep->declBit(c+30,"top EXU io_ds_to_es_valid", false,-1);
        tracep->declBit(c+61,"top EXU io_ms_allowin", false,-1);
        tracep->declBit(c+31,"top EXU io_es_allowin", false,-1);
        tracep->declBus(c+34,"top EXU io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+35,"top EXU io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+37,"top EXU io_src2_value", false,-1, 63,0);
        tracep->declBus(c+39,"top EXU io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+40,"top EXU io_store_data", false,-1, 63,0);
        tracep->declBit(c+52,"top EXU io_es_to_ms_valid", false,-1);
        tracep->declBus(c+46,"top EXU io_load_type", false,-1, 2,0);
        tracep->declQuad(c+62,"top EXU io_to_ms_pc", false,-1, 63,0);
        tracep->declQuad(c+48,"top EXU io_to_ms_alures", false,-1, 63,0);
        tracep->declQuad(c+64,"top EXU io_to_ms_store_data", false,-1, 63,0);
        tracep->declBit(c+66,"top EXU io_to_ms_wen", false,-1);
        tracep->declBus(c+67,"top EXU io_to_ms_wstrb", false,-1, 7,0);
        tracep->declBit(c+68,"top EXU io_to_ms_ren", false,-1);
        tracep->declQuad(c+48,"top EXU io_to_ms_maddr", false,-1, 63,0);
        tracep->declBus(c+59,"top EXU io_to_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+54,"top EXU io_to_ms_rf_we", false,-1);
        tracep->declBus(c+69,"top EXU io_to_ms_load_type", false,-1, 2,0);
        tracep->declBit(c+42,"top EXU io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+43,"top EXU io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+44,"top EXU io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+45,"top EXU io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBit(c+52,"top EXU io_es_valid", false,-1);
        tracep->declBit(c+54,"top EXU io_es_rf_we", false,-1);
        tracep->declBus(c+59,"top EXU io_es_rf_dst", false,-1, 4,0);
        tracep->declBit(c+52,"top EXU io_es_fwd_ready", false,-1);
        tracep->declQuad(c+48,"top EXU io_es_fwd_res", false,-1, 63,0);
        tracep->declBit(c+47,"top EXU io_es_ld", false,-1);
        tracep->declQuad(c+393,"top EXU ALU_io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+395,"top EXU ALU_io_src2_value", false,-1, 63,0);
        tracep->declBus(c+397,"top EXU ALU_io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+48,"top EXU ALU_io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+62,"top EXU es_pc", false,-1, 63,0);
        tracep->declBit(c+52,"top EXU es_valid", false,-1);
        tracep->declBus(c+59,"top EXU es_rd", false,-1, 4,0);
        tracep->declBit(c+54,"top EXU es_rf_we", false,-1);
        tracep->declQuad(c+398,"top EXU src1_value", false,-1, 63,0);
        tracep->declQuad(c+395,"top EXU src2_value", false,-1, 63,0);
        tracep->declQuad(c+64,"top EXU store_data", false,-1, 63,0);
        tracep->declBus(c+67,"top EXU st_wstrb", false,-1, 7,0);
        tracep->declBit(c+66,"top EXU st_we", false,-1);
        tracep->declBit(c+68,"top EXU ld_we", false,-1);
        tracep->declBus(c+397,"top EXU ALUop", false,-1, 31,0);
        tracep->declBus(c+69,"top EXU load_type", false,-1, 2,0);
        tracep->declBit(c+31,"top EXU es_allowin", false,-1);
        tracep->declQuad(c+393,"top EXU ALU io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+395,"top EXU ALU io_src2_value", false,-1, 63,0);
        tracep->declBus(c+397,"top EXU ALU io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+48,"top EXU ALU io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+400,"top EXU ALU add_res", false,-1, 63,0);
        tracep->declQuad(c+402,"top EXU ALU sub_res", false,-1, 63,0);
        tracep->declQuad(c+404,"top EXU ALU sra_res", false,-1, 63,0);
        tracep->declQuad(c+406,"top EXU ALU srl_res", false,-1, 63,0);
        tracep->declArray(c+408,"top EXU ALU sll_res", false,-1, 126,0);
        tracep->declBus(c+412,"top EXU ALU sraw_res", false,-1, 31,0);
        tracep->declBus(c+413,"top EXU ALU srlw_res", false,-1, 31,0);
        tracep->declQuad(c+414,"top EXU ALU sllw_res", false,-1, 62,0);
        tracep->declQuad(c+416,"top EXU ALU or_res", false,-1, 63,0);
        tracep->declQuad(c+418,"top EXU ALU xor_res", false,-1, 63,0);
        tracep->declQuad(c+420,"top EXU ALU and_res", false,-1, 63,0);
        tracep->declQuad(c+422,"top EXU ALU mlu_res", false,-1, 63,0);
        tracep->declBus(c+424,"top EXU ALU mluw_res", false,-1, 31,0);
        tracep->declBus(c+425,"top EXU ALU divw_res", false,-1, 31,0);
        tracep->declBus(c+426,"top EXU ALU divuw_res", false,-1, 31,0);
        tracep->declBus(c+427,"top EXU ALU remw_res", false,-1, 31,0);
        tracep->declBus(c+428,"top EXU ALU remuw_res", false,-1, 31,0);
        tracep->declArray(c+429,"top EXU ALU div_res", false,-1, 64,0);
        tracep->declQuad(c+432,"top EXU ALU divu_res", false,-1, 63,0);
        tracep->declQuad(c+434,"top EXU ALU rem_res", false,-1, 63,0);
        tracep->declQuad(c+436,"top EXU ALU remu_res", false,-1, 63,0);
        tracep->declArray(c+438,"top EXU ALU alu_res", false,-1, 126,0);
        tracep->declBit(c+1135,"top LSU clock", false,-1);
        tracep->declBit(c+1136,"top LSU reset", false,-1);
        tracep->declQuad(c+62,"top LSU io_pc", false,-1, 63,0);
        tracep->declBit(c+52,"top LSU io_es_to_ms_valid", false,-1);
        tracep->declBit(c+61,"top LSU io_ms_allowin", false,-1);
        tracep->declBit(c+54,"top LSU io_rf_we", false,-1);
        tracep->declBus(c+59,"top LSU io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+48,"top LSU io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+64,"top LSU io_store_data", false,-1, 63,0);
        tracep->declBus(c+69,"top LSU io_load_type", false,-1, 2,0);
        tracep->declBit(c+66,"top LSU io_wen", false,-1);
        tracep->declBus(c+67,"top LSU io_wstrb", false,-1, 7,0);
        tracep->declBit(c+68,"top LSU io_ren", false,-1);
        tracep->declQuad(c+48,"top LSU io_maddr", false,-1, 63,0);
        tracep->declQuad(c+70,"top LSU io_to_ws_pc", false,-1, 63,0);
        tracep->declQuad(c+72,"top LSU io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+53,"top LSU io_ms_to_ws_valid", false,-1);
        tracep->declBit(c+74,"top LSU io_to_ws_rf_we", false,-1);
        tracep->declBus(c+60,"top LSU io_to_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+57,"top LSU io_ms_valid", false,-1);
        tracep->declBit(c+55,"top LSU io_ms_rf_we", false,-1);
        tracep->declBus(c+60,"top LSU io_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+53,"top LSU io_ms_fwd_ready", false,-1);
        tracep->declQuad(c+50,"top LSU io_ms_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+75,"top LSU io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+77,"top LSU io_axi_in_rvalid", false,-1);
        tracep->declBit(c+78,"top LSU io_axi_in_bvalid", false,-1);
        tracep->declBus(c+79,"top LSU io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+80,"top LSU io_axi_out_arvalid", false,-1);
        tracep->declBus(c+79,"top LSU io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBit(c+81,"top LSU io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+82,"top LSU io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+84,"top LSU io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+85,"top LSU io_axi_out_wvalid", false,-1);
        tracep->declBit(c+57,"top LSU ms_valid", false,-1);
        tracep->declQuad(c+70,"top LSU ms_pc", false,-1, 63,0);
        tracep->declBit(c+74,"top LSU ms_rf_we", false,-1);
        tracep->declBus(c+60,"top LSU ms_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+442,"top LSU ms_res", false,-1, 63,0);
        tracep->declQuad(c+82,"top LSU store_data", false,-1, 63,0);
        tracep->declBit(c+85,"top LSU wen", false,-1);
        tracep->declBus(c+84,"top LSU wstrb", false,-1, 7,0);
        tracep->declBit(c+444,"top LSU ren", false,-1);
        tracep->declQuad(c+445,"top LSU maddr", false,-1, 63,0);
        tracep->declBus(c+447,"top LSU load_type", false,-1, 2,0);
        tracep->declBit(c+448,"top LSU ms_ready_go", false,-1);
        tracep->declBit(c+61,"top LSU ms_allowin", false,-1);
        tracep->declQuad(c+449,"top LSU rdata", false,-1, 63,0);
        tracep->declBit(c+1135,"top WBU clock", false,-1);
        tracep->declBit(c+1136,"top WBU reset", false,-1);
        tracep->declQuad(c+70,"top WBU io_pc", false,-1, 63,0);
        tracep->declBit(c+53,"top WBU io_ms_to_ws_valid", false,-1);
        tracep->declQuad(c+72,"top WBU io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+74,"top WBU io_rf_we", false,-1);
        tracep->declBus(c+60,"top WBU io_rf_dst", false,-1, 4,0);
        tracep->declBit(c+7,"top WBU io_we", false,-1);
        tracep->declBus(c+8,"top WBU io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU io_wdata", false,-1, 63,0);
        tracep->declBit(c+58,"top WBU io_ws_valid", false,-1);
        tracep->declBit(c+56,"top WBU io_ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU io_ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU io_ws_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+86,"top WBU io_ws_pc", false,-1, 63,0);
        tracep->declBit(c+58,"top WBU ws_valid", false,-1);
        tracep->declQuad(c+86,"top WBU ws_pc", false,-1, 63,0);
        tracep->declBit(c+56,"top WBU ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU ws_res", false,-1, 63,0);
        tracep->declBit(c+1135,"top arbiter clock", false,-1);
        tracep->declBit(c+1136,"top arbiter reset", false,-1);
        tracep->declBus(c+88,"top arbiter io_ifu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+89,"top arbiter io_ifu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+90,"top arbiter io_ifu_axi_in_arvalid", false,-1);
        tracep->declBit(c+91,"top arbiter io_ifu_axi_in_rready", false,-1);
        tracep->declQuad(c+92,"top arbiter io_ifu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+94,"top arbiter io_ifu_axi_out_rlast", false,-1);
        tracep->declBit(c+95,"top arbiter io_ifu_axi_out_rvalid", false,-1);
        tracep->declBus(c+96,"top arbiter io_lsu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+97,"top arbiter io_lsu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+98,"top arbiter io_lsu_axi_in_arvalid", false,-1);
        tracep->declBit(c+99,"top arbiter io_lsu_axi_in_rready", false,-1);
        tracep->declBus(c+100,"top arbiter io_lsu_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+101,"top arbiter io_lsu_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+102,"top arbiter io_lsu_axi_in_awvalid", false,-1);
        tracep->declQuad(c+103,"top arbiter io_lsu_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+105,"top arbiter io_lsu_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+106,"top arbiter io_lsu_axi_in_wvalid", false,-1);
        tracep->declBit(c+107,"top arbiter io_lsu_axi_in_bready", false,-1);
        tracep->declQuad(c+108,"top arbiter io_lsu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+110,"top arbiter io_lsu_axi_out_rlast", false,-1);
        tracep->declBit(c+111,"top arbiter io_lsu_axi_out_rvalid", false,-1);
        tracep->declBit(c+112,"top arbiter io_lsu_axi_out_wready", false,-1);
        tracep->declBit(c+113,"top arbiter io_lsu_axi_out_bvalid", false,-1);
        tracep->declQuad(c+114,"top arbiter io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+116,"top arbiter io_axi_in_rlast", false,-1);
        tracep->declBit(c+117,"top arbiter io_axi_in_rvalid", false,-1);
        tracep->declBit(c+118,"top arbiter io_axi_in_wready", false,-1);
        tracep->declBit(c+119,"top arbiter io_axi_in_bvalid", false,-1);
        tracep->declBus(c+120,"top arbiter io_axi_out_araddr", false,-1, 31,0);
        tracep->declBus(c+121,"top arbiter io_axi_out_arlen", false,-1, 7,0);
        tracep->declBit(c+122,"top arbiter io_axi_out_arvalid", false,-1);
        tracep->declBit(c+123,"top arbiter io_axi_out_rready", false,-1);
        tracep->declBus(c+124,"top arbiter io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBus(c+125,"top arbiter io_axi_out_awlen", false,-1, 7,0);
        tracep->declBit(c+126,"top arbiter io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+127,"top arbiter io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+129,"top arbiter io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+130,"top arbiter io_axi_out_wvalid", false,-1);
        tracep->declBit(c+131,"top arbiter io_axi_out_bready", false,-1);
        tracep->declBus(c+451,"top arbiter state", false,-1, 1,0);
        tracep->declBit(c+1135,"top i_cache clock", false,-1);
        tracep->declBit(c+1136,"top i_cache reset", false,-1);
        tracep->declBus(c+25,"top i_cache io_from_ifu_araddr", false,-1, 31,0);
        tracep->declBit(c+12,"top i_cache io_from_ifu_arvalid", false,-1);
        tracep->declBit(c+26,"top i_cache io_from_ifu_rready", false,-1);
        tracep->declBit(c+21,"top i_cache io_to_ifu_arready", false,-1);
        tracep->declQuad(c+22,"top i_cache io_to_ifu_rdata", false,-1, 63,0);
        tracep->declBit(c+24,"top i_cache io_to_ifu_rvalid", false,-1);
        tracep->declBus(c+88,"top i_cache io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+89,"top i_cache io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+90,"top i_cache io_to_axi_arvalid", false,-1);
        tracep->declBit(c+91,"top i_cache io_to_axi_rready", false,-1);
        tracep->declQuad(c+92,"top i_cache io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+94,"top i_cache io_from_axi_rlast", false,-1);
        tracep->declBit(c+95,"top i_cache io_from_axi_rvalid", false,-1);
        tracep->declBit(c+29,"top i_cache io_cache_init", false,-1);
        tracep->declBit(c+28,"top i_cache io_clear_cache", false,-1);
        tracep->declArray(c+452,"top i_cache ram_0_0", false,-1, 127,0);
        tracep->declArray(c+456,"top i_cache ram_0_1", false,-1, 127,0);
        tracep->declArray(c+460,"top i_cache ram_0_2", false,-1, 127,0);
        tracep->declArray(c+464,"top i_cache ram_0_3", false,-1, 127,0);
        tracep->declArray(c+468,"top i_cache ram_0_4", false,-1, 127,0);
        tracep->declArray(c+472,"top i_cache ram_0_5", false,-1, 127,0);
        tracep->declArray(c+476,"top i_cache ram_0_6", false,-1, 127,0);
        tracep->declArray(c+480,"top i_cache ram_0_7", false,-1, 127,0);
        tracep->declArray(c+484,"top i_cache ram_0_8", false,-1, 127,0);
        tracep->declArray(c+488,"top i_cache ram_0_9", false,-1, 127,0);
        tracep->declArray(c+492,"top i_cache ram_0_10", false,-1, 127,0);
        tracep->declArray(c+496,"top i_cache ram_0_11", false,-1, 127,0);
        tracep->declArray(c+500,"top i_cache ram_0_12", false,-1, 127,0);
        tracep->declArray(c+504,"top i_cache ram_0_13", false,-1, 127,0);
        tracep->declArray(c+508,"top i_cache ram_0_14", false,-1, 127,0);
        tracep->declArray(c+512,"top i_cache ram_0_15", false,-1, 127,0);
        tracep->declArray(c+516,"top i_cache ram_1_0", false,-1, 127,0);
        tracep->declArray(c+520,"top i_cache ram_1_1", false,-1, 127,0);
        tracep->declArray(c+524,"top i_cache ram_1_2", false,-1, 127,0);
        tracep->declArray(c+528,"top i_cache ram_1_3", false,-1, 127,0);
        tracep->declArray(c+532,"top i_cache ram_1_4", false,-1, 127,0);
        tracep->declArray(c+536,"top i_cache ram_1_5", false,-1, 127,0);
        tracep->declArray(c+540,"top i_cache ram_1_6", false,-1, 127,0);
        tracep->declArray(c+544,"top i_cache ram_1_7", false,-1, 127,0);
        tracep->declArray(c+548,"top i_cache ram_1_8", false,-1, 127,0);
        tracep->declArray(c+552,"top i_cache ram_1_9", false,-1, 127,0);
        tracep->declArray(c+556,"top i_cache ram_1_10", false,-1, 127,0);
        tracep->declArray(c+560,"top i_cache ram_1_11", false,-1, 127,0);
        tracep->declArray(c+564,"top i_cache ram_1_12", false,-1, 127,0);
        tracep->declArray(c+568,"top i_cache ram_1_13", false,-1, 127,0);
        tracep->declArray(c+572,"top i_cache ram_1_14", false,-1, 127,0);
        tracep->declArray(c+576,"top i_cache ram_1_15", false,-1, 127,0);
        tracep->declArray(c+580,"top i_cache ram_2_0", false,-1, 127,0);
        tracep->declArray(c+584,"top i_cache ram_2_1", false,-1, 127,0);
        tracep->declArray(c+588,"top i_cache ram_2_2", false,-1, 127,0);
        tracep->declArray(c+592,"top i_cache ram_2_3", false,-1, 127,0);
        tracep->declArray(c+596,"top i_cache ram_2_4", false,-1, 127,0);
        tracep->declArray(c+600,"top i_cache ram_2_5", false,-1, 127,0);
        tracep->declArray(c+604,"top i_cache ram_2_6", false,-1, 127,0);
        tracep->declArray(c+608,"top i_cache ram_2_7", false,-1, 127,0);
        tracep->declArray(c+612,"top i_cache ram_2_8", false,-1, 127,0);
        tracep->declArray(c+616,"top i_cache ram_2_9", false,-1, 127,0);
        tracep->declArray(c+620,"top i_cache ram_2_10", false,-1, 127,0);
        tracep->declArray(c+624,"top i_cache ram_2_11", false,-1, 127,0);
        tracep->declArray(c+628,"top i_cache ram_2_12", false,-1, 127,0);
        tracep->declArray(c+632,"top i_cache ram_2_13", false,-1, 127,0);
        tracep->declArray(c+636,"top i_cache ram_2_14", false,-1, 127,0);
        tracep->declArray(c+640,"top i_cache ram_2_15", false,-1, 127,0);
        tracep->declArray(c+644,"top i_cache ram_3_0", false,-1, 127,0);
        tracep->declArray(c+648,"top i_cache ram_3_1", false,-1, 127,0);
        tracep->declArray(c+652,"top i_cache ram_3_2", false,-1, 127,0);
        tracep->declArray(c+656,"top i_cache ram_3_3", false,-1, 127,0);
        tracep->declArray(c+660,"top i_cache ram_3_4", false,-1, 127,0);
        tracep->declArray(c+664,"top i_cache ram_3_5", false,-1, 127,0);
        tracep->declArray(c+668,"top i_cache ram_3_6", false,-1, 127,0);
        tracep->declArray(c+672,"top i_cache ram_3_7", false,-1, 127,0);
        tracep->declArray(c+676,"top i_cache ram_3_8", false,-1, 127,0);
        tracep->declArray(c+680,"top i_cache ram_3_9", false,-1, 127,0);
        tracep->declArray(c+684,"top i_cache ram_3_10", false,-1, 127,0);
        tracep->declArray(c+688,"top i_cache ram_3_11", false,-1, 127,0);
        tracep->declArray(c+692,"top i_cache ram_3_12", false,-1, 127,0);
        tracep->declArray(c+696,"top i_cache ram_3_13", false,-1, 127,0);
        tracep->declArray(c+700,"top i_cache ram_3_14", false,-1, 127,0);
        tracep->declArray(c+704,"top i_cache ram_3_15", false,-1, 127,0);
        tracep->declBus(c+708,"top i_cache tag_0_0", false,-1, 31,0);
        tracep->declBus(c+709,"top i_cache tag_0_1", false,-1, 31,0);
        tracep->declBus(c+710,"top i_cache tag_0_2", false,-1, 31,0);
        tracep->declBus(c+711,"top i_cache tag_0_3", false,-1, 31,0);
        tracep->declBus(c+712,"top i_cache tag_0_4", false,-1, 31,0);
        tracep->declBus(c+713,"top i_cache tag_0_5", false,-1, 31,0);
        tracep->declBus(c+714,"top i_cache tag_0_6", false,-1, 31,0);
        tracep->declBus(c+715,"top i_cache tag_0_7", false,-1, 31,0);
        tracep->declBus(c+716,"top i_cache tag_0_8", false,-1, 31,0);
        tracep->declBus(c+717,"top i_cache tag_0_9", false,-1, 31,0);
        tracep->declBus(c+718,"top i_cache tag_0_10", false,-1, 31,0);
        tracep->declBus(c+719,"top i_cache tag_0_11", false,-1, 31,0);
        tracep->declBus(c+720,"top i_cache tag_0_12", false,-1, 31,0);
        tracep->declBus(c+721,"top i_cache tag_0_13", false,-1, 31,0);
        tracep->declBus(c+722,"top i_cache tag_0_14", false,-1, 31,0);
        tracep->declBus(c+723,"top i_cache tag_0_15", false,-1, 31,0);
        tracep->declBus(c+724,"top i_cache tag_1_0", false,-1, 31,0);
        tracep->declBus(c+725,"top i_cache tag_1_1", false,-1, 31,0);
        tracep->declBus(c+726,"top i_cache tag_1_2", false,-1, 31,0);
        tracep->declBus(c+727,"top i_cache tag_1_3", false,-1, 31,0);
        tracep->declBus(c+728,"top i_cache tag_1_4", false,-1, 31,0);
        tracep->declBus(c+729,"top i_cache tag_1_5", false,-1, 31,0);
        tracep->declBus(c+730,"top i_cache tag_1_6", false,-1, 31,0);
        tracep->declBus(c+731,"top i_cache tag_1_7", false,-1, 31,0);
        tracep->declBus(c+732,"top i_cache tag_1_8", false,-1, 31,0);
        tracep->declBus(c+733,"top i_cache tag_1_9", false,-1, 31,0);
        tracep->declBus(c+734,"top i_cache tag_1_10", false,-1, 31,0);
        tracep->declBus(c+735,"top i_cache tag_1_11", false,-1, 31,0);
        tracep->declBus(c+736,"top i_cache tag_1_12", false,-1, 31,0);
        tracep->declBus(c+737,"top i_cache tag_1_13", false,-1, 31,0);
        tracep->declBus(c+738,"top i_cache tag_1_14", false,-1, 31,0);
        tracep->declBus(c+739,"top i_cache tag_1_15", false,-1, 31,0);
        tracep->declBus(c+740,"top i_cache tag_2_0", false,-1, 31,0);
        tracep->declBus(c+741,"top i_cache tag_2_1", false,-1, 31,0);
        tracep->declBus(c+742,"top i_cache tag_2_2", false,-1, 31,0);
        tracep->declBus(c+743,"top i_cache tag_2_3", false,-1, 31,0);
        tracep->declBus(c+744,"top i_cache tag_2_4", false,-1, 31,0);
        tracep->declBus(c+745,"top i_cache tag_2_5", false,-1, 31,0);
        tracep->declBus(c+746,"top i_cache tag_2_6", false,-1, 31,0);
        tracep->declBus(c+747,"top i_cache tag_2_7", false,-1, 31,0);
        tracep->declBus(c+748,"top i_cache tag_2_8", false,-1, 31,0);
        tracep->declBus(c+749,"top i_cache tag_2_9", false,-1, 31,0);
        tracep->declBus(c+750,"top i_cache tag_2_10", false,-1, 31,0);
        tracep->declBus(c+751,"top i_cache tag_2_11", false,-1, 31,0);
        tracep->declBus(c+752,"top i_cache tag_2_12", false,-1, 31,0);
        tracep->declBus(c+753,"top i_cache tag_2_13", false,-1, 31,0);
        tracep->declBus(c+754,"top i_cache tag_2_14", false,-1, 31,0);
        tracep->declBus(c+755,"top i_cache tag_2_15", false,-1, 31,0);
        tracep->declBus(c+756,"top i_cache tag_3_0", false,-1, 31,0);
        tracep->declBus(c+757,"top i_cache tag_3_1", false,-1, 31,0);
        tracep->declBus(c+758,"top i_cache tag_3_2", false,-1, 31,0);
        tracep->declBus(c+759,"top i_cache tag_3_3", false,-1, 31,0);
        tracep->declBus(c+760,"top i_cache tag_3_4", false,-1, 31,0);
        tracep->declBus(c+761,"top i_cache tag_3_5", false,-1, 31,0);
        tracep->declBus(c+762,"top i_cache tag_3_6", false,-1, 31,0);
        tracep->declBus(c+763,"top i_cache tag_3_7", false,-1, 31,0);
        tracep->declBus(c+764,"top i_cache tag_3_8", false,-1, 31,0);
        tracep->declBus(c+765,"top i_cache tag_3_9", false,-1, 31,0);
        tracep->declBus(c+766,"top i_cache tag_3_10", false,-1, 31,0);
        tracep->declBus(c+767,"top i_cache tag_3_11", false,-1, 31,0);
        tracep->declBus(c+768,"top i_cache tag_3_12", false,-1, 31,0);
        tracep->declBus(c+769,"top i_cache tag_3_13", false,-1, 31,0);
        tracep->declBus(c+770,"top i_cache tag_3_14", false,-1, 31,0);
        tracep->declBus(c+771,"top i_cache tag_3_15", false,-1, 31,0);
        tracep->declBit(c+772,"top i_cache valid_0_0", false,-1);
        tracep->declBit(c+773,"top i_cache valid_0_1", false,-1);
        tracep->declBit(c+774,"top i_cache valid_0_2", false,-1);
        tracep->declBit(c+775,"top i_cache valid_0_3", false,-1);
        tracep->declBit(c+776,"top i_cache valid_0_4", false,-1);
        tracep->declBit(c+777,"top i_cache valid_0_5", false,-1);
        tracep->declBit(c+778,"top i_cache valid_0_6", false,-1);
        tracep->declBit(c+779,"top i_cache valid_0_7", false,-1);
        tracep->declBit(c+780,"top i_cache valid_0_8", false,-1);
        tracep->declBit(c+781,"top i_cache valid_0_9", false,-1);
        tracep->declBit(c+782,"top i_cache valid_0_10", false,-1);
        tracep->declBit(c+783,"top i_cache valid_0_11", false,-1);
        tracep->declBit(c+784,"top i_cache valid_0_12", false,-1);
        tracep->declBit(c+785,"top i_cache valid_0_13", false,-1);
        tracep->declBit(c+786,"top i_cache valid_0_14", false,-1);
        tracep->declBit(c+787,"top i_cache valid_0_15", false,-1);
        tracep->declBit(c+788,"top i_cache valid_1_0", false,-1);
        tracep->declBit(c+789,"top i_cache valid_1_1", false,-1);
        tracep->declBit(c+790,"top i_cache valid_1_2", false,-1);
        tracep->declBit(c+791,"top i_cache valid_1_3", false,-1);
        tracep->declBit(c+792,"top i_cache valid_1_4", false,-1);
        tracep->declBit(c+793,"top i_cache valid_1_5", false,-1);
        tracep->declBit(c+794,"top i_cache valid_1_6", false,-1);
        tracep->declBit(c+795,"top i_cache valid_1_7", false,-1);
        tracep->declBit(c+796,"top i_cache valid_1_8", false,-1);
        tracep->declBit(c+797,"top i_cache valid_1_9", false,-1);
        tracep->declBit(c+798,"top i_cache valid_1_10", false,-1);
        tracep->declBit(c+799,"top i_cache valid_1_11", false,-1);
        tracep->declBit(c+800,"top i_cache valid_1_12", false,-1);
        tracep->declBit(c+801,"top i_cache valid_1_13", false,-1);
        tracep->declBit(c+802,"top i_cache valid_1_14", false,-1);
        tracep->declBit(c+803,"top i_cache valid_1_15", false,-1);
        tracep->declBit(c+804,"top i_cache valid_2_0", false,-1);
        tracep->declBit(c+805,"top i_cache valid_2_1", false,-1);
        tracep->declBit(c+806,"top i_cache valid_2_2", false,-1);
        tracep->declBit(c+807,"top i_cache valid_2_3", false,-1);
        tracep->declBit(c+808,"top i_cache valid_2_4", false,-1);
        tracep->declBit(c+809,"top i_cache valid_2_5", false,-1);
        tracep->declBit(c+810,"top i_cache valid_2_6", false,-1);
        tracep->declBit(c+811,"top i_cache valid_2_7", false,-1);
        tracep->declBit(c+812,"top i_cache valid_2_8", false,-1);
        tracep->declBit(c+813,"top i_cache valid_2_9", false,-1);
        tracep->declBit(c+814,"top i_cache valid_2_10", false,-1);
        tracep->declBit(c+815,"top i_cache valid_2_11", false,-1);
        tracep->declBit(c+816,"top i_cache valid_2_12", false,-1);
        tracep->declBit(c+817,"top i_cache valid_2_13", false,-1);
        tracep->declBit(c+818,"top i_cache valid_2_14", false,-1);
        tracep->declBit(c+819,"top i_cache valid_2_15", false,-1);
        tracep->declBit(c+820,"top i_cache valid_3_0", false,-1);
        tracep->declBit(c+821,"top i_cache valid_3_1", false,-1);
        tracep->declBit(c+822,"top i_cache valid_3_2", false,-1);
        tracep->declBit(c+823,"top i_cache valid_3_3", false,-1);
        tracep->declBit(c+824,"top i_cache valid_3_4", false,-1);
        tracep->declBit(c+825,"top i_cache valid_3_5", false,-1);
        tracep->declBit(c+826,"top i_cache valid_3_6", false,-1);
        tracep->declBit(c+827,"top i_cache valid_3_7", false,-1);
        tracep->declBit(c+828,"top i_cache valid_3_8", false,-1);
        tracep->declBit(c+829,"top i_cache valid_3_9", false,-1);
        tracep->declBit(c+830,"top i_cache valid_3_10", false,-1);
        tracep->declBit(c+831,"top i_cache valid_3_11", false,-1);
        tracep->declBit(c+832,"top i_cache valid_3_12", false,-1);
        tracep->declBit(c+833,"top i_cache valid_3_13", false,-1);
        tracep->declBit(c+834,"top i_cache valid_3_14", false,-1);
        tracep->declBit(c+835,"top i_cache valid_3_15", false,-1);
        tracep->declBus(c+836,"top i_cache addr", false,-1, 31,0);
        tracep->declQuad(c+837,"top i_cache receive_data_0", false,-1, 63,0);
        tracep->declQuad(c+839,"top i_cache receive_data_1", false,-1, 63,0);
        tracep->declBus(c+841,"top i_cache receive_num", false,-1, 2,0);
        tracep->declBus(c+842,"top i_cache quene_0", false,-1, 7,0);
        tracep->declBus(c+843,"top i_cache quene_1", false,-1, 7,0);
        tracep->declBus(c+844,"top i_cache quene_2", false,-1, 7,0);
        tracep->declBus(c+845,"top i_cache quene_3", false,-1, 7,0);
        tracep->declBus(c+846,"top i_cache quene_4", false,-1, 7,0);
        tracep->declBus(c+847,"top i_cache quene_5", false,-1, 7,0);
        tracep->declBus(c+848,"top i_cache quene_6", false,-1, 7,0);
        tracep->declBus(c+849,"top i_cache quene_7", false,-1, 7,0);
        tracep->declBus(c+850,"top i_cache quene_8", false,-1, 7,0);
        tracep->declBus(c+851,"top i_cache quene_9", false,-1, 7,0);
        tracep->declBus(c+852,"top i_cache quene_10", false,-1, 7,0);
        tracep->declBus(c+853,"top i_cache quene_11", false,-1, 7,0);
        tracep->declBus(c+854,"top i_cache quene_12", false,-1, 7,0);
        tracep->declBus(c+855,"top i_cache quene_13", false,-1, 7,0);
        tracep->declBus(c+856,"top i_cache quene_14", false,-1, 7,0);
        tracep->declBus(c+857,"top i_cache quene_15", false,-1, 7,0);
        tracep->declBus(c+858,"top i_cache offset", false,-1, 3,0);
        tracep->declBus(c+859,"top i_cache index", false,-1, 3,0);
        tracep->declBus(c+860,"top i_cache tag", false,-1, 23,0);
        tracep->declBus(c+861,"top i_cache shift_bit", false,-1, 6,0);
        tracep->declBit(c+862,"top i_cache way0_hit", false,-1);
        tracep->declBit(c+863,"top i_cache way1_hit", false,-1);
        tracep->declBit(c+864,"top i_cache way2_hit", false,-1);
        tracep->declBit(c+865,"top i_cache way3_hit", false,-1);
        tracep->declBus(c+866,"top i_cache unuse_way", false,-1, 2,0);
        tracep->declBus(c+867,"top i_cache state", false,-1, 2,0);
        tracep->declBit(c+1135,"top d_cache clock", false,-1);
        tracep->declBit(c+1136,"top d_cache reset", false,-1);
        tracep->declBus(c+79,"top d_cache io_from_lsu_araddr", false,-1, 31,0);
        tracep->declBit(c+80,"top d_cache io_from_lsu_arvalid", false,-1);
        tracep->declBus(c+79,"top d_cache io_from_lsu_awaddr", false,-1, 31,0);
        tracep->declBit(c+81,"top d_cache io_from_lsu_awvalid", false,-1);
        tracep->declQuad(c+82,"top d_cache io_from_lsu_wdata", false,-1, 63,0);
        tracep->declBus(c+84,"top d_cache io_from_lsu_wstrb", false,-1, 7,0);
        tracep->declBit(c+85,"top d_cache io_from_lsu_wvalid", false,-1);
        tracep->declQuad(c+75,"top d_cache io_to_lsu_rdata", false,-1, 63,0);
        tracep->declBit(c+77,"top d_cache io_to_lsu_rvalid", false,-1);
        tracep->declBit(c+78,"top d_cache io_to_lsu_bvalid", false,-1);
        tracep->declBus(c+96,"top d_cache io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+97,"top d_cache io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+98,"top d_cache io_to_axi_arvalid", false,-1);
        tracep->declBit(c+99,"top d_cache io_to_axi_rready", false,-1);
        tracep->declBus(c+100,"top d_cache io_to_axi_awaddr", false,-1, 31,0);
        tracep->declBus(c+101,"top d_cache io_to_axi_awlen", false,-1, 7,0);
        tracep->declBit(c+102,"top d_cache io_to_axi_awvalid", false,-1);
        tracep->declQuad(c+103,"top d_cache io_to_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+105,"top d_cache io_to_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+106,"top d_cache io_to_axi_wvalid", false,-1);
        tracep->declBit(c+107,"top d_cache io_to_axi_bready", false,-1);
        tracep->declQuad(c+108,"top d_cache io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+110,"top d_cache io_from_axi_rlast", false,-1);
        tracep->declBit(c+111,"top d_cache io_from_axi_rvalid", false,-1);
        tracep->declBit(c+112,"top d_cache io_from_axi_wready", false,-1);
        tracep->declBit(c+113,"top d_cache io_from_axi_bvalid", false,-1);
        tracep->declArray(c+868,"top d_cache ram_0_0", false,-1, 127,0);
        tracep->declArray(c+872,"top d_cache ram_0_1", false,-1, 127,0);
        tracep->declArray(c+876,"top d_cache ram_0_2", false,-1, 127,0);
        tracep->declArray(c+880,"top d_cache ram_0_3", false,-1, 127,0);
        tracep->declArray(c+884,"top d_cache ram_0_4", false,-1, 127,0);
        tracep->declArray(c+888,"top d_cache ram_0_5", false,-1, 127,0);
        tracep->declArray(c+892,"top d_cache ram_0_6", false,-1, 127,0);
        tracep->declArray(c+896,"top d_cache ram_0_7", false,-1, 127,0);
        tracep->declArray(c+900,"top d_cache ram_0_8", false,-1, 127,0);
        tracep->declArray(c+904,"top d_cache ram_0_9", false,-1, 127,0);
        tracep->declArray(c+908,"top d_cache ram_0_10", false,-1, 127,0);
        tracep->declArray(c+912,"top d_cache ram_0_11", false,-1, 127,0);
        tracep->declArray(c+916,"top d_cache ram_0_12", false,-1, 127,0);
        tracep->declArray(c+920,"top d_cache ram_0_13", false,-1, 127,0);
        tracep->declArray(c+924,"top d_cache ram_0_14", false,-1, 127,0);
        tracep->declArray(c+928,"top d_cache ram_0_15", false,-1, 127,0);
        tracep->declArray(c+932,"top d_cache ram_1_0", false,-1, 127,0);
        tracep->declArray(c+936,"top d_cache ram_1_1", false,-1, 127,0);
        tracep->declArray(c+940,"top d_cache ram_1_2", false,-1, 127,0);
        tracep->declArray(c+944,"top d_cache ram_1_3", false,-1, 127,0);
        tracep->declArray(c+948,"top d_cache ram_1_4", false,-1, 127,0);
        tracep->declArray(c+952,"top d_cache ram_1_5", false,-1, 127,0);
        tracep->declArray(c+956,"top d_cache ram_1_6", false,-1, 127,0);
        tracep->declArray(c+960,"top d_cache ram_1_7", false,-1, 127,0);
        tracep->declArray(c+964,"top d_cache ram_1_8", false,-1, 127,0);
        tracep->declArray(c+968,"top d_cache ram_1_9", false,-1, 127,0);
        tracep->declArray(c+972,"top d_cache ram_1_10", false,-1, 127,0);
        tracep->declArray(c+976,"top d_cache ram_1_11", false,-1, 127,0);
        tracep->declArray(c+980,"top d_cache ram_1_12", false,-1, 127,0);
        tracep->declArray(c+984,"top d_cache ram_1_13", false,-1, 127,0);
        tracep->declArray(c+988,"top d_cache ram_1_14", false,-1, 127,0);
        tracep->declArray(c+992,"top d_cache ram_1_15", false,-1, 127,0);
        tracep->declBus(c+996,"top d_cache tag_0_0", false,-1, 31,0);
        tracep->declBus(c+997,"top d_cache tag_0_1", false,-1, 31,0);
        tracep->declBus(c+998,"top d_cache tag_0_2", false,-1, 31,0);
        tracep->declBus(c+999,"top d_cache tag_0_3", false,-1, 31,0);
        tracep->declBus(c+1000,"top d_cache tag_0_4", false,-1, 31,0);
        tracep->declBus(c+1001,"top d_cache tag_0_5", false,-1, 31,0);
        tracep->declBus(c+1002,"top d_cache tag_0_6", false,-1, 31,0);
        tracep->declBus(c+1003,"top d_cache tag_0_7", false,-1, 31,0);
        tracep->declBus(c+1004,"top d_cache tag_0_8", false,-1, 31,0);
        tracep->declBus(c+1005,"top d_cache tag_0_9", false,-1, 31,0);
        tracep->declBus(c+1006,"top d_cache tag_0_10", false,-1, 31,0);
        tracep->declBus(c+1007,"top d_cache tag_0_11", false,-1, 31,0);
        tracep->declBus(c+1008,"top d_cache tag_0_12", false,-1, 31,0);
        tracep->declBus(c+1009,"top d_cache tag_0_13", false,-1, 31,0);
        tracep->declBus(c+1010,"top d_cache tag_0_14", false,-1, 31,0);
        tracep->declBus(c+1011,"top d_cache tag_0_15", false,-1, 31,0);
        tracep->declBus(c+1012,"top d_cache tag_1_0", false,-1, 31,0);
        tracep->declBus(c+1013,"top d_cache tag_1_1", false,-1, 31,0);
        tracep->declBus(c+1014,"top d_cache tag_1_2", false,-1, 31,0);
        tracep->declBus(c+1015,"top d_cache tag_1_3", false,-1, 31,0);
        tracep->declBus(c+1016,"top d_cache tag_1_4", false,-1, 31,0);
        tracep->declBus(c+1017,"top d_cache tag_1_5", false,-1, 31,0);
        tracep->declBus(c+1018,"top d_cache tag_1_6", false,-1, 31,0);
        tracep->declBus(c+1019,"top d_cache tag_1_7", false,-1, 31,0);
        tracep->declBus(c+1020,"top d_cache tag_1_8", false,-1, 31,0);
        tracep->declBus(c+1021,"top d_cache tag_1_9", false,-1, 31,0);
        tracep->declBus(c+1022,"top d_cache tag_1_10", false,-1, 31,0);
        tracep->declBus(c+1023,"top d_cache tag_1_11", false,-1, 31,0);
        tracep->declBus(c+1024,"top d_cache tag_1_12", false,-1, 31,0);
        tracep->declBus(c+1025,"top d_cache tag_1_13", false,-1, 31,0);
        tracep->declBus(c+1026,"top d_cache tag_1_14", false,-1, 31,0);
        tracep->declBus(c+1027,"top d_cache tag_1_15", false,-1, 31,0);
        tracep->declBit(c+1028,"top d_cache valid_0_0", false,-1);
        tracep->declBit(c+1029,"top d_cache valid_0_1", false,-1);
        tracep->declBit(c+1030,"top d_cache valid_0_2", false,-1);
        tracep->declBit(c+1031,"top d_cache valid_0_3", false,-1);
        tracep->declBit(c+1032,"top d_cache valid_0_4", false,-1);
        tracep->declBit(c+1033,"top d_cache valid_0_5", false,-1);
        tracep->declBit(c+1034,"top d_cache valid_0_6", false,-1);
        tracep->declBit(c+1035,"top d_cache valid_0_7", false,-1);
        tracep->declBit(c+1036,"top d_cache valid_0_8", false,-1);
        tracep->declBit(c+1037,"top d_cache valid_0_9", false,-1);
        tracep->declBit(c+1038,"top d_cache valid_0_10", false,-1);
        tracep->declBit(c+1039,"top d_cache valid_0_11", false,-1);
        tracep->declBit(c+1040,"top d_cache valid_0_12", false,-1);
        tracep->declBit(c+1041,"top d_cache valid_0_13", false,-1);
        tracep->declBit(c+1042,"top d_cache valid_0_14", false,-1);
        tracep->declBit(c+1043,"top d_cache valid_0_15", false,-1);
        tracep->declBit(c+1044,"top d_cache valid_1_0", false,-1);
        tracep->declBit(c+1045,"top d_cache valid_1_1", false,-1);
        tracep->declBit(c+1046,"top d_cache valid_1_2", false,-1);
        tracep->declBit(c+1047,"top d_cache valid_1_3", false,-1);
        tracep->declBit(c+1048,"top d_cache valid_1_4", false,-1);
        tracep->declBit(c+1049,"top d_cache valid_1_5", false,-1);
        tracep->declBit(c+1050,"top d_cache valid_1_6", false,-1);
        tracep->declBit(c+1051,"top d_cache valid_1_7", false,-1);
        tracep->declBit(c+1052,"top d_cache valid_1_8", false,-1);
        tracep->declBit(c+1053,"top d_cache valid_1_9", false,-1);
        tracep->declBit(c+1054,"top d_cache valid_1_10", false,-1);
        tracep->declBit(c+1055,"top d_cache valid_1_11", false,-1);
        tracep->declBit(c+1056,"top d_cache valid_1_12", false,-1);
        tracep->declBit(c+1057,"top d_cache valid_1_13", false,-1);
        tracep->declBit(c+1058,"top d_cache valid_1_14", false,-1);
        tracep->declBit(c+1059,"top d_cache valid_1_15", false,-1);
        tracep->declBit(c+1060,"top d_cache dirty_0_0", false,-1);
        tracep->declBit(c+1061,"top d_cache dirty_0_1", false,-1);
        tracep->declBit(c+1062,"top d_cache dirty_0_2", false,-1);
        tracep->declBit(c+1063,"top d_cache dirty_0_3", false,-1);
        tracep->declBit(c+1064,"top d_cache dirty_0_4", false,-1);
        tracep->declBit(c+1065,"top d_cache dirty_0_5", false,-1);
        tracep->declBit(c+1066,"top d_cache dirty_0_6", false,-1);
        tracep->declBit(c+1067,"top d_cache dirty_0_7", false,-1);
        tracep->declBit(c+1068,"top d_cache dirty_0_8", false,-1);
        tracep->declBit(c+1069,"top d_cache dirty_0_9", false,-1);
        tracep->declBit(c+1070,"top d_cache dirty_0_10", false,-1);
        tracep->declBit(c+1071,"top d_cache dirty_0_11", false,-1);
        tracep->declBit(c+1072,"top d_cache dirty_0_12", false,-1);
        tracep->declBit(c+1073,"top d_cache dirty_0_13", false,-1);
        tracep->declBit(c+1074,"top d_cache dirty_0_14", false,-1);
        tracep->declBit(c+1075,"top d_cache dirty_0_15", false,-1);
        tracep->declBit(c+1076,"top d_cache dirty_1_0", false,-1);
        tracep->declBit(c+1077,"top d_cache dirty_1_1", false,-1);
        tracep->declBit(c+1078,"top d_cache dirty_1_2", false,-1);
        tracep->declBit(c+1079,"top d_cache dirty_1_3", false,-1);
        tracep->declBit(c+1080,"top d_cache dirty_1_4", false,-1);
        tracep->declBit(c+1081,"top d_cache dirty_1_5", false,-1);
        tracep->declBit(c+1082,"top d_cache dirty_1_6", false,-1);
        tracep->declBit(c+1083,"top d_cache dirty_1_7", false,-1);
        tracep->declBit(c+1084,"top d_cache dirty_1_8", false,-1);
        tracep->declBit(c+1085,"top d_cache dirty_1_9", false,-1);
        tracep->declBit(c+1086,"top d_cache dirty_1_10", false,-1);
        tracep->declBit(c+1087,"top d_cache dirty_1_11", false,-1);
        tracep->declBit(c+1088,"top d_cache dirty_1_12", false,-1);
        tracep->declBit(c+1089,"top d_cache dirty_1_13", false,-1);
        tracep->declBit(c+1090,"top d_cache dirty_1_14", false,-1);
        tracep->declBit(c+1091,"top d_cache dirty_1_15", false,-1);
        tracep->declArray(c+1092,"top d_cache write_back_data", false,-1, 127,0);
        tracep->declBus(c+1096,"top d_cache write_back_addr", false,-1, 31,0);
        tracep->declQuad(c+1097,"top d_cache receive_data_0", false,-1, 63,0);
        tracep->declQuad(c+1099,"top d_cache receive_data_1", false,-1, 63,0);
        tracep->declBus(c+1101,"top d_cache receive_num", false,-1, 2,0);
        tracep->declBus(c+1102,"top d_cache quene_0", false,-1, 1,0);
        tracep->declBus(c+1103,"top d_cache quene_1", false,-1, 1,0);
        tracep->declBus(c+1104,"top d_cache quene_2", false,-1, 1,0);
        tracep->declBus(c+1105,"top d_cache quene_3", false,-1, 1,0);
        tracep->declBus(c+1106,"top d_cache quene_4", false,-1, 1,0);
        tracep->declBus(c+1107,"top d_cache quene_5", false,-1, 1,0);
        tracep->declBus(c+1108,"top d_cache quene_6", false,-1, 1,0);
        tracep->declBus(c+1109,"top d_cache quene_7", false,-1, 1,0);
        tracep->declBus(c+1110,"top d_cache quene_8", false,-1, 1,0);
        tracep->declBus(c+1111,"top d_cache quene_9", false,-1, 1,0);
        tracep->declBus(c+1112,"top d_cache quene_10", false,-1, 1,0);
        tracep->declBus(c+1113,"top d_cache quene_11", false,-1, 1,0);
        tracep->declBus(c+1114,"top d_cache quene_12", false,-1, 1,0);
        tracep->declBus(c+1115,"top d_cache quene_13", false,-1, 1,0);
        tracep->declBus(c+1116,"top d_cache quene_14", false,-1, 1,0);
        tracep->declBus(c+1117,"top d_cache quene_15", false,-1, 1,0);
        tracep->declBus(c+1118,"top d_cache offset", false,-1, 3,0);
        tracep->declBus(c+1119,"top d_cache index", false,-1, 3,0);
        tracep->declBus(c+1120,"top d_cache tag", false,-1, 23,0);
        tracep->declBus(c+1121,"top d_cache shift_bit", false,-1, 6,0);
        tracep->declQuad(c+1122,"top d_cache wmask", false,-1, 63,0);
        tracep->declBit(c+1124,"top d_cache way0_hit", false,-1);
        tracep->declBit(c+1125,"top d_cache way1_hit", false,-1);
        tracep->declBus(c+1126,"top d_cache unuse_way", false,-1, 1,0);
        tracep->declBus(c+1127,"top d_cache state", false,-1, 3,0);
        tracep->declBit(c+1135,"top axi clock", false,-1);
        tracep->declBit(c+1136,"top axi reset", false,-1);
        tracep->declBus(c+120,"top axi io_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+121,"top axi io_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+122,"top axi io_axi_in_arvalid", false,-1);
        tracep->declBit(c+123,"top axi io_axi_in_rready", false,-1);
        tracep->declBus(c+124,"top axi io_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+125,"top axi io_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+126,"top axi io_axi_in_awvalid", false,-1);
        tracep->declQuad(c+127,"top axi io_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+129,"top axi io_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+130,"top axi io_axi_in_wvalid", false,-1);
        tracep->declBit(c+131,"top axi io_axi_in_bready", false,-1);
        tracep->declQuad(c+114,"top axi io_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+116,"top axi io_axi_out_rlast", false,-1);
        tracep->declBit(c+117,"top axi io_axi_out_rvalid", false,-1);
        tracep->declBit(c+118,"top axi io_axi_out_wready", false,-1);
        tracep->declBit(c+119,"top axi io_axi_out_bvalid", false,-1);
        tracep->declQuad(c+1128,"top axi Mem_modle_Raddr", false,-1, 63,0);
        tracep->declQuad(c+114,"top axi Mem_modle_Rdata", false,-1, 63,0);
        tracep->declQuad(c+1130,"top axi Mem_modle_Waddr", false,-1, 63,0);
        tracep->declQuad(c+127,"top axi Mem_modle_Wdata", false,-1, 63,0);
        tracep->declBus(c+129,"top axi Mem_modle_Wmask", false,-1, 7,0);
        tracep->declBit(c+118,"top axi Mem_modle_Write_en", false,-1);
        tracep->declBit(c+117,"top axi Mem_modle_Read_en", false,-1);
        tracep->declBit(c+118,"top axi axi_wready", false,-1);
        tracep->declBit(c+119,"top axi axi_bvalid", false,-1);
        tracep->declBit(c+117,"top axi axi_rvalid", false,-1);
        tracep->declBus(c+1132,"top axi arlen", false,-1, 7,0);
        tracep->declBus(c+1133,"top axi awlen", false,-1, 7,0);
        tracep->declQuad(c+1128,"top axi araddr", false,-1, 63,0);
        tracep->declQuad(c+1130,"top axi awaddr", false,-1, 63,0);
        tracep->declBus(c+1134,"top axi state", false,-1, 2,0);
        tracep->declQuad(c+1128,"top axi Mem_modle Raddr", false,-1, 63,0);
        tracep->declQuad(c+1130,"top axi Mem_modle Waddr", false,-1, 63,0);
        tracep->declQuad(c+127,"top axi Mem_modle Wdata", false,-1, 63,0);
        tracep->declBus(c+129,"top axi Mem_modle Wmask", false,-1, 7,0);
        tracep->declBit(c+118,"top axi Mem_modle Write_en", false,-1);
        tracep->declBit(c+117,"top axi Mem_modle Read_en", false,-1);
        tracep->declQuad(c+114,"top axi Mem_modle Rdata", false,-1, 63,0);
        tracep->declBus(c+132,"top dpi flag", false,-1, 31,0);
        tracep->declBus(c+133,"top dpi ecall_flag", false,-1, 31,0);
        tracep->declQuad(c+134,"top dpi pc", false,-1, 63,0);
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
    VlWide<4>/*127:0*/ __Vtemp3937;
    VlWide<4>/*127:0*/ __Vtemp3938;
    VlWide<4>/*127:0*/ __Vtemp3939;
    VlWide<4>/*127:0*/ __Vtemp3940;
    VlWide<4>/*127:0*/ __Vtemp3941;
    VlWide<4>/*127:0*/ __Vtemp3942;
    VlWide<3>/*95:0*/ __Vtemp3945;
    VlWide<3>/*95:0*/ __Vtemp3946;
    VlWide<3>/*95:0*/ __Vtemp3948;
    VlWide<3>/*95:0*/ __Vtemp3949;
    VlWide<3>/*95:0*/ __Vtemp3950;
    VlWide<3>/*95:0*/ __Vtemp3951;
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
        tracep->fullBit(oldp+52,(vlSelf->top__DOT__EXU__DOT__es_valid));
        tracep->fullBit(oldp+53,(vlSelf->top__DOT__LSU_io_ms_to_ws_valid));
        tracep->fullBit(oldp+54,(vlSelf->top__DOT__EXU__DOT__es_rf_we));
        tracep->fullBit(oldp+55,(vlSelf->top__DOT__LSU_io_ms_rf_we));
        tracep->fullBit(oldp+56,(vlSelf->top__DOT__WBU__DOT__ws_rf_we));
        tracep->fullBit(oldp+57,(vlSelf->top__DOT__LSU__DOT__ms_valid));
        tracep->fullBit(oldp+58,(vlSelf->top__DOT__WBU__DOT__ws_valid));
        tracep->fullCData(oldp+59,(vlSelf->top__DOT__EXU__DOT__es_rd),5);
        tracep->fullCData(oldp+60,(vlSelf->top__DOT__LSU__DOT__ms_rf_dst),5);
        tracep->fullBit(oldp+61,(vlSelf->top__DOT__LSU__DOT__ms_allowin));
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__EXU__DOT__es_pc),64);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__EXU__DOT__store_data),64);
        tracep->fullBit(oldp+66,(vlSelf->top__DOT__EXU__DOT__st_we));
        tracep->fullCData(oldp+67,(vlSelf->top__DOT__EXU__DOT__st_wstrb),8);
        tracep->fullBit(oldp+68,(vlSelf->top__DOT__EXU__DOT__ld_we));
        tracep->fullCData(oldp+69,(vlSelf->top__DOT__EXU__DOT__load_type),3);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__LSU__DOT__ms_pc),64);
        tracep->fullQData(oldp+72,(((0U != (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                     ? vlSelf->top__DOT__LSU__DOT__rdata
                                     : vlSelf->top__DOT__LSU__DOT__ms_res)),64);
        tracep->fullBit(oldp+74,(vlSelf->top__DOT__LSU__DOT__ms_rf_we));
        tracep->fullQData(oldp+75,((((QData)((IData)(
                                                     vlSelf->top__DOT__d_cache__DOT___GEN_2408[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__d_cache__DOT___GEN_2408[0U])))),64);
        tracep->fullBit(oldp+77,(((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2253)
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
        tracep->fullBit(oldp+78,(((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                  & ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2253)
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
        tracep->fullIData(oldp+79,((IData)(vlSelf->top__DOT__LSU__DOT__maddr)),32);
        tracep->fullBit(oldp+80,(vlSelf->top__DOT__LSU_io_axi_out_arvalid));
        tracep->fullBit(oldp+81,(vlSelf->top__DOT__LSU_io_axi_out_awvalid));
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__LSU__DOT__store_data),64);
        tracep->fullCData(oldp+84,(vlSelf->top__DOT__LSU__DOT__wstrb),8);
        tracep->fullBit(oldp+85,(vlSelf->top__DOT__LSU__DOT__wen));
        tracep->fullQData(oldp+86,(vlSelf->top__DOT__WBU__DOT__ws_pc),64);
        tracep->fullIData(oldp+88,((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_2932)),32);
        tracep->fullCData(oldp+89,(vlSelf->top__DOT__i_cache_io_to_axi_arvalid),8);
        tracep->fullBit(oldp+90,(vlSelf->top__DOT__i_cache_io_to_axi_arvalid));
        tracep->fullBit(oldp+91,(vlSelf->top__DOT__i_cache_io_to_axi_rready));
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata),64);
        tracep->fullBit(oldp+94,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast));
        tracep->fullBit(oldp+95,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid));
        tracep->fullIData(oldp+96,((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2393)),32);
        tracep->fullCData(oldp+97,(vlSelf->top__DOT__d_cache_io_to_axi_arlen),8);
        tracep->fullBit(oldp+98,(vlSelf->top__DOT__d_cache_io_to_axi_arvalid));
        tracep->fullBit(oldp+99,(vlSelf->top__DOT__d_cache_io_to_axi_rready));
        tracep->fullIData(oldp+100,(vlSelf->top__DOT__d_cache_io_to_axi_awaddr),32);
        tracep->fullCData(oldp+101,(vlSelf->top__DOT__d_cache_io_to_axi_awlen),8);
        tracep->fullBit(oldp+102,(vlSelf->top__DOT__d_cache_io_to_axi_awvalid));
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__d_cache_io_to_axi_wdata),64);
        tracep->fullCData(oldp+105,(vlSelf->top__DOT__d_cache_io_to_axi_wstrb),8);
        tracep->fullBit(oldp+106,(vlSelf->top__DOT__d_cache_io_to_axi_wvalid));
        tracep->fullBit(oldp+107,(vlSelf->top__DOT__d_cache_io_to_axi_bready));
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata),64);
        tracep->fullBit(oldp+110,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rlast));
        tracep->fullBit(oldp+111,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid));
        tracep->fullBit(oldp+112,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                    ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                        ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                        : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid) 
                                           & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))
                                    : ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                       & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                           ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                           : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                              & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))))));
        tracep->fullBit(oldp+113,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid));
        tracep->fullQData(oldp+114,(vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata),64);
        tracep->fullBit(oldp+116,(vlSelf->top__DOT__axi_io_axi_out_rlast));
        tracep->fullBit(oldp+117,(vlSelf->top__DOT__axi__DOT__axi_rvalid));
        tracep->fullBit(oldp+118,(vlSelf->top__DOT__axi__DOT__axi_wready));
        tracep->fullBit(oldp+119,(vlSelf->top__DOT__axi__DOT__axi_bvalid));
        tracep->fullIData(oldp+120,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                      ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2393)
                                          : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2393)
                                              : ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_2932)
                                                  : 0U)))
                                      : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_2932)
                                          : ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2393)
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2393)
                                                  : 0U))))),32);
        tracep->fullCData(oldp+121,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullBit(oldp+122,(vlSelf->top__DOT__arbiter_io_axi_out_arvalid));
        tracep->fullBit(oldp+123,(vlSelf->top__DOT__arbiter_io_axi_out_rready));
        tracep->fullIData(oldp+124,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullCData(oldp+125,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullBit(oldp+126,(vlSelf->top__DOT__arbiter_io_axi_out_awvalid));
        tracep->fullQData(oldp+127,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullCData(oldp+129,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullBit(oldp+130,(vlSelf->top__DOT__arbiter_io_axi_out_wvalid));
        tracep->fullBit(oldp+131,(vlSelf->top__DOT__arbiter_io_axi_out_bready));
        tracep->fullIData(oldp+132,((2U == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))),32);
        tracep->fullIData(oldp+133,((0x3dU == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))),32);
        tracep->fullQData(oldp+134,(((IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)
                                      ? vlSelf->top__DOT__WBU__DOT__ws_pc
                                      : ((IData)(vlSelf->top__DOT__LSU__DOT__ms_valid)
                                          ? vlSelf->top__DOT__LSU__DOT__ms_pc
                                          : ((IData)(vlSelf->top__DOT__EXU__DOT__es_valid)
                                              ? vlSelf->top__DOT__EXU__DOT__es_pc
                                              : ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)
                                                  ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                                  : vlSelf->top__DOT__IFU__DOT__fs_pc))))),64);
        tracep->fullBit(oldp+136,(vlSelf->top__DOT__diff_step));
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__Register__DOT__Reg[0]),64);
        tracep->fullQData(oldp+139,(vlSelf->top__DOT__Register__DOT__Reg[1]),64);
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__Register__DOT__Reg[2]),64);
        tracep->fullQData(oldp+143,(vlSelf->top__DOT__Register__DOT__Reg[3]),64);
        tracep->fullQData(oldp+145,(vlSelf->top__DOT__Register__DOT__Reg[4]),64);
        tracep->fullQData(oldp+147,(vlSelf->top__DOT__Register__DOT__Reg[5]),64);
        tracep->fullQData(oldp+149,(vlSelf->top__DOT__Register__DOT__Reg[6]),64);
        tracep->fullQData(oldp+151,(vlSelf->top__DOT__Register__DOT__Reg[7]),64);
        tracep->fullQData(oldp+153,(vlSelf->top__DOT__Register__DOT__Reg[8]),64);
        tracep->fullQData(oldp+155,(vlSelf->top__DOT__Register__DOT__Reg[9]),64);
        tracep->fullQData(oldp+157,(vlSelf->top__DOT__Register__DOT__Reg[10]),64);
        tracep->fullQData(oldp+159,(vlSelf->top__DOT__Register__DOT__Reg[11]),64);
        tracep->fullQData(oldp+161,(vlSelf->top__DOT__Register__DOT__Reg[12]),64);
        tracep->fullQData(oldp+163,(vlSelf->top__DOT__Register__DOT__Reg[13]),64);
        tracep->fullQData(oldp+165,(vlSelf->top__DOT__Register__DOT__Reg[14]),64);
        tracep->fullQData(oldp+167,(vlSelf->top__DOT__Register__DOT__Reg[15]),64);
        tracep->fullQData(oldp+169,(vlSelf->top__DOT__Register__DOT__Reg[16]),64);
        tracep->fullQData(oldp+171,(vlSelf->top__DOT__Register__DOT__Reg[17]),64);
        tracep->fullQData(oldp+173,(vlSelf->top__DOT__Register__DOT__Reg[18]),64);
        tracep->fullQData(oldp+175,(vlSelf->top__DOT__Register__DOT__Reg[19]),64);
        tracep->fullQData(oldp+177,(vlSelf->top__DOT__Register__DOT__Reg[20]),64);
        tracep->fullQData(oldp+179,(vlSelf->top__DOT__Register__DOT__Reg[21]),64);
        tracep->fullQData(oldp+181,(vlSelf->top__DOT__Register__DOT__Reg[22]),64);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT__Register__DOT__Reg[23]),64);
        tracep->fullQData(oldp+185,(vlSelf->top__DOT__Register__DOT__Reg[24]),64);
        tracep->fullQData(oldp+187,(vlSelf->top__DOT__Register__DOT__Reg[25]),64);
        tracep->fullQData(oldp+189,(vlSelf->top__DOT__Register__DOT__Reg[26]),64);
        tracep->fullQData(oldp+191,(vlSelf->top__DOT__Register__DOT__Reg[27]),64);
        tracep->fullQData(oldp+193,(vlSelf->top__DOT__Register__DOT__Reg[28]),64);
        tracep->fullQData(oldp+195,(vlSelf->top__DOT__Register__DOT__Reg[29]),64);
        tracep->fullQData(oldp+197,(vlSelf->top__DOT__Register__DOT__Reg[30]),64);
        tracep->fullQData(oldp+199,(vlSelf->top__DOT__Register__DOT__Reg[31]),64);
        tracep->fullQData(oldp+201,(vlSelf->top__DOT__Register__DOT__Reg
                                    [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__Register__DOT__Reg
                                    [vlSelf->top__DOT__IDU_io_raddr2]),64);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0U]),64);
        tracep->fullQData(oldp+207,(vlSelf->top__DOT__Register__DOT__Reg
                                    [1U]),64);
        tracep->fullQData(oldp+209,(vlSelf->top__DOT__Register__DOT__Reg
                                    [2U]),64);
        tracep->fullQData(oldp+211,(vlSelf->top__DOT__Register__DOT__Reg
                                    [3U]),64);
        tracep->fullQData(oldp+213,(vlSelf->top__DOT__Register__DOT__Reg
                                    [4U]),64);
        tracep->fullQData(oldp+215,(vlSelf->top__DOT__Register__DOT__Reg
                                    [5U]),64);
        tracep->fullQData(oldp+217,(vlSelf->top__DOT__Register__DOT__Reg
                                    [6U]),64);
        tracep->fullQData(oldp+219,(vlSelf->top__DOT__Register__DOT__Reg
                                    [7U]),64);
        tracep->fullQData(oldp+221,(vlSelf->top__DOT__Register__DOT__Reg
                                    [8U]),64);
        tracep->fullQData(oldp+223,(vlSelf->top__DOT__Register__DOT__Reg
                                    [9U]),64);
        tracep->fullQData(oldp+225,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xaU]),64);
        tracep->fullQData(oldp+227,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xbU]),64);
        tracep->fullQData(oldp+229,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xcU]),64);
        tracep->fullQData(oldp+231,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xdU]),64);
        tracep->fullQData(oldp+233,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xeU]),64);
        tracep->fullQData(oldp+235,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xfU]),64);
        tracep->fullQData(oldp+237,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x10U]),64);
        tracep->fullQData(oldp+239,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x11U]),64);
        tracep->fullQData(oldp+241,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x12U]),64);
        tracep->fullQData(oldp+243,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x13U]),64);
        tracep->fullQData(oldp+245,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x14U]),64);
        tracep->fullQData(oldp+247,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x15U]),64);
        tracep->fullQData(oldp+249,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x16U]),64);
        tracep->fullQData(oldp+251,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x17U]),64);
        tracep->fullQData(oldp+253,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x18U]),64);
        tracep->fullQData(oldp+255,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x19U]),64);
        tracep->fullQData(oldp+257,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1aU]),64);
        tracep->fullQData(oldp+259,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1bU]),64);
        tracep->fullQData(oldp+261,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1cU]),64);
        tracep->fullQData(oldp+263,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1dU]),64);
        tracep->fullQData(oldp+265,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1eU]),64);
        tracep->fullQData(oldp+267,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1fU]),64);
        tracep->fullBit(oldp+269,((((IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we) 
                                    & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)) 
                                   & (0U != (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_dst)))));
        tracep->fullQData(oldp+270,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0]),64);
        tracep->fullQData(oldp+272,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[1]),64);
        tracep->fullQData(oldp+274,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[2]),64);
        tracep->fullQData(oldp+276,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[3]),64);
        tracep->fullQData(oldp+278,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[4]),64);
        tracep->fullQData(oldp+280,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[5]),64);
        tracep->fullQData(oldp+282,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[6]),64);
        tracep->fullQData(oldp+284,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[7]),64);
        tracep->fullQData(oldp+286,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[8]),64);
        tracep->fullQData(oldp+288,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[9]),64);
        tracep->fullQData(oldp+290,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[10]),64);
        tracep->fullQData(oldp+292,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[11]),64);
        tracep->fullQData(oldp+294,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[12]),64);
        tracep->fullQData(oldp+296,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[13]),64);
        tracep->fullQData(oldp+298,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[14]),64);
        tracep->fullQData(oldp+300,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[15]),64);
        tracep->fullQData(oldp+302,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[16]),64);
        tracep->fullQData(oldp+304,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[17]),64);
        tracep->fullQData(oldp+306,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[18]),64);
        tracep->fullQData(oldp+308,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[19]),64);
        tracep->fullQData(oldp+310,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[20]),64);
        tracep->fullQData(oldp+312,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[21]),64);
        tracep->fullQData(oldp+314,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[22]),64);
        tracep->fullQData(oldp+316,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[23]),64);
        tracep->fullQData(oldp+318,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[24]),64);
        tracep->fullQData(oldp+320,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[25]),64);
        tracep->fullQData(oldp+322,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[26]),64);
        tracep->fullQData(oldp+324,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[27]),64);
        tracep->fullQData(oldp+326,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[28]),64);
        tracep->fullQData(oldp+328,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[29]),64);
        tracep->fullQData(oldp+330,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[30]),64);
        tracep->fullQData(oldp+332,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[31]),64);
        tracep->fullQData(oldp+334,(vlSelf->top__DOT__IFU__DOT__br_target),64);
        tracep->fullQData(oldp+336,(vlSelf->top__DOT__IFU__DOT__fs_pc_next),64);
        tracep->fullBit(oldp+338,(vlSelf->top__DOT__IFU__DOT__cache_init));
        tracep->fullQData(oldp+339,((4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc)),64);
        tracep->fullQData(oldp+341,(((IData)(vlSelf->top__DOT__IDU_io_br_taken)
                                      ? ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)
                                          ? vlSelf->top__DOT__IDU_io_br_target
                                          : vlSelf->top__DOT__IFU__DOT__br_target)
                                      : (4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc))),64);
        tracep->fullBit(oldp+343,(((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
                                   & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
        tracep->fullBit(oldp+344,((((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
                                    >> 1U) & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
        tracep->fullCData(oldp+345,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                      ? 1U : ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                               ? (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)
                                               : 0U))),2);
        tracep->fullQData(oldp+346,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
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
        tracep->fullQData(oldp+348,(((IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2)
                                      ? (((QData)((IData)(
                                                          vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])))
                                      : vlSelf->top__DOT__IDU__DOT___rdata2_T_1)),64);
        tracep->fullCData(oldp+350,(((2U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                      ? 0U : ((0x3eU 
                                               == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))
                                               ? 1U
                                               : (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)))),2);
        tracep->fullQData(oldp+351,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data),64);
        tracep->fullIData(oldp+353,(vlSelf->top__DOT__IDU__DOT__inst),32);
        tracep->fullBit(oldp+354,(vlSelf->top__DOT__IDU__DOT__br_taken_cancel));
        tracep->fullBit(oldp+355,(vlSelf->top__DOT__IDU__DOT__src1_is_pc));
        tracep->fullIData(oldp+356,(vlSelf->top__DOT__IDU__DOT___inst_type_T_188),32);
        tracep->fullCData(oldp+357,(vlSelf->top__DOT__IDU__DOT__csr_write),2);
        tracep->fullBit(oldp+358,(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1));
        tracep->fullBit(oldp+359,(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1));
        tracep->fullBit(oldp+360,(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs1));
        tracep->fullBit(oldp+361,(vlSelf->top__DOT__IDU__DOT__src2_is_imm));
        tracep->fullCData(oldp+362,(vlSelf->top__DOT__IDU__DOT__rs2),5);
        tracep->fullBit(oldp+363,(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2));
        tracep->fullBit(oldp+364,(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs2));
        tracep->fullBit(oldp+365,(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs2));
        tracep->fullBit(oldp+366,(vlSelf->top__DOT__IDU__DOT__ds_ready_go));
        tracep->fullBit(oldp+367,(vlSelf->top__DOT__IDU__DOT__ds_allowin));
        tracep->fullQData(oldp+368,(vlSelf->top__DOT__IDU__DOT__rdata1),64);
        tracep->fullQData(oldp+370,(vlSelf->top__DOT__IDU__DOT__rdata2),64);
        tracep->fullBit(oldp+372,(vlSelf->top__DOT__IDU__DOT__br_taken));
        tracep->fullSData(oldp+373,((vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0x14U)),12);
        tracep->fullIData(oldp+374,(((0x80000U & (vlSelf->top__DOT__IDU__DOT__inst 
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
        tracep->fullIData(oldp+375,((vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+376,(((0xfe0U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 7U)))),12);
        tracep->fullSData(oldp+377,(((0x800U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x14U)) 
                                     | ((0x400U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                   << 3U)) 
                                        | ((0x3f0U 
                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0x15U)) 
                                           | (0xfU 
                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 8U)))))),12);
        tracep->fullQData(oldp+378,(vlSelf->top__DOT__IDU__DOT__imm),64);
        tracep->fullCData(oldp+380,(vlSelf->top__DOT__IDU__DOT__csr_index),2);
        tracep->fullQData(oldp+381,(((0x1073U == (0x707fU 
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
        tracep->fullQData(oldp+383,(vlSelf->top__DOT__IDU__DOT__src1),64);
        tracep->fullQData(oldp+385,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[0]),64);
        tracep->fullQData(oldp+387,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[1]),64);
        tracep->fullQData(oldp+389,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[2]),64);
        tracep->fullQData(oldp+391,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[3]),64);
        tracep->fullQData(oldp+393,(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value),64);
        tracep->fullQData(oldp+395,(vlSelf->top__DOT__EXU__DOT__src2_value),64);
        tracep->fullIData(oldp+397,(vlSelf->top__DOT__EXU__DOT__ALUop),32);
        tracep->fullQData(oldp+398,(vlSelf->top__DOT__EXU__DOT__src1_value),64);
        tracep->fullQData(oldp+400,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res),64);
        tracep->fullQData(oldp+402,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sub_res),64);
        tracep->fullQData(oldp+404,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sra_res),64);
        tracep->fullQData(oldp+406,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),64);
        VL_EXTEND_WQ(127,64, __Vtemp3937, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
        VL_SHIFTL_WWI(127,127,6, __Vtemp3938, __Vtemp3937, 
                      (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
        __Vtemp3939[0U] = __Vtemp3938[0U];
        __Vtemp3939[1U] = __Vtemp3938[1U];
        __Vtemp3939[2U] = __Vtemp3938[2U];
        __Vtemp3939[3U] = (0x7fffffffU & __Vtemp3938[3U]);
        tracep->fullWData(oldp+408,(__Vtemp3939),127);
        tracep->fullIData(oldp+412,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value), 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),32);
        tracep->fullIData(oldp+413,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__srlw_res),32);
        tracep->fullQData(oldp+414,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sllw_res),63);
        tracep->fullQData(oldp+416,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     | vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+418,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     ^ vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+420,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     & vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        VL_EXTEND_WQ(128,64, __Vtemp3940, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
        VL_EXTEND_WQ(128,64, __Vtemp3941, vlSelf->top__DOT__EXU__DOT__src2_value);
        VL_MUL_W(4, __Vtemp3942, __Vtemp3940, __Vtemp3941);
        tracep->fullQData(oldp+422,((((QData)((IData)(
                                                      __Vtemp3942[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp3942[0U])))),64);
        tracep->fullIData(oldp+424,((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT___mluw_res_T_2)),32);
        tracep->fullIData(oldp+425,((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT___divw_res_T_4)),32);
        tracep->fullIData(oldp+426,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__divuw_res),32);
        tracep->fullIData(oldp+427,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__remw_res),32);
        tracep->fullIData(oldp+428,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__remuw_res),32);
        VL_EXTENDS_WQ(65,64, __Vtemp3945, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
        __Vtemp3946[0U] = __Vtemp3945[0U];
        __Vtemp3946[1U] = __Vtemp3945[1U];
        __Vtemp3946[2U] = (1U & __Vtemp3945[2U]);
        VL_EXTENDS_WQ(65,64, __Vtemp3948, vlSelf->top__DOT__EXU__DOT__src2_value);
        __Vtemp3949[0U] = __Vtemp3948[0U];
        __Vtemp3949[1U] = __Vtemp3948[1U];
        __Vtemp3949[2U] = (1U & __Vtemp3948[2U]);
        VL_DIVS_WWW(65, __Vtemp3950, __Vtemp3946, __Vtemp3949);
        __Vtemp3951[0U] = __Vtemp3950[0U];
        __Vtemp3951[1U] = __Vtemp3950[1U];
        __Vtemp3951[2U] = (1U & __Vtemp3950[2U]);
        tracep->fullWData(oldp+429,(__Vtemp3951),65);
        tracep->fullQData(oldp+432,(VL_DIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value, vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+434,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value, vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+436,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value, vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullWData(oldp+438,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res),127);
        tracep->fullQData(oldp+442,(vlSelf->top__DOT__LSU__DOT__ms_res),64);
        tracep->fullBit(oldp+444,(vlSelf->top__DOT__LSU__DOT__ren));
        tracep->fullQData(oldp+445,(vlSelf->top__DOT__LSU__DOT__maddr),64);
        tracep->fullCData(oldp+447,(vlSelf->top__DOT__LSU__DOT__load_type),3);
        tracep->fullBit(oldp+448,(vlSelf->top__DOT__LSU__DOT__ms_ready_go));
        tracep->fullQData(oldp+449,(vlSelf->top__DOT__LSU__DOT__rdata),64);
        tracep->fullCData(oldp+451,(vlSelf->top__DOT__arbiter__DOT__state),2);
        tracep->fullWData(oldp+452,(vlSelf->top__DOT__i_cache__DOT__ram_0_0),128);
        tracep->fullWData(oldp+456,(vlSelf->top__DOT__i_cache__DOT__ram_0_1),128);
        tracep->fullWData(oldp+460,(vlSelf->top__DOT__i_cache__DOT__ram_0_2),128);
        tracep->fullWData(oldp+464,(vlSelf->top__DOT__i_cache__DOT__ram_0_3),128);
        tracep->fullWData(oldp+468,(vlSelf->top__DOT__i_cache__DOT__ram_0_4),128);
        tracep->fullWData(oldp+472,(vlSelf->top__DOT__i_cache__DOT__ram_0_5),128);
        tracep->fullWData(oldp+476,(vlSelf->top__DOT__i_cache__DOT__ram_0_6),128);
        tracep->fullWData(oldp+480,(vlSelf->top__DOT__i_cache__DOT__ram_0_7),128);
        tracep->fullWData(oldp+484,(vlSelf->top__DOT__i_cache__DOT__ram_0_8),128);
        tracep->fullWData(oldp+488,(vlSelf->top__DOT__i_cache__DOT__ram_0_9),128);
        tracep->fullWData(oldp+492,(vlSelf->top__DOT__i_cache__DOT__ram_0_10),128);
        tracep->fullWData(oldp+496,(vlSelf->top__DOT__i_cache__DOT__ram_0_11),128);
        tracep->fullWData(oldp+500,(vlSelf->top__DOT__i_cache__DOT__ram_0_12),128);
        tracep->fullWData(oldp+504,(vlSelf->top__DOT__i_cache__DOT__ram_0_13),128);
        tracep->fullWData(oldp+508,(vlSelf->top__DOT__i_cache__DOT__ram_0_14),128);
        tracep->fullWData(oldp+512,(vlSelf->top__DOT__i_cache__DOT__ram_0_15),128);
        tracep->fullWData(oldp+516,(vlSelf->top__DOT__i_cache__DOT__ram_1_0),128);
        tracep->fullWData(oldp+520,(vlSelf->top__DOT__i_cache__DOT__ram_1_1),128);
        tracep->fullWData(oldp+524,(vlSelf->top__DOT__i_cache__DOT__ram_1_2),128);
        tracep->fullWData(oldp+528,(vlSelf->top__DOT__i_cache__DOT__ram_1_3),128);
        tracep->fullWData(oldp+532,(vlSelf->top__DOT__i_cache__DOT__ram_1_4),128);
        tracep->fullWData(oldp+536,(vlSelf->top__DOT__i_cache__DOT__ram_1_5),128);
        tracep->fullWData(oldp+540,(vlSelf->top__DOT__i_cache__DOT__ram_1_6),128);
        tracep->fullWData(oldp+544,(vlSelf->top__DOT__i_cache__DOT__ram_1_7),128);
        tracep->fullWData(oldp+548,(vlSelf->top__DOT__i_cache__DOT__ram_1_8),128);
        tracep->fullWData(oldp+552,(vlSelf->top__DOT__i_cache__DOT__ram_1_9),128);
        tracep->fullWData(oldp+556,(vlSelf->top__DOT__i_cache__DOT__ram_1_10),128);
        tracep->fullWData(oldp+560,(vlSelf->top__DOT__i_cache__DOT__ram_1_11),128);
        tracep->fullWData(oldp+564,(vlSelf->top__DOT__i_cache__DOT__ram_1_12),128);
        tracep->fullWData(oldp+568,(vlSelf->top__DOT__i_cache__DOT__ram_1_13),128);
        tracep->fullWData(oldp+572,(vlSelf->top__DOT__i_cache__DOT__ram_1_14),128);
        tracep->fullWData(oldp+576,(vlSelf->top__DOT__i_cache__DOT__ram_1_15),128);
        tracep->fullWData(oldp+580,(vlSelf->top__DOT__i_cache__DOT__ram_2_0),128);
        tracep->fullWData(oldp+584,(vlSelf->top__DOT__i_cache__DOT__ram_2_1),128);
        tracep->fullWData(oldp+588,(vlSelf->top__DOT__i_cache__DOT__ram_2_2),128);
        tracep->fullWData(oldp+592,(vlSelf->top__DOT__i_cache__DOT__ram_2_3),128);
        tracep->fullWData(oldp+596,(vlSelf->top__DOT__i_cache__DOT__ram_2_4),128);
        tracep->fullWData(oldp+600,(vlSelf->top__DOT__i_cache__DOT__ram_2_5),128);
        tracep->fullWData(oldp+604,(vlSelf->top__DOT__i_cache__DOT__ram_2_6),128);
        tracep->fullWData(oldp+608,(vlSelf->top__DOT__i_cache__DOT__ram_2_7),128);
        tracep->fullWData(oldp+612,(vlSelf->top__DOT__i_cache__DOT__ram_2_8),128);
        tracep->fullWData(oldp+616,(vlSelf->top__DOT__i_cache__DOT__ram_2_9),128);
        tracep->fullWData(oldp+620,(vlSelf->top__DOT__i_cache__DOT__ram_2_10),128);
        tracep->fullWData(oldp+624,(vlSelf->top__DOT__i_cache__DOT__ram_2_11),128);
        tracep->fullWData(oldp+628,(vlSelf->top__DOT__i_cache__DOT__ram_2_12),128);
        tracep->fullWData(oldp+632,(vlSelf->top__DOT__i_cache__DOT__ram_2_13),128);
        tracep->fullWData(oldp+636,(vlSelf->top__DOT__i_cache__DOT__ram_2_14),128);
        tracep->fullWData(oldp+640,(vlSelf->top__DOT__i_cache__DOT__ram_2_15),128);
        tracep->fullWData(oldp+644,(vlSelf->top__DOT__i_cache__DOT__ram_3_0),128);
        tracep->fullWData(oldp+648,(vlSelf->top__DOT__i_cache__DOT__ram_3_1),128);
        tracep->fullWData(oldp+652,(vlSelf->top__DOT__i_cache__DOT__ram_3_2),128);
        tracep->fullWData(oldp+656,(vlSelf->top__DOT__i_cache__DOT__ram_3_3),128);
        tracep->fullWData(oldp+660,(vlSelf->top__DOT__i_cache__DOT__ram_3_4),128);
        tracep->fullWData(oldp+664,(vlSelf->top__DOT__i_cache__DOT__ram_3_5),128);
        tracep->fullWData(oldp+668,(vlSelf->top__DOT__i_cache__DOT__ram_3_6),128);
        tracep->fullWData(oldp+672,(vlSelf->top__DOT__i_cache__DOT__ram_3_7),128);
        tracep->fullWData(oldp+676,(vlSelf->top__DOT__i_cache__DOT__ram_3_8),128);
        tracep->fullWData(oldp+680,(vlSelf->top__DOT__i_cache__DOT__ram_3_9),128);
        tracep->fullWData(oldp+684,(vlSelf->top__DOT__i_cache__DOT__ram_3_10),128);
        tracep->fullWData(oldp+688,(vlSelf->top__DOT__i_cache__DOT__ram_3_11),128);
        tracep->fullWData(oldp+692,(vlSelf->top__DOT__i_cache__DOT__ram_3_12),128);
        tracep->fullWData(oldp+696,(vlSelf->top__DOT__i_cache__DOT__ram_3_13),128);
        tracep->fullWData(oldp+700,(vlSelf->top__DOT__i_cache__DOT__ram_3_14),128);
        tracep->fullWData(oldp+704,(vlSelf->top__DOT__i_cache__DOT__ram_3_15),128);
        tracep->fullIData(oldp+708,(vlSelf->top__DOT__i_cache__DOT__tag_0_0),32);
        tracep->fullIData(oldp+709,(vlSelf->top__DOT__i_cache__DOT__tag_0_1),32);
        tracep->fullIData(oldp+710,(vlSelf->top__DOT__i_cache__DOT__tag_0_2),32);
        tracep->fullIData(oldp+711,(vlSelf->top__DOT__i_cache__DOT__tag_0_3),32);
        tracep->fullIData(oldp+712,(vlSelf->top__DOT__i_cache__DOT__tag_0_4),32);
        tracep->fullIData(oldp+713,(vlSelf->top__DOT__i_cache__DOT__tag_0_5),32);
        tracep->fullIData(oldp+714,(vlSelf->top__DOT__i_cache__DOT__tag_0_6),32);
        tracep->fullIData(oldp+715,(vlSelf->top__DOT__i_cache__DOT__tag_0_7),32);
        tracep->fullIData(oldp+716,(vlSelf->top__DOT__i_cache__DOT__tag_0_8),32);
        tracep->fullIData(oldp+717,(vlSelf->top__DOT__i_cache__DOT__tag_0_9),32);
        tracep->fullIData(oldp+718,(vlSelf->top__DOT__i_cache__DOT__tag_0_10),32);
        tracep->fullIData(oldp+719,(vlSelf->top__DOT__i_cache__DOT__tag_0_11),32);
        tracep->fullIData(oldp+720,(vlSelf->top__DOT__i_cache__DOT__tag_0_12),32);
        tracep->fullIData(oldp+721,(vlSelf->top__DOT__i_cache__DOT__tag_0_13),32);
        tracep->fullIData(oldp+722,(vlSelf->top__DOT__i_cache__DOT__tag_0_14),32);
        tracep->fullIData(oldp+723,(vlSelf->top__DOT__i_cache__DOT__tag_0_15),32);
        tracep->fullIData(oldp+724,(vlSelf->top__DOT__i_cache__DOT__tag_1_0),32);
        tracep->fullIData(oldp+725,(vlSelf->top__DOT__i_cache__DOT__tag_1_1),32);
        tracep->fullIData(oldp+726,(vlSelf->top__DOT__i_cache__DOT__tag_1_2),32);
        tracep->fullIData(oldp+727,(vlSelf->top__DOT__i_cache__DOT__tag_1_3),32);
        tracep->fullIData(oldp+728,(vlSelf->top__DOT__i_cache__DOT__tag_1_4),32);
        tracep->fullIData(oldp+729,(vlSelf->top__DOT__i_cache__DOT__tag_1_5),32);
        tracep->fullIData(oldp+730,(vlSelf->top__DOT__i_cache__DOT__tag_1_6),32);
        tracep->fullIData(oldp+731,(vlSelf->top__DOT__i_cache__DOT__tag_1_7),32);
        tracep->fullIData(oldp+732,(vlSelf->top__DOT__i_cache__DOT__tag_1_8),32);
        tracep->fullIData(oldp+733,(vlSelf->top__DOT__i_cache__DOT__tag_1_9),32);
        tracep->fullIData(oldp+734,(vlSelf->top__DOT__i_cache__DOT__tag_1_10),32);
        tracep->fullIData(oldp+735,(vlSelf->top__DOT__i_cache__DOT__tag_1_11),32);
        tracep->fullIData(oldp+736,(vlSelf->top__DOT__i_cache__DOT__tag_1_12),32);
        tracep->fullIData(oldp+737,(vlSelf->top__DOT__i_cache__DOT__tag_1_13),32);
        tracep->fullIData(oldp+738,(vlSelf->top__DOT__i_cache__DOT__tag_1_14),32);
        tracep->fullIData(oldp+739,(vlSelf->top__DOT__i_cache__DOT__tag_1_15),32);
        tracep->fullIData(oldp+740,(vlSelf->top__DOT__i_cache__DOT__tag_2_0),32);
        tracep->fullIData(oldp+741,(vlSelf->top__DOT__i_cache__DOT__tag_2_1),32);
        tracep->fullIData(oldp+742,(vlSelf->top__DOT__i_cache__DOT__tag_2_2),32);
        tracep->fullIData(oldp+743,(vlSelf->top__DOT__i_cache__DOT__tag_2_3),32);
        tracep->fullIData(oldp+744,(vlSelf->top__DOT__i_cache__DOT__tag_2_4),32);
        tracep->fullIData(oldp+745,(vlSelf->top__DOT__i_cache__DOT__tag_2_5),32);
        tracep->fullIData(oldp+746,(vlSelf->top__DOT__i_cache__DOT__tag_2_6),32);
        tracep->fullIData(oldp+747,(vlSelf->top__DOT__i_cache__DOT__tag_2_7),32);
        tracep->fullIData(oldp+748,(vlSelf->top__DOT__i_cache__DOT__tag_2_8),32);
        tracep->fullIData(oldp+749,(vlSelf->top__DOT__i_cache__DOT__tag_2_9),32);
        tracep->fullIData(oldp+750,(vlSelf->top__DOT__i_cache__DOT__tag_2_10),32);
        tracep->fullIData(oldp+751,(vlSelf->top__DOT__i_cache__DOT__tag_2_11),32);
        tracep->fullIData(oldp+752,(vlSelf->top__DOT__i_cache__DOT__tag_2_12),32);
        tracep->fullIData(oldp+753,(vlSelf->top__DOT__i_cache__DOT__tag_2_13),32);
        tracep->fullIData(oldp+754,(vlSelf->top__DOT__i_cache__DOT__tag_2_14),32);
        tracep->fullIData(oldp+755,(vlSelf->top__DOT__i_cache__DOT__tag_2_15),32);
        tracep->fullIData(oldp+756,(vlSelf->top__DOT__i_cache__DOT__tag_3_0),32);
        tracep->fullIData(oldp+757,(vlSelf->top__DOT__i_cache__DOT__tag_3_1),32);
        tracep->fullIData(oldp+758,(vlSelf->top__DOT__i_cache__DOT__tag_3_2),32);
        tracep->fullIData(oldp+759,(vlSelf->top__DOT__i_cache__DOT__tag_3_3),32);
        tracep->fullIData(oldp+760,(vlSelf->top__DOT__i_cache__DOT__tag_3_4),32);
        tracep->fullIData(oldp+761,(vlSelf->top__DOT__i_cache__DOT__tag_3_5),32);
        tracep->fullIData(oldp+762,(vlSelf->top__DOT__i_cache__DOT__tag_3_6),32);
        tracep->fullIData(oldp+763,(vlSelf->top__DOT__i_cache__DOT__tag_3_7),32);
        tracep->fullIData(oldp+764,(vlSelf->top__DOT__i_cache__DOT__tag_3_8),32);
        tracep->fullIData(oldp+765,(vlSelf->top__DOT__i_cache__DOT__tag_3_9),32);
        tracep->fullIData(oldp+766,(vlSelf->top__DOT__i_cache__DOT__tag_3_10),32);
        tracep->fullIData(oldp+767,(vlSelf->top__DOT__i_cache__DOT__tag_3_11),32);
        tracep->fullIData(oldp+768,(vlSelf->top__DOT__i_cache__DOT__tag_3_12),32);
        tracep->fullIData(oldp+769,(vlSelf->top__DOT__i_cache__DOT__tag_3_13),32);
        tracep->fullIData(oldp+770,(vlSelf->top__DOT__i_cache__DOT__tag_3_14),32);
        tracep->fullIData(oldp+771,(vlSelf->top__DOT__i_cache__DOT__tag_3_15),32);
        tracep->fullBit(oldp+772,(vlSelf->top__DOT__i_cache__DOT__valid_0_0));
        tracep->fullBit(oldp+773,(vlSelf->top__DOT__i_cache__DOT__valid_0_1));
        tracep->fullBit(oldp+774,(vlSelf->top__DOT__i_cache__DOT__valid_0_2));
        tracep->fullBit(oldp+775,(vlSelf->top__DOT__i_cache__DOT__valid_0_3));
        tracep->fullBit(oldp+776,(vlSelf->top__DOT__i_cache__DOT__valid_0_4));
        tracep->fullBit(oldp+777,(vlSelf->top__DOT__i_cache__DOT__valid_0_5));
        tracep->fullBit(oldp+778,(vlSelf->top__DOT__i_cache__DOT__valid_0_6));
        tracep->fullBit(oldp+779,(vlSelf->top__DOT__i_cache__DOT__valid_0_7));
        tracep->fullBit(oldp+780,(vlSelf->top__DOT__i_cache__DOT__valid_0_8));
        tracep->fullBit(oldp+781,(vlSelf->top__DOT__i_cache__DOT__valid_0_9));
        tracep->fullBit(oldp+782,(vlSelf->top__DOT__i_cache__DOT__valid_0_10));
        tracep->fullBit(oldp+783,(vlSelf->top__DOT__i_cache__DOT__valid_0_11));
        tracep->fullBit(oldp+784,(vlSelf->top__DOT__i_cache__DOT__valid_0_12));
        tracep->fullBit(oldp+785,(vlSelf->top__DOT__i_cache__DOT__valid_0_13));
        tracep->fullBit(oldp+786,(vlSelf->top__DOT__i_cache__DOT__valid_0_14));
        tracep->fullBit(oldp+787,(vlSelf->top__DOT__i_cache__DOT__valid_0_15));
        tracep->fullBit(oldp+788,(vlSelf->top__DOT__i_cache__DOT__valid_1_0));
        tracep->fullBit(oldp+789,(vlSelf->top__DOT__i_cache__DOT__valid_1_1));
        tracep->fullBit(oldp+790,(vlSelf->top__DOT__i_cache__DOT__valid_1_2));
        tracep->fullBit(oldp+791,(vlSelf->top__DOT__i_cache__DOT__valid_1_3));
        tracep->fullBit(oldp+792,(vlSelf->top__DOT__i_cache__DOT__valid_1_4));
        tracep->fullBit(oldp+793,(vlSelf->top__DOT__i_cache__DOT__valid_1_5));
        tracep->fullBit(oldp+794,(vlSelf->top__DOT__i_cache__DOT__valid_1_6));
        tracep->fullBit(oldp+795,(vlSelf->top__DOT__i_cache__DOT__valid_1_7));
        tracep->fullBit(oldp+796,(vlSelf->top__DOT__i_cache__DOT__valid_1_8));
        tracep->fullBit(oldp+797,(vlSelf->top__DOT__i_cache__DOT__valid_1_9));
        tracep->fullBit(oldp+798,(vlSelf->top__DOT__i_cache__DOT__valid_1_10));
        tracep->fullBit(oldp+799,(vlSelf->top__DOT__i_cache__DOT__valid_1_11));
        tracep->fullBit(oldp+800,(vlSelf->top__DOT__i_cache__DOT__valid_1_12));
        tracep->fullBit(oldp+801,(vlSelf->top__DOT__i_cache__DOT__valid_1_13));
        tracep->fullBit(oldp+802,(vlSelf->top__DOT__i_cache__DOT__valid_1_14));
        tracep->fullBit(oldp+803,(vlSelf->top__DOT__i_cache__DOT__valid_1_15));
        tracep->fullBit(oldp+804,(vlSelf->top__DOT__i_cache__DOT__valid_2_0));
        tracep->fullBit(oldp+805,(vlSelf->top__DOT__i_cache__DOT__valid_2_1));
        tracep->fullBit(oldp+806,(vlSelf->top__DOT__i_cache__DOT__valid_2_2));
        tracep->fullBit(oldp+807,(vlSelf->top__DOT__i_cache__DOT__valid_2_3));
        tracep->fullBit(oldp+808,(vlSelf->top__DOT__i_cache__DOT__valid_2_4));
        tracep->fullBit(oldp+809,(vlSelf->top__DOT__i_cache__DOT__valid_2_5));
        tracep->fullBit(oldp+810,(vlSelf->top__DOT__i_cache__DOT__valid_2_6));
        tracep->fullBit(oldp+811,(vlSelf->top__DOT__i_cache__DOT__valid_2_7));
        tracep->fullBit(oldp+812,(vlSelf->top__DOT__i_cache__DOT__valid_2_8));
        tracep->fullBit(oldp+813,(vlSelf->top__DOT__i_cache__DOT__valid_2_9));
        tracep->fullBit(oldp+814,(vlSelf->top__DOT__i_cache__DOT__valid_2_10));
        tracep->fullBit(oldp+815,(vlSelf->top__DOT__i_cache__DOT__valid_2_11));
        tracep->fullBit(oldp+816,(vlSelf->top__DOT__i_cache__DOT__valid_2_12));
        tracep->fullBit(oldp+817,(vlSelf->top__DOT__i_cache__DOT__valid_2_13));
        tracep->fullBit(oldp+818,(vlSelf->top__DOT__i_cache__DOT__valid_2_14));
        tracep->fullBit(oldp+819,(vlSelf->top__DOT__i_cache__DOT__valid_2_15));
        tracep->fullBit(oldp+820,(vlSelf->top__DOT__i_cache__DOT__valid_3_0));
        tracep->fullBit(oldp+821,(vlSelf->top__DOT__i_cache__DOT__valid_3_1));
        tracep->fullBit(oldp+822,(vlSelf->top__DOT__i_cache__DOT__valid_3_2));
        tracep->fullBit(oldp+823,(vlSelf->top__DOT__i_cache__DOT__valid_3_3));
        tracep->fullBit(oldp+824,(vlSelf->top__DOT__i_cache__DOT__valid_3_4));
        tracep->fullBit(oldp+825,(vlSelf->top__DOT__i_cache__DOT__valid_3_5));
        tracep->fullBit(oldp+826,(vlSelf->top__DOT__i_cache__DOT__valid_3_6));
        tracep->fullBit(oldp+827,(vlSelf->top__DOT__i_cache__DOT__valid_3_7));
        tracep->fullBit(oldp+828,(vlSelf->top__DOT__i_cache__DOT__valid_3_8));
        tracep->fullBit(oldp+829,(vlSelf->top__DOT__i_cache__DOT__valid_3_9));
        tracep->fullBit(oldp+830,(vlSelf->top__DOT__i_cache__DOT__valid_3_10));
        tracep->fullBit(oldp+831,(vlSelf->top__DOT__i_cache__DOT__valid_3_11));
        tracep->fullBit(oldp+832,(vlSelf->top__DOT__i_cache__DOT__valid_3_12));
        tracep->fullBit(oldp+833,(vlSelf->top__DOT__i_cache__DOT__valid_3_13));
        tracep->fullBit(oldp+834,(vlSelf->top__DOT__i_cache__DOT__valid_3_14));
        tracep->fullBit(oldp+835,(vlSelf->top__DOT__i_cache__DOT__valid_3_15));
        tracep->fullIData(oldp+836,(vlSelf->top__DOT__i_cache__DOT__addr),32);
        tracep->fullQData(oldp+837,(vlSelf->top__DOT__i_cache__DOT__receive_data_0),64);
        tracep->fullQData(oldp+839,(vlSelf->top__DOT__i_cache__DOT__receive_data_1),64);
        tracep->fullCData(oldp+841,(vlSelf->top__DOT__i_cache__DOT__receive_num),3);
        tracep->fullCData(oldp+842,(vlSelf->top__DOT__i_cache__DOT__quene_0),8);
        tracep->fullCData(oldp+843,(vlSelf->top__DOT__i_cache__DOT__quene_1),8);
        tracep->fullCData(oldp+844,(vlSelf->top__DOT__i_cache__DOT__quene_2),8);
        tracep->fullCData(oldp+845,(vlSelf->top__DOT__i_cache__DOT__quene_3),8);
        tracep->fullCData(oldp+846,(vlSelf->top__DOT__i_cache__DOT__quene_4),8);
        tracep->fullCData(oldp+847,(vlSelf->top__DOT__i_cache__DOT__quene_5),8);
        tracep->fullCData(oldp+848,(vlSelf->top__DOT__i_cache__DOT__quene_6),8);
        tracep->fullCData(oldp+849,(vlSelf->top__DOT__i_cache__DOT__quene_7),8);
        tracep->fullCData(oldp+850,(vlSelf->top__DOT__i_cache__DOT__quene_8),8);
        tracep->fullCData(oldp+851,(vlSelf->top__DOT__i_cache__DOT__quene_9),8);
        tracep->fullCData(oldp+852,(vlSelf->top__DOT__i_cache__DOT__quene_10),8);
        tracep->fullCData(oldp+853,(vlSelf->top__DOT__i_cache__DOT__quene_11),8);
        tracep->fullCData(oldp+854,(vlSelf->top__DOT__i_cache__DOT__quene_12),8);
        tracep->fullCData(oldp+855,(vlSelf->top__DOT__i_cache__DOT__quene_13),8);
        tracep->fullCData(oldp+856,(vlSelf->top__DOT__i_cache__DOT__quene_14),8);
        tracep->fullCData(oldp+857,(vlSelf->top__DOT__i_cache__DOT__quene_15),8);
        tracep->fullCData(oldp+858,((0xfU & vlSelf->top__DOT__i_cache__DOT__addr)),4);
        tracep->fullCData(oldp+859,((0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                             >> 4U))),4);
        tracep->fullIData(oldp+860,((vlSelf->top__DOT__i_cache__DOT__addr 
                                     >> 8U)),24);
        tracep->fullCData(oldp+861,((0x78U & (vlSelf->top__DOT__i_cache__DOT__addr 
                                              << 3U))),7);
        tracep->fullBit(oldp+862,(vlSelf->top__DOT__i_cache__DOT__way0_hit));
        tracep->fullBit(oldp+863,(vlSelf->top__DOT__i_cache__DOT__way1_hit));
        tracep->fullBit(oldp+864,(vlSelf->top__DOT__i_cache__DOT__way2_hit));
        tracep->fullBit(oldp+865,(vlSelf->top__DOT__i_cache__DOT__way3_hit));
        tracep->fullCData(oldp+866,(vlSelf->top__DOT__i_cache__DOT__unuse_way),3);
        tracep->fullCData(oldp+867,(vlSelf->top__DOT__i_cache__DOT__state),3);
        tracep->fullWData(oldp+868,(vlSelf->top__DOT__d_cache__DOT__ram_0_0),128);
        tracep->fullWData(oldp+872,(vlSelf->top__DOT__d_cache__DOT__ram_0_1),128);
        tracep->fullWData(oldp+876,(vlSelf->top__DOT__d_cache__DOT__ram_0_2),128);
        tracep->fullWData(oldp+880,(vlSelf->top__DOT__d_cache__DOT__ram_0_3),128);
        tracep->fullWData(oldp+884,(vlSelf->top__DOT__d_cache__DOT__ram_0_4),128);
        tracep->fullWData(oldp+888,(vlSelf->top__DOT__d_cache__DOT__ram_0_5),128);
        tracep->fullWData(oldp+892,(vlSelf->top__DOT__d_cache__DOT__ram_0_6),128);
        tracep->fullWData(oldp+896,(vlSelf->top__DOT__d_cache__DOT__ram_0_7),128);
        tracep->fullWData(oldp+900,(vlSelf->top__DOT__d_cache__DOT__ram_0_8),128);
        tracep->fullWData(oldp+904,(vlSelf->top__DOT__d_cache__DOT__ram_0_9),128);
        tracep->fullWData(oldp+908,(vlSelf->top__DOT__d_cache__DOT__ram_0_10),128);
        tracep->fullWData(oldp+912,(vlSelf->top__DOT__d_cache__DOT__ram_0_11),128);
        tracep->fullWData(oldp+916,(vlSelf->top__DOT__d_cache__DOT__ram_0_12),128);
        tracep->fullWData(oldp+920,(vlSelf->top__DOT__d_cache__DOT__ram_0_13),128);
        tracep->fullWData(oldp+924,(vlSelf->top__DOT__d_cache__DOT__ram_0_14),128);
        tracep->fullWData(oldp+928,(vlSelf->top__DOT__d_cache__DOT__ram_0_15),128);
        tracep->fullWData(oldp+932,(vlSelf->top__DOT__d_cache__DOT__ram_1_0),128);
        tracep->fullWData(oldp+936,(vlSelf->top__DOT__d_cache__DOT__ram_1_1),128);
        tracep->fullWData(oldp+940,(vlSelf->top__DOT__d_cache__DOT__ram_1_2),128);
        tracep->fullWData(oldp+944,(vlSelf->top__DOT__d_cache__DOT__ram_1_3),128);
        tracep->fullWData(oldp+948,(vlSelf->top__DOT__d_cache__DOT__ram_1_4),128);
        tracep->fullWData(oldp+952,(vlSelf->top__DOT__d_cache__DOT__ram_1_5),128);
        tracep->fullWData(oldp+956,(vlSelf->top__DOT__d_cache__DOT__ram_1_6),128);
        tracep->fullWData(oldp+960,(vlSelf->top__DOT__d_cache__DOT__ram_1_7),128);
        tracep->fullWData(oldp+964,(vlSelf->top__DOT__d_cache__DOT__ram_1_8),128);
        tracep->fullWData(oldp+968,(vlSelf->top__DOT__d_cache__DOT__ram_1_9),128);
        tracep->fullWData(oldp+972,(vlSelf->top__DOT__d_cache__DOT__ram_1_10),128);
        tracep->fullWData(oldp+976,(vlSelf->top__DOT__d_cache__DOT__ram_1_11),128);
        tracep->fullWData(oldp+980,(vlSelf->top__DOT__d_cache__DOT__ram_1_12),128);
        tracep->fullWData(oldp+984,(vlSelf->top__DOT__d_cache__DOT__ram_1_13),128);
        tracep->fullWData(oldp+988,(vlSelf->top__DOT__d_cache__DOT__ram_1_14),128);
        tracep->fullWData(oldp+992,(vlSelf->top__DOT__d_cache__DOT__ram_1_15),128);
        tracep->fullIData(oldp+996,(vlSelf->top__DOT__d_cache__DOT__tag_0_0),32);
        tracep->fullIData(oldp+997,(vlSelf->top__DOT__d_cache__DOT__tag_0_1),32);
        tracep->fullIData(oldp+998,(vlSelf->top__DOT__d_cache__DOT__tag_0_2),32);
        tracep->fullIData(oldp+999,(vlSelf->top__DOT__d_cache__DOT__tag_0_3),32);
        tracep->fullIData(oldp+1000,(vlSelf->top__DOT__d_cache__DOT__tag_0_4),32);
        tracep->fullIData(oldp+1001,(vlSelf->top__DOT__d_cache__DOT__tag_0_5),32);
        tracep->fullIData(oldp+1002,(vlSelf->top__DOT__d_cache__DOT__tag_0_6),32);
        tracep->fullIData(oldp+1003,(vlSelf->top__DOT__d_cache__DOT__tag_0_7),32);
        tracep->fullIData(oldp+1004,(vlSelf->top__DOT__d_cache__DOT__tag_0_8),32);
        tracep->fullIData(oldp+1005,(vlSelf->top__DOT__d_cache__DOT__tag_0_9),32);
        tracep->fullIData(oldp+1006,(vlSelf->top__DOT__d_cache__DOT__tag_0_10),32);
        tracep->fullIData(oldp+1007,(vlSelf->top__DOT__d_cache__DOT__tag_0_11),32);
        tracep->fullIData(oldp+1008,(vlSelf->top__DOT__d_cache__DOT__tag_0_12),32);
        tracep->fullIData(oldp+1009,(vlSelf->top__DOT__d_cache__DOT__tag_0_13),32);
        tracep->fullIData(oldp+1010,(vlSelf->top__DOT__d_cache__DOT__tag_0_14),32);
        tracep->fullIData(oldp+1011,(vlSelf->top__DOT__d_cache__DOT__tag_0_15),32);
        tracep->fullIData(oldp+1012,(vlSelf->top__DOT__d_cache__DOT__tag_1_0),32);
        tracep->fullIData(oldp+1013,(vlSelf->top__DOT__d_cache__DOT__tag_1_1),32);
        tracep->fullIData(oldp+1014,(vlSelf->top__DOT__d_cache__DOT__tag_1_2),32);
        tracep->fullIData(oldp+1015,(vlSelf->top__DOT__d_cache__DOT__tag_1_3),32);
        tracep->fullIData(oldp+1016,(vlSelf->top__DOT__d_cache__DOT__tag_1_4),32);
        tracep->fullIData(oldp+1017,(vlSelf->top__DOT__d_cache__DOT__tag_1_5),32);
        tracep->fullIData(oldp+1018,(vlSelf->top__DOT__d_cache__DOT__tag_1_6),32);
        tracep->fullIData(oldp+1019,(vlSelf->top__DOT__d_cache__DOT__tag_1_7),32);
        tracep->fullIData(oldp+1020,(vlSelf->top__DOT__d_cache__DOT__tag_1_8),32);
        tracep->fullIData(oldp+1021,(vlSelf->top__DOT__d_cache__DOT__tag_1_9),32);
        tracep->fullIData(oldp+1022,(vlSelf->top__DOT__d_cache__DOT__tag_1_10),32);
        tracep->fullIData(oldp+1023,(vlSelf->top__DOT__d_cache__DOT__tag_1_11),32);
        tracep->fullIData(oldp+1024,(vlSelf->top__DOT__d_cache__DOT__tag_1_12),32);
        tracep->fullIData(oldp+1025,(vlSelf->top__DOT__d_cache__DOT__tag_1_13),32);
        tracep->fullIData(oldp+1026,(vlSelf->top__DOT__d_cache__DOT__tag_1_14),32);
        tracep->fullIData(oldp+1027,(vlSelf->top__DOT__d_cache__DOT__tag_1_15),32);
        tracep->fullBit(oldp+1028,(vlSelf->top__DOT__d_cache__DOT__valid_0_0));
        tracep->fullBit(oldp+1029,(vlSelf->top__DOT__d_cache__DOT__valid_0_1));
        tracep->fullBit(oldp+1030,(vlSelf->top__DOT__d_cache__DOT__valid_0_2));
        tracep->fullBit(oldp+1031,(vlSelf->top__DOT__d_cache__DOT__valid_0_3));
        tracep->fullBit(oldp+1032,(vlSelf->top__DOT__d_cache__DOT__valid_0_4));
        tracep->fullBit(oldp+1033,(vlSelf->top__DOT__d_cache__DOT__valid_0_5));
        tracep->fullBit(oldp+1034,(vlSelf->top__DOT__d_cache__DOT__valid_0_6));
        tracep->fullBit(oldp+1035,(vlSelf->top__DOT__d_cache__DOT__valid_0_7));
        tracep->fullBit(oldp+1036,(vlSelf->top__DOT__d_cache__DOT__valid_0_8));
        tracep->fullBit(oldp+1037,(vlSelf->top__DOT__d_cache__DOT__valid_0_9));
        tracep->fullBit(oldp+1038,(vlSelf->top__DOT__d_cache__DOT__valid_0_10));
        tracep->fullBit(oldp+1039,(vlSelf->top__DOT__d_cache__DOT__valid_0_11));
        tracep->fullBit(oldp+1040,(vlSelf->top__DOT__d_cache__DOT__valid_0_12));
        tracep->fullBit(oldp+1041,(vlSelf->top__DOT__d_cache__DOT__valid_0_13));
        tracep->fullBit(oldp+1042,(vlSelf->top__DOT__d_cache__DOT__valid_0_14));
        tracep->fullBit(oldp+1043,(vlSelf->top__DOT__d_cache__DOT__valid_0_15));
        tracep->fullBit(oldp+1044,(vlSelf->top__DOT__d_cache__DOT__valid_1_0));
        tracep->fullBit(oldp+1045,(vlSelf->top__DOT__d_cache__DOT__valid_1_1));
        tracep->fullBit(oldp+1046,(vlSelf->top__DOT__d_cache__DOT__valid_1_2));
        tracep->fullBit(oldp+1047,(vlSelf->top__DOT__d_cache__DOT__valid_1_3));
        tracep->fullBit(oldp+1048,(vlSelf->top__DOT__d_cache__DOT__valid_1_4));
        tracep->fullBit(oldp+1049,(vlSelf->top__DOT__d_cache__DOT__valid_1_5));
        tracep->fullBit(oldp+1050,(vlSelf->top__DOT__d_cache__DOT__valid_1_6));
        tracep->fullBit(oldp+1051,(vlSelf->top__DOT__d_cache__DOT__valid_1_7));
        tracep->fullBit(oldp+1052,(vlSelf->top__DOT__d_cache__DOT__valid_1_8));
        tracep->fullBit(oldp+1053,(vlSelf->top__DOT__d_cache__DOT__valid_1_9));
        tracep->fullBit(oldp+1054,(vlSelf->top__DOT__d_cache__DOT__valid_1_10));
        tracep->fullBit(oldp+1055,(vlSelf->top__DOT__d_cache__DOT__valid_1_11));
        tracep->fullBit(oldp+1056,(vlSelf->top__DOT__d_cache__DOT__valid_1_12));
        tracep->fullBit(oldp+1057,(vlSelf->top__DOT__d_cache__DOT__valid_1_13));
        tracep->fullBit(oldp+1058,(vlSelf->top__DOT__d_cache__DOT__valid_1_14));
        tracep->fullBit(oldp+1059,(vlSelf->top__DOT__d_cache__DOT__valid_1_15));
        tracep->fullBit(oldp+1060,(vlSelf->top__DOT__d_cache__DOT__dirty_0_0));
        tracep->fullBit(oldp+1061,(vlSelf->top__DOT__d_cache__DOT__dirty_0_1));
        tracep->fullBit(oldp+1062,(vlSelf->top__DOT__d_cache__DOT__dirty_0_2));
        tracep->fullBit(oldp+1063,(vlSelf->top__DOT__d_cache__DOT__dirty_0_3));
        tracep->fullBit(oldp+1064,(vlSelf->top__DOT__d_cache__DOT__dirty_0_4));
        tracep->fullBit(oldp+1065,(vlSelf->top__DOT__d_cache__DOT__dirty_0_5));
        tracep->fullBit(oldp+1066,(vlSelf->top__DOT__d_cache__DOT__dirty_0_6));
        tracep->fullBit(oldp+1067,(vlSelf->top__DOT__d_cache__DOT__dirty_0_7));
        tracep->fullBit(oldp+1068,(vlSelf->top__DOT__d_cache__DOT__dirty_0_8));
        tracep->fullBit(oldp+1069,(vlSelf->top__DOT__d_cache__DOT__dirty_0_9));
        tracep->fullBit(oldp+1070,(vlSelf->top__DOT__d_cache__DOT__dirty_0_10));
        tracep->fullBit(oldp+1071,(vlSelf->top__DOT__d_cache__DOT__dirty_0_11));
        tracep->fullBit(oldp+1072,(vlSelf->top__DOT__d_cache__DOT__dirty_0_12));
        tracep->fullBit(oldp+1073,(vlSelf->top__DOT__d_cache__DOT__dirty_0_13));
        tracep->fullBit(oldp+1074,(vlSelf->top__DOT__d_cache__DOT__dirty_0_14));
        tracep->fullBit(oldp+1075,(vlSelf->top__DOT__d_cache__DOT__dirty_0_15));
        tracep->fullBit(oldp+1076,(vlSelf->top__DOT__d_cache__DOT__dirty_1_0));
        tracep->fullBit(oldp+1077,(vlSelf->top__DOT__d_cache__DOT__dirty_1_1));
        tracep->fullBit(oldp+1078,(vlSelf->top__DOT__d_cache__DOT__dirty_1_2));
        tracep->fullBit(oldp+1079,(vlSelf->top__DOT__d_cache__DOT__dirty_1_3));
        tracep->fullBit(oldp+1080,(vlSelf->top__DOT__d_cache__DOT__dirty_1_4));
        tracep->fullBit(oldp+1081,(vlSelf->top__DOT__d_cache__DOT__dirty_1_5));
        tracep->fullBit(oldp+1082,(vlSelf->top__DOT__d_cache__DOT__dirty_1_6));
        tracep->fullBit(oldp+1083,(vlSelf->top__DOT__d_cache__DOT__dirty_1_7));
        tracep->fullBit(oldp+1084,(vlSelf->top__DOT__d_cache__DOT__dirty_1_8));
        tracep->fullBit(oldp+1085,(vlSelf->top__DOT__d_cache__DOT__dirty_1_9));
        tracep->fullBit(oldp+1086,(vlSelf->top__DOT__d_cache__DOT__dirty_1_10));
        tracep->fullBit(oldp+1087,(vlSelf->top__DOT__d_cache__DOT__dirty_1_11));
        tracep->fullBit(oldp+1088,(vlSelf->top__DOT__d_cache__DOT__dirty_1_12));
        tracep->fullBit(oldp+1089,(vlSelf->top__DOT__d_cache__DOT__dirty_1_13));
        tracep->fullBit(oldp+1090,(vlSelf->top__DOT__d_cache__DOT__dirty_1_14));
        tracep->fullBit(oldp+1091,(vlSelf->top__DOT__d_cache__DOT__dirty_1_15));
        tracep->fullWData(oldp+1092,(vlSelf->top__DOT__d_cache__DOT__write_back_data),128);
        tracep->fullIData(oldp+1096,(vlSelf->top__DOT__d_cache__DOT__write_back_addr),32);
        tracep->fullQData(oldp+1097,(vlSelf->top__DOT__d_cache__DOT__receive_data_0),64);
        tracep->fullQData(oldp+1099,(vlSelf->top__DOT__d_cache__DOT__receive_data_1),64);
        tracep->fullCData(oldp+1101,(vlSelf->top__DOT__d_cache__DOT__receive_num),3);
        tracep->fullCData(oldp+1102,(vlSelf->top__DOT__d_cache__DOT__quene_0),2);
        tracep->fullCData(oldp+1103,(vlSelf->top__DOT__d_cache__DOT__quene_1),2);
        tracep->fullCData(oldp+1104,(vlSelf->top__DOT__d_cache__DOT__quene_2),2);
        tracep->fullCData(oldp+1105,(vlSelf->top__DOT__d_cache__DOT__quene_3),2);
        tracep->fullCData(oldp+1106,(vlSelf->top__DOT__d_cache__DOT__quene_4),2);
        tracep->fullCData(oldp+1107,(vlSelf->top__DOT__d_cache__DOT__quene_5),2);
        tracep->fullCData(oldp+1108,(vlSelf->top__DOT__d_cache__DOT__quene_6),2);
        tracep->fullCData(oldp+1109,(vlSelf->top__DOT__d_cache__DOT__quene_7),2);
        tracep->fullCData(oldp+1110,(vlSelf->top__DOT__d_cache__DOT__quene_8),2);
        tracep->fullCData(oldp+1111,(vlSelf->top__DOT__d_cache__DOT__quene_9),2);
        tracep->fullCData(oldp+1112,(vlSelf->top__DOT__d_cache__DOT__quene_10),2);
        tracep->fullCData(oldp+1113,(vlSelf->top__DOT__d_cache__DOT__quene_11),2);
        tracep->fullCData(oldp+1114,(vlSelf->top__DOT__d_cache__DOT__quene_12),2);
        tracep->fullCData(oldp+1115,(vlSelf->top__DOT__d_cache__DOT__quene_13),2);
        tracep->fullCData(oldp+1116,(vlSelf->top__DOT__d_cache__DOT__quene_14),2);
        tracep->fullCData(oldp+1117,(vlSelf->top__DOT__d_cache__DOT__quene_15),2);
        tracep->fullCData(oldp+1118,((0xfU & (IData)(vlSelf->top__DOT__LSU__DOT__maddr))),4);
        tracep->fullCData(oldp+1119,((0xfU & (IData)(
                                                     (vlSelf->top__DOT__LSU__DOT__maddr 
                                                      >> 4U)))),4);
        tracep->fullIData(oldp+1120,((0xffffffU & (IData)(
                                                          (vlSelf->top__DOT__LSU__DOT__maddr 
                                                           >> 8U)))),24);
        tracep->fullCData(oldp+1121,((0x78U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                               << 3U))),7);
        tracep->fullQData(oldp+1122,(vlSelf->top__DOT__d_cache__DOT__wmask),64);
        tracep->fullBit(oldp+1124,(vlSelf->top__DOT__d_cache__DOT__way0_hit));
        tracep->fullBit(oldp+1125,(vlSelf->top__DOT__d_cache__DOT__way1_hit));
        tracep->fullCData(oldp+1126,(vlSelf->top__DOT__d_cache__DOT__unuse_way),2);
        tracep->fullCData(oldp+1127,(vlSelf->top__DOT__d_cache__DOT__state),4);
        tracep->fullQData(oldp+1128,(vlSelf->top__DOT__axi__DOT__araddr),64);
        tracep->fullQData(oldp+1130,(vlSelf->top__DOT__axi__DOT__awaddr),64);
        tracep->fullCData(oldp+1132,(vlSelf->top__DOT__axi__DOT__arlen),8);
        tracep->fullCData(oldp+1133,(vlSelf->top__DOT__axi__DOT__awlen),8);
        tracep->fullCData(oldp+1134,(vlSelf->top__DOT__axi__DOT__state),3);
        tracep->fullBit(oldp+1135,(vlSelf->clock));
        tracep->fullBit(oldp+1136,(vlSelf->reset));
        tracep->fullIData(oldp+1137,(vlSelf->io_inst),32);
        tracep->fullQData(oldp+1138,(vlSelf->io_pc),64);
        tracep->fullBit(oldp+1140,(vlSelf->io_step));
        tracep->fullBit(oldp+1141,(1U));
        tracep->fullCData(oldp+1142,(0U),5);
        tracep->fullCData(oldp+1143,(1U),5);
        tracep->fullCData(oldp+1144,(2U),5);
        tracep->fullCData(oldp+1145,(3U),5);
        tracep->fullCData(oldp+1146,(4U),5);
        tracep->fullCData(oldp+1147,(5U),5);
        tracep->fullCData(oldp+1148,(6U),5);
        tracep->fullCData(oldp+1149,(7U),5);
        tracep->fullCData(oldp+1150,(8U),5);
        tracep->fullCData(oldp+1151,(9U),5);
        tracep->fullCData(oldp+1152,(0xaU),5);
        tracep->fullCData(oldp+1153,(0xbU),5);
        tracep->fullCData(oldp+1154,(0xcU),5);
        tracep->fullCData(oldp+1155,(0xdU),5);
        tracep->fullCData(oldp+1156,(0xeU),5);
        tracep->fullCData(oldp+1157,(0xfU),5);
        tracep->fullCData(oldp+1158,(0x10U),5);
        tracep->fullCData(oldp+1159,(0x11U),5);
        tracep->fullCData(oldp+1160,(0x12U),5);
        tracep->fullCData(oldp+1161,(0x13U),5);
        tracep->fullCData(oldp+1162,(0x14U),5);
        tracep->fullCData(oldp+1163,(0x15U),5);
        tracep->fullCData(oldp+1164,(0x16U),5);
        tracep->fullCData(oldp+1165,(0x17U),5);
        tracep->fullCData(oldp+1166,(0x18U),5);
        tracep->fullCData(oldp+1167,(0x19U),5);
        tracep->fullCData(oldp+1168,(0x1aU),5);
        tracep->fullCData(oldp+1169,(0x1bU),5);
        tracep->fullCData(oldp+1170,(0x1cU),5);
        tracep->fullCData(oldp+1171,(0x1dU),5);
        tracep->fullCData(oldp+1172,(0x1eU),5);
        tracep->fullCData(oldp+1173,(0x1fU),5);
        tracep->fullCData(oldp+1174,(3U),2);
    }
}
